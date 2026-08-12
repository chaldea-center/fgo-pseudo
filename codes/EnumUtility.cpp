int32_t EnumUtility__CastToEnum_Int32Enum_(
        System_String_o *rawValue,
        int32_t defaultValue,
        const MethodInfo_3861A88 *method)
{
  __int64 v6; // x1
  Il2CppType *_1_TEnum; // x22
  __int64 v8; // x1
  System_Type_o *TypeFromHandle; // x22
  __int64 v10; // x1
  Il2CppType *v11; // x21
  __int64 v12; // x1
  System_Type_o *v13; // x21
  Il2CppObject *v14; // x0
  __int64 v15; // x2
  long double v16; // q0
  const MethodInfo_3861A88_RGCTXs *rgctx_data; // x8
  Il2CppObject *v18; // x19
  _QWORD *p_image; // x1
  long double v21; // q0

  if ( !method->rgctx_data )
    sub_224B964();
  if ( System_String__IsNullOrEmpty(rawValue, 0) )
    return defaultValue;
  _1_TEnum = method->rgctx_data->_1_TEnum;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v6);
  TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_1_TEnum, 0);
  if ( !*(_DWORD *)(qword_5984398 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984398, v8);
  if ( !System_Enum__IsDefined(TypeFromHandle, (Il2CppObject *)rawValue, 0) )
    return defaultValue;
  v11 = method->rgctx_data->_1_TEnum;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v10);
  v13 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v11, 0);
  if ( !*(_DWORD *)(qword_5984398 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984398, v12);
  v14 = System_Enum__Parse(v13, rawValue, 0);
  rgctx_data = method->rgctx_data;
  v18 = v14;
  p_image = &rgctx_data->_0_TEnum->_1.image;
  if ( (*((_WORD *)&rgctx_data->_0_TEnum->_2.bitflags2 + 1) & 1) == 0 )
  {
    v14 = (Il2CppObject *)sub_224B908(v16);
    p_image = &v14->klass;
  }
  if ( !v18 )
    sub_2213CDC(v14, p_image);
  if ( v18->klass->_1.element_class == (Il2CppClass *)p_image[8] )
    return *(_DWORD *)j_il2cpp_object_unbox_0(v18, p_image, v15);
  v21 = sub_221405C(v18, p_image, v15);
  return EnumUtility__CastToEnum___Il2CppFullySharedGenericStructType_(v21);
}


void *__fastcall EnumUtility__CastToEnum___Il2CppFullySharedGenericStructType_(
        int32_t a1,
        const void *a2,
        void *a3,
        __int64 a4)
{
  intptr_t *v4; // x8
  System_RuntimeTypeHandle_o v9; // x24
  size_t v10; // x20
  System_Type_o *TypeFromHandle; // x24
  __int64 v12; // x1
  Il2CppObject *v13; // x25
  __int64 v14; // x1
  System_RuntimeTypeHandle_o v15; // x23
  __int64 v16; // x1
  System_Type_o *v17; // x23
  Il2CppObject *v18; // x0
  __int64 v19; // x2
  long double v20; // q0
  __int64 v21; // x8
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x1
  const void *v24; // x0
  long double v26; // q0
  int32_t v27; // [xsp+Ch] [xbp-44h] BYREF

  v4 = *(intptr_t **)(a4 + 56);
  if ( !v4 )
  {
    sub_224B964();
    v4 = *(intptr_t **)(a4 + 56);
  }
  v9.fields.value = *v4;
  v10 = *(unsigned int *)(v4[1] + 252);
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, a2);
  TypeFromHandle = System_Type__GetTypeFromHandle(v9, 0);
  v27 = a1;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v27);
  if ( !*(_DWORD *)(qword_5984398 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984398, v12);
  if ( !System_Enum__IsDefined(TypeFromHandle, v13, 0) )
    return memmove(a3, a2, v10);
  v15.fields.value = **(_QWORD **)(a4 + 56);
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v14);
  v17 = System_Type__GetTypeFromHandle(v15, 0);
  if ( !*(_DWORD *)(qword_5984398 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984398, v16);
  v18 = System_Enum__ToObject_77364592(v17, a1, 0);
  v21 = *(_QWORD *)(a4 + 56);
  v22 = v18;
  v23 = *(Il2CppObject **)(v21 + 8);
  if ( (*(_WORD *)((_BYTE *)&v23[19].klass + 5) & 1) == 0 )
  {
    v18 = (Il2CppObject *)sub_224B908(v20);
    v23 = v18;
  }
  if ( !v22 )
    sub_2213CDC(v18, v23);
  if ( v22->klass->_1.element_class == v23[4].klass )
  {
    v24 = (const void *)j_il2cpp_object_unbox_0(v22, v23, v19);
    return memcpy(a3, v24, v10);
  }
  else
  {
    v26 = sub_221405C(v22, v23, v19);
    return (void *)EnumUtility__CastToEnum___Il2CppFullySharedGenericStructType__59120960(v26);
  }
}


void *__fastcall EnumUtility__CastToEnum___Il2CppFullySharedGenericStructType__59120960(
        System_String_o *a1,
        const void *a2,
        void *a3,
        __int64 a4)
{
  __int64 v4; // x8
  size_t v9; // x20
  __int64 v10; // x1
  System_RuntimeTypeHandle_o v11; // x24
  __int64 v12; // x1
  System_Type_o *TypeFromHandle; // x24
  __int64 v14; // x1
  System_RuntimeTypeHandle_o v15; // x23
  __int64 v16; // x1
  System_Type_o *v17; // x23
  Il2CppObject *v18; // x0
  __int64 v19; // x2
  long double v20; // q0
  Il2CppObject **v21; // x8
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x1
  const void *v24; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Func_TSource__TSource__TSource__o *v27; // x1
  const MethodInfo_3861EBC *v28; // x2

  v4 = *(_QWORD *)(a4 + 56);
  if ( !v4 )
  {
    sub_224B964();
    v4 = *(_QWORD *)(a4 + 56);
  }
  v9 = *(unsigned int *)(*(_QWORD *)v4 + 252LL);
  if ( System_String__IsNullOrEmpty(a1, 0) )
    return memmove(a3, a2, v9);
  v11.fields.value = *(_QWORD *)(*(_QWORD *)(a4 + 56) + 8LL);
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v10);
  TypeFromHandle = System_Type__GetTypeFromHandle(v11, 0);
  if ( !*(_DWORD *)(qword_5984398 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984398, v12);
  if ( !System_Enum__IsDefined(TypeFromHandle, (Il2CppObject *)a1, 0) )
    return memmove(a3, a2, v9);
  v15.fields.value = *(_QWORD *)(*(_QWORD *)(a4 + 56) + 8LL);
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v14);
  v17 = System_Type__GetTypeFromHandle(v15, 0);
  if ( !*(_DWORD *)(qword_5984398 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984398, v16);
  v18 = System_Enum__Parse(v17, a1, 0);
  v21 = *(Il2CppObject ***)(a4 + 56);
  v22 = v18;
  v23 = *v21;
  if ( (*(_WORD *)((_BYTE *)&(*v21)[19].klass + 5) & 1) == 0 )
  {
    v18 = (Il2CppObject *)sub_224B908(v20);
    v23 = v18;
  }
  if ( !v22 )
    sub_2213CDC(v18, v23);
  if ( v22->klass->_1.element_class == v23[4].klass )
  {
    v24 = (const void *)j_il2cpp_object_unbox_0(v22, v23, v19);
    return memcpy(a3, v24, v9);
  }
  else
  {
    sub_221405C(v22, v23, v19);
    return (void *)System_Linq_Enumerable__Aggregate_int_(v26, v27, v28);
  }
}