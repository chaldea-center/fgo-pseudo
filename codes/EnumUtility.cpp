// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EnumUtility__CastToEnum_Int32Enum_(
        System_String_o *rawValue,
        int32_t defaultValue,
        const MethodInfo_2FF761C *method)
{
  int32_t v4; // w21
  __int64 v6; // x1
  Il2CppType *_1_TEnum; // x22
  System_Type_o *TypeFromHandle; // x22
  Il2CppType *v9; // x21
  System_Type_o *v10; // x21
  Il2CppObject *v11; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  long double v14; // q0
  const MethodInfo_2FF761C_RGCTXs *rgctx_data; // x8
  Il2CppObject *v16; // x19
  _QWORD *p_image; // x1
  long double v19; // q0
  System_RuntimeTypeHandle_o v20; // 0:w0.4
  System_RuntimeTypeHandle_o v21; // 0:w0.4

  v4 = defaultValue;
  if ( !method->rgctx_data )
  {
    sub_1C3B764(&System_Enum_TypeInfo, *(_QWORD *)&defaultValue);
    sub_1C3B764(&System_Type_TypeInfo, v6);
    if ( !method->rgctx_data )
      sub_1C8D69C();
  }
  if ( System_String__IsNullOrEmpty(rawValue, 0LL) )
    return v4;
  _1_TEnum = method->rgctx_data->_1_TEnum;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v20.fields.value = (int)_1_TEnum;
  TypeFromHandle = System_Type__GetTypeFromHandle(v20, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__IsDefined(TypeFromHandle, (Il2CppObject *)rawValue, 0LL) )
    return v4;
  v9 = method->rgctx_data->_1_TEnum;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v21.fields.value = (int)v9;
  v10 = System_Type__GetTypeFromHandle(v21, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  v11 = System_Enum__Parse(v10, rawValue, 0LL);
  rgctx_data = method->rgctx_data;
  v16 = v11;
  p_image = &rgctx_data->_0_TEnum->_1.image;
  if ( (BYTE5(rgctx_data->_0_TEnum->vtable[0].methodPtr) & 1) == 0 )
  {
    v11 = (Il2CppObject *)sub_1C8D640(v14);
    p_image = &v11->klass;
  }
  if ( !v16 )
    sub_1C3B9C0(v11, p_image);
  if ( v16->klass->_1.element_class == (Il2CppClass *)p_image[8] )
    return *(_DWORD *)j_il2cpp_object_unbox_0(v16, p_image, v12, v13);
  v19 = sub_1C3BC80(v16);
  return EnumUtility__CastToEnum___Il2CppFullySharedGenericStructType_(v19);
}


void *__fastcall EnumUtility__CastToEnum___Il2CppFullySharedGenericStructType_(
        int32_t a1,
        const void *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v7; // x8
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x25
  __int64 v11; // x20
  System_Type_o *TypeFromHandle; // x25
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x26
  __int64 v17; // x23
  System_Type_o *v18; // x23
  Il2CppObject *v19; // x0
  __int64 v20; // x2
  __int64 v21; // x3
  long double v22; // q0
  __int64 v23; // x8
  Il2CppObject *v24; // x21
  Il2CppObject *v25; // x1
  char *v26; // x1
  void *v27; // x0
  __int64 v29; // [xsp+0h] [xbp-20h] BYREF
  void *v30; // [xsp+8h] [xbp-18h]
  int32_t v31; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v32; // [xsp+18h] [xbp-8h]
  System_RuntimeTypeHandle_o v33; // 0:w0.4
  System_RuntimeTypeHandle_o v34; // 0:w0.4

  v30 = (void *)a3;
  v32 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v7 = *(__int64 **)(a4 + 56);
  if ( !v7 )
  {
    sub_1C3B764(&System_Enum_TypeInfo, a2);
    sub_1C3B764(&int_TypeInfo, v8);
    sub_1C3B764(&System_Type_TypeInfo, v9);
    v7 = *(__int64 **)(a4 + 56);
    if ( !v7 )
    {
      sub_1C8D69C();
      v7 = *(__int64 **)(a4 + 56);
    }
  }
  v10 = *v7;
  v11 = *(unsigned int *)(v7[1] + 252);
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v33.fields.value = v10;
  TypeFromHandle = System_Type__GetTypeFromHandle(v33, 0LL);
  v31 = a1;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v13, v14, v15);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( System_Enum__IsDefined(TypeFromHandle, v16, 0LL) )
  {
    v17 = **(_QWORD **)(a4 + 56);
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v34.fields.value = v17;
    v18 = System_Type__GetTypeFromHandle(v34, 0LL);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    v19 = System_Enum__ToObject_64398452(v18, a1, 0LL);
    v23 = *(_QWORD *)(a4 + 56);
    v24 = v19;
    v25 = *(Il2CppObject **)(v23 + 8);
    if ( (BYTE5(v25[19].klass) & 1) == 0 )
    {
      v19 = (Il2CppObject *)sub_1C8D640(v22);
      v25 = v19;
    }
    if ( !v24 )
      sub_1C3B9C0(v19, v25);
    if ( v24->klass->_1.element_class != v25[4].klass )
      sub_1C3BC80(v24);
    v26 = (char *)j_il2cpp_object_unbox_0(v24, v25, v20, v21);
    v27 = v30;
  }
  else
  {
    memcpy((char *)&v29 - ((v11 + 15) & 0x1FFFFFFF0LL), a2, v11);
    v27 = v30;
    v26 = (char *)&v29 - ((v11 + 15) & 0x1FFFFFFF0LL);
  }
  return memcpy(v27, v26, v11);
}


void *__fastcall EnumUtility__CastToEnum___Il2CppFullySharedGenericStructType__50297224(
        System_String_o *a1,
        const void *a2,
        void *a3,
        __int64 a4)
{
  __int64 v7; // x8
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x25
  System_Type_o *TypeFromHandle; // x25
  __int64 v13; // x23
  System_Type_o *v14; // x23
  Il2CppObject *v15; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  long double v18; // q0
  Il2CppObject **v19; // x8
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x1
  char *v22; // x1
  void *v23; // x0
  _QWORD v25[2]; // [xsp+0h] [xbp-10h] BYREF
  System_RuntimeTypeHandle_o v26; // 0:w0.4
  System_RuntimeTypeHandle_o v27; // 0:w0.4

  v25[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v7 = *(_QWORD *)(a4 + 56);
  if ( !v7 )
  {
    sub_1C3B764(&System_Enum_TypeInfo, a2);
    sub_1C3B764(&System_Type_TypeInfo, v9);
    v7 = *(_QWORD *)(a4 + 56);
    if ( !v7 )
    {
      sub_1C8D69C();
      v7 = *(_QWORD *)(a4 + 56);
    }
  }
  v10 = *(unsigned int *)(*(_QWORD *)v7 + 252LL);
  if ( System_String__IsNullOrEmpty(a1, 0LL) )
    goto LABEL_19;
  v11 = *(_QWORD *)(*(_QWORD *)(a4 + 56) + 8LL);
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v26.fields.value = v11;
  TypeFromHandle = System_Type__GetTypeFromHandle(v26, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__IsDefined(TypeFromHandle, (Il2CppObject *)a1, 0LL) )
  {
LABEL_19:
    memcpy((char *)v25 - ((v10 + 15) & 0x1FFFFFFF0LL), a2, v10);
    v23 = a3;
    v22 = (char *)v25 - ((v10 + 15) & 0x1FFFFFFF0LL);
  }
  else
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a4 + 56) + 8LL);
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v27.fields.value = v13;
    v14 = System_Type__GetTypeFromHandle(v27, 0LL);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    v15 = System_Enum__Parse(v14, a1, 0LL);
    v19 = *(Il2CppObject ***)(a4 + 56);
    v20 = v15;
    v21 = *v19;
    if ( (BYTE5((*v19)[19].klass) & 1) == 0 )
    {
      v15 = (Il2CppObject *)sub_1C8D640(v18);
      v21 = v15;
    }
    if ( !v20 )
      sub_1C3B9C0(v15, v21);
    if ( v20->klass->_1.element_class != v21[4].klass )
      sub_1C3BC80(v20);
    v22 = (char *)j_il2cpp_object_unbox_0(v20, v21, v16, v17);
    v23 = a3;
  }
  return memcpy(v23, v22, v10);
}