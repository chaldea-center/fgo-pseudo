void ExRoomMissionReceiveConfirmListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_596AF3C & 1) == 0 )
  {
    sub_2213A60(&ExRoomMissionReceiveConfirmListViewManager_TypeInfo);
    byte_596AF3C = 1;
  }
  ExRoomMissionReceiveConfirmListViewManager_TypeInfo->static_fields->ListBlank = 5;
}


void ExRoomMissionReceiveConfirmListViewManager___ctor(
        ExRoomMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596AF3B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject__TypeInfo);
    byte_596AF3B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.isInput = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ExRoomMissionReceiveConfirmListViewManager__Awake(
        ExRoomMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void ExRoomMissionReceiveConfirmListViewManager__CreateList(
        ExRoomMissionReceiveConfirmListViewManager_o *this,
        System_Collections_Generic_List_ExRoomMissionReceiveConfirmDialogItem__o *items,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *scrollView; // x21
  __int64 v8; // x1
  UnityEngine_Component_o *transform; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Component_object; // x21
  float v13; // s8
  float v14; // s9
  System_Collections_Generic_List_object__o *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x2
  int32_t size; // w26
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  int32_t i; // w21
  Il2CppObject *Item; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *prefabObject; // x22
  Il2CppObject *v31; // x23
  Il2CppObject *v32; // x24
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *v35; // x22
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x3
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v51; // x9
  __int64 klass_low; // x10
  intptr_t v53; // x8
  UnityEngine_Object_o *v54; // x20
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x2
  UnityEngine_Vector3_o v57; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596AF38 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ExRoomMissionReceiveConfirmListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmDialogItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmDialogItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject__TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AF38 = 1;
  }
  v57.fields.z = 0.0;
  *(_QWORD *)&v57.fields.x = 0;
  ExRoomMissionReceiveConfirmListViewManager__DestroyList(this, (const MethodInfo *)items);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !transform )
      goto LABEL_44;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         transform,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_44;
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_44;
      v13 = *((float *)&Component_object[20].monitor + 1);
      v14 = *(float *)&Component_object[21].klass;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
      if ( !transform )
        goto LABEL_44;
      v58.fields.x = -v13;
      v58.fields.y = -v14;
      v58.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v58, 0);
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_44;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
    }
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject__o *)v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.objectList, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  if ( items )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    size = items->fields._size;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)&v57.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    v57.fields.z = z;
    if ( size >= 1 )
    {
      for ( i = 0; size != i; ++i )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)items,
                 i,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmDialogItem__get_Item__);
        prefabObject = (Il2CppObject *)this->fields.prefabObject;
        v31 = Item;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
        v32 = UnityEngine_Object__Instantiate_object_(
                prefabObject,
                (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v32, 0, 0);
        if ( ((unsigned __int8)transform & 1) == 0 )
        {
          if ( !v32 )
            goto LABEL_44;
          v35 = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)v32,
                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ExRoomMissionReceiveConfirmListViewObject___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v35, 0, 0);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v36);
            UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)v32, 0);
          }
          else
          {
            if ( !v35 )
              goto LABEL_44;
            v35[2].monitor = v31;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&v35[2].monitor, (int32_t)v31, v36, v37, v38, v39, v40, v41);
            LOBYTE(v35[3].klass) = i < size - 1;
            ExRoomMissionReceiveConfirmListViewObject__Init((ExRoomMissionReceiveConfirmListViewObject_o *)v35, 2, v42);
            ExRoomMissionReceiveConfirmListViewManager__SetObjectPosition(
              this,
              &v57,
              (ExRoomMissionReceiveConfirmListViewObject_o *)v35,
              v43);
            transform = (UnityEngine_Component_o *)this->fields.objectList;
            if ( !transform )
              goto LABEL_44;
            m_CachedPtr = transform->fields.m_CachedPtr;
            v51 = Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject__Add__;
            ++HIDWORD(transform[1].klass);
            if ( !m_CachedPtr )
              goto LABEL_44;
            klass_low = SLODWORD(transform[1].klass);
            if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)transform,
                v35,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v53 = m_CachedPtr + 8 * klass_low;
              LODWORD(transform[1].klass) = klass_low + 1;
              *(_QWORD *)(v53 + 32) = v35;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v53 + 32), (int32_t)v35, v44, v45, v46, v47, v48, v49);
            }
          }
        }
      }
    }
    v54 = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v22);
    if ( !UnityEngine_Object__op_Inequality(v54, 0, 0) )
      goto LABEL_42;
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( transform )
    {
      HIDWORD(transform[3].monitor) = 1;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
LABEL_42:
      this->fields.initMode = 2;
      ExRoomMissionReceiveConfirmListViewManager__set_IsInput(this, 0, v55);
      ExRoomMissionReceiveConfirmListViewManager__RequestListObject(this, 2, v56);
      return;
    }
LABEL_44:
    sub_2213CDC(transform, v8);
  }
}


void ExRoomMissionReceiveConfirmListViewManager__DestroyList(
        ExRoomMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject__o *v8; // x8
  __int64 size; // x2
  int v10; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_596AF37 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ExRoomMissionReceiveConfirmListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ExRoomMissionReceiveConfirmListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ExRoomMissionReceiveConfirmListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AF37 = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  memset(&v13, 0, sizeof(v13));
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject__GetEnumerator__);
  v13 = v12;
  v12.fields._list = 0;
  *(_QWORD *)&v12.fields._index = &v13;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ExRoomMissionReceiveConfirmListViewObject__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_2213CDC(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v13.fields._current,
                                           0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ExRoomMissionReceiveConfirmListViewObject__Dispose__);
  v8 = this->fields.objectList;
  if ( !v8 )
    goto LABEL_20;
  size = (unsigned int)v8->fields._size;
  v10 = v8->fields._version + 1;
  v8->fields._size = 0;
  v8->fields._version = v10;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v8->fields._items, 0, size, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, size);
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


// local variable allocation has failed, the output may be wrong!
void ExRoomMissionReceiveConfirmListViewManager__RequestListObject(
        ExRoomMissionReceiveConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596AF3A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ExRoomMissionReceiveConfirmListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ExRoomMissionReceiveConfirmListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ExRoomMissionReceiveConfirmListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject__get_Count__);
    byte_596AF3A = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  memset(&v8, 0, sizeof(v8));
  if ( !objectList )
    sub_2213CDC(0, *(_QWORD *)&mode);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      objectList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ExRoomMissionReceiveConfirmListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ExRoomMissionReceiveConfirmListViewObject__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_2213CDC(0, v6);
      ExRoomMissionReceiveConfirmListViewObject__Init(
        (ExRoomMissionReceiveConfirmListViewObject_o *)v8.fields._current,
        mode,
        v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ExRoomMissionReceiveConfirmListViewObject__Dispose__);
  }
}


void ExRoomMissionReceiveConfirmListViewManager__SetMode(
        ExRoomMissionReceiveConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  ExRoomMissionReceiveConfirmListViewManager__set_IsInput(this, mode == 1, method);
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
  ExRoomMissionReceiveConfirmListViewManager__RequestListObject(this, v6, v5);
}


void ExRoomMissionReceiveConfirmListViewManager__SetObjectPosition(
        ExRoomMissionReceiveConfirmListViewManager_o *this,
        UnityEngine_Vector3_o *basePosition,
        ExRoomMissionReceiveConfirmListViewObject_o *obj,
        const MethodInfo *method)
{
  ExRoomMissionReceiveConfirmListViewManager_o *v6; // x22
  int32_t Size; // w20
  ExRoomMissionReceiveConfirmListViewManager_o *v8; // x23
  ExRoomMissionReceiveConfirmListViewManager_o *v9; // x23
  ExRoomMissionReceiveConfirmListViewManager_o *v10; // x23
  ExRoomMissionReceiveConfirmListViewManager_o *v11; // x23
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  ExRoomMissionReceiveConfirmListViewManager_c *v16; // x0
  float y; // s8

  v6 = this;
  if ( (byte_596AF39 & 1) == 0 )
  {
    this = (ExRoomMissionReceiveConfirmListViewManager_o *)sub_2213A60(&ExRoomMissionReceiveConfirmListViewManager_TypeInfo);
    byte_596AF39 = 1;
  }
  if ( !obj )
    goto LABEL_18;
  Size = ExRoomMissionReceiveConfirmListViewObject__GetSize(obj, (const MethodInfo *)basePosition);
  this = (ExRoomMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)obj,
                                                           0);
  if ( !v6->fields.listParent )
    goto LABEL_18;
  v8 = this;
  this = (ExRoomMissionReceiveConfirmListViewManager_o *)UnityEngine_GameObject__get_transform(v6->fields.listParent, 0);
  if ( !v8 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v8, (UnityEngine_Transform_o *)this, 0);
  this = (ExRoomMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)obj,
                                                           0);
  if ( !this )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *basePosition, 0);
  this = (ExRoomMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)obj,
                                                           0);
  v9 = this;
  if ( !byte_5969AE6 )
  {
    this = (ExRoomMissionReceiveConfirmListViewManager_o *)sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  if ( !v9 )
    goto LABEL_18;
  UnityEngine_Transform__set_localRotation(
    (UnityEngine_Transform_o *)v9,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  this = (ExRoomMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)obj,
                                                           0);
  v10 = this;
  if ( !byte_5969AE5 )
  {
    this = (ExRoomMissionReceiveConfirmListViewManager_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v10
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v10,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        this = (ExRoomMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)obj,
                                                                 0),
        !v6->fields.listParent)
    || (v11 = this,
        this = (ExRoomMissionReceiveConfirmListViewManager_o *)UnityEngine_GameObject__get_layer(
                                                                 v6->fields.listParent,
                                                                 0),
        !v11) )
  {
LABEL_18:
    sub_2213CDC(this, basePosition);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v11, (int32_t)this, 0);
  ExRoomMissionReceiveConfirmListViewObject__SetBaseTransform(obj, v12);
  ExRoomMissionReceiveConfirmListViewObject__SetManager(obj, v6, v13);
  v16 = ExRoomMissionReceiveConfirmListViewManager_TypeInfo;
  y = basePosition->fields.y;
  if ( !*(&ExRoomMissionReceiveConfirmListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExRoomMissionReceiveConfirmListViewManager_TypeInfo, v14, v15);
    v16 = ExRoomMissionReceiveConfirmListViewManager_TypeInfo;
  }
  basePosition->fields.y = y - (float)(v16->static_fields->ListBlank + Size);
}


bool ExRoomMissionReceiveConfirmListViewManager__get_IsInput(
        ExRoomMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isInput;
}


// local variable allocation has failed, the output may be wrong!
void ExRoomMissionReceiveConfirmListViewManager__set_IsInput(
        ExRoomMissionReceiveConfirmListViewManager_o *this,
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
  if ( (byte_596AF36 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AF36 = 1;
  }
  v5 = UnityEngine_Object_TypeInfo;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  this->fields.isInput = v4;
  if ( !*(&v5->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v5, value, method);
  v7 = UnityEngine_Object__op_Inequality(scrollBar, 0, 0);
  if ( v7 )
  {
    v9 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v9 )
      sub_2213CDC(v7, v8);
    alpha = UIProgressBar__get_alpha(v9, 0);
    UIProgressBar__set_alpha(v9, alpha, 0);
  }
}