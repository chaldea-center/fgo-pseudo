void ComponentPool_object____ctor(
        ComponentPool_T__o *this,
        UnityEngine_GameObject_o *prefab,
        int32_t poolSizeMax,
        const MethodInfo_3EE5C74 *method)
{
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 _1_System_Collections_Generic_List_T; // x0
  System_Collections_Generic_List_object__o *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x0
  System_Collections_Generic_List_object__o *v23; // x0
  ComponentPool_T__c *klass; // x8
  struct System_Collections_Generic_List_T__o *v25; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.prefab = prefab;
  this->fields.poolSizeMax = poolSizeMax;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.prefab, (int32_t)prefab, v8, v9, v10, v11, v12, v13);
  _1_System_Collections_Generic_List_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_T_;
  if ( (*(_WORD *)(_1_System_Collections_Generic_List_T + 309) & 1) == 0 )
    _1_System_Collections_Generic_List_T = sub_224B908();
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(_1_System_Collections_Generic_List_T);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_44833FC *)method->klass->rgctx_data->_3_System_Collections_Generic_List_T___ctor);
  this->fields.availableComponentList = (struct System_Collections_Generic_List_T__o *)v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_T_;
  if ( (*(_WORD *)(v22 + 309) & 1) == 0 )
    v22 = sub_224B908();
  v23 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v22);
  klass = method->klass;
  v25 = (struct System_Collections_Generic_List_T__o *)v23;
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_44833FC *)klass->rgctx_data->_3_System_Collections_Generic_List_T___ctor);
  this->fields.nonAvailableComponentList = v25;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nonAvailableComponentList,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


void ComponentPool_object___Clear(ComponentPool_T__o *this, const MethodInfo_3EE62B8 *method)
{
  struct System_Collections_Generic_List_T__o *availableComponentList; // x0
  __int128 v4; // q0
  _BOOL8 v5; // x0
  const MethodInfo_3EE6518 *v6; // x2
  struct System_Collections_Generic_List_T__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  __int128 v10; // q0
  _BOOL8 v11; // x0
  const MethodInfo_3EE6518 *v12; // x2
  struct System_Collections_Generic_List_T__o *nonAvailableComponentList; // x8
  int32_t v14; // w2
  int v15; // w9
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-40h] BYREF
  const MethodInfo_3EE62B8 *v18; // [xsp+38h] [xbp-28h] BYREF

  availableComponentList = this->fields.availableComponentList;
  memset(&v17, 0, sizeof(v17));
  v18 = method;
  if ( !availableComponentList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_object__o *)availableComponentList,
    (const MethodInfo_448473C *)method->klass->rgctx_data->_16_System_Collections_Generic_List_T__GetEnumerator);
  v4 = *(_OWORD *)&v16.fields._list;
  v17.fields._current = v16.fields._current;
  v16.fields._list = 0;
  *(_QWORD *)&v16.fields._index = &v17;
  *(_OWORD *)&v17.fields._list = v4;
  v16.fields._current = (Il2CppObject *)&v18;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_40FBAD8 *)v18->klass->rgctx_data->_20_System_Collections_Generic_List_Enumerator_T__MoveNext);
    if ( !v5 )
      break;
    ComponentPool_object___DestroyItem((ComponentPool_T__o *)v5, v17.fields._current, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_40FBAD4 *)v18->klass->rgctx_data->_22_System_Collections_Generic_List_T__Clear);
  v7 = this->fields.availableComponentList;
  if ( !v7 )
    goto LABEL_16;
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
  availableComponentList = this->fields.nonAvailableComponentList;
  if ( !availableComponentList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_object__o *)availableComponentList,
    (const MethodInfo_448473C *)v18->klass->rgctx_data->_16_System_Collections_Generic_List_T__GetEnumerator);
  v10 = *(_OWORD *)&v16.fields._list;
  v17.fields._current = v16.fields._current;
  v16.fields._list = 0;
  *(_QWORD *)&v16.fields._index = &v17;
  *(_OWORD *)&v17.fields._list = v10;
  v16.fields._current = (Il2CppObject *)&v18;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_40FBAD8 *)v18->klass->rgctx_data->_20_System_Collections_Generic_List_Enumerator_T__MoveNext);
    if ( !v11 )
      break;
    ComponentPool_object___DestroyItem((ComponentPool_T__o *)v11, v17.fields._current, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_40FBAD4 *)v18->klass->rgctx_data->_22_System_Collections_Generic_List_T__Clear);
  nonAvailableComponentList = this->fields.nonAvailableComponentList;
  if ( !nonAvailableComponentList )
LABEL_16:
    sub_2213CDC(availableComponentList, method);
  v14 = nonAvailableComponentList->fields._size;
  v15 = nonAvailableComponentList->fields._version + 1;
  nonAvailableComponentList->fields._size = 0;
  nonAvailableComponentList->fields._version = v15;
  if ( v14 >= 1 )
    System_Array__Clear((System_Array_o *)nonAvailableComponentList->fields._items, 0, v14, 0);
}


void ComponentPool_object___DestroyItem(ComponentPool_T__o *this, Il2CppObject *item, const MethodInfo_3EE6518 *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x19

  if ( (byte_59771C8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59771C8 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)item, 0, 0);
  if ( !v4 )
  {
    if ( !item )
      sub_2213CDC(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( !UnityEngine_Object__op_Equality(gameObject, 0, 0) )
    {
      v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      UnityEngine_Object__Destroy_83459800(v9, 0);
    }
  }
}


void ComponentPool_object___Finish(ComponentPool_T__o *this, const MethodInfo_3EE64EC *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  ComponentPool_object___Clear(this, (const MethodInfo_3EE62B8 *)method->klass->rgctx_data[1]._0_ComponentPool_T_);
  this->fields.prefab = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.prefab, 0, v3, v4, v5, v6, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void ComponentPool_object___Preload(ComponentPool_T__o *this, int32_t count, const MethodInfo_3EE5D40 *method)
{
  if ( (byte_59771C5 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59771C5 = 1;
  }
  ComponentPool_object___get_currentPoolSize(this, *(const MethodInfo_3EE5C48 **)&count);
}


Il2CppObject *ComponentPool_object___Rent(ComponentPool_T__o *this, const MethodInfo_3EE5D88 *method)
{
  UnityEngine_Object_o *v4; // x21
  System_Collections_Generic_List_object__o *availableComponentList; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x22
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x22
  Il2CppObject *prefab; // x21
  Il2CppObject *v12; // x0
  const MethodInfo_3EE5C48 *v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  MethodInfo *_7_System_Collections_Generic_List_T__Add; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8

  if ( (byte_59771C6 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59771C6 = 1;
  }
  v4 = 0;
  while ( 1 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    availableComponentList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(v4, 0, 0);
    if ( ((unsigned __int8)availableComponentList & 1) == 0 )
    {
      if ( !v4 )
        goto LABEL_33;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      if ( !UnityEngine_Object__op_Equality(gameObject, 0, 0) )
        break;
    }
    availableComponentList = (System_Collections_Generic_List_object__o *)this->fields.availableComponentList;
    if ( !availableComponentList )
      goto LABEL_33;
    if ( availableComponentList->fields._size <= 0 )
      break;
    availableComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            availableComponentList,
                                                                            0,
                                                                            (const MethodInfo_4483994 *)method->klass->rgctx_data->_8_System_Collections_Generic_List_T__get_Item);
    if ( !this->fields.availableComponentList )
      goto LABEL_33;
    v4 = (UnityEngine_Object_o *)availableComponentList;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)this->fields.availableComponentList,
      0,
      (const MethodInfo_44853FC *)method->klass->rgctx_data->_9_System_Collections_Generic_List_T__RemoveAt);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  availableComponentList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(v4, 0, 0);
  if ( ((unsigned __int8)availableComponentList & 1) != 0 )
    goto LABEL_36;
  if ( !v4 )
    goto LABEL_33;
  v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Equality(v10, 0, 0) )
  {
LABEL_36:
    prefab = (Il2CppObject *)this->fields.prefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v12 = UnityEngine_Object__Instantiate_object_(
            prefab,
            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    availableComponentList = (System_Collections_Generic_List_object__o *)GameObjectExtensions__SafeGetComponent_object_(
                                                                            (UnityEngine_GameObject_o *)v12,
                                                                            (const MethodInfo_38B8770 *)method->klass->rgctx_data->_5_GameObjectExtensions_SafeGetComponent_T_);
    v4 = (UnityEngine_Object_o *)availableComponentList;
    if ( !availableComponentList )
      goto LABEL_33;
  }
  availableComponentList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)v4,
                                                                          0);
  if ( !availableComponentList )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)availableComponentList, 1, 0);
  if ( ComponentPool_object___get_currentPoolSize(this, v13) >= this->fields.poolSizeMax )
    return (Il2CppObject *)v4;
  availableComponentList = (System_Collections_Generic_List_object__o *)this->fields.nonAvailableComponentList;
  if ( !availableComponentList
    || (items = availableComponentList->fields._items,
        _7_System_Collections_Generic_List_T__Add = method->klass->rgctx_data->_7_System_Collections_Generic_List_T__Add,
        ++availableComponentList->fields._version,
        !items) )
  {
LABEL_33:
    sub_2213CDC(availableComponentList, v6);
  }
  size = availableComponentList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      availableComponentList,
      (Il2CppObject *)v4,
      (const MethodInfo_4483C64 *)_7_System_Collections_Generic_List_T__Add->klass->rgctx_data[14].rgctxDataDummy);
  }
  else
  {
    v23 = &items->obj.klass + size;
    availableComponentList->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v4, v14, v15, v16, v17, v18, v19);
  }
  return (Il2CppObject *)v4;
}


Il2CppObject *ComponentPool_object___Rent_65953760(
        ComponentPool_T__o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo_3EE5FE0 *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x20

  transform = (UnityEngine_Component_o *)ComponentPool_object___Rent(
                                           this,
                                           (const MethodInfo_3EE5D88 *)method->klass->rgctx_data->_10_ComponentPool_T__Rent);
  if ( !transform
    || (v6 = (Il2CppObject *)transform,
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0) )
  {
    sub_2213CDC(transform, v5);
  }
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)transform, parent, 0);
  return v6;
}


Il2CppObject *ComponentPool_object___Rent_65953840(
        ComponentPool_T__o *this,
        UnityEngine_Transform_o *parent,
        UnityEngine_Vector3_o position,
        const MethodInfo_3EE6030 *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Component_o *transform; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x19
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  transform = (UnityEngine_Component_o *)ComponentPool_object___Rent_65953760(
                                           this,
                                           parent,
                                           (const MethodInfo_3EE5FE0 *)method->klass->rgctx_data->_11_ComponentPool_T__Rent);
  if ( !transform
    || (v9 = (Il2CppObject *)transform,
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0) )
  {
    sub_2213CDC(transform, v8);
  }
  v11.fields.x = x;
  v11.fields.y = y;
  v11.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v11, 0);
  return v9;
}


Il2CppObject *ComponentPool_object___Rent_65953944(
        ComponentPool_T__o *this,
        UnityEngine_Transform_o *parent,
        UnityEngine_Vector3_o position,
        UnityEngine_Quaternion_o rotation,
        const MethodInfo_3EE6098 *method)
{
  float w; // s8
  float z; // s9
  float y; // s10
  float x; // s11
  UnityEngine_Component_o *transform; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x19
  UnityEngine_Quaternion_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  w = rotation.fields.w;
  z = rotation.fields.z;
  y = rotation.fields.y;
  x = rotation.fields.x;
  transform = (UnityEngine_Component_o *)ComponentPool_object___Rent_65953840(
                                           this,
                                           parent,
                                           position,
                                           (const MethodInfo_3EE6030 *)method->klass->rgctx_data->_12_ComponentPool_T__Rent);
  if ( !transform
    || (v11 = (Il2CppObject *)transform,
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0) )
  {
    sub_2213CDC(transform, v10);
  }
  v13.fields.x = x;
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.w = w;
  UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)transform, v13, 0);
  return v11;
}


void ComponentPool_object___Return(ComponentPool_T__o *this, Il2CppObject *item, const MethodInfo_3EE6108 *method)
{
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *nonAvailableComponentList; // x0
  const MethodInfo_3EE6518 *v8; // x2
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_object__o *availableComponentList; // x8
  struct System_Object_array *items; // x9
  MethodInfo *_7_System_Collections_Generic_List_T__Add; // x10
  __int64 size; // x11
  Il2CppClass **v19; // x0

  if ( (byte_59771C7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59771C7 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)item, 0, 0) )
  {
    nonAvailableComponentList = (System_Collections_Generic_List_object__o *)this->fields.nonAvailableComponentList;
    if ( !nonAvailableComponentList )
      goto LABEL_17;
    nonAvailableComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Contains(
                                                                               nonAvailableComponentList,
                                                                               item,
                                                                               (const MethodInfo_4484000 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_T__Contains);
    if ( ((unsigned __int8)nonAvailableComponentList & 1) == 0 )
    {
      ComponentPool_object___DestroyItem((ComponentPool_T__o *)nonAvailableComponentList, item, v8);
      return;
    }
    if ( !item )
      goto LABEL_17;
    nonAvailableComponentList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)item,
                                                                               0);
    if ( !nonAvailableComponentList
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nonAvailableComponentList, 0, 0),
          (nonAvailableComponentList = (System_Collections_Generic_List_object__o *)this->fields.nonAvailableComponentList) == 0)
      || (nonAvailableComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                                     nonAvailableComponentList,
                                                                                     item,
                                                                                     (const MethodInfo_4485154 *)method->klass->rgctx_data->_15_System_Collections_Generic_List_T__Remove),
          (availableComponentList = (System_Collections_Generic_List_object__o *)this->fields.availableComponentList) == 0)
      || (items = availableComponentList->fields._items,
          _7_System_Collections_Generic_List_T__Add = method->klass->rgctx_data->_7_System_Collections_Generic_List_T__Add,
          ++availableComponentList->fields._version,
          !items) )
    {
LABEL_17:
      sub_2213CDC(nonAvailableComponentList, v6);
    }
    size = availableComponentList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        availableComponentList,
        item,
        (const MethodInfo_4483C64 *)_7_System_Collections_Generic_List_T__Add->klass->rgctx_data[14].rgctxDataDummy);
    }
    else
    {
      v19 = &items->obj.klass + size;
      availableComponentList->fields._size = size + 1;
      v19[4] = (Il2CppClass *)item;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)item, v9, v10, v11, v12, v13, v14);
    }
  }
}


void ComponentPool_object___ShrinkPool(
        ComponentPool_T__o *this,
        float rate,
        int32_t infmum,
        const MethodInfo_3EE6270 *method)
{
  float v4; // s0
  int v5; // w8

  if ( rate >= 0.0 && rate < 1.0 )
  {
    v4 = (float)this->fields.poolSizeMax * rate;
    if ( v4 == INFINITY )
      v5 = 0x80000000;
    else
      v5 = (int)v4;
    if ( v5 <= infmum )
      v5 = infmum;
    this->fields.poolSizeMax = v5;
  }
}


int32_t ComponentPool_object___get_currentPoolSize(ComponentPool_T__o *this, const MethodInfo_3EE5C48 *method)
{
  struct System_Collections_Generic_List_T__o *availableComponentList; // x8
  struct System_Collections_Generic_List_T__o *nonAvailableComponentList; // x9

  availableComponentList = this->fields.availableComponentList;
  if ( !availableComponentList || (nonAvailableComponentList = this->fields.nonAvailableComponentList) == 0 )
    sub_2213CDC(this, method);
  return nonAvailableComponentList->fields._size + availableComponentList->fields._size;
}