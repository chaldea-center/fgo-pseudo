void GOExtensions___ctor(GOExtensions_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


Il2CppObject *GOExtensions__AddComponentWithData_object_(
        UnityEngine_GameObject_o *gameObject,
        WellFired_Data_DataBaseEntry_o *data,
        const MethodInfo_38B674C *method)
{
  const MethodInfo_38B674C_RGCTXs *rgctx_data; // x8
  System_RuntimeTypeHandle_o v7; // x22
  System_Type_o *TypeFromHandle; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x0
  long double v11; // q0
  const MethodInfo_38B674C_RGCTXs *v12; // x8
  UnityEngine_Component_o *v13; // x20
  __int64 _1_T; // x1
  Il2CppObject *v15; // x20

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964();
    rgctx_data = method->rgctx_data;
  }
  v7.fields.value = (intptr_t)rgctx_data->_0_T;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, data);
  TypeFromHandle = System_Type__GetTypeFromHandle(v7, 0);
  if ( !gameObject )
    goto LABEL_10;
  v10 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0);
  v12 = method->rgctx_data;
  v13 = v10;
  _1_T = (__int64)v12->_1_T;
  if ( (*(_WORD *)(_1_T + 309) & 1) == 0 )
    _1_T = sub_224B908(v11);
  TypeFromHandle = (System_Type_o *)sub_2213BB4(v13, _1_T);
  if ( !TypeFromHandle )
LABEL_10:
    sub_2213CDC(TypeFromHandle, v9);
  v15 = (Il2CppObject *)TypeFromHandle;
  WellFired_Data_DataComponent__InitFromData((WellFired_Data_DataComponent_o *)TypeFromHandle, data, 0);
  return v15;
}


Il2CppObject *GOExtensions__AddDisabledComponentWithData_object_(
        UnityEngine_GameObject_o *gameObject,
        WellFired_Data_DataBaseEntry_o *data,
        const MethodInfo_38B68C0 *method)
{
  const MethodInfo_38B68C0_RGCTXs *rgctx_data; // x8
  System_RuntimeTypeHandle_o v7; // x22
  System_Type_o *TypeFromHandle; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x0
  long double v11; // q0
  const MethodInfo_38B68C0_RGCTXs *v12; // x8
  UnityEngine_Component_o *v13; // x20
  __int64 _1_T; // x1
  UnityEngine_Behaviour_o *v15; // x20

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964();
    rgctx_data = method->rgctx_data;
  }
  v7.fields.value = (intptr_t)rgctx_data->_0_T;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, data);
  TypeFromHandle = System_Type__GetTypeFromHandle(v7, 0);
  if ( !gameObject )
    goto LABEL_10;
  v10 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0);
  v12 = method->rgctx_data;
  v13 = v10;
  _1_T = (__int64)v12->_1_T;
  if ( (*(_WORD *)(_1_T + 309) & 1) == 0 )
    _1_T = sub_224B908(v11);
  TypeFromHandle = (System_Type_o *)sub_2213BB4(v13, _1_T);
  if ( !TypeFromHandle )
LABEL_10:
    sub_2213CDC(TypeFromHandle, v9);
  v15 = (UnityEngine_Behaviour_o *)TypeFromHandle;
  WellFired_Data_DataComponent__InitFromData((WellFired_Data_DataComponent_o *)TypeFromHandle, data, 0);
  UnityEngine_Behaviour__set_enabled(v15, 0, 0);
  return (Il2CppObject *)v15;
}


Il2CppObject *GOExtensions__AddDisabledComponent_object_(
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo_38B680C *method)
{
  const MethodInfo_38B680C_RGCTXs *rgctx_data; // x8
  System_RuntimeTypeHandle_o v5; // x21
  System_Type_o *TypeFromHandle; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x0
  long double v9; // q0
  const MethodInfo_38B680C_RGCTXs *v10; // x8
  UnityEngine_Component_o *v11; // x19
  __int64 _1_T; // x1
  Il2CppObject *v13; // x19

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964();
    rgctx_data = method->rgctx_data;
  }
  v5.fields.value = (intptr_t)rgctx_data->_0_T;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, method);
  TypeFromHandle = System_Type__GetTypeFromHandle(v5, 0);
  if ( !gameObject )
    goto LABEL_10;
  v8 = UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0);
  v10 = method->rgctx_data;
  v11 = v8;
  _1_T = (__int64)v10->_1_T;
  if ( (*(_WORD *)(_1_T + 309) & 1) == 0 )
    _1_T = sub_224B908(v9);
  TypeFromHandle = (System_Type_o *)sub_2213BB4(v11, _1_T);
  if ( !TypeFromHandle )
LABEL_10:
    sub_2213CDC(TypeFromHandle, v7);
  v13 = (Il2CppObject *)TypeFromHandle;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)TypeFromHandle, 0, 0);
  return v13;
}


Il2CppObject *GOExtensions__ConstructFromResourcePersistant_object_(
        System_String_o *name,
        const MethodInfo_38B6C88 *method)
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
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  long double v16; // q0
  const MethodInfo_38B6C88_RGCTXs *rgctx_data; // x8
  UnityEngine_Component_o *v18; // x19
  __int64 _1_T; // x1

  if ( !method->rgctx_data )
  {
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964();
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
         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v8 )
    sub_2213CDC(0, v9);
  v10 = (UnityEngine_GameObject_o *)v8;
  gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v8, 0);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0);
  _0_T = method->rgctx_data->_0_T;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v12);
  TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_0_T, 0);
  Component = UnityEngine_GameObject__GetComponent(v10, TypeFromHandle, 0);
  rgctx_data = method->rgctx_data;
  v18 = Component;
  _1_T = (__int64)rgctx_data->_1_T;
  if ( (*(_WORD *)(_1_T + 309) & 1) == 0 )
    _1_T = sub_224B908(v16);
  return (Il2CppObject *)sub_2213BB4(v18, _1_T);
}


Il2CppObject *GOExtensions__ConstructFromResource_object_(System_String_o *name, const MethodInfo_38B6B58 *method)
{
  UnityEngine_Object_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_c **v6; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x0
  __int64 v12; // x1
  UnityEngine_Component_o *Component; // x0
  long double v14; // q0
  const MethodInfo_38B6B58_RGCTXs *rgctx_data; // x8
  UnityEngine_Component_o *v16; // x19
  __int64 _1_T; // x1

  if ( !method->rgctx_data )
  {
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964();
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
         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  _0_T = method->rgctx_data->_0_T;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v8);
  TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_0_T, 0);
  if ( !v9 )
    sub_2213CDC(TypeFromHandle, v12);
  Component = UnityEngine_GameObject__GetComponent((UnityEngine_GameObject_o *)v9, TypeFromHandle, 0);
  rgctx_data = method->rgctx_data;
  v16 = Component;
  _1_T = (__int64)rgctx_data->_1_T;
  if ( (*(_WORD *)(_1_T + 309) & 1) == 0 )
    _1_T = sub_224B908(v14);
  return (Il2CppObject *)sub_2213BB4(v16, _1_T);
}


Il2CppObject *GOExtensions__ConstructPersistant_object_(const MethodInfo_38B6DC4 *method)
{
  const MethodInfo_38B6990 **rgctx_data; // x8
  Il2CppObject *v3; // x0
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x20
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x21
  __int64 v8; // x1
  Il2CppType *_2_T; // x21
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  long double v12; // q0
  const MethodInfo_38B6DC4_RGCTXs *v13; // x8
  UnityEngine_Component_o *v14; // x19
  __int64 _1_T; // x1

  rgctx_data = (const MethodInfo_38B6990 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    rgctx_data = (const MethodInfo_38B6990 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964();
      rgctx_data = (const MethodInfo_38B6990 **)method->rgctx_data;
    }
  }
  v3 = GOExtensions__Construct_object_(*rgctx_data);
  if ( !v3 )
    sub_2213CDC(0, v4);
  v5 = (UnityEngine_Component_o *)v3;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0);
  _2_T = method->rgctx_data->_2_T;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v8);
  TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_2_T, 0);
  Component = UnityEngine_Component__GetComponent(v5, TypeFromHandle, 0);
  v13 = method->rgctx_data;
  v14 = Component;
  _1_T = (__int64)v13->_1_T;
  if ( (*(_WORD *)(_1_T + 309) & 1) == 0 )
    _1_T = sub_224B908(v12);
  return (Il2CppObject *)sub_2213BB4(v14, _1_T);
}


Il2CppObject *GOExtensions__Construct_object_(const MethodInfo_38B6990 *method)
{
  __int64 v1; // x1
  const MethodInfo_38B6990_RGCTXs *rgctx_data; // x8
  System_RuntimeTypeHandle_o v4; // x20
  __int64 TypeFromHandle; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *v9; // x21
  UnityEngine_Transform_o *v10; // x21
  System_Type_o *v11; // x0
  System_Type_o *v12; // x0
  UnityEngine_Component_o *Component; // x0
  long double v14; // q0
  const MethodInfo_38B6990_RGCTXs *v15; // x8
  UnityEngine_Component_o *v16; // x19
  __int64 _1_T; // x1

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964();
      rgctx_data = method->rgctx_data;
    }
  }
  v4.fields.value = (intptr_t)rgctx_data->_0_T;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v1);
  TypeFromHandle = (__int64)System_Type__GetTypeFromHandle(v4, 0);
  if ( !TypeFromHandle )
    goto LABEL_17;
  v7 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)TypeFromHandle + 360LL))(
                            TypeFromHandle,
                            *(_QWORD *)(*(_QWORD *)TypeFromHandle + 368LL));
  v8 = (UnityEngine_GameObject_o *)sub_2213CCC(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v8, v7, 0);
  if ( !v8 )
    goto LABEL_17;
  TypeFromHandle = (__int64)UnityEngine_GameObject__get_transform(v8, 0);
  v9 = (UnityEngine_Transform_o *)TypeFromHandle;
  if ( !byte_5969AE0 )
  {
    TypeFromHandle = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v9 )
    goto LABEL_17;
  UnityEngine_Transform__set_position(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  TypeFromHandle = (__int64)UnityEngine_GameObject__get_transform(v8, 0);
  v10 = (UnityEngine_Transform_o *)TypeFromHandle;
  if ( !byte_5969AE6 )
  {
    TypeFromHandle = sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  if ( !v10 )
LABEL_17:
    sub_2213CDC(TypeFromHandle, v6);
  UnityEngine_Transform__set_rotation(v10, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
  v11 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)method->rgctx_data->_0_T, 0);
  UnityEngine_GameObject__AddComponent(v8, v11, 0);
  v12 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)method->rgctx_data->_0_T, 0);
  Component = UnityEngine_GameObject__GetComponent(v8, v12, 0);
  v15 = method->rgctx_data;
  v16 = Component;
  _1_T = (__int64)v15->_1_T;
  if ( (*(_WORD *)(_1_T + 309) & 1) == 0 )
    _1_T = sub_224B908(v14);
  return (Il2CppObject *)sub_2213BB4(v16, _1_T);
}