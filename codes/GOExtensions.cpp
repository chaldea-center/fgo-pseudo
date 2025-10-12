void GOExtensions___ctor(GOExtensions_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


Il2CppObject *GOExtensions__AddComponentWithData_object_(
        UnityEngine_GameObject_o *gameObject,
        WellFired_Data_DataBaseEntry_o *data,
        const MethodInfo_3133F00 *method)
{
  const MethodInfo_3133F00_RGCTXs *rgctx_data; // x8
  intptr_t _0_T; // x22
  System_RuntimeTypeHandle_o v8; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *v10; // x21
  long double v11; // q0
  Il2CppClass *_1_T; // x1
  long double v13; // q0
  System_Type_o *v14; // x21
  Il2CppClass *v15; // x20
  WellFired_Data_DataComponent_o *v16; // x0
  Il2CppObject *v17; // x22
  UnityEngine_GameObject_o *v19; // x0
  const MethodInfo_313400C *v20; // x1

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C32C20(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C83390();
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
  v10 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0);
  _1_T = method->rgctx_data->_1_T;
  if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C83334(v11);
  TypeFromHandle = (System_Type_o *)sub_1C32D5C(v10, _1_T);
  v14 = TypeFromHandle;
  v15 = method->rgctx_data->_1_T;
  if ( (*(&v15->_2.bitflags2 + 2) & 1) == 0 )
  {
    TypeFromHandle = (System_Type_o *)sub_1C83334(v13);
    v15 = (Il2CppClass *)TypeFromHandle;
  }
  if ( !v14 )
LABEL_14:
    sub_1C32E7C(TypeFromHandle);
  v16 = (WellFired_Data_DataComponent_o *)sub_1C32D5C(v14, v15);
  if ( v16 )
  {
    v17 = (Il2CppObject *)v16;
    WellFired_Data_DataComponent__InitFromData(v16, data, 0);
    return v17;
  }
  else
  {
    sub_1C3313C(v14);
    return GOExtensions__AddDisabledComponent_object_(v19, v20);
  }
}


Il2CppObject *GOExtensions__AddDisabledComponentWithData_object_(
        UnityEngine_GameObject_o *gameObject,
        WellFired_Data_DataBaseEntry_o *data,
        const MethodInfo_313410C *method)
{
  const MethodInfo_313410C_RGCTXs *rgctx_data; // x8
  intptr_t _0_T; // x22
  System_RuntimeTypeHandle_o v8; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *v10; // x21
  long double v11; // q0
  Il2CppClass *_1_T; // x1
  long double v13; // q0
  System_Type_o *v14; // x21
  Il2CppClass *v15; // x20
  WellFired_Data_DataComponent_o *v16; // x0
  UnityEngine_Behaviour_o *v17; // x22
  const MethodInfo_3134228 *v19; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C32C20(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C83390();
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
  v10 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0);
  _1_T = method->rgctx_data->_1_T;
  if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C83334(v11);
  TypeFromHandle = (System_Type_o *)sub_1C32D5C(v10, _1_T);
  v14 = TypeFromHandle;
  v15 = method->rgctx_data->_1_T;
  if ( (*(&v15->_2.bitflags2 + 2) & 1) == 0 )
  {
    TypeFromHandle = (System_Type_o *)sub_1C83334(v13);
    v15 = (Il2CppClass *)TypeFromHandle;
  }
  if ( !v14 )
LABEL_14:
    sub_1C32E7C(TypeFromHandle);
  v16 = (WellFired_Data_DataComponent_o *)sub_1C32D5C(v14, v15);
  if ( v16 )
  {
    v17 = (UnityEngine_Behaviour_o *)v16;
    WellFired_Data_DataComponent__InitFromData(v16, data, 0);
    UnityEngine_Behaviour__set_enabled(v17, 0, 0);
    return (Il2CppObject *)v17;
  }
  else
  {
    sub_1C3313C(v14);
    return GOExtensions__Construct_object_(v19);
  }
}


Il2CppObject *GOExtensions__AddDisabledComponent_object_(
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo_313400C *method)
{
  const MethodInfo_313400C_RGCTXs *rgctx_data; // x8
  intptr_t _0_T; // x21
  System_RuntimeTypeHandle_o v6; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *v8; // x20
  long double v9; // q0
  Il2CppClass *_1_T; // x1
  long double v11; // q0
  System_Type_o *v12; // x20
  Il2CppClass *v13; // x19
  UnityEngine_Behaviour_o *v14; // x0
  Il2CppObject *v15; // x21
  UnityEngine_GameObject_o *v17; // x0
  WellFired_Data_DataBaseEntry_o *v18; // x1
  const MethodInfo_313410C *v19; // x2

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C32C20(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C83390();
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
  v8 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0);
  _1_T = method->rgctx_data->_1_T;
  if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C83334(v9);
  TypeFromHandle = (System_Type_o *)sub_1C32D5C(v8, _1_T);
  v12 = TypeFromHandle;
  v13 = method->rgctx_data->_1_T;
  if ( (*(&v13->_2.bitflags2 + 2) & 1) == 0 )
  {
    TypeFromHandle = (System_Type_o *)sub_1C83334(v11);
    v13 = (Il2CppClass *)TypeFromHandle;
  }
  if ( !v12 )
LABEL_14:
    sub_1C32E7C(TypeFromHandle);
  v14 = (UnityEngine_Behaviour_o *)sub_1C32D5C(v12, v13);
  if ( v14 )
  {
    v15 = (Il2CppObject *)v14;
    UnityEngine_Behaviour__set_enabled(v14, 0, 0);
    return v15;
  }
  else
  {
    sub_1C3313C(v12);
    return GOExtensions__AddDisabledComponentWithData_object_(v17, v18, v19);
  }
}


Il2CppObject *GOExtensions__ConstructFromResourcePersistant_object_(
        System_String_o *name,
        const MethodInfo_31345C0 *method)
{
  UnityEngine_Object_o *v4; // x0
  UnityEngine_GameObject_c **v5; // x20
  Il2CppObject *v6; // x0
  Il2CppObject *v7; // x0
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Object_o *gameObject; // x0
  Il2CppType *_0_T; // x21
  System_RuntimeTypeHandle_o v11; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x20
  long double v14; // q0
  Il2CppClass *_1_T; // x1
  __int64 v16; // x20
  long double v17; // q0
  Il2CppClass *v18; // x19
  Il2CppObject *result; // x0

  if ( !method->rgctx_data )
  {
    sub_1C32C20(&UnityEngine_GameObject_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C83390();
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
         (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7 )
    sub_1C32E7C(0);
  v8 = (UnityEngine_GameObject_o *)v7;
  gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v7, 0);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0);
  _0_T = method->rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v11.fields.value = (intptr_t)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v11, 0);
  Component = UnityEngine_GameObject__GetComponent(v8, TypeFromHandle, 0);
  _1_T = method->rgctx_data->_1_T;
  if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C83334(v14);
  v16 = sub_1C32D5C(Component, _1_T);
  v18 = method->rgctx_data->_1_T;
  if ( (*(&v18->_2.bitflags2 + 2) & 1) == 0 )
    v18 = (Il2CppClass *)sub_1C83334(v17);
  if ( v16 )
  {
    result = (Il2CppObject *)sub_1C32D5C(v16, v18);
    if ( result )
      return result;
    sub_1C3313C(v16);
  }
  return 0;
}


Il2CppObject *GOExtensions__ConstructFromResource_object_(System_String_o *name, const MethodInfo_3134440 *method)
{
  UnityEngine_Object_o *v4; // x0
  UnityEngine_GameObject_c **v5; // x20
  Il2CppObject *v6; // x0
  Il2CppObject *v7; // x20
  Il2CppType *_0_T; // x21
  System_RuntimeTypeHandle_o v9; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x20
  long double v12; // q0
  Il2CppClass *_1_T; // x1
  __int64 v14; // x20
  long double v15; // q0
  Il2CppClass *v16; // x19
  Il2CppObject *result; // x0

  if ( !method->rgctx_data )
  {
    sub_1C32C20(&UnityEngine_GameObject_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C83390();
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
         (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  _0_T = method->rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v9.fields.value = (intptr_t)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v9, 0);
  if ( !v7 )
    sub_1C32E7C(TypeFromHandle);
  Component = UnityEngine_GameObject__GetComponent((UnityEngine_GameObject_o *)v7, TypeFromHandle, 0);
  _1_T = method->rgctx_data->_1_T;
  if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C83334(v12);
  v14 = sub_1C32D5C(Component, _1_T);
  v16 = method->rgctx_data->_1_T;
  if ( (*(&v16->_2.bitflags2 + 2) & 1) == 0 )
    v16 = (Il2CppClass *)sub_1C83334(v15);
  if ( v14 )
  {
    result = (Il2CppObject *)sub_1C32D5C(v14, v16);
    if ( result )
      return result;
    sub_1C3313C(v14);
  }
  return 0;
}


Il2CppObject *GOExtensions__ConstructPersistant_object_(const MethodInfo_313474C *method)
{
  const MethodInfo_3134228 **rgctx_data; // x8
  Il2CppObject *v3; // x0
  UnityEngine_Component_o *v4; // x20
  UnityEngine_Object_o *gameObject; // x21
  Il2CppType *_2_T; // x21
  System_RuntimeTypeHandle_o v7; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x20
  long double v10; // q0
  Il2CppClass *_1_T; // x1
  __int64 v12; // x20
  long double v13; // q0
  Il2CppClass *v14; // x19
  Il2CppObject *result; // x0

  rgctx_data = (const MethodInfo_3134228 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&System_Type_TypeInfo);
    rgctx_data = (const MethodInfo_3134228 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C83390();
      rgctx_data = (const MethodInfo_3134228 **)method->rgctx_data;
    }
  }
  v3 = GOExtensions__Construct_object_(*rgctx_data);
  if ( !v3 )
    sub_1C32E7C(0);
  v4 = (UnityEngine_Component_o *)v3;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0);
  _2_T = method->rgctx_data->_2_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v7.fields.value = (intptr_t)_2_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v7, 0);
  Component = UnityEngine_Component__GetComponent(v4, TypeFromHandle, 0);
  _1_T = method->rgctx_data->_1_T;
  if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C83334(v10);
  v12 = sub_1C32D5C(Component, _1_T);
  v14 = method->rgctx_data->_1_T;
  if ( (*(&v14->_2.bitflags2 + 2) & 1) == 0 )
    v14 = (Il2CppClass *)sub_1C83334(v13);
  if ( v12 )
  {
    result = (Il2CppObject *)sub_1C32D5C(v12, v14);
    if ( result )
      return result;
    sub_1C3313C(v12);
  }
  return 0;
}


Il2CppObject *GOExtensions__Construct_object_(const MethodInfo_3134228 *method)
{
  const MethodInfo_3134228_RGCTXs *rgctx_data; // x8
  intptr_t _0_T; // x20
  System_RuntimeTypeHandle_o v4; // x0
  __int64 TypeFromHandle; // x0
  System_String_o *v6; // x21
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *v8; // x21
  UnityEngine_Transform_o *v9; // x21
  System_RuntimeTypeHandle_o v10; // x0
  System_Type_o *v11; // x0
  System_RuntimeTypeHandle_o v12; // x0
  System_Type_o *v13; // x0
  UnityEngine_Component_o *Component; // x20
  long double v15; // q0
  Il2CppClass *_1_T; // x1
  __int64 v17; // x20
  long double v18; // q0
  Il2CppClass *v19; // x19
  Il2CppObject *result; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C32C20(&UnityEngine_GameObject_TypeInfo);
    sub_1C32C20(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C83390();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = (intptr_t)rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v4.fields.value = _0_T;
  TypeFromHandle = (__int64)System_Type__GetTypeFromHandle(v4, 0);
  if ( !TypeFromHandle )
    goto LABEL_23;
  v6 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)TypeFromHandle + 360LL))(
                            TypeFromHandle,
                            *(_QWORD *)(*(_QWORD *)TypeFromHandle + 368LL));
  v7 = (UnityEngine_GameObject_o *)sub_1C32E6C(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v7, v6, 0);
  if ( !v7 )
    goto LABEL_23;
  TypeFromHandle = (__int64)UnityEngine_GameObject__get_transform(v7, 0);
  v8 = (UnityEngine_Transform_o *)TypeFromHandle;
  if ( !byte_4C313D1 )
  {
    TypeFromHandle = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v8 )
    goto LABEL_23;
  UnityEngine_Transform__set_position(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  TypeFromHandle = (__int64)UnityEngine_GameObject__get_transform(v7, 0);
  v9 = (UnityEngine_Transform_o *)TypeFromHandle;
  if ( !byte_4C313D7 )
  {
    TypeFromHandle = sub_1C32C20(&UnityEngine_Quaternion_TypeInfo);
    byte_4C313D7 = 1;
  }
  if ( !v9 )
LABEL_23:
    sub_1C32E7C(TypeFromHandle);
  UnityEngine_Transform__set_rotation(v9, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
  v10.fields.value = (intptr_t)method->rgctx_data->_0_T;
  v11 = System_Type__GetTypeFromHandle(v10, 0);
  UnityEngine_GameObject__AddComponent(v7, v11, 0);
  v12.fields.value = (intptr_t)method->rgctx_data->_0_T;
  v13 = System_Type__GetTypeFromHandle(v12, 0);
  Component = UnityEngine_GameObject__GetComponent(v7, v13, 0);
  _1_T = method->rgctx_data->_1_T;
  if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C83334(v15);
  v17 = sub_1C32D5C(Component, _1_T);
  v19 = method->rgctx_data->_1_T;
  if ( (*(&v19->_2.bitflags2 + 2) & 1) == 0 )
    v19 = (Il2CppClass *)sub_1C83334(v18);
  if ( v17 )
  {
    result = (Il2CppObject *)sub_1C32D5C(v17, v19);
    if ( result )
      return result;
    sub_1C3313C(v17);
  }
  return 0;
}