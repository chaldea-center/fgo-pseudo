void __fastcall ComponentPool_object____ctor(
        ComponentPool_T__o *this,
        UnityEngine_GameObject_o *prefab,
        int32_t poolSizeMax,
        const MethodInfo_32359B4 *method)
{
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 _1_System_Collections_Generic_List_T; // x0
  System_Collections_Generic_List_object__o *v15; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x0
  System_Collections_Generic_List_object__o *v23; // x0
  ComponentPool_T__c *klass; // x8
  struct System_Collections_Generic_List_T__o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.prefab = prefab;
  this->fields.poolSizeMax = poolSizeMax;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.prefab, (int64_t)prefab, v8, v9, v10, v11, v12, v13);
  _1_System_Collections_Generic_List_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_T_;
  if ( (*(_BYTE *)(_1_System_Collections_Generic_List_T + 309) & 1) == 0 )
    _1_System_Collections_Generic_List_T = sub_1C73D14();
  v15 = (System_Collections_Generic_List_object__o *)sub_1C22084(_1_System_Collections_Generic_List_T);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_364E880 *)method->klass->rgctx_data->_3_System_Collections_Generic_List_T___ctor);
  this->fields.availableComponentList = (struct System_Collections_Generic_List_T__o *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_T_;
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1C73D14();
  v23 = (System_Collections_Generic_List_object__o *)sub_1C22084(v22);
  klass = method->klass;
  v25 = (struct System_Collections_Generic_List_T__o *)v23;
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_364E880 *)klass->rgctx_data->_3_System_Collections_Generic_List_T___ctor);
  this->fields.nonAvailableComponentList = v25;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.nonAvailableComponentList,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


void __fastcall ComponentPool_object___Clear(ComponentPool_T__o *this, const MethodInfo_323600C *method)
{
  struct System_Collections_Generic_List_T__o *availableComponentList; // x0
  _BOOL8 v5; // x0
  const MethodInfo_3236280 *v6; // x2
  struct System_Collections_Generic_List_T__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  _BOOL8 v10; // x0
  const MethodInfo_3236280 *v11; // x2
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
    (const MethodInfo_364FBAC *)method->klass->rgctx_data->_16_System_Collections_Generic_List_T__GetEnumerator);
  for ( i = v15; ; ComponentPool_object___DestroyItem((ComponentPool_T__o *)v5, i.fields._current, v6) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_33E129C *)method->klass->rgctx_data->_20_System_Collections_Generic_List_Enumerator_T__MoveNext);
    if ( !v5 )
      break;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33E1298 *)method->klass->rgctx_data->_22_System_Collections_Generic_List_T__Clear);
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
    (const MethodInfo_364FBAC *)method->klass->rgctx_data->_16_System_Collections_Generic_List_T__GetEnumerator);
  for ( i = v15; ; ComponentPool_object___DestroyItem((ComponentPool_T__o *)v10, i.fields._current, v11) )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_33E129C *)method->klass->rgctx_data->_20_System_Collections_Generic_List_Enumerator_T__MoveNext);
    if ( !v10 )
      break;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33E1298 *)method->klass->rgctx_data->_22_System_Collections_Generic_List_T__Clear);
  nonAvailableComponentList = this->fields.nonAvailableComponentList;
  if ( !nonAvailableComponentList )
LABEL_16:
    sub_1C22094(availableComponentList, method);
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
        const MethodInfo_3236280 *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v7; // x19

  if ( (byte_4BE245B & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE245B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)item, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !item )
      sub_1C22094(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
    {
      v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(v7, 0LL);
    }
  }
}


void __fastcall ComponentPool_object___Finish(ComponentPool_T__o *this, const MethodInfo_3236254 *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  ComponentPool_object___Clear(this, (const MethodInfo_323600C *)method->klass->rgctx_data[1]._0_ComponentPool_T_);
  this->fields.prefab = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.prefab, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall ComponentPool_object___Preload(
        ComponentPool_T__o *this,
        int32_t count,
        const MethodInfo_3235A78 *method)
{
  if ( (byte_4BE2458 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE2458 = 1;
  }
  ComponentPool_object___get_currentPoolSize(
    this,
    (const MethodInfo_3235988 *)method->klass->rgctx_data->_4_ComponentPool_T__get_currentPoolSize);
}


Il2CppObject *__fastcall ComponentPool_object___Rent(ComponentPool_T__o *this, const MethodInfo_3235AD0 *method)
{
  UnityEngine_Object_o *v4; // x21
  System_Collections_Generic_List_object__o *availableComponentList; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *v8; // x22
  Il2CppObject *prefab; // x21
  Il2CppObject *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  MethodInfo *_7_System_Collections_Generic_List_T__Add; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8

  if ( (byte_4BE2459 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE2459 = 1;
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
                                                                            (const MethodInfo_364EDE4 *)method->klass->rgctx_data->_8_System_Collections_Generic_List_T__get_Item);
    if ( !this->fields.availableComponentList )
      goto LABEL_33;
    v4 = (UnityEngine_Object_o *)availableComponentList;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)this->fields.availableComponentList,
      0,
      (const MethodInfo_3650888 *)method->klass->rgctx_data->_9_System_Collections_Generic_List_T__RemoveAt);
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
            (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    availableComponentList = (System_Collections_Generic_List_object__o *)GameObjectExtensions__SafeGetComponent_object_(
                                                                            (UnityEngine_GameObject_o *)v10,
                                                                            (const MethodInfo_300201C *)method->klass->rgctx_data->_5_GameObjectExtensions_SafeGetComponent_T_);
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
         (const MethodInfo_3235988 *)method->klass->rgctx_data->_4_ComponentPool_T__get_currentPoolSize) >= this->fields.poolSizeMax )
    return (Il2CppObject *)v4;
  availableComponentList = (System_Collections_Generic_List_object__o *)this->fields.nonAvailableComponentList;
  if ( !availableComponentList
    || (items = availableComponentList->fields._items,
        _7_System_Collections_Generic_List_T__Add = method->klass->rgctx_data->_7_System_Collections_Generic_List_T__Add,
        ++availableComponentList->fields._version,
        !items) )
  {
LABEL_33:
    sub_1C22094(availableComponentList, v6);
  }
  size = availableComponentList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      availableComponentList,
      (Il2CppObject *)v4,
      (const MethodInfo_364F0B4 *)_7_System_Collections_Generic_List_T__Add->klass->rgctx_data[14].rgctxDataDummy);
  }
  else
  {
    v20 = &items->obj.klass + size;
    availableComponentList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v4;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), (int64_t)v4, v11, v12, v13, v14, v15, v16);
  }
  return (Il2CppObject *)v4;
}


Il2CppObject *__fastcall ComponentPool_object___Rent_52649268(
        ComponentPool_T__o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo_3235D34 *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x20

  transform = (UnityEngine_Component_o *)ComponentPool_object___Rent(
                                           this,
                                           (const MethodInfo_3235AD0 *)method->klass->rgctx_data->_10_ComponentPool_T__Rent);
  if ( !transform
    || (v6 = (Il2CppObject *)transform,
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL) )
  {
    sub_1C22094(transform, v5);
  }
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)transform, parent, 0LL);
  return v6;
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall ComponentPool_object___Rent_52649348(
        ComponentPool_T__o *this,
        UnityEngine_Transform_o *parent,
        UnityEngine_Vector3_o position,
        const MethodInfo_3235D84 *method)
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
  transform = (UnityEngine_Component_o *)ComponentPool_object___Rent_52649268(
                                           this,
                                           parent,
                                           (const MethodInfo_3235D34 *)method->klass->rgctx_data->_11_ComponentPool_T__Rent);
  if ( !transform
    || (v9 = (Il2CppObject *)transform,
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL) )
  {
    sub_1C22094(transform, v8);
  }
  v11.fields.x = x;
  v11.fields.y = y;
  v11.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v11, 0LL);
  return v9;
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall ComponentPool_object___Rent_52649452(
        ComponentPool_T__o *this,
        UnityEngine_Transform_o *parent,
        UnityEngine_Vector3_o position,
        UnityEngine_Quaternion_o rotation,
        const MethodInfo_3235DEC *method)
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
  transform = (UnityEngine_Component_o *)ComponentPool_object___Rent_52649348(
                                           this,
                                           parent,
                                           position,
                                           (const MethodInfo_3235D84 *)method->klass->rgctx_data->_12_ComponentPool_T__Rent);
  if ( !transform
    || (v11 = (Il2CppObject *)transform,
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL) )
  {
    sub_1C22094(transform, v10);
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
        const MethodInfo_3235E5C *method)
{
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *nonAvailableComponentList; // x0
  const MethodInfo_3236280 *v8; // x2
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  MethodInfo *_7_System_Collections_Generic_List_T__Add; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  if ( (byte_4BE245A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE245A = 1;
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
                                                                               (const MethodInfo_364F444 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_T__Contains);
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
            (const MethodInfo_36505DC *)method->klass->rgctx_data->_15_System_Collections_Generic_List_T__Remove),
          (nonAvailableComponentList = (System_Collections_Generic_List_object__o *)this->fields.availableComponentList) == 0LL)
      || (items = nonAvailableComponentList->fields._items,
          _7_System_Collections_Generic_List_T__Add = method->klass->rgctx_data->_7_System_Collections_Generic_List_T__Add,
          ++nonAvailableComponentList->fields._version,
          !items) )
    {
LABEL_17:
      sub_1C22094(nonAvailableComponentList, v6);
    }
    size = nonAvailableComponentList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        nonAvailableComponentList,
        item,
        (const MethodInfo_364F0B4 *)_7_System_Collections_Generic_List_T__Add->klass->rgctx_data[14].rgctxDataDummy);
    }
    else
    {
      v18 = &items->obj.klass + size;
      nonAvailableComponentList->fields._size = size + 1;
      v18[4] = (Il2CppClass *)item;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)item, v9, v10, v11, v12, v13, v14);
    }
  }
}


void __fastcall ComponentPool_object___ShrinkPool(
        ComponentPool_T__o *this,
        float rate,
        int32_t infmum,
        const MethodInfo_3235FC4 *method)
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
        const MethodInfo_3235988 *method)
{
  struct System_Collections_Generic_List_T__o *availableComponentList; // x8
  struct System_Collections_Generic_List_T__o *nonAvailableComponentList; // x9

  availableComponentList = this->fields.availableComponentList;
  if ( !availableComponentList || (nonAvailableComponentList = this->fields.nonAvailableComponentList) == 0LL )
    sub_1C22094(this, method);
  return nonAvailableComponentList->fields._size + availableComponentList->fields._size;
}