int32_t EnumUtility__CastToEnum_Int32Enum_(
        System_String_o *rawValue,
        int32_t defaultValue,
        const MethodInfo_382E5C0 *method)
{
  __int64 v6; // x1
  Il2CppType *_1_TEnum; // x22
  System_RuntimeTypeHandle_o v8; // x0
  __int64 v9; // x1
  System_Type_o *TypeFromHandle; // x22
  __int64 v11; // x1
  Il2CppType *v12; // x21
  System_RuntimeTypeHandle_o v13; // x0
  __int64 v14; // x1
  System_Type_o *v15; // x21
  Il2CppObject *v16; // x0
  __int64 v17; // x2
  long double v18; // q0
  const MethodInfo_382E5C0_RGCTXs *rgctx_data; // x8
  Il2CppObject *v20; // x19
  _QWORD *p_image; // x1
  long double v23; // q0

  if ( !method->rgctx_data )
    sub_2237B54();
  if ( System_String__IsNullOrEmpty(rawValue, 0) )
    return defaultValue;
  _1_TEnum = method->rgctx_data->_1_TEnum;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v6);
  v8.fields.value = (intptr_t)_1_TEnum;
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0);
  if ( !*(_DWORD *)(qword_594C0C0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0C0, v9);
  if ( !System_Enum__IsDefined(TypeFromHandle, (Il2CppObject *)rawValue, 0) )
    return defaultValue;
  v12 = method->rgctx_data->_1_TEnum;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v11);
  v13.fields.value = (intptr_t)v12;
  v15 = System_Type__GetTypeFromHandle(v13, 0);
  if ( !*(_DWORD *)(qword_594C0C0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0C0, v14);
  v16 = System_Enum__Parse(v15, rawValue, 0);
  rgctx_data = method->rgctx_data;
  v20 = v16;
  p_image = &rgctx_data->_0_TEnum->_1.image;
  if ( (*((_WORD *)&rgctx_data->_0_TEnum->_2.bitflags2 + 1) & 1) == 0 )
  {
    v16 = (Il2CppObject *)sub_2237AF8(v18);
    p_image = &v16->klass;
  }
  if ( !v20 )
    sub_21FFECC(v16, p_image);
  if ( v20->klass->_1.element_class == (Il2CppClass *)p_image[8] )
    return *(_DWORD *)j_il2cpp_object_unbox_0(v20, p_image, v17);
  v23 = sub_220024C(v20, p_image, v17);
  return EnumUtility__CastToEnum___Il2CppFullySharedGenericStructType_(v23);
}


void *__fastcall EnumUtility__CastToEnum___Il2CppFullySharedGenericStructType_(
        int32_t a1,
        const void *a2,
        void *a3,
        __int64 a4)
{
  intptr_t *v4; // x8
  intptr_t v9; // x24
  size_t v10; // x20
  System_RuntimeTypeHandle_o v11; // x0
  System_Type_o *TypeFromHandle; // x24
  __int64 v13; // x1
  Il2CppObject *v14; // x25
  __int64 v15; // x1
  intptr_t v16; // x23
  System_RuntimeTypeHandle_o v17; // x0
  __int64 v18; // x1
  System_Type_o *v19; // x23
  Il2CppObject *v20; // x0
  __int64 v21; // x2
  long double v22; // q0
  __int64 v23; // x8
  Il2CppObject *v24; // x21
  Il2CppObject *v25; // x1
  const void *v26; // x0
  long double v28; // q0
  int32_t v29; // [xsp+Ch] [xbp-44h] BYREF

  v4 = *(intptr_t **)(a4 + 56);
  if ( !v4 )
  {
    sub_2237B54();
    v4 = *(intptr_t **)(a4 + 56);
  }
  v9 = *v4;
  v10 = *(unsigned int *)(v4[1] + 252);
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, a2);
  v11.fields.value = v9;
  TypeFromHandle = System_Type__GetTypeFromHandle(v11, 0);
  v29 = a1;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v29);
  if ( !*(_DWORD *)(qword_594C0C0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0C0, v13);
  if ( !System_Enum__IsDefined(TypeFromHandle, v14, 0) )
    return memmove(a3, a2, v10);
  v16 = **(_QWORD **)(a4 + 56);
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v15);
  v17.fields.value = v16;
  v19 = System_Type__GetTypeFromHandle(v17, 0);
  if ( !*(_DWORD *)(qword_594C0C0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0C0, v18);
  v20 = System_Enum__ToObject_77151288(v19, a1, 0);
  v23 = *(_QWORD *)(a4 + 56);
  v24 = v20;
  v25 = *(Il2CppObject **)(v23 + 8);
  if ( (*(_WORD *)((_BYTE *)&v25[19].klass + 5) & 1) == 0 )
  {
    v20 = (Il2CppObject *)sub_2237AF8(v22);
    v25 = v20;
  }
  if ( !v24 )
    sub_21FFECC(v20, v25);
  if ( v24->klass->_1.element_class == v25[4].klass )
  {
    v26 = (const void *)j_il2cpp_object_unbox_0(v24, v25, v21);
    return memcpy(a3, v26, v10);
  }
  else
  {
    v28 = sub_220024C(v24, v25, v21);
    return (void *)EnumUtility__CastToEnum___Il2CppFullySharedGenericStructType__58910840(v28);
  }
}


void *__fastcall EnumUtility__CastToEnum___Il2CppFullySharedGenericStructType__58910840(
        System_String_o *a1,
        const void *a2,
        void *a3,
        __int64 a4)
{
  __int64 v4; // x8
  size_t v9; // x20
  __int64 v10; // x1
  intptr_t v11; // x24
  System_RuntimeTypeHandle_o v12; // x0
  __int64 v13; // x1
  System_Type_o *TypeFromHandle; // x24
  __int64 v15; // x1
  intptr_t v16; // x23
  System_RuntimeTypeHandle_o v17; // x0
  __int64 v18; // x1
  System_Type_o *v19; // x23
  Il2CppObject *v20; // x0
  __int64 v21; // x2
  long double v22; // q0
  Il2CppObject **v23; // x8
  Il2CppObject *v24; // x21
  Il2CppObject *v25; // x1
  const void *v26; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Func_TSource__TSource__TSource__o *v29; // x1
  const MethodInfo_382E9F4 *v30; // x2

  v4 = *(_QWORD *)(a4 + 56);
  if ( !v4 )
  {
    sub_2237B54();
    v4 = *(_QWORD *)(a4 + 56);
  }
  v9 = *(unsigned int *)(*(_QWORD *)v4 + 252LL);
  if ( System_String__IsNullOrEmpty(a1, 0) )
    return memmove(a3, a2, v9);
  v11 = *(_QWORD *)(*(_QWORD *)(a4 + 56) + 8LL);
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v10);
  v12.fields.value = v11;
  TypeFromHandle = System_Type__GetTypeFromHandle(v12, 0);
  if ( !*(_DWORD *)(qword_594C0C0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0C0, v13);
  if ( !System_Enum__IsDefined(TypeFromHandle, (Il2CppObject *)a1, 0) )
    return memmove(a3, a2, v9);
  v16 = *(_QWORD *)(*(_QWORD *)(a4 + 56) + 8LL);
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v15);
  v17.fields.value = v16;
  v19 = System_Type__GetTypeFromHandle(v17, 0);
  if ( !*(_DWORD *)(qword_594C0C0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0C0, v18);
  v20 = System_Enum__Parse(v19, a1, 0);
  v23 = *(Il2CppObject ***)(a4 + 56);
  v24 = v20;
  v25 = *v23;
  if ( (*(_WORD *)((_BYTE *)&(*v23)[19].klass + 5) & 1) == 0 )
  {
    v20 = (Il2CppObject *)sub_2237AF8(v22);
    v25 = v20;
  }
  if ( !v24 )
    sub_21FFECC(v20, v25);
  if ( v24->klass->_1.element_class == v25[4].klass )
  {
    v26 = (const void *)j_il2cpp_object_unbox_0(v24, v25, v21);
    return memcpy(a3, v26, v9);
  }
  else
  {
    sub_220024C(v24, v25, v21);
    return (void *)System_Linq_Enumerable__Aggregate_int_(v28, v29, v30);
  }
}