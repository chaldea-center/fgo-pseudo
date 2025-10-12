int32_t EnumUtility__CastToEnum_Int32Enum_(
        System_String_o *rawValue,
        int32_t defaultValue,
        const MethodInfo_30E43B4 *method)
{
  Il2CppType *_1_TEnum; // x22
  System_RuntimeTypeHandle_o v7; // x0
  System_Type_o *TypeFromHandle; // x22
  Il2CppType *v9; // x21
  System_RuntimeTypeHandle_o v10; // x0
  System_Type_o *v11; // x21
  Il2CppObject *v12; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  long double v15; // q0
  const MethodInfo_30E43B4_RGCTXs *rgctx_data; // x8
  Il2CppObject *v17; // x19
  _QWORD *p_image; // x1
  long double v20; // q0

  if ( !method->rgctx_data )
  {
    sub_1C32C20(&System_Enum_TypeInfo);
    sub_1C32C20(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C83390();
  }
  if ( System_String__IsNullOrEmpty(rawValue, 0) )
    return defaultValue;
  _1_TEnum = method->rgctx_data->_1_TEnum;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v7.fields.value = (intptr_t)_1_TEnum;
  TypeFromHandle = System_Type__GetTypeFromHandle(v7, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__IsDefined(TypeFromHandle, (Il2CppObject *)rawValue, 0) )
    return defaultValue;
  v9 = method->rgctx_data->_1_TEnum;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v10.fields.value = (intptr_t)v9;
  v11 = System_Type__GetTypeFromHandle(v10, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  v12 = System_Enum__Parse(v11, rawValue, 0);
  rgctx_data = method->rgctx_data;
  v17 = v12;
  p_image = &rgctx_data->_0_TEnum->_1.image;
  if ( (*(&rgctx_data->_0_TEnum->_2.bitflags2 + 2) & 1) == 0 )
  {
    v12 = (Il2CppObject *)sub_1C83334(v15);
    p_image = &v12->klass;
  }
  if ( !v17 )
    sub_1C32E7C(v12);
  if ( v17->klass->_1.element_class == (Il2CppClass *)p_image[8] )
    return *(_DWORD *)j_il2cpp_object_unbox_0(v17, p_image, v13, v14);
  v20 = sub_1C3313C(v17);
  return EnumUtility__CastToEnum___Il2CppFullySharedGenericStructType_(v20);
}


void *__fastcall EnumUtility__CastToEnum___Il2CppFullySharedGenericStructType_(
        int32_t a1,
        const void *a2,
        void *a3,
        __int64 a4)
{
  intptr_t *v7; // x8
  intptr_t v8; // x25
  size_t v9; // x20
  System_RuntimeTypeHandle_o v10; // x0
  System_Type_o *TypeFromHandle; // x25
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *v18; // x26
  intptr_t v19; // x23
  System_RuntimeTypeHandle_o v20; // x0
  System_Type_o *v21; // x23
  Il2CppObject *v22; // x0
  __int64 v23; // x2
  __int64 v24; // x3
  long double v25; // q0
  __int64 v26; // x8
  Il2CppObject *v27; // x21
  Il2CppObject *v28; // x1
  char *v29; // x1
  void *v30; // x0
  __int64 v32; // [xsp+0h] [xbp-20h] BYREF
  void *v33; // [xsp+8h] [xbp-18h]
  int32_t v34; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v35; // [xsp+18h] [xbp-8h]

  v33 = a3;
  v35 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = *(intptr_t **)(a4 + 56);
  if ( !v7 )
  {
    sub_1C32C20(&System_Enum_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&System_Type_TypeInfo);
    v7 = *(intptr_t **)(a4 + 56);
    if ( !v7 )
    {
      sub_1C83390();
      v7 = *(intptr_t **)(a4 + 56);
    }
  }
  v8 = *v7;
  v9 = *(unsigned int *)(v7[1] + 252);
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v10.fields.value = v8;
  TypeFromHandle = System_Type__GetTypeFromHandle(v10, 0);
  v34 = a1;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v12, v13, v14, v15, v16, v17);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( System_Enum__IsDefined(TypeFromHandle, v18, 0) )
  {
    v19 = **(_QWORD **)(a4 + 56);
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v20.fields.value = v19;
    v21 = System_Type__GetTypeFromHandle(v20, 0);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    v22 = System_Enum__ToObject_65254664(v21, a1, 0);
    v26 = *(_QWORD *)(a4 + 56);
    v27 = v22;
    v28 = *(Il2CppObject **)(v26 + 8);
    if ( (BYTE5(v28[19].klass) & 1) == 0 )
    {
      v22 = (Il2CppObject *)sub_1C83334(v25);
      v28 = v22;
    }
    if ( !v27 )
      sub_1C32E7C(v22);
    if ( v27->klass->_1.element_class != v28[4].klass )
      sub_1C3313C(v27);
    v29 = (char *)j_il2cpp_object_unbox_0(v27, v28, v23, v24);
    v30 = v33;
  }
  else
  {
    memcpy((char *)&v32 - ((v9 + 15) & 0x1FFFFFFF0LL), a2, v9);
    v30 = v33;
    v29 = (char *)&v32 - ((v9 + 15) & 0x1FFFFFFF0LL);
  }
  return memcpy(v30, v29, v9);
}


void *__fastcall EnumUtility__CastToEnum___Il2CppFullySharedGenericStructType__51267360(
        System_String_o *a1,
        const void *a2,
        void *a3,
        __int64 a4)
{
  __int64 v7; // x8
  size_t v9; // x20
  intptr_t v10; // x25
  System_RuntimeTypeHandle_o v11; // x0
  System_Type_o *TypeFromHandle; // x25
  intptr_t v13; // x23
  System_RuntimeTypeHandle_o v14; // x0
  System_Type_o *v15; // x23
  Il2CppObject *v16; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  long double v19; // q0
  Il2CppObject **v20; // x8
  Il2CppObject *v21; // x21
  Il2CppObject *v22; // x1
  char *v23; // x1
  void *v24; // x0
  _QWORD v26[2]; // [xsp+0h] [xbp-10h] BYREF

  v26[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = *(_QWORD *)(a4 + 56);
  if ( !v7 )
  {
    sub_1C32C20(&System_Enum_TypeInfo);
    sub_1C32C20(&System_Type_TypeInfo);
    v7 = *(_QWORD *)(a4 + 56);
    if ( !v7 )
    {
      sub_1C83390();
      v7 = *(_QWORD *)(a4 + 56);
    }
  }
  v9 = *(unsigned int *)(*(_QWORD *)v7 + 252LL);
  if ( System_String__IsNullOrEmpty(a1, 0) )
    goto LABEL_19;
  v10 = *(_QWORD *)(*(_QWORD *)(a4 + 56) + 8LL);
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v11.fields.value = v10;
  TypeFromHandle = System_Type__GetTypeFromHandle(v11, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__IsDefined(TypeFromHandle, (Il2CppObject *)a1, 0) )
  {
LABEL_19:
    memcpy((char *)v26 - ((v9 + 15) & 0x1FFFFFFF0LL), a2, v9);
    v24 = a3;
    v23 = (char *)v26 - ((v9 + 15) & 0x1FFFFFFF0LL);
  }
  else
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a4 + 56) + 8LL);
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v14.fields.value = v13;
    v15 = System_Type__GetTypeFromHandle(v14, 0);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    v16 = System_Enum__Parse(v15, a1, 0);
    v20 = *(Il2CppObject ***)(a4 + 56);
    v21 = v16;
    v22 = *v20;
    if ( (BYTE5((*v20)[19].klass) & 1) == 0 )
    {
      v16 = (Il2CppObject *)sub_1C83334(v19);
      v22 = v16;
    }
    if ( !v21 )
      sub_1C32E7C(v16);
    if ( v21->klass->_1.element_class != v22[4].klass )
      sub_1C3313C(v21);
    v23 = (char *)j_il2cpp_object_unbox_0(v21, v22, v17, v18);
    v24 = a3;
  }
  return memcpy(v24, v23, v9);
}