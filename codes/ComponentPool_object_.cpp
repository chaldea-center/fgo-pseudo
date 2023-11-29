void __fastcall ComponentPool_object___Clear(ComponentPool_T__o *this, const MethodInfo_25CB278 *method)
{
  MethodInfo *_13_ComponentPool_T__DestroyItem; // x2
  int v5; // w24
  Il2CppClass *_18_System_Collections_Generic_List_Enumerator_T; // x21
  unsigned __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  MethodInfo *v10; // x2
  int v11; // w24
  Il2CppClass *v12; // x23
  unsigned __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-88h] BYREF
  int v17[2]; // [xsp+20h] [xbp-70h] BYREF
  int v18; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4103514 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, method);
    byte_4103514 = 1;
  }
  memset(&i, 0, sizeof(i));
  v18 = 0;
  if ( !this->fields.availableComponentList )
    goto LABEL_35;
  method->klass->rgctx_data->_15_System_Collections_Generic_List_T__GetEnumerator->methodPointer();
  for ( i = v16;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_T__MoveNext);
        ((void (__fastcall *)(ComponentPool_T__o *, Il2CppObject *, MethodInfo *))_13_ComponentPool_T__DestroyItem->methodPointer)(
          this,
          i.fields.current,
          _13_ComponentPool_T__DestroyItem) )
  {
    _13_ComponentPool_T__DestroyItem = method->klass->rgctx_data->_13_ComponentPool_T__DestroyItem;
  }
  v5 = 1;
  v17[0] = 54;
  v18 = 1;
  _18_System_Collections_Generic_List_Enumerator_T = method->klass->rgctx_data->_18_System_Collections_Generic_List_Enumerator_T_;
  if ( (BYTE2(_18_System_Collections_Generic_List_Enumerator_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass->rgctx_data->_18_System_Collections_Generic_List_Enumerator_T_);
  v16.fields.list = (struct System_Collections_Generic_List_T__o *)_18_System_Collections_Generic_List_Enumerator_T;
  if ( *(_WORD *)&_18_System_Collections_Generic_List_Enumerator_T->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &_18_System_Collections_Generic_List_Enumerator_T->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&_18_System_Collections_Generic_List_Enumerator_T->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&_18_System_Collections_Generic_List_Enumerator_T->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AAFEF8(&v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(int *, _QWORD))p_method)(v17, *(_QWORD *)(p_method + 8));
  if ( v17[0] == 54 )
  {
    v5 = 0;
    v18 = 0;
  }
  if ( !this->fields.availableComponentList )
    goto LABEL_35;
  method->klass->rgctx_data->_19_System_Collections_Generic_List_T__Clear->methodPointer();
  if ( !this->fields.nonAvailableComponentList )
    goto LABEL_35;
  method->klass->rgctx_data->_15_System_Collections_Generic_List_T__GetEnumerator->methodPointer();
  for ( i = v16;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_T__MoveNext);
        ((void (__fastcall *)(ComponentPool_T__o *, Il2CppObject *, MethodInfo *))v10->methodPointer)(
          this,
          i.fields.current,
          v10) )
  {
    v10 = method->klass->rgctx_data->_13_ComponentPool_T__DestroyItem;
  }
  v17[v5] = 119;
  v11 = ++v18;
  v12 = method->klass->rgctx_data->_18_System_Collections_Generic_List_Enumerator_T_;
  if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass->rgctx_data->_18_System_Collections_Generic_List_Enumerator_T_);
  v16.fields.list = (struct System_Collections_Generic_List_T__o *)v12;
  if ( *(_WORD *)&v12->_2.bitflags1 )
  {
    v13 = 0LL;
    v14 = &v12->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v14 - 1) != System_IDisposable_TypeInfo )
    {
      ++v13;
      v14 += 4;
      if ( v13 >= *(unsigned __int16 *)&v12->_2.bitflags1 )
        goto LABEL_28;
    }
    v15 = (__int64)&v12->vtable[*v14].method;
  }
  else
  {
LABEL_28:
    v15 = sub_AAFEF8(&v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(int *, _QWORD))v15)(v17, *(_QWORD *)(v15 + 8));
  if ( v11 && v17[v11 - 1] == 119 )
    v18 = v11 - 1;
  if ( !this->fields.nonAvailableComponentList )
LABEL_35:
    sub_B170D4();
  method->klass->rgctx_data->_19_System_Collections_Generic_List_T__Clear->methodPointer();
}


void __fastcall ComponentPool_object___DestroyItem(
        ComponentPool_T__o *this,
        Il2CppObject *item,
        const MethodInfo_25CB5FC *method)
{
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v5; // x19

  if ( (byte_4103515 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_4103515 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)item, 0LL, 0LL) )
  {
    if ( !item )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
    {
      v5 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v5, 0LL);
    }
  }
}


Il2CppObject *__fastcall ComponentPool_object___Rent(ComponentPool_T__o *this, const MethodInfo_25CAD20 *method)
{
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x21
  struct System_Collections_Generic_List_T__o *availableComponentList; // x0
  __int64 v7; // x0
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *v9; // x22
  struct UnityEngine_GameObject_o *prefab; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  struct System_Collections_Generic_List_T__o *nonAvailableComponentList; // x0

  if ( (byte_4103512 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_4103512 = 1;
  }
  v5 = 0LL;
  while ( 1 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
    {
      if ( !v5 )
        goto LABEL_37;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
        break;
    }
    if ( !this->fields.availableComponentList )
      goto LABEL_37;
    if ( ((__int64 (*)(void))method->klass->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)() <= 0 )
      break;
    availableComponentList = this->fields.availableComponentList;
    if ( !availableComponentList )
      goto LABEL_37;
    v7 = ((__int64 (__fastcall *)(struct System_Collections_Generic_List_T__o *, _QWORD))method->klass->rgctx_data->_7_System_Collections_Generic_List_T__get_Item->methodPointer)(
           availableComponentList,
           0LL);
    if ( !this->fields.availableComponentList )
      goto LABEL_37;
    v5 = (UnityEngine_Component_o *)v7;
    ((void (__fastcall *)(struct System_Collections_Generic_List_T__o *, _QWORD))method->klass->rgctx_data->_8_System_Collections_Generic_List_T__RemoveAt->methodPointer)(
      this->fields.availableComponentList,
      0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
    goto LABEL_40;
  if ( !v5 )
    goto LABEL_37;
  v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v9, 0LL, 0LL) )
  {
LABEL_40:
    prefab = this->fields.prefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
            (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v5 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_UI_Dropdown_DropdownItem_o *))method->klass->rgctx_data->_4_GameObjectExtensions_SafeGetComponent_T_->methodPointer)(v11);
    if ( !v5 )
      goto LABEL_37;
  }
  v12 = UnityEngine_Component__get_gameObject(v5, 0LL);
  if ( !v12 || (UnityEngine_GameObject__SetActive(v12, 1, 0LL), !this) )
LABEL_37:
    sub_B170D4();
  if ( ((__int64 (__fastcall *)(ComponentPool_T__o *))method->klass->rgctx_data->_3_ComponentPool_T__get_currentPoolSize->methodPointer)(this) < this->fields.poolSizeMax )
  {
    nonAvailableComponentList = this->fields.nonAvailableComponentList;
    if ( nonAvailableComponentList )
    {
      ((void (__fastcall *)(struct System_Collections_Generic_List_T__o *, UnityEngine_Component_o *))method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add->methodPointer)(
        nonAvailableComponentList,
        v5);
      return (Il2CppObject *)v5;
    }
    goto LABEL_37;
  }
  return (Il2CppObject *)v5;
}


Il2CppObject *__fastcall ComponentPool_object___Rent_39628688(
        ComponentPool_T__o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo_25CAF90 *method)
{
  UnityEngine_Component_o *v4; // x0
  Il2CppObject *v5; // x20
  UnityEngine_Transform_o *transform; // x0

  if ( !this
    || (v4 = (UnityEngine_Component_o *)((__int64 (*)(void))method->klass->rgctx_data->_9_ComponentPool_T__Rent->methodPointer)()) == 0LL
    || (v5 = (Il2CppObject *)v4, (transform = UnityEngine_Component__get_transform(v4, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__SetParent(transform, parent, 0LL);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall ComponentPool_object___Rent_39628780(
        ComponentPool_T__o *this,
        UnityEngine_Transform_o *parent,
        UnityEngine_Vector3_o position,
        const MethodInfo_25CAFEC *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Component_o *v7; // x0
  Il2CppObject *v8; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( !this
    || (z = position.fields.z,
        y = position.fields.y,
        x = position.fields.x,
        (v7 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ComponentPool_T__o *, UnityEngine_Transform_o *))method->klass->rgctx_data->_10_ComponentPool_T__Rent->methodPointer)(
                                           this,
                                           parent)) == 0LL)
    || (v8 = (Il2CppObject *)v7, (transform = UnityEngine_Component__get_transform(v7, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  v11.fields.x = x;
  v11.fields.y = y;
  v11.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v11, 0LL);
  return v8;
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall ComponentPool_object___Rent_39628904(
        ComponentPool_T__o *this,
        UnityEngine_Transform_o *parent,
        UnityEngine_Vector3_o position,
        UnityEngine_Quaternion_o rotation,
        const MethodInfo_25CB068 *method)
{
  float w; // s8
  float z; // s9
  float y; // s10
  float x; // s11
  UnityEngine_Component_o *v9; // x0
  Il2CppObject *v10; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Quaternion_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !this
    || (w = rotation.fields.w,
        z = rotation.fields.z,
        y = rotation.fields.y,
        x = rotation.fields.x,
        (v9 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ComponentPool_T__o *, UnityEngine_Transform_o *, long double, long double, long double))method->klass->rgctx_data->_11_ComponentPool_T__Rent->methodPointer)(
                                           this,
                                           parent,
                                           *(long double *)&position.fields.x,
                                           *(long double *)&position.fields.y,
                                           *(long double *)&position.fields.z)) == 0LL)
    || (v10 = (Il2CppObject *)v9, (transform = UnityEngine_Component__get_transform(v9, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  v13.fields.x = x;
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.w = w;
  UnityEngine_Transform__set_localRotation(transform, v13, 0LL);
  return v10;
}


void __fastcall ComponentPool_object___Return(
        ComponentPool_T__o *this,
        Il2CppObject *item,
        const MethodInfo_25CB0EC *method)
{
  struct System_Collections_Generic_List_T__o *nonAvailableComponentList; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_T__o *v8; // x0
  void *availableComponentList; // x0
  MethodInfo *_13_ComponentPool_T__DestroyItem; // x2

  if ( (byte_4103513 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_4103513 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)item, 0LL, 0LL) )
  {
    nonAvailableComponentList = this->fields.nonAvailableComponentList;
    if ( nonAvailableComponentList )
    {
      if ( (((__int64 (__fastcall *)(struct System_Collections_Generic_List_T__o *, Il2CppObject *))method->klass->rgctx_data->_12_System_Collections_Generic_List_T__Contains->methodPointer)(
              nonAvailableComponentList,
              item) & 1) == 0 )
      {
        availableComponentList = this;
        _13_ComponentPool_T__DestroyItem = method->klass->rgctx_data->_13_ComponentPool_T__DestroyItem;
        goto LABEL_15;
      }
      if ( item )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          v8 = this->fields.nonAvailableComponentList;
          if ( v8 )
          {
            ((void (__fastcall *)(struct System_Collections_Generic_List_T__o *, Il2CppObject *))method->klass->rgctx_data->_14_System_Collections_Generic_List_T__Remove->methodPointer)(
              v8,
              item);
            availableComponentList = this->fields.availableComponentList;
            if ( availableComponentList )
            {
              _13_ComponentPool_T__DestroyItem = method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
LABEL_15:
              ((void (__fastcall *)(void *, Il2CppObject *))_13_ComponentPool_T__DestroyItem->methodPointer)(
                availableComponentList,
                item);
              return;
            }
          }
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall ComponentPool_object___ShrinkPool(
        ComponentPool_T__o *this,
        float rate,
        int32_t infmum,
        const MethodInfo_25CB214 *method)
{
  float v4; // s0
  double v5; // d0

  if ( rate >= 0.0 && rate < 1.0 )
  {
    v4 = (float)this->fields.poolSizeMax * rate;
    if ( v4 == INFINITY )
      v5 = -v4;
    else
      v5 = v4;
    this->fields.poolSizeMax = UnityEngine_Mathf__Max_40727628((int)v5, infmum, 0LL);
  }
}


int32_t __fastcall ComponentPool_object___get_currentPoolSize(
        ComponentPool_T__o *this,
        const MethodInfo_25CAA90 *method)
{
  int v4; // w0
  struct System_Collections_Generic_List_T__o *nonAvailableComponentList; // x8

  if ( !this->fields.availableComponentList
    || (v4 = ((__int64 (*)(void))method->klass->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)(),
        (nonAvailableComponentList = this->fields.nonAvailableComponentList) == 0LL) )
  {
    sub_B170D4();
  }
  return ((__int64 (__fastcall *)(struct System_Collections_Generic_List_T__o *))method->klass->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)(nonAvailableComponentList)
       + v4;
}