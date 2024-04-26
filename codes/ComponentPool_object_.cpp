void __fastcall ComponentPool_object___Clear(ComponentPool_T__o *this, const MethodInfo_21A6EF4 *method)
{
  struct System_Collections_Generic_List_T__o *availableComponentList; // x0
  MethodInfo *_13_ComponentPool_T__DestroyItem; // x2
  int v6; // w24
  Il2CppClass *_18_System_Collections_Generic_List_Enumerator_T; // x21
  unsigned __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  MethodInfo *v11; // x2
  int v12; // w24
  Il2CppClass *v13; // x23
  unsigned __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-88h] BYREF
  int v18[2]; // [xsp+20h] [xbp-70h] BYREF
  int v19; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4357AF4 & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    byte_4357AF4 = 1;
  }
  memset(&i, 0, sizeof(i));
  v19 = 0;
  availableComponentList = this->fields.availableComponentList;
  if ( !availableComponentList )
    goto LABEL_35;
  method->klass->rgctx_data->_15_System_Collections_Generic_List_T__GetEnumerator->methodPointer();
  for ( i = v17;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_22212CC *)method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_T__MoveNext);
        ((void (__fastcall *)(ComponentPool_T__o *, Il2CppObject *, MethodInfo *))_13_ComponentPool_T__DestroyItem->methodPointer)(
          this,
          i.fields.current,
          _13_ComponentPool_T__DestroyItem) )
  {
    _13_ComponentPool_T__DestroyItem = method->klass->rgctx_data->_13_ComponentPool_T__DestroyItem;
  }
  v6 = 1;
  v18[0] = 54;
  v19 = 1;
  _18_System_Collections_Generic_List_Enumerator_T = method->klass->rgctx_data->_18_System_Collections_Generic_List_Enumerator_T_;
  if ( (BYTE2(_18_System_Collections_Generic_List_Enumerator_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->klass->rgctx_data->_18_System_Collections_Generic_List_Enumerator_T_);
  v17.fields.list = (struct System_Collections_Generic_List_T__o *)_18_System_Collections_Generic_List_Enumerator_T;
  if ( *(_WORD *)&_18_System_Collections_Generic_List_Enumerator_T->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &_18_System_Collections_Generic_List_Enumerator_T->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&_18_System_Collections_Generic_List_Enumerator_T->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&_18_System_Collections_Generic_List_Enumerator_T->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_B08590(&v17, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(int *, _QWORD))p_method)(v18, *(_QWORD *)(p_method + 8));
  if ( v18[0] == 54 )
  {
    v6 = 0;
    v19 = 0;
  }
  availableComponentList = this->fields.availableComponentList;
  if ( !availableComponentList )
    goto LABEL_35;
  method->klass->rgctx_data->_19_System_Collections_Generic_List_T__Clear->methodPointer();
  availableComponentList = this->fields.nonAvailableComponentList;
  if ( !availableComponentList )
    goto LABEL_35;
  method->klass->rgctx_data->_15_System_Collections_Generic_List_T__GetEnumerator->methodPointer();
  for ( i = v17;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_22212CC *)method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_T__MoveNext);
        ((void (__fastcall *)(ComponentPool_T__o *, Il2CppObject *, MethodInfo *))v11->methodPointer)(
          this,
          i.fields.current,
          v11) )
  {
    v11 = method->klass->rgctx_data->_13_ComponentPool_T__DestroyItem;
  }
  v18[v6] = 119;
  v12 = ++v19;
  v13 = method->klass->rgctx_data->_18_System_Collections_Generic_List_Enumerator_T_;
  if ( (BYTE2(v13->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->klass->rgctx_data->_18_System_Collections_Generic_List_Enumerator_T_);
  v17.fields.list = (struct System_Collections_Generic_List_T__o *)v13;
  if ( *(_WORD *)&v13->_2.bitflags1 )
  {
    v14 = 0LL;
    v15 = &v13->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v15 - 1) != System_IDisposable_TypeInfo )
    {
      ++v14;
      v15 += 4;
      if ( v14 >= *(unsigned __int16 *)&v13->_2.bitflags1 )
        goto LABEL_28;
    }
    v16 = (__int64)&v13->vtable[*v15].method;
  }
  else
  {
LABEL_28:
    v16 = sub_B08590(&v17, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(int *, _QWORD))v16)(v18, *(_QWORD *)(v16 + 8));
  if ( v12 && v18[v12 - 1] == 119 )
    v19 = v12 - 1;
  availableComponentList = this->fields.nonAvailableComponentList;
  if ( !availableComponentList )
LABEL_35:
    sub_B7076C(availableComponentList, method);
  method->klass->rgctx_data->_19_System_Collections_Generic_List_T__Clear->methodPointer();
}


void __fastcall ComponentPool_object___DestroyItem(
        ComponentPool_T__o *this,
        Il2CppObject *item,
        const MethodInfo_21A7278 *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v7; // x19

  if ( (byte_4357AF5 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357AF5 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)item, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !item )
      sub_B7076C(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
    {
      v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v7, 0LL);
    }
  }
}


Il2CppObject *__fastcall ComponentPool_object___Rent(ComponentPool_T__o *this, const MethodInfo_21A699C *method)
{
  UnityEngine_Object_o *v4; // x21
  __int64 availableComponentList; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *v8; // x22
  struct UnityEngine_GameObject_o *prefab; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v10; // x0

  if ( (byte_4357AF2 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357AF2 = 1;
  }
  v4 = 0LL;
  while ( 1 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    availableComponentList = UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
    if ( (availableComponentList & 1) == 0 )
    {
      if ( !v4 )
        goto LABEL_37;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
        break;
    }
    availableComponentList = (__int64)this->fields.availableComponentList;
    if ( !availableComponentList )
      goto LABEL_37;
    if ( ((__int64 (*)(void))method->klass->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)() <= 0 )
      break;
    availableComponentList = (__int64)this->fields.availableComponentList;
    if ( !availableComponentList )
      goto LABEL_37;
    availableComponentList = ((__int64 (__fastcall *)(__int64, _QWORD))method->klass->rgctx_data->_7_System_Collections_Generic_List_T__get_Item->methodPointer)(
                               availableComponentList,
                               0LL);
    if ( !this->fields.availableComponentList )
      goto LABEL_37;
    v4 = (UnityEngine_Object_o *)availableComponentList;
    ((void (__fastcall *)(struct System_Collections_Generic_List_T__o *, _QWORD))method->klass->rgctx_data->_8_System_Collections_Generic_List_T__RemoveAt->methodPointer)(
      this->fields.availableComponentList,
      0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  availableComponentList = UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
  if ( (availableComponentList & 1) != 0 )
    goto LABEL_40;
  if ( !v4 )
    goto LABEL_37;
  v8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v8, 0LL, 0LL) )
  {
LABEL_40:
    prefab = this->fields.prefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
            (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
            (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    availableComponentList = ((__int64 (__fastcall *)(UnityEngine_UI_Dropdown_DropdownItem_o *))method->klass->rgctx_data->_4_GameObjectExtensions_SafeGetComponent_T_->methodPointer)(v10);
    v4 = (UnityEngine_Object_o *)availableComponentList;
    if ( !availableComponentList )
      goto LABEL_37;
  }
  availableComponentList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !availableComponentList
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)availableComponentList, 1, 0LL), !this) )
  {
LABEL_37:
    sub_B7076C(availableComponentList, v6);
  }
  if ( ((__int64 (__fastcall *)(ComponentPool_T__o *))method->klass->rgctx_data->_3_ComponentPool_T__get_currentPoolSize->methodPointer)(this) < this->fields.poolSizeMax )
  {
    availableComponentList = (__int64)this->fields.nonAvailableComponentList;
    if ( availableComponentList )
    {
      ((void (__fastcall *)(__int64, UnityEngine_Object_o *))method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add->methodPointer)(
        availableComponentList,
        v4);
      return (Il2CppObject *)v4;
    }
    goto LABEL_37;
  }
  return (Il2CppObject *)v4;
}


Il2CppObject *__fastcall ComponentPool_object___Rent_35286028(
        ComponentPool_T__o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo_21A6C0C *method)
{
  Il2CppObject *v4; // x20

  if ( !this
    || (this = (ComponentPool_T__o *)((__int64 (*)(void))method->klass->rgctx_data->_9_ComponentPool_T__Rent->methodPointer)()) == 0LL
    || (v4 = (Il2CppObject *)this,
        (this = (ComponentPool_T__o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B7076C(this, parent);
  }
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, parent, 0LL);
  return v4;
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall ComponentPool_object___Rent_35286120(
        ComponentPool_T__o *this,
        UnityEngine_Transform_o *parent,
        UnityEngine_Vector3_o position,
        const MethodInfo_21A6C68 *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  Il2CppObject *v7; // x19
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( !this
    || (z = position.fields.z,
        y = position.fields.y,
        x = position.fields.x,
        (this = (ComponentPool_T__o *)((__int64 (__fastcall *)(ComponentPool_T__o *, UnityEngine_Transform_o *))method->klass->rgctx_data->_10_ComponentPool_T__Rent->methodPointer)(
                                        this,
                                        parent)) == 0LL)
    || (v7 = (Il2CppObject *)this,
        (this = (ComponentPool_T__o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B7076C(this, parent);
  }
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9, 0LL);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall ComponentPool_object___Rent_35286244(
        ComponentPool_T__o *this,
        UnityEngine_Transform_o *parent,
        UnityEngine_Vector3_o position,
        UnityEngine_Quaternion_o rotation,
        const MethodInfo_21A6CE4 *method)
{
  float w; // s8
  float z; // s9
  float y; // s10
  float x; // s11
  Il2CppObject *v9; // x19
  UnityEngine_Quaternion_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !this
    || (w = rotation.fields.w,
        z = rotation.fields.z,
        y = rotation.fields.y,
        x = rotation.fields.x,
        (this = (ComponentPool_T__o *)((__int64 (__fastcall *)(ComponentPool_T__o *, UnityEngine_Transform_o *, long double, long double, long double))method->klass->rgctx_data->_11_ComponentPool_T__Rent->methodPointer)(
                                        this,
                                        parent,
                                        *(long double *)&position.fields.x,
                                        *(long double *)&position.fields.y,
                                        *(long double *)&position.fields.z)) == 0LL)
    || (v9 = (Il2CppObject *)this,
        (this = (ComponentPool_T__o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B7076C(this, parent);
  }
  v11.fields.x = x;
  v11.fields.y = y;
  v11.fields.z = z;
  v11.fields.w = w;
  UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)this, v11, 0LL);
  return v9;
}


void __fastcall ComponentPool_object___Return(
        ComponentPool_T__o *this,
        Il2CppObject *item,
        const MethodInfo_21A6D68 *method)
{
  __int64 v6; // x1
  UnityEngine_GameObject_o *nonAvailableComponentList; // x0
  MethodInfo *_13_ComponentPool_T__DestroyItem; // x2

  if ( (byte_4357AF3 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357AF3 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)item, 0LL, 0LL) )
  {
    nonAvailableComponentList = (UnityEngine_GameObject_o *)this->fields.nonAvailableComponentList;
    if ( nonAvailableComponentList )
    {
      nonAvailableComponentList = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, Il2CppObject *))method->klass->rgctx_data->_12_System_Collections_Generic_List_T__Contains->methodPointer)(
                                                                nonAvailableComponentList,
                                                                item);
      if ( ((unsigned __int8)nonAvailableComponentList & 1) == 0 )
      {
        nonAvailableComponentList = (UnityEngine_GameObject_o *)this;
        _13_ComponentPool_T__DestroyItem = method->klass->rgctx_data->_13_ComponentPool_T__DestroyItem;
        goto LABEL_15;
      }
      if ( item )
      {
        nonAvailableComponentList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
        if ( nonAvailableComponentList )
        {
          UnityEngine_GameObject__SetActive(nonAvailableComponentList, 0, 0LL);
          nonAvailableComponentList = (UnityEngine_GameObject_o *)this->fields.nonAvailableComponentList;
          if ( nonAvailableComponentList )
          {
            ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppObject *))method->klass->rgctx_data->_14_System_Collections_Generic_List_T__Remove->methodPointer)(
              nonAvailableComponentList,
              item);
            nonAvailableComponentList = (UnityEngine_GameObject_o *)this->fields.availableComponentList;
            if ( nonAvailableComponentList )
            {
              _13_ComponentPool_T__DestroyItem = method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
LABEL_15:
              ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppObject *))_13_ComponentPool_T__DestroyItem->methodPointer)(
                nonAvailableComponentList,
                item);
              return;
            }
          }
        }
      }
    }
    sub_B7076C(nonAvailableComponentList, v6);
  }
}


void __fastcall ComponentPool_object___ShrinkPool(
        ComponentPool_T__o *this,
        float rate,
        int32_t infmum,
        const MethodInfo_21A6E90 *method)
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
    this->fields.poolSizeMax = UnityEngine_Mathf__Max_41127884((int)v5, infmum, 0LL);
  }
}


int32_t __fastcall ComponentPool_object___get_currentPoolSize(
        ComponentPool_T__o *this,
        const MethodInfo_21A670C *method)
{
  struct System_Collections_Generic_List_T__o *availableComponentList; // x0
  struct System_Collections_Generic_List_T__o *nonAvailableComponentList; // x8

  availableComponentList = this->fields.availableComponentList;
  if ( !availableComponentList
    || (availableComponentList = (struct System_Collections_Generic_List_T__o *)((__int64 (*)(void))method->klass->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)(),
        (nonAvailableComponentList = this->fields.nonAvailableComponentList) == 0LL) )
  {
    sub_B7076C(availableComponentList, method);
  }
  return ((__int64 (__fastcall *)(struct System_Collections_Generic_List_T__o *))method->klass->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)(nonAvailableComponentList)
       + (_DWORD)availableComponentList;
}