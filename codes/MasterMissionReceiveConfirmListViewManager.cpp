void __fastcall MasterMissionReceiveConfirmListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B05298 & 1) == 0 )
  {
    sub_1BC3008(&MasterMissionReceiveConfirmListViewManager_TypeInfo, v1);
    byte_4B05298 = 1;
  }
  MasterMissionReceiveConfirmListViewManager_TypeInfo->static_fields->LIST_BLANK = 5;
}


void __fastcall MasterMissionReceiveConfirmListViewManager___ctor(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_4B05297 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo, v3);
    byte_4B05297 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *)v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v4, v5, v6);
  this->fields.isInput = 1;
  if ( !byte_4AFBDB1 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4AFBDB1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.initialScrollPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.initialScrollPosition.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MasterMissionReceiveConfirmListViewManager__CreateList(
        MasterMissionReceiveConfirmListViewManager_o *this,
        System_Collections_Generic_List_MasterMissionListViewItem__o *confirmItemList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *scrollView; // x21
  __int64 v14; // x1
  void *transform; // x0
  Il2CppObject *Component_object; // x21
  float v17; // s8
  float v18; // s9
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t size; // w25
  int32_t i; // w21
  Il2CppObject *Item; // x0
  Il2CppObject *prefabObject; // x22
  Il2CppObject *v26; // x23
  Il2CppObject *v27; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppClass *klass; // x8
  MasterMissionReceiveConfirmListViewObject_o *v31; // x22
  Il2CppClass *v32; // x1
  int32_t declaringType_high; // w23
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8
  UnityEngine_Object_o *v42; // x20
  Il2CppObject *v43; // x20
  float width; // s8
  float height; // s0
  UnityEngine_Vector3_o v46; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B05294 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIPanel___, confirmItemList);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewObject___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Count__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Item__, v9);
    sub_1BC3008(&System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo, v10);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v12);
    byte_4B05294 = 1;
  }
  MasterMissionReceiveConfirmListViewManager__DestroyList(this, (const MethodInfo *)confirmItemList);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    transform = this->fields.scrollView;
    if ( !transform )
      goto LABEL_46;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_46;
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_46;
      v17 = *((float *)&Component_object[20].monitor + 1);
      v18 = *(float *)&Component_object[21].klass;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_46;
      v47.fields.x = -v17;
      v47.fields.y = -v18;
      v47.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v47, 0LL);
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_46;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *)v19;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v19, v20, v21);
  *(_QWORD *)&v46.fields.x = 0LL;
  v46.fields.z = 0.0;
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
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Item__);
      prefabObject = (Il2CppObject *)this->fields.prefabObject;
      v26 = Item;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v27 = UnityEngine_Object__Instantiate_object_(
              prefabObject,
              (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v27 )
          goto LABEL_46;
        transform = UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)v27,
                      (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewObject___);
        if ( !v26 )
          goto LABEL_46;
        klass = v26[7].klass;
        if ( !klass )
          goto LABEL_46;
        v31 = (MasterMissionReceiveConfirmListViewObject_o *)transform;
        if ( !transform )
          goto LABEL_46;
        v32 = v26[12].klass;
        declaringType_high = HIDWORD(klass->_1.declaringType);
        *((_QWORD *)transform + 5) = v32;
        sub_1BC2FAC((CGThumbnailListItem_o *)((char *)transform + 40), (int32_t)v32, v28, v29);
        v31->fields.giftId = declaringType_high;
        v31->fields.isLineDisp = i < size - 1;
        MasterMissionReceiveConfirmListViewObject__Init(v31, 2, v34);
        MasterMissionReceiveConfirmListViewManager__SetObjectPosition(this, &v46, v31, v35);
        transform = this->fields.objectList;
        if ( !transform )
          goto LABEL_46;
        v38 = *((_QWORD *)transform + 2);
        v39 = Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Add__;
        ++*((_DWORD *)transform + 7);
        if ( !v38 )
          goto LABEL_46;
        v40 = *((int *)transform + 6);
        if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)transform,
            (Il2CppObject *)v31,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = v38 + 8 * v40;
          *((_DWORD *)transform + 6) = v40 + 1;
          *(_QWORD *)(v41 + 32) = v31;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v41 + 32), (int32_t)v31, v36, v37);
        }
      }
    }
  }
  v42 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
  {
    transform = this->fields.scrollView;
    if ( transform )
    {
      v43 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)transform,
              (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v43, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( v43 )
        {
          width = UIPanel__get_width((UIPanel_o *)v43, 0LL);
          height = UIPanel__get_height((UIPanel_o *)v43, 0LL);
          transform = this->fields.scrollView;
          this->fields.scrollViewSize.fields.x = width;
          this->fields.scrollViewSize.fields.y = height;
          if ( transform )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
            if ( transform )
            {
              localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
              transform = this->fields.scrollView;
              this->fields.initialScrollPosition = localPosition;
              if ( transform )
              {
                *((_DWORD *)transform + 21) = 1;
LABEL_44:
                UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
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
          goto LABEL_44;
      }
    }
LABEL_46:
    sub_1BC3264(transform, v14);
  }
}


void __fastcall MasterMissionReceiveConfirmListViewManager__DestroyList(
        MasterMissionReceiveConfirmListViewManager_o *this,
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
  struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B05293 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__,
      method);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__,
      v3);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__get_Current__,
      v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Clear__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    byte_4B05293 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    objectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__) )
  {
    if ( !v16.fields._current )
      sub_1BC3264(0LL, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v16.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
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
    sub_1BC3264(objectList, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewManager__RequestListObject(
        MasterMissionReceiveConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B05296 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__,
      *(_QWORD *)&mode);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__,
      v5);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__get_Current__,
      v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__get_Count__, v8);
    byte_4B05296 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1BC3264(0LL, *(_QWORD *)&mode);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      objectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__) )
    {
      if ( !v12.fields._current )
        sub_1BC3264(0LL, v10);
      MasterMissionReceiveConfirmListViewObject__Init(
        (MasterMissionReceiveConfirmListViewObject_o *)v12.fields._current,
        mode,
        v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
  }
}


void __fastcall MasterMissionReceiveConfirmListViewManager__SetMode(
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


void __fastcall MasterMissionReceiveConfirmListViewManager__SetObjectPosition(
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
  MasterMissionReceiveConfirmListViewManager_c *v14; // x0
  float y; // s8

  v6 = this;
  if ( (byte_4B05295 & 1) == 0 )
  {
    this = (MasterMissionReceiveConfirmListViewManager_o *)sub_1BC3008(
                                                             &MasterMissionReceiveConfirmListViewManager_TypeInfo,
                                                             basePosition);
    byte_4B05295 = 1;
  }
  if ( !obj )
    goto LABEL_18;
  Size = MasterMissionReceiveConfirmListViewObject__GetSize(obj, (const MethodInfo *)basePosition);
  this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)obj,
                                                           0LL);
  if ( !v6->fields.listParent )
    goto LABEL_18;
  v8 = this;
  this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                           v6->fields.listParent,
                                                           0LL);
  if ( !v8 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v8, (UnityEngine_Transform_o *)this, 0LL);
  this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)obj,
                                                           0LL);
  if ( !this )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *basePosition, 0LL);
  this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)obj,
                                                           0LL);
  v9 = this;
  if ( !byte_4AFBDB7 )
  {
    this = (MasterMissionReceiveConfirmListViewManager_o *)sub_1BC3008(&UnityEngine_Quaternion_TypeInfo, basePosition);
    byte_4AFBDB7 = 1;
  }
  if ( !v9 )
    goto LABEL_18;
  UnityEngine_Transform__set_localRotation(
    (UnityEngine_Transform_o *)v9,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)obj,
                                                           0LL);
  v10 = this;
  if ( !byte_4AFBDB6 )
  {
    this = (MasterMissionReceiveConfirmListViewManager_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, basePosition);
    byte_4AFBDB6 = 1;
  }
  if ( !v10
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v10,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)obj,
                                                                 0LL),
        !v6->fields.listParent)
    || (v11 = this,
        this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_GameObject__get_layer(
                                                                 v6->fields.listParent,
                                                                 0LL),
        !v11) )
  {
LABEL_18:
    sub_1BC3264(this, basePosition);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v11, (int32_t)this, 0LL);
  MasterMissionReceiveConfirmListViewObject__SetBaseTransform(obj, v12);
  MasterMissionReceiveConfirmListViewObject__SetManager(obj, v6, v13);
  v14 = MasterMissionReceiveConfirmListViewManager_TypeInfo;
  y = basePosition->fields.y;
  if ( !MasterMissionReceiveConfirmListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewManager_TypeInfo);
    v14 = MasterMissionReceiveConfirmListViewManager_TypeInfo;
  }
  basePosition->fields.y = y - (float)(v14->static_fields->LIST_BLANK + Size);
}


bool __fastcall MasterMissionReceiveConfirmListViewManager__get_IsInput(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isInput;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewManager__set_IsInput(
        MasterMissionReceiveConfirmListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  bool v4; // w21
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UIProgressBar_o *v8; // x19
  float alpha; // s0

  v4 = value;
  if ( (byte_4B05292 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, value);
    byte_4B05292 = 1;
  }
  this->fields.isInput = v4;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL);
  if ( v6 )
  {
    v8 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v8 )
      sub_1BC3264(v6, v7);
    alpha = UIProgressBar__get_alpha(v8, 0LL);
    UIProgressBar__set_alpha(v8, alpha, 0LL);
  }
}