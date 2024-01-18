void __fastcall ComponentPool_object___Clear(ComponentPool_T__o *this, const MethodInfo_25E4328 *method)
{
  struct System_Collections_Generic_List_T__o *availableComponentList; // x0
  __int64 v5; // x3
  MethodInfo *_13_ComponentPool_T__DestroyItem; // x2
  int v7; // w24
  Il2CppClass *_18_System_Collections_Generic_List_Enumerator_T; // x21
  unsigned __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v12; // x3
  MethodInfo *v13; // x2
  int v14; // w24
  Il2CppClass *v15; // x23
  unsigned __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-88h] BYREF
  int v20[2]; // [xsp+20h] [xbp-70h] BYREF
  int v21; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_419116B & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, method);
    byte_419116B = 1;
  }
  memset(&i, 0, sizeof(i));
  v21 = 0;
  availableComponentList = this->fields.availableComponentList;
  if ( !availableComponentList )
    goto LABEL_35;
  method->klass->rgctx_data->_15_System_Collections_Generic_List_T__GetEnumerator->methodPointer();
  for ( i = v19;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_20EA42C *)method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_T__MoveNext);
        ((void (__fastcall *)(ComponentPool_T__o *, Il2CppObject *, MethodInfo *))_13_ComponentPool_T__DestroyItem->methodPointer)(
          this,
          i.fields.current,
          _13_ComponentPool_T__DestroyItem) )
  {
    _13_ComponentPool_T__DestroyItem = method->klass->rgctx_data->_13_ComponentPool_T__DestroyItem;
  }
  v7 = 1;
  v20[0] = 54;
  v21 = 1;
  _18_System_Collections_Generic_List_Enumerator_T = method->klass->rgctx_data->_18_System_Collections_Generic_List_Enumerator_T_;
  if ( (BYTE2(_18_System_Collections_Generic_List_Enumerator_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->klass->rgctx_data->_18_System_Collections_Generic_List_Enumerator_T_);
  v19.fields.list = (struct System_Collections_Generic_List_T__o *)_18_System_Collections_Generic_List_Enumerator_T;
  if ( *(_WORD *)&_18_System_Collections_Generic_List_Enumerator_T->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &_18_System_Collections_Generic_List_Enumerator_T->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&_18_System_Collections_Generic_List_Enumerator_T->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&_18_System_Collections_Generic_List_Enumerator_T->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AC5258(&v19, System_IDisposable_TypeInfo, 0LL, v5);
  }
  (*(void (__fastcall **)(int *, _QWORD))p_method)(v20, *(_QWORD *)(p_method + 8));
  if ( v20[0] == 54 )
  {
    v7 = 0;
    v21 = 0;
  }
  availableComponentList = this->fields.availableComponentList;
  if ( !availableComponentList )
    goto LABEL_35;
  method->klass->rgctx_data->_19_System_Collections_Generic_List_T__Clear->methodPointer();
  availableComponentList = this->fields.nonAvailableComponentList;
  if ( !availableComponentList )
    goto LABEL_35;
  method->klass->rgctx_data->_15_System_Collections_Generic_List_T__GetEnumerator->methodPointer();
  for ( i = v19;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_20EA42C *)method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_T__MoveNext);
        ((void (__fastcall *)(ComponentPool_T__o *, Il2CppObject *, MethodInfo *))v13->methodPointer)(
          this,
          i.fields.current,
          v13) )
  {
    v13 = method->klass->rgctx_data->_13_ComponentPool_T__DestroyItem;
  }
  v20[v7] = 119;
  v14 = ++v21;
  v15 = method->klass->rgctx_data->_18_System_Collections_Generic_List_Enumerator_T_;
  if ( (BYTE2(v15->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->klass->rgctx_data->_18_System_Collections_Generic_List_Enumerator_T_);
  v19.fields.list = (struct System_Collections_Generic_List_T__o *)v15;
  if ( *(_WORD *)&v15->_2.bitflags1 )
  {
    v16 = 0LL;
    v17 = &v15->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v17 - 1) != System_IDisposable_TypeInfo )
    {
      ++v16;
      v17 += 4;
      if ( v16 >= *(unsigned __int16 *)&v15->_2.bitflags1 )
        goto LABEL_28;
    }
    v18 = (__int64)&v15->vtable[*v17].method;
  }
  else
  {
LABEL_28:
    v18 = sub_AC5258(&v19, System_IDisposable_TypeInfo, 0LL, v12);
  }
  (*(void (__fastcall **)(int *, _QWORD))v18)(v20, *(_QWORD *)(v18 + 8));
  if ( v14 && v20[v14 - 1] == 119 )
    v21 = v14 - 1;
  availableComponentList = this->fields.nonAvailableComponentList;
  if ( !availableComponentList )
LABEL_35:
    sub_B2C434(availableComponentList, method);
  method->klass->rgctx_data->_19_System_Collections_Generic_List_T__Clear->methodPointer();
}


void __fastcall ComponentPool_object___DestroyItem(
        ComponentPool_T__o *this,
        Il2CppObject *item,
        const MethodInfo_25E46AC *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v7; // x19

  if ( (byte_419116C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, item);
    byte_419116C = 1;
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
      sub_B2C434(v4, v5);
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
      UnityEngine_Object__Destroy_35314896(v7, 0LL);
    }
  }
}


Il2CppObject *__fastcall ComponentPool_object___Rent(ComponentPool_T__o *this, const MethodInfo_25E3DD0 *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x21
  __int64 availableComponentList; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *v9; // x22
  struct UnityEngine_GameObject_o *prefab; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v11; // x0

  if ( (byte_4191169 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4191169 = 1;
  }
  v5 = 0LL;
  while ( 1 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    availableComponentList = UnityEngine_Object__op_Equality(v5, 0LL, 0LL);
    if ( (availableComponentList & 1) == 0 )
    {
      if ( !v5 )
        goto LABEL_37;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
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
    v5 = (UnityEngine_Object_o *)availableComponentList;
    ((void (__fastcall *)(struct System_Collections_Generic_List_T__o *, _QWORD))method->klass->rgctx_data->_8_System_Collections_Generic_List_T__RemoveAt->methodPointer)(
      this->fields.availableComponentList,
      0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  availableComponentList = UnityEngine_Object__op_Equality(v5, 0LL, 0LL);
  if ( (availableComponentList & 1) != 0 )
    goto LABEL_40;
  if ( !v5 )
    goto LABEL_37;
  v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
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
            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    availableComponentList = ((__int64 (__fastcall *)(UnityEngine_UI_Dropdown_DropdownItem_o *))method->klass->rgctx_data->_4_GameObjectExtensions_SafeGetComponent_T_->methodPointer)(v11);
    v5 = (UnityEngine_Object_o *)availableComponentList;
    if ( !availableComponentList )
      goto LABEL_37;
  }
  availableComponentList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
  if ( !availableComponentList
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)availableComponentList, 1, 0LL), !this) )
  {
LABEL_37:
    sub_B2C434(availableComponentList, v7);
  }
  if ( ((__int64 (__fastcall *)(ComponentPool_T__o *))method->klass->rgctx_data->_3_ComponentPool_T__get_currentPoolSize->methodPointer)(this) < this->fields.poolSizeMax )
  {
    availableComponentList = (__int64)this->fields.nonAvailableComponentList;
    if ( availableComponentList )
    {
      ((void (__fastcall *)(__int64, UnityEngine_Object_o *))method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add->methodPointer)(
        availableComponentList,
        v5);
      return (Il2CppObject *)v5;
    }
    goto LABEL_37;
  }
  return (Il2CppObject *)v5;
}


Il2CppObject *__fastcall ComponentPool_object___Rent_39731264(
        ComponentPool_T__o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo_25E4040 *method)
{
  Il2CppObject *v4; // x20

  if ( !this
    || (this = (ComponentPool_T__o *)((__int64 (*)(void))method->klass->rgctx_data->_9_ComponentPool_T__Rent->methodPointer)()) == 0LL
    || (v4 = (Il2CppObject *)this,
        (this = (ComponentPool_T__o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(this, parent);
  }
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, parent, 0LL);
  return v4;
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall ComponentPool_object___Rent_39731356(
        ComponentPool_T__o *this,
        UnityEngine_Transform_o *parent,
        UnityEngine_Vector3_o position,
        const MethodInfo_25E409C *method)
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
    sub_B2C434(this, parent);
  }
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9, 0LL);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall ComponentPool_object___Rent_39731480(
        ComponentPool_T__o *this,
        UnityEngine_Transform_o *parent,
        UnityEngine_Vector3_o position,
        UnityEngine_Quaternion_o rotation,
        const MethodInfo_25E4118 *method)
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
    sub_B2C434(this, parent);
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
        const MethodInfo_25E419C *method)
{
  __int64 v6; // x1
  UnityEngine_GameObject_o *nonAvailableComponentList; // x0
  MethodInfo *_13_ComponentPool_T__DestroyItem; // x2

  if ( (byte_419116A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, item);
    byte_419116A = 1;
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
    sub_B2C434(nonAvailableComponentList, v6);
  }
}


void __fastcall ComponentPool_object___ShrinkPool(
        ComponentPool_T__o *this,
        float rate,
        int32_t infmum,
        const MethodInfo_25E42C4 *method)
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
    this->fields.poolSizeMax = UnityEngine_Mathf__Max_40694800((int)v5, infmum, 0LL);
  }
}


int32_t __fastcall ComponentPool_object___get_currentPoolSize(
        ComponentPool_T__o *this,
        const MethodInfo_25E3B40 *method)
{
  struct System_Collections_Generic_List_T__o *availableComponentList; // x0
  struct System_Collections_Generic_List_T__o *nonAvailableComponentList; // x8

  availableComponentList = this->fields.availableComponentList;
  if ( !availableComponentList
    || (availableComponentList = (struct System_Collections_Generic_List_T__o *)((__int64 (*)(void))method->klass->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)(),
        (nonAvailableComponentList = this->fields.nonAvailableComponentList) == 0LL) )
  {
    sub_B2C434(availableComponentList, method);
  }
  return ((__int64 (__fastcall *)(struct System_Collections_Generic_List_T__o *))method->klass->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)(nonAvailableComponentList)
       + (_DWORD)availableComponentList;
}