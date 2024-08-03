void __fastcall GOExtensions___ctor(GOExtensions_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


Il2CppObject *__fastcall GOExtensions__AddComponentWithData_object_(
        UnityEngine_GameObject_o *gameObject,
        WellFired_Data_DataBaseEntry_o *data,
        const MethodInfo_2E87468 *method)
{
  const MethodInfo_2E87468_RGCTXs *rgctx_data; // x8
  Il2CppType *_0_T; // x22
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *v9; // x21
  Il2CppClass *_1_T; // x1
  System_Type_o *v11; // x21
  Il2CppClass *v12; // x20
  WellFired_Data_DataComponent_o *v13; // x0
  Il2CppObject *v14; // x22
  UnityEngine_GameObject_o *v16; // x0
  const MethodInfo_2E87574 *v17; // x1
  System_RuntimeTypeHandle_o v18; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B640C8(&System_Type_TypeInfo, data);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6000();
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
  v9 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_1_T);
  TypeFromHandle = (System_Type_o *)sub_1B64204(v9, _1_T);
  v11 = TypeFromHandle;
  v12 = method->rgctx_data->_1_T;
  if ( (BYTE5(v12->vtable[0].methodPtr) & 1) == 0 )
  {
    TypeFromHandle = (System_Type_o *)sub_1BB5FA4(v12);
    v12 = (Il2CppClass *)TypeFromHandle;
  }
  if ( !v11 )
LABEL_14:
    sub_1B64324(TypeFromHandle);
  v13 = (WellFired_Data_DataComponent_o *)sub_1B64204(v11, v12);
  if ( v13 )
  {
    v14 = (Il2CppObject *)v13;
    WellFired_Data_DataComponent__InitFromData(v13, data, 0LL);
    return v14;
  }
  else
  {
    sub_1B645E4(v11);
    return GOExtensions__AddDisabledComponent_object_(v16, v17);
  }
}


Il2CppObject *__fastcall GOExtensions__AddDisabledComponentWithData_object_(
        UnityEngine_GameObject_o *gameObject,
        WellFired_Data_DataBaseEntry_o *data,
        const MethodInfo_2E87674 *method)
{
  const MethodInfo_2E87674_RGCTXs *rgctx_data; // x8
  Il2CppType *_0_T; // x22
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *v9; // x21
  Il2CppClass *_1_T; // x1
  System_Type_o *v11; // x21
  Il2CppClass *v12; // x20
  WellFired_Data_DataComponent_o *v13; // x0
  UnityEngine_Behaviour_o *v14; // x22
  const MethodInfo_2E87790 *v16; // x0
  System_RuntimeTypeHandle_o v17; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B640C8(&System_Type_TypeInfo, data);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6000();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v17.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v17, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  v9 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_1_T);
  TypeFromHandle = (System_Type_o *)sub_1B64204(v9, _1_T);
  v11 = TypeFromHandle;
  v12 = method->rgctx_data->_1_T;
  if ( (BYTE5(v12->vtable[0].methodPtr) & 1) == 0 )
  {
    TypeFromHandle = (System_Type_o *)sub_1BB5FA4(v12);
    v12 = (Il2CppClass *)TypeFromHandle;
  }
  if ( !v11 )
LABEL_14:
    sub_1B64324(TypeFromHandle);
  v13 = (WellFired_Data_DataComponent_o *)sub_1B64204(v11, v12);
  if ( v13 )
  {
    v14 = (UnityEngine_Behaviour_o *)v13;
    WellFired_Data_DataComponent__InitFromData(v13, data, 0LL);
    UnityEngine_Behaviour__set_enabled(v14, 0, 0LL);
    return (Il2CppObject *)v14;
  }
  else
  {
    sub_1B645E4(v11);
    return GOExtensions__Construct_object_(v16);
  }
}


Il2CppObject *__fastcall GOExtensions__AddDisabledComponent_object_(
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo_2E87574 *method)
{
  const MethodInfo_2E87574_RGCTXs *rgctx_data; // x8
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *v7; // x20
  Il2CppClass *_1_T; // x1
  System_Type_o *v9; // x20
  Il2CppClass *v10; // x19
  UnityEngine_Behaviour_o *v11; // x0
  Il2CppObject *v12; // x21
  UnityEngine_GameObject_o *v14; // x0
  WellFired_Data_DataBaseEntry_o *v15; // x1
  const MethodInfo_2E87674 *v16; // x2
  System_RuntimeTypeHandle_o v17; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B640C8(&System_Type_TypeInfo, method);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6000();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v17.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v17, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  v7 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_1_T);
  TypeFromHandle = (System_Type_o *)sub_1B64204(v7, _1_T);
  v9 = TypeFromHandle;
  v10 = method->rgctx_data->_1_T;
  if ( (BYTE5(v10->vtable[0].methodPtr) & 1) == 0 )
  {
    TypeFromHandle = (System_Type_o *)sub_1BB5FA4(v10);
    v10 = (Il2CppClass *)TypeFromHandle;
  }
  if ( !v9 )
LABEL_14:
    sub_1B64324(TypeFromHandle);
  v11 = (UnityEngine_Behaviour_o *)sub_1B64204(v9, v10);
  if ( v11 )
  {
    v12 = (Il2CppObject *)v11;
    UnityEngine_Behaviour__set_enabled(v11, 0, 0LL);
    return v12;
  }
  else
  {
    sub_1B645E4(v9);
    return GOExtensions__AddDisabledComponentWithData_object_(v14, v15, v16);
  }
}


Il2CppObject *__fastcall GOExtensions__ConstructFromResourcePersistant_object_(
        System_String_o *name,
        const MethodInfo_2E87B28 *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x0
  UnityEngine_GameObject_c **v8; // x20
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x0
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Object_o *gameObject; // x0
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x20
  Il2CppClass *_1_T; // x1
  __int64 v17; // x20
  Il2CppClass *v18; // x19
  Il2CppObject *result; // x0
  System_RuntimeTypeHandle_o v20; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&UnityEngine_GameObject_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&System_Type_TypeInfo, v6);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  v7 = UnityEngine_Resources__Load(name, 0LL);
  v8 = (UnityEngine_GameObject_c **)v7;
  if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( v7 )
      goto LABEL_6;
LABEL_10:
    v9 = 0LL;
    goto LABEL_11;
  }
  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !v8 )
    goto LABEL_10;
LABEL_6:
  if ( *v8 == UnityEngine_GameObject_TypeInfo )
    v9 = (Il2CppObject *)v8;
  else
    v9 = 0LL;
LABEL_11:
  v10 = UnityEngine_Object__Instantiate_object_(
          v9,
          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v10 )
    sub_1B64324(0LL);
  v11 = (UnityEngine_GameObject_o *)v10;
  gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v10, 0LL);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
  _0_T = method->rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v20.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v20, 0LL);
  Component = UnityEngine_GameObject__GetComponent(v11, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_1_T);
  v17 = sub_1B64204(Component, _1_T);
  v18 = method->rgctx_data->_1_T;
  if ( (BYTE5(v18->vtable[0].methodPtr) & 1) == 0 )
    v18 = (Il2CppClass *)sub_1BB5FA4(v18);
  if ( v17 )
  {
    result = (Il2CppObject *)sub_1B64204(v17, v18);
    if ( result )
      return result;
    sub_1B645E4(v17);
  }
  return 0LL;
}


Il2CppObject *__fastcall GOExtensions__ConstructFromResource_object_(
        System_String_o *name,
        const MethodInfo_2E879A8 *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x0
  UnityEngine_GameObject_c **v8; // x20
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x20
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
    sub_1B640C8(&UnityEngine_GameObject_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&System_Type_TypeInfo, v6);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  v7 = UnityEngine_Resources__Load(name, 0LL);
  v8 = (UnityEngine_GameObject_c **)v7;
  if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( v7 )
      goto LABEL_6;
LABEL_10:
    v9 = 0LL;
    goto LABEL_11;
  }
  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !v8 )
    goto LABEL_10;
LABEL_6:
  if ( *v8 == UnityEngine_GameObject_TypeInfo )
    v9 = (Il2CppObject *)v8;
  else
    v9 = 0LL;
LABEL_11:
  v10 = UnityEngine_Object__Instantiate_object_(
          v9,
          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  _0_T = method->rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v18.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v18, 0LL);
  if ( !v10 )
    sub_1B64324(TypeFromHandle);
  Component = UnityEngine_GameObject__GetComponent((UnityEngine_GameObject_o *)v10, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_1_T);
  v15 = sub_1B64204(Component, _1_T);
  v16 = method->rgctx_data->_1_T;
  if ( (BYTE5(v16->vtable[0].methodPtr) & 1) == 0 )
    v16 = (Il2CppClass *)sub_1BB5FA4(v16);
  if ( v15 )
  {
    result = (Il2CppObject *)sub_1B64204(v15, v16);
    if ( result )
      return result;
    sub_1B645E4(v15);
  }
  return 0LL;
}


Il2CppObject *__fastcall GOExtensions__ConstructPersistant_object_(const MethodInfo_2E87CB4 *method)
{
  __int64 v1; // x1
  const MethodInfo_2E87790 **rgctx_data; // x8
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  UnityEngine_Component_o *v6; // x20
  UnityEngine_Object_o *gameObject; // x21
  Il2CppType *_2_T; // x21
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x20
  Il2CppClass *_1_T; // x1
  __int64 v12; // x20
  Il2CppClass *v13; // x19
  Il2CppObject *result; // x0
  System_RuntimeTypeHandle_o v15; // 0:w0.4

  rgctx_data = (const MethodInfo_2E87790 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&System_Type_TypeInfo, v4);
    rgctx_data = (const MethodInfo_2E87790 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6000();
      rgctx_data = (const MethodInfo_2E87790 **)method->rgctx_data;
    }
  }
  v5 = GOExtensions__Construct_object_(*rgctx_data);
  if ( !v5 )
    sub_1B64324(0LL);
  v6 = (UnityEngine_Component_o *)v5;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
  _2_T = method->rgctx_data->_2_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v15.fields.value = (int)_2_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v15, 0LL);
  Component = UnityEngine_Component__GetComponent(v6, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_1_T);
  v12 = sub_1B64204(Component, _1_T);
  v13 = method->rgctx_data->_1_T;
  if ( (BYTE5(v13->vtable[0].methodPtr) & 1) == 0 )
    v13 = (Il2CppClass *)sub_1BB5FA4(v13);
  if ( v12 )
  {
    result = (Il2CppObject *)sub_1B64204(v12, v13);
    if ( result )
      return result;
    sub_1B645E4(v12);
  }
  return 0LL;
}


Il2CppObject *__fastcall GOExtensions__Construct_object_(const MethodInfo_2E87790 *method)
{
  __int64 v1; // x1
  const MethodInfo_2E87790_RGCTXs *rgctx_data; // x8
  __int64 v4; // x1
  Il2CppType *_0_T; // x20
  __int64 TypeFromHandle; // x0
  System_String_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *v10; // x20
  __int64 v11; // x1
  UnityEngine_Transform_o *v12; // x21
  __int64 v13; // x1
  UnityEngine_Transform_o *v14; // x21
  Il2CppType *v15; // x0
  System_Type_o *v16; // x0
  Il2CppType *v17; // x0
  System_Type_o *v18; // x0
  UnityEngine_Component_o *Component; // x20
  Il2CppClass *_1_T; // x1
  __int64 v21; // x20
  Il2CppClass *v22; // x19
  Il2CppObject *result; // x0
  System_RuntimeTypeHandle_o v24; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B640C8(&UnityEngine_GameObject_TypeInfo, v1);
    sub_1B640C8(&System_Type_TypeInfo, v4);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6000();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v24.fields.value = (int)_0_T;
  TypeFromHandle = (__int64)System_Type__GetTypeFromHandle(v24, 0LL);
  if ( !TypeFromHandle )
    goto LABEL_23;
  v7 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)TypeFromHandle + 360LL))(
                            TypeFromHandle,
                            *(_QWORD *)(*(_QWORD *)TypeFromHandle + 368LL));
  v10 = (UnityEngine_GameObject_o *)sub_1B64314(UnityEngine_GameObject_TypeInfo, v8, v9);
  UnityEngine_GameObject___ctor(v10, v7, 0LL);
  if ( !v10 )
    goto LABEL_23;
  TypeFromHandle = (__int64)UnityEngine_GameObject__get_transform(v10, 0LL);
  v12 = (UnityEngine_Transform_o *)TypeFromHandle;
  if ( !byte_49F7111 )
  {
    TypeFromHandle = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v11);
    byte_49F7111 = 1;
  }
  if ( !v12 )
    goto LABEL_23;
  UnityEngine_Transform__set_position(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  TypeFromHandle = (__int64)UnityEngine_GameObject__get_transform(v10, 0LL);
  v14 = (UnityEngine_Transform_o *)TypeFromHandle;
  if ( !byte_49F7117 )
  {
    TypeFromHandle = sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v13);
    byte_49F7117 = 1;
  }
  if ( !v14 )
LABEL_23:
    sub_1B64324(TypeFromHandle);
  UnityEngine_Transform__set_rotation(v14, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  v15 = method->rgctx_data->_0_T;
  v16 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v15, 0LL);
  UnityEngine_GameObject__AddComponent(v10, v16, 0LL);
  v17 = method->rgctx_data->_0_T;
  v18 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v17, 0LL);
  Component = UnityEngine_GameObject__GetComponent(v10, v18, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_1_T);
  v21 = sub_1B64204(Component, _1_T);
  v22 = method->rgctx_data->_1_T;
  if ( (BYTE5(v22->vtable[0].methodPtr) & 1) == 0 )
    v22 = (Il2CppClass *)sub_1BB5FA4(v22);
  if ( v21 )
  {
    result = (Il2CppObject *)sub_1B64204(v21, v22);
    if ( result )
      return result;
    sub_1B645E4(v21);
  }
  return 0LL;
}