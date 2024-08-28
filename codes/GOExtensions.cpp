void __fastcall GOExtensions___ctor(GOExtensions_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


Il2CppObject *__fastcall GOExtensions__AddComponentWithData_object_(
        UnityEngine_GameObject_o *gameObject,
        WellFired_Data_DataBaseEntry_o *data,
        const MethodInfo_2E97EE0 *method)
{
  const MethodInfo_2E97EE0_RGCTXs *rgctx_data; // x8
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
  const MethodInfo_2E97FEC *v18; // x1
  System_RuntimeTypeHandle_o v19; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B686D4(&System_Type_TypeInfo, data);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BBA60C();
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
    _1_T = (Il2CppClass *)sub_1BBA5B0(method->rgctx_data->_1_T);
  TypeFromHandle = (System_Type_o *)sub_1B68810(v10, _1_T);
  v12 = TypeFromHandle;
  v13 = method->rgctx_data->_1_T;
  if ( (BYTE5(v13->vtable[0].methodPtr) & 1) == 0 )
  {
    TypeFromHandle = (System_Type_o *)sub_1BBA5B0(v13);
    v13 = (Il2CppClass *)TypeFromHandle;
  }
  if ( !v12 )
LABEL_14:
    sub_1B68930(TypeFromHandle, v9);
  v14 = (WellFired_Data_DataComponent_o *)sub_1B68810(v12, v13);
  if ( v14 )
  {
    v15 = (Il2CppObject *)v14;
    WellFired_Data_DataComponent__InitFromData(v14, data, 0LL);
    return v15;
  }
  else
  {
    sub_1B68BF0(v12);
    return GOExtensions__AddDisabledComponent_object_(v17, v18);
  }
}


Il2CppObject *__fastcall GOExtensions__AddDisabledComponentWithData_object_(
        UnityEngine_GameObject_o *gameObject,
        WellFired_Data_DataBaseEntry_o *data,
        const MethodInfo_2E980EC *method)
{
  const MethodInfo_2E980EC_RGCTXs *rgctx_data; // x8
  Il2CppType *_0_T; // x22
  System_Type_o *TypeFromHandle; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x21
  Il2CppClass *_1_T; // x1
  System_Type_o *v12; // x21
  Il2CppClass *v13; // x20
  WellFired_Data_DataComponent_o *v14; // x0
  UnityEngine_Behaviour_o *v15; // x22
  const MethodInfo_2E98208 *v17; // x0
  System_RuntimeTypeHandle_o v18; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B686D4(&System_Type_TypeInfo, data);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BBA60C();
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
    _1_T = (Il2CppClass *)sub_1BBA5B0(method->rgctx_data->_1_T);
  TypeFromHandle = (System_Type_o *)sub_1B68810(v10, _1_T);
  v12 = TypeFromHandle;
  v13 = method->rgctx_data->_1_T;
  if ( (BYTE5(v13->vtable[0].methodPtr) & 1) == 0 )
  {
    TypeFromHandle = (System_Type_o *)sub_1BBA5B0(v13);
    v13 = (Il2CppClass *)TypeFromHandle;
  }
  if ( !v12 )
LABEL_14:
    sub_1B68930(TypeFromHandle, v9);
  v14 = (WellFired_Data_DataComponent_o *)sub_1B68810(v12, v13);
  if ( v14 )
  {
    v15 = (UnityEngine_Behaviour_o *)v14;
    WellFired_Data_DataComponent__InitFromData(v14, data, 0LL);
    UnityEngine_Behaviour__set_enabled(v15, 0, 0LL);
    return (Il2CppObject *)v15;
  }
  else
  {
    sub_1B68BF0(v12);
    return GOExtensions__Construct_object_(v17);
  }
}


Il2CppObject *__fastcall GOExtensions__AddDisabledComponent_object_(
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo_2E97FEC *method)
{
  const MethodInfo_2E97FEC_RGCTXs *rgctx_data; // x8
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
  const MethodInfo_2E980EC *v17; // x2
  System_RuntimeTypeHandle_o v18; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B686D4(&System_Type_TypeInfo, method);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BBA60C();
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
    _1_T = (Il2CppClass *)sub_1BBA5B0(method->rgctx_data->_1_T);
  TypeFromHandle = (System_Type_o *)sub_1B68810(v8, _1_T);
  v10 = TypeFromHandle;
  v11 = method->rgctx_data->_1_T;
  if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
  {
    TypeFromHandle = (System_Type_o *)sub_1BBA5B0(v11);
    v11 = (Il2CppClass *)TypeFromHandle;
  }
  if ( !v10 )
LABEL_14:
    sub_1B68930(TypeFromHandle, v7);
  v12 = (UnityEngine_Behaviour_o *)sub_1B68810(v10, v11);
  if ( v12 )
  {
    v13 = (Il2CppObject *)v12;
    UnityEngine_Behaviour__set_enabled(v12, 0, 0LL);
    return v13;
  }
  else
  {
    sub_1B68BF0(v10);
    return GOExtensions__AddDisabledComponentWithData_object_(v15, v16, v17);
  }
}


Il2CppObject *__fastcall GOExtensions__ConstructFromResourcePersistant_object_(
        System_String_o *name,
        const MethodInfo_2E985A0 *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x0
  UnityEngine_GameObject_c **v8; // x20
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_Object_o *gameObject; // x0
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x20
  Il2CppClass *_1_T; // x1
  __int64 v18; // x20
  Il2CppClass *v19; // x19
  Il2CppObject *result; // x0
  System_RuntimeTypeHandle_o v21; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1B686D4(&UnityEngine_GameObject_TypeInfo, method);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    sub_1B686D4(&System_Type_TypeInfo, v6);
    if ( !method->rgctx_data )
      sub_1BBA60C();
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
          (const MethodInfo_2ECC718 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v10 )
    sub_1B68930(0LL, v11);
  v12 = (UnityEngine_GameObject_o *)v10;
  gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v10, 0LL);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
  _0_T = method->rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v21.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v21, 0LL);
  Component = UnityEngine_GameObject__GetComponent(v12, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BBA5B0(method->rgctx_data->_1_T);
  v18 = sub_1B68810(Component, _1_T);
  v19 = method->rgctx_data->_1_T;
  if ( (BYTE5(v19->vtable[0].methodPtr) & 1) == 0 )
    v19 = (Il2CppClass *)sub_1BBA5B0(v19);
  if ( v18 )
  {
    result = (Il2CppObject *)sub_1B68810(v18, v19);
    if ( result )
      return result;
    sub_1B68BF0(v18);
  }
  return 0LL;
}


Il2CppObject *__fastcall GOExtensions__ConstructFromResource_object_(
        System_String_o *name,
        const MethodInfo_2E98420 *method)
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
  __int64 v13; // x1
  UnityEngine_Component_o *Component; // x20
  Il2CppClass *_1_T; // x1
  __int64 v16; // x20
  Il2CppClass *v17; // x19
  Il2CppObject *result; // x0
  System_RuntimeTypeHandle_o v19; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1B686D4(&UnityEngine_GameObject_TypeInfo, method);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    sub_1B686D4(&System_Type_TypeInfo, v6);
    if ( !method->rgctx_data )
      sub_1BBA60C();
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
          (const MethodInfo_2ECC718 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  _0_T = method->rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v19.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v19, 0LL);
  if ( !v10 )
    sub_1B68930(TypeFromHandle, v13);
  Component = UnityEngine_GameObject__GetComponent((UnityEngine_GameObject_o *)v10, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BBA5B0(method->rgctx_data->_1_T);
  v16 = sub_1B68810(Component, _1_T);
  v17 = method->rgctx_data->_1_T;
  if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
    v17 = (Il2CppClass *)sub_1BBA5B0(v17);
  if ( v16 )
  {
    result = (Il2CppObject *)sub_1B68810(v16, v17);
    if ( result )
      return result;
    sub_1B68BF0(v16);
  }
  return 0LL;
}


Il2CppObject *__fastcall GOExtensions__ConstructPersistant_object_(const MethodInfo_2E9872C *method)
{
  __int64 v1; // x1
  const MethodInfo_2E98208 **rgctx_data; // x8
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x20
  UnityEngine_Object_o *gameObject; // x21
  Il2CppType *_2_T; // x21
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x20
  Il2CppClass *_1_T; // x1
  __int64 v13; // x20
  Il2CppClass *v14; // x19
  Il2CppObject *result; // x0
  System_RuntimeTypeHandle_o v16; // 0:w0.4

  rgctx_data = (const MethodInfo_2E98208 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v1);
    sub_1B686D4(&System_Type_TypeInfo, v4);
    rgctx_data = (const MethodInfo_2E98208 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BBA60C();
      rgctx_data = (const MethodInfo_2E98208 **)method->rgctx_data;
    }
  }
  v5 = GOExtensions__Construct_object_(*rgctx_data);
  if ( !v5 )
    sub_1B68930(0LL, v6);
  v7 = (UnityEngine_Component_o *)v5;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
  _2_T = method->rgctx_data->_2_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v16.fields.value = (int)_2_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v16, 0LL);
  Component = UnityEngine_Component__GetComponent(v7, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BBA5B0(method->rgctx_data->_1_T);
  v13 = sub_1B68810(Component, _1_T);
  v14 = method->rgctx_data->_1_T;
  if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
    v14 = (Il2CppClass *)sub_1BBA5B0(v14);
  if ( v13 )
  {
    result = (Il2CppObject *)sub_1B68810(v13, v14);
    if ( result )
      return result;
    sub_1B68BF0(v13);
  }
  return 0LL;
}


Il2CppObject *__fastcall GOExtensions__Construct_object_(const MethodInfo_2E98208 *method)
{
  __int64 v1; // x1
  const MethodInfo_2E98208_RGCTXs *rgctx_data; // x8
  __int64 v4; // x1
  Il2CppType *_0_T; // x20
  __int64 TypeFromHandle; // x0
  __int64 v7; // x1
  System_String_o *v8; // x21
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Transform_o *v11; // x21
  Il2CppType *v12; // x0
  System_Type_o *v13; // x0
  Il2CppType *v14; // x0
  System_Type_o *v15; // x0
  UnityEngine_Component_o *Component; // x20
  Il2CppClass *_1_T; // x1
  __int64 v18; // x20
  Il2CppClass *v19; // x19
  Il2CppObject *result; // x0
  System_RuntimeTypeHandle_o v21; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B686D4(&UnityEngine_GameObject_TypeInfo, v1);
    sub_1B686D4(&System_Type_TypeInfo, v4);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BBA60C();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v21.fields.value = (int)_0_T;
  TypeFromHandle = (__int64)System_Type__GetTypeFromHandle(v21, 0LL);
  if ( !TypeFromHandle )
    goto LABEL_23;
  v8 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)TypeFromHandle + 360LL))(
                            TypeFromHandle,
                            *(_QWORD *)(*(_QWORD *)TypeFromHandle + 368LL));
  v9 = (UnityEngine_GameObject_o *)sub_1B68920(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v9, v8, 0LL);
  if ( !v9 )
    goto LABEL_23;
  TypeFromHandle = (__int64)UnityEngine_GameObject__get_transform(v9, 0LL);
  v10 = (UnityEngine_Transform_o *)TypeFromHandle;
  if ( !byte_4A03901 )
  {
    TypeFromHandle = sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4A03901 = 1;
  }
  if ( !v10 )
    goto LABEL_23;
  UnityEngine_Transform__set_position(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  TypeFromHandle = (__int64)UnityEngine_GameObject__get_transform(v9, 0LL);
  v11 = (UnityEngine_Transform_o *)TypeFromHandle;
  if ( !byte_4A03907 )
  {
    TypeFromHandle = sub_1B686D4(&UnityEngine_Quaternion_TypeInfo, v7);
    byte_4A03907 = 1;
  }
  if ( !v11 )
LABEL_23:
    sub_1B68930(TypeFromHandle, v7);
  UnityEngine_Transform__set_rotation(v11, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  v12 = method->rgctx_data->_0_T;
  v13 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v12, 0LL);
  UnityEngine_GameObject__AddComponent(v9, v13, 0LL);
  v14 = method->rgctx_data->_0_T;
  v15 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v14, 0LL);
  Component = UnityEngine_GameObject__GetComponent(v9, v15, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BBA5B0(method->rgctx_data->_1_T);
  v18 = sub_1B68810(Component, _1_T);
  v19 = method->rgctx_data->_1_T;
  if ( (BYTE5(v19->vtable[0].methodPtr) & 1) == 0 )
    v19 = (Il2CppClass *)sub_1BBA5B0(v19);
  if ( v18 )
  {
    result = (Il2CppObject *)sub_1B68810(v18, v19);
    if ( result )
      return result;
    sub_1B68BF0(v18);
  }
  return 0LL;
}