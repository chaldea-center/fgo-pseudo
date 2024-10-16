void __fastcall MasterMissionReceiveConfirmListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AB8708 & 1) == 0 )
  {
    sub_1BAB41C(&MasterMissionReceiveConfirmListViewManager_TypeInfo, v1);
    byte_4AB8708 = 1;
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
  int32_t v6; // w3
  __int64 v7; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_4AB8707 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__, method);
    sub_1BAB41C(&System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo, v3);
    byte_4AB8707 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *)v4;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.objectList, (int32_t)v4, v5, v6);
  this->fields.isInput = 1;
  if ( !byte_4AB0691 )
  {
    sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4AB0691 = 1;
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
  int32_t v21; // w3
  int32_t size; // w26
  int32_t i; // w21
  Il2CppObject *Item; // x0
  Il2CppObject *prefabObject; // x22
  MissionListViewItem_o *v26; // x23
  Il2CppObject *v27; // x22
  System_String_o *condMsg; // x24
  MasterMissionReceiveConfirmListViewObject_o *v29; // x22
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  UnityEngine_Object_o *v37; // x20
  Il2CppObject *v38; // x20
  float width; // s8
  float height; // s0
  UnityEngine_Vector3_o v41; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AB8704 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_UIPanel___, confirmItemList);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewObject___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Count__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Item__, v9);
    sub_1BAB41C(&System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo, v10);
    sub_1BAB41C(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v12);
    byte_4AB8704 = 1;
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
                         (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
      v42.fields.x = -v17;
      v42.fields.y = -v18;
      v42.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v42, 0LL);
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_46;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *)v19;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.objectList, (int32_t)v19, v20, v21);
  *(_QWORD *)&v41.fields.x = 0LL;
  v41.fields.z = 0.0;
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
               (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Item__);
      prefabObject = (Il2CppObject *)this->fields.prefabObject;
      v26 = (MissionListViewItem_o *)Item;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v27 = UnityEngine_Object__Instantiate_object_(
              prefabObject,
              (const MethodInfo_2F483D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v27 )
          goto LABEL_46;
        transform = UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)v27,
                      (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewObject___);
        if ( !v26 )
          goto LABEL_46;
        condMsg = v26->fields.condMsg;
        v29 = (MasterMissionReceiveConfirmListViewObject_o *)transform;
        transform = MissionListViewItem__get_EventMissionEntity(v26, 0LL);
        if ( !transform )
          goto LABEL_46;
        if ( !v29 )
          goto LABEL_46;
        MasterMissionReceiveConfirmListViewObject__SetItem(v29, condMsg, *((_DWORD *)transform + 21), i < size - 1, 0LL);
        MasterMissionReceiveConfirmListViewManager__SetObjectPosition(this, &v41, v29, v30);
        transform = this->fields.objectList;
        if ( !transform )
          goto LABEL_46;
        v33 = *((_QWORD *)transform + 2);
        v34 = Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Add__;
        ++*((_DWORD *)transform + 7);
        if ( !v33 )
          goto LABEL_46;
        v35 = *((int *)transform + 6);
        if ( (unsigned int)v35 >= *(_DWORD *)(v33 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)transform,
            (Il2CppObject *)v29,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = v33 + 8 * v35;
          *((_DWORD *)transform + 6) = v35 + 1;
          *(_QWORD *)(v36 + 32) = v29;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v36 + 32), (int32_t)v29, v31, v32);
        }
      }
    }
  }
  v37 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
  {
    transform = this->fields.scrollView;
    if ( transform )
    {
      v38 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)transform,
              (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( v38 )
        {
          width = UIPanel__get_width((UIPanel_o *)v38, 0LL);
          height = UIPanel__get_height((UIPanel_o *)v38, 0LL);
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
    sub_1BAB678(transform, v14);
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

  if ( (byte_4AB8703 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__,
      method);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__,
      v3);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__get_Current__,
      v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Clear__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__, v6);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v7);
    byte_4AB8703 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    objectList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__) )
  {
    if ( !v16.fields._current )
      sub_1BAB678(0LL, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v16.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69800620(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
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
    sub_1BAB678(objectList, method);
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
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AB8706 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__,
      *(_QWORD *)&mode);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__,
      v5);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__get_Current__,
      v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__get_Count__, v8);
    byte_4AB8706 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1BAB678(0LL, *(_QWORD *)&mode);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      objectList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__) )
    {
      if ( !v11.fields._current )
        sub_1BAB678(0LL, v10);
      MasterMissionReceiveConfirmListViewObject__Init(
        (MasterMissionReceiveConfirmListViewObject_o *)v11.fields._current,
        mode,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
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
  int32_t Size; // w21
  MasterMissionReceiveConfirmListViewManager_o *v8; // x23
  MasterMissionReceiveConfirmListViewManager_o *v9; // x23
  MasterMissionReceiveConfirmListViewManager_o *v10; // x23
  MasterMissionReceiveConfirmListViewManager_o *v11; // x23
  MasterMissionReceiveConfirmListViewManager_c *v12; // x0
  float y; // s8

  v6 = this;
  if ( (byte_4AB8705 & 1) == 0 )
  {
    this = (MasterMissionReceiveConfirmListViewManager_o *)sub_1BAB41C(
                                                             &MasterMissionReceiveConfirmListViewManager_TypeInfo,
                                                             basePosition);
    byte_4AB8705 = 1;
  }
  if ( !obj )
    goto LABEL_18;
  Size = MasterMissionReceiveConfirmListViewObject__GetSize(obj, 0LL);
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
  if ( !byte_4AB0697 )
  {
    this = (MasterMissionReceiveConfirmListViewManager_o *)sub_1BAB41C(&UnityEngine_Quaternion_TypeInfo, basePosition);
    byte_4AB0697 = 1;
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
  if ( !byte_4AB0696 )
  {
    this = (MasterMissionReceiveConfirmListViewManager_o *)sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, basePosition);
    byte_4AB0696 = 1;
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
    sub_1BAB678(this, basePosition);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v11, (int32_t)this, 0LL);
  MasterMissionReceiveConfirmListViewObject__SetBaseTransform(obj, 0LL);
  MasterMissionReceiveConfirmListViewObject__SetManager(obj, v6, 0LL);
  v12 = MasterMissionReceiveConfirmListViewManager_TypeInfo;
  y = basePosition->fields.y;
  if ( !MasterMissionReceiveConfirmListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewManager_TypeInfo);
    v12 = MasterMissionReceiveConfirmListViewManager_TypeInfo;
  }
  basePosition->fields.y = y - (float)(v12->static_fields->LIST_BLANK + Size);
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
  if ( (byte_4AB8702 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, value);
    byte_4AB8702 = 1;
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
      sub_1BAB678(v6, v7);
    alpha = UIProgressBar__get_alpha(v8, 0LL);
    UIProgressBar__set_alpha(v8, alpha, 0LL);
  }
}