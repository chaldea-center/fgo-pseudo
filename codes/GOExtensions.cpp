void GOExtensions___ctor(GOExtensions_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


Il2CppObject *GOExtensions__AddComponentWithData_object_(
        UnityEngine_GameObject_o *gameObject,
        WellFired_Data_DataBaseEntry_o *data,
        const MethodInfo_31F3D20 *method)
{
  const MethodInfo_31F3D20_RGCTXs *rgctx_data; // x8
  intptr_t _0_T; // x22
  System_RuntimeTypeHandle_o v8; // x0
  System_Type_o *TypeFromHandle; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x21
  long double v12; // q0
  Il2CppClass *_1_T; // x1
  long double v14; // q0
  System_Type_o *v15; // x21
  Il2CppClass *v16; // x20
  WellFired_Data_DataComponent_o *v17; // x0
  Il2CppObject *v18; // x22
  UnityEngine_GameObject_o *v20; // x0
  const MethodInfo_31F3E2C *v21; // x1

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C94098(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C6A188();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = (intptr_t)rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v8.fields.value = _0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0);
  if ( !gameObject )
    goto LABEL_14;
  v11 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0);
  _1_T = method->rgctx_data->_1_T;
  if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C6A12C(v12);
  TypeFromHandle = (System_Type_o *)sub_1C941D4(v11, _1_T);
  v15 = TypeFromHandle;
  v16 = method->rgctx_data->_1_T;
  if ( (*(&v16->_2.bitflags2 + 2) & 1) == 0 )
  {
    TypeFromHandle = (System_Type_o *)sub_1C6A12C(v14);
    v16 = (Il2CppClass *)TypeFromHandle;
  }
  if ( !v15 )
LABEL_14:
    sub_1C942F0(TypeFromHandle, v10);
  v17 = (WellFired_Data_DataComponent_o *)sub_1C941D4(v15, v16);
  if ( v17 )
  {
    v18 = (Il2CppObject *)v17;
    WellFired_Data_DataComponent__InitFromData(v17, data, 0);
    return v18;
  }
  else
  {
    sub_1C9468C(v15);
    return GOExtensions__AddDisabledComponent_object_(v20, v21);
  }
}


Il2CppObject *GOExtensions__AddDisabledComponentWithData_object_(
        UnityEngine_GameObject_o *gameObject,
        WellFired_Data_DataBaseEntry_o *data,
        const MethodInfo_31F3F2C *method)
{
  const MethodInfo_31F3F2C_RGCTXs *rgctx_data; // x8
  intptr_t _0_T; // x22
  System_RuntimeTypeHandle_o v8; // x0
  System_Type_o *TypeFromHandle; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x21
  long double v12; // q0
  Il2CppClass *_1_T; // x1
  long double v14; // q0
  System_Type_o *v15; // x21
  Il2CppClass *v16; // x20
  WellFired_Data_DataComponent_o *v17; // x0
  UnityEngine_Behaviour_o *v18; // x22
  const MethodInfo_31F4048 *v20; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C94098(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C6A188();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = (intptr_t)rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v8.fields.value = _0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0);
  if ( !gameObject )
    goto LABEL_14;
  v11 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0);
  _1_T = method->rgctx_data->_1_T;
  if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C6A12C(v12);
  TypeFromHandle = (System_Type_o *)sub_1C941D4(v11, _1_T);
  v15 = TypeFromHandle;
  v16 = method->rgctx_data->_1_T;
  if ( (*(&v16->_2.bitflags2 + 2) & 1) == 0 )
  {
    TypeFromHandle = (System_Type_o *)sub_1C6A12C(v14);
    v16 = (Il2CppClass *)TypeFromHandle;
  }
  if ( !v15 )
LABEL_14:
    sub_1C942F0(TypeFromHandle, v10);
  v17 = (WellFired_Data_DataComponent_o *)sub_1C941D4(v15, v16);
  if ( v17 )
  {
    v18 = (UnityEngine_Behaviour_o *)v17;
    WellFired_Data_DataComponent__InitFromData(v17, data, 0);
    UnityEngine_Behaviour__set_enabled(v18, 0, 0);
    return (Il2CppObject *)v18;
  }
  else
  {
    sub_1C9468C(v15);
    return GOExtensions__Construct_object_(v20);
  }
}


Il2CppObject *GOExtensions__AddDisabledComponent_object_(
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo_31F3E2C *method)
{
  const MethodInfo_31F3E2C_RGCTXs *rgctx_data; // x8
  intptr_t _0_T; // x21
  System_RuntimeTypeHandle_o v6; // x0
  System_Type_o *TypeFromHandle; // x0
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x20
  long double v10; // q0
  Il2CppClass *_1_T; // x1
  long double v12; // q0
  System_Type_o *v13; // x20
  Il2CppClass *v14; // x19
  UnityEngine_Behaviour_o *v15; // x0
  Il2CppObject *v16; // x21
  UnityEngine_GameObject_o *v18; // x0
  WellFired_Data_DataBaseEntry_o *v19; // x1
  const MethodInfo_31F3F2C *v20; // x2

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C94098(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C6A188();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = (intptr_t)rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v6.fields.value = _0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v6, 0);
  if ( !gameObject )
    goto LABEL_14;
  v9 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0);
  _1_T = method->rgctx_data->_1_T;
  if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C6A12C(v10);
  TypeFromHandle = (System_Type_o *)sub_1C941D4(v9, _1_T);
  v13 = TypeFromHandle;
  v14 = method->rgctx_data->_1_T;
  if ( (*(&v14->_2.bitflags2 + 2) & 1) == 0 )
  {
    TypeFromHandle = (System_Type_o *)sub_1C6A12C(v12);
    v14 = (Il2CppClass *)TypeFromHandle;
  }
  if ( !v13 )
LABEL_14:
    sub_1C942F0(TypeFromHandle, v8);
  v15 = (UnityEngine_Behaviour_o *)sub_1C941D4(v13, v14);
  if ( v15 )
  {
    v16 = (Il2CppObject *)v15;
    UnityEngine_Behaviour__set_enabled(v15, 0, 0);
    return v16;
  }
  else
  {
    sub_1C9468C(v13);
    return GOExtensions__AddDisabledComponentWithData_object_(v18, v19, v20);
  }
}


Il2CppObject *GOExtensions__ConstructFromResourcePersistant_object_(
        System_String_o *name,
        const MethodInfo_31F43E0 *method)
{
  UnityEngine_Object_o *v4; // x0
  UnityEngine_GameObject_c **v5; // x20
  Il2CppObject *v6; // x0
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Object_o *gameObject; // x0
  Il2CppType *_0_T; // x21
  System_RuntimeTypeHandle_o v12; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x20
  long double v15; // q0
  Il2CppClass *_1_T; // x1
  __int64 v17; // x20
  long double v18; // q0
  Il2CppClass *v19; // x19
  Il2CppObject *result; // x0

  if ( !method->rgctx_data )
  {
    sub_1C94098(&UnityEngine_GameObject_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C6A188();
  }
  v4 = UnityEngine_Resources__Load(name, 0);
  v5 = (UnityEngine_GameObject_c **)v4;
  if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( v4 )
      goto LABEL_6;
LABEL_10:
    v6 = 0;
    goto LABEL_11;
  }
  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !v5 )
    goto LABEL_10;
LABEL_6:
  if ( *v5 == UnityEngine_GameObject_TypeInfo )
    v6 = (Il2CppObject *)v5;
  else
    v6 = 0;
LABEL_11:
  v7 = UnityEngine_Object__Instantiate_object_(
         v6,
         (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7 )
    sub_1C942F0(0, v8);
  v9 = (UnityEngine_GameObject_o *)v7;
  gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v7, 0);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0);
  _0_T = method->rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v12.fields.value = (intptr_t)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v12, 0);
  Component = UnityEngine_GameObject__GetComponent(v9, TypeFromHandle, 0);
  _1_T = method->rgctx_data->_1_T;
  if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C6A12C(v15);
  v17 = sub_1C941D4(Component, _1_T);
  v19 = method->rgctx_data->_1_T;
  if ( (*(&v19->_2.bitflags2 + 2) & 1) == 0 )
    v19 = (Il2CppClass *)sub_1C6A12C(v18);
  if ( v17 )
  {
    result = (Il2CppObject *)sub_1C941D4(v17, v19);
    if ( result )
      return result;
    sub_1C9468C(v17);
  }
  return 0;
}


Il2CppObject *GOExtensions__ConstructFromResource_object_(System_String_o *name, const MethodInfo_31F4260 *method)
{
  UnityEngine_Object_o *v4; // x0
  UnityEngine_GameObject_c **v5; // x20
  Il2CppObject *v6; // x0
  Il2CppObject *v7; // x20
  Il2CppType *_0_T; // x21
  System_RuntimeTypeHandle_o v9; // x0
  System_Type_o *TypeFromHandle; // x0
  __int64 v11; // x1
  UnityEngine_Component_o *Component; // x20
  long double v13; // q0
  Il2CppClass *_1_T; // x1
  __int64 v15; // x20
  long double v16; // q0
  Il2CppClass *v17; // x19
  Il2CppObject *result; // x0

  if ( !method->rgctx_data )
  {
    sub_1C94098(&UnityEngine_GameObject_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C6A188();
  }
  v4 = UnityEngine_Resources__Load(name, 0);
  v5 = (UnityEngine_GameObject_c **)v4;
  if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( v4 )
      goto LABEL_6;
LABEL_10:
    v6 = 0;
    goto LABEL_11;
  }
  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !v5 )
    goto LABEL_10;
LABEL_6:
  if ( *v5 == UnityEngine_GameObject_TypeInfo )
    v6 = (Il2CppObject *)v5;
  else
    v6 = 0;
LABEL_11:
  v7 = UnityEngine_Object__Instantiate_object_(
         v6,
         (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  _0_T = method->rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v9.fields.value = (intptr_t)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v9, 0);
  if ( !v7 )
    sub_1C942F0(TypeFromHandle, v11);
  Component = UnityEngine_GameObject__GetComponent((UnityEngine_GameObject_o *)v7, TypeFromHandle, 0);
  _1_T = method->rgctx_data->_1_T;
  if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C6A12C(v13);
  v15 = sub_1C941D4(Component, _1_T);
  v17 = method->rgctx_data->_1_T;
  if ( (*(&v17->_2.bitflags2 + 2) & 1) == 0 )
    v17 = (Il2CppClass *)sub_1C6A12C(v16);
  if ( v15 )
  {
    result = (Il2CppObject *)sub_1C941D4(v15, v17);
    if ( result )
      return result;
    sub_1C9468C(v15);
  }
  return 0;
}


Il2CppObject *GOExtensions__ConstructPersistant_object_(const MethodInfo_31F456C *method)
{
  const MethodInfo_31F4048 **rgctx_data; // x8
  Il2CppObject *v3; // x0
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x20
  UnityEngine_Object_o *gameObject; // x21
  Il2CppType *_2_T; // x21
  System_RuntimeTypeHandle_o v8; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x20
  long double v11; // q0
  Il2CppClass *_1_T; // x1
  __int64 v13; // x20
  long double v14; // q0
  Il2CppClass *v15; // x19
  Il2CppObject *result; // x0

  rgctx_data = (const MethodInfo_31F4048 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&System_Type_TypeInfo);
    rgctx_data = (const MethodInfo_31F4048 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C6A188();
      rgctx_data = (const MethodInfo_31F4048 **)method->rgctx_data;
    }
  }
  v3 = GOExtensions__Construct_object_(*rgctx_data);
  if ( !v3 )
    sub_1C942F0(0, v4);
  v5 = (UnityEngine_Component_o *)v3;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0);
  _2_T = method->rgctx_data->_2_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v8.fields.value = (intptr_t)_2_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0);
  Component = UnityEngine_Component__GetComponent(v5, TypeFromHandle, 0);
  _1_T = method->rgctx_data->_1_T;
  if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C6A12C(v11);
  v13 = sub_1C941D4(Component, _1_T);
  v15 = method->rgctx_data->_1_T;
  if ( (*(&v15->_2.bitflags2 + 2) & 1) == 0 )
    v15 = (Il2CppClass *)sub_1C6A12C(v14);
  if ( v13 )
  {
    result = (Il2CppObject *)sub_1C941D4(v13, v15);
    if ( result )
      return result;
    sub_1C9468C(v13);
  }
  return 0;
}


Il2CppObject *GOExtensions__Construct_object_(const MethodInfo_31F4048 *method)
{
  const MethodInfo_31F4048_RGCTXs *rgctx_data; // x8
  intptr_t _0_T; // x20
  System_RuntimeTypeHandle_o v4; // x0
  UnityEngine_Transform_o *TypeFromHandle; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *v9; // x21
  UnityEngine_Transform_o *v10; // x21
  System_RuntimeTypeHandle_o v11; // x0
  System_Type_o *v12; // x0
  System_RuntimeTypeHandle_o v13; // x0
  System_Type_o *v14; // x0
  UnityEngine_Component_o *Component; // x20
  long double v16; // q0
  Il2CppClass *_1_T; // x1
  __int64 v18; // x20
  long double v19; // q0
  Il2CppClass *v20; // x19
  Il2CppObject *result; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C94098(&UnityEngine_GameObject_TypeInfo);
    sub_1C94098(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C6A188();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = (intptr_t)rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v4.fields.value = _0_T;
  TypeFromHandle = (UnityEngine_Transform_o *)System_Type__GetTypeFromHandle(v4, 0);
  if ( !TypeFromHandle )
    goto LABEL_23;
  v7 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Transform_o *, const MethodInfo *))TypeFromHandle->klass->vtable._3_ToString.methodPtr)(
                            TypeFromHandle,
                            TypeFromHandle->klass->vtable._3_ToString.method);
  v8 = (UnityEngine_GameObject_o *)sub_1C942E4(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v8, v7, 0);
  if ( !v8 )
    goto LABEL_23;
  TypeFromHandle = UnityEngine_GameObject__get_transform(v8, 0);
  v9 = TypeFromHandle;
  if ( !byte_4D25F19 )
  {
    TypeFromHandle = (UnityEngine_Transform_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  if ( !v9 )
    goto LABEL_23;
  UnityEngine_Transform__set_position(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  TypeFromHandle = UnityEngine_GameObject__get_transform(v8, 0);
  v10 = TypeFromHandle;
  if ( !byte_4D25F1F )
  {
    TypeFromHandle = (UnityEngine_Transform_o *)sub_1C94098(&UnityEngine_Quaternion_TypeInfo);
    byte_4D25F1F = 1;
  }
  if ( !v10 )
LABEL_23:
    sub_1C942F0(TypeFromHandle, v6);
  UnityEngine_Transform__set_rotation(v10, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
  v11.fields.value = (intptr_t)method->rgctx_data->_0_T;
  v12 = System_Type__GetTypeFromHandle(v11, 0);
  UnityEngine_GameObject__AddComponent(v8, v12, 0);
  v13.fields.value = (intptr_t)method->rgctx_data->_0_T;
  v14 = System_Type__GetTypeFromHandle(v13, 0);
  Component = UnityEngine_GameObject__GetComponent(v8, v14, 0);
  _1_T = method->rgctx_data->_1_T;
  if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C6A12C(v16);
  v18 = sub_1C941D4(Component, _1_T);
  v20 = method->rgctx_data->_1_T;
  if ( (*(&v20->_2.bitflags2 + 2) & 1) == 0 )
    v20 = (Il2CppClass *)sub_1C6A12C(v19);
  if ( v18 )
  {
    result = (Il2CppObject *)sub_1C941D4(v18, v20);
    if ( result )
      return result;
    sub_1C9468C(v18);
  }
  return 0;
}