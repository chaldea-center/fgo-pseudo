void __fastcall MasterMissionReceiveConfirmListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_4A5DC5B & 1) == 0 )
  {
    sub_1B885B0(&MasterMissionReceiveConfirmListViewManager_TypeInfo);
    byte_4A5DC5B = 1;
  }
  MasterMissionReceiveConfirmListViewManager_TypeInfo->static_fields->LIST_BLANK = 5;
}


void __fastcall MasterMissionReceiveConfirmListViewManager___ctor(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_4A5DC5A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
    byte_4A5DC5A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5);
  this->fields.isInput = 1;
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


void __fastcall MasterMissionReceiveConfirmListViewManager__CreateList(
        MasterMissionReceiveConfirmListViewManager_o *this,
        System_Collections_Generic_List_MasterMissionListViewItem__o *confirmItemList,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  void *transform; // x0
  Il2CppObject *Component_object; // x21
  float v9; // s8
  float v10; // s9
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t size; // w26
  int32_t i; // w21
  Il2CppObject *Item; // x0
  Il2CppObject *prefabObject; // x22
  MissionListViewItem_o *v18; // x23
  Il2CppObject *v19; // x22
  System_String_o *condMsg; // x24
  MasterMissionReceiveConfirmListViewObject_o *v21; // x22
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  __int64 v28; // x8
  UnityEngine_Object_o *v29; // x20
  Il2CppObject *v30; // x20
  float width; // s8
  float height; // s0
  UnityEngine_Vector3_o v33; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5DC57 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DC57 = 1;
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
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
      v9 = *((float *)&Component_object[20].monitor + 1);
      v10 = *(float *)&Component_object[21].klass;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_46;
      v34.fields.x = -v9;
      v34.fields.y = -v10;
      v34.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v34, 0LL);
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_46;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.objectList, (int32_t)v11, v12, v13);
  *(_QWORD *)&v33.fields.x = 0LL;
  v33.fields.z = 0.0;
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
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Item__);
      prefabObject = (Il2CppObject *)this->fields.prefabObject;
      v18 = (MissionListViewItem_o *)Item;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v19 = UnityEngine_Object__Instantiate_object_(
              prefabObject,
              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v19 )
          goto LABEL_46;
        transform = UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)v19,
                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewObject___);
        if ( !v18 )
          goto LABEL_46;
        condMsg = v18->fields.condMsg;
        v21 = (MasterMissionReceiveConfirmListViewObject_o *)transform;
        transform = MissionListViewItem__get_EventMissionEntity(v18, 0LL);
        if ( !transform )
          goto LABEL_46;
        if ( !v21 )
          goto LABEL_46;
        MasterMissionReceiveConfirmListViewObject__SetItem(v21, condMsg, *((_DWORD *)transform + 21), i < size - 1, 0LL);
        MasterMissionReceiveConfirmListViewManager__SetObjectPosition(this, &v33, v21, v22);
        transform = this->fields.objectList;
        if ( !transform )
          goto LABEL_46;
        v25 = *((_QWORD *)transform + 2);
        v26 = Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Add__;
        ++*((_DWORD *)transform + 7);
        if ( !v25 )
          goto LABEL_46;
        v27 = *((int *)transform + 6);
        if ( (unsigned int)v27 >= *(_DWORD *)(v25 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)transform,
            (Il2CppObject *)v21,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = v25 + 8 * v27;
          *((_DWORD *)transform + 6) = v27 + 1;
          *(_QWORD *)(v28 + 32) = v21;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 32), (int32_t)v21, v23, v24);
        }
      }
    }
  }
  v29 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
  {
    transform = this->fields.scrollView;
    if ( transform )
    {
      v30 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)transform,
              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( v30 )
        {
          width = UIPanel__get_width((UIPanel_o *)v30, 0LL);
          height = UIPanel__get_height((UIPanel_o *)v30, 0LL);
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
    sub_1B8880C(transform, v6);
  }
}


void __fastcall MasterMissionReceiveConfirmListViewManager__DestroyList(
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

  if ( (byte_4A5DC56 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DC56 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__) )
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
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewManager__RequestListObject(
        MasterMissionReceiveConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5DC59 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__get_Count__);
    byte_4A5DC59 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, *(_QWORD *)&mode);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      objectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1B8880C(0LL, v6);
      MasterMissionReceiveConfirmListViewObject__Init(
        (MasterMissionReceiveConfirmListViewObject_o *)v7.fields._current,
        mode,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
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
  if ( (byte_4A5DC58 & 1) == 0 )
  {
    this = (MasterMissionReceiveConfirmListViewManager_o *)sub_1B885B0(&MasterMissionReceiveConfirmListViewManager_TypeInfo);
    byte_4A5DC58 = 1;
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
  if ( !byte_4A55CE7 )
  {
    this = (MasterMissionReceiveConfirmListViewManager_o *)sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
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
  if ( !byte_4A55CE6 )
  {
    this = (MasterMissionReceiveConfirmListViewManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
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
    sub_1B8880C(this, basePosition);
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
  if ( (byte_4A5DC55 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DC55 = 1;
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
      sub_1B8880C(v6, v7);
    alpha = UIProgressBar__get_alpha(v8, 0LL);
    UIProgressBar__set_alpha(v8, alpha, 0LL);
  }
}