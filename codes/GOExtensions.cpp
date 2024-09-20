void __fastcall GOExtensions___ctor(GOExtensions_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


Il2CppObject *__fastcall GOExtensions__AddComponentWithData_object_(
        UnityEngine_GameObject_o *gameObject,
        WellFired_Data_DataBaseEntry_o *data,
        const MethodInfo_2ECE448 *method)
{
  const MethodInfo_2ECE448_RGCTXs *rgctx_data; // x8
  Il2CppType *_0_T; // x22
  System_Type_o *TypeFromHandle; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x21
  Il2CppClass *_1_T; // x1
  System_Type_o *v12; // x21
  Il2CppClass *v13; // x20
  WellFired_Data_DataComponent_o *v14; // x0
  Il2CppObject *v15; // x22
  UnityEngine_GameObject_o *v17; // x0
  const MethodInfo_2ECE554 *v18; // x1
  System_RuntimeTypeHandle_o v19; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v19.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v19, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  v10 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_1_T);
  TypeFromHandle = (System_Type_o *)sub_1B886EC(v10, _1_T);
  v12 = TypeFromHandle;
  v13 = method->rgctx_data->_1_T;
  if ( (BYTE5(v13->vtable[0].methodPtr) & 1) == 0 )
  {
    TypeFromHandle = (System_Type_o *)sub_1BDA48C(v13);
    v13 = (Il2CppClass *)TypeFromHandle;
  }
  if ( !v12 )
LABEL_14:
    sub_1B8880C(TypeFromHandle, v9);
  v14 = (WellFired_Data_DataComponent_o *)sub_1B886EC(v12, v13);
  if ( v14 )
  {
    v15 = (Il2CppObject *)v14;
    WellFired_Data_DataComponent__InitFromData(v14, data, 0LL);
    return v15;
  }
  else
  {
    sub_1B88ACC(v12);
    return GOExtensions__AddDisabledComponent_object_(v17, v18);
  }
}


Il2CppObject *__fastcall GOExtensions__AddDisabledComponentWithData_object_(
        UnityEngine_GameObject_o *gameObject,
        WellFired_Data_DataBaseEntry_o *data,
        const MethodInfo_2ECE654 *method)
{
  const MethodInfo_2ECE654_RGCTXs *rgctx_data; // x8
  Il2CppType *_0_T; // x22
  System_Type_o *TypeFromHandle; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x21
  Il2CppClass *_1_T; // x1
  System_Type_o *v12; // x21
  Il2CppClass *v13; // x20
  WellFired_Data_DataComponent_o *v14; // x0
  UnityEngine_Behaviour_o *v15; // x22
  const MethodInfo_2ECE770 *v17; // x0
  System_RuntimeTypeHandle_o v18; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v18.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v18, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  v10 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_1_T);
  TypeFromHandle = (System_Type_o *)sub_1B886EC(v10, _1_T);
  v12 = TypeFromHandle;
  v13 = method->rgctx_data->_1_T;
  if ( (BYTE5(v13->vtable[0].methodPtr) & 1) == 0 )
  {
    TypeFromHandle = (System_Type_o *)sub_1BDA48C(v13);
    v13 = (Il2CppClass *)TypeFromHandle;
  }
  if ( !v12 )
LABEL_14:
    sub_1B8880C(TypeFromHandle, v9);
  v14 = (WellFired_Data_DataComponent_o *)sub_1B886EC(v12, v13);
  if ( v14 )
  {
    v15 = (UnityEngine_Behaviour_o *)v14;
    WellFired_Data_DataComponent__InitFromData(v14, data, 0LL);
    UnityEngine_Behaviour__set_enabled(v15, 0, 0LL);
    return (Il2CppObject *)v15;
  }
  else
  {
    sub_1B88ACC(v12);
    return GOExtensions__Construct_object_(v17);
  }
}


Il2CppObject *__fastcall GOExtensions__AddDisabledComponent_object_(
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo_2ECE554 *method)
{
  const MethodInfo_2ECE554_RGCTXs *rgctx_data; // x8
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x20
  Il2CppClass *_1_T; // x1
  System_Type_o *v10; // x20
  Il2CppClass *v11; // x19
  UnityEngine_Behaviour_o *v12; // x0
  Il2CppObject *v13; // x21
  UnityEngine_GameObject_o *v15; // x0
  WellFired_Data_DataBaseEntry_o *v16; // x1
  const MethodInfo_2ECE654 *v17; // x2
  System_RuntimeTypeHandle_o v18; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v18.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v18, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  v8 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_1_T);
  TypeFromHandle = (System_Type_o *)sub_1B886EC(v8, _1_T);
  v10 = TypeFromHandle;
  v11 = method->rgctx_data->_1_T;
  if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
  {
    TypeFromHandle = (System_Type_o *)sub_1BDA48C(v11);
    v11 = (Il2CppClass *)TypeFromHandle;
  }
  if ( !v10 )
LABEL_14:
    sub_1B8880C(TypeFromHandle, v7);
  v12 = (UnityEngine_Behaviour_o *)sub_1B886EC(v10, v11);
  if ( v12 )
  {
    v13 = (Il2CppObject *)v12;
    UnityEngine_Behaviour__set_enabled(v12, 0, 0LL);
    return v13;
  }
  else
  {
    sub_1B88ACC(v10);
    return GOExtensions__AddDisabledComponentWithData_object_(v15, v16, v17);
  }
}


Il2CppObject *__fastcall GOExtensions__ConstructFromResourcePersistant_object_(
        System_String_o *name,
        const MethodInfo_2ECEB08 *method)
{
  UnityEngine_Object_o *v4; // x0
  UnityEngine_GameObject_c **v5; // x20
  Il2CppObject *v6; // x0
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Object_o *gameObject; // x0
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x20
  Il2CppClass *_1_T; // x1
  __int64 v15; // x20
  Il2CppClass *v16; // x19
  Il2CppObject *result; // x0
  System_RuntimeTypeHandle_o v18; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1BDA4E8();
  }
  v4 = UnityEngine_Resources__Load(name, 0LL);
  v5 = (UnityEngine_GameObject_c **)v4;
  if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( v4 )
      goto LABEL_6;
LABEL_10:
    v6 = 0LL;
    goto LABEL_11;
  }
  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !v5 )
    goto LABEL_10;
LABEL_6:
  if ( *v5 == UnityEngine_GameObject_TypeInfo )
    v6 = (Il2CppObject *)v5;
  else
    v6 = 0LL;
LABEL_11:
  v7 = UnityEngine_Object__Instantiate_object_(
         v6,
         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7 )
    sub_1B8880C(0LL, v8);
  v9 = (UnityEngine_GameObject_o *)v7;
  gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v7, 0LL);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
  _0_T = method->rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v18.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v18, 0LL);
  Component = UnityEngine_GameObject__GetComponent(v9, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_1_T);
  v15 = sub_1B886EC(Component, _1_T);
  v16 = method->rgctx_data->_1_T;
  if ( (BYTE5(v16->vtable[0].methodPtr) & 1) == 0 )
    v16 = (Il2CppClass *)sub_1BDA48C(v16);
  if ( v15 )
  {
    result = (Il2CppObject *)sub_1B886EC(v15, v16);
    if ( result )
      return result;
    sub_1B88ACC(v15);
  }
  return 0LL;
}


Il2CppObject *__fastcall GOExtensions__ConstructFromResource_object_(
        System_String_o *name,
        const MethodInfo_2ECE988 *method)
{
  UnityEngine_Object_o *v4; // x0
  UnityEngine_GameObject_c **v5; // x20
  Il2CppObject *v6; // x0
  Il2CppObject *v7; // x20
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *Component; // x20
  Il2CppClass *_1_T; // x1
  __int64 v13; // x20
  Il2CppClass *v14; // x19
  Il2CppObject *result; // x0
  System_RuntimeTypeHandle_o v16; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1BDA4E8();
  }
  v4 = UnityEngine_Resources__Load(name, 0LL);
  v5 = (UnityEngine_GameObject_c **)v4;
  if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( v4 )
      goto LABEL_6;
LABEL_10:
    v6 = 0LL;
    goto LABEL_11;
  }
  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !v5 )
    goto LABEL_10;
LABEL_6:
  if ( *v5 == UnityEngine_GameObject_TypeInfo )
    v6 = (Il2CppObject *)v5;
  else
    v6 = 0LL;
LABEL_11:
  v7 = UnityEngine_Object__Instantiate_object_(
         v6,
         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  _0_T = method->rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v16.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v16, 0LL);
  if ( !v7 )
    sub_1B8880C(TypeFromHandle, v10);
  Component = UnityEngine_GameObject__GetComponent((UnityEngine_GameObject_o *)v7, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_1_T);
  v13 = sub_1B886EC(Component, _1_T);
  v14 = method->rgctx_data->_1_T;
  if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
    v14 = (Il2CppClass *)sub_1BDA48C(v14);
  if ( v13 )
  {
    result = (Il2CppObject *)sub_1B886EC(v13, v14);
    if ( result )
      return result;
    sub_1B88ACC(v13);
  }
  return 0LL;
}


Il2CppObject *__fastcall GOExtensions__ConstructPersistant_object_(const MethodInfo_2ECEC94 *method)
{
  const MethodInfo_2ECE770 **rgctx_data; // x8
  Il2CppObject *v3; // x0
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x20
  UnityEngine_Object_o *gameObject; // x21
  Il2CppType *_2_T; // x21
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x20
  Il2CppClass *_1_T; // x1
  __int64 v11; // x20
  Il2CppClass *v12; // x19
  Il2CppObject *result; // x0
  System_RuntimeTypeHandle_o v14; // 0:w0.4

  rgctx_data = (const MethodInfo_2ECE770 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    rgctx_data = (const MethodInfo_2ECE770 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8();
      rgctx_data = (const MethodInfo_2ECE770 **)method->rgctx_data;
    }
  }
  v3 = GOExtensions__Construct_object_(*rgctx_data);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  v5 = (UnityEngine_Component_o *)v3;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
  _2_T = method->rgctx_data->_2_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v14.fields.value = (int)_2_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v14, 0LL);
  Component = UnityEngine_Component__GetComponent(v5, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_1_T);
  v11 = sub_1B886EC(Component, _1_T);
  v12 = method->rgctx_data->_1_T;
  if ( (BYTE5(v12->vtable[0].methodPtr) & 1) == 0 )
    v12 = (Il2CppClass *)sub_1BDA48C(v12);
  if ( v11 )
  {
    result = (Il2CppObject *)sub_1B886EC(v11, v12);
    if ( result )
      return result;
    sub_1B88ACC(v11);
  }
  return 0LL;
}


Il2CppObject *__fastcall GOExtensions__Construct_object_(const MethodInfo_2ECE770 *method)
{
  const MethodInfo_2ECE770_RGCTXs *rgctx_data; // x8
  Il2CppType *_0_T; // x20
  UnityEngine_Transform_o *TypeFromHandle; // x0
  __int64 v5; // x1
  System_String_o *v6; // x21
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *v8; // x21
  UnityEngine_Transform_o *v9; // x21
  Il2CppType *v10; // x0
  System_Type_o *v11; // x0
  Il2CppType *v12; // x0
  System_Type_o *v13; // x0
  UnityEngine_Component_o *Component; // x20
  Il2CppClass *_1_T; // x1
  __int64 v16; // x20
  Il2CppClass *v17; // x19
  Il2CppObject *result; // x0
  System_RuntimeTypeHandle_o v19; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v19.fields.value = (int)_0_T;
  TypeFromHandle = (UnityEngine_Transform_o *)System_Type__GetTypeFromHandle(v19, 0LL);
  if ( !TypeFromHandle )
    goto LABEL_23;
  v6 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Transform_o *, Il2CppMethodPointer))TypeFromHandle->klass->vtable._3_ToString.method)(
                            TypeFromHandle,
                            TypeFromHandle->klass->vtable._4_GetEnumerator.methodPtr);
  v7 = (UnityEngine_GameObject_o *)sub_1B887FC(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v7, v6, 0LL);
  if ( !v7 )
    goto LABEL_23;
  TypeFromHandle = UnityEngine_GameObject__get_transform(v7, 0LL);
  v8 = TypeFromHandle;
  if ( !byte_4A55CE1 )
  {
    TypeFromHandle = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v8 )
    goto LABEL_23;
  UnityEngine_Transform__set_position(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  TypeFromHandle = UnityEngine_GameObject__get_transform(v7, 0LL);
  v9 = TypeFromHandle;
  if ( !byte_4A55CE7 )
  {
    TypeFromHandle = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
  }
  if ( !v9 )
LABEL_23:
    sub_1B8880C(TypeFromHandle, v5);
  UnityEngine_Transform__set_rotation(v9, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  v10 = method->rgctx_data->_0_T;
  v11 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v10, 0LL);
  UnityEngine_GameObject__AddComponent(v7, v11, 0LL);
  v12 = method->rgctx_data->_0_T;
  v13 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v12, 0LL);
  Component = UnityEngine_GameObject__GetComponent(v7, v13, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_1_T);
  v16 = sub_1B886EC(Component, _1_T);
  v17 = method->rgctx_data->_1_T;
  if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
    v17 = (Il2CppClass *)sub_1BDA48C(v17);
  if ( v16 )
  {
    result = (Il2CppObject *)sub_1B886EC(v16, v17);
    if ( result )
      return result;
    sub_1B88ACC(v16);
  }
  return 0LL;
}