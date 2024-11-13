void __fastcall GOExtensions___ctor(GOExtensions_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


Il2CppObject *__fastcall GOExtensions__AddComponentWithData_object_(
        UnityEngine_GameObject_o *gameObject,
        WellFired_Data_DataBaseEntry_o *data,
        const MethodInfo_2F61C60 *method)
{
  const MethodInfo_2F61C60_RGCTXs *rgctx_data; // x8
  Il2CppType *_0_T; // x22
  System_Type_o *TypeFromHandle; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x21
  long double v11; // q0
  Il2CppClass *_1_T; // x1
  long double v13; // q0
  System_Type_o *v14; // x21
  Il2CppClass *v15; // x20
  WellFired_Data_DataComponent_o *v16; // x0
  Il2CppObject *v17; // x22
  UnityEngine_GameObject_o *v19; // x0
  const MethodInfo_2F61D6C *v20; // x1
  System_RuntimeTypeHandle_o v21; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&System_Type_TypeInfo, data, method);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, data);
  v21.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v21, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  v10 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C1C6BC(v11);
  TypeFromHandle = (System_Type_o *)sub_1BCA91C(v10, _1_T);
  v14 = TypeFromHandle;
  v15 = method->rgctx_data->_1_T;
  if ( (BYTE5(v15->vtable[0].methodPtr) & 1) == 0 )
  {
    TypeFromHandle = (System_Type_o *)sub_1C1C6BC(v13);
    v15 = (Il2CppClass *)TypeFromHandle;
  }
  if ( !v14 )
LABEL_14:
    sub_1BCAA3C(TypeFromHandle, v9);
  v16 = (WellFired_Data_DataComponent_o *)sub_1BCA91C(v14, v15);
  if ( v16 )
  {
    v17 = (Il2CppObject *)v16;
    WellFired_Data_DataComponent__InitFromData(v16, data, 0LL);
    return v17;
  }
  else
  {
    sub_1BCACFC(v14);
    return GOExtensions__AddDisabledComponent_object_(v19, v20);
  }
}


Il2CppObject *__fastcall GOExtensions__AddDisabledComponentWithData_object_(
        UnityEngine_GameObject_o *gameObject,
        WellFired_Data_DataBaseEntry_o *data,
        const MethodInfo_2F61E6C *method)
{
  const MethodInfo_2F61E6C_RGCTXs *rgctx_data; // x8
  Il2CppType *_0_T; // x22
  System_Type_o *TypeFromHandle; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x21
  long double v11; // q0
  Il2CppClass *_1_T; // x1
  long double v13; // q0
  System_Type_o *v14; // x21
  Il2CppClass *v15; // x20
  WellFired_Data_DataComponent_o *v16; // x0
  UnityEngine_Behaviour_o *v17; // x22
  const MethodInfo_2F61F88 *v19; // x0
  System_RuntimeTypeHandle_o v20; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&System_Type_TypeInfo, data, method);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, data);
  v20.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v20, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  v10 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C1C6BC(v11);
  TypeFromHandle = (System_Type_o *)sub_1BCA91C(v10, _1_T);
  v14 = TypeFromHandle;
  v15 = method->rgctx_data->_1_T;
  if ( (BYTE5(v15->vtable[0].methodPtr) & 1) == 0 )
  {
    TypeFromHandle = (System_Type_o *)sub_1C1C6BC(v13);
    v15 = (Il2CppClass *)TypeFromHandle;
  }
  if ( !v14 )
LABEL_14:
    sub_1BCAA3C(TypeFromHandle, v9);
  v16 = (WellFired_Data_DataComponent_o *)sub_1BCA91C(v14, v15);
  if ( v16 )
  {
    v17 = (UnityEngine_Behaviour_o *)v16;
    WellFired_Data_DataComponent__InitFromData(v16, data, 0LL);
    UnityEngine_Behaviour__set_enabled(v17, 0, 0LL);
    return (Il2CppObject *)v17;
  }
  else
  {
    sub_1BCACFC(v14);
    return GOExtensions__Construct_object_(v19);
  }
}


Il2CppObject *__fastcall GOExtensions__AddDisabledComponent_object_(
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo_2F61D6C *method)
{
  __int64 v2; // x2
  const MethodInfo_2F61D6C_RGCTXs *rgctx_data; // x8
  Il2CppType *_0_T; // x21
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
  const MethodInfo_2F61E6C *v20; // x2
  System_RuntimeTypeHandle_o v21; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&System_Type_TypeInfo, method, v2);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, method);
  v21.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v21, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  v9 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C1C6BC(v10);
  TypeFromHandle = (System_Type_o *)sub_1BCA91C(v9, _1_T);
  v13 = TypeFromHandle;
  v14 = method->rgctx_data->_1_T;
  if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
  {
    TypeFromHandle = (System_Type_o *)sub_1C1C6BC(v12);
    v14 = (Il2CppClass *)TypeFromHandle;
  }
  if ( !v13 )
LABEL_14:
    sub_1BCAA3C(TypeFromHandle, v8);
  v15 = (UnityEngine_Behaviour_o *)sub_1BCA91C(v13, v14);
  if ( v15 )
  {
    v16 = (Il2CppObject *)v15;
    UnityEngine_Behaviour__set_enabled(v15, 0, 0LL);
    return v16;
  }
  else
  {
    sub_1BCACFC(v13);
    return GOExtensions__AddDisabledComponentWithData_object_(v18, v19, v20);
  }
}


Il2CppObject *__fastcall GOExtensions__ConstructFromResourcePersistant_object_(
        System_String_o *name,
        const MethodInfo_2F62320 *method)
{
  __int64 v2; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_c **v13; // x20
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v19; // x1
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x20
  long double v23; // q0
  Il2CppClass *_1_T; // x1
  __int64 v25; // x20
  long double v26; // q0
  Il2CppClass *v27; // x19
  Il2CppObject *result; // x0
  System_RuntimeTypeHandle_o v29; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Type_TypeInfo, v9, v10);
    if ( !method->rgctx_data )
      sub_1C1C718(method);
  }
  v11 = UnityEngine_Resources__Load(name, 0LL);
  v13 = (UnityEngine_GameObject_c **)v11;
  if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( v11 )
      goto LABEL_6;
LABEL_10:
    v14 = 0LL;
    goto LABEL_11;
  }
  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !v13 )
    goto LABEL_10;
LABEL_6:
  if ( *v13 == UnityEngine_GameObject_TypeInfo )
    v14 = (Il2CppObject *)v13;
  else
    v14 = 0LL;
LABEL_11:
  v15 = UnityEngine_Object__Instantiate_object_(
          v14,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v15 )
    sub_1BCAA3C(0LL, v16);
  v17 = (UnityEngine_GameObject_o *)v15;
  gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v15, 0LL);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
  _0_T = method->rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v19);
  v29.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v29, 0LL);
  Component = UnityEngine_GameObject__GetComponent(v17, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C1C6BC(v23);
  v25 = sub_1BCA91C(Component, _1_T);
  v27 = method->rgctx_data->_1_T;
  if ( (BYTE5(v27->vtable[0].methodPtr) & 1) == 0 )
    v27 = (Il2CppClass *)sub_1C1C6BC(v26);
  if ( v25 )
  {
    result = (Il2CppObject *)sub_1BCA91C(v25, v27);
    if ( result )
      return result;
    sub_1BCACFC(v25);
  }
  return 0LL;
}


Il2CppObject *__fastcall GOExtensions__ConstructFromResource_object_(
        System_String_o *name,
        const MethodInfo_2F621A0 *method)
{
  __int64 v2; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_c **v13; // x20
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x20
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x0
  __int64 v19; // x1
  UnityEngine_Component_o *Component; // x20
  long double v21; // q0
  Il2CppClass *_1_T; // x1
  __int64 v23; // x20
  long double v24; // q0
  Il2CppClass *v25; // x19
  Il2CppObject *result; // x0
  System_RuntimeTypeHandle_o v27; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Type_TypeInfo, v9, v10);
    if ( !method->rgctx_data )
      sub_1C1C718(method);
  }
  v11 = UnityEngine_Resources__Load(name, 0LL);
  v13 = (UnityEngine_GameObject_c **)v11;
  if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( v11 )
      goto LABEL_6;
LABEL_10:
    v14 = 0LL;
    goto LABEL_11;
  }
  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !v13 )
    goto LABEL_10;
LABEL_6:
  if ( *v13 == UnityEngine_GameObject_TypeInfo )
    v14 = (Il2CppObject *)v13;
  else
    v14 = 0LL;
LABEL_11:
  v16 = UnityEngine_Object__Instantiate_object_(
          v14,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  _0_T = method->rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v15);
  v27.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v27, 0LL);
  if ( !v16 )
    sub_1BCAA3C(TypeFromHandle, v19);
  Component = UnityEngine_GameObject__GetComponent((UnityEngine_GameObject_o *)v16, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C1C6BC(v21);
  v23 = sub_1BCA91C(Component, _1_T);
  v25 = method->rgctx_data->_1_T;
  if ( (BYTE5(v25->vtable[0].methodPtr) & 1) == 0 )
    v25 = (Il2CppClass *)sub_1C1C6BC(v24);
  if ( v23 )
  {
    result = (Il2CppObject *)sub_1BCA91C(v23, v25);
    if ( result )
      return result;
    sub_1BCACFC(v23);
  }
  return 0LL;
}


Il2CppObject *__fastcall GOExtensions__ConstructPersistant_object_(const MethodInfo_2F624AC *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  const MethodInfo_2F61F88 **rgctx_data; // x8
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x20
  __int64 v10; // x1
  UnityEngine_Object_o *gameObject; // x21
  __int64 v12; // x1
  Il2CppType *_2_T; // x21
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x20
  long double v16; // q0
  Il2CppClass *_1_T; // x1
  __int64 v18; // x20
  long double v19; // q0
  Il2CppClass *v20; // x19
  Il2CppObject *result; // x0
  System_RuntimeTypeHandle_o v22; // 0:w0.4

  rgctx_data = (const MethodInfo_2F61F88 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_Type_TypeInfo, v5, v6);
    rgctx_data = (const MethodInfo_2F61F88 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method);
      rgctx_data = (const MethodInfo_2F61F88 **)method->rgctx_data;
    }
  }
  v7 = GOExtensions__Construct_object_(*rgctx_data);
  if ( !v7 )
    sub_1BCAA3C(0LL, v8);
  v9 = (UnityEngine_Component_o *)v7;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
  _2_T = method->rgctx_data->_2_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v12);
  v22.fields.value = (int)_2_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v22, 0LL);
  Component = UnityEngine_Component__GetComponent(v9, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C1C6BC(v16);
  v18 = sub_1BCA91C(Component, _1_T);
  v20 = method->rgctx_data->_1_T;
  if ( (BYTE5(v20->vtable[0].methodPtr) & 1) == 0 )
    v20 = (Il2CppClass *)sub_1C1C6BC(v19);
  if ( v18 )
  {
    result = (Il2CppObject *)sub_1BCA91C(v18, v20);
    if ( result )
      return result;
    sub_1BCACFC(v18);
  }
  return 0LL;
}


Il2CppObject *__fastcall GOExtensions__Construct_object_(const MethodInfo_2F61F88 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  const MethodInfo_2F61F88_RGCTXs *rgctx_data; // x8
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppType *_0_T; // x20
  __int64 TypeFromHandle; // x0
  __int64 v9; // x1
  System_String_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  UnityEngine_GameObject_o *v14; // x20
  __int64 v15; // x2
  UnityEngine_Transform_o *v16; // x21
  __int64 v17; // x2
  UnityEngine_Transform_o *v18; // x21
  Il2CppType *v19; // x0
  System_Type_o *v20; // x0
  Il2CppType *v21; // x0
  System_Type_o *v22; // x0
  UnityEngine_Component_o *Component; // x20
  long double v24; // q0
  Il2CppClass *_1_T; // x1
  __int64 v26; // x20
  long double v27; // q0
  Il2CppClass *v28; // x19
  Il2CppObject *result; // x0
  System_RuntimeTypeHandle_o v30; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_Type_TypeInfo, v5, v6);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v1);
  v30.fields.value = (int)_0_T;
  TypeFromHandle = (__int64)System_Type__GetTypeFromHandle(v30, 0LL);
  if ( !TypeFromHandle )
    goto LABEL_23;
  v10 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)TypeFromHandle + 360LL))(
                             TypeFromHandle,
                             *(_QWORD *)(*(_QWORD *)TypeFromHandle + 368LL));
  v14 = (UnityEngine_GameObject_o *)sub_1BCAA2C(UnityEngine_GameObject_TypeInfo, v11, v12, v13);
  UnityEngine_GameObject___ctor(v14, v10, 0LL);
  if ( !v14 )
    goto LABEL_23;
  TypeFromHandle = (__int64)UnityEngine_GameObject__get_transform(v14, 0LL);
  v16 = (UnityEngine_Transform_o *)TypeFromHandle;
  if ( !byte_4B109C1 )
  {
    TypeFromHandle = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v9, v15);
    byte_4B109C1 = 1;
  }
  if ( !v16 )
    goto LABEL_23;
  UnityEngine_Transform__set_position(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  TypeFromHandle = (__int64)UnityEngine_GameObject__get_transform(v14, 0LL);
  v18 = (UnityEngine_Transform_o *)TypeFromHandle;
  if ( !byte_4B109C7 )
  {
    TypeFromHandle = sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v9, v17);
    byte_4B109C7 = 1;
  }
  if ( !v18 )
LABEL_23:
    sub_1BCAA3C(TypeFromHandle, v9);
  UnityEngine_Transform__set_rotation(v18, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  v19 = method->rgctx_data->_0_T;
  v20 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v19, 0LL);
  UnityEngine_GameObject__AddComponent(v14, v20, 0LL);
  v21 = method->rgctx_data->_0_T;
  v22 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v21, 0LL);
  Component = UnityEngine_GameObject__GetComponent(v14, v22, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C1C6BC(v24);
  v26 = sub_1BCA91C(Component, _1_T);
  v28 = method->rgctx_data->_1_T;
  if ( (BYTE5(v28->vtable[0].methodPtr) & 1) == 0 )
    v28 = (Il2CppClass *)sub_1C1C6BC(v27);
  if ( v26 )
  {
    result = (Il2CppObject *)sub_1BCA91C(v26, v28);
    if ( result )
      return result;
    sub_1BCACFC(v26);
  }
  return 0LL;
}