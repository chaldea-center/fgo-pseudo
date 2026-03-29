int32_t EnumUtility__CastToEnum_Int32Enum_(
        System_String_o *rawValue,
        int32_t defaultValue,
        const MethodInfo_31ABB60 *method)
{
  Il2CppType *_1_TEnum; // x22
  System_Type_o *TypeFromHandle; // x22
  Il2CppType *v8; // x21
  System_Type_o *v9; // x21
  Il2CppObject *v10; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  long double v13; // q0
  const MethodInfo_31ABB60_RGCTXs *rgctx_data; // x8
  Il2CppObject *v15; // x19
  _QWORD *p_image; // x1
  long double v18; // q0

  if ( !method->rgctx_data )
  {
    sub_1C93AD4(&System_Enum_TypeInfo);
    sub_1C93AD4(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C69BC4();
  }
  if ( System_String__IsNullOrEmpty(rawValue, 0) )
    return defaultValue;
  _1_TEnum = method->rgctx_data->_1_TEnum;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_1_TEnum, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__IsDefined(TypeFromHandle, (Il2CppObject *)rawValue, 0) )
    return defaultValue;
  v8 = method->rgctx_data->_1_TEnum;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v9 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v8, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  v10 = System_Enum__Parse(v9, rawValue, 0);
  rgctx_data = method->rgctx_data;
  v15 = v10;
  p_image = &rgctx_data->_0_TEnum->_1.image;
  if ( (*(&rgctx_data->_0_TEnum->_2.bitflags2 + 2) & 1) == 0 )
  {
    v10 = (Il2CppObject *)sub_1C69B68(v13);
    p_image = &v10->klass;
  }
  if ( !v15 )
    sub_1C93D2C(v10, p_image);
  if ( v15->klass->_1.element_class == (Il2CppClass *)p_image[8] )
    return *(_DWORD *)j_il2cpp_object_unbox_0(v15, p_image, v11, v12);
  v18 = sub_1C940C8(v15);
  return EnumUtility__CastToEnum___Il2CppFullySharedGenericStructType_(v18);
}


void *__fastcall EnumUtility__CastToEnum___Il2CppFullySharedGenericStructType_(
        int32_t a1,
        const void *a2,
        void *a3,
        __int64 a4)
{
  intptr_t *v7; // x8
  System_RuntimeTypeHandle_o v8; // x25
  size_t v9; // x20
  System_Type_o *TypeFromHandle; // x25
  Il2CppObject *v11; // x26
  System_RuntimeTypeHandle_o v12; // x23
  System_Type_o *v13; // x23
  Il2CppObject *v14; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  long double v17; // q0
  __int64 v18; // x8
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x1
  char *v21; // x1
  void *v22; // x0
  __int64 v24; // [xsp+0h] [xbp-20h] BYREF
  void *v25; // [xsp+8h] [xbp-18h]
  int32_t v26; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v27; // [xsp+18h] [xbp-8h]

  v25 = a3;
  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = *(intptr_t **)(a4 + 56);
  if ( !v7 )
  {
    sub_1C93AD4(&System_Enum_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&System_Type_TypeInfo);
    v7 = *(intptr_t **)(a4 + 56);
    if ( !v7 )
    {
      sub_1C69BC4();
      v7 = *(intptr_t **)(a4 + 56);
    }
  }
  v8.fields.value = *v7;
  v9 = *(unsigned int *)(v7[1] + 252);
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0);
  v26 = a1;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( System_Enum__IsDefined(TypeFromHandle, v11, 0) )
  {
    v12.fields.value = **(_QWORD **)(a4 + 56);
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v13 = System_Type__GetTypeFromHandle(v12, 0);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    v14 = System_Enum__ToObject_66160288(v13, a1, 0);
    v18 = *(_QWORD *)(a4 + 56);
    v19 = v14;
    v20 = *(Il2CppObject **)(v18 + 8);
    if ( (BYTE5(v20[19].klass) & 1) == 0 )
    {
      v14 = (Il2CppObject *)sub_1C69B68(v17);
      v20 = v14;
    }
    if ( !v19 )
      sub_1C93D2C(v14, v20);
    if ( v19->klass->_1.element_class != v20[4].klass )
      sub_1C940C8(v19);
    v21 = (char *)j_il2cpp_object_unbox_0(v19, v20, v15, v16);
    v22 = v25;
  }
  else
  {
    memcpy((char *)&v24 - ((v9 + 15) & 0x1FFFFFFF0LL), a2, v9);
    v22 = v25;
    v21 = (char *)&v24 - ((v9 + 15) & 0x1FFFFFFF0LL);
  }
  return memcpy(v22, v21, v9);
}


void *__fastcall EnumUtility__CastToEnum___Il2CppFullySharedGenericStructType__52084428(
        System_String_o *a1,
        const void *a2,
        void *a3,
        __int64 a4)
{
  __int64 v7; // x8
  size_t v9; // x20
  System_RuntimeTypeHandle_o v10; // x25
  System_Type_o *TypeFromHandle; // x25
  System_RuntimeTypeHandle_o v12; // x23
  System_Type_o *v13; // x23
  Il2CppObject *v14; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  long double v17; // q0
  Il2CppObject **v18; // x8
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x1
  char *v21; // x1
  void *v22; // x0
  _QWORD v24[2]; // [xsp+0h] [xbp-10h] BYREF

  v24[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = *(_QWORD *)(a4 + 56);
  if ( !v7 )
  {
    sub_1C93AD4(&System_Enum_TypeInfo);
    sub_1C93AD4(&System_Type_TypeInfo);
    v7 = *(_QWORD *)(a4 + 56);
    if ( !v7 )
    {
      sub_1C69BC4();
      v7 = *(_QWORD *)(a4 + 56);
    }
  }
  v9 = *(unsigned int *)(*(_QWORD *)v7 + 252LL);
  if ( System_String__IsNullOrEmpty(a1, 0) )
    goto LABEL_19;
  v10.fields.value = *(_QWORD *)(*(_QWORD *)(a4 + 56) + 8LL);
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  TypeFromHandle = System_Type__GetTypeFromHandle(v10, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__IsDefined(TypeFromHandle, (Il2CppObject *)a1, 0) )
  {
LABEL_19:
    memcpy((char *)v24 - ((v9 + 15) & 0x1FFFFFFF0LL), a2, v9);
    v22 = a3;
    v21 = (char *)v24 - ((v9 + 15) & 0x1FFFFFFF0LL);
  }
  else
  {
    v12.fields.value = *(_QWORD *)(*(_QWORD *)(a4 + 56) + 8LL);
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v13 = System_Type__GetTypeFromHandle(v12, 0);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    v14 = System_Enum__Parse(v13, a1, 0);
    v18 = *(Il2CppObject ***)(a4 + 56);
    v19 = v14;
    v20 = *v18;
    if ( (BYTE5((*v18)[19].klass) & 1) == 0 )
    {
      v14 = (Il2CppObject *)sub_1C69B68(v17);
      v20 = v14;
    }
    if ( !v19 )
      sub_1C93D2C(v14, v20);
    if ( v19->klass->_1.element_class != v20[4].klass )
      sub_1C940C8(v19);
    v21 = (char *)j_il2cpp_object_unbox_0(v19, v20, v15, v16);
    v22 = a3;
  }
  return memcpy(v22, v21, v9);
}