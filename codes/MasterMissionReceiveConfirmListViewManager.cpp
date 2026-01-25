void MasterMissionReceiveConfirmListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_4CF181D & 1) == 0 )
  {
    sub_1C7BAE8(&MasterMissionReceiveConfirmListViewManager_TypeInfo);
    byte_4CF181D = 1;
  }
  MasterMissionReceiveConfirmListViewManager_TypeInfo->static_fields->LIST_BLANK = 5;
}


void MasterMissionReceiveConfirmListViewManager___ctor(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_4CF181C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
    byte_4CF181C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.isInput = 1;
  if ( !byte_4CE7E59 )
  {
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
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
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *Component_object; // x21
  float v9; // s8
  float v10; // s9
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t size; // w26
  int32_t i; // w21
  Il2CppObject *Item; // x0
  Il2CppObject *prefabObject; // x22
  MissionListViewItem_o *v22; // x23
  Il2CppObject *v23; // x22
  struct System_String_o *condMsg; // x24
  UnityEngine_Component_o *v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int monitor_high; // w23
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v42; // x9
  __int64 klass_low; // x10
  intptr_t v44; // x8
  UnityEngine_Object_o *v45; // x20
  Il2CppObject *v46; // x20
  float width; // s8
  float height; // s0
  UnityEngine_Vector3_o basePosition; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF1819 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1819 = 1;
  }
  MasterMissionReceiveConfirmListViewManager__DestroyList(this, (const MethodInfo *)confirmItemList);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !transform )
      goto LABEL_46;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         transform,
                         (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_46;
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_46;
      v9 = *((float *)&Component_object[20].monitor + 1);
      v10 = *(float *)&Component_object[21].klass;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
      if ( !transform )
        goto LABEL_46;
      v50.fields.x = -v9;
      v50.fields.y = -v10;
      v50.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v50, 0);
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_46;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
    }
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *)v11;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.objectList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)&basePosition.fields.x = 0;
  basePosition.fields.z = 0.0;
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
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Item__);
      prefabObject = (Il2CppObject *)this->fields.prefabObject;
      v22 = (MissionListViewItem_o *)Item;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v23 = UnityEngine_Object__Instantiate_object_(
              prefabObject,
              (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v23 )
          goto LABEL_46;
        transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)v23,
                                                 (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewObject___);
        if ( !v22 )
          goto LABEL_46;
        condMsg = v22->fields.condMsg;
        v25 = transform;
        transform = (UnityEngine_Component_o *)MissionListViewItem__get_EventMissionEntity(v22, 0);
        if ( !transform )
          goto LABEL_46;
        if ( !v25 )
          goto LABEL_46;
        monitor_high = HIDWORD(transform[3].monitor);
        v25[1].fields.m_CachedPtr = (intptr_t)condMsg;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25[1].fields, (int32_t)condMsg, v26, v27, v28, v29, v30, v31);
        LODWORD(v25[2].klass) = monitor_high;
        BYTE4(v25[2].klass) = i < size - 1;
        MasterMissionReceiveConfirmListViewObject__Init((MasterMissionReceiveConfirmListViewObject_o *)v25, 2, v33);
        MasterMissionReceiveConfirmListViewManager__SetObjectPosition(
          this,
          &basePosition,
          (MasterMissionReceiveConfirmListViewObject_o *)v25,
          v34);
        transform = (UnityEngine_Component_o *)this->fields.objectList;
        if ( !transform )
          goto LABEL_46;
        m_CachedPtr = transform->fields.m_CachedPtr;
        v42 = Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Add__;
        ++HIDWORD(transform[1].klass);
        if ( !m_CachedPtr )
          goto LABEL_46;
        klass_low = SLODWORD(transform[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)transform,
            (Il2CppObject *)v25,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = m_CachedPtr + 8 * klass_low;
          LODWORD(transform[1].klass) = klass_low + 1;
          *(_QWORD *)(v44 + 32) = v25;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v44 + 32), (int32_t)v25, v35, v36, v37, v38, v39, v40);
        }
      }
    }
  }
  v45 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v45, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( transform )
    {
      v46 = UnityEngine_Component__GetComponent_object_(
              transform,
              (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( v46 )
        {
          width = UIPanel__get_width((UIPanel_o *)v46, 0);
          height = UIPanel__get_height((UIPanel_o *)v46, 0);
          transform = (UnityEngine_Component_o *)this->fields.scrollView;
          this->fields.scrollViewSize.fields.x = width;
          this->fields.scrollViewSize.fields.y = height;
          if ( transform )
          {
            transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
            if ( transform )
            {
              localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
              transform = (UnityEngine_Component_o *)this->fields.scrollView;
              this->fields.initialScrollPosition = localPosition;
              if ( transform )
              {
                HIDWORD(transform[3].monitor) = 1;
LABEL_44:
                UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
                return;
              }
            }
          }
        }
      }
      else
      {
        transform = (UnityEngine_Component_o *)this->fields.scrollView;
        if ( transform )
          goto LABEL_44;
      }
    }
LABEL_46:
    sub_1C7BD40(transform, v6);
  }
}


void MasterMissionReceiveConfirmListViewManager__DestroyList(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CF1818 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1818 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__) )
  {
    if ( !v11.fields._current )
      sub_1C7BD40(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v11.fields._current,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
  v6 = this->fields.objectList;
  if ( !v6 )
    goto LABEL_20;
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0);
      return;
    }
LABEL_20:
    sub_1C7BD40(objectList, method);
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
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CF181B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__get_Count__);
    byte_4CF181B = 1;
  }
  memset(&v8, 0, sizeof(v8));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, *(_QWORD *)&mode);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      objectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_1C7BD40(0, v6);
      MasterMissionReceiveConfirmListViewObject__Init(
        (MasterMissionReceiveConfirmListViewObject_o *)v8.fields._current,
        mode,
        v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
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
  MasterMissionReceiveConfirmListViewManager_c *v14; // x0
  float y; // s8

  v6 = this;
  if ( (byte_4CF181A & 1) == 0 )
  {
    this = (MasterMissionReceiveConfirmListViewManager_o *)sub_1C7BAE8(&MasterMissionReceiveConfirmListViewManager_TypeInfo);
    byte_4CF181A = 1;
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
  if ( !byte_4CE7E5F )
  {
    this = (MasterMissionReceiveConfirmListViewManager_o *)sub_1C7BAE8(&UnityEngine_Quaternion_TypeInfo);
    byte_4CE7E5F = 1;
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
  if ( !byte_4CE7E5E )
  {
    this = (MasterMissionReceiveConfirmListViewManager_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
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
    sub_1C7BD40(this, basePosition);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v11, (int32_t)this, 0);
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


bool MasterMissionReceiveConfirmListViewManager__get_IsInput(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isInput;
}


void MasterMissionReceiveConfirmListViewManager__set_IsInput(
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
  if ( (byte_4CF1817 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1817 = 1;
  }
  this->fields.isInput = v4;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(scrollBar, 0, 0);
  if ( v6 )
  {
    v8 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v8 )
      sub_1C7BD40(v6, v7);
    alpha = UIProgressBar__get_alpha(v8, 0);
    UIProgressBar__set_alpha(v8, alpha, 0);
  }
}