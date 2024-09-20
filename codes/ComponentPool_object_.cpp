void __fastcall ComponentPool_object____ctor(
        ComponentPool_T__o *this,
        UnityEngine_GameObject_o *prefab,
        int32_t poolSizeMax,
        const MethodInfo_30F9E68 *method)
{
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppClass *_1_System_Collections_Generic_List_T; // x0
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppClass *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x0
  ComponentPool_T__c *klass; // x8
  struct System_Collections_Generic_List_T__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.prefab = prefab;
  this->fields.poolSizeMax = poolSizeMax;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.prefab, (int32_t)prefab, v8, v9);
  _1_System_Collections_Generic_List_T = method->klass->rgctx_data->_1_System_Collections_Generic_List_T_;
  if ( (BYTE5(_1_System_Collections_Generic_List_T->vtable[0].methodPtr) & 1) == 0 )
    _1_System_Collections_Generic_List_T = (Il2CppClass *)sub_1BDA48C(_1_System_Collections_Generic_List_T);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(_1_System_Collections_Generic_List_T);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)method->klass->rgctx_data->_3_System_Collections_Generic_List_T___ctor);
  this->fields.availableComponentList = (struct System_Collections_Generic_List_T__o *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v11, v12, v13);
  v14 = method->klass->rgctx_data->_1_System_Collections_Generic_List_T_;
  if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
    v14 = (Il2CppClass *)sub_1BDA48C(v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B887FC(v14);
  klass = method->klass;
  v17 = (struct System_Collections_Generic_List_T__o *)v15;
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34FD000 *)klass->rgctx_data->_3_System_Collections_Generic_List_T___ctor);
  this->fields.nonAvailableComponentList = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.nonAvailableComponentList, (int32_t)v17, v18, v19);
}


void __fastcall ComponentPool_object___Clear(ComponentPool_T__o *this, const MethodInfo_30FA4C0 *method)
{
  struct System_Collections_Generic_List_T__o *availableComponentList; // x0
  _BOOL8 v5; // x0
  const MethodInfo_30FA734 *v6; // x2
  struct System_Collections_Generic_List_T__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  _BOOL8 v10; // x0
  const MethodInfo_30FA734 *v11; // x2
  struct System_Collections_Generic_List_T__o *nonAvailableComponentList; // x8
  int32_t v13; // w2
  int v14; // w9
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-50h] BYREF

  memset(&i, 0, sizeof(i));
  availableComponentList = this->fields.availableComponentList;
  if ( !availableComponentList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)availableComponentList,
    (const MethodInfo_34FE32C *)method->klass->rgctx_data->_16_System_Collections_Generic_List_T__GetEnumerator);
  for ( i = v15; ; ComponentPool_object___DestroyItem((ComponentPool_T__o *)v5, i.fields._current, v6) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_3278304 *)method->klass->rgctx_data->_20_System_Collections_Generic_List_Enumerator_T__MoveNext);
    if ( !v5 )
      break;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3278300 *)method->klass->rgctx_data->_22_System_Collections_Generic_List_T__Clear);
  v7 = this->fields.availableComponentList;
  if ( !v7 )
    goto LABEL_16;
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0LL);
  availableComponentList = this->fields.nonAvailableComponentList;
  if ( !availableComponentList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)availableComponentList,
    (const MethodInfo_34FE32C *)method->klass->rgctx_data->_16_System_Collections_Generic_List_T__GetEnumerator);
  for ( i = v15; ; ComponentPool_object___DestroyItem((ComponentPool_T__o *)v10, i.fields._current, v11) )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3278304 *)method->klass->rgctx_data->_20_System_Collections_Generic_List_Enumerator_T__MoveNext);
    if ( !v10 )
      break;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3278300 *)method->klass->rgctx_data->_22_System_Collections_Generic_List_T__Clear);
  nonAvailableComponentList = this->fields.nonAvailableComponentList;
  if ( !nonAvailableComponentList )
LABEL_16:
    sub_1B8880C(availableComponentList, method);
  v13 = nonAvailableComponentList->fields._size;
  v14 = nonAvailableComponentList->fields._version + 1;
  nonAvailableComponentList->fields._size = 0;
  nonAvailableComponentList->fields._version = v14;
  if ( v13 >= 1 )
    System_Array__Clear((System_Array_o *)nonAvailableComponentList->fields._items, 0, v13, 0LL);
}


void __fastcall ComponentPool_object___DestroyItem(
        ComponentPool_T__o *this,
        Il2CppObject *item,
        const MethodInfo_30FA734 *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v7; // x19

  if ( (byte_4A60E45 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A60E45 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)item, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !item )
      sub_1B8880C(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
    {
      v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v7, 0LL);
    }
  }
}


void __fastcall ComponentPool_object___Finish(ComponentPool_T__o *this, const MethodInfo_30FA708 *method)
{
  int32_t v3; // w2
  int32_t v4; // w3

  ComponentPool_object___Clear(this, (const MethodInfo_30FA4C0 *)method->klass->rgctx_data[1]._0_ComponentPool_T_);
  this->fields.prefab = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.prefab, 0, v3, v4);
}


void __fastcall ComponentPool_object___Preload(
        ComponentPool_T__o *this,
        int32_t count,
        const MethodInfo_30F9F2C *method)
{
  if ( (byte_4A60E42 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A60E42 = 1;
  }
  ComponentPool_object___get_currentPoolSize(
    this,
    (const MethodInfo_30F9E3C *)method->klass->rgctx_data->_4_ComponentPool_T__get_currentPoolSize);
}


Il2CppObject *__fastcall ComponentPool_object___Rent(ComponentPool_T__o *this, const MethodInfo_30F9F84 *method)
{
  UnityEngine_Object_o *v4; // x21
  System_Collections_Generic_List_object__o *availableComponentList; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *v8; // x22
  Il2CppObject *prefab; // x21
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  MethodInfo *_7_System_Collections_Generic_List_T__Add; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4A60E43 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A60E43 = 1;
  }
  v4 = 0LL;
  while ( 1 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    availableComponentList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
    if ( ((unsigned __int8)availableComponentList & 1) == 0 )
    {
      if ( !v4 )
        goto LABEL_33;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
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
                                                                            (const MethodInfo_34FD564 *)method->klass->rgctx_data->_8_System_Collections_Generic_List_T__get_Item);
    if ( !this->fields.availableComponentList )
      goto LABEL_33;
    v4 = (UnityEngine_Object_o *)availableComponentList;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)this->fields.availableComponentList,
      0,
      (const MethodInfo_34FF008 *)method->klass->rgctx_data->_9_System_Collections_Generic_List_T__RemoveAt);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  availableComponentList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)availableComponentList & 1) != 0 )
    goto LABEL_36;
  if ( !v4 )
    goto LABEL_33;
  v8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v8, 0LL, 0LL) )
  {
LABEL_36:
    prefab = (Il2CppObject *)this->fields.prefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__Instantiate_object_(
            prefab,
            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    availableComponentList = (System_Collections_Generic_List_object__o *)GameObjectExtensions__SafeGetComponent_object_(
                                                                            (UnityEngine_GameObject_o *)v10,
                                                                            (const MethodInfo_2ED09A0 *)method->klass->rgctx_data->_5_GameObjectExtensions_SafeGetComponent_T_);
    v4 = (UnityEngine_Object_o *)availableComponentList;
    if ( !availableComponentList )
      goto LABEL_33;
  }
  availableComponentList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)v4,
                                                                          0LL);
  if ( !availableComponentList )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)availableComponentList, 1, 0LL);
  if ( ComponentPool_object___get_currentPoolSize(
         this,
         (const MethodInfo_30F9E3C *)method->klass->rgctx_data->_4_ComponentPool_T__get_currentPoolSize) >= this->fields.poolSizeMax )
    return (Il2CppObject *)v4;
  availableComponentList = (System_Collections_Generic_List_object__o *)this->fields.nonAvailableComponentList;
  if ( !availableComponentList
    || (items = availableComponentList->fields._items,
        _7_System_Collections_Generic_List_T__Add = method->klass->rgctx_data->_7_System_Collections_Generic_List_T__Add,
        ++availableComponentList->fields._version,
        !items) )
  {
LABEL_33:
    sub_1B8880C(availableComponentList, v6);
  }
  size = availableComponentList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      availableComponentList,
      (Il2CppObject *)v4,
      (const MethodInfo_34FD834 *)_7_System_Collections_Generic_List_T__Add->klass->rgctx_data[14].rgctxDataDummy);
  }
  else
  {
    v16 = &items->obj.klass + size;
    availableComponentList->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v4, v11, v12);
  }
  return (Il2CppObject *)v4;
}


Il2CppObject *__fastcall ComponentPool_object___Rent_51356136(
        ComponentPool_T__o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo_30FA1E8 *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x20

  transform = (UnityEngine_Component_o *)ComponentPool_object___Rent(
                                           this,
                                           (const MethodInfo_30F9F84 *)method->klass->rgctx_data->_10_ComponentPool_T__Rent);
  if ( !transform
    || (v6 = (Il2CppObject *)transform,
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL) )
  {
    sub_1B8880C(transform, v5);
  }
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)transform, parent, 0LL);
  return v6;
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall ComponentPool_object___Rent_51356216(
        ComponentPool_T__o *this,
        UnityEngine_Transform_o *parent,
        UnityEngine_Vector3_o position,
        const MethodInfo_30FA238 *method)
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
  transform = (UnityEngine_Component_o *)ComponentPool_object___Rent_51356136(
                                           this,
                                           parent,
                                           (const MethodInfo_30FA1E8 *)method->klass->rgctx_data->_11_ComponentPool_T__Rent);
  if ( !transform
    || (v9 = (Il2CppObject *)transform,
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL) )
  {
    sub_1B8880C(transform, v8);
  }
  v11.fields.x = x;
  v11.fields.y = y;
  v11.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v11, 0LL);
  return v9;
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall ComponentPool_object___Rent_51356320(
        ComponentPool_T__o *this,
        UnityEngine_Transform_o *parent,
        UnityEngine_Vector3_o position,
        UnityEngine_Quaternion_o rotation,
        const MethodInfo_30FA2A0 *method)
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
  transform = (UnityEngine_Component_o *)ComponentPool_object___Rent_51356216(
                                           this,
                                           parent,
                                           position,
                                           (const MethodInfo_30FA238 *)method->klass->rgctx_data->_12_ComponentPool_T__Rent);
  if ( !transform
    || (v11 = (Il2CppObject *)transform,
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL) )
  {
    sub_1B8880C(transform, v10);
  }
  v13.fields.x = x;
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.w = w;
  UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)transform, v13, 0LL);
  return v11;
}


void __fastcall ComponentPool_object___Return(
        ComponentPool_T__o *this,
        Il2CppObject *item,
        const MethodInfo_30FA310 *method)
{
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *nonAvailableComponentList; // x0
  const MethodInfo_30FA734 *v8; // x2
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  MethodInfo *_7_System_Collections_Generic_List_T__Add; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4A60E44 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A60E44 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)item, 0LL, 0LL) )
  {
    nonAvailableComponentList = (System_Collections_Generic_List_object__o *)this->fields.nonAvailableComponentList;
    if ( !nonAvailableComponentList )
      goto LABEL_17;
    nonAvailableComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Contains(
                                                                               nonAvailableComponentList,
                                                                               item,
                                                                               (const MethodInfo_34FDBC4 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_T__Contains);
    if ( ((unsigned __int8)nonAvailableComponentList & 1) == 0 )
    {
      ComponentPool_object___DestroyItem((ComponentPool_T__o *)nonAvailableComponentList, item, v8);
      return;
    }
    if ( !item )
      goto LABEL_17;
    nonAvailableComponentList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)item,
                                                                               0LL);
    if ( !nonAvailableComponentList
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nonAvailableComponentList, 0, 0LL),
          (nonAvailableComponentList = (System_Collections_Generic_List_object__o *)this->fields.nonAvailableComponentList) == 0LL)
      || (System_Collections_Generic_List_object___Remove(
            nonAvailableComponentList,
            item,
            (const MethodInfo_34FED5C *)method->klass->rgctx_data->_15_System_Collections_Generic_List_T__Remove),
          (nonAvailableComponentList = (System_Collections_Generic_List_object__o *)this->fields.availableComponentList) == 0LL)
      || (items = nonAvailableComponentList->fields._items,
          _7_System_Collections_Generic_List_T__Add = method->klass->rgctx_data->_7_System_Collections_Generic_List_T__Add,
          ++nonAvailableComponentList->fields._version,
          !items) )
    {
LABEL_17:
      sub_1B8880C(nonAvailableComponentList, v6);
    }
    size = nonAvailableComponentList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        nonAvailableComponentList,
        item,
        (const MethodInfo_34FD834 *)_7_System_Collections_Generic_List_T__Add->klass->rgctx_data[14].rgctxDataDummy);
    }
    else
    {
      v14 = &items->obj.klass + size;
      nonAvailableComponentList->fields._size = size + 1;
      v14[4] = (Il2CppClass *)item;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)item, v9, v10);
    }
  }
}


void __fastcall ComponentPool_object___ShrinkPool(
        ComponentPool_T__o *this,
        float rate,
        int32_t infmum,
        const MethodInfo_30FA478 *method)
{
  float v4; // s0
  int v5; // w8

  if ( rate >= 0.0 && rate < 1.0 )
  {
    v4 = (float)this->fields.poolSizeMax * rate;
    v5 = (int)v4;
    if ( v4 == INFINITY )
      v5 = 0x80000000;
    if ( v5 <= infmum )
      v5 = infmum;
    this->fields.poolSizeMax = v5;
  }
}


int32_t __fastcall ComponentPool_object___get_currentPoolSize(
        ComponentPool_T__o *this,
        const MethodInfo_30F9E3C *method)
{
  struct System_Collections_Generic_List_T__o *availableComponentList; // x8
  struct System_Collections_Generic_List_T__o *nonAvailableComponentList; // x9

  availableComponentList = this->fields.availableComponentList;
  if ( !availableComponentList || (nonAvailableComponentList = this->fields.nonAvailableComponentList) == 0LL )
    sub_1B8880C(this, method);
  return nonAvailableComponentList->fields._size + availableComponentList->fields._size;
}