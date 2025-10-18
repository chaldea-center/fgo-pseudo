bool BasicHelper__Any_BattleResultEventItemComponent_EventDropItemInfo_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_30D13D8 *method)
{
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24
  BattleResultEventItemComponent_EventDropItemInfo_o v10; // [xsp+20h] [xbp-60h] BYREF

  v5 = (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1C877C8(method);
  if ( !v5 )
    goto LABEL_12;
  size = v5->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 1;
    while ( 1 )
    {
      list = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
                                                       &v10,
                                                       v5,
                                                       v7,
                                                       (const MethodInfo_3838D10 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      if ( !func )
        break;
      if ( (((__int64 (__fastcall *)(intptr_t, BattleResultEventItemComponent_EventDropItemInfo_o *, intptr_t))func->fields.invoke_impl)(
              func->fields.method_code,
              &v10,
              func->fields.method)
          & 1) == 0 )
      {
        v8 = ++v7 < size;
        if ( size != v7 )
          continue;
      }
      return v8;
    }
LABEL_12:
    sub_1C372B4(list);
  }
  return 0;
}


bool BasicHelper__Any_Int32Enum_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_30D0E14 *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24

  v5 = list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1C877C8(method);
  if ( !v5 )
    goto LABEL_12;
  size = v5->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 1;
    while ( 1 )
    {
      list = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                       v5,
                                                       v7,
                                                       (const MethodInfo_378853C *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      if ( !func )
        break;
      if ( (((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))func->fields.invoke_impl)(
              func->fields.method_code,
              (unsigned int)list,
              func->fields.method)
          & 1) == 0 )
      {
        v8 = ++v7 < size;
        if ( size != v7 )
          continue;
      }
      return v8;
    }
LABEL_12:
    sub_1C372B4(list);
  }
  return 0;
}


bool BasicHelper__Any_Int32Enum__51187392(
        System_Int32Enum_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_30D0EC0 *method)
{
  System_Int32Enum_array *v4; // x20
  il2cpp_array_size_t max_length; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22

  v4 = array;
  if ( !method->rgctx_data )
    array = (System_Int32Enum_array *)sub_1C877C8(method);
  if ( !v4 )
    goto LABEL_12;
  max_length = v4->max_length;
  v6 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C372BC(array);
      if ( !func )
        break;
      array = (System_Int32Enum_array *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))func->fields.invoke_impl)(
                                          func->fields.method_code,
                                          (unsigned int)v4->m_Items[v7],
                                          func->fields.method);
      if ( ((unsigned __int8)array & 1) == 0 )
      {
        LODWORD(max_length) = v4->max_length;
        v6 = (__int64)++v7 < (int)max_length;
        if ( (__int64)v7 < (int)max_length )
          continue;
      }
      return v6;
    }
LABEL_12:
    sub_1C372B4(array);
  }
  return v6;
}


bool BasicHelper__Any_ListViewSort_BonusFilterInfo_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_30D14A0 *method)
{
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24
  ListViewSort_BonusFilterInfo_o v10; // [xsp+20h] [xbp-60h] BYREF

  v5 = (System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1C877C8(method);
  if ( !v5 )
    goto LABEL_12;
  size = v5->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 1;
    while ( 1 )
    {
      list = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_ListViewSort_BonusFilterInfo___get_Item(
                                                       &v10,
                                                       v5,
                                                       v7,
                                                       (const MethodInfo_384E558 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      if ( !func )
        break;
      if ( (((__int64 (__fastcall *)(intptr_t, ListViewSort_BonusFilterInfo_o *, intptr_t))func->fields.invoke_impl)(
              func->fields.method_code,
              &v10,
              func->fields.method)
          & 1) == 0 )
      {
        v8 = ++v7 < size;
        if ( size != v7 )
          continue;
      }
      return v8;
    }
LABEL_12:
    sub_1C372B4(list);
  }
  return 0;
}


bool BasicHelper__Any___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_30D1140 *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  const MethodInfo_30D1140_RGCTXs *rgctx_data; // x8
  _QWORD *v7; // x22
  int v8; // w0
  int v9; // w23
  int v10; // w26
  bool v11; // w25
  MethodInfo *_3_System_Collections_Generic_List_T__get_Item; // x1
  Il2CppMethodPointer methodPointer; // x0
  const MethodInfo_30D1140_RGCTXs *v14; // x8
  _QWORD *v15; // x9
  MethodInfo *_5_System_Func_T__bool__Invoke; // x1
  void (*v17)(); // x0
  _QWORD v19[2]; // [xsp+0h] [xbp-20h] BYREF
  int v20; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v21; // [xsp+18h] [xbp-8h]

  v5 = list;
  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    list = (System_Collections_Generic_List_T__o *)sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  v7 = (_QWORD *)((char *)v19 - ((rgctx_data->_4_T->_2.actualSize + 15LL) & 0x1FFFFFFF0LL));
  if ( !v5 )
    goto LABEL_14;
  v8 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(v5);
  if ( v8 >= 1 )
  {
    v9 = v8;
    v10 = 0;
    v11 = 1;
    while ( 1 )
    {
      _3_System_Collections_Generic_List_T__get_Item = method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item;
      methodPointer = _3_System_Collections_Generic_List_T__get_Item->methodPointer;
      v20 = v10;
      v19[0] = &v20;
      v19[1] = v7;
      list = (System_Collections_Generic_List_T__o *)((__int64 (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, _QWORD *, _QWORD *))_3_System_Collections_Generic_List_T__get_Item->invoker_method)(
                                                       methodPointer,
                                                       _3_System_Collections_Generic_List_T__get_Item,
                                                       v5,
                                                       v19,
                                                       v7);
      if ( !func )
        break;
      v14 = method->rgctx_data;
      v15 = v7;
      if ( (v14->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v15 = (_QWORD *)*v7;
      _5_System_Func_T__bool__Invoke = v14->_5_System_Func_T__bool__Invoke;
      v17 = _5_System_Func_T__bool__Invoke->methodPointer;
      v19[0] = v15;
      _5_System_Func_T__bool__Invoke->invoker_method(v17, _5_System_Func_T__bool__Invoke, func, (void **)v19, &v20);
      if ( !(_BYTE)v20 )
      {
        v11 = ++v10 < v9;
        if ( v9 != v10 )
          continue;
      }
      return v11;
    }
LABEL_14:
    sub_1C372B4(list);
  }
  return 0;
}


bool BasicHelper__Any___Il2CppFullySharedGenericType__51188376(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_30D1298 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v5; // x21
  const MethodInfo_30D1298_RGCTXs *rgctx_data; // x8
  size_t actualSize; // x22
  il2cpp_array_size_t max_length; // x8
  bool v9; // w25
  unsigned __int64 v10; // x26
  const MethodInfo_30D1298_RGCTXs *v11; // x8
  char *v12; // x9
  MethodInfo *_3_System_Func_T__bool__Invoke; // x1
  Il2CppMethodPointer methodPointer; // x0
  __int64 v16; // [xsp+0h] [xbp-20h] BYREF
  char *v17; // [xsp+8h] [xbp-18h] BYREF
  char v18[4]; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v19; // [xsp+18h] [xbp-8h]

  v5 = array;
  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    array = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  actualSize = rgctx_data->_2_T->_2.actualSize;
  if ( !v5 )
    goto LABEL_13;
  max_length = v5->max_length;
  v9 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C372BC(array);
      array = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)memcpy(
                                                                              (char *)&v16
                                                                            - ((actualSize + 15) & 0x1FFFFFFF0LL),
                                                                              (char *)v5->m_Items
                                                                            + v10
                                                                            * (unsigned int)v5->obj.klass->_2.native_size,
                                                                              actualSize);
      if ( !func )
        break;
      v11 = method->rgctx_data;
      v12 = (char *)&v16 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      if ( (v11->_2_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v12 = *(char **)((char *)&v16 - ((actualSize + 15) & 0x1FFFFFFF0LL));
      _3_System_Func_T__bool__Invoke = v11->_3_System_Func_T__bool__Invoke;
      methodPointer = _3_System_Func_T__bool__Invoke->methodPointer;
      v17 = v12;
      array = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)((__int64 (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Func_T__bool__o *, char **, char *))_3_System_Func_T__bool__Invoke->invoker_method)(
                                                                              methodPointer,
                                                                              _3_System_Func_T__bool__Invoke,
                                                                              func,
                                                                              &v17,
                                                                              v18);
      if ( !v18[0] )
      {
        LODWORD(max_length) = v5->max_length;
        v9 = (__int64)++v10 < (int)max_length;
        if ( (__int64)v10 < (int)max_length )
          continue;
      }
      return v9;
    }
LABEL_13:
    sub_1C372B4(array);
  }
  return v9;
}


bool BasicHelper__Any_bool_(
        System_Boolean_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_30D0C30 *method)
{
  System_Boolean_array *v4; // x20
  il2cpp_array_size_t max_length; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22

  v4 = array;
  if ( !method->rgctx_data )
    array = (System_Boolean_array *)sub_1C877C8(method);
  if ( !v4 )
    goto LABEL_12;
  max_length = v4->max_length;
  v6 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C372BC(array);
      if ( !func )
        break;
      array = (System_Boolean_array *)((__int64 (__fastcall *)(intptr_t, bool, intptr_t))func->fields.invoke_impl)(
                                        func->fields.method_code,
                                        v4->m_Items[v7],
                                        func->fields.method);
      if ( ((unsigned __int8)array & 1) == 0 )
      {
        LODWORD(max_length) = v4->max_length;
        v6 = (__int64)++v7 < (int)max_length;
        if ( (__int64)v7 < (int)max_length )
          continue;
      }
      return v6;
    }
LABEL_12:
    sub_1C372B4(array);
  }
  return v6;
}


bool BasicHelper__Any_int_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_30D0CCC *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24

  v5 = (System_Collections_Generic_List_int__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1C877C8(method);
  if ( !v5 )
    goto LABEL_12;
  size = v5->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 1;
    while ( 1 )
    {
      list = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_int___get_Item(
                                                       v5,
                                                       v7,
                                                       (const MethodInfo_3785D10 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      if ( !func )
        break;
      if ( (((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))func->fields.invoke_impl)(
              func->fields.method_code,
              (unsigned int)list,
              func->fields.method)
          & 1) == 0 )
      {
        v8 = ++v7 < size;
        if ( size != v7 )
          continue;
      }
      return v8;
    }
LABEL_12:
    sub_1C372B4(list);
  }
  return 0;
}


bool BasicHelper__Any_int__51187064(
        System_Int32_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_30D0D78 *method)
{
  System_Int32_array *v4; // x20
  il2cpp_array_size_t max_length; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22

  v4 = array;
  if ( !method->rgctx_data )
    array = (System_Int32_array *)sub_1C877C8(method);
  if ( !v4 )
    goto LABEL_12;
  max_length = v4->max_length;
  v6 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C372BC(array);
      if ( !func )
        break;
      array = (System_Int32_array *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))func->fields.invoke_impl)(
                                      func->fields.method_code,
                                      (unsigned int)v4->m_Items[v7],
                                      func->fields.method);
      if ( ((unsigned __int8)array & 1) == 0 )
      {
        LODWORD(max_length) = v4->max_length;
        v6 = (__int64)++v7 < (int)max_length;
        if ( (__int64)v7 < (int)max_length )
          continue;
      }
      return v6;
    }
LABEL_12:
    sub_1C372B4(array);
  }
  return v6;
}


bool BasicHelper__Any_long_(System_Int64_array *array, System_Func_T__bool__o *func, const MethodInfo_30D0F5C *method)
{
  System_Int64_array *v4; // x20
  il2cpp_array_size_t max_length; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22

  v4 = array;
  if ( !method->rgctx_data )
    array = (System_Int64_array *)sub_1C877C8(method);
  if ( !v4 )
    goto LABEL_12;
  max_length = v4->max_length;
  v6 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C372BC(array);
      if ( !func )
        break;
      array = (System_Int64_array *)((__int64 (__fastcall *)(intptr_t, int64_t, intptr_t))func->fields.invoke_impl)(
                                      func->fields.method_code,
                                      v4->m_Items[v7],
                                      func->fields.method);
      if ( ((unsigned __int8)array & 1) == 0 )
      {
        LODWORD(max_length) = v4->max_length;
        v6 = (__int64)++v7 < (int)max_length;
        if ( (__int64)v7 < (int)max_length )
          continue;
      }
      return v6;
    }
LABEL_12:
    sub_1C372B4(array);
  }
  return v6;
}


bool BasicHelper__Any_object_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_30D0FF8 *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24

  v5 = (System_Collections_Generic_List_object__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1C877C8(method);
  if ( !v5 )
    goto LABEL_12;
  size = v5->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 1;
    while ( 1 )
    {
      list = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                       v5,
                                                       v7,
                                                       (const MethodInfo_37A2D54 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      if ( !func )
        break;
      if ( (((__int64 (__fastcall *)(intptr_t, System_Collections_Generic_List_T__o *, intptr_t))func->fields.invoke_impl)(
              func->fields.method_code,
              list,
              func->fields.method)
          & 1) == 0 )
      {
        v8 = ++v7 < size;
        if ( size != v7 )
          continue;
      }
      return v8;
    }
LABEL_12:
    sub_1C372B4(list);
  }
  return 0;
}


bool BasicHelper__Any_object__51187876(
        System_Object_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_30D10A4 *method)
{
  System_Object_array *v4; // x20
  il2cpp_array_size_t max_length; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22

  v4 = array;
  if ( !method->rgctx_data )
    array = (System_Object_array *)sub_1C877C8(method);
  if ( !v4 )
    goto LABEL_12;
  max_length = v4->max_length;
  v6 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C372BC(array);
      if ( !func )
        break;
      array = (System_Object_array *)((__int64 (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))func->fields.invoke_impl)(
                                       func->fields.method_code,
                                       v4->m_Items[v7],
                                       func->fields.method);
      if ( ((unsigned __int8)array & 1) == 0 )
      {
        LODWORD(max_length) = v4->max_length;
        v6 = (__int64)++v7 < (int)max_length;
        if ( (__int64)v7 < (int)max_length )
          continue;
      }
      return v6;
    }
LABEL_12:
    sub_1C372B4(array);
  }
  return v6;
}


int32_t BasicHelper__Clamp(int32_t value, int32_t min, int32_t max, const MethodInfo *method)
{
  int32_t v4; // w8
  int32_t v5; // w9

  if ( min <= max )
    v4 = min;
  else
    v4 = max;
  if ( min <= max )
    v5 = max;
  else
    v5 = min;
  if ( v4 > value )
    return v4;
  if ( v5 < value )
    return v5;
  return value;
}


bool BasicHelper__ContainsSelfNotNull___Il2CppFullySharedGenericType_(
        System_Collections_Generic_HashSet_T__o *self,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item,
        const MethodInfo_30D15D0 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x20
  __int64 v5; // x23
  _QWORD *monitor; // x21
  __int64 v7; // x8
  size_t v8; // x2
  _QWORD *v9; // x21
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v10; // x1
  __int64 *v11; // x1
  __int64 v12; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v14; // [xsp+0h] [xbp-20h] BYREF
  _QWORD *v15; // [xsp+8h] [xbp-18h] BYREF
  _BYTE v16[4]; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v17; // [xsp+18h] [xbp-8h]

  klass = item.klass;
  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v14 = item.klass;
  v5 = *((_QWORD *)item.monitor + 7);
  if ( !v5 )
  {
    monitor = item.monitor;
    sub_1C877C8(item.monitor);
    v5 = monitor[7];
  }
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(unsigned int *)(v7 + 252);
  v9 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&v14 - ((v8 + 15) & 0x1FFFFFFF0LL));
  if ( !self )
    return 0;
  if ( *(int *)(v7 + 40) >= 0 )
    v10 = &v14;
  else
    v10 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v14 - ((v8 + 15) & 0x1FFFFFFF0LL), v10, v8);
  v11 = *(__int64 **)(v5 + 16);
  v12 = *v11;
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 8) + 40LL) & 0x80000000) == 0 )
    v9 = (_QWORD *)*v9;
  v15 = v9;
  ((void (__fastcall *)(__int64, __int64 *, System_Collections_Generic_HashSet_T__o *, _QWORD **, _BYTE *))v11[2])(
    v12,
    v11,
    self,
    &v15,
    v16);
  return v16[0] != 0;
}


bool BasicHelper__ContainsSelfNotNull_int_(
        System_Collections_Generic_HashSet_T__o *self,
        int32_t item,
        const MethodInfo_30D1578 *method)
{
  if ( method->rgctx_data )
  {
    if ( self )
      return System_Collections_Generic_HashSet_int___Contains(
               (System_Collections_Generic_HashSet_int__o *)self,
               item,
               (const MethodInfo_365417C *)method->rgctx_data->_2_System_Collections_Generic_HashSet_T__Contains);
  }
  else
  {
    sub_1C877C8(method);
    if ( self )
      return System_Collections_Generic_HashSet_int___Contains(
               (System_Collections_Generic_HashSet_int__o *)self,
               item,
               (const MethodInfo_365417C *)method->rgctx_data->_2_System_Collections_Generic_HashSet_T__Contains);
  }
  return 0;
}


System_Int32_array *BasicHelper__Convert2IntArray(System_String_o *self, uint16_t separator, const MethodInfo *method)
{
  System_String_o *v4; // x20
  System_String_array *v5; // x0
  System_String_array *v6; // x19
  il2cpp_array_size_t max_length; // x8
  System_String_o *v8; // x20
  unsigned __int64 v9; // x21
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF

  v4 = self;
  if ( (byte_4C449A2 & 1) == 0 )
  {
    self = (System_String_o *)sub_1C37058(&int___TypeInfo);
    byte_4C449A2 = 1;
  }
  if ( !v4 )
LABEL_17:
    sub_1C372B4(self);
  v5 = System_String__Split(v4, separator, 0, 0);
  if ( !v5 )
    return 0;
  v6 = v5;
  self = (System_String_o *)sub_1C37100(int___TypeInfo, LODWORD(v5->max_length));
  max_length = v6->max_length;
  v8 = self;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      result = 0;
      if ( v9 >= (unsigned int)max_length )
        break;
      self = (System_String_o *)System_Int32__TryParse(v6->m_Items[v9], &result, 0);
      if ( ((unsigned __int8)self & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_17;
        if ( v9 >= LODWORD(v8[1].klass) )
          break;
        *((_DWORD *)&v8[1].monitor + v9) = result;
      }
      LODWORD(max_length) = v6->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        return (System_Int32_array *)v8;
    }
    sub_1C372BC(self);
  }
  return (System_Int32_array *)v8;
}


int32_t BasicHelper__DecryptValue(int32_t self, const MethodInfo *method)
{
  if ( (byte_4C4499B & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C4499B = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Decrypt(self, 0);
}


int32_t BasicHelper__DecryptValue_44142552(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o self,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v5; // 0:x0.16

  v2 = *(_QWORD *)&self.fields.fakeValue;
  v3 = *(_QWORD *)&self.fields.currentCryptoKey;
  if ( (byte_4C4499C & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C4499C = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v5.fields.currentCryptoKey = v3;
  *(_QWORD *)&v5.fields.fakeValue = v2;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v5, 0);
}


System_String_o *BasicHelper__DecryptValue_44142744(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *self,
        const MethodInfo *method)
{
  if ( (byte_4C4499E & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4C4499E = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48966740(self, 0);
}


int64_t BasicHelper__DecryptValue_44142832(int64_t self, const MethodInfo *method)
{
  if ( (byte_4C4499F & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C4499F = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Decrypt(self, 0);
}


int64_t BasicHelper__DecryptValue_44142920(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *self,
        const MethodInfo *method)
{
  __int128 v3; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_4C449A0 & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C449A0 = 1;
  }
  v3 = *(_OWORD *)&self->fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&self->fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v5, 0);
}


System_Collections_IEnumerator_o *BasicHelper__DelayCall(
        float delay,
        System_Action_o *action,
        bool isWaitEvenIfNoDelayTime,
        const MethodInfo *method)
{
  bool v7; // w21
  __int64 v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C449A5 & 1) == 0 )
  {
    sub_1C37058(&BasicHelper__DelayCall_d__35_TypeInfo);
    byte_4C449A5 = 1;
  }
  v7 = isWaitEvenIfNoDelayTime;
  v8 = sub_1C372A4(BasicHelper__DelayCall_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(float *)(v8 + 32) = delay;
  *(_QWORD *)(v8 + 40) = action;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 40), (int32_t)action, v9, v10);
  *(_BYTE *)(v8 + 36) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *BasicHelper__DelayCall_ShowAllEx_DamageFuncArgument_(
        float delay,
        System_Action_T__o *action,
        HutongGames_PlayMaker_Actions_ShowAllEx_DamageFuncArgument_o *arg,
        const MethodInfo_30D18A8 *method)
{
  const MethodInfo_30D18A8_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__DelayCall_d__36_T; // x0
  BasicHelper__DelayCall_d__36_T__o *v10; // x0
  const MethodInfo_30D18A8_RGCTXs *v11; // x8
  BasicHelper__DelayCall_d__36_T__o *v12; // x21
  __int64 v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int128 v16; // q0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__DelayCall_d__36_T = (__int64)rgctx_data->_0_BasicHelper__DelayCall_d__36_T_;
  if ( (*(&rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_2.bitflags2 + 2) & 1) == 0 )
    _0_BasicHelper__DelayCall_d__36_T = sub_1C8776C(*(long double *)&delay);
  v10 = (BasicHelper__DelayCall_d__36_T__o *)sub_1C372A4(_0_BasicHelper__DelayCall_d__36_T);
  v11 = method->rgctx_data;
  v12 = v10;
  BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument____ctor(
    v10,
    0,
    (const MethodInfo_32D18B4 *)v11->_1_BasicHelper__DelayCall_d__36_T___ctor);
  if ( !v12 )
    sub_1C372B4(v13);
  v12->fields.delay = delay;
  v12->fields.action = action;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->fields.action, (int32_t)action, v14, v15);
  v16 = *(_OWORD *)&arg->fields.perf;
  v12[1].monitor = *(void **)&arg->fields.damageIndex;
  *(_OWORD *)&v12->fields.arg = v16;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->fields.arg, 0, v17, v18);
  return (System_Collections_IEnumerator_o *)v12;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *BasicHelper__DelayCall___Il2CppFullySharedGenericType_(
        float delay,
        System_Action_T__o *action,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg,
        const MethodInfo_30D1754 *method)
{
  _QWORD *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  __int64 *v7; // x8
  long double v8; // q8
  size_t v9; // x21
  __int64 v10; // x0
  System_Collections_IEnumerator_o *v11; // x24
  __int64 v12; // x0
  _QWORD *v13; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v14; // x1
  _QWORD v16[2]; // [xsp+0h] [xbp-18h] BYREF

  monitor = arg.monitor;
  klass = arg.klass;
  v16[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v16[0] = arg.klass;
  v7 = (__int64 *)*((_QWORD *)arg.monitor + 7);
  v8 = *(long double *)&delay;
  if ( !v7 )
  {
    sub_1C877C8(arg.monitor);
    v7 = (__int64 *)monitor[7];
  }
  v9 = *(unsigned int *)(v7[3] + 252);
  v10 = *v7;
  if ( (*(_BYTE *)(*v7 + 309) & 1) == 0 )
    v10 = sub_1C8776C(*(long double *)&delay);
  v11 = (System_Collections_IEnumerator_o *)sub_1C372A4(v10);
  v12 = (**(__int64 (__fastcall ***)(System_Collections_IEnumerator_o *, _QWORD))(monitor[7] + 8LL))(v11, 0);
  if ( !v11 )
    sub_1C372B4(v12);
  sub_1A8608C(v11, *(_QWORD *)(*(_QWORD *)monitor[7] + 128LL) + 64LL, v8);
  sub_1A85D98(v11, *(_QWORD *)(*(_QWORD *)monitor[7] + 128LL) + 96LL, action);
  v13 = (_QWORD *)monitor[7];
  if ( *(int *)(v13[3] + 40LL) >= 0 )
    v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v16;
  else
    v14 = klass;
  memcpy((char *)v16 - ((v9 + 15) & 0x1FFFFFFF0LL), v14, v9);
  sub_1C37080(v11, *(_QWORD *)(*v13 + 128LL) + 128LL, (char *)v16 - ((v9 + 15) & 0x1FFFFFFF0LL), (unsigned int)v9);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *BasicHelper__DelayCall_object_(
        float delay,
        System_Action_T__o *action,
        Il2CppObject *arg,
        const MethodInfo_30D16BC *method)
{
  const MethodInfo_30D16BC_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__DelayCall_d__36_T; // x0
  BasicHelper__DelayCall_d__36_T__o *v10; // x0
  const MethodInfo_30D16BC_RGCTXs *v11; // x8
  BasicHelper__DelayCall_d__36_T__o *v12; // x21
  __int64 v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__DelayCall_d__36_T = (__int64)rgctx_data->_0_BasicHelper__DelayCall_d__36_T_;
  if ( (*(&rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_2.bitflags2 + 2) & 1) == 0 )
    _0_BasicHelper__DelayCall_d__36_T = sub_1C8776C(*(long double *)&delay);
  v10 = (BasicHelper__DelayCall_d__36_T__o *)sub_1C372A4(_0_BasicHelper__DelayCall_d__36_T);
  v11 = method->rgctx_data;
  v12 = v10;
  BasicHelper__DelayCall_d__36_object____ctor(
    v10,
    0,
    (const MethodInfo_32D14B8 *)v11->_1_BasicHelper__DelayCall_d__36_T___ctor);
  if ( !v12 )
    sub_1C372B4(v13);
  v12->fields.delay = delay;
  v12->fields.action = action;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->fields.action, (int32_t)action, v14, v15);
  v12->fields.arg = arg;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->fields.arg, (int32_t)arg, v16, v17);
  return (System_Collections_IEnumerator_o *)v12;
}


System_String_o *BasicHelper__EncryptDecryptValue(System_String_o *self, const MethodInfo *method)
{
  if ( (byte_4C4499D & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4C4499D = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__EncryptDecrypt(self, 0);
}


bool BasicHelper__EqualExceptNullOrEmpty(System_String_o *self, System_String_o *target, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0

  if ( System_String__IsNullOrEmpty(self, 0) )
    return 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(target, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !self )
    sub_1C372B4(IsNullOrEmpty);
  return System_String__Equals_63596960(self, target, 0);
}


System_Collections_Generic_IEnumerable_T__o *BasicHelper__ExcludeNull___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        const MethodInfo_30D1A84 *method)
{
  long double inited; // q0
  const MethodInfo_30D1A84_RGCTXs *rgctx_data; // x8
  __int64 _3_BasicHelper___c__26_T; // x0
  Il2CppClass *v7; // x0
  __int64 v8; // x21
  Il2CppClass *v9; // x0
  const MethodInfo_30D1A84_RGCTXs *v10; // x8
  __int64 v11; // x0
  __int64 _2_System_Func_T__bool; // x8
  __int64 v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  long double v16; // q0
  Il2CppClass *v17; // x0
  Il2CppClass *v18; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  _3_BasicHelper___c__26_T = (__int64)rgctx_data->_3_BasicHelper___c__26_T_;
  if ( (*(_BYTE *)(_3_BasicHelper___c__26_T + 309) & 1) == 0 )
    _3_BasicHelper___c__26_T = sub_1C8776C(inited);
  if ( !*(_DWORD *)(_3_BasicHelper___c__26_T + 224) )
    inited = j_il2cpp_runtime_class_init_0(_3_BasicHelper___c__26_T);
  v7 = method->rgctx_data->_3_BasicHelper___c__26_T_;
  if ( (*(&v7->_2.bitflags2 + 2) & 1) == 0 )
    v7 = (Il2CppClass *)sub_1C8776C(inited);
  v8 = *((_QWORD *)v7->static_fields + 1);
  if ( !v8 )
  {
    v9 = method->rgctx_data->_3_BasicHelper___c__26_T_;
    if ( (*(&v9->_2.bitflags2 + 2) & 1) == 0 )
      v9 = (Il2CppClass *)sub_1C8776C(inited);
    if ( !v9->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = method->rgctx_data;
    v11 = (__int64)v10->_3_BasicHelper___c__26_T_;
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    {
      v11 = sub_1C8776C(inited);
      v10 = method->rgctx_data;
    }
    _2_System_Func_T__bool = (__int64)v10->_2_System_Func_T__bool_;
    v13 = **(_QWORD **)(v11 + 184);
    if ( (*(_BYTE *)(_2_System_Func_T__bool + 309) & 1) == 0 )
      _2_System_Func_T__bool = sub_1C8776C(inited);
    v8 = sub_1C372A4(_2_System_Func_T__bool);
    ((void (__fastcall *)(__int64, __int64, MethodInfo *))method->rgctx_data->_5_System_Func_T__bool___ctor->methodPointer)(
      v8,
      v13,
      method->rgctx_data->_4_BasicHelper___c__26_T___ExcludeNull_b__26_0);
    v17 = method->rgctx_data->_3_BasicHelper___c__26_T_;
    if ( (*(&v17->_2.bitflags2 + 2) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C8776C(v16);
    *((_QWORD *)v17->static_fields + 1) = v8;
    v18 = method->rgctx_data->_3_BasicHelper___c__26_T_;
    if ( (*(&v18->_2.bitflags2 + 2) & 1) == 0 )
      v18 = (Il2CppClass *)sub_1C8776C(v16);
    sub_1C36FFC((CGThumbnailListItem_o *)((char *)v18->static_fields + 8), v8, v14, v15);
  }
  return (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *, __int64))method->rgctx_data->_6_System_Linq_Enumerable_Where_T_->methodPointer)(
                                                          sequence,
                                                          v8);
}


System_Collections_Generic_IEnumerable_T__o *BasicHelper__ExcludeNull_object_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        const MethodInfo_30D194C *method)
{
  long double inited; // q0
  const MethodInfo_30D194C_RGCTXs *rgctx_data; // x8
  __int64 _3_BasicHelper___c__26_T; // x0
  Il2CppClass *v7; // x0
  System_Func_object__bool__o *v8; // x21
  Il2CppClass *v9; // x0
  const MethodInfo_30D194C_RGCTXs *v10; // x8
  __int64 v11; // x0
  __int64 _2_System_Func_T__bool; // x8
  Il2CppObject *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  long double v16; // q0
  Il2CppClass *v17; // x0
  Il2CppClass *v18; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  _3_BasicHelper___c__26_T = (__int64)rgctx_data->_3_BasicHelper___c__26_T_;
  if ( (*(_BYTE *)(_3_BasicHelper___c__26_T + 309) & 1) == 0 )
    _3_BasicHelper___c__26_T = sub_1C8776C(inited);
  if ( !*(_DWORD *)(_3_BasicHelper___c__26_T + 224) )
    inited = j_il2cpp_runtime_class_init_0(_3_BasicHelper___c__26_T);
  v7 = method->rgctx_data->_3_BasicHelper___c__26_T_;
  if ( (*(&v7->_2.bitflags2 + 2) & 1) == 0 )
    v7 = (Il2CppClass *)sub_1C8776C(inited);
  v8 = (System_Func_object__bool__o *)*((_QWORD *)v7->static_fields + 1);
  if ( !v8 )
  {
    v9 = method->rgctx_data->_3_BasicHelper___c__26_T_;
    if ( (*(&v9->_2.bitflags2 + 2) & 1) == 0 )
      v9 = (Il2CppClass *)sub_1C8776C(inited);
    if ( !v9->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = method->rgctx_data;
    v11 = (__int64)v10->_3_BasicHelper___c__26_T_;
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    {
      v11 = sub_1C8776C(inited);
      v10 = method->rgctx_data;
    }
    _2_System_Func_T__bool = (__int64)v10->_2_System_Func_T__bool_;
    v13 = **(Il2CppObject ***)(v11 + 184);
    if ( (*(_BYTE *)(_2_System_Func_T__bool + 309) & 1) == 0 )
      _2_System_Func_T__bool = sub_1C8776C(inited);
    v8 = (System_Func_object__bool__o *)sub_1C372A4(_2_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v8,
      v13,
      (intptr_t)method->rgctx_data->_4_BasicHelper___c__26_T___ExcludeNull_b__26_0,
      (const MethodInfo_36392B8 *)method->rgctx_data->_5_System_Func_T__bool___ctor);
    v17 = method->rgctx_data->_3_BasicHelper___c__26_T_;
    if ( (*(&v17->_2.bitflags2 + 2) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C8776C(v16);
    *((_QWORD *)v17->static_fields + 1) = v8;
    v18 = method->rgctx_data->_3_BasicHelper___c__26_T_;
    if ( (*(&v18->_2.bitflags2 + 2) & 1) == 0 )
      v18 = (Il2CppClass *)sub_1C8776C(v16);
    sub_1C36FFC((CGThumbnailListItem_o *)((char *)v18->static_fields + 8), (int32_t)v8, v14, v15);
  }
  return (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)sequence,
                                                          (System_Func_TSource__bool__o *)v8,
                                                          (const MethodInfo_312E410 *)method->rgctx_data->_6_System_Linq_Enumerable_Where_T_);
}


Il2CppObject *BasicHelper__FindComponent_object_(
        UnityEngine_GameObject_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_30D1C74 *method)
{
  UnityEngine_GameObject_array *v5; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x23
  UnityEngine_GameObject_o **m_Items; // x24
  UnityEngine_Object_o *v9; // x22
  Il2CppObject *Component_object; // x22

  v5 = array;
  if ( method->rgctx_data
    || (array = (UnityEngine_GameObject_array *)sub_1C37058(&UnityEngine_Object_TypeInfo), method->rgctx_data) )
  {
    if ( !v5 )
      return 0;
  }
  else
  {
    array = (UnityEngine_GameObject_array *)sub_1C877C8(method);
    if ( !v5 )
      return 0;
  }
  max_length = v5->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v7 = 0;
  m_Items = v5->m_Items;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)max_length )
LABEL_23:
      sub_1C372BC(array);
    v9 = (UnityEngine_Object_o *)m_Items[v7];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    array = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Inequality(v9, 0, 0);
    Component_object = 0;
    if ( ((unsigned __int8)array & 1) != 0 )
    {
      if ( v7 >= LODWORD(v5->max_length) )
        goto LABEL_23;
      array = (UnityEngine_GameObject_array *)m_Items[v7];
      if ( !array )
LABEL_24:
        sub_1C372B4(array);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)array,
                           (const MethodInfo_313F1D8 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    array = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0,
                                              0);
    if ( ((unsigned __int8)array & 1) == 0 )
    {
      if ( !func )
        goto LABEL_24;
      array = (UnityEngine_GameObject_array *)((__int64 (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))func->fields.invoke_impl)(
                                                func->fields.method_code,
                                                Component_object,
                                                func->fields.method);
      if ( ((unsigned __int8)array & 1) != 0 )
        return Component_object;
    }
    LODWORD(max_length) = v5->max_length;
    if ( (__int64)++v7 >= (int)max_length )
      return 0;
  }
}


Il2CppObject *BasicHelper__Find_object_(
        System_Object_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_30D1BC4 *method)
{
  System_Object_array *v4; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x21

  v4 = array;
  if ( method->rgctx_data )
  {
    if ( !array )
      return 0;
  }
  else
  {
    array = (System_Object_array *)sub_1C877C8(method);
    if ( !v4 )
      return 0;
  }
  max_length = v4->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)max_length )
      goto LABEL_15;
    if ( !func )
      sub_1C372B4(array);
    array = (System_Object_array *)((__int64 (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))func->fields.invoke_impl)(
                                     func->fields.method_code,
                                     v4->m_Items[v6],
                                     func->fields.method);
    if ( ((unsigned __int8)array & 1) != 0 )
      break;
    LODWORD(max_length) = v4->max_length;
    if ( (__int64)++v6 >= (int)max_length )
      return 0;
  }
  if ( (unsigned int)v6 >= LODWORD(v4->max_length) )
LABEL_15:
    sub_1C372BC(array);
  return v4->m_Items[v6];
}


void BasicHelper__ForEach_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_30D49E8 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  long double v17; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  _QWORD *v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int128 v28; // [xsp+40h] [xbp-50h] BYREF

  if ( method->rgctx_data
    || (sub_1C37058(&System_IDisposable_TypeInfo),
        sub_1C37058(&System_Collections_IEnumerator_TypeInfo),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C877C8(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C8776C(v3);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)&sequence->klass->_2.rank;
  if ( *(_WORD *)&sequence->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v11 = sub_1C87870(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
          sequence,
          *(_QWORD *)(v11 + 8));
  if ( !v12 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_17:
      v16 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8776C(v17);
    v19 = *(_QWORD *)v12;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((Il2CppClass **)v21 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_26;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_26:
      v22 = sub_1C87870(v12, _2_System_Collections_Generic_IEnumerator_T, 0);
    }
    v23 = (*(_QWORD *(__fastcall **)(__int128 *__return_ptr, __int64, _QWORD))v22)(&v28, v12, *(_QWORD *)(v22 + 8));
    if ( !action )
      sub_1C372B4(v23);
    ((void (__fastcall *)(intptr_t, __int128 *, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      &v28,
      action->fields.method);
  }
  v24 = *(_QWORD *)v12;
  v25 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_34;
    }
    v27 = v24 + 16LL * *v26 + 312;
  }
  else
  {
LABEL_34:
    v27 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v27)(v12, *(_QWORD *)(v27 + 8));
}


void BasicHelper__ForEach_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_30D4D1C *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  long double v17; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  _QWORD *v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int128 v28; // [xsp+40h] [xbp-50h] BYREF

  if ( method->rgctx_data
    || (sub_1C37058(&System_IDisposable_TypeInfo),
        sub_1C37058(&System_Collections_IEnumerator_TypeInfo),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C877C8(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C8776C(v3);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)&sequence->klass->_2.rank;
  if ( *(_WORD *)&sequence->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v11 = sub_1C87870(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
          sequence,
          *(_QWORD *)(v11 + 8));
  if ( !v12 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_17:
      v16 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8776C(v17);
    v19 = *(_QWORD *)v12;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((Il2CppClass **)v21 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_26;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_26:
      v22 = sub_1C87870(v12, _2_System_Collections_Generic_IEnumerator_T, 0);
    }
    v23 = (*(_QWORD *(__fastcall **)(__int128 *__return_ptr, __int64, _QWORD))v22)(&v28, v12, *(_QWORD *)(v22 + 8));
    if ( !action )
      sub_1C372B4(v23);
    ((void (__fastcall *)(intptr_t, __int128 *, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      &v28,
      action->fields.method);
  }
  v24 = *(_QWORD *)v12;
  v25 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_34;
    }
    v27 = v24 + 16LL * *v26 + 312;
  }
  else
  {
LABEL_34:
    v27 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v27)(v12, *(_QWORD *)(v27 + 8));
}


void BasicHelper__ForEach_FriendshipExceedResultWindowComponent_SpecialimageInfo_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_30D5050 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  long double v17; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0

  if ( method->rgctx_data
    || (sub_1C37058(&System_IDisposable_TypeInfo),
        sub_1C37058(&System_Collections_IEnumerator_TypeInfo),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C877C8(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C8776C(v3);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)&sequence->klass->_2.rank;
  if ( *(_WORD *)&sequence->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v11 = sub_1C87870(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
          sequence,
          *(_QWORD *)(v11 + 8));
  if ( !v12 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_17:
      v16 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8776C(v17);
    v19 = *(_QWORD *)v12;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((Il2CppClass **)v21 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_26;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_26:
      v22 = sub_1C87870(v12, _2_System_Collections_Generic_IEnumerator_T, 0);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v12, *(_QWORD *)(v22 + 8));
    if ( !action )
      sub_1C372B4(v23);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      v23,
      v24,
      action->fields.method);
  }
  v25 = *(_QWORD *)v12;
  v26 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_34;
    }
    v28 = v25 + 16LL * *v27 + 312;
  }
  else
  {
LABEL_34:
    v28 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v28)(v12, *(_QWORD *)(v28 + 8));
}


void BasicHelper__ForEach_Int32Enum_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_30D3600 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  long double v17; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0

  if ( method->rgctx_data
    || (sub_1C37058(&System_IDisposable_TypeInfo),
        sub_1C37058(&System_Collections_IEnumerator_TypeInfo),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C877C8(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C8776C(v3);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)&sequence->klass->_2.rank;
  if ( *(_WORD *)&sequence->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v11 = sub_1C87870(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
          sequence,
          *(_QWORD *)(v11 + 8));
  if ( !v12 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_17:
      v16 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8776C(v17);
    v19 = *(_QWORD *)v12;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((Il2CppClass **)v21 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_26;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_26:
      v22 = sub_1C87870(v12, _2_System_Collections_Generic_IEnumerator_T, 0);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v12, *(_QWORD *)(v22 + 8));
    if ( !action )
      sub_1C372B4(v23);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      (unsigned int)v23,
      action->fields.method);
  }
  v24 = *(_QWORD *)v12;
  v25 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_34;
    }
    v27 = v24 + 16LL * *v26 + 312;
  }
  else
  {
LABEL_34:
    v27 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v27)(v12, *(_QWORD *)(v27 + 8));
}


void BasicHelper__ForEach_KeyValuePair_int__int__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_30D1DAC *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  long double v17; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0

  if ( method->rgctx_data
    || (sub_1C37058(&System_IDisposable_TypeInfo),
        sub_1C37058(&System_Collections_IEnumerator_TypeInfo),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C877C8(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C8776C(v3);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)&sequence->klass->_2.rank;
  if ( *(_WORD *)&sequence->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v11 = sub_1C87870(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
          sequence,
          *(_QWORD *)(v11 + 8));
  if ( !v12 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_17:
      v16 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8776C(v17);
    v19 = *(_QWORD *)v12;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((Il2CppClass **)v21 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_26;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_26:
      v22 = sub_1C87870(v12, _2_System_Collections_Generic_IEnumerator_T, 0);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v12, *(_QWORD *)(v22 + 8));
    if ( !action )
      sub_1C372B4(v23);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      v23,
      action->fields.method);
  }
  v24 = *(_QWORD *)v12;
  v25 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_34;
    }
    v27 = v24 + 16LL * *v26 + 312;
  }
  else
  {
LABEL_34:
    v27 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v27)(v12, *(_QWORD *)(v27 + 8));
}


void BasicHelper__ForEach_KeyValuePair_int__object__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_30D20AC *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  long double v17; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0

  if ( method->rgctx_data
    || (sub_1C37058(&System_IDisposable_TypeInfo),
        sub_1C37058(&System_Collections_IEnumerator_TypeInfo),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C877C8(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C8776C(v3);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)&sequence->klass->_2.rank;
  if ( *(_WORD *)&sequence->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v11 = sub_1C87870(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
          sequence,
          *(_QWORD *)(v11 + 8));
  if ( !v12 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_17:
      v16 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8776C(v17);
    v19 = *(_QWORD *)v12;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((Il2CppClass **)v21 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_26;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_26:
      v22 = sub_1C87870(v12, _2_System_Collections_Generic_IEnumerator_T, 0);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v12, *(_QWORD *)(v22 + 8));
    if ( !action )
      sub_1C372B4(v23);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      v23,
      v24,
      action->fields.method);
  }
  v25 = *(_QWORD *)v12;
  v26 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_34;
    }
    v28 = v25 + 16LL * *v27 + 312;
  }
  else
  {
LABEL_34:
    v28 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v28)(v12, *(_QWORD *)(v28 + 8));
}


void BasicHelper__ForEach_KeyValuePair_long__object__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_30D23B8 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  long double v17; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0

  if ( method->rgctx_data
    || (sub_1C37058(&System_IDisposable_TypeInfo),
        sub_1C37058(&System_Collections_IEnumerator_TypeInfo),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C877C8(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C8776C(v3);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)&sequence->klass->_2.rank;
  if ( *(_WORD *)&sequence->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v11 = sub_1C87870(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
          sequence,
          *(_QWORD *)(v11 + 8));
  if ( !v12 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_17:
      v16 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8776C(v17);
    v19 = *(_QWORD *)v12;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((Il2CppClass **)v21 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_26;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_26:
      v22 = sub_1C87870(v12, _2_System_Collections_Generic_IEnumerator_T, 0);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v12, *(_QWORD *)(v22 + 8));
    if ( !action )
      sub_1C372B4(v23);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      v23,
      v24,
      action->fields.method);
  }
  v25 = *(_QWORD *)v12;
  v26 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_34;
    }
    v28 = v25 + 16LL * *v27 + 312;
  }
  else
  {
LABEL_34:
    v28 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v28)(v12, *(_QWORD *)(v28 + 8));
}


void BasicHelper__ForEach_KeyValuePair_object__float__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_30D2CDC *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  long double v17; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0

  if ( method->rgctx_data
    || (sub_1C37058(&System_IDisposable_TypeInfo),
        sub_1C37058(&System_Collections_IEnumerator_TypeInfo),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C877C8(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C8776C(v3);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)&sequence->klass->_2.rank;
  if ( *(_WORD *)&sequence->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v11 = sub_1C87870(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
          sequence,
          *(_QWORD *)(v11 + 8));
  if ( !v12 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_17:
      v16 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8776C(v17);
    v19 = *(_QWORD *)v12;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((Il2CppClass **)v21 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_26;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_26:
      v22 = sub_1C87870(v12, _2_System_Collections_Generic_IEnumerator_T, 0);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v12, *(_QWORD *)(v22 + 8));
    if ( !action )
      sub_1C372B4(v23);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      v23,
      v24,
      action->fields.method);
  }
  v25 = *(_QWORD *)v12;
  v26 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_34;
    }
    v28 = v25 + 16LL * *v27 + 312;
  }
  else
  {
LABEL_34:
    v28 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v28)(v12, *(_QWORD *)(v28 + 8));
}


void BasicHelper__ForEach_KeyValuePair_object__int__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_30D26C4 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  long double v17; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0

  if ( method->rgctx_data
    || (sub_1C37058(&System_IDisposable_TypeInfo),
        sub_1C37058(&System_Collections_IEnumerator_TypeInfo),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C877C8(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C8776C(v3);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)&sequence->klass->_2.rank;
  if ( *(_WORD *)&sequence->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v11 = sub_1C87870(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
          sequence,
          *(_QWORD *)(v11 + 8));
  if ( !v12 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_17:
      v16 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8776C(v17);
    v19 = *(_QWORD *)v12;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((Il2CppClass **)v21 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_26;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_26:
      v22 = sub_1C87870(v12, _2_System_Collections_Generic_IEnumerator_T, 0);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v12, *(_QWORD *)(v22 + 8));
    if ( !action )
      sub_1C372B4(v23);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      v23,
      v24,
      action->fields.method);
  }
  v25 = *(_QWORD *)v12;
  v26 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_34;
    }
    v28 = v25 + 16LL * *v27 + 312;
  }
  else
  {
LABEL_34:
    v28 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v28)(v12, *(_QWORD *)(v28 + 8));
}


void BasicHelper__ForEach_KeyValuePair_object__object__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_30D29D0 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  long double v17; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0

  if ( method->rgctx_data
    || (sub_1C37058(&System_IDisposable_TypeInfo),
        sub_1C37058(&System_Collections_IEnumerator_TypeInfo),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C877C8(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C8776C(v3);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)&sequence->klass->_2.rank;
  if ( *(_WORD *)&sequence->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v11 = sub_1C87870(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
          sequence,
          *(_QWORD *)(v11 + 8));
  if ( !v12 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_17:
      v16 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8776C(v17);
    v19 = *(_QWORD *)v12;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((Il2CppClass **)v21 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_26;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_26:
      v22 = sub_1C87870(v12, _2_System_Collections_Generic_IEnumerator_T, 0);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v12, *(_QWORD *)(v22 + 8));
    if ( !action )
      sub_1C372B4(v23);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      v23,
      v24,
      action->fields.method);
  }
  v25 = *(_QWORD *)v12;
  v26 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_34;
    }
    v28 = v25 + 16LL * *v27 + 312;
  }
  else
  {
LABEL_34:
    v28 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v28)(v12, *(_QWORD *)(v28 + 8));
}


void BasicHelper__ForEach___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_30D4230 *method)
{
  const MethodInfo_30D4230_RGCTXs *rgctx_data; // x27
  size_t actualSize; // x22
  long double v8; // q0
  __int64 _0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x19
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  long double v19; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  void *v25; // x0
  const MethodInfo_30D4230_RGCTXs *v26; // x8
  char *v27; // x4
  MethodInfo *_6_System_Action_T__Invoke; // x1
  Il2CppMethodPointer methodPointer; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  _QWORD v34[2]; // [xsp+0h] [xbp-10h] BYREF

  v34[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C877C8(method);
      rgctx_data = method->rgctx_data;
    }
  }
  actualSize = rgctx_data->_4_T->_2.actualSize;
  memset((char *)v34 - ((actualSize + 15) & 0x1FFFFFFF0LL), 0, actualSize);
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = (__int64)rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*(&rgctx_data->_0_System_Collections_Generic_IEnumerable_T_->_2.bitflags2 + 2) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = sub_1C8776C(v8);
    klass = sequence->klass;
    v11 = *(unsigned __int16 *)&sequence->klass->_2.rank;
    if ( *(_WORD *)&sequence->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((_QWORD *)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_11;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v13 = sub_1C87870(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v13)(
            sequence,
            *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_1C372B4(0);
    while ( 1 )
    {
      v15 = *(_QWORD *)v14;
      v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_18;
        }
        v18 = v15 + 16LL * *v17 + 312;
      }
      else
      {
LABEL_18:
        v18 = sub_1C87870(v14, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*(&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8776C(v19);
      v21 = *(_QWORD *)v14;
      v22 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((Il2CppClass **)v23 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_27;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_27:
        v24 = sub_1C87870(v14, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v34[0] = (char *)v34 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *, _QWORD))(*(_QWORD *)(v24 + 8) + 16LL))(
        *(_QWORD *)(*(_QWORD *)(v24 + 8) + 8LL),
        *(_QWORD *)(v24 + 8),
        v14,
        v34,
        v34[0]);
      memcpy(
        (char *)v34 - ((actualSize + 15) & 0x1FFFFFFF0LL),
        (char *)v34 - ((actualSize + 15) & 0x1FFFFFFF0LL),
        actualSize);
      v25 = memcpy(
              (char *)v34 - ((actualSize + 15) & 0x1FFFFFFF0LL),
              (char *)v34 - ((actualSize + 15) & 0x1FFFFFFF0LL),
              actualSize);
      if ( !action )
        sub_1C372B4(v25);
      v26 = method->rgctx_data;
      v27 = (char *)v34 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      if ( (v26->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v27 = *(char **)((char *)v34 - ((actualSize + 15) & 0x1FFFFFFF0LL));
      _6_System_Action_T__Invoke = v26->_6_System_Action_T__Invoke;
      methodPointer = _6_System_Action_T__Invoke->methodPointer;
      v34[0] = v27;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Action_T__o *, _QWORD *))_6_System_Action_T__Invoke->invoker_method)(
        methodPointer,
        _6_System_Action_T__Invoke,
        action,
        v34);
    }
    v30 = *(_QWORD *)v14;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_37;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_37:
      v33 = sub_1C87870(v14, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v14, *(_QWORD *)(v33 + 8));
  }
}


void BasicHelper__ForEach___Il2CppFullySharedGenericType__51201536(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_int__T__o *action,
        const MethodInfo_30D4600 *method)
{
  unsigned __int64 StatusReg; // x27
  const MethodInfo_30D4600_RGCTXs *rgctx_data; // x26
  size_t actualSize; // x22
  long double v9; // q0
  __int64 _0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 (__fastcall *v16)(System_Collections_Generic_IEnumerable_T__o *, __int64); // x8
  __int64 v17; // x19
  int i; // w27
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  long double v23; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  void *v29; // x0
  const MethodInfo_30D4600_RGCTXs *v30; // x8
  char *v31; // x4
  MethodInfo *_6_System_Action_int__T__Invoke; // x1
  Il2CppMethodPointer methodPointer; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  _QWORD v38[2]; // [xsp+0h] [xbp-30h] BYREF
  _QWORD v39[2]; // [xsp+10h] [xbp-20h] BYREF
  int v40; // [xsp+24h] [xbp-Ch] BYREF
  __int64 v41; // [xsp+28h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v41 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C877C8(method);
      rgctx_data = method->rgctx_data;
    }
  }
  actualSize = rgctx_data->_4_T->_2.actualSize;
  memset((char *)v38 - ((actualSize + 15) & 0x1FFFFFFF0LL), 0, actualSize);
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = (__int64)rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*(&rgctx_data->_0_System_Collections_Generic_IEnumerable_T_->_2.bitflags2 + 2) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = sub_1C8776C(v9);
    klass = sequence->klass;
    v12 = *(unsigned __int16 *)&sequence->klass->_2.rank;
    if ( *(_WORD *)&sequence->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((_QWORD *)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_11;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v14 = sub_1C87870(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v16 = *(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, __int64))v14;
    v15 = *(_QWORD *)(v14 + 8);
    v38[1] = StatusReg;
    v17 = v16(sequence, v15);
    if ( !v17 )
      sub_1C372B4(0);
    for ( i = 0; ; ++i )
    {
      v19 = *(_QWORD *)v17;
      v20 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
      {
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_19;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_19:
        v22 = sub_1C87870(v17, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v17, *(_QWORD *)(v22 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*(&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8776C(v23);
      v25 = *(_QWORD *)v17;
      v26 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
      {
        v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *((Il2CppClass **)v27 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v26;
          v27 += 4;
          if ( !v26 )
            goto LABEL_28;
        }
        v28 = v25 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_28:
        v28 = sub_1C87870(v17, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v39[0] = (char *)v38 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *, _QWORD))(*(_QWORD *)(v28 + 8) + 16LL))(
        *(_QWORD *)(*(_QWORD *)(v28 + 8) + 8LL),
        *(_QWORD *)(v28 + 8),
        v17,
        v39,
        v39[0]);
      memcpy(
        (char *)v38 - ((actualSize + 15) & 0x1FFFFFFF0LL),
        (char *)v38 - ((actualSize + 15) & 0x1FFFFFFF0LL),
        actualSize);
      v29 = memcpy(
              (char *)v38 - ((actualSize + 15) & 0x1FFFFFFF0LL),
              (char *)v38 - ((actualSize + 15) & 0x1FFFFFFF0LL),
              actualSize);
      if ( !action )
        sub_1C372B4(v29);
      v30 = method->rgctx_data;
      v31 = (char *)v38 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      if ( (v30->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v31 = *(char **)((char *)v38 - ((actualSize + 15) & 0x1FFFFFFF0LL));
      _6_System_Action_int__T__Invoke = v30->_6_System_Action_int__T__Invoke;
      methodPointer = _6_System_Action_int__T__Invoke->methodPointer;
      v40 = i;
      v39[0] = &v40;
      v39[1] = v31;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Action_int__T__o *, _QWORD *))_6_System_Action_int__T__Invoke->invoker_method)(
        methodPointer,
        _6_System_Action_int__T__Invoke,
        action,
        v39);
    }
    v34 = *(_QWORD *)v17;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_38;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_38:
      v37 = sub_1C87870(v17, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v37)(v17, *(_QWORD *)(v37 + 8));
  }
}


void BasicHelper__ForEach_int_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_30D2FE8 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  long double v17; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0

  if ( method->rgctx_data
    || (sub_1C37058(&System_IDisposable_TypeInfo),
        sub_1C37058(&System_Collections_IEnumerator_TypeInfo),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C877C8(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C8776C(v3);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)&sequence->klass->_2.rank;
  if ( *(_WORD *)&sequence->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v11 = sub_1C87870(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
          sequence,
          *(_QWORD *)(v11 + 8));
  if ( !v12 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_17:
      v16 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8776C(v17);
    v19 = *(_QWORD *)v12;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((Il2CppClass **)v21 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_26;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_26:
      v22 = sub_1C87870(v12, _2_System_Collections_Generic_IEnumerator_T, 0);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v12, *(_QWORD *)(v22 + 8));
    if ( !action )
      sub_1C372B4(v23);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      (unsigned int)v23,
      action->fields.method);
  }
  v24 = *(_QWORD *)v12;
  v25 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_34;
    }
    v27 = v24 + 16LL * *v26 + 312;
  }
  else
  {
LABEL_34:
    v27 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v27)(v12, *(_QWORD *)(v27 + 8));
}


void BasicHelper__ForEach_int__51196648(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_int__T__o *action,
        const MethodInfo_30D32E8 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  unsigned int i; // w22
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  long double v18; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0

  if ( method->rgctx_data
    || (sub_1C37058(&System_IDisposable_TypeInfo),
        sub_1C37058(&System_Collections_IEnumerator_TypeInfo),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C877C8(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C8776C(v3);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)&sequence->klass->_2.rank;
  if ( *(_WORD *)&sequence->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v11 = sub_1C87870(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
          sequence,
          *(_QWORD *)(v11 + 8));
  if ( !v12 )
    sub_1C372B4(0);
  for ( i = 0; ; ++i )
  {
    v14 = *(_QWORD *)v12;
    v15 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_18;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_18:
      v17 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v12, *(_QWORD *)(v17 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8776C(v18);
    v20 = *(_QWORD *)v12;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((Il2CppClass **)v22 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_27;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_27:
      v23 = sub_1C87870(v12, _2_System_Collections_Generic_IEnumerator_T, 0);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v12, *(_QWORD *)(v23 + 8));
    if ( !action )
      sub_1C372B4(v24);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      i,
      (unsigned int)v24,
      action->fields.method);
  }
  v25 = *(_QWORD *)v12;
  v26 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_35;
    }
    v28 = v25 + 16LL * *v27 + 312;
  }
  else
  {
LABEL_35:
    v28 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v28)(v12, *(_QWORD *)(v28 + 8));
}


void BasicHelper__ForEach_long_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_int__T__o *action,
        const MethodInfo_30D3900 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  unsigned int i; // w22
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  long double v18; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0

  if ( method->rgctx_data
    || (sub_1C37058(&System_IDisposable_TypeInfo),
        sub_1C37058(&System_Collections_IEnumerator_TypeInfo),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C877C8(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C8776C(v3);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)&sequence->klass->_2.rank;
  if ( *(_WORD *)&sequence->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v11 = sub_1C87870(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
          sequence,
          *(_QWORD *)(v11 + 8));
  if ( !v12 )
    sub_1C372B4(0);
  for ( i = 0; ; ++i )
  {
    v14 = *(_QWORD *)v12;
    v15 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_18;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_18:
      v17 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v12, *(_QWORD *)(v17 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8776C(v18);
    v20 = *(_QWORD *)v12;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((Il2CppClass **)v22 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_27;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_27:
      v23 = sub_1C87870(v12, _2_System_Collections_Generic_IEnumerator_T, 0);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v12, *(_QWORD *)(v23 + 8));
    if ( !action )
      sub_1C372B4(v24);
    ((void (__fastcall *)(intptr_t, _QWORD, __int64, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      i,
      v24,
      action->fields.method);
  }
  v25 = *(_QWORD *)v12;
  v26 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_35;
    }
    v28 = v25 + 16LL * *v27 + 312;
  }
  else
  {
LABEL_35:
    v28 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v28)(v12, *(_QWORD *)(v28 + 8));
}


void BasicHelper__ForEach_object_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_30D3C18 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  long double v17; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0

  if ( method->rgctx_data
    || (sub_1C37058(&System_IDisposable_TypeInfo),
        sub_1C37058(&System_Collections_IEnumerator_TypeInfo),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C877C8(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C8776C(v3);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)&sequence->klass->_2.rank;
  if ( *(_WORD *)&sequence->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v11 = sub_1C87870(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
          sequence,
          *(_QWORD *)(v11 + 8));
  if ( !v12 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_17:
      v16 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8776C(v17);
    v19 = *(_QWORD *)v12;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((Il2CppClass **)v21 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_26;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_26:
      v22 = sub_1C87870(v12, _2_System_Collections_Generic_IEnumerator_T, 0);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v12, *(_QWORD *)(v22 + 8));
    if ( !action )
      sub_1C372B4(v23);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      v23,
      action->fields.method);
  }
  v24 = *(_QWORD *)v12;
  v25 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_34;
    }
    v27 = v24 + 16LL * *v26 + 312;
  }
  else
  {
LABEL_34:
    v27 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v27)(v12, *(_QWORD *)(v27 + 8));
}


void BasicHelper__ForEach_object__51199768(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_int__T__o *action,
        const MethodInfo_30D3F18 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  unsigned int i; // w22
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  long double v18; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0

  if ( method->rgctx_data
    || (sub_1C37058(&System_IDisposable_TypeInfo),
        sub_1C37058(&System_Collections_IEnumerator_TypeInfo),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C877C8(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C8776C(v3);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)&sequence->klass->_2.rank;
  if ( *(_WORD *)&sequence->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v11 = sub_1C87870(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
          sequence,
          *(_QWORD *)(v11 + 8));
  if ( !v12 )
    sub_1C372B4(0);
  for ( i = 0; ; ++i )
  {
    v14 = *(_QWORD *)v12;
    v15 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_18;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_18:
      v17 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v12, *(_QWORD *)(v17 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8776C(v18);
    v20 = *(_QWORD *)v12;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((Il2CppClass **)v22 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_27;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_27:
      v23 = sub_1C87870(v12, _2_System_Collections_Generic_IEnumerator_T, 0);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v12, *(_QWORD *)(v23 + 8));
    if ( !action )
      sub_1C372B4(v24);
    ((void (__fastcall *)(intptr_t, _QWORD, __int64, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      i,
      v24,
      action->fields.method);
  }
  v25 = *(_QWORD *)v12;
  v26 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_35;
    }
    v28 = v25 + 16LL * *v27 + 312;
  }
  else
  {
LABEL_35:
    v28 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v28)(v12, *(_QWORD *)(v28 + 8));
}


Il2CppObject *BasicHelper__GetOrAddComponent_object_(UnityEngine_Component_o *self, const MethodInfo_30D535C *method)
{
  _BOOL8 v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !method->rgctx_data )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C877C8(method);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( v4 )
    return 0;
  if ( !self )
    sub_1C372B4(v4);
  gameObject = UnityEngine_Component__get_gameObject(self, 0);
  return GameObjectHelper__GetOrAddComponent_object_(
           gameObject,
           (const MethodInfo_3140D20 *)method->rgctx_data->_1_GameObjectHelper_GetOrAddComponent_T_);
}


int32_t BasicHelper__GetValue_Int32Enum__Int32Enum_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int32_t def,
        const MethodInfo_30D5AAC *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C877C8(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
         key,
         (const MethodInfo_342A87C *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
             key,
             (const MethodInfo_342A5F4 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


int32_t BasicHelper__GetValue_Int32Enum__int_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int32_t def,
        const MethodInfo_30D5A28 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C877C8(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_Int32Enum__int___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
         key,
         (const MethodInfo_3427A9C *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_Int32Enum__int___get_Item(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
             key,
             (const MethodInfo_3427814 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


Il2CppObject *BasicHelper__GetValue_Int32Enum__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        Il2CppObject *def,
        const MethodInfo_30D5B30 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C877C8(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
         key,
         (const MethodInfo_342D814 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
             key,
             (const MethodInfo_342D580 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o BasicHelper__GetValue___Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        const MethodInfo_30D56B4 *method)
{
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  const MethodInfo_30D56B4_RGCTXs *rgctx_data; // x8
  Il2CppClass *_0_T; // x8
  size_t actualSize; // x20
  Il2CppObject *Item; // x21
  long double v13; // q0
  Il2CppClass *v14; // x1
  char *v15; // x1
  void *v16; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v17; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v18; // x0
  void *v19; // x1
  _QWORD v20[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  monitor = def.monitor;
  klass = def.klass;
  v20[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v20[0] = def.klass;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C877C8(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  actualSize = _0_T->_2.actualSize;
  if ( !dic )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)dic,
          (Il2CppObject *)key,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    _0_T = method->rgctx_data->_0_T;
LABEL_10:
    if ( (_0_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v17 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v20;
    else
      v17 = klass;
    memcpy((char *)v20 - ((actualSize + 15) & 0x1FFFFFFF0LL), v17, actualSize);
    v16 = monitor;
    v15 = (char *)v20 - ((actualSize + 15) & 0x1FFFFFFF0LL);
    goto LABEL_14;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)dic,
           (Il2CppObject *)key,
           (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v14 = method->rgctx_data->_0_T;
  if ( (*(&v14->_2.bitflags2 + 2) & 1) == 0 )
    v14 = (Il2CppClass *)sub_1C8776C(v13);
  v15 = (char *)sub_1C371A4(Item, v14, (char *)v20 - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v16 = monitor;
LABEL_14:
  v18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v16, v15, actualSize);
  result.monitor = v19;
  result.klass = v18;
  return result;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o BasicHelper__GetValue___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        const MethodInfo_30D5DFC *method)
{
  _QWORD *monitor; // x25
  void **v5; // x23
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v6; // x24
  _QWORD *v7; // x19
  __int64 v9; // x9
  __int64 v10; // x8
  size_t v11; // x27
  size_t v12; // x20
  char *v13; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v14; // x1
  __int64 *v15; // x1
  __int64 v16; // x0
  char *v17; // x8
  _QWORD *v18; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v19; // x1
  __int64 *v20; // x1
  __int64 v21; // x0
  void **v22; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v23; // x0
  void *v24; // x1
  __int64 v25; // [xsp+0h] [xbp-40h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+8h] [xbp-38h]
  void *v27; // [xsp+10h] [xbp-30h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v28; // [xsp+18h] [xbp-28h] BYREF
  char *v29; // [xsp+20h] [xbp-20h] BYREF
  char *v30; // [xsp+28h] [xbp-18h]
  _BYTE v31[4]; // [xsp+34h] [xbp-Ch] BYREF
  __int64 v32; // [xsp+38h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  klass = def.klass;
  monitor = def.monitor;
  v5 = (void **)key.monitor;
  v6 = key.klass;
  v32 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v27 = key.monitor;
  v28 = key.klass;
  v7 = (_QWORD *)*((_QWORD *)def.monitor + 7);
  if ( !v7 )
  {
    sub_1C877C8(def.monitor);
    v7 = (_QWORD *)monitor[7];
  }
  v9 = v7[1];
  v10 = v7[4];
  v11 = *(unsigned int *)(v9 + 252);
  v12 = *(unsigned int *)(v10 + 252);
  v13 = (char *)&v25 - ((v11 + 15) & 0x1FFFFFFF0LL);
  if ( dic )
  {
    if ( *(int *)(v9 + 40) >= 0 )
      v14 = &v28;
    else
      v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v6;
    memcpy((char *)&v25 - ((v11 + 15) & 0x1FFFFFFF0LL), v14, *(unsigned int *)(v9 + 252));
    v15 = (__int64 *)v7[2];
    v16 = *v15;
    v17 = (char *)&v25 - ((v11 + 15) & 0x1FFFFFFF0LL);
    if ( (*(_DWORD *)(v7[1] + 40LL) & 0x80000000) == 0 )
      v17 = *(char **)v13;
    v29 = v17;
    ((void (__fastcall *)(__int64, __int64 *, System_Collections_Generic_Dictionary_K__V__o *, char **, _BYTE *))v15[2])(
      v16,
      v15,
      dic,
      &v29,
      v31);
    v18 = (_QWORD *)monitor[7];
    if ( v31[0] )
    {
      if ( *(int *)(v18[1] + 40LL) >= 0 )
        v19 = &v28;
      else
        v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v6;
      memcpy((char *)&v25 - ((v11 + 15) & 0x1FFFFFFF0LL), v19, v11);
      v20 = (__int64 *)v18[3];
      v21 = *v20;
      if ( (*(_DWORD *)(v18[1] + 40LL) & 0x80000000) == 0 )
        v13 = *(char **)v13;
      v29 = v13;
      v30 = (char *)&v25 - ((v12 + 15) & 0x1FFFFFFF0LL);
      ((void (__fastcall *)(__int64, __int64 *, System_Collections_Generic_Dictionary_K__V__o *, char **, char *))v20[2])(
        v21,
        v20,
        dic,
        &v29,
        v30);
      goto LABEL_21;
    }
    v10 = v18[4];
  }
  if ( *(int *)(v10 + 40) >= 0 )
    v22 = &v27;
  else
    v22 = v5;
  memcpy((char *)&v25 - ((v12 + 15) & 0x1FFFFFFF0LL), v22, v12);
LABEL_21:
  v23 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    klass,
                                                                    (char *)&v25 - ((v12 + 15) & 0x1FFFFFFF0LL),
                                                                    v12);
  result.monitor = v24;
  result.klass = v23;
  return result;
}


double BasicHelper__GetValue_double_(
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        double def,
        const MethodInfo_30D53F4 *method)
{
  Il2CppObject *Item; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  long double v11; // q0
  const MethodInfo_30D53F4_RGCTXs *rgctx_data; // x8
  Il2CppObject *v13; // x19
  _QWORD *p_image; // x1
  double result; // d0
  System_Collections_Generic_Dictionary_string__object__o *v16; // x0
  System_String_o *v17; // x1
  int64_t v18; // x2
  const MethodInfo_30D54E0 *v19; // x3

  if ( method->rgctx_data
    || (sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__),
        sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__),
        method->rgctx_data) )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C877C8(method);
    if ( !dic )
      return def;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)dic,
          (Il2CppObject *)key,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return def;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)dic,
           (Il2CppObject *)key,
           (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  rgctx_data = method->rgctx_data;
  v13 = Item;
  p_image = &rgctx_data->_0_T->_1.image;
  if ( (*(&rgctx_data->_0_T->_2.bitflags2 + 2) & 1) == 0 )
  {
    Item = (Il2CppObject *)sub_1C8776C(v11);
    p_image = &Item->klass;
  }
  if ( !v13 )
    sub_1C372B4(Item);
  if ( v13->klass->_1.element_class == (Il2CppClass *)p_image[8] )
    return *(double *)j_il2cpp_object_unbox_0(v13, p_image, v9, v10);
  sub_1C37574(v13);
  BasicHelper__GetValue_long_(v16, v17, v18, v19);
  return result;
}


int32_t BasicHelper__GetValue_int__Int32Enum_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int32_t def,
        const MethodInfo_30D589C *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C877C8(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_int__Int32Enum___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
         key,
         (const MethodInfo_33F4AB0 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_int__Int32Enum___get_Item(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
             key,
             (const MethodInfo_33F4828 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


int32_t BasicHelper__GetValue_int__int_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int32_t def,
        const MethodInfo_30D5818 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C877C8(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         (System_Collections_Generic_Dictionary_int__int__o *)dic,
         key,
         (const MethodInfo_33F1CB8 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_int__int___get_Item(
             (System_Collections_Generic_Dictionary_int__int__o *)dic,
             key,
             (const MethodInfo_33F1A30 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


int64_t BasicHelper__GetValue_int__long_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int64_t def,
        const MethodInfo_30D5920 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C877C8(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_int__long___ContainsKey(
         (System_Collections_Generic_Dictionary_int__long__o *)dic,
         key,
         (const MethodInfo_33F78C0 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_int__long___get_Item(
             (System_Collections_Generic_Dictionary_int__long__o *)dic,
             key,
             (const MethodInfo_33F762C *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


Il2CppObject *BasicHelper__GetValue_int__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        Il2CppObject *def,
        const MethodInfo_30D59A4 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C877C8(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)dic,
         key,
         (const MethodInfo_33FA778 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_int__object___get_Item(
             (System_Collections_Generic_Dictionary_int__object__o *)dic,
             key,
             (const MethodInfo_33FA4E4 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


int64_t BasicHelper__GetValue_long_(
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        int64_t def,
        const MethodInfo_30D54E0 *method)
{
  Il2CppObject *Item; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  long double v11; // q0
  const MethodInfo_30D54E0_RGCTXs *rgctx_data; // x8
  Il2CppObject *v13; // x19
  _QWORD *p_image; // x1
  System_Collections_Generic_Dictionary_string__object__o *v16; // x0
  System_String_o *v17; // x1
  Il2CppObject *v18; // x2
  const MethodInfo_30D55CC *v19; // x3

  if ( method->rgctx_data
    || (sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__),
        sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__),
        method->rgctx_data) )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C877C8(method);
    if ( !dic )
      return def;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)dic,
          (Il2CppObject *)key,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return def;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)dic,
           (Il2CppObject *)key,
           (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  rgctx_data = method->rgctx_data;
  v13 = Item;
  p_image = &rgctx_data->_0_T->_1.image;
  if ( (*(&rgctx_data->_0_T->_2.bitflags2 + 2) & 1) == 0 )
  {
    Item = (Il2CppObject *)sub_1C8776C(v11);
    p_image = &Item->klass;
  }
  if ( !v13 )
    sub_1C372B4(Item);
  if ( v13->klass->_1.element_class == (Il2CppClass *)p_image[8] )
    return *(_QWORD *)j_il2cpp_object_unbox_0(v13, p_image, v9, v10);
  sub_1C37574(v13);
  return (int64_t)BasicHelper__GetValue_object_(v16, v17, v18, v19);
}


int32_t BasicHelper__GetValue_long__int_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int64_t key,
        int32_t def,
        const MethodInfo_30D5BB4 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C877C8(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_long__int___ContainsKey(
         (System_Collections_Generic_Dictionary_long__int__o *)dic,
         key,
         (const MethodInfo_34398AC *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_long__int___get_Item(
             (System_Collections_Generic_Dictionary_long__int__o *)dic,
             key,
             (const MethodInfo_3439618 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


Il2CppObject *BasicHelper__GetValue_object_(
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        Il2CppObject *def,
        const MethodInfo_30D55CC *method)
{
  const MethodInfo_30D55CC *_0_T; // x19
  long double v8; // q0

  _0_T = method;
  if ( !method->rgctx_data )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !_0_T->rgctx_data )
      goto LABEL_10;
  }
  if ( dic )
  {
    while ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)dic,
              (Il2CppObject *)key,
              (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      key = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                 (System_Collections_Generic_Dictionary_object__object__o *)dic,
                                 (Il2CppObject *)key,
                                 (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      _0_T = (const MethodInfo_30D55CC *)_0_T->rgctx_data->_0_T;
      if ( (BYTE5(_0_T[3].return_type) & 1) == 0 )
        _0_T = (const MethodInfo_30D55CC *)sub_1C8776C(v8);
      if ( !key )
        return 0;
      def = (Il2CppObject *)sub_1C37194(key, _0_T);
      if ( !def )
      {
        sub_1C37574(key);
LABEL_10:
        sub_1C877C8(_0_T);
        if ( dic )
          continue;
      }
      return def;
    }
  }
  return def;
}


UnityEngine_Color_o BasicHelper__GetValue_object__Color_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        Il2CppObject *key,
        UnityEngine_Color_o def,
        const MethodInfo_30D5CD8 *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  float v11; // s2
  float v12; // s3
  float v13; // s0
  float v14; // s1
  UnityEngine_Color_o Item; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = def.fields.a;
  b = def.fields.b;
  g = def.fields.g;
  r = def.fields.r;
  if ( !method->rgctx_data )
    sub_1C877C8(method);
  if ( dic
    && System_Collections_Generic_Dictionary_object__Color___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
         key,
         (const MethodInfo_345495C *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    Item = System_Collections_Generic_Dictionary_object__Color___get_Item(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
             key,
             (const MethodInfo_34546B4 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
    r = Item.fields.r;
    g = Item.fields.g;
    b = Item.fields.b;
    a = Item.fields.a;
  }
  v11 = b;
  v12 = a;
  v13 = r;
  v14 = g;
  result.fields.a = v12;
  result.fields.b = v11;
  result.fields.g = v14;
  result.fields.r = v13;
  return result;
}


System_Nullable_Color__o *BasicHelper__GetValue_object__Nullable_Color__(
        System_Nullable_Color__o *__return_ptr retstr,
        System_Collections_Generic_Dictionary_K__V__o *dic,
        Il2CppObject *key,
        System_Nullable_Color__o *def,
        const MethodInfo_30D5C38 *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v8; // x21
  float a; // w8
  __int128 v11; // q0
  System_Nullable_Color__o v13; // [xsp+8h] [xbp-48h] BYREF

  v8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic;
  if ( method->rgctx_data )
  {
    if ( !dic )
      goto LABEL_7;
  }
  else
  {
    dic = (System_Collections_Generic_Dictionary_K__V__o *)sub_1C877C8(method);
    if ( !v8 )
    {
LABEL_7:
      a = def->fields.value.fields.a;
      v11 = *(_OWORD *)&def->fields.hasValue;
      goto LABEL_8;
    }
  }
  dic = (System_Collections_Generic_Dictionary_K__V__o *)System_Collections_Generic_Dictionary_object__Nullable_Color____ContainsKey(
                                                           v8,
                                                           key,
                                                           (const MethodInfo_344848C *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey);
  if ( ((unsigned __int8)dic & 1) == 0 )
    goto LABEL_7;
  dic = (System_Collections_Generic_Dictionary_K__V__o *)System_Collections_Generic_Dictionary_object__Nullable_Color____get_Item(
                                                           &v13,
                                                           v8,
                                                           key,
                                                           (const MethodInfo_34480D4 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  a = v13.fields.value.fields.a;
  v11 = *(_OWORD *)&v13.fields.hasValue;
LABEL_8:
  retstr->fields.value.fields.a = a;
  *(_OWORD *)&retstr->fields.hasValue = v11;
  return (System_Nullable_Color__o *)dic;
}


Il2CppObject *BasicHelper__GetValue_object__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        Il2CppObject *key,
        Il2CppObject *def,
        const MethodInfo_30D5D78 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C877C8(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         key,
         (const MethodInfo_3463824 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)dic,
             key,
             (const MethodInfo_34635B0 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


UnityEngine_Color_o BasicHelper__IndexValue_Color_(
        UnityEngine_Color_array *array,
        int32_t index,
        UnityEngine_Color_o def,
        const MethodInfo_30D6060 *method)
{
  int32_t max_length; // w8

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      max_length = array->max_length;
      if ( max_length > index )
      {
        if ( max_length <= (unsigned int)index )
          sub_1C372BC(array);
        return array->m_Items[index];
      }
    }
  }
  return def;
}


int32_t BasicHelper__IndexValue_Int32Enum_(
        System_Int32Enum_array *array,
        int32_t index,
        int32_t def,
        const MethodInfo_30D6148 *method)
{
  int32_t max_length; // w8

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      max_length = array->max_length;
      if ( max_length > index )
      {
        if ( max_length <= (unsigned int)index )
          sub_1C372BC(array);
        return array->m_Items[index];
      }
    }
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_KeyValuePair_object__int__o BasicHelper__IndexValue_KeyValuePair_object__int__(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        System_Collections_Generic_KeyValuePair_object__int__o def,
        const MethodInfo_30D5FA0 *method)
{
  __int64 v5; // x19
  Il2CppObject *key; // x21
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_KeyValuePair_object__int__o Item; // kr00_16
  System_Collections_Generic_KeyValuePair_object__int__o result; // 0:x0.16

  v5 = *(_QWORD *)&def.fields.value;
  key = def.fields.key;
  if ( method->rgctx_data )
  {
    if ( !list )
      goto LABEL_8;
  }
  else
  {
    sub_1C877C8(method);
    if ( !list )
    {
LABEL_8:
      v9 = key;
      v10 = v5;
      goto LABEL_9;
    }
  }
  if ( index < 0 || list->fields._size <= index )
    goto LABEL_8;
  Item = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
           list,
           index,
           (const MethodInfo_37205E4 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
  v10 = *(_QWORD *)&Item.fields.value;
  v9 = Item.fields.key;
LABEL_9:
  *(_QWORD *)&result.fields.value = v10;
  result.fields.key = v9;
  return result;
}


ListViewSort_BonusFilterInfo_o *BasicHelper__IndexValue_ListViewSort_BonusFilterInfo_(
        ListViewSort_BonusFilterInfo_o *__return_ptr retstr,
        ListViewSort_BonusFilterInfo_array *array,
        int32_t index,
        ListViewSort_BonusFilterInfo_o *def,
        const MethodInfo_30D6500 *method)
{
  int32_t max_length; // w9
  __int128 v6; // q0

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      max_length = array->max_length;
      if ( max_length > index )
      {
        if ( max_length <= (unsigned int)index )
          sub_1C372BC(array);
        def = &array->m_Items[index];
      }
    }
  }
  v6 = *(_OWORD *)&def->fields.priority;
  retstr->fields.buttonText = def->fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = v6;
  return (ListViewSort_BonusFilterInfo_o *)array;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o BasicHelper__IndexValue___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        int32_t index,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        const MethodInfo_30D63FC *method)
{
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x22
  const MethodInfo_30D63FC_RGCTXs *rgctx_data; // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v8; // x24
  Il2CppClass *_1_T; // x8
  size_t actualSize; // x20
  int32_t max_length; // w9
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v13; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v14; // x0
  void *v15; // x1
  _QWORD v16[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  monitor = def.monitor;
  klass = def.klass;
  v16[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v16[0] = def.klass;
  rgctx_data = method->rgctx_data;
  v8 = array;
  if ( !rgctx_data )
  {
    array = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  _1_T = rgctx_data->_1_T;
  actualSize = _1_T->_2.actualSize;
  if ( !v8 || index < 0 || (max_length = v8->max_length, max_length <= index) )
  {
    if ( (_1_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v13 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v16;
    else
      v13 = klass;
  }
  else
  {
    if ( max_length <= (unsigned int)index )
      sub_1C372BC(array);
    v13 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)((char *)v8->m_Items
                                                                   + (unsigned int)v8->obj.klass->_2.native_size
                                                                   * (unsigned __int64)(unsigned int)index);
  }
  memcpy((char *)v16 - ((actualSize + 15) & 0x1FFFFFFF0LL), v13, actualSize);
  v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    monitor,
                                                                    (char *)v16 - ((actualSize + 15) & 0x1FFFFFFF0LL),
                                                                    actualSize);
  result.monitor = v15;
  result.klass = v14;
  return result;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o BasicHelper__IndexValue___Il2CppFullySharedGenericType__51208920(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        const MethodInfo_30D62D8 *method)
{
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  const MethodInfo_30D62D8_RGCTXs *rgctx_data; // x8
  Il2CppClass *_3_T; // x9
  size_t actualSize; // x20
  MethodInfo *_2_System_Collections_Generic_List_T__get_Item; // x1
  void (*methodPointer)(); // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v14; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v15; // x0
  void *v16; // x1
  __int64 v17; // [xsp+0h] [xbp-30h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t *v19; // [xsp+10h] [xbp-20h] BYREF
  char *v20; // [xsp+18h] [xbp-18h]
  int32_t v21; // [xsp+24h] [xbp-Ch] BYREF
  __int64 v22; // [xsp+28h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  monitor = def.monitor;
  klass = def.klass;
  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v18 = def.klass;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  _3_T = rgctx_data->_3_T;
  actualSize = _3_T->_2.actualSize;
  if ( list && (index & 0x80000000) == 0 )
  {
    if ( ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list) > index )
    {
      _2_System_Collections_Generic_List_T__get_Item = method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item;
      methodPointer = _2_System_Collections_Generic_List_T__get_Item->methodPointer;
      v21 = index;
      v19 = &v21;
      v20 = (char *)&v17 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      _2_System_Collections_Generic_List_T__get_Item->invoker_method(
        methodPointer,
        _2_System_Collections_Generic_List_T__get_Item,
        list,
        (void **)&v19,
        v20);
      goto LABEL_12;
    }
    _3_T = method->rgctx_data->_3_T;
  }
  if ( (_3_T->_1.byval_arg.bits & 0x80000000) == 0 )
    v14 = &v18;
  else
    v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v17 - ((actualSize + 15) & 0x1FFFFFFF0LL), v14, actualSize);
LABEL_12:
  v15 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    monitor,
                                                                    (char *)&v17 - ((actualSize + 15) & 0x1FFFFFFF0LL),
                                                                    actualSize);
  result.monitor = v16;
  result.klass = v15;
  return result;
}


bool BasicHelper__IndexValue_bool_(
        System_Boolean_array *array,
        int32_t index,
        bool def,
        const MethodInfo_30D6024 *method)
{
  int32_t max_length; // w8

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      max_length = array->max_length;
      if ( max_length > index )
      {
        if ( max_length <= (unsigned int)index )
          sub_1C372BC(array);
        return array->m_Items[index];
      }
    }
  }
  return def;
}


float BasicHelper__IndexValue_float_(
        System_Single_array *array,
        int32_t index,
        float def,
        const MethodInfo_30D62A8 *method)
{
  int32_t max_length; // w8

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      max_length = array->max_length;
      if ( max_length > index )
      {
        if ( max_length <= (unsigned int)index )
          sub_1C372BC(array);
        return array->m_Items[index];
      }
    }
  }
  return def;
}


float BasicHelper__IndexValue_float__51208748(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        float def,
        const MethodInfo_30D622C *method)
{
  if ( method->rgctx_data )
  {
    if ( !list )
      return def;
  }
  else
  {
    sub_1C877C8(method);
    if ( !list )
      return def;
  }
  if ( (index & 0x80000000) == 0 && list->fields._size > index )
    return System_Collections_Generic_List_float___get_Item(
             (System_Collections_Generic_List_float__o *)list,
             index,
             (const MethodInfo_37C88A8 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
  return def;
}


int32_t BasicHelper__IndexValue_int_(
        System_Int32_array *array,
        int32_t index,
        int32_t def,
        const MethodInfo_30D6114 *method)
{
  int32_t max_length; // w8

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      max_length = array->max_length;
      if ( max_length > index )
      {
        if ( max_length <= (unsigned int)index )
          sub_1C372BC(array);
        return array->m_Items[index];
      }
    }
  }
  return def;
}


int32_t BasicHelper__IndexValue_int__51208344(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        int32_t def,
        const MethodInfo_30D6098 *method)
{
  if ( method->rgctx_data )
  {
    if ( !list )
      return def;
  }
  else
  {
    sub_1C877C8(method);
    if ( !list )
      return def;
  }
  if ( (index & 0x80000000) == 0 && list->fields._size > index )
    return System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)list,
             index,
             (const MethodInfo_3785D10 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
  return def;
}


Il2CppObject *BasicHelper__IndexValue_object_(
        System_Object_array *array,
        int32_t index,
        Il2CppObject *def,
        const MethodInfo_30D61F8 *method)
{
  int32_t max_length; // w8

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      max_length = array->max_length;
      if ( max_length > index )
      {
        if ( max_length <= (unsigned int)index )
          sub_1C372BC(array);
        return array->m_Items[index];
      }
    }
  }
  return def;
}


Il2CppObject *BasicHelper__IndexValue_object__51208572(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        Il2CppObject *def,
        const MethodInfo_30D617C *method)
{
  if ( method->rgctx_data )
  {
    if ( !list )
      return def;
  }
  else
  {
    sub_1C877C8(method);
    if ( !list )
      return def;
  }
  if ( (index & 0x80000000) == 0 && list->fields._size > index )
    return System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)list,
             index,
             (const MethodInfo_37A2D54 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
  return def;
}


bool BasicHelper__IsNullOrEmpty(System_Collections_ICollection_o *self, const MethodInfo *method)
{
  System_Collections_ICollection_c *klass; // x8
  __int64 v4; // x9
  int32_t *p_offset; // x10
  __int64 v6; // x0

  if ( (byte_4C449A4 & 1) == 0 )
  {
    sub_1C37058(&System_Collections_ICollection_TypeInfo);
    byte_4C449A4 = 1;
  }
  if ( !self )
    return 1;
  klass = self->klass;
  v4 = *(unsigned __int16 *)&self->klass->_2.rank;
  if ( *(_WORD *)&self->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_ICollection_c **)p_offset - 1) != System_Collections_ICollection_TypeInfo )
    {
      --v4;
      p_offset += 4;
      if ( !v4 )
        goto LABEL_8;
    }
    v6 = (__int64)&klass->vtable[*p_offset + 1];
  }
  else
  {
LABEL_8:
    v6 = sub_1C87870(self, System_Collections_ICollection_TypeInfo, 1);
  }
  return (*(int (__fastcall **)(System_Collections_ICollection_o *, _QWORD))v6)(self, *(_QWORD *)(v6 + 8)) < 1;
}


bool BasicHelper__IsValidIndex_Vector3_(
        UnityEngine_Vector3_array *array,
        int32_t index,
        const MethodInfo_30D65C8 *method)
{
  bool result; // w0

  result = 0;
  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
      return SLODWORD(array->max_length) > index;
  }
  return result;
}


bool BasicHelper__IsValidIndex___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        const MethodInfo_30D65E8 *method)
{
  bool result; // w0

  if ( !method->rgctx_data )
    sub_1C877C8(method);
  result = 0;
  if ( list )
  {
    if ( (index & 0x80000000) == 0 )
      return ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list) > index;
  }
  return result;
}


bool BasicHelper__IsValidIndex___Il2CppFullySharedGenericType__51209792(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        int32_t index,
        const MethodInfo_30D6640 *method)
{
  bool result; // w0

  result = 0;
  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
      return SLODWORD(array->max_length) > index;
  }
  return result;
}


bool BasicHelper__IsValidIndex_int_(System_Int32_array *array, int32_t index, const MethodInfo_30D6544 *method)
{
  bool result; // w0

  result = 0;
  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
      return SLODWORD(array->max_length) > index;
  }
  return result;
}


bool BasicHelper__IsValidIndex_object_(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        const MethodInfo_30D6564 *method)
{
  bool result; // w0

  if ( !method->rgctx_data )
    sub_1C877C8(method);
  result = 0;
  if ( list )
  {
    if ( (index & 0x80000000) == 0 )
      return list->fields._size > index;
  }
  return result;
}


bool BasicHelper__IsValidIndex_object__51209640(
        System_Object_array *array,
        int32_t index,
        const MethodInfo_30D65A8 *method)
{
  bool result; // w0

  result = 0;
  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
      return SLODWORD(array->max_length) > index;
  }
  return result;
}


void BasicHelper__Loop(int32_t loopCount, System_Action_int__o *action, const MethodInfo *method)
{
  unsigned int i; // w21

  if ( action && loopCount >= 1 )
  {
    for ( i = 0; i != loopCount; ++i )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))action->fields.invoke_impl)(
        action->fields.method_code,
        i,
        action->fields.method);
  }
}


bool BasicHelper__NearbyOrGreaterThan(float self, float toCompare, const MethodInfo *method)
{
  float v5; // s1
  float v6; // s2
  float v7; // s0

  if ( self >= toCompare )
    return 1;
  if ( !byte_4C3C925 )
  {
    sub_1C37058(&UnityEngine_Mathf_TypeInfo);
    byte_4C3C925 = 1;
  }
  v5 = fabsf(self);
  v6 = fabsf(toCompare);
  if ( v5 <= v6 )
    v5 = v6;
  v7 = v5 * 0.000001;
  if ( (float)(v5 * 0.000001) <= (float)(UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0) )
    v7 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  return vabds_f32(toCompare, self) < v7;
}


int32_t BasicHelper__PositiveModulo(int32_t self, int32_t residue, const MethodInfo *method)
{
  return (self % residue + residue) % residue;
}


System_Collections_IEnumerator_o *BasicHelper__RealDelayCall(
        float delay,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C449A7 & 1) == 0 )
  {
    sub_1C37058(&BasicHelper__RealDelayCall_d__38_TypeInfo);
    byte_4C449A7 = 1;
  }
  v5 = sub_1C372A4(BasicHelper__RealDelayCall_d__38_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(float *)(v5 + 32) = delay;
  *(_QWORD *)(v5 + 40) = action;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)action, v6, v7);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *BasicHelper__RealDelayCall___Il2CppFullySharedGenericType_(
        float delay,
        System_Action_T__o *action,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg,
        const MethodInfo_30D66F8 *method)
{
  _QWORD *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  __int64 *v7; // x8
  long double v8; // q8
  size_t v9; // x21
  __int64 v10; // x0
  System_Collections_IEnumerator_o *v11; // x24
  __int64 v12; // x0
  _QWORD *v13; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v14; // x1
  _QWORD v16[2]; // [xsp+0h] [xbp-18h] BYREF

  monitor = arg.monitor;
  klass = arg.klass;
  v16[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v16[0] = arg.klass;
  v7 = (__int64 *)*((_QWORD *)arg.monitor + 7);
  v8 = *(long double *)&delay;
  if ( !v7 )
  {
    sub_1C877C8(arg.monitor);
    v7 = (__int64 *)monitor[7];
  }
  v9 = *(unsigned int *)(v7[3] + 252);
  v10 = *v7;
  if ( (*(_BYTE *)(*v7 + 309) & 1) == 0 )
    v10 = sub_1C8776C(*(long double *)&delay);
  v11 = (System_Collections_IEnumerator_o *)sub_1C372A4(v10);
  v12 = (**(__int64 (__fastcall ***)(System_Collections_IEnumerator_o *, _QWORD))(monitor[7] + 8LL))(v11, 0);
  if ( !v11 )
    sub_1C372B4(v12);
  sub_1A8608C(v11, *(_QWORD *)(*(_QWORD *)monitor[7] + 128LL) + 64LL, v8);
  sub_1A85D98(v11, *(_QWORD *)(*(_QWORD *)monitor[7] + 128LL) + 96LL, action);
  v13 = (_QWORD *)monitor[7];
  if ( *(int *)(v13[3] + 40LL) >= 0 )
    v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v16;
  else
    v14 = klass;
  memcpy((char *)v16 - ((v9 + 15) & 0x1FFFFFFF0LL), v14, v9);
  sub_1C37080(v11, *(_QWORD *)(*v13 + 128LL) + 128LL, (char *)v16 - ((v9 + 15) & 0x1FFFFFFF0LL), (unsigned int)v9);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *BasicHelper__RealDelayCall_object_(
        float delay,
        System_Action_T__o *action,
        Il2CppObject *arg,
        const MethodInfo_30D6660 *method)
{
  const MethodInfo_30D6660_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__RealDelayCall_d__39_T; // x0
  BasicHelper__RealDelayCall_d__39_T__o *v10; // x0
  const MethodInfo_30D6660_RGCTXs *v11; // x8
  BasicHelper__RealDelayCall_d__39_T__o *v12; // x21
  __int64 v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__RealDelayCall_d__39_T = (__int64)rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_;
  if ( (*(&rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_2.bitflags2 + 2) & 1) == 0 )
    _0_BasicHelper__RealDelayCall_d__39_T = sub_1C8776C(*(long double *)&delay);
  v10 = (BasicHelper__RealDelayCall_d__39_T__o *)sub_1C372A4(_0_BasicHelper__RealDelayCall_d__39_T);
  v11 = method->rgctx_data;
  v12 = v10;
  BasicHelper__RealDelayCall_d__39_object____ctor(
    v10,
    0,
    (const MethodInfo_32E3D78 *)v11->_1_BasicHelper__RealDelayCall_d__39_T___ctor);
  if ( !v12 )
    sub_1C372B4(v13);
  v12->fields.delay = delay;
  v12->fields.action = action;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->fields.action, (int32_t)action, v14, v15);
  v12->fields.arg = arg;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->fields.arg, (int32_t)arg, v16, v17);
  return (System_Collections_IEnumerator_o *)v12;
}


void BasicHelper__RemoveElements___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *self,
        System_Func_T__bool__o *cond,
        const MethodInfo_30D6D74 *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  const MethodInfo_30D6D74_RGCTXs *rgctx_data; // x8
  _QWORD *v7; // x22
  int v8; // w23
  MethodInfo *_3_System_Collections_Generic_List_T__get_Item; // x1
  Il2CppMethodPointer methodPointer; // x0
  const MethodInfo_30D6D74_RGCTXs *v11; // x8
  _QWORD *v12; // x9
  MethodInfo *_5_System_Func_T__bool__Invoke; // x1
  void (*v14)(); // x0
  _QWORD v15[2]; // [xsp+0h] [xbp-20h] BYREF
  int v16; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v17; // [xsp+18h] [xbp-8h]

  v5 = self;
  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    self = (System_Collections_Generic_List_T__o *)sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  v7 = (_QWORD *)((char *)v15 - ((rgctx_data->_4_T->_2.actualSize + 15LL) & 0x1FFFFFFF0LL));
  if ( !v5 )
    goto LABEL_12;
  v8 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(v5)
     - 1;
  if ( v8 >= 0 )
  {
    while ( 1 )
    {
      _3_System_Collections_Generic_List_T__get_Item = method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item;
      methodPointer = _3_System_Collections_Generic_List_T__get_Item->methodPointer;
      v16 = v8;
      v15[0] = &v16;
      v15[1] = v7;
      self = (System_Collections_Generic_List_T__o *)((__int64 (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, _QWORD *, _QWORD *))_3_System_Collections_Generic_List_T__get_Item->invoker_method)(
                                                       methodPointer,
                                                       _3_System_Collections_Generic_List_T__get_Item,
                                                       v5,
                                                       v15,
                                                       v7);
      if ( !cond )
        break;
      v11 = method->rgctx_data;
      v12 = v7;
      if ( (v11->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v12 = (_QWORD *)*v7;
      _5_System_Func_T__bool__Invoke = v11->_5_System_Func_T__bool__Invoke;
      v14 = _5_System_Func_T__bool__Invoke->methodPointer;
      v15[0] = v12;
      _5_System_Func_T__bool__Invoke->invoker_method(v14, _5_System_Func_T__bool__Invoke, cond, (void **)v15, &v16);
      if ( (_BYTE)v16 )
        ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_6_System_Collections_Generic_List_T__RemoveAt->methodPointer)(
          v5,
          (unsigned int)v8);
      if ( --v8 < 0 )
        return;
    }
LABEL_12:
    sub_1C372B4(self);
  }
}


void BasicHelper__RemoveElements_object_(
        System_Collections_Generic_List_T__o *self,
        System_Func_T__bool__o *cond,
        const MethodInfo_30D6CDC *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w22

  v5 = (System_Collections_Generic_List_object__o *)self;
  if ( !method->rgctx_data )
    self = (System_Collections_Generic_List_T__o *)sub_1C877C8(method);
  if ( !v5 )
    goto LABEL_10;
  v6 = v5->fields._size - 1;
  if ( v6 >= 0 )
  {
    while ( 1 )
    {
      self = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                       v5,
                                                       v6,
                                                       (const MethodInfo_37A2D54 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      if ( !cond )
        break;
      if ( (((__int64 (__fastcall *)(intptr_t, System_Collections_Generic_List_T__o *, intptr_t))cond->fields.invoke_impl)(
              cond->fields.method_code,
              self,
              cond->fields.method)
          & 1) != 0 )
        System_Collections_Generic_List_object___RemoveAt(
          v5,
          v6,
          (const MethodInfo_37A47F8 *)method->rgctx_data->_6_System_Collections_Generic_List_T__RemoveAt);
      if ( --v6 < 0 )
        return;
    }
LABEL_10:
    sub_1C372B4(self);
  }
}


void BasicHelper__Remove___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        System_Func_KeyValuePair_K__V___bool__o *cond,
        const MethodInfo_30D6A1C *method)
{
  const MethodInfo_30D6A1C_RGCTXs *rgctx_data; // x26
  size_t actualSize; // x21
  __int64 v8; // x25
  long double inited; // q0
  Il2CppClass *_6_BasicHelper___c__22_K__V; // x8
  Il2CppClass *v11; // x0
  __int64 v12; // x26
  Il2CppClass *v13; // x0
  const MethodInfo_30D6A1C_RGCTXs *v14; // x8
  __int64 v15; // x0
  __int64 _5_System_Func_KeyValuePair_K__V___K; // x8
  __int64 v17; // x27
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  long double v20; // q0
  Il2CppClass *v21; // x0
  Il2CppClass *v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x8
  _DWORD *v26; // x25
  unsigned __int64 v27; // x26
  const MethodInfo_30D6A1C_RGCTXs *v28; // x8
  char *v29; // x9
  MethodInfo *_14_System_Collections_Generic_Dictionary_K__V__Remove; // x1
  Il2CppMethodPointer methodPointer; // x0
  __int64 v32; // [xsp+0h] [xbp-20h] BYREF
  char *v33; // [xsp+8h] [xbp-18h] BYREF
  char v34[4]; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v35; // [xsp+18h] [xbp-8h]

  v35 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  actualSize = rgctx_data->_13_K->_2.actualSize;
  memset((char *)&v32 - ((actualSize + 15) & 0x1FFFFFFF0LL), 0, actualSize);
  if ( dic )
  {
    v8 = ((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_K__V__o *, System_Func_KeyValuePair_K__V___bool__o *))rgctx_data->_2_System_Linq_Enumerable_Where_KeyValuePair_K__V__->methodPointer)(
           dic,
           cond);
    _6_BasicHelper___c__22_K__V = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
    if ( (*(&_6_BasicHelper___c__22_K__V->_2.bitflags2 + 2) & 1) == 0 )
      _6_BasicHelper___c__22_K__V = (Il2CppClass *)sub_1C8776C(inited);
    if ( !_6_BasicHelper___c__22_K__V->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(_6_BasicHelper___c__22_K__V);
    v11 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
    if ( (*(&v11->_2.bitflags2 + 2) & 1) == 0 )
      v11 = (Il2CppClass *)sub_1C8776C(inited);
    v12 = *((_QWORD *)v11->static_fields + 1);
    if ( !v12 )
    {
      v13 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
      if ( (*(&v13->_2.bitflags2 + 2) & 1) == 0 )
        v13 = (Il2CppClass *)sub_1C8776C(inited);
      if ( !v13->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(v13);
      v14 = method->rgctx_data;
      v15 = (__int64)v14->_6_BasicHelper___c__22_K__V_;
      if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      {
        v15 = sub_1C8776C(inited);
        v14 = method->rgctx_data;
      }
      _5_System_Func_KeyValuePair_K__V___K = (__int64)v14->_5_System_Func_KeyValuePair_K__V___K_;
      v17 = **(_QWORD **)(v15 + 184);
      if ( (*(_BYTE *)(_5_System_Func_KeyValuePair_K__V___K + 309) & 1) == 0 )
        _5_System_Func_KeyValuePair_K__V___K = sub_1C8776C(inited);
      v12 = sub_1C372A4(_5_System_Func_KeyValuePair_K__V___K);
      ((void (__fastcall *)(__int64, __int64, MethodInfo *))method->rgctx_data->_8_System_Func_KeyValuePair_K__V___K___ctor->methodPointer)(
        v12,
        v17,
        method->rgctx_data->_7_BasicHelper___c__22_K__V___Remove_b__22_0);
      v21 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
      if ( (*(&v21->_2.bitflags2 + 2) & 1) == 0 )
        v21 = (Il2CppClass *)sub_1C8776C(v20);
      *((_QWORD *)v21->static_fields + 1) = v12;
      v22 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
      if ( (*(&v22->_2.bitflags2 + 2) & 1) == 0 )
        v22 = (Il2CppClass *)sub_1C8776C(v20);
      sub_1C36FFC((CGThumbnailListItem_o *)((char *)v22->static_fields + 8), v12, v18, v19);
    }
    v23 = ((__int64 (__fastcall *)(__int64, __int64, long double))method->rgctx_data->_9_System_Linq_Enumerable_Select_KeyValuePair_K__V___K_->methodPointer)(
            v8,
            v12,
            inited);
    v24 = ((__int64 (__fastcall *)(__int64))method->rgctx_data->_11_System_Linq_Enumerable_ToArray_K_->methodPointer)(v23);
    if ( !v24 )
      sub_1C372B4(0);
    v25 = *(_QWORD *)(v24 + 24);
    v26 = (_DWORD *)v24;
    if ( (int)v25 >= 1 )
    {
      v27 = 0;
      do
      {
        if ( v27 >= (unsigned int)v25 )
          sub_1C372BC(v24);
        memcpy(
          (char *)&v32 - ((actualSize + 15) & 0x1FFFFFFF0LL),
          (char *)v26 + v27 * *(unsigned int *)(*(_QWORD *)v26 + 260LL) + 32,
          actualSize);
        memcpy(
          (char *)&v32 - ((actualSize + 15) & 0x1FFFFFFF0LL),
          (char *)&v32 - ((actualSize + 15) & 0x1FFFFFFF0LL),
          actualSize);
        memcpy(
          (char *)&v32 - ((actualSize + 15) & 0x1FFFFFFF0LL),
          (char *)&v32 - ((actualSize + 15) & 0x1FFFFFFF0LL),
          actualSize);
        v28 = method->rgctx_data;
        v29 = (char *)&v32 - ((actualSize + 15) & 0x1FFFFFFF0LL);
        if ( (v28->_13_K->_1.byval_arg.bits & 0x80000000) == 0 )
          v29 = *(char **)((char *)&v32 - ((actualSize + 15) & 0x1FFFFFFF0LL));
        _14_System_Collections_Generic_Dictionary_K__V__Remove = v28->_14_System_Collections_Generic_Dictionary_K__V__Remove;
        methodPointer = _14_System_Collections_Generic_Dictionary_K__V__Remove->methodPointer;
        v33 = v29;
        v24 = ((__int64 (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_Dictionary_K__V__o *, char **, char *))_14_System_Collections_Generic_Dictionary_K__V__Remove->invoker_method)(
                methodPointer,
                _14_System_Collections_Generic_Dictionary_K__V__Remove,
                dic,
                &v33,
                v34);
        LODWORD(v25) = v26[6];
        ++v27;
      }
      while ( (__int64)v27 < (int)v25 );
    }
  }
}


void BasicHelper__Remove_int__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        System_Func_KeyValuePair_K__V___bool__o *cond,
        const MethodInfo_30D684C *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x21
  long double inited; // q0
  Il2CppClass *_6_BasicHelper___c__22_K__V; // x8
  Il2CppClass *v9; // x0
  System_Func_T__TResult__o *v10; // x22
  Il2CppClass *v11; // x0
  const MethodInfo_30D684C_RGCTXs *rgctx_data; // x8
  __int64 v13; // x0
  __int64 _5_System_Func_KeyValuePair_K__V___K; // x8
  Il2CppObject *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  long double v18; // q0
  Il2CppClass *v19; // x0
  Il2CppClass *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Int32_array *v22; // x0
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v24; // x21
  unsigned __int64 v25; // x22

  if ( method->rgctx_data )
  {
    if ( !dic )
      return;
  }
  else
  {
    sub_1C877C8(method);
    if ( !dic )
      return;
  }
  v6 = System_Linq_Enumerable__Where_KeyValuePair_int__object__(
         (System_Collections_Generic_IEnumerable_TSource__o *)dic,
         (System_Func_TSource__bool__o *)cond,
         (const MethodInfo_312CA9C *)method->rgctx_data->_2_System_Linq_Enumerable_Where_KeyValuePair_K__V__);
  _6_BasicHelper___c__22_K__V = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
  if ( (*(&_6_BasicHelper___c__22_K__V->_2.bitflags2 + 2) & 1) == 0 )
    _6_BasicHelper___c__22_K__V = (Il2CppClass *)sub_1C8776C(inited);
  if ( !_6_BasicHelper___c__22_K__V->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_6_BasicHelper___c__22_K__V);
  v9 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
  if ( (*(&v9->_2.bitflags2 + 2) & 1) == 0 )
    v9 = (Il2CppClass *)sub_1C8776C(inited);
  v10 = (System_Func_T__TResult__o *)*((_QWORD *)v9->static_fields + 1);
  if ( !v10 )
  {
    v11 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
    if ( (*(&v11->_2.bitflags2 + 2) & 1) == 0 )
      v11 = (Il2CppClass *)sub_1C8776C(inited);
    if ( !v11->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v11);
    rgctx_data = method->rgctx_data;
    v13 = (__int64)rgctx_data->_6_BasicHelper___c__22_K__V_;
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    {
      v13 = sub_1C8776C(inited);
      rgctx_data = method->rgctx_data;
    }
    _5_System_Func_KeyValuePair_K__V___K = (__int64)rgctx_data->_5_System_Func_KeyValuePair_K__V___K_;
    v15 = **(Il2CppObject ***)(v13 + 184);
    if ( (*(_BYTE *)(_5_System_Func_KeyValuePair_K__V___K + 309) & 1) == 0 )
      _5_System_Func_KeyValuePair_K__V___K = sub_1C8776C(inited);
    v10 = (System_Func_T__TResult__o *)sub_1C372A4(_5_System_Func_KeyValuePair_K__V___K);
    System_Func_KeyValuePair_int__object___int____ctor(
      v10,
      v15,
      (intptr_t)method->rgctx_data->_7_BasicHelper___c__22_K__V___Remove_b__22_0,
      (const MethodInfo_36319F8 *)method->rgctx_data->_8_System_Func_KeyValuePair_K__V___K___ctor);
    v19 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
    if ( (*(&v19->_2.bitflags2 + 2) & 1) == 0 )
      v19 = (Il2CppClass *)sub_1C8776C(v18);
    *((_QWORD *)v19->static_fields + 1) = v10;
    v20 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
    if ( (*(&v20->_2.bitflags2 + 2) & 1) == 0 )
      v20 = (Il2CppClass *)sub_1C8776C(v18);
    sub_1C36FFC((CGThumbnailListItem_o *)((char *)v20->static_fields + 8), (int32_t)v10, v16, v17);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___int_(
                                                               v6,
                                                               (System_Func_TSource__TResult__o *)v10,
                                                               (const MethodInfo_31186B8 *)method->rgctx_data->_9_System_Linq_Enumerable_Select_KeyValuePair_K__V___K_);
  v22 = System_Linq_Enumerable__ToArray_int_(
          v21,
          (const MethodInfo_312715C *)method->rgctx_data->_11_System_Linq_Enumerable_ToArray_K_);
  if ( !v22 )
    sub_1C372B4(0);
  max_length = v22->max_length;
  v24 = v22;
  if ( (int)max_length >= 1 )
  {
    v25 = 0;
    do
    {
      if ( v25 >= (unsigned int)max_length )
        sub_1C372BC(v22);
      v22 = (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___Remove(
                                    (System_Collections_Generic_Dictionary_int__object__o *)dic,
                                    v24->m_Items[v25],
                                    (const MethodInfo_33FBA0C *)method->rgctx_data->_14_System_Collections_Generic_Dictionary_K__V__Remove);
      LODWORD(max_length) = v24->max_length;
      ++v25;
    }
    while ( (__int64)v25 < (int)max_length );
  }
}


void BasicHelper__SetActiveSafely(UnityEngine_Component_o *self, bool value, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C449A8 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C449A8 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_1C372B4(v5);
    gameObject = UnityEngine_Component__get_gameObject(self, 0);
    GameObjectHelper__SetActiveSafely(gameObject, value, v7);
  }
}


void BasicHelper__SetStopEffectCallBack(
        UnityEngine_GameObject_o *obj,
        bool isDestroy,
        System_Action_o *action,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  Il2CppObject *Component_object; // x22

  if ( (byte_4C449A3 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C449A3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  Component_object = 0;
  if ( v7 )
  {
    if ( !obj )
      goto LABEL_14;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         obj,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v7 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, bool, System_Action_o *, const MethodInfo *))Component_object->klass->vtable[8].methodPtr)(
        Component_object,
        isDestroy,
        action,
        Component_object->klass->vtable[8].method);
      return;
    }
LABEL_14:
    sub_1C372B4(v7);
  }
  ActionExtensions__Call(action, 0);
}


System_Collections_Generic_List_T__o *BasicHelper__Shuffle___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *list,
        const MethodInfo_30D7058 *method)
{
  const MethodInfo_30D7058_RGCTXs *rgctx_data; // x26
  size_t actualSize; // x21
  void *v6; // x0
  int v7; // w28
  MethodInfo *_1_System_Collections_Generic_List_T__get_Item; // x1
  void (*methodPointer)(); // x0
  int32_t v10; // w0
  int32_t v11; // w26
  MethodInfo *v12; // x1
  void (*v13)(); // x0
  const MethodInfo_30D7058_RGCTXs *v14; // x8
  char *v15; // x4
  MethodInfo *_4_System_Collections_Generic_List_T__set_Item; // x1
  Il2CppMethodPointer v17; // x0
  const MethodInfo_30D7058_RGCTXs *v18; // x8
  char *v19; // x4
  MethodInfo *v20; // x1
  Il2CppMethodPointer v21; // x0
  __int64 v23; // [xsp+0h] [xbp-30h] BYREF
  unsigned __int64 StatusReg; // [xsp+8h] [xbp-28h]
  int *v25; // [xsp+10h] [xbp-20h] BYREF
  char *v26; // [xsp+18h] [xbp-18h]
  int v27; // [xsp+24h] [xbp-Ch] BYREF
  __int64 v28; // [xsp+28h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v28 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  actualSize = rgctx_data->_2_T->_2.actualSize;
  v6 = memset((char *)&v23 - ((actualSize + 15) & 0x1FFFFFFF0LL), 0, actualSize);
  if ( !list )
    sub_1C372B4(v6);
  if ( ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))rgctx_data->_3_System_Collections_Generic_List_T__get_Count->methodPointer)(list) >= 1 )
  {
    v7 = 0;
    do
    {
      _1_System_Collections_Generic_List_T__get_Item = method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item;
      methodPointer = _1_System_Collections_Generic_List_T__get_Item->methodPointer;
      v27 = v7;
      v25 = &v27;
      v26 = (char *)&v23 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      _1_System_Collections_Generic_List_T__get_Item->invoker_method(
        methodPointer,
        _1_System_Collections_Generic_List_T__get_Item,
        list,
        (void **)&v25,
        v26);
      memcpy(
        (char *)&v23 - ((actualSize + 15) & 0x1FFFFFFF0LL),
        (char *)&v23 - ((actualSize + 15) & 0x1FFFFFFF0LL),
        actualSize);
      v10 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_3_System_Collections_Generic_List_T__get_Count->methodPointer)(list);
      v11 = UnityEngine_Random__Range_71226972(0, v10, 0);
      v12 = method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item;
      v13 = v12->methodPointer;
      v27 = v11;
      v25 = &v27;
      v26 = (char *)&v23 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      v12->invoker_method(v13, v12, list, (void **)&v25, v26);
      v14 = method->rgctx_data;
      v15 = (char *)&v23 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      if ( (v14->_2_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v15 = *(char **)((char *)&v23 - ((actualSize + 15) & 0x1FFFFFFF0LL));
      _4_System_Collections_Generic_List_T__set_Item = v14->_4_System_Collections_Generic_List_T__set_Item;
      v17 = _4_System_Collections_Generic_List_T__set_Item->methodPointer;
      v27 = v7;
      v25 = &v27;
      v26 = v15;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int **))_4_System_Collections_Generic_List_T__set_Item->invoker_method)(
        v17,
        _4_System_Collections_Generic_List_T__set_Item,
        list,
        &v25);
      memcpy(
        (char *)&v23 - ((actualSize + 15) & 0x1FFFFFFF0LL),
        (char *)&v23 - ((actualSize + 15) & 0x1FFFFFFF0LL),
        actualSize);
      v18 = method->rgctx_data;
      v19 = (char *)&v23 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      v20 = v18->_4_System_Collections_Generic_List_T__set_Item;
      v21 = v20->methodPointer;
      if ( (v18->_2_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v19 = *(char **)((char *)&v23 - ((actualSize + 15) & 0x1FFFFFFF0LL));
      v27 = v11;
      v25 = &v27;
      v26 = v19;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int **))v20->invoker_method)(
        v21,
        v20,
        list,
        &v25);
      ++v7;
    }
    while ( v7 < ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_3_System_Collections_Generic_List_T__get_Count->methodPointer)(list) );
  }
  return list;
}


System_Collections_Generic_List_T__o *BasicHelper__Shuffle_int_(
        System_Collections_Generic_List_T__o *list,
        const MethodInfo_30D6EB8 *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w21
  int32_t Item; // w22
  int32_t v6; // w23
  int32_t v7; // w0

  v3 = (System_Collections_Generic_List_int__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1C877C8(method);
  if ( !v3 )
    sub_1C372B4(list);
  if ( v3->fields._size >= 1 )
  {
    v4 = 0;
    do
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v3,
               v4,
               (const MethodInfo_3785D10 *)method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item);
      v6 = UnityEngine_Random__Range_71226972(0, v3->fields._size, 0);
      v7 = System_Collections_Generic_List_int___get_Item(
             v3,
             v6,
             (const MethodInfo_3785D10 *)method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item);
      System_Collections_Generic_List_int___set_Item(
        v3,
        v4,
        v7,
        (const MethodInfo_3785D64 *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      System_Collections_Generic_List_int___set_Item(
        v3,
        v6,
        Item,
        (const MethodInfo_3785D64 *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      ++v4;
    }
    while ( v4 < v3->fields._size );
  }
  return (System_Collections_Generic_List_T__o *)v3;
}


System_Collections_Generic_List_T__o *BasicHelper__Shuffle_object_(
        System_Collections_Generic_List_T__o *list,
        const MethodInfo_30D6F88 *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w21
  Il2CppObject *Item; // x22
  int32_t v6; // w23
  Il2CppObject *v7; // x0

  v3 = (System_Collections_Generic_List_object__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1C877C8(method);
  if ( !v3 )
    sub_1C372B4(list);
  if ( v3->fields._size >= 1 )
  {
    v4 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v3,
               v4,
               (const MethodInfo_37A2D54 *)method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item);
      v6 = UnityEngine_Random__Range_71226972(0, v3->fields._size, 0);
      v7 = System_Collections_Generic_List_object___get_Item(
             v3,
             v6,
             (const MethodInfo_37A2D54 *)method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item);
      System_Collections_Generic_List_object___set_Item(
        v3,
        v4,
        v7,
        (const MethodInfo_37A2DA8 *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      System_Collections_Generic_List_object___set_Item(
        v3,
        v6,
        Item,
        (const MethodInfo_37A2DA8 *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      ++v4;
    }
    while ( v4 < v3->fields._size );
  }
  return (System_Collections_Generic_List_T__o *)v3;
}


System_Collections_Generic_List_T__o *BasicHelper__StableSort___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__int__o *priorityFunc,
        bool isDescending,
        const MethodInfo_30D7414 *method)
{
  const MethodInfo_30D7414_RGCTXs *rgctx_data; // x23
  size_t actualSize; // x2
  _QWORD *v10; // x24
  _QWORD *v11; // x25
  int v12; // w0
  const MethodInfo_30D7414_RGCTXs *v13; // x8
  MethodInfo *_3_System_Collections_Generic_List_T__get_Item; // x1
  Il2CppMethodPointer methodPointer; // x8
  __int64 v16; // x0
  const MethodInfo_30D7414_RGCTXs *v17; // x8
  MethodInfo *_5_System_Func_T__int__Invoke; // x1
  Il2CppClass *_4_T; // x9
  signed int *v20; // x8
  void (*v21)(); // x0
  signed int v22; // w26
  unsigned int v23; // w28
  MethodInfo *v24; // x1
  void (*v25)(); // x0
  size_t v26; // x23
  const void *v27; // x27
  const MethodInfo_30D7414_RGCTXs *v28; // x8
  signed int *v29; // x9
  MethodInfo *v30; // x1
  void (*v31)(); // x0
  signed int v32; // w23
  _BOOL4 v33; // w8
  signed int v34; // w25
  MethodInfo *v35; // x1
  void (*v36)(); // x0
  MethodInfo *v37; // x1
  void (*v38)(); // x0
  unsigned int bits; // w9
  signed int *v40; // x8
  const MethodInfo_30D7414_RGCTXs *v41; // x8
  _QWORD *v42; // x4
  MethodInfo *_7_System_Collections_Generic_List_T__Insert; // x1
  Il2CppMethodPointer v44; // x0
  __int64 v46; // [xsp+0h] [xbp-50h] BYREF
  unsigned __int64 StatusReg; // [xsp+8h] [xbp-48h]
  _QWORD *v48; // [xsp+10h] [xbp-40h]
  int v49; // [xsp+1Ch] [xbp-34h]
  void *v50; // [xsp+20h] [xbp-30h]
  size_t v51; // [xsp+28h] [xbp-28h]
  signed int *v52; // [xsp+30h] [xbp-20h] BYREF
  _QWORD *v53; // [xsp+38h] [xbp-18h]
  signed int v54; // [xsp+44h] [xbp-Ch] BYREF
  __int64 v55; // [xsp+48h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v55 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  actualSize = rgctx_data->_4_T->_2.actualSize;
  v10 = (__int64 *)((char *)&v46 - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v11 = v10;
  v50 = v10;
  v51 = actualSize;
  memset(v10, 0, actualSize);
  if ( !list
    || ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list) < 2 )
  {
    return list;
  }
  v12 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list);
  v13 = method->rgctx_data;
  v49 = v12;
  _3_System_Collections_Generic_List_T__get_Item = v13->_3_System_Collections_Generic_List_T__get_Item;
  methodPointer = _3_System_Collections_Generic_List_T__get_Item->methodPointer;
  v54 = 0;
  v52 = &v54;
  v53 = v10;
  v16 = ((__int64 (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, signed int **, _QWORD *))_3_System_Collections_Generic_List_T__get_Item->invoker_method)(
          methodPointer,
          _3_System_Collections_Generic_List_T__get_Item,
          list,
          &v52,
          v10);
  if ( !priorityFunc )
    sub_1C372B4(v16);
  v17 = method->rgctx_data;
  _4_T = v17->_4_T;
  _5_System_Func_T__int__Invoke = v17->_5_System_Func_T__int__Invoke;
  v20 = (signed int *)v10;
  v21 = _5_System_Func_T__int__Invoke->methodPointer;
  if ( (_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
    v20 = (signed int *)*v10;
  v52 = v20;
  _5_System_Func_T__int__Invoke->invoker_method(v21, _5_System_Func_T__int__Invoke, priorityFunc, (void **)&v52, &v54);
  if ( v49 < 2 )
    return list;
  v22 = v54;
  v23 = 1;
  v48 = v10;
  do
  {
    v24 = method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item;
    v25 = v24->methodPointer;
    v54 = v23;
    v52 = &v54;
    v53 = v10;
    v24->invoker_method(v25, v24, list, (void **)&v52, v10);
    v27 = v50;
    v26 = v51;
    memcpy(v50, v10, v51);
    memcpy(v11, v27, v26);
    v28 = method->rgctx_data;
    v29 = (signed int *)v11;
    if ( (v28->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v29 = (signed int *)*v11;
    v30 = v28->_5_System_Func_T__int__Invoke;
    v31 = v30->methodPointer;
    v52 = v29;
    v30->invoker_method(v31, v30, priorityFunc, (void **)&v52, &v54);
    v32 = v54;
    v33 = v54 > v22;
    if ( !isDescending )
      v33 = v54 < v22;
    if ( !v33 )
      goto LABEL_30;
    ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_6_System_Collections_Generic_List_T__RemoveAt->methodPointer)(
      list,
      v23);
    v34 = 0;
    while ( 1 )
    {
      v35 = method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item;
      v36 = v35->methodPointer;
      v54 = v34;
      v52 = &v54;
      v53 = v10;
      v35->invoker_method(v36, v35, list, (void **)&v52, v10);
      v37 = method->rgctx_data->_5_System_Func_T__int__Invoke;
      v38 = v37->methodPointer;
      bits = method->rgctx_data->_4_T->_1.byval_arg.bits;
      v40 = (signed int *)v10;
      if ( !isDescending )
        break;
      if ( (bits & 0x80000000) == 0 )
        v40 = (signed int *)*v10;
      v52 = v40;
      v37->invoker_method(v38, v37, priorityFunc, (void **)&v52, &v54);
      if ( v32 > v54 )
        goto LABEL_26;
LABEL_24:
      if ( v23 == ++v34 )
        goto LABEL_29;
    }
    if ( (bits & 0x80000000) == 0 )
      v40 = (signed int *)*v10;
    v52 = v40;
    v37->invoker_method(v38, v37, priorityFunc, (void **)&v52, &v54);
    if ( v32 >= v54 )
      goto LABEL_24;
LABEL_26:
    memcpy(v10, v50, v51);
    v41 = method->rgctx_data;
    v42 = v10;
    if ( (v41->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v42 = (_QWORD *)*v10;
    _7_System_Collections_Generic_List_T__Insert = v41->_7_System_Collections_Generic_List_T__Insert;
    v44 = _7_System_Collections_Generic_List_T__Insert->methodPointer;
    v54 = v34;
    v52 = &v54;
    v53 = v42;
    ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, signed int **))_7_System_Collections_Generic_List_T__Insert->invoker_method)(
      v44,
      _7_System_Collections_Generic_List_T__Insert,
      list,
      &v52);
LABEL_29:
    v11 = v48;
    v32 = v22;
LABEL_30:
    ++v23;
    v22 = v32;
  }
  while ( v23 != v49 );
  return list;
}


System_Collections_Generic_List_T__o *BasicHelper__StableSort_object_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__int__o *priorityFunc,
        bool isDescending,
        const MethodInfo_30D7280 *method)
{
  int32_t size; // w28
  Il2CppObject *Item; // x0
  int v10; // w24
  int32_t i; // w23
  Il2CppObject *v12; // x25
  int v13; // w0
  _BOOL4 v14; // w8
  int v15; // w26
  int32_t v16; // w27
  Il2CppObject *v17; // x0
  int v18; // w0
  _BOOL4 v19; // w8

  if ( method->rgctx_data )
  {
    if ( !list )
      return list;
  }
  else
  {
    sub_1C877C8(method);
    if ( !list )
      return list;
  }
  size = list->fields._size;
  if ( size >= 2 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)list,
             0,
             (const MethodInfo_37A2D54 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
    if ( !priorityFunc )
      sub_1C372B4(Item);
    v10 = ((__int64 (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))priorityFunc->fields.invoke_impl)(
            priorityFunc->fields.method_code,
            Item,
            priorityFunc->fields.method);
    for ( i = 1; i != size; ++i )
    {
      v12 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)list,
              i,
              (const MethodInfo_37A2D54 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      v13 = ((__int64 (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))priorityFunc->fields.invoke_impl)(
              priorityFunc->fields.method_code,
              v12,
              priorityFunc->fields.method);
      v14 = v13 > v10;
      if ( !isDescending )
        v14 = v13 < v10;
      v15 = v13;
      if ( v14 )
      {
        System_Collections_Generic_List_object___RemoveAt(
          (System_Collections_Generic_List_object__o *)list,
          i,
          (const MethodInfo_37A47F8 *)method->rgctx_data->_6_System_Collections_Generic_List_T__RemoveAt);
        v16 = 0;
        while ( 1 )
        {
          v17 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)list,
                  v16,
                  (const MethodInfo_37A2D54 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
          v18 = ((__int64 (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))priorityFunc->fields.invoke_impl)(
                  priorityFunc->fields.method_code,
                  v17,
                  priorityFunc->fields.method);
          v19 = v15 > v18;
          if ( !isDescending )
            v19 = v15 < v18;
          if ( v19 )
            break;
          if ( i == ++v16 )
            goto LABEL_18;
        }
        System_Collections_Generic_List_object___Insert(
          (System_Collections_Generic_List_object__o *)list,
          v16,
          v12,
          (const MethodInfo_37A3DD4 *)method->rgctx_data->_7_System_Collections_Generic_List_T__Insert);
LABEL_18:
        v15 = v10;
      }
      v10 = v15;
    }
  }
  return list;
}


System_String_o *BasicHelper__SubstringLast(System_Text_StringBuilder_o *self, int32_t len, const MethodInfo *method)
{
  int32_t Length; // w0
  System_String_o *v7; // x21
  int32_t v8; // w0

  if ( (byte_4C449A9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C449A9 = 1;
  }
  if ( !self || System_Text_StringBuilder__get_Length(self, 0) < len )
    return (System_String_o *)StringLiteral_1/*""*/;
  Length = System_Text_StringBuilder__get_Length(self, 0);
  v7 = System_Text_StringBuilder__ToString_63643444(self, Length - len, len, 0);
  v8 = System_Text_StringBuilder__get_Length(self, 0);
  System_Text_StringBuilder__Remove(self, v8 - len, len, 0);
  return v7;
}


bool BasicHelper__SynchronizeAnimation(
        UnityEngine_Animation_o *self,
        System_String_o *selfAnimStr,
        System_String_o *tgAnimStr,
        UnityEngine_Animation_o *targetAnim,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *v8; // x20
  int v9; // w23
  float length; // s8
  UnityEngine_AnimationState_o *Item; // x23
  float time; // s0

  if ( !self )
    goto LABEL_13;
  v8 = self;
  self = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(self, selfAnimStr, 0);
  if ( !self )
    goto LABEL_13;
  self = (UnityEngine_Animation_o *)UnityEngine_AnimationState__get_wrapMode((UnityEngine_AnimationState_o *)self, 0);
  if ( !targetAnim )
    goto LABEL_13;
  v9 = (int)self;
  self = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(targetAnim, tgAnimStr, 0);
  if ( !self )
    goto LABEL_13;
  if ( v9 == UnityEngine_AnimationState__get_wrapMode((UnityEngine_AnimationState_o *)self, 0) )
  {
    self = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v8, selfAnimStr, 0);
    if ( !self )
      goto LABEL_13;
    length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)self, 0);
    self = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(targetAnim, tgAnimStr, 0);
    if ( !self )
      goto LABEL_13;
    if ( length == UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)self, 0) )
    {
      Item = UnityEngine_Animation__get_Item(v8, selfAnimStr, 0);
      self = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(targetAnim, tgAnimStr, 0);
      if ( self )
      {
        time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)self, 0);
        if ( Item )
        {
          UnityEngine_AnimationState__set_time(Item, time, 0);
          UnityEngine_Animation__Sample(v8, 0);
          UnityEngine_Animation__Play_71012036(v8, selfAnimStr, 0);
          return 1;
        }
      }
LABEL_13:
      sub_1C372B4(self);
    }
  }
  return 0;
}


bool BasicHelper__SynchronizeAnimation_44143332(
        SimpleAnimation_o *self,
        System_String_o *selfAnimStr,
        System_String_o *tgAnimStr,
        SimpleAnimation_o *targetAnim,
        const MethodInfo *method)
{
  SimpleAnimation_o *v8; // x20
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v10; // x23
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  int v14; // w23
  SimpleAnimation_c *v15; // x8
  SimpleAnimation_o *v16; // x24
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  SimpleAnimation_c *v20; // x8
  SimpleAnimation_o *v21; // x23
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  float v25; // s8
  SimpleAnimation_c *v26; // x8
  SimpleAnimation_o *v27; // x23
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  SimpleAnimation_State_o *Item; // x23
  SimpleAnimation_c *v32; // x8
  SimpleAnimation_o *v33; // x21
  __int64 v34; // x9
  SimpleAnimation_State_c **v35; // x10
  __int64 v36; // x0
  long double v38; // q0
  SimpleAnimation_State_c *v39; // x8
  long double v40; // q8
  __int64 v41; // x9
  SimpleAnimation_State_c **v42; // x10
  __int64 v43; // x0

  v8 = self;
  if ( (byte_4C449A1 & 1) == 0 )
  {
    self = (SimpleAnimation_o *)sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C449A1 = 1;
  }
  if ( !v8 )
    goto LABEL_51;
  self = (SimpleAnimation_o *)SimpleAnimation__get_Item(v8, selfAnimStr, 0);
  if ( !self )
    goto LABEL_51;
  klass = self->klass;
  v10 = self;
  v11 = *(unsigned __int16 *)&self->klass->_2.rank;
  if ( *(_WORD *)&self->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_9;
    }
    v13 = (__int64)(&klass[1]._1.interopData + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v13 = sub_1C87870(self, SimpleAnimation_State_TypeInfo, 15);
  }
  self = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
  if ( !targetAnim )
    goto LABEL_51;
  v14 = (int)self;
  self = (SimpleAnimation_o *)SimpleAnimation__get_Item(targetAnim, tgAnimStr, 0);
  if ( !self )
    goto LABEL_51;
  v15 = self->klass;
  v16 = self;
  v17 = *(unsigned __int16 *)&self->klass->_2.rank;
  if ( *(_WORD *)&self->klass->_2.rank )
  {
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v18 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_17;
    }
    v19 = (__int64)(&v15[1]._1.interopData + 2 * *v18);
  }
  else
  {
LABEL_17:
    v19 = sub_1C87870(self, SimpleAnimation_State_TypeInfo, 15);
  }
  if ( v14 != (*(unsigned int (__fastcall **)(SimpleAnimation_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8)) )
    return 0;
  self = (SimpleAnimation_o *)SimpleAnimation__get_Item(v8, selfAnimStr, 0);
  if ( !self )
    goto LABEL_51;
  v20 = self->klass;
  v21 = self;
  v22 = *(unsigned __int16 *)&self->klass->_2.rank;
  if ( *(_WORD *)&self->klass->_2.rank )
  {
    v23 = &v20->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v23 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_25;
    }
    v24 = (__int64)(&v20[1]._1.declaringType + 2 * *v23);
  }
  else
  {
LABEL_25:
    v24 = sub_1C87870(self, SimpleAnimation_State_TypeInfo, 13);
  }
  LODWORD(v25) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(SimpleAnimation_o *, _QWORD))*(_QWORD *)v24)(v21, *(_QWORD *)(v24 + 8)));
  self = (SimpleAnimation_o *)SimpleAnimation__get_Item(targetAnim, tgAnimStr, 0);
  if ( !self )
LABEL_51:
    sub_1C372B4(self);
  v26 = self->klass;
  v27 = self;
  v28 = *(unsigned __int16 *)&self->klass->_2.rank;
  if ( *(_WORD *)&self->klass->_2.rank )
  {
    v29 = &v26->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v29 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_32;
    }
    v30 = (__int64)(&v26[1]._1.declaringType + 2 * *v29);
  }
  else
  {
LABEL_32:
    v30 = sub_1C87870(self, SimpleAnimation_State_TypeInfo, 13);
  }
  if ( v25 != (*(float (__fastcall **)(SimpleAnimation_o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8)) )
    return 0;
  Item = SimpleAnimation__get_Item(v8, selfAnimStr, 0);
  self = (SimpleAnimation_o *)SimpleAnimation__get_Item(targetAnim, tgAnimStr, 0);
  if ( !self )
    goto LABEL_51;
  v32 = self->klass;
  v33 = self;
  v34 = *(unsigned __int16 *)&self->klass->_2.rank;
  if ( *(_WORD *)&self->klass->_2.rank )
  {
    v35 = (SimpleAnimation_State_c **)&v32->_1.interfaceOffsets->offset;
    while ( *(v35 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v34;
      v35 += 2;
      if ( !v34 )
        goto LABEL_40;
    }
    v36 = (__int64)(&v32->vtable._3_ToString + *(_DWORD *)v35);
  }
  else
  {
LABEL_40:
    v36 = sub_1C87870(self, SimpleAnimation_State_TypeInfo, 3);
  }
  self = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
  if ( !Item )
    goto LABEL_51;
  v39 = Item->klass;
  v40 = v38;
  v41 = *(unsigned __int16 *)&Item->klass->_2.rank;
  if ( *(_WORD *)&Item->klass->_2.rank )
  {
    v42 = (SimpleAnimation_State_c **)&v39->_1.interfaceOffsets->offset;
    while ( *(v42 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v41;
      v42 += 2;
      if ( !v41 )
        goto LABEL_48;
    }
    v43 = (__int64)&v39->vtable[*(_DWORD *)v42 + 4];
  }
  else
  {
LABEL_48:
    v43 = sub_1C87870(Item, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))v43)(Item, *(_QWORD *)(v43 + 8), v40);
  SimpleAnimation__Sample(v8, 0);
  SimpleAnimation__Play_66507412(v8, selfAnimStr, 0);
  return 1;
}


Il2CppObject *BasicHelper__TakeIf_object_(
        Il2CppObject *self,
        System_Predicate_T__o *match,
        const MethodInfo_30D7770 *method)
{
  Il2CppObject *v4; // x19

  v4 = self;
  if ( method->rgctx_data )
  {
    if ( !self )
      return 0;
  }
  else
  {
    self = (Il2CppObject *)sub_1C877C8(method);
    if ( !v4 )
      return 0;
  }
  if ( !match )
    sub_1C372B4(self);
  if ( (((__int64 (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))match->fields.invoke_impl)(
          match->fields.method_code,
          v4,
          match->fields.method)
      & 1) == 0 )
    return 0;
  return v4;
}


System_String_o *BasicHelper__ToCommaString(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C449AA & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_25052/*"{0:#,0}"*/);
    byte_4C449AA = 1;
  }
  v11 = value;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v2, v3, v4, v5, v6, v7);
  return System_String__Format((System_String_o *)StringLiteral_25052/*"{0:#,0}"*/, v9, 0);
}


System_String_o *BasicHelper__ToCommaString_44146396(int64_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  int64_t v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C449AB & 1) == 0 )
  {
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&StringLiteral_25052/*"{0:#,0}"*/);
    byte_4C449AB = 1;
  }
  v11 = value;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v11, v2, v3, v4, v5, v6, v7);
  return System_String__Format((System_String_o *)StringLiteral_25052/*"{0:#,0}"*/, v9, 0);
}


System_Collections_Generic_IEnumerable_T__o *BasicHelper__ToIterator___Il2CppFullySharedGenericType_(
        int32_t loopCount,
        System_Func_int__T__o *func,
        const MethodInfo_30D78C8 *method)
{
  long double v3; // q0
  const MethodInfo_30D78C8_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__ToIterator_d__31_T; // x0
  System_Collections_Generic_IEnumerable_T__o *v9; // x22
  __int64 v10; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__ToIterator_d__31_T = (__int64)rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
  if ( (*(&rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_2.bitflags2 + 2) & 1) == 0 )
    _0_BasicHelper__ToIterator_d__31_T = sub_1C8776C(v3);
  v9 = (System_Collections_Generic_IEnumerable_T__o *)sub_1C372A4(_0_BasicHelper__ToIterator_d__31_T);
  v10 = ((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *, __int64))method->rgctx_data->_1_BasicHelper__ToIterator_d__31_T___ctor->methodPointer)(
          v9,
          4294967294LL);
  if ( !v9 )
    sub_1C372B4(v10);
  sub_1A860DC(
    v9,
    (char *)method->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 192,
    (unsigned int)loopCount);
  sub_1A85D98(v9, (char *)method->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 128, func);
  return v9;
}


System_Collections_Generic_IEnumerable_T__o *BasicHelper__ToIterator_float_(
        int32_t loopCount,
        System_Func_int__T__o *func,
        const MethodInfo_30D784C *method)
{
  long double v3; // q0
  const MethodInfo_30D784C_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__ToIterator_d__31_T; // x0
  BasicHelper__ToIterator_d__31_T__o *v9; // x0
  const MethodInfo_30D784C_RGCTXs *v10; // x8
  BasicHelper__ToIterator_d__31_T__o *v11; // x21
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__ToIterator_d__31_T = (__int64)rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
  if ( (*(&rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_2.bitflags2 + 2) & 1) == 0 )
    _0_BasicHelper__ToIterator_d__31_T = sub_1C8776C(v3);
  v9 = (BasicHelper__ToIterator_d__31_T__o *)sub_1C372A4(_0_BasicHelper__ToIterator_d__31_T);
  v10 = method->rgctx_data;
  v11 = v9;
  BasicHelper__ToIterator_d__31_float____ctor(
    v9,
    -2,
    (const MethodInfo_340BB9C *)v10->_1_BasicHelper__ToIterator_d__31_T___ctor);
  if ( !v11 )
    sub_1C372B4(v12);
  HIDWORD(v11->fields.__3__func) = loopCount;
  v11->fields.func = func;
  sub_1C36FFC((CGThumbnailListItem_o *)&v11->fields.func, (int32_t)func, v13, v14);
  return (System_Collections_Generic_IEnumerable_T__o *)v11;
}


System_Collections_Generic_IEnumerable_T__o *BasicHelper__ToIterator_object_(
        int32_t loopCount,
        System_Func_int__T__o *func,
        const MethodInfo_30D77D0 *method)
{
  long double v3; // q0
  const MethodInfo_30D77D0_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__ToIterator_d__31_T; // x0
  BasicHelper__ToIterator_d__31_T__o *v9; // x0
  const MethodInfo_30D77D0_RGCTXs *v10; // x8
  BasicHelper__ToIterator_d__31_T__o *v11; // x21
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__ToIterator_d__31_T = (__int64)rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
  if ( (*(&rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_2.bitflags2 + 2) & 1) == 0 )
    _0_BasicHelper__ToIterator_d__31_T = sub_1C8776C(v3);
  v9 = (BasicHelper__ToIterator_d__31_T__o *)sub_1C372A4(_0_BasicHelper__ToIterator_d__31_T);
  v10 = method->rgctx_data;
  v11 = v9;
  BasicHelper__ToIterator_d__31_object____ctor(
    v9,
    -2,
    (const MethodInfo_340B9DC *)v10->_1_BasicHelper__ToIterator_d__31_T___ctor);
  if ( !v11 )
    sub_1C372B4(v12);
  v11->fields.__3__loopCount = loopCount;
  v11->fields.__3__func = func;
  sub_1C36FFC((CGThumbnailListItem_o *)&v11->fields.__3__func, (int32_t)func, v13, v14);
  return (System_Collections_Generic_IEnumerable_T__o *)v11;
}


System_Collections_IEnumerator_o *BasicHelper__WaitCallUntilSatisfyFunc(
        System_Func_float__bool__o *funcCond,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C449A6 & 1) == 0 )
  {
    sub_1C37058(&BasicHelper__WaitCallUntilSatisfyFunc_d__37_TypeInfo);
    byte_4C449A6 = 1;
  }
  v5 = sub_1C372A4(BasicHelper__WaitCallUntilSatisfyFunc_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = funcCond;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)funcCond, v6, v7);
  *(_QWORD *)(v5 + 40) = action;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)action, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *BasicHelper__WaitForEndOfFrameCall(System_Action_o *action, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C449AC & 1) == 0 )
  {
    sub_1C37058(&BasicHelper__WaitForEndOfFrameCall_d__45_TypeInfo);
    byte_4C449AC = 1;
  }
  v3 = sub_1C372A4(BasicHelper__WaitForEndOfFrameCall_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = action;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)action, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void BasicHelper__DelayCall_d__35___ctor(
        BasicHelper__DelayCall_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BasicHelper__DelayCall_d__35__MoveNext(BasicHelper__DelayCall_d__35_o *this, const MethodInfo *method)
{
  int32_t _1__state; // w8
  float delay; // s8
  _BOOL4 isWaitEvenIfNoDelayTime; // w8
  UnityEngine_WaitForSeconds_o *v6; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool result; // w0

  if ( (byte_4C449AD & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C449AD = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
LABEL_8:
    ActionExtensions__Call(this->fields.action, 0);
    return 0;
  }
  if ( !_1__state )
  {
    delay = this->fields.delay;
    isWaitEvenIfNoDelayTime = this->fields.isWaitEvenIfNoDelayTime;
    this->fields.__1__state = -1;
    if ( delay > 0.0 || isWaitEvenIfNoDelayTime )
    {
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, delay, 0);
      this->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = &this->fields.__2__current;
      sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v6, v8, v9);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    goto LABEL_8;
  }
  return 0;
}


Il2CppObject *BasicHelper__DelayCall_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__DelayCall_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BasicHelper__DelayCall_d__35__System_Collections_IEnumerator_Reset(
        BasicHelper__DelayCall_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BasicHelper__DelayCall_d__35_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BasicHelper__DelayCall_d__35__System_Collections_IEnumerator_get_Current(
        BasicHelper__DelayCall_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BasicHelper__DelayCall_d__35__System_IDisposable_Dispose(
        BasicHelper__DelayCall_d__35_o *this,
        const MethodInfo *method)
{
  ;
}


void BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument____ctor(
        BasicHelper__DelayCall_d__36_T__o *this,
        int32_t 1__state,
        const MethodInfo_32D18B4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___MoveNext(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_32D18E0 *method)
{
  int32_t _1__state; // w8
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool result; // w0
  void *monitor; // x9
  __int128 v11; // q0
  System_Action_T__o *action; // x0
  MethodInfo *_3_ActionExtensions_Call_T; // x2
  HutongGames_PlayMaker_Actions_ShowAllEx_DamageFuncArgument_o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C485E4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C485E4 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    monitor = this[1].monitor;
    v11 = *(_OWORD *)&this->fields.arg;
    action = this->fields.action;
    this->fields.__1__state = -1;
    _3_ActionExtensions_Call_T = method->klass->rgctx_data->_3_ActionExtensions_Call_T_;
    *(_OWORD *)&v14.fields.perf = v11;
    *(_QWORD *)&v14.fields.damageIndex = monitor;
    ActionExtensions__Call_ShowAllEx_DamageFuncArgument_(
      action,
      &v14,
      (const MethodInfo_30346C0 *)_3_ActionExtensions_Call_T);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    delay = this->fields.delay;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v6, delay, 0);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_32D19C0 *method)
{
  return this->fields.__2__current;
}


void __noreturn BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___System_Collections_IEnumerator_Reset(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_32D19C8 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1C372A4(v3);
  System_NotSupportedException___ctor(v4, 0);
  sub_1C37180(v4, method);
}


Il2CppObject *BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___System_Collections_IEnumerator_get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_32D19FC *method)
{
  return this->fields.__2__current;
}


void BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___System_IDisposable_Dispose(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_32D18DC *method)
{
  ;
}


void BasicHelper__DelayCall_d__36___Il2CppFullySharedGenericType____ctor(
        BasicHelper__DelayCall_d__36_T__o *this,
        int32_t 1__state,
        const MethodInfo_32D15E4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  sub_1A860DC(this, method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields, (unsigned int)1__state);
}


bool BasicHelper__DelayCall_d__36___Il2CppFullySharedGenericType___MoveNext(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_32D1628 *method)
{
  BasicHelper__DelayCall_d__36_T__RGCTXs *rgctx_data; // x8
  size_t actualSize; // x22
  _QWORD *v6; // x21
  int v7; // w8
  float v8; // s8
  UnityEngine_WaitForSeconds_o *v9; // x21
  BasicHelper__DelayCall_d__36_T__c *klass; // x8
  bool v11; // w19
  __int64 v12; // x24
  const void *v13; // x0
  BasicHelper__DelayCall_d__36_T__RGCTXs *v14; // x8
  MethodInfo *_3_ActionExtensions_Call_T; // x1
  void (*methodPointer)(); // x0
  _QWORD v19[3]; // [xsp+8h] [xbp-28h] BYREF

  v19[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_4C485E3 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C485E3 = 1;
  }
  rgctx_data = method->klass->rgctx_data;
  actualSize = rgctx_data->_2_T->_2.actualSize;
  v6 = (_QWORD *)((char *)&v19[-1] - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v7 = *(_DWORD *)sub_1C3707C(this, rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields);
  if ( v7 == 1 )
  {
    sub_1A860DC(this, method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields, 0xFFFFFFFFLL);
    v12 = *(_QWORD *)sub_1C3707C(
                       this,
                       (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields + 96);
    v13 = (const void *)sub_1C3707C(
                          this,
                          (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields + 128);
    memcpy((char *)&v19[-1] - ((actualSize + 15) & 0x1FFFFFFF0LL), v13, actualSize);
    v14 = method->klass->rgctx_data;
    _3_ActionExtensions_Call_T = v14->_3_ActionExtensions_Call_T_;
    methodPointer = _3_ActionExtensions_Call_T->methodPointer;
    if ( (v14->_2_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v6 = (_QWORD *)*v6;
    v19[0] = v12;
    v19[1] = v6;
    _3_ActionExtensions_Call_T->invoker_method(methodPointer, _3_ActionExtensions_Call_T, 0, (void **)v19, v6);
    return 0;
  }
  if ( v7 )
    return 0;
  sub_1A860DC(this, method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields, 0xFFFFFFFFLL);
  v8 = *(float *)sub_1C3707C(
                   this,
                   (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields + 64);
  v9 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v9, v8, 0);
  sub_1A85D98(this, (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields + 32, v9);
  klass = method->klass;
  v11 = 1;
  sub_1A860DC(this, klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields, 1);
  return v11;
}


Il2CppObject *BasicHelper__DelayCall_d__36___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_32D1830 *method)
{
  return *(Il2CppObject **)sub_1C3707C(
                             this,
                             (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields + 32);
}


void __noreturn BasicHelper__DelayCall_d__36___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_32D1858 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1C372A4(v3);
  System_NotSupportedException___ctor(v4, 0);
  sub_1C37180(v4, method);
}


Il2CppObject *BasicHelper__DelayCall_d__36___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_32D188C *method)
{
  return *(Il2CppObject **)sub_1C3707C(
                             this,
                             (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields + 32);
}


void BasicHelper__DelayCall_d__36___Il2CppFullySharedGenericType___System_IDisposable_Dispose(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_32D1624 *method)
{
  ;
}


void BasicHelper__DelayCall_d__36_object____ctor(
        BasicHelper__DelayCall_d__36_T__o *this,
        int32_t 1__state,
        const MethodInfo_32D14B8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BasicHelper__DelayCall_d__36_object___MoveNext(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_32D14E4 *method)
{
  int32_t _1__state; // w8
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool result; // w0

  if ( (byte_4C485E2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C485E2 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    ActionExtensions__Call_object_(
      this->fields.action,
      this->fields.arg,
      (const MethodInfo_3034548 *)method->klass->rgctx_data->_3_ActionExtensions_Call_T_);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    delay = this->fields.delay;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v6, delay, 0);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *BasicHelper__DelayCall_d__36_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_32D15A0 *method)
{
  return this->fields.__2__current;
}


void __noreturn BasicHelper__DelayCall_d__36_object___System_Collections_IEnumerator_Reset(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_32D15A8 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1C372A4(v3);
  System_NotSupportedException___ctor(v4, 0);
  sub_1C37180(v4, method);
}


Il2CppObject *BasicHelper__DelayCall_d__36_object___System_Collections_IEnumerator_get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_32D15DC *method)
{
  return this->fields.__2__current;
}


void BasicHelper__DelayCall_d__36_object___System_IDisposable_Dispose(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_32D14E0 *method)
{
  ;
}


void BasicHelper__RealDelayCall_d__38___ctor(
        BasicHelper__RealDelayCall_d__38_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BasicHelper__RealDelayCall_d__38__MoveNext(BasicHelper__RealDelayCall_d__38_o *this, const MethodInfo *method)
{
  int32_t _1__state; // w8
  float delay; // s8
  UnityEngine_WaitForSecondsRealtime_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4C449AE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    byte_4C449AE = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    action = this->fields.action;
    this->fields.__1__state = -1;
    ActionExtensions__Call(action, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    delay = this->fields.delay;
    v5 = (UnityEngine_WaitForSecondsRealtime_o *)sub_1C372A4(UnityEngine_WaitForSecondsRealtime_TypeInfo);
    UnityEngine_WaitForSecondsRealtime___ctor(v5, delay, 0);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *BasicHelper__RealDelayCall_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__RealDelayCall_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BasicHelper__RealDelayCall_d__38__System_Collections_IEnumerator_Reset(
        BasicHelper__RealDelayCall_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BasicHelper__RealDelayCall_d__38_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BasicHelper__RealDelayCall_d__38__System_Collections_IEnumerator_get_Current(
        BasicHelper__RealDelayCall_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BasicHelper__RealDelayCall_d__38__System_IDisposable_Dispose(
        BasicHelper__RealDelayCall_d__38_o *this,
        const MethodInfo *method)
{
  ;
}


void BasicHelper__RealDelayCall_d__39___Il2CppFullySharedGenericType____ctor(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        int32_t 1__state,
        const MethodInfo_32E3EA4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  sub_1A860DC(
    this,
    method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields,
    (unsigned int)1__state);
}


bool BasicHelper__RealDelayCall_d__39___Il2CppFullySharedGenericType___MoveNext(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_32E3EE8 *method)
{
  BasicHelper__RealDelayCall_d__39_T__RGCTXs *rgctx_data; // x8
  size_t actualSize; // x22
  _QWORD *v6; // x21
  int v7; // w8
  float v8; // s8
  UnityEngine_WaitForSecondsRealtime_o *v9; // x21
  BasicHelper__RealDelayCall_d__39_T__c *klass; // x8
  bool v11; // w19
  __int64 v12; // x24
  const void *v13; // x0
  BasicHelper__RealDelayCall_d__39_T__RGCTXs *v14; // x8
  MethodInfo *_3_ActionExtensions_Call_T; // x1
  void (*methodPointer)(); // x0
  _QWORD v19[3]; // [xsp+8h] [xbp-28h] BYREF

  v19[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_4C48617 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    byte_4C48617 = 1;
  }
  rgctx_data = method->klass->rgctx_data;
  actualSize = rgctx_data->_2_T->_2.actualSize;
  v6 = (_QWORD *)((char *)&v19[-1] - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v7 = *(_DWORD *)sub_1C3707C(this, rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields);
  if ( v7 == 1 )
  {
    sub_1A860DC(this, method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields, 0xFFFFFFFFLL);
    v12 = *(_QWORD *)sub_1C3707C(
                       this,
                       (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields + 96);
    v13 = (const void *)sub_1C3707C(
                          this,
                          (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields + 128);
    memcpy((char *)&v19[-1] - ((actualSize + 15) & 0x1FFFFFFF0LL), v13, actualSize);
    v14 = method->klass->rgctx_data;
    _3_ActionExtensions_Call_T = v14->_3_ActionExtensions_Call_T_;
    methodPointer = _3_ActionExtensions_Call_T->methodPointer;
    if ( (v14->_2_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v6 = (_QWORD *)*v6;
    v19[0] = v12;
    v19[1] = v6;
    _3_ActionExtensions_Call_T->invoker_method(methodPointer, _3_ActionExtensions_Call_T, 0, (void **)v19, v6);
    return 0;
  }
  if ( v7 )
    return 0;
  sub_1A860DC(this, method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields, 0xFFFFFFFFLL);
  v8 = *(float *)sub_1C3707C(
                   this,
                   (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields + 64);
  v9 = (UnityEngine_WaitForSecondsRealtime_o *)sub_1C372A4(UnityEngine_WaitForSecondsRealtime_TypeInfo);
  UnityEngine_WaitForSecondsRealtime___ctor(v9, v8, 0);
  sub_1A85D98(this, (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields + 32, v9);
  klass = method->klass;
  v11 = 1;
  sub_1A860DC(this, klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields, 1);
  return v11;
}


Il2CppObject *BasicHelper__RealDelayCall_d__39___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_32E40F0 *method)
{
  return *(Il2CppObject **)sub_1C3707C(
                             this,
                             (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields + 32);
}


void __noreturn BasicHelper__RealDelayCall_d__39___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_32E4118 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1C372A4(v3);
  System_NotSupportedException___ctor(v4, 0);
  sub_1C37180(v4, method);
}


Il2CppObject *BasicHelper__RealDelayCall_d__39___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_32E414C *method)
{
  return *(Il2CppObject **)sub_1C3707C(
                             this,
                             (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields + 32);
}


void BasicHelper__RealDelayCall_d__39___Il2CppFullySharedGenericType___System_IDisposable_Dispose(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_32E3EE4 *method)
{
  ;
}


void BasicHelper__RealDelayCall_d__39_object____ctor(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        int32_t 1__state,
        const MethodInfo_32E3D78 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BasicHelper__RealDelayCall_d__39_object___MoveNext(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_32E3DA4 *method)
{
  int32_t _1__state; // w8
  float delay; // s8
  UnityEngine_WaitForSecondsRealtime_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool result; // w0

  if ( (byte_4C48616 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    byte_4C48616 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    ActionExtensions__Call_object_(
      this->fields.action,
      this->fields.arg,
      (const MethodInfo_3034548 *)method->klass->rgctx_data->_3_ActionExtensions_Call_T_);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    delay = this->fields.delay;
    v6 = (UnityEngine_WaitForSecondsRealtime_o *)sub_1C372A4(UnityEngine_WaitForSecondsRealtime_TypeInfo);
    UnityEngine_WaitForSecondsRealtime___ctor(v6, delay, 0);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *BasicHelper__RealDelayCall_d__39_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_32E3E60 *method)
{
  return this->fields.__2__current;
}


void __noreturn BasicHelper__RealDelayCall_d__39_object___System_Collections_IEnumerator_Reset(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_32E3E68 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1C372A4(v3);
  System_NotSupportedException___ctor(v4, 0);
  sub_1C37180(v4, method);
}


Il2CppObject *BasicHelper__RealDelayCall_d__39_object___System_Collections_IEnumerator_get_Current(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_32E3E9C *method)
{
  return this->fields.__2__current;
}


void BasicHelper__RealDelayCall_d__39_object___System_IDisposable_Dispose(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_32E3DA0 *method)
{
  ;
}


void BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType____ctor(
        BasicHelper__ToIterator_d__31_T__o *this,
        int32_t 1__state,
        const MethodInfo_340BD70 *method)
{
  unsigned int CurrentManagedThreadId; // w0

  System_Object___ctor((Il2CppObject *)this, 0);
  sub_1A860DC(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields, (unsigned int)1__state);
  CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
  sub_1A860DC(
    this,
    (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 64,
    CurrentManagedThreadId);
}


bool BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___MoveNext(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340BDDC *method)
{
  BasicHelper__ToIterator_d__31_T__RGCTXs *rgctx_data; // x8
  __int64 actualSize; // x21
  int v6; // w8
  BasicHelper__ToIterator_d__31_T__o *v7; // x0
  __int64 v8; // x2
  BasicHelper__ToIterator_d__31_T__RGCTXs *v9; // x8
  int v10; // w9
  int v11; // w23
  void *v12; // x23
  int *v13; // x0
  MethodInfo *_2_System_Func_int__T__Invoke; // x1
  int v15; // w8
  void (*methodPointer)(); // x0
  BasicHelper__ToIterator_d__31_T__c *klass; // x8
  bool v18; // w20
  int *v20; // [xsp+0h] [xbp-20h] BYREF
  char *v21; // [xsp+8h] [xbp-18h]
  int v22; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v23; // [xsp+18h] [xbp-8h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->klass->rgctx_data;
  actualSize = rgctx_data->_3_T->_2.actualSize;
  v6 = *(_DWORD *)sub_1C3707C(this, rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields);
  if ( v6 == 1 )
  {
    sub_1A860DC(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields, 0xFFFFFFFFLL);
    v10 = *(_DWORD *)sub_1C3707C(
                       this,
                       (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 224);
    v7 = this;
    v9 = method->klass->rgctx_data;
    v8 = (unsigned int)(v10 + 1);
  }
  else
  {
    if ( v6 )
      return 0;
    sub_1A860DC(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields, 0xFFFFFFFFLL);
    if ( !*(_QWORD *)sub_1C3707C(
                       this,
                       (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 96) )
      return 0;
    v7 = this;
    v8 = 0;
    v9 = method->klass->rgctx_data;
  }
  sub_1A860DC(v7, (char *)v9->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 224, v8);
  v11 = *(_DWORD *)sub_1C3707C(
                     this,
                     (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 224);
  if ( v11 >= *(_DWORD *)sub_1C3707C(
                           this,
                           (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 160) )
    return 0;
  v12 = *(void **)sub_1C3707C(
                    this,
                    (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 96);
  v13 = (int *)sub_1C3707C(
                 this,
                 (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 224);
  if ( !v12 )
    sub_1C372B4(v13);
  _2_System_Func_int__T__Invoke = method->klass->rgctx_data->_2_System_Func_int__T__Invoke;
  v15 = *v13;
  methodPointer = _2_System_Func_int__T__Invoke->methodPointer;
  v22 = v15;
  v20 = &v22;
  v21 = (char *)&v20 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  _2_System_Func_int__T__Invoke->invoker_method(methodPointer, _2_System_Func_int__T__Invoke, v12, (void **)&v20, v21);
  sub_1C37080(
    this,
    (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 32,
    (char *)&v20 - ((actualSize + 15) & 0x1FFFFFFF0LL),
    (unsigned int)actualSize);
  klass = method->klass;
  v18 = 1;
  sub_1A860DC(this, klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields, 1);
  return v18;
}


System_Collections_Generic_IEnumerator_T__o *BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_T__GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340C1AC *method)
{
  int v4; // w21
  BasicHelper__ToIterator_d__31_T__o *v5; // x21
  __int64 _0_BasicHelper__ToIterator_d__31_T; // x0
  unsigned int *v7; // x0
  _QWORD *v8; // x0

  if ( *(_DWORD *)sub_1C3707C(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields) == -2
    && (v4 = *(_DWORD *)sub_1C3707C(
                          this,
                          (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 64),
        v4 == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    sub_1A860DC(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields, 0);
    v5 = this;
  }
  else
  {
    _0_BasicHelper__ToIterator_d__31_T = (__int64)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
    if ( (*(_BYTE *)(_0_BasicHelper__ToIterator_d__31_T + 309) & 1) == 0 )
      _0_BasicHelper__ToIterator_d__31_T = sub_1C8776C();
    v5 = (BasicHelper__ToIterator_d__31_T__o *)sub_1C372A4(_0_BasicHelper__ToIterator_d__31_T);
    ((void (__fastcall *)(BasicHelper__ToIterator_d__31_T__o *, _QWORD))method->klass->rgctx_data->_4_BasicHelper__ToIterator_d__31_T___ctor->methodPointer)(
      v5,
      0);
  }
  v7 = (unsigned int *)sub_1C3707C(
                         this,
                         (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 192);
  if ( !v5 )
    sub_1C372B4(v7);
  sub_1A860DC(v5, (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 160, *v7);
  v8 = (_QWORD *)sub_1C3707C(
                   this,
                   (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 128);
  sub_1A85D98(v5, (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 96, *v8);
  return (System_Collections_Generic_IEnumerator_T__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_T__get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340C034 *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x8
  size_t v5; // x20
  const void *v6; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v7; // x0
  void *v8; // x1
  _QWORD v9[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v9[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD **)(*(_QWORD *)(v2 + 32) + 192LL);
  v5 = *(unsigned int *)(v4[3] + 252LL);
  v6 = (const void *)sub_1C3707C(this, *(_QWORD *)(*v4 + 128LL) + 32LL);
  memcpy((char *)v9 - ((v5 + 15) & 0x1FFFFFFF0LL), v6, v5);
  v7 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                   (void *)method,
                                                                   (char *)v9 - ((v5 + 15) & 0x1FFFFFFF0LL),
                                                                   v5);
  result.monitor = v8;
  result.klass = v7;
  return result;
}


System_Collections_IEnumerator_o *BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___System_Collections_IEnumerable_GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340C2F8 *method)
{
  return (System_Collections_IEnumerator_o *)((__int64 (__fastcall *)(BasicHelper__ToIterator_d__31_T__o *))method->klass->rgctx_data->_6_BasicHelper__ToIterator_d__31_T__System_Collections_Generic_IEnumerable_T__GetEnumerator->methodPointer)(this);
}


void __noreturn BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340C0D4 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1C372A4(v3);
  System_NotSupportedException___ctor(v4, 0);
  sub_1C37180(v4, method);
}


Il2CppObject *BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340C108 *method)
{
  BasicHelper__ToIterator_d__31_T__RGCTXs *rgctx_data; // x8
  size_t actualSize; // x20
  const void *v5; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  _QWORD v13[2]; // [xsp+0h] [xbp-10h] BYREF

  v13[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->klass->rgctx_data;
  actualSize = rgctx_data->_3_T->_2.actualSize;
  v5 = (const void *)sub_1C3707C(this, (char *)rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 32);
  memcpy((char *)v13 - ((actualSize + 15) & 0x1FFFFFFF0LL), v5, actualSize);
  return (Il2CppObject *)j_il2cpp_value_box_0(
                           method->klass->rgctx_data->_3_T,
                           (char *)v13 - ((actualSize + 15) & 0x1FFFFFFF0LL),
                           v6,
                           v7,
                           v8,
                           v9,
                           v10,
                           v11);
}


void BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___System_IDisposable_Dispose(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340BDD8 *method)
{
  ;
}


void BasicHelper__ToIterator_d__31_float____ctor(
        BasicHelper__ToIterator_d__31_T__o *this,
        int32_t 1__state,
        const MethodInfo_340BB9C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  LODWORD(this->fields.__2__current) = System_Environment__get_CurrentManagedThreadId(0);
}


bool BasicHelper__ToIterator_d__31_float___MoveNext(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340BBD4 *method)
{
  int32_t _1__state; // w8
  __int64 v4; // x8
  int v5; // w1
  int32_t loopCount; // w8
  __int64 v7; // x8
  float v8; // s0
  bool result; // w0

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    loopCount = this->fields.loopCount;
    this->fields.__1__state = -1;
    v5 = loopCount + 1;
    this->fields.loopCount = loopCount + 1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4 = *(_QWORD *)&this->fields.__l__initialThreadId;
    this->fields.__1__state = -1;
    if ( !v4 )
      return 0;
    v5 = 0;
    this->fields.loopCount = 0;
  }
  if ( v5 >= SLODWORD(this->fields.__3__func) )
    return 0;
  v7 = *(_QWORD *)&this->fields.__l__initialThreadId;
  if ( !v7 )
    sub_1C372B4(this);
  v8 = (*(float (__fastcall **)(_QWORD))(v7 + 24))(*(_QWORD *)(v7 + 64));
  result = 1;
  *((float *)&this->fields.__1__state + 1) = v8;
  this->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_T__o *BasicHelper__ToIterator_d__31_float___System_Collections_Generic_IEnumerable_T__GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340BCC4 *method)
{
  int _2__current; // w21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  BasicHelper__ToIterator_d__31_T__o *v7; // x20
  __int64 _0_BasicHelper__ToIterator_d__31_T; // x0
  struct System_Func_int__T__o *func; // x1

  if ( this->fields.__1__state == -2
    && (_2__current = (int)this->fields.__2__current, _2__current == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v7 = this;
  }
  else
  {
    _0_BasicHelper__ToIterator_d__31_T = (__int64)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
    if ( (*(_BYTE *)(_0_BasicHelper__ToIterator_d__31_T + 309) & 1) == 0 )
      _0_BasicHelper__ToIterator_d__31_T = sub_1C8776C();
    v7 = (BasicHelper__ToIterator_d__31_T__o *)sub_1C372A4(_0_BasicHelper__ToIterator_d__31_T);
    System_Object___ctor((Il2CppObject *)v7, 0);
    v7->fields.__1__state = 0;
    LODWORD(v7->fields.__2__current) = System_Environment__get_CurrentManagedThreadId(0);
  }
  LODWORD(v7->fields.__3__func) = HIDWORD(this->fields.__3__func);
  func = this->fields.func;
  *(_QWORD *)&v7->fields.__l__initialThreadId = func;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7->fields.__l__initialThreadId, (int32_t)func, v5, v6);
  return (System_Collections_Generic_IEnumerator_T__o *)v7;
}


float BasicHelper__ToIterator_d__31_float___System_Collections_Generic_IEnumerator_T__get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340BC60 *method)
{
  return *((float *)&this->fields.__1__state + 1);
}


System_Collections_IEnumerator_o *BasicHelper__ToIterator_d__31_float___System_Collections_IEnumerable_GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340BD60 *method)
{
  return (System_Collections_IEnumerator_o *)BasicHelper__ToIterator_d__31_float___System_Collections_Generic_IEnumerable_T__GetEnumerator(
                                               this,
                                               (const MethodInfo_340BCC4 *)method->klass->rgctx_data->_6_BasicHelper__ToIterator_d__31_T__System_Collections_Generic_IEnumerable_T__GetEnumerator);
}


void __noreturn BasicHelper__ToIterator_d__31_float___System_Collections_IEnumerator_Reset(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340BC68 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1C372A4(v3);
  System_NotSupportedException___ctor(v4, 0);
  sub_1C37180(v4, method);
}


Il2CppObject *BasicHelper__ToIterator_d__31_float___System_Collections_IEnumerator_get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340BC9C *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  int v9; // [xsp+Ch] [xbp-4h] BYREF

  v9 = *(&this->fields.__1__state + 1);
  return (Il2CppObject *)j_il2cpp_value_box_0(method->klass->rgctx_data->_3_T, &v9, v2, v3, v4, v5, v6, v7);
}


void BasicHelper__ToIterator_d__31_float___System_IDisposable_Dispose(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340BBD0 *method)
{
  ;
}


void BasicHelper__ToIterator_d__31_object____ctor(
        BasicHelper__ToIterator_d__31_T__o *this,
        int32_t 1__state,
        const MethodInfo_340B9DC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool BasicHelper__ToIterator_d__31_object___MoveNext(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340BA14 *method)
{
  int32_t _1__state; // w8
  struct System_Func_int__T__o *func; // x8
  int32_t v5; // w1
  int32_t i_5__2; // w8
  struct System_Func_int__T__o *v7; // x8
  Il2CppObject *v8; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  bool result; // w0

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    i_5__2 = this->fields._i_5__2;
    this->fields.__1__state = -1;
    v5 = i_5__2 + 1;
    this->fields._i_5__2 = i_5__2 + 1;
  }
  else
  {
    if ( _1__state )
      return 0;
    func = this->fields.func;
    this->fields.__1__state = -1;
    if ( !func )
      return 0;
    v5 = 0;
    this->fields._i_5__2 = 0;
  }
  if ( v5 >= this->fields.loopCount )
    return 0;
  v7 = this->fields.func;
  if ( !v7 )
    sub_1C372B4(this);
  v8 = (Il2CppObject *)((__int64 (__fastcall *)(intptr_t))v7->fields.invoke_impl)(v7->fields.method_code);
  this->fields.__2__current = v8;
  p__2__current = &this->fields.__2__current;
  sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v8, v10, v11);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


System_Collections_Generic_IEnumerator_T__o *BasicHelper__ToIterator_d__31_object___System_Collections_Generic_IEnumerable_T__GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340BAF0 *method)
{
  int32_t l__initialThreadId; // w21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  BasicHelper__ToIterator_d__31_T__o *v7; // x20
  __int64 _0_BasicHelper__ToIterator_d__31_T; // x0
  struct System_Func_int__T__o *_3__func; // x1

  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v7 = this;
  }
  else
  {
    _0_BasicHelper__ToIterator_d__31_T = (__int64)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
    if ( (*(_BYTE *)(_0_BasicHelper__ToIterator_d__31_T + 309) & 1) == 0 )
      _0_BasicHelper__ToIterator_d__31_T = sub_1C8776C();
    v7 = (BasicHelper__ToIterator_d__31_T__o *)sub_1C372A4(_0_BasicHelper__ToIterator_d__31_T);
    System_Object___ctor((Il2CppObject *)v7, 0);
    v7->fields.__1__state = 0;
    v7->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  v7->fields.loopCount = this->fields.__3__loopCount;
  _3__func = this->fields.__3__func;
  v7->fields.func = _3__func;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7->fields.func, (int32_t)_3__func, v5, v6);
  return (System_Collections_Generic_IEnumerator_T__o *)v7;
}


Il2CppObject *BasicHelper__ToIterator_d__31_object___System_Collections_Generic_IEnumerator_T__get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340BAAC *method)
{
  return this->fields.__2__current;
}


System_Collections_IEnumerator_o *BasicHelper__ToIterator_d__31_object___System_Collections_IEnumerable_GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340BB8C *method)
{
  return (System_Collections_IEnumerator_o *)BasicHelper__ToIterator_d__31_object___System_Collections_Generic_IEnumerable_T__GetEnumerator(
                                               this,
                                               (const MethodInfo_340BAF0 *)method->klass->rgctx_data->_6_BasicHelper__ToIterator_d__31_T__System_Collections_Generic_IEnumerable_T__GetEnumerator);
}


void __noreturn BasicHelper__ToIterator_d__31_object___System_Collections_IEnumerator_Reset(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340BAB4 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1C372A4(v3);
  System_NotSupportedException___ctor(v4, 0);
  sub_1C37180(v4, method);
}


Il2CppObject *BasicHelper__ToIterator_d__31_object___System_Collections_IEnumerator_get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340BAE8 *method)
{
  return this->fields.__2__current;
}


void BasicHelper__ToIterator_d__31_object___System_IDisposable_Dispose(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_340BA10 *method)
{
  ;
}


void BasicHelper__WaitCallUntilSatisfyFunc_d__37___ctor(
        BasicHelper__WaitCallUntilSatisfyFunc_d__37_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BasicHelper__WaitCallUntilSatisfyFunc_d__37__MoveNext(
        BasicHelper__WaitCallUntilSatisfyFunc_d__37_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  int32_t _1__state; // w8
  float elapsedTime_5__2; // s8
  struct System_Func_float__bool__o *funcCond; // x8
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    elapsedTime_5__2 = this->fields._elapsedTime_5__2;
    this->fields.__1__state = -1;
    *(float *)&v2 = elapsedTime_5__2 + UnityEngine_Time__get_deltaTime(0);
    this->fields._elapsedTime_5__2 = *(float *)&v2;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields._elapsedTime_5__2 = 0.0;
    this->fields.__1__state = -1;
    LODWORD(v2) = 0;
  }
  funcCond = this->fields.funcCond;
  if ( !funcCond )
    sub_1C372B4(this);
  if ( (((__int64 (__fastcall *)(intptr_t, intptr_t, long double))funcCond->fields.invoke_impl)(
          funcCond->fields.method_code,
          funcCond->fields.method,
          v2)
      & 1) != 0 )
  {
    ActionExtensions__Call(this->fields.action, 0);
    return 0;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, 0, v7, v8);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *BasicHelper__WaitCallUntilSatisfyFunc_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__WaitCallUntilSatisfyFunc_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BasicHelper__WaitCallUntilSatisfyFunc_d__37__System_Collections_IEnumerator_Reset(
        BasicHelper__WaitCallUntilSatisfyFunc_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BasicHelper__WaitCallUntilSatisfyFunc_d__37_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BasicHelper__WaitCallUntilSatisfyFunc_d__37__System_Collections_IEnumerator_get_Current(
        BasicHelper__WaitCallUntilSatisfyFunc_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BasicHelper__WaitCallUntilSatisfyFunc_d__37__System_IDisposable_Dispose(
        BasicHelper__WaitCallUntilSatisfyFunc_d__37_o *this,
        const MethodInfo *method)
{
  ;
}


void BasicHelper__WaitForEndOfFrameCall_d__45___ctor(
        BasicHelper__WaitForEndOfFrameCall_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BasicHelper__WaitForEndOfFrameCall_d__45__MoveNext(
        BasicHelper__WaitForEndOfFrameCall_d__45_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4C449AF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C449AF = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    action = this->fields.action;
    this->fields.__1__state = -1;
    ActionExtensions__Call(action, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C372A4(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v4, v5, v6);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *BasicHelper__WaitForEndOfFrameCall_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__WaitForEndOfFrameCall_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BasicHelper__WaitForEndOfFrameCall_d__45__System_Collections_IEnumerator_Reset(
        BasicHelper__WaitForEndOfFrameCall_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BasicHelper__WaitForEndOfFrameCall_d__45_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BasicHelper__WaitForEndOfFrameCall_d__45__System_Collections_IEnumerator_get_Current(
        BasicHelper__WaitForEndOfFrameCall_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BasicHelper__WaitForEndOfFrameCall_d__45__System_IDisposable_Dispose(
        BasicHelper__WaitForEndOfFrameCall_d__45_o *this,
        const MethodInfo *method)
{
  ;
}


void BasicHelper___c__22___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____cctor(
        const MethodInfo_32B5074 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v6; // x20
  __int16 v7; // w9
  __int64 v8; // x0
  void (__fastcall *v9)(__int64, _QWORD); // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C8776C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8776C();
  v4 = sub_1C372A4(v3);
  v5 = (__int64)method->klass;
  v6 = v4;
  v7 = *(_WORD *)(v5 + 309);
  if ( (v7 & 1) != 0 )
  {
    v8 = (__int64)method->klass;
  }
  else
  {
    v8 = sub_1C8776C();
    v5 = (__int64)method->klass;
    v7 = *(_WORD *)(v5 + 309);
  }
  v9 = **(void (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)(v8 + 192) + 8LL);
  if ( (v7 & 1) == 0 )
    v5 = sub_1C8776C();
  v9(v6, *(_QWORD *)(*(_QWORD *)(v5 + 192) + 8LL));
  v12 = (__int64)method->klass;
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C8776C();
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C8776C();
  **(_QWORD **)(v13 + 184) = v6;
  v14 = (__int64)method->klass;
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C8776C();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C8776C();
  sub_1C36FFC(*(CGThumbnailListItem_o **)(v15 + 184), v6, v10, v11);
}


void BasicHelper___c__22___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor(
        BasicHelper___c__22_K__V__o *this,
        const MethodInfo_32B5168 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o BasicHelper___c__22___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Remove_b__22_0(
        BasicHelper___c__22_K__V__o *this,
        System_Collections_Generic_KeyValuePair_K__V__o pair,
        const MethodInfo_32B5170 *method)
{
  Il2CppObject *value; // x19
  Il2CppObject *key; // x2
  BasicHelper___c__22_K__V__RGCTXs *rgctx_data; // x8
  size_t actualSize; // x20
  MethodInfo *_4_System_Collections_Generic_KeyValuePair_K__V__get_Key; // x1
  void (*methodPointer)(); // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v9; // x0
  void *v10; // x1
  _QWORD v11[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  value = pair.fields.value;
  key = pair.fields.key;
  v11[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->klass->rgctx_data;
  actualSize = rgctx_data->_6_K->_2.actualSize;
  _4_System_Collections_Generic_KeyValuePair_K__V__get_Key = rgctx_data->_4_System_Collections_Generic_KeyValuePair_K__V__get_Key;
  methodPointer = _4_System_Collections_Generic_KeyValuePair_K__V__get_Key->methodPointer;
  v11[0] = (char *)v11 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  _4_System_Collections_Generic_KeyValuePair_K__V__get_Key->invoker_method(
    methodPointer,
    _4_System_Collections_Generic_KeyValuePair_K__V__get_Key,
    key,
    (void **)v11,
    (void *)v11[0]);
  v9 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                   value,
                                                                   (char *)v11 - ((actualSize + 15) & 0x1FFFFFFF0LL),
                                                                   actualSize);
  result.monitor = v10;
  result.klass = v9;
  return result;
}


void BasicHelper___c__22_int__object____cctor(const MethodInfo_32B4FA8 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C8776C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8776C();
  v4 = (Il2CppObject *)sub_1C372A4(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C8776C();
  System_Object___ctor(v4, 0);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8776C();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C8776C();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8776C();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8776C();
  sub_1C36FFC(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void BasicHelper___c__22_int__object____ctor(BasicHelper___c__22_K__V__o *this, const MethodInfo_32B5064 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BasicHelper___c__22_int__object____Remove_b__22_0(
        BasicHelper___c__22_K__V__o *this,
        System_Collections_Generic_KeyValuePair_K__V__o pair,
        const MethodInfo_32B506C *method)
{
  return (int32_t)pair.fields.key;
}


void BasicHelper___c__26___Il2CppFullySharedGenericType____cctor(const MethodInfo_32B56F0 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v6; // x20
  __int16 v7; // w9
  __int64 v8; // x0
  void (__fastcall *v9)(__int64, _QWORD); // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C8776C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8776C();
  v4 = sub_1C372A4(v3);
  v5 = (__int64)method->klass;
  v6 = v4;
  v7 = *(_WORD *)(v5 + 309);
  if ( (v7 & 1) != 0 )
  {
    v8 = (__int64)method->klass;
  }
  else
  {
    v8 = sub_1C8776C();
    v5 = (__int64)method->klass;
    v7 = *(_WORD *)(v5 + 309);
  }
  v9 = **(void (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)(v8 + 192) + 8LL);
  if ( (v7 & 1) == 0 )
    v5 = sub_1C8776C();
  v9(v6, *(_QWORD *)(*(_QWORD *)(v5 + 192) + 8LL));
  v12 = (__int64)method->klass;
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C8776C();
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C8776C();
  **(_QWORD **)(v13 + 184) = v6;
  v14 = (__int64)method->klass;
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C8776C();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C8776C();
  sub_1C36FFC(*(CGThumbnailListItem_o **)(v15 + 184), v6, v10, v11);
}


void BasicHelper___c__26___Il2CppFullySharedGenericType____ctor(
        BasicHelper___c__26_T__o *this,
        const MethodInfo_32B57E4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BasicHelper___c__26___Il2CppFullySharedGenericType____ExcludeNull_b__26_0(
        BasicHelper___c__26_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o x,
        const MethodInfo_32B57EC *method)
{
  __int64 v3; // x21
  __int64 v4; // x8
  char *v5; // x19
  _QWORD v7[2]; // [xsp+0h] [xbp-10h] BYREF

  v7[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7[0] = x.klass;
  v3 = *((_QWORD *)x.monitor + 4);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 24LL);
  x.monitor = (void *)*(unsigned int *)(v4 + 252);
  v5 = (char *)v7 - (((__int64)x.monitor + 15) & 0x1FFFFFFF0LL);
  if ( *(int *)(v4 + 40) >= 0 )
    x.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v7;
  memcpy((char *)v7 - (((__int64)x.monitor + 15) & 0x1FFFFFFF0LL), x.klass, (size_t)x.monitor);
  return sub_1C37268(*(_QWORD *)(*(_QWORD *)(v3 + 192) + 24LL), v5) & 1;
}


void BasicHelper___c__26_object____cctor(const MethodInfo_32B5620 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C8776C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8776C();
  v4 = (Il2CppObject *)sub_1C372A4(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C8776C();
  System_Object___ctor(v4, 0);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8776C();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C8776C();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8776C();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8776C();
  sub_1C36FFC(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void BasicHelper___c__26_object____ctor(BasicHelper___c__26_T__o *this, const MethodInfo_32B56DC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BasicHelper___c__26_object____ExcludeNull_b__26_0(
        BasicHelper___c__26_T__o *this,
        Il2CppObject *x,
        const MethodInfo_32B56E4 *method)
{
  return x != 0;
}