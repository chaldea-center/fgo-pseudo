void GOExtensions___ctor(GOExtensions_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


Il2CppObject *GOExtensions__AddComponentWithData_object_(
        UnityEngine_GameObject_o *gameObject,
        WellFired_Data_DataBaseEntry_o *data,
        const MethodInfo_3883284 *method)
{
  const MethodInfo_3883284_RGCTXs *rgctx_data; // x8
  intptr_t _0_T; // x22
  System_RuntimeTypeHandle_o v8; // x0
  System_Type_o *TypeFromHandle; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x0
  long double v12; // q0
  const MethodInfo_3883284_RGCTXs *v13; // x8
  UnityEngine_Component_o *v14; // x20
  __int64 _1_T; // x1
  Il2CppObject *v16; // x20

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2237B54();
    rgctx_data = method->rgctx_data;
  }
  _0_T = (intptr_t)rgctx_data->_0_T;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, data);
  v8.fields.value = _0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0);
  if ( !gameObject )
    goto LABEL_10;
  v11 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0);
  v13 = method->rgctx_data;
  v14 = v11;
  _1_T = (__int64)v13->_1_T;
  if ( (*(_WORD *)(_1_T + 309) & 1) == 0 )
    _1_T = sub_2237AF8(v12);
  TypeFromHandle = (System_Type_o *)sub_21FFDA4(v14, _1_T);
  if ( !TypeFromHandle )
LABEL_10:
    sub_21FFECC(TypeFromHandle, v10);
  v16 = (Il2CppObject *)TypeFromHandle;
  WellFired_Data_DataComponent__InitFromData((WellFired_Data_DataComponent_o *)TypeFromHandle, data, 0);
  return v16;
}


Il2CppObject *GOExtensions__AddDisabledComponentWithData_object_(
        UnityEngine_GameObject_o *gameObject,
        WellFired_Data_DataBaseEntry_o *data,
        const MethodInfo_38833F8 *method)
{
  const MethodInfo_38833F8_RGCTXs *rgctx_data; // x8
  intptr_t _0_T; // x22
  System_RuntimeTypeHandle_o v8; // x0
  System_Type_o *TypeFromHandle; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x0
  long double v12; // q0
  const MethodInfo_38833F8_RGCTXs *v13; // x8
  UnityEngine_Component_o *v14; // x20
  __int64 _1_T; // x1
  UnityEngine_Behaviour_o *v16; // x20

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2237B54();
    rgctx_data = method->rgctx_data;
  }
  _0_T = (intptr_t)rgctx_data->_0_T;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, data);
  v8.fields.value = _0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0);
  if ( !gameObject )
    goto LABEL_10;
  v11 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0);
  v13 = method->rgctx_data;
  v14 = v11;
  _1_T = (__int64)v13->_1_T;
  if ( (*(_WORD *)(_1_T + 309) & 1) == 0 )
    _1_T = sub_2237AF8(v12);
  TypeFromHandle = (System_Type_o *)sub_21FFDA4(v14, _1_T);
  if ( !TypeFromHandle )
LABEL_10:
    sub_21FFECC(TypeFromHandle, v10);
  v16 = (UnityEngine_Behaviour_o *)TypeFromHandle;
  WellFired_Data_DataComponent__InitFromData((WellFired_Data_DataComponent_o *)TypeFromHandle, data, 0);
  UnityEngine_Behaviour__set_enabled(v16, 0, 0);
  return (Il2CppObject *)v16;
}


Il2CppObject *GOExtensions__AddDisabledComponent_object_(
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo_3883344 *method)
{
  const MethodInfo_3883344_RGCTXs *rgctx_data; // x8
  intptr_t _0_T; // x21
  System_RuntimeTypeHandle_o v6; // x0
  System_Type_o *TypeFromHandle; // x0
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x0
  long double v10; // q0
  const MethodInfo_3883344_RGCTXs *v11; // x8
  UnityEngine_Component_o *v12; // x19
  __int64 _1_T; // x1
  Il2CppObject *v14; // x19

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2237B54();
    rgctx_data = method->rgctx_data;
  }
  _0_T = (intptr_t)rgctx_data->_0_T;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, method);
  v6.fields.value = _0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v6, 0);
  if ( !gameObject )
    goto LABEL_10;
  v9 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0);
  v11 = method->rgctx_data;
  v12 = v9;
  _1_T = (__int64)v11->_1_T;
  if ( (*(_WORD *)(_1_T + 309) & 1) == 0 )
    _1_T = sub_2237AF8(v10);
  TypeFromHandle = (System_Type_o *)sub_21FFDA4(v12, _1_T);
  if ( !TypeFromHandle )
LABEL_10:
    sub_21FFECC(TypeFromHandle, v8);
  v14 = (Il2CppObject *)TypeFromHandle;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)TypeFromHandle, 0, 0);
  return v14;
}


Il2CppObject *GOExtensions__ConstructFromResourcePersistant_object_(
        System_String_o *name,
        const MethodInfo_38837C0 *method)
{
  UnityEngine_Object_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_c **v6; // x20
  Il2CppObject *v7; // x0
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v12; // x1
  Il2CppType *_0_T; // x21
  System_RuntimeTypeHandle_o v14; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  long double v17; // q0
  const MethodInfo_38837C0_RGCTXs *rgctx_data; // x8
  UnityEngine_Component_o *v19; // x19
  __int64 _1_T; // x1

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&UnityEngine_GameObject_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_2237B54();
  }
  v4 = UnityEngine_Resources__Load(name, 0);
  v6 = (UnityEngine_GameObject_c **)v4;
  if ( *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
  {
    if ( v4 )
      goto LABEL_6;
LABEL_10:
    v7 = 0;
    goto LABEL_11;
  }
  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( !v6 )
    goto LABEL_10;
LABEL_6:
  if ( *v6 == UnityEngine_GameObject_TypeInfo )
    v7 = (Il2CppObject *)v6;
  else
    v7 = 0;
LABEL_11:
  v8 = UnityEngine_Object__Instantiate_object_(
         v7,
         (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v8 )
    sub_21FFECC(0, v9);
  v10 = (UnityEngine_GameObject_o *)v8;
  gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v8, 0);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0);
  _0_T = method->rgctx_data->_0_T;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v12);
  v14.fields.value = (intptr_t)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v14, 0);
  Component = UnityEngine_GameObject__GetComponent(v10, TypeFromHandle, 0);
  rgctx_data = method->rgctx_data;
  v19 = Component;
  _1_T = (__int64)rgctx_data->_1_T;
  if ( (*(_WORD *)(_1_T + 309) & 1) == 0 )
    _1_T = sub_2237AF8(v17);
  return (Il2CppObject *)sub_21FFDA4(v19, _1_T);
}


Il2CppObject *GOExtensions__ConstructFromResource_object_(System_String_o *name, const MethodInfo_3883690 *method)
{
  UnityEngine_Object_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_c **v6; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  Il2CppType *_0_T; // x21
  System_RuntimeTypeHandle_o v11; // x0
  System_Type_o *TypeFromHandle; // x0
  __int64 v13; // x1
  UnityEngine_Component_o *Component; // x0
  long double v15; // q0
  const MethodInfo_3883690_RGCTXs *rgctx_data; // x8
  UnityEngine_Component_o *v17; // x19
  __int64 _1_T; // x1

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&UnityEngine_GameObject_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_2237B54();
  }
  v4 = UnityEngine_Resources__Load(name, 0);
  v6 = (UnityEngine_GameObject_c **)v4;
  if ( *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
  {
    if ( v4 )
      goto LABEL_6;
LABEL_10:
    v7 = 0;
    goto LABEL_11;
  }
  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( !v6 )
    goto LABEL_10;
LABEL_6:
  if ( *v6 == UnityEngine_GameObject_TypeInfo )
    v7 = (Il2CppObject *)v6;
  else
    v7 = 0;
LABEL_11:
  v9 = UnityEngine_Object__Instantiate_object_(
         v7,
         (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  _0_T = method->rgctx_data->_0_T;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v8);
  v11.fields.value = (intptr_t)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v11, 0);
  if ( !v9 )
    sub_21FFECC(TypeFromHandle, v13);
  Component = UnityEngine_GameObject__GetComponent((UnityEngine_GameObject_o *)v9, TypeFromHandle, 0);
  rgctx_data = method->rgctx_data;
  v17 = Component;
  _1_T = (__int64)rgctx_data->_1_T;
  if ( (*(_WORD *)(_1_T + 309) & 1) == 0 )
    _1_T = sub_2237AF8(v15);
  return (Il2CppObject *)sub_21FFDA4(v17, _1_T);
}


Il2CppObject *GOExtensions__ConstructPersistant_object_(const MethodInfo_38838FC *method)
{
  const MethodInfo_38834C8 **rgctx_data; // x8
  Il2CppObject *v3; // x0
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x20
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x21
  __int64 v8; // x1
  Il2CppType *_2_T; // x21
  System_RuntimeTypeHandle_o v10; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  long double v13; // q0
  const MethodInfo_38838FC_RGCTXs *v14; // x8
  UnityEngine_Component_o *v15; // x19
  __int64 _1_T; // x1

  rgctx_data = (const MethodInfo_38834C8 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    rgctx_data = (const MethodInfo_38834C8 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_2237B54();
      rgctx_data = (const MethodInfo_38834C8 **)method->rgctx_data;
    }
  }
  v3 = GOExtensions__Construct_object_(*rgctx_data);
  if ( !v3 )
    sub_21FFECC(0, v4);
  v5 = (UnityEngine_Component_o *)v3;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0);
  _2_T = method->rgctx_data->_2_T;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v8);
  v10.fields.value = (intptr_t)_2_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v10, 0);
  Component = UnityEngine_Component__GetComponent(v5, TypeFromHandle, 0);
  v14 = method->rgctx_data;
  v15 = Component;
  _1_T = (__int64)v14->_1_T;
  if ( (*(_WORD *)(_1_T + 309) & 1) == 0 )
    _1_T = sub_2237AF8(v13);
  return (Il2CppObject *)sub_21FFDA4(v15, _1_T);
}


Il2CppObject *GOExtensions__Construct_object_(const MethodInfo_38834C8 *method)
{
  __int64 v1; // x1
  const MethodInfo_38834C8_RGCTXs *rgctx_data; // x8
  intptr_t _0_T; // x20
  System_RuntimeTypeHandle_o v5; // x0
  __int64 TypeFromHandle; // x0
  __int64 v7; // x1
  System_String_o *v8; // x21
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Transform_o *v11; // x21
  System_RuntimeTypeHandle_o v12; // x0
  System_Type_o *v13; // x0
  System_RuntimeTypeHandle_o v14; // x0
  System_Type_o *v15; // x0
  UnityEngine_Component_o *Component; // x0
  long double v17; // q0
  const MethodInfo_38834C8_RGCTXs *v18; // x8
  UnityEngine_Component_o *v19; // x19
  __int64 _1_T; // x1

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_21FFC50(&UnityEngine_GameObject_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_2237B54();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = (intptr_t)rgctx_data->_0_T;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v1);
  v5.fields.value = _0_T;
  TypeFromHandle = (__int64)System_Type__GetTypeFromHandle(v5, 0);
  if ( !TypeFromHandle )
    goto LABEL_17;
  v8 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)TypeFromHandle + 360LL))(
                            TypeFromHandle,
                            *(_QWORD *)(*(_QWORD *)TypeFromHandle + 368LL));
  v9 = (UnityEngine_GameObject_o *)sub_21FFEBC(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v9, v8, 0);
  if ( !v9 )
    goto LABEL_17;
  TypeFromHandle = (__int64)UnityEngine_GameObject__get_transform(v9, 0);
  v10 = (UnityEngine_Transform_o *)TypeFromHandle;
  if ( !byte_5931940 )
  {
    TypeFromHandle = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v10 )
    goto LABEL_17;
  UnityEngine_Transform__set_position(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  TypeFromHandle = (__int64)UnityEngine_GameObject__get_transform(v9, 0);
  v11 = (UnityEngine_Transform_o *)TypeFromHandle;
  if ( !byte_5931946 )
  {
    TypeFromHandle = sub_21FFC50(&UnityEngine_Quaternion_TypeInfo);
    byte_5931946 = 1;
  }
  if ( !v11 )
LABEL_17:
    sub_21FFECC(TypeFromHandle, v7);
  UnityEngine_Transform__set_rotation(v11, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
  v12.fields.value = (intptr_t)method->rgctx_data->_0_T;
  v13 = System_Type__GetTypeFromHandle(v12, 0);
  UnityEngine_GameObject__AddComponent(v9, v13, 0);
  v14.fields.value = (intptr_t)method->rgctx_data->_0_T;
  v15 = System_Type__GetTypeFromHandle(v14, 0);
  Component = UnityEngine_GameObject__GetComponent(v9, v15, 0);
  v18 = method->rgctx_data;
  v19 = Component;
  _1_T = (__int64)v18->_1_T;
  if ( (*(_WORD *)(_1_T + 309) & 1) == 0 )
    _1_T = sub_2237AF8(v17);
  return (Il2CppObject *)sub_21FFDA4(v19, _1_T);
}