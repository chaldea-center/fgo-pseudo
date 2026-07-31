void MasterMissionReceiveConfirmListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_593C088 & 1) == 0 )
  {
    sub_21FFC50(&MasterMissionReceiveConfirmListViewManager_TypeInfo);
    byte_593C088 = 1;
  }
  MasterMissionReceiveConfirmListViewManager_TypeInfo->static_fields->LIST_BLANK = 5;
}


void MasterMissionReceiveConfirmListViewManager___ctor(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  int v10; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_593C087 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
    byte_593C087 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (unsigned __int8)byte_5931940;
  this->fields.isInput = 1;
  if ( !v10 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.initialScrollPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.initialScrollPosition.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MasterMissionReceiveConfirmListViewManager__CreateList(
        MasterMissionReceiveConfirmListViewManager_o *this,
        System_Collections_Generic_List_MasterMissionListViewItem__o *confirmItemList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *scrollView; // x21
  __int64 v7; // x1
  void *transform; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x21
  float v11; // s8
  float v12; // s9
  System_Collections_Generic_List_object__o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t size; // w25
  int32_t i; // w21
  Il2CppObject *Item; // x0
  __int64 v23; // x1
  Il2CppObject *prefabObject; // x22
  Il2CppObject *v25; // x23
  Il2CppObject *v26; // x22
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  _DWORD *monitor; // x8
  MasterMissionReceiveConfirmListViewObject_o *v34; // x22
  void *v35; // x1
  int32_t v36; // w23
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x3
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  __int64 v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  __int64 v48; // x8
  UnityEngine_Object_o *v49; // x20
  __int64 v50; // x1
  Il2CppObject *v51; // x20
  float width; // s8
  float height; // s0
  UnityEngine_Vector3_o v54; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593C084 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C084 = 1;
  }
  v54.fields.z = 0.0;
  *(_QWORD *)&v54.fields.x = 0;
  MasterMissionReceiveConfirmListViewManager__DestroyList(this, (const MethodInfo *)confirmItemList);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    transform = this->fields.scrollView;
    if ( !transform )
      goto LABEL_46;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_46;
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_46;
      v11 = *((float *)&Component_object[20].monitor + 1);
      v12 = *(float *)&Component_object[21].klass;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_46;
      v55.fields.x = -v11;
      v55.fields.y = -v12;
      v55.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v55, 0);
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_46;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
    }
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *)v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.objectList, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)&v54.fields.x = 0;
  v54.fields.z = 0.0;
  if ( !confirmItemList )
    goto LABEL_46;
  size = confirmItemList->fields._size;
  if ( size >= 1 )
  {
    for ( i = 0; size != i; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)confirmItemList,
               i,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Item__);
      prefabObject = (Il2CppObject *)this->fields.prefabObject;
      v25 = Item;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      v26 = UnityEngine_Object__Instantiate_object_(
              prefabObject,
              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v26 )
          goto LABEL_46;
        transform = UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)v26,
                      (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewObject___);
        if ( !v25 )
          goto LABEL_46;
        monitor = v25[7].monitor;
        if ( !monitor )
          goto LABEL_46;
        v34 = (MasterMissionReceiveConfirmListViewObject_o *)transform;
        if ( !transform )
          goto LABEL_46;
        v35 = v25[12].monitor;
        v36 = monitor[21];
        *((_QWORD *)transform + 5) = v35;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)((char *)transform + 40),
          (int32_t)v35,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        v34->fields.giftId = v36;
        v34->fields.isLineDisp = i < size - 1;
        MasterMissionReceiveConfirmListViewObject__Init(v34, 2, v37);
        MasterMissionReceiveConfirmListViewManager__SetObjectPosition(this, &v54, v34, v38);
        transform = this->fields.objectList;
        if ( !transform )
          goto LABEL_46;
        v45 = *((_QWORD *)transform + 2);
        v46 = Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Add__;
        ++*((_DWORD *)transform + 7);
        if ( !v45 )
          goto LABEL_46;
        v47 = *((int *)transform + 6);
        if ( (unsigned int)v47 >= *(_DWORD *)(v45 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)transform,
            (Il2CppObject *)v34,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = v45 + 8 * v47;
          *((_DWORD *)transform + 6) = v47 + 1;
          *(_QWORD *)(v48 + 32) = v34;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v48 + 32), (int32_t)v34, v39, v40, v41, v42, v43, v44);
        }
      }
    }
  }
  v49 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(v49, 0, 0) )
  {
    transform = this->fields.scrollView;
    if ( transform )
    {
      v51 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)transform,
              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
      transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v51, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( v51 )
        {
          width = UIPanel__get_width((UIPanel_o *)v51, 0);
          height = UIPanel__get_height((UIPanel_o *)v51, 0);
          transform = this->fields.scrollView;
          this->fields.scrollViewSize.fields.x = width;
          this->fields.scrollViewSize.fields.y = height;
          if ( transform )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
            if ( transform )
            {
              localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
              transform = this->fields.scrollView;
              this->fields.initialScrollPosition = localPosition;
              if ( transform )
              {
                *((_DWORD *)transform + 21) = 1;
LABEL_45:
                UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
                return;
              }
            }
          }
        }
      }
      else
      {
        transform = this->fields.scrollView;
        if ( transform )
          goto LABEL_45;
      }
    }
LABEL_46:
    sub_21FFECC(transform, v7);
  }
}


void MasterMissionReceiveConfirmListViewManager__DestroyList(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_593C083 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C083 = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  memset(&v12, 0, sizeof(v12));
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
  v12 = v11;
  v11.fields._list = 0;
  *(_QWORD *)&v11.fields._index = &v12;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_21FFECC(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v12.fields._current,
                                           0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
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
    sub_21FFECC(objectList, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void MasterMissionReceiveConfirmListViewManager__RequestListObject(
        MasterMissionReceiveConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_593C086 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__get_Count__);
    byte_593C086 = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  memset(&v8, 0, sizeof(v8));
  if ( !objectList )
    sub_21FFECC(0, *(_QWORD *)&mode);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      objectList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_21FFECC(0, v6);
      MasterMissionReceiveConfirmListViewObject__Init(
        (MasterMissionReceiveConfirmListViewObject_o *)v8.fields._current,
        mode,
        v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
  }
}


void MasterMissionReceiveConfirmListViewManager__SetMode(
        MasterMissionReceiveConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  MasterMissionReceiveConfirmListViewManager__set_IsInput(this, mode == 1, method);
  if ( mode == 1 )
  {
    v6 = 3;
  }
  else
  {
    if ( mode != 2 )
      return;
    v6 = 2;
  }
  MasterMissionReceiveConfirmListViewManager__RequestListObject(this, v6, v5);
}


void MasterMissionReceiveConfirmListViewManager__SetObjectPosition(
        MasterMissionReceiveConfirmListViewManager_o *this,
        UnityEngine_Vector3_o *basePosition,
        MasterMissionReceiveConfirmListViewObject_o *obj,
        const MethodInfo *method)
{
  MasterMissionReceiveConfirmListViewManager_o *v6; // x22
  int32_t Size; // w20
  MasterMissionReceiveConfirmListViewManager_o *v8; // x23
  MasterMissionReceiveConfirmListViewManager_o *v9; // x23
  MasterMissionReceiveConfirmListViewManager_o *v10; // x23
  MasterMissionReceiveConfirmListViewManager_o *v11; // x23
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  MasterMissionReceiveConfirmListViewManager_c *v15; // x0
  float y; // s8

  v6 = this;
  if ( (byte_593C085 & 1) == 0 )
  {
    this = (MasterMissionReceiveConfirmListViewManager_o *)sub_21FFC50(&MasterMissionReceiveConfirmListViewManager_TypeInfo);
    byte_593C085 = 1;
  }
  if ( !obj )
    goto LABEL_18;
  Size = MasterMissionReceiveConfirmListViewObject__GetSize(obj, (const MethodInfo *)basePosition);
  this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)obj,
                                                           0);
  if ( !v6->fields.listParent )
    goto LABEL_18;
  v8 = this;
  this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_GameObject__get_transform(v6->fields.listParent, 0);
  if ( !v8 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v8, (UnityEngine_Transform_o *)this, 0);
  this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)obj,
                                                           0);
  if ( !this )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *basePosition, 0);
  this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)obj,
                                                           0);
  v9 = this;
  if ( !byte_5931946 )
  {
    this = (MasterMissionReceiveConfirmListViewManager_o *)sub_21FFC50(&UnityEngine_Quaternion_TypeInfo);
    byte_5931946 = 1;
  }
  if ( !v9 )
    goto LABEL_18;
  UnityEngine_Transform__set_localRotation(
    (UnityEngine_Transform_o *)v9,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)obj,
                                                           0);
  v10 = this;
  if ( !byte_5931945 )
  {
    this = (MasterMissionReceiveConfirmListViewManager_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v10
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v10,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)obj,
                                                                 0),
        !v6->fields.listParent)
    || (v11 = this,
        this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_GameObject__get_layer(
                                                                 v6->fields.listParent,
                                                                 0),
        !v11) )
  {
LABEL_18:
    sub_21FFECC(this, basePosition);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v11, (int32_t)this, 0);
  MasterMissionReceiveConfirmListViewObject__SetBaseTransform(obj, v12);
  MasterMissionReceiveConfirmListViewObject__SetManager(obj, v6, v13);
  v15 = MasterMissionReceiveConfirmListViewManager_TypeInfo;
  y = basePosition->fields.y;
  if ( !*(&MasterMissionReceiveConfirmListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewManager_TypeInfo, v14);
    v15 = MasterMissionReceiveConfirmListViewManager_TypeInfo;
  }
  basePosition->fields.y = y - (float)(v15->static_fields->LIST_BLANK + Size);
}


bool MasterMissionReceiveConfirmListViewManager__get_IsInput(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isInput;
}


// local variable allocation has failed, the output may be wrong!
void MasterMissionReceiveConfirmListViewManager__set_IsInput(
        MasterMissionReceiveConfirmListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  bool v4; // w21
  UnityEngine_Object_c *v5; // x0
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UIProgressBar_o *v9; // x19
  float alpha; // s0

  v4 = value;
  if ( (byte_593C082 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C082 = 1;
  }
  v5 = UnityEngine_Object_TypeInfo;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  this->fields.isInput = v4;
  if ( !*(&v5->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v5, value);
  v7 = UnityEngine_Object__op_Inequality(scrollBar, 0, 0);
  if ( v7 )
  {
    v9 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v9 )
      sub_21FFECC(v7, v8);
    alpha = UIProgressBar__get_alpha(v9, 0);
    UIProgressBar__set_alpha(v9, alpha, 0);
  }
}