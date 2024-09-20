void __fastcall EventInfoTipsArchiveListViewManager___ctor(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_4A5D132 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__TypeInfo);
    byte_4A5D132 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
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


void __fastcall EventInfoTipsArchiveListViewManager__CreateList(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t tabKind,
        EventInfoTipsArchiveListViewItem_o *item,
        System_Action_o *scrollAction,
        const MethodInfo *method)
{
  __int64 v9; // x20
  void *mainInfo; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_int__o *IdList; // x0
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_int__o *v19; // x22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s10
  float z; // s9
  int32_t v24; // w24
  __int64 v25; // x26
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  struct EventInfoTipsArchiveListViewManager_ViewObjectInfo_array *viewObjectInfoList; // x25
  System_Predicate_object__o *v28; // x27
  Il2CppObject *object; // x0
  Il2CppObject *monitor; // x25
  Il2CppObject *v31; // x27
  int32_t v32; // w2
  int32_t v33; // w3
  int v34; // w8
  EventInfoTipsArchiveListViewObject_o *v35; // x25
  bool v36; // w26
  const MethodInfo *v37; // x5
  float v38; // s0
  const MethodInfo *v39; // x1
  int32_t Size; // w0
  int v41; // w8
  int v42; // w26
  float v43; // s10
  int32_t layer; // w0
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x2
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  __int64 v52; // x8
  const MethodInfo *v53; // x1
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v55; // x1
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x21
  Il2CppObject *v58; // x23
  EventDelegate_Callback_o *v59; // x22
  struct UIScrollBar_o *v60; // x8
  System_Collections_Generic_List_EventDelegate__o *v61; // x21
  EventDelegate_Callback_o *v62; // x22
  struct UIScrollBar_o *v63; // x8
  System_Collections_Generic_List_EventDelegate__o *v64; // x19
  EventDelegate_Callback_o *v65; // x21
  int32_t DispLastId; // [xsp+Ch] [xbp-74h]
  System_Nullable_Vector3__o v67; // 0:x3.16
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5D129 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___);
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_EventInfoTipsArchiveListViewManager_OnChangeScrollBarValue__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo);
    sub_1B885B0(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_0__CreateList_b__0__);
    sub_1B885B0(&EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_TypeInfo);
    sub_1B885B0(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_1__CreateList_b__1__);
    sub_1B885B0(&EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_TypeInfo);
    sub_1B885B0(&Method_UIScrollView_OnScrollBar__);
    byte_4A5D129 = 1;
  }
  v9 = sub_1B887FC(EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_45;
  *(_QWORD *)(v9 + 16) = scrollAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)scrollAction, v12, v13);
  EventInfoTipsArchiveListViewManager__DestroyList(this, v14);
  this->fields.mainInfo = item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)item, v15, v16);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_45;
  IdList = EventInfoTipsArchiveListViewItem__GetIdList((EventInfoTipsArchiveListViewItem_o *)mainInfo, tabKind, 0LL);
  if ( IdList && this->fields.viewObjectInfoList )
  {
    v19 = IdList;
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    DispLastId = EventInfoTipsArchiveListViewManager__GetDispLastId(this, v19, this->fields.mainInfo, v18);
    if ( v19->fields._size >= 1 )
    {
      v24 = 0;
      do
      {
        v25 = sub_1B887FC(EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v25, 0LL);
        mainInfo = (void *)System_Collections_Generic_List_int___get_Item(
                             v19,
                             v24,
                             (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v25 )
          goto LABEL_45;
        v11 = (unsigned int)mainInfo;
        *(_DWORD *)(v25 + 16) = (_DWORD)mainInfo;
        if ( !item )
          goto LABEL_45;
        StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, (int32_t)mainInfo, 0LL);
        if ( StateData )
        {
          if ( StateData->fields.index >= 1 )
          {
            viewObjectInfoList = this->fields.viewObjectInfoList;
            v28 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo);
            System_Predicate_object____ctor(
              v28,
              (Il2CppObject *)v25,
              Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_1__CreateList_b__1__,
              0LL);
            object = System_Array__Find_object_(
                       (System_Object_array *)viewObjectInfoList,
                       (System_Predicate_T__o *)v28,
                       (const MethodInfo_2F78480 *)Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___);
            if ( object )
            {
              monitor = (Il2CppObject *)object[1].monitor;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v31 = UnityEngine_Object__Instantiate_object_(
                      monitor,
                      (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
              mainInfo = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v31, 0LL, 0LL);
              if ( ((unsigned __int8)mainInfo & 1) == 0 )
              {
                if ( !v31 )
                  goto LABEL_45;
                mainInfo = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v31,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewObject___);
                if ( !mainInfo )
                  goto LABEL_45;
                v34 = *(_DWORD *)(v25 + 16);
                v35 = (EventInfoTipsArchiveListViewObject_o *)mainInfo;
                *((_DWORD *)mainInfo + 10) = v34;
                *((_QWORD *)mainInfo + 6) = item;
                v36 = v34 == DispLastId;
                sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)mainInfo + 48), (int32_t)item, v32, v33);
                *(_QWORD *)&v67.fields.hasValue = 0LL;
                *(_QWORD *)&v67.fields.value.fields.y = 0LL;
                v35->fields.isLast = v36;
                EventInfoTipsArchiveListViewObject__Init(v35, 2, 0LL, v38, v67, v37);
                Size = EventInfoTipsArchiveListViewObject__GetSize(v35, v39);
                v41 = Size >= 0 ? Size : Size + 1;
                v42 = v41 >> 1;
                v43 = y - (float)(v41 >> 1);
                GameObjectExtensions__SetParent_33729948((UnityEngine_GameObject_o *)v31, this->fields.listParent, 0LL);
                v68.fields.x = x;
                v68.fields.y = v43;
                v68.fields.z = z;
                GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v31, v68, 0LL);
                GameObjectExtensions__ResetLocalRotation((UnityEngine_GameObject_o *)v31, 0LL);
                GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v31, 0LL);
                mainInfo = this->fields.listParent;
                if ( !mainInfo )
                  goto LABEL_45;
                layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)mainInfo, 0LL);
                UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v31, layer, 0LL);
                EventInfoTipsArchiveListViewObject__SetBaseTransform(v35, v45);
                EventInfoTipsArchiveListViewObject__SetManager(v35, this, v46);
                mainInfo = this->fields.objectList;
                if ( !mainInfo )
                  goto LABEL_45;
                v49 = *((_QWORD *)mainInfo + 2);
                v50 = Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Add__;
                ++*((_DWORD *)mainInfo + 7);
                if ( !v49 )
                  goto LABEL_45;
                v51 = *((int *)mainInfo + 6);
                if ( (unsigned int)v51 >= *(_DWORD *)(v49 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)mainInfo,
                    (Il2CppObject *)v35,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                }
                else
                {
                  v52 = v49 + 8 * v51;
                  *((_DWORD *)mainInfo + 6) = v51 + 1;
                  *(_QWORD *)(v52 + 32) = v35;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v52 + 32), (int32_t)v35, v47, v48);
                }
                y = v43 - (float)(EventInfoTipsArchiveListViewObject__PartitionHeight(v35, v53) + v42);
              }
            }
          }
        }
      }
      while ( ++v24 < v19->fields._size );
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
  EventInfoTipsArchiveListViewManager__SetupTipsArchiveReadEndValue(this, v55);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_45;
  onChange = scrollBar->fields.onChange;
  v58 = (Il2CppObject *)this->fields.scrollView;
  v59 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v59, v58, Method_UIScrollView_OnScrollBar__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  mainInfo = EventDelegate__Add(onChange, v59, 0LL);
  v60 = this->fields.scrollBar;
  if ( !v60
    || (v61 = v60->fields.onChange,
        v62 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v62,
          (Il2CppObject *)this,
          Method_EventInfoTipsArchiveListViewManager_OnChangeScrollBarValue__,
          0LL),
        mainInfo = EventDelegate__Add(v61, v62, 0LL),
        (v63 = this->fields.scrollBar) == 0LL) )
  {
LABEL_45:
    sub_1B8880C(mainInfo, v11);
  }
  v64 = v63->fields.onChange;
  v65 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v65,
    (Il2CppObject *)v9,
    Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_0__CreateList_b__0__,
    0LL);
  EventDelegate__Add(v64, v65, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager__DestroyList(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5D12C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D12C = 1;
  }
  memset(&v11, 0, sizeof(v11));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__) )
  {
    if ( !v11.fields._current )
      sub_1B8880C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v11.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
  v6 = this->fields.objectList;
  if ( !v6 )
    goto LABEL_20;
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0LL);
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
    sub_1B8880C(objectList, method);
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
  int32_t v7; // w23
  int32_t v8; // w22
  __int64 v9; // x24
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  System_Object_array *viewObjectInfoList; // x25
  System_Predicate_object__o *v12; // x26

  v5 = idList;
  v6 = this;
  if ( (byte_4A5D12B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo);
    sub_1B885B0(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass23_0__GetDispLastId_b__0__);
    this = (EventInfoTipsArchiveListViewManager_o *)sub_1B885B0(&EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_TypeInfo);
    byte_4A5D12B = 1;
  }
  if ( !v5 )
    goto LABEL_16;
  if ( v5->fields._size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = sub_1B887FC(EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v9, 0LL);
      this = (EventInfoTipsArchiveListViewManager_o *)System_Collections_Generic_List_int___get_Item(
                                                        v5,
                                                        v7,
                                                        (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v9 )
        break;
      idList = (System_Collections_Generic_List_int__o *)(unsigned int)this;
      *(_DWORD *)(v9 + 16) = (_DWORD)this;
      if ( !item )
        break;
      StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, (int32_t)this, 0LL);
      if ( StateData )
      {
        if ( StateData->fields.index >= 1 )
        {
          viewObjectInfoList = (System_Object_array *)v6->fields.viewObjectInfoList;
          v12 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo);
          System_Predicate_object____ctor(
            v12,
            (Il2CppObject *)v9,
            Method_EventInfoTipsArchiveListViewManager___c__DisplayClass23_0__GetDispLastId_b__0__,
            0LL);
          if ( System_Array__Find_object_(
                 viewObjectInfoList,
                 (System_Predicate_T__o *)v12,
                 (const MethodInfo_2F78480 *)Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___) )
          {
            v8 = *(_DWORD *)(v9 + 16);
          }
        }
      }
      if ( ++v7 >= v5->fields._size )
        return v8;
    }
LABEL_16:
    sub_1B8880C(this, idList);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__OnChangeScrollBarValue(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  const MethodInfo *v4; // x1
  void *scrollView; // x0
  float v6; // s1
  int v7; // w8
  int32_t v8; // w20
  int v9; // w23
  float v10; // s9
  EventInfoTipsArchiveListViewObject_o *v11; // x21
  UnityEngine_Vector2_o ViewSize; // kr00_8
  const MethodInfo *v13; // x1
  float ReadEndValue_k__BackingField; // s8
  float height; // s0
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v17; // x21

  if ( (byte_4A5D130 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D130 = 1;
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollBar, 0LL, 0LL) )
  {
    scrollView = this->fields.scrollView;
    if ( !scrollView
      || (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
      || (*(UnityEngine_Vector3_o *)(&v6 - 1) = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)scrollView,
                                                  0LL),
          (scrollView = this->fields.objectList) == 0LL) )
    {
LABEL_29:
      sub_1B8880C(scrollView, v4);
    }
    v7 = *((_DWORD *)scrollView + 6);
    if ( v7 >= 1 )
    {
      v8 = 0;
      v9 = -v7;
      v10 = v6 - this->fields.initialScrollPosition.fields.y;
      while ( 1 )
      {
        scrollView = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)scrollView,
                       v8,
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Item__);
        v11 = (EventInfoTipsArchiveListViewObject_o *)scrollView;
        if ( v9 + v8 == -1 )
        {
          if ( !scrollView )
            goto LABEL_29;
          scrollView = (void *)EventInfoTipsArchiveListViewObject__GetSize(
                                 (EventInfoTipsArchiveListViewObject_o *)scrollView,
                                 v4);
          if ( !this->fields.scrollViewPanel )
            goto LABEL_29;
          if ( COERCE_FLOAT(LODWORD(UIPanel__GetViewSize((UIPanel_o *)this[32LL], 0LL).fields.y)) > (float)(int)scrollView )
          {
            scrollView = this->fields.scrollViewPanel;
            if ( !scrollView )
              goto LABEL_29;
            ViewSize = UIPanel__GetViewSize((UIPanel_o *)scrollView, 0LL);
            v10 = v10 + (float)(ViewSize.fields.y - (float)EventInfoTipsArchiveListViewObject__GetSize(v11, v13));
          }
        }
        else if ( !scrollView )
        {
          goto LABEL_29;
        }
        scrollView = this->fields.scrollViewPanel;
        if ( !scrollView )
          goto LABEL_29;
        ReadEndValue_k__BackingField = v11->fields._ReadEndValue_k__BackingField;
        height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL);
        if ( ReadEndValue_k__BackingField <= v10 && v10 <= (float)(ReadEndValue_k__BackingField + height) )
        {
          scrollView = this->fields.mainInfo;
          if ( !scrollView )
            goto LABEL_29;
          StateData = EventInfoTipsArchiveListViewItem__GetStateData(
                        (EventInfoTipsArchiveListViewItem_o *)scrollView,
                        v11->fields.id,
                        0LL);
          if ( StateData )
          {
            v17 = StateData;
            if ( EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(StateData, 0LL) )
            {
              EventInfoTipsArchiveListViewItem_TipsArchiveStateData__SetNewState(v17, 0, 0LL);
              scrollView = this->fields.mainInfo;
              if ( !scrollView )
                goto LABEL_29;
              EventInfoTipsArchiveListViewItem__set_IsModfiy((EventInfoTipsArchiveListViewItem_o *)scrollView, 1, 0LL);
            }
          }
        }
        ++v8;
        if ( !(v9 + v8) )
          break;
        scrollView = this->fields.objectList;
        if ( !scrollView )
          goto LABEL_29;
      }
    }
  }
}


void __fastcall EventInfoTipsArchiveListViewManager__OnClickListView(
        EventInfoTipsArchiveListViewManager_o *this,
        EventInfoTipsArchiveListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *v5; // x20
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  unsigned int Kind; // w0

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B8880C(v8, v9);
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

  if ( (byte_4A5D12F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D12F = 1;
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
          sub_1B8880C(v8, v7);
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
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5
  float v12; // s0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF
  System_Nullable_Vector3__o v14; // 0:x3.16

  if ( (byte_4A5D12E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__);
    sub_1B885B0(&Method_EventInfoTipsArchiveListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5D12E = 1;
  }
  memset(&v13, 0, sizeof(v13));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      objectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_EventInfoTipsArchiveListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v9, v10);
      *(_QWORD *)&v14.fields.hasValue = 0LL;
      *(_QWORD *)&v14.fields.value.fields.y = 0LL;
      EventInfoTipsArchiveListViewObject__Init((EventInfoTipsArchiveListViewObject_o *)current, mode, v8, v12, v14, v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EventInfoTipsArchiveListViewManager__SetMode_42128656(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__SetMode_42128656(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x8

  v4 = this;
  if ( (byte_4A5D12D & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__);
    byte_4A5D12D = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1B8880C(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  if ( (unsigned int)(mode - 1) <= 2 )
    EventInfoTipsArchiveListViewManager__RequestListObject(v4, dword_BEF440[mode - 1], method);
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
    sub_1B8880C(this, obj);
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
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_Component_o *v4; // x20
  float height; // s0
  float v6; // s9
  float v7; // s8
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5D131 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    byte_4A5D131 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL
    || (v4 = scrollView,
        height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.objectList) == 0LL) )
  {
    sub_1B8880C(scrollView, method);
  }
  v6 = *((float *)&v4[13].klass + 1);
  v7 = height;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)scrollView,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    if ( !v8 )
      break;
    if ( !v10.fields._current )
      sub_1B8880C(v8, v9);
    *((float *)&v10.fields._current[8].klass + 1) = fmaxf(
                                                      vabds_f32(
                                                        *((float *)&v10.fields._current[5].klass + 1)
                                                      + (float)((float)EventInfoTipsArchiveListViewObject__GetSize(
                                                                         (EventInfoTipsArchiveListViewObject_o *)v10.fields._current,
                                                                         v9)
                                                              * -0.5),
                                                        v6)
                                                    - v7,
                                                      0.0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
}


void __fastcall EventInfoTipsArchiveListViewManager__UpdateNewIconDisp(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  __int64 v9; // x1
  bool IsNew; // w0
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5D12A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    byte_4A5D12A = 1;
  }
  memset(&v13, 0, sizeof(v13));
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    if ( !v4 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1B8880C(v4, v5);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1B8880C(0LL, v5);
    StateData = EventInfoTipsArchiveListViewItem__GetStateData(mainInfo, (int32_t)v13.fields._current[2].monitor, 0LL);
    if ( !StateData )
      sub_1B8880C(0LL, v9);
    IsNew = EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(StateData, 0LL);
    EventInfoTipsArchiveListViewObject__SetNewIconDisp((EventInfoTipsArchiveListViewObject_o *)current, IsNew, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
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

  if ( (byte_4A5D127 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo);
    byte_4A5D127 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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

  if ( (byte_4A5D128 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo);
    byte_4A5D128 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D0458;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D0400;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = id;
  v15 = result;
  if ( (byte_4A5D133 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&EventInfoTipsArchiveListViewManager_ResultKind_TypeInfo);
    byte_4A5D133 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             EventInfoTipsArchiveListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&id,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall EventInfoTipsArchiveListViewManager_CallbackFunc__EndInvoke(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return n->fields.Id == this->fields.id;
}