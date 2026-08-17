bool BasicHelper__Any_BattleResultEventItemComponent_EventDropItemInfo_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_38101F8 *method)
{
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24
  __int64 (__fastcall *invoke_impl)(intptr_t, BattleResultEventItemComponent_EventDropItemInfo_o *, intptr_t); // x8
  intptr_t method_code; // x0
  intptr_t v11; // x2
  BattleResultEventItemComponent_EventDropItemInfo_o v13; // [xsp+0h] [xbp-80h] BYREF
  BattleResultEventItemComponent_EventDropItemInfo_o v14; // [xsp+20h] [xbp-60h] BYREF

  v5 = (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_224B964(method);
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
                                                       &v13,
                                                       v5,
                                                       v7,
                                                       (const MethodInfo_44F9610 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      if ( !func )
        break;
      invoke_impl = (__int64 (__fastcall *)(intptr_t, BattleResultEventItemComponent_EventDropItemInfo_o *, intptr_t))func->fields.invoke_impl;
      method_code = func->fields.method_code;
      v11 = func->fields.method;
      v14 = v13;
      if ( (invoke_impl(method_code, &v14, v11) & 1) == 0 )
      {
        v8 = ++v7 < size;
        if ( size != v7 )
          continue;
      }
      return v8;
    }
LABEL_12:
    sub_2213CDC(list, func);
  }
  return 0;
}


bool BasicHelper__Any_Int32Enum_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_380FBFC *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24

  v5 = list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_224B964(method);
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
                                                       (const MethodInfo_4469790 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
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
    sub_2213CDC(list, func);
  }
  return 0;
}


bool BasicHelper__Any_Int32Enum__58784936(
        System_Int32Enum_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_380FCA8 *method)
{
  System_Int32Enum_array *v4; // x20
  il2cpp_array_size_t max_length; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22

  v4 = array;
  if ( !method->rgctx_data )
    array = (System_Int32Enum_array *)sub_224B964(method);
  if ( !v4 )
    goto LABEL_11;
  max_length = v4->max_length;
  v6 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_2213CE4(array);
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
LABEL_11:
    sub_2213CDC(array, func);
  }
  return v6;
}


bool BasicHelper__Any_ListViewSort_BonusFilterInfo_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_38102B8 *method)
{
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24
  __int64 (__fastcall *invoke_impl)(intptr_t, ListViewSort_BonusFilterInfo_o *, intptr_t); // x9
  intptr_t method_code; // x0
  intptr_t v11; // x2
  ListViewSort_BonusFilterInfo_o v13; // [xsp+8h] [xbp-78h] BYREF
  ListViewSort_BonusFilterInfo_o v14; // [xsp+20h] [xbp-60h] BYREF

  v5 = (System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_224B964(method);
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
                                                       &v13,
                                                       v5,
                                                       v7,
                                                       (const MethodInfo_451ECAC *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      if ( !func )
        break;
      invoke_impl = (__int64 (__fastcall *)(intptr_t, ListViewSort_BonusFilterInfo_o *, intptr_t))func->fields.invoke_impl;
      method_code = func->fields.method_code;
      v11 = func->fields.method;
      v14 = v13;
      if ( (invoke_impl(method_code, &v14, v11) & 1) == 0 )
      {
        v8 = ++v7 < size;
        if ( size != v7 )
          continue;
      }
      return v8;
    }
LABEL_12:
    sub_2213CDC(list, func);
  }
  return 0;
}


bool BasicHelper__Any_ValueTuple_int__Int32Enum__(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_380F8AC *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24

  v5 = list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_224B964(method);
  if ( !v5 )
    goto LABEL_12;
  size = v5->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 1;
    while ( 1 )
    {
      list = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_ValueTuple_int__Int32Enum____get_Item(
                                                       v5,
                                                       v7,
                                                       (const MethodInfo_43F4A98 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
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
    sub_2213CDC(list, func);
  }
  return 0;
}


bool BasicHelper__Any_ValueTuple_int__int__int__long__int__int__(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_380F958 *method)
{
  System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int___o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24
  __int64 (__fastcall *invoke_impl)(intptr_t, System_ValueTuple_int__int__int__long__int__int__o *, intptr_t); // x8
  intptr_t method_code; // x0
  intptr_t v11; // x2
  System_ValueTuple_int__int__int__long__int__int__o v13; // [xsp+0h] [xbp-80h] BYREF
  System_ValueTuple_int__int__int__long__int__int__o v14; // [xsp+20h] [xbp-60h] BYREF

  v5 = (System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int___o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_224B964(method);
  if ( !v5 )
    goto LABEL_12;
  size = v5->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 1;
    while ( 1 )
    {
      list = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int____get_Item(
                                                       &v13,
                                                       v5,
                                                       v7,
                                                       (const MethodInfo_440C1FC *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      if ( !func )
        break;
      invoke_impl = (__int64 (__fastcall *)(intptr_t, System_ValueTuple_int__int__int__long__int__int__o *, intptr_t))func->fields.invoke_impl;
      method_code = func->fields.method_code;
      v11 = func->fields.method;
      v14 = v13;
      if ( (invoke_impl(method_code, &v14, v11) & 1) == 0 )
      {
        v8 = ++v7 < size;
        if ( size != v7 )
          continue;
      }
      return v8;
    }
LABEL_12:
    sub_2213CDC(list, func);
  }
  return 0;
}


bool BasicHelper__Any___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_380FF28 *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  const MethodInfo_380FF28_RGCTXs *rgctx_data; // x8
  _QWORD *v7; // x22
  int v8; // w0
  int v9; // w23
  int v10; // w26
  bool v11; // w25
  const MethodInfo_380FF28_RGCTXs *v12; // x8
  MethodInfo *_3_System_Collections_Generic_List_T__get_Item; // x1
  Il2CppMethodPointer methodPointer; // x0
  __int64 (__fastcall *invoker_method)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x8
  const MethodInfo_380FF28_RGCTXs *v16; // x9
  _QWORD *v17; // x8
  MethodInfo *_5_System_Func_T__bool__Invoke; // x1
  Il2CppMethodPointer v19; // x0
  void (__fastcall *v20)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x9
  _QWORD v22[2]; // [xsp+0h] [xbp-20h] BYREF
  int v23; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v24; // [xsp+18h] [xbp-8h]

  v5 = list;
  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    list = (System_Collections_Generic_List_T__o *)sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  v7 = (_QWORD *)((char *)v22 - ((rgctx_data->_4_T->_2.actualSize + 15LL) & 0x1FFFFFFF0LL));
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
      v12 = method->rgctx_data;
      v23 = v10;
      _3_System_Collections_Generic_List_T__get_Item = v12->_3_System_Collections_Generic_List_T__get_Item;
      methodPointer = _3_System_Collections_Generic_List_T__get_Item->methodPointer;
      invoker_method = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))_3_System_Collections_Generic_List_T__get_Item->invoker_method;
      v22[0] = &v23;
      v22[1] = v7;
      list = (System_Collections_Generic_List_T__o *)invoker_method(
                                                       methodPointer,
                                                       _3_System_Collections_Generic_List_T__get_Item,
                                                       v5,
                                                       v22,
                                                       v7);
      if ( !func )
        break;
      v16 = method->rgctx_data;
      v17 = v7;
      if ( (v16->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v17 = (_QWORD *)*v7;
      _5_System_Func_T__bool__Invoke = v16->_5_System_Func_T__bool__Invoke;
      v19 = _5_System_Func_T__bool__Invoke->methodPointer;
      v20 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))_5_System_Func_T__bool__Invoke->invoker_method;
      v22[0] = v17;
      v20(v19, _5_System_Func_T__bool__Invoke, func, v22, &v23);
      if ( !(_BYTE)v23 )
      {
        v11 = ++v10 < v9;
        if ( v9 != v10 )
          continue;
      }
      return v11;
    }
LABEL_14:
    sub_2213CDC(list, func);
  }
  return 0;
}


bool BasicHelper__Any___Il2CppFullySharedGenericType__58785936(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_3810090 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v5; // x21
  const MethodInfo_3810090_RGCTXs *rgctx_data; // x8
  size_t actualSize; // x22
  il2cpp_array_size_t max_length; // x8
  bool v9; // w25
  unsigned __int64 v10; // x26
  const MethodInfo_3810090_RGCTXs *v11; // x9
  char *v12; // x8
  MethodInfo *_3_System_Func_T__bool__Invoke; // x1
  Il2CppMethodPointer methodPointer; // x0
  __int64 (__fastcall *invoker_method)(Il2CppMethodPointer, MethodInfo *, System_Func_T__bool__o *, char **, char *); // x9
  __int64 v17; // [xsp+0h] [xbp-20h] BYREF
  char *v18; // [xsp+8h] [xbp-18h] BYREF
  char v19[4]; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v20; // [xsp+18h] [xbp-8h]

  v5 = array;
  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    array = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)sub_224B964(method);
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
        sub_2213CE4(array);
      array = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)memcpy(
                                                                              (char *)&v17
                                                                            - ((actualSize + 15) & 0x1FFFFFFF0LL),
                                                                              (char *)v5->m_Items
                                                                            + v10
                                                                            * (unsigned int)v5->obj.klass->_2.native_size,
                                                                              actualSize);
      if ( !func )
        break;
      v11 = method->rgctx_data;
      v12 = (char *)&v17 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      if ( (v11->_2_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v12 = *(char **)((char *)&v17 - ((actualSize + 15) & 0x1FFFFFFF0LL));
      _3_System_Func_T__bool__Invoke = v11->_3_System_Func_T__bool__Invoke;
      methodPointer = _3_System_Func_T__bool__Invoke->methodPointer;
      invoker_method = (__int64 (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Func_T__bool__o *, char **, char *))_3_System_Func_T__bool__Invoke->invoker_method;
      v18 = v12;
      array = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)invoker_method(
                                                                              methodPointer,
                                                                              _3_System_Func_T__bool__Invoke,
                                                                              func,
                                                                              &v18,
                                                                              v19);
      if ( !v19[0] )
      {
        LODWORD(max_length) = v5->max_length;
        v9 = (__int64)++v10 < (int)max_length;
        if ( (__int64)v10 < (int)max_length )
          continue;
      }
      return v9;
    }
LABEL_13:
    sub_2213CDC(array, func);
  }
  return v9;
}


bool BasicHelper__Any_bool_(
        System_Boolean_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_380FA18 *method)
{
  System_Boolean_array *v4; // x20
  il2cpp_array_size_t max_length; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22

  v4 = array;
  if ( !method->rgctx_data )
    array = (System_Boolean_array *)sub_224B964(method);
  if ( !v4 )
    goto LABEL_11;
  max_length = v4->max_length;
  v6 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_2213CE4(array);
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
LABEL_11:
    sub_2213CDC(array, func);
  }
  return v6;
}


bool BasicHelper__Any_int_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_380FAB4 *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24

  v5 = (System_Collections_Generic_List_int__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_224B964(method);
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
                                                       (const MethodInfo_4466F78 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
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
    sub_2213CDC(list, func);
  }
  return 0;
}


bool BasicHelper__Any_int__58784608(
        System_Int32_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_380FB60 *method)
{
  System_Int32_array *v4; // x20
  il2cpp_array_size_t max_length; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22

  v4 = array;
  if ( !method->rgctx_data )
    array = (System_Int32_array *)sub_224B964(method);
  if ( !v4 )
    goto LABEL_11;
  max_length = v4->max_length;
  v6 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_2213CE4(array);
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
LABEL_11:
    sub_2213CDC(array, func);
  }
  return v6;
}


bool BasicHelper__Any_long_(System_Int64_array *array, System_Func_T__bool__o *func, const MethodInfo_380FD44 *method)
{
  System_Int64_array *v4; // x20
  il2cpp_array_size_t max_length; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22

  v4 = array;
  if ( !method->rgctx_data )
    array = (System_Int64_array *)sub_224B964(method);
  if ( !v4 )
    goto LABEL_11;
  max_length = v4->max_length;
  v6 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_2213CE4(array);
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
LABEL_11:
    sub_2213CDC(array, func);
  }
  return v6;
}


bool BasicHelper__Any_object_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_380FDE0 *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24

  v5 = (System_Collections_Generic_List_object__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_224B964(method);
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
                                                       (const MethodInfo_4483994 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
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
    sub_2213CDC(list, func);
  }
  return 0;
}


bool BasicHelper__Any_object__58785420(
        System_Object_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_380FE8C *method)
{
  System_Object_array *v4; // x20
  il2cpp_array_size_t max_length; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22

  v4 = array;
  if ( !method->rgctx_data )
    array = (System_Object_array *)sub_224B964(method);
  if ( !v4 )
    goto LABEL_11;
  max_length = v4->max_length;
  v6 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_2213CE4(array);
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
LABEL_11:
    sub_2213CDC(array, func);
  }
  return v6;
}


int32_t BasicHelper__Clamp(int32_t value, int32_t min, int32_t max, const MethodInfo *method)
{
  int32_t v4; // w8
  int32_t v5; // w9

  if ( min <= max )
    v4 = max;
  else
    v4 = min;
  if ( min >= max )
    v5 = max;
  else
    v5 = min;
  if ( v4 >= value )
    v4 = value;
  if ( v5 <= value )
    return v4;
  else
    return v5;
}


bool BasicHelper__ContainsSelfNotNull___Il2CppFullySharedGenericType_(
        System_Collections_Generic_HashSet_T__o *self,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item,
        const MethodInfo_38103D8 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x20
  __int64 v5; // x23
  _QWORD *monitor; // x21
  __int64 v7; // x8
  size_t v8; // x2
  _QWORD *v9; // x21
  int v10; // w24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v11; // x1
  __int64 *v12; // x1
  __int64 v13; // x0
  void (__fastcall *v14)(__int64, __int64 *, System_Collections_Generic_HashSet_T__o *, _QWORD **, _BYTE *); // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v16; // [xsp+0h] [xbp-20h] BYREF
  _QWORD *v17; // [xsp+8h] [xbp-18h] BYREF
  _BYTE v18[4]; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v19; // [xsp+18h] [xbp-8h]

  klass = item.klass;
  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *((_QWORD *)item.monitor + 7);
  v16 = item.klass;
  if ( !v5 )
  {
    monitor = item.monitor;
    sub_224B964(item.monitor);
    v5 = monitor[7];
  }
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(unsigned int *)(v7 + 252);
  v9 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&v16 - ((v8 + 15) & 0x1FFFFFFF0LL));
  if ( !self )
    return 0;
  v10 = *(_DWORD *)(v7 + 40);
  if ( v10 >= 0 )
    v11 = &v16;
  else
    v11 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v16 - ((v8 + 15) & 0x1FFFFFFF0LL), v11, v8);
  v12 = *(__int64 **)(v5 + 16);
  v13 = *v12;
  if ( (v10 & 0x80000000) == 0 )
    v9 = (_QWORD *)*v9;
  v14 = (void (__fastcall *)(__int64, __int64 *, System_Collections_Generic_HashSet_T__o *, _QWORD **, _BYTE *))v12[2];
  v17 = v9;
  v14(v13, v12, self, &v17, v18);
  return v18[0] != 0;
}


bool BasicHelper__ContainsSelfNotNull_int_(
        System_Collections_Generic_HashSet_T__o *self,
        int32_t item,
        const MethodInfo_3810380 *method)
{
  if ( method->rgctx_data )
  {
    if ( self )
      return System_Collections_Generic_HashSet_int___Contains(
               (System_Collections_Generic_HashSet_int__o *)self,
               item,
               (const MethodInfo_42B44F4 *)method->rgctx_data->_2_System_Collections_Generic_HashSet_T__Contains);
  }
  else
  {
    sub_224B964(method);
    if ( self )
      return System_Collections_Generic_HashSet_int___Contains(
               (System_Collections_Generic_HashSet_int__o *)self,
               item,
               (const MethodInfo_42B44F4 *)method->rgctx_data->_2_System_Collections_Generic_HashSet_T__Contains);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *BasicHelper__Convert2IntArray(System_String_o *self, uint16_t separator, const MethodInfo *method)
{
  System_String_o *v4; // x20
  System_String_array *v5; // x0
  System_String_array *v6; // x19
  il2cpp_array_size_t max_length; // x8
  System_String_o *v8; // x20
  unsigned __int64 v9; // x21
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  v4 = self;
  if ( (byte_59722BF & 1) == 0 )
  {
    self = (System_String_o *)sub_2213A60(&int___TypeInfo);
    byte_59722BF = 1;
  }
  result = 0;
  if ( !v4 )
LABEL_17:
    sub_2213CDC(self, separator);
  v5 = System_String__Split(v4, separator, 0, 0);
  if ( !v5 )
    return 0;
  v6 = v5;
  self = (System_String_o *)sub_2213B20(int___TypeInfo, LODWORD(v5->max_length));
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
    sub_2213CE4(self);
  }
  return (System_Int32_array *)v8;
}


int32_t BasicHelper__DecryptValue(int32_t self, const MethodInfo *method)
{
  if ( (byte_59722B7 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59722B7 = 1;
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Decrypt(self, 0);
}


int32_t BasicHelper__DecryptValue_51160428(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o self,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v5; // 0:x0.16

  v2 = *(_QWORD *)&self.fields.fakeValue;
  v3 = *(_QWORD *)&self.fields.currentCryptoKey;
  if ( (byte_59722B8 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59722B8 = 1;
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&self.fields.fakeValue);
  *(_QWORD *)&v5.fields.currentCryptoKey = v3;
  *(_QWORD *)&v5.fields.fakeValue = v2;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v5, 0);
}


System_String_o *BasicHelper__DecryptValue_51160620(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *self,
        const MethodInfo *method)
{
  if ( (byte_59722BA & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_59722BA = 1;
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(self, 0);
}


int64_t BasicHelper__DecryptValue_51160708(int64_t self, const MethodInfo *method)
{
  if ( (byte_59722BB & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59722BB = 1;
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Decrypt(self, 0);
}


int64_t BasicHelper__DecryptValue_51160796(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *self,
        const MethodInfo *method)
{
  __int128 v3; // q1
  int v4; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_59722BC & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59722BC = 1;
  }
  v3 = *(_OWORD *)&self->fields.fakeValue;
  v4 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&self->fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v3;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v6, 0);
}


System_Collections_IEnumerator_o *BasicHelper__DelayCall(
        float delay,
        System_Action_o *action,
        bool isWaitEvenIfNoDelayTime,
        const MethodInfo *method)
{
  bool v7; // w21
  __int64 v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_59722C2 & 1) == 0 )
  {
    sub_2213A60(&BasicHelper__DelayCall_d__36_TypeInfo);
    byte_59722C2 = 1;
  }
  v7 = isWaitEvenIfNoDelayTime;
  v8 = sub_2213CCC(BasicHelper__DelayCall_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(float *)(v8 + 32) = delay;
  *(_QWORD *)(v8 + 40) = action;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 40), (int32_t)action, v9, v10, v11, v12, v13, v14);
  result = (System_Collections_IEnumerator_o *)v8;
  *(_BYTE *)(v8 + 36) = v7;
  return result;
}


System_Collections_IEnumerator_o *BasicHelper__DelayCall_51163500(
        int32_t delayFrameCount,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59722C3 & 1) == 0 )
  {
    sub_2213A60(&BasicHelper__DelayCall_d__38_TypeInfo);
    byte_59722C3 = 1;
  }
  v5 = sub_2213CCC(BasicHelper__DelayCall_d__38_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 32) = delayFrameCount;
  *(_QWORD *)(v5 + 40) = action;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)action, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *BasicHelper__DelayCall_ShowAllEx_DamageFuncArgument_(
        float delay,
        System_Action_T__o *action,
        HutongGames_PlayMaker_Actions_ShowAllEx_DamageFuncArgument_o *arg,
        const MethodInfo_38106C4 *method)
{
  const MethodInfo_38106C4_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__DelayCall_d__37_T; // x0
  BasicHelper__DelayCall_d__37_T__o *v10; // x0
  const MethodInfo_38106C4_RGCTXs *v11; // x8
  BasicHelper__DelayCall_d__37_T__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int128 v21; // q0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__DelayCall_d__37_T = (__int64)rgctx_data->_0_BasicHelper__DelayCall_d__37_T_;
  if ( (*((_WORD *)&rgctx_data->_0_BasicHelper__DelayCall_d__37_T_->_2.bitflags2 + 1) & 1) == 0 )
    _0_BasicHelper__DelayCall_d__37_T = sub_224B908(*(long double *)&delay);
  v10 = (BasicHelper__DelayCall_d__37_T__o *)sub_2213CCC(_0_BasicHelper__DelayCall_d__37_T);
  v11 = method->rgctx_data;
  v12 = v10;
  BasicHelper__DelayCall_d__37_ShowAllEx_DamageFuncArgument____ctor(
    v10,
    0,
    (const MethodInfo_3B1C5BC *)v11->_1_BasicHelper__DelayCall_d__37_T___ctor);
  if ( !v12 )
    sub_2213CDC(v13, v14);
  v12->fields.delay = delay;
  v12->fields.action = action;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->fields.action, (int32_t)action, v15, v16, v17, v18, v19, v20);
  v21 = *(_OWORD *)&arg->fields.perf;
  v12[1].monitor = *(void **)&arg->fields.damageIndex;
  *(_OWORD *)&v12->fields.arg = v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->fields.arg, 0, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v12;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *BasicHelper__DelayCall___Il2CppFullySharedGenericType_(
        float delay,
        System_Action_T__o *action,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg,
        const MethodInfo_381055C *method)
{
  _QWORD *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  __int64 *v8; // x8
  size_t v9; // x22
  __int64 v10; // x0
  System_Collections_IEnumerator_o *v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  _QWORD *v14; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v15; // x1
  _QWORD v17[2]; // [xsp+0h] [xbp-18h] BYREF

  monitor = arg.monitor;
  klass = arg.klass;
  v17[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = (__int64 *)*((_QWORD *)arg.monitor + 7);
  v17[0] = arg.klass;
  if ( !v8 )
  {
    sub_224B964(arg.monitor);
    v8 = (__int64 *)monitor[7];
  }
  v9 = *(unsigned int *)(v8[3] + 252);
  v10 = *v8;
  if ( (*(_WORD *)(*v8 + 309) & 1) == 0 )
    v10 = sub_224B908(*(long double *)&delay);
  v11 = (System_Collections_IEnumerator_o *)sub_2213CCC(v10);
  v12 = (**(__int64 (__fastcall ***)(System_Collections_IEnumerator_o *, _QWORD))(monitor[7] + 8LL))(v11, 0);
  if ( !v11 )
    sub_2213CDC(v12, v13);
  sub_201DAE0(v11, *(_QWORD *)(*(_QWORD *)monitor[7] + 128LL) + 64LL, delay);
  sub_201B1D4(v11, *(_QWORD *)(*(_QWORD *)monitor[7] + 128LL) + 96LL, action);
  v14 = (_QWORD *)monitor[7];
  if ( *(int *)(v14[3] + 40LL) >= 0 )
    v15 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v17;
  else
    v15 = klass;
  memcpy((char *)v17 - ((v9 + 15) & 0x1FFFFFFF0LL), v15, v9);
  sub_2213A8C(v11, *(_QWORD *)(*v14 + 128LL) + 128LL, (char *)v17 - ((v9 + 15) & 0x1FFFFFFF0LL), (unsigned int)v9);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *BasicHelper__DelayCall_object_(
        float delay,
        System_Action_T__o *action,
        Il2CppObject *arg,
        const MethodInfo_38104C0 *method)
{
  const MethodInfo_38104C0_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__DelayCall_d__37_T; // x0
  BasicHelper__DelayCall_d__37_T__o *v10; // x0
  const MethodInfo_38104C0_RGCTXs *v11; // x8
  BasicHelper__DelayCall_d__37_T__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__DelayCall_d__37_T = (__int64)rgctx_data->_0_BasicHelper__DelayCall_d__37_T_;
  if ( (*((_WORD *)&rgctx_data->_0_BasicHelper__DelayCall_d__37_T_->_2.bitflags2 + 1) & 1) == 0 )
    _0_BasicHelper__DelayCall_d__37_T = sub_224B908(*(long double *)&delay);
  v10 = (BasicHelper__DelayCall_d__37_T__o *)sub_2213CCC(_0_BasicHelper__DelayCall_d__37_T);
  v11 = method->rgctx_data;
  v12 = v10;
  BasicHelper__DelayCall_d__37_object____ctor(
    v10,
    0,
    (const MethodInfo_3B1C1B8 *)v11->_1_BasicHelper__DelayCall_d__37_T___ctor);
  if ( !v12 )
    sub_2213CDC(v13, v14);
  v12->fields.delay = delay;
  v12->fields.action = action;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->fields.action, (int32_t)action, v15, v16, v17, v18, v19, v20);
  v12->fields.arg = arg;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->fields.arg, (int32_t)arg, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v12;
}


void BasicHelper__Destroy(UnityEngine_Component_o *self, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x19

  if ( (byte_59722C7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59722C7 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v3 )
  {
    if ( !self )
      sub_2213CDC(v3, v4);
    gameObject = UnityEngine_Component__get_gameObject(self, 0);
    GameObjectHelper__SetActiveSafely(gameObject, 0, v6);
    v8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(self, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_83459800(v8, 0);
  }
}


System_String_o *BasicHelper__EncryptDecryptValue(System_String_o *self, const MethodInfo *method)
{
  if ( (byte_59722B9 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_59722B9 = 1;
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__EncryptDecrypt(self, 0);
}


bool BasicHelper__EqualExceptNullOrEmpty(System_String_o *self, System_String_o *target, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1

  if ( System_String__IsNullOrEmpty(self, 0) )
    return 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(target, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !self )
    sub_2213CDC(IsNullOrEmpty, v6);
  return System_String__Equals_75686512(self, target, 0);
}


System_Collections_Generic_IEnumerable_T__o *BasicHelper__ExcludeNull___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        const MethodInfo_38108C0 *method)
{
  long double v2; // q0
  const MethodInfo_38108C0_RGCTXs *rgctx_data; // x8
  __int64 _3_BasicHelper___c__27_T; // x0
  const MethodInfo_38108C0_RGCTXs *v7; // x8
  __int64 v8; // x0
  __int64 v9; // x21
  __int64 v10; // x0
  const MethodInfo_38108C0_RGCTXs *v11; // x8
  __int64 v12; // x0
  __int64 _2_System_Func_T__bool; // x8
  __int64 v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  long double v21; // q0
  Il2CppClass *v22; // x0
  Il2CppClass *v23; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  _3_BasicHelper___c__27_T = (__int64)rgctx_data->_3_BasicHelper___c__27_T_;
  if ( (*(_WORD *)(_3_BasicHelper___c__27_T + 309) & 1) == 0 )
    _3_BasicHelper___c__27_T = sub_224B908(v2);
  if ( !*(_DWORD *)(_3_BasicHelper___c__27_T + 228) )
    *(__n128 *)&v2 = j_il2cpp_runtime_class_init_0(_3_BasicHelper___c__27_T, method);
  v7 = method->rgctx_data;
  v8 = (__int64)v7->_3_BasicHelper___c__27_T_;
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
  {
    v8 = sub_224B908(v2);
    v7 = method->rgctx_data;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 184) + 8LL);
  if ( !v9 )
  {
    v10 = (__int64)v7->_3_BasicHelper___c__27_T_;
    if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
      v10 = sub_224B908(v2);
    if ( !*(_DWORD *)(v10 + 228) )
      *(__n128 *)&v2 = j_il2cpp_runtime_class_init_0(v10, method);
    v11 = method->rgctx_data;
    v12 = (__int64)v11->_3_BasicHelper___c__27_T_;
    if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    {
      v12 = sub_224B908(v2);
      v11 = method->rgctx_data;
    }
    _2_System_Func_T__bool = (__int64)v11->_2_System_Func_T__bool_;
    v14 = **(_QWORD **)(v12 + 184);
    if ( (*(_WORD *)(_2_System_Func_T__bool + 309) & 1) == 0 )
      _2_System_Func_T__bool = sub_224B908(v2);
    v9 = sub_2213CCC(_2_System_Func_T__bool);
    ((void (__fastcall *)(__int64, __int64, MethodInfo *))method->rgctx_data->_5_System_Func_T__bool___ctor->methodPointer)(
      v9,
      v14,
      method->rgctx_data->_4_BasicHelper___c__27_T___ExcludeNull_b__27_0);
    v22 = method->rgctx_data->_3_BasicHelper___c__27_T_;
    if ( (*((_WORD *)&v22->_2.bitflags2 + 1) & 1) == 0 )
      v22 = (Il2CppClass *)sub_224B908(v21);
    *((_QWORD *)v22->static_fields + 1) = v9;
    v23 = method->rgctx_data->_3_BasicHelper___c__27_T_;
    if ( (*((_WORD *)&v23->_2.bitflags2 + 1) & 1) == 0 )
      v23 = (Il2CppClass *)sub_224B908(v21);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v23->static_fields + 8), v9, v15, v16, v17, v18, v19, v20);
    v7 = method->rgctx_data;
  }
  return (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *, __int64))v7->_6_System_Linq_Enumerable_Where_T_->methodPointer)(
                                                          sequence,
                                                          v9);
}


System_Collections_Generic_IEnumerable_T__o *BasicHelper__ExcludeNull_object_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        const MethodInfo_381076C *method)
{
  long double v2; // q0
  const MethodInfo_381076C_RGCTXs *rgctx_data; // x8
  __int64 _3_BasicHelper___c__27_T; // x0
  const MethodInfo_381076C_RGCTXs *v7; // x8
  __int64 v8; // x0
  System_Func_object__bool__o *v9; // x21
  __int64 v10; // x0
  const MethodInfo_381076C_RGCTXs *v11; // x8
  __int64 v12; // x0
  __int64 _2_System_Func_T__bool; // x8
  Il2CppObject *v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  long double v21; // q0
  Il2CppClass *v22; // x0
  Il2CppClass *v23; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  _3_BasicHelper___c__27_T = (__int64)rgctx_data->_3_BasicHelper___c__27_T_;
  if ( (*(_WORD *)(_3_BasicHelper___c__27_T + 309) & 1) == 0 )
    _3_BasicHelper___c__27_T = sub_224B908(v2);
  if ( !*(_DWORD *)(_3_BasicHelper___c__27_T + 228) )
    *(__n128 *)&v2 = j_il2cpp_runtime_class_init_0(_3_BasicHelper___c__27_T, method);
  v7 = method->rgctx_data;
  v8 = (__int64)v7->_3_BasicHelper___c__27_T_;
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
  {
    v8 = sub_224B908(v2);
    v7 = method->rgctx_data;
  }
  v9 = *(System_Func_object__bool__o **)(*(_QWORD *)(v8 + 184) + 8LL);
  if ( !v9 )
  {
    v10 = (__int64)v7->_3_BasicHelper___c__27_T_;
    if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
      v10 = sub_224B908(v2);
    if ( !*(_DWORD *)(v10 + 228) )
      *(__n128 *)&v2 = j_il2cpp_runtime_class_init_0(v10, method);
    v11 = method->rgctx_data;
    v12 = (__int64)v11->_3_BasicHelper___c__27_T_;
    if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    {
      v12 = sub_224B908(v2);
      v11 = method->rgctx_data;
    }
    _2_System_Func_T__bool = (__int64)v11->_2_System_Func_T__bool_;
    v14 = **(Il2CppObject ***)(v12 + 184);
    if ( (*(_WORD *)(_2_System_Func_T__bool + 309) & 1) == 0 )
      _2_System_Func_T__bool = sub_224B908(v2);
    v9 = (System_Func_object__bool__o *)sub_2213CCC(_2_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v9,
      v14,
      (intptr_t)method->rgctx_data->_4_BasicHelper___c__27_T___ExcludeNull_b__27_0,
      (const MethodInfo_428A438 *)method->rgctx_data->_5_System_Func_T__bool___ctor);
    v22 = method->rgctx_data->_3_BasicHelper___c__27_T_;
    if ( (*((_WORD *)&v22->_2.bitflags2 + 1) & 1) == 0 )
      v22 = (Il2CppClass *)sub_224B908(v21);
    *((_QWORD *)v22->static_fields + 1) = v9;
    v23 = method->rgctx_data->_3_BasicHelper___c__27_T_;
    if ( (*((_WORD *)&v23->_2.bitflags2 + 1) & 1) == 0 )
      v23 = (Il2CppClass *)sub_224B908(v21);
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)((char *)v23->static_fields + 8),
      (int32_t)v9,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    v7 = method->rgctx_data;
  }
  return (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)sequence,
                                                          (System_Func_TSource__bool__o *)v9,
                                                          (const MethodInfo_38A3478 *)v7->_6_System_Linq_Enumerable_Where_T_);
}


Il2CppObject *BasicHelper__FindComponent_object_(
        UnityEngine_GameObject_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_3810AC8 *method)
{
  UnityEngine_GameObject_array *v5; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x23
  UnityEngine_GameObject_o **m_Items; // x25
  UnityEngine_Object_o *v9; // x22
  Il2CppObject *Component_object; // x22

  v5 = array;
  if ( method->rgctx_data
    || (array = (UnityEngine_GameObject_array *)sub_2213A60(&UnityEngine_Object_TypeInfo), method->rgctx_data) )
  {
    if ( !v5 )
      return 0;
  }
  else
  {
    array = (UnityEngine_GameObject_array *)sub_224B964(method);
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
      sub_2213CE4(array);
    v9 = (UnityEngine_Object_o *)m_Items[v7];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, func);
    array = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Inequality(v9, 0, 0);
    Component_object = 0;
    if ( ((unsigned __int8)array & 1) != 0 )
    {
      if ( v7 >= LODWORD(v5->max_length) )
        goto LABEL_23;
      array = (UnityEngine_GameObject_array *)m_Items[v7];
      if ( !array )
LABEL_24:
        sub_2213CDC(array, func);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)array,
                           (const MethodInfo_38B6F40 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, func);
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
        const MethodInfo_3810A1C *method)
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
    array = (System_Object_array *)sub_224B964(method);
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
      goto LABEL_14;
    if ( !func )
      sub_2213CDC(array, func);
    array = (System_Object_array *)((__int64 (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))func->fields.invoke_impl)(
                                     func->fields.method_code,
                                     v4->m_Items[v6],
                                     func->fields.method);
    LODWORD(max_length) = v4->max_length;
    if ( ((unsigned __int8)array & 1) != 0 )
      break;
    if ( (__int64)++v6 >= (int)max_length )
      return 0;
  }
  if ( (unsigned int)v6 >= (unsigned int)max_length )
LABEL_14:
    sub_2213CE4(array);
  return v4->m_Items[v6];
}


void BasicHelper__ForEach_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_3813554 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  long double v21; // q0
  __int64 v22; // x21
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  _QWORD *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x20
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int128 v35; // [xsp+30h] [xbp-50h] BYREF
  __int64 v36; // [xsp+58h] [xbp-28h]

  if ( !method->rgctx_data )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  v36 = 0;
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*((_WORD *)&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_224B908(v3);
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
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
            sequence,
            *(_QWORD *)(v11 + 8));
    v36 = v12;
    if ( !v12 )
LABEL_33:
      sub_2213CDC(v12, v13);
    v14 = v12;
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
            goto LABEL_19;
        }
        v18 = v15 + 16LL * *v17 + 312;
      }
      else
      {
LABEL_19:
        v18 = sub_224BC3C(v14, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8));
      if ( (v19 & 1) == 0 )
        break;
      v22 = v36;
      if ( !v36 )
        sub_2213CDC(v19, v20);
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*((_WORD *)&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_224B908(v21);
      v24 = *(_QWORD *)v22;
      v25 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
      {
        v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
        while ( *((Il2CppClass **)v26 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v25;
          v26 += 4;
          if ( !v25 )
            goto LABEL_29;
        }
        v27 = v24 + 16LL * *v26 + 312;
      }
      else
      {
LABEL_29:
        v27 = sub_224BC3C(v22, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v28 = (*(_QWORD *(__fastcall **)(__int128 *__return_ptr, __int64, _QWORD))v27)(&v35, v22, *(_QWORD *)(v27 + 8));
      if ( !action )
        sub_2213CDC(v28, v29);
      v12 = ((__int64 (__fastcall *)(intptr_t, __int128 *, intptr_t))action->fields.invoke_impl)(
              action->fields.method_code,
              &v35,
              action->fields.method);
      v14 = v36;
      if ( !v36 )
        goto LABEL_33;
    }
    v30 = v36;
    if ( v36 )
    {
      v31 = *(_QWORD *)v36;
      v32 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
      {
        v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
        {
          --v32;
          v33 += 4;
          if ( !v32 )
            goto LABEL_39;
        }
        v34 = v31 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_39:
        v34 = sub_224BC3C(v36, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8));
    }
  }
}


void BasicHelper__ForEach_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_381384C *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  long double v21; // q0
  __int64 v22; // x21
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  _QWORD *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x20
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int128 v35; // [xsp+30h] [xbp-50h] BYREF
  __int64 v36; // [xsp+58h] [xbp-28h]

  if ( !method->rgctx_data )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  v36 = 0;
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*((_WORD *)&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_224B908(v3);
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
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
            sequence,
            *(_QWORD *)(v11 + 8));
    v36 = v12;
    if ( !v12 )
LABEL_33:
      sub_2213CDC(v12, v13);
    v14 = v12;
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
            goto LABEL_19;
        }
        v18 = v15 + 16LL * *v17 + 312;
      }
      else
      {
LABEL_19:
        v18 = sub_224BC3C(v14, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8));
      if ( (v19 & 1) == 0 )
        break;
      v22 = v36;
      if ( !v36 )
        sub_2213CDC(v19, v20);
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*((_WORD *)&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_224B908(v21);
      v24 = *(_QWORD *)v22;
      v25 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
      {
        v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
        while ( *((Il2CppClass **)v26 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v25;
          v26 += 4;
          if ( !v25 )
            goto LABEL_29;
        }
        v27 = v24 + 16LL * *v26 + 312;
      }
      else
      {
LABEL_29:
        v27 = sub_224BC3C(v22, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v28 = (*(_QWORD *(__fastcall **)(__int128 *__return_ptr, __int64, _QWORD))v27)(&v35, v22, *(_QWORD *)(v27 + 8));
      if ( !action )
        sub_2213CDC(v28, v29);
      v12 = ((__int64 (__fastcall *)(intptr_t, __int128 *, intptr_t))action->fields.invoke_impl)(
              action->fields.method_code,
              &v35,
              action->fields.method);
      v14 = v36;
      if ( !v36 )
        goto LABEL_33;
    }
    v30 = v36;
    if ( v36 )
    {
      v31 = *(_QWORD *)v36;
      v32 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
      {
        v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
        {
          --v32;
          v33 += 4;
          if ( !v32 )
            goto LABEL_39;
        }
        v34 = v31 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_39:
        v34 = sub_224BC3C(v36, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8));
    }
  }
}


void BasicHelper__ForEach_FriendshipExceedResultWindowComponent_SpecialimageInfo_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_3813B44 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
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
  __int64 v25; // x1
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // [xsp+18h] [xbp-28h]

  if ( !method->rgctx_data )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*((_WORD *)&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_224B908(v3);
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
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
            sequence,
            *(_QWORD *)(v11 + 8));
    v30 = v12;
    while ( 1 )
    {
      if ( !v30 )
        sub_2213CDC(v12, v13);
      v14 = *(_QWORD *)v30;
      v15 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
      {
        v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          v16 += 4;
          if ( !v15 )
            goto LABEL_19;
        }
        v17 = v14 + 16LL * *v16 + 312;
      }
      else
      {
LABEL_19:
        v17 = sub_224BC3C(v30, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v30, *(_QWORD *)(v17 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*((_WORD *)&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_224B908(v18);
      v20 = *(_QWORD *)v30;
      v21 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
      {
        v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((Il2CppClass **)v22 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_28;
        }
        v23 = v20 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_28:
        v23 = sub_224BC3C(v30, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v30, *(_QWORD *)(v23 + 8));
      if ( !action )
        sub_2213CDC(v24, v25);
      v12 = ((__int64 (__fastcall *)(intptr_t, __int64, __int64, intptr_t))action->fields.invoke_impl)(
              action->fields.method_code,
              v24,
              v25,
              action->fields.method);
    }
    v26 = *(_QWORD *)v30;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_36;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_36:
      v29 = sub_224BC3C(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v30, *(_QWORD *)(v29 + 8));
  }
}


void BasicHelper__ForEach_Int32Enum_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_381228C *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
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
  __int64 v29; // [xsp+18h] [xbp-28h]

  if ( !method->rgctx_data )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*((_WORD *)&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_224B908(v3);
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
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
            sequence,
            *(_QWORD *)(v11 + 8));
    v29 = v12;
    while ( 1 )
    {
      if ( !v29 )
        sub_2213CDC(v12, v13);
      v14 = *(_QWORD *)v29;
      v15 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
      {
        v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          v16 += 4;
          if ( !v15 )
            goto LABEL_19;
        }
        v17 = v14 + 16LL * *v16 + 312;
      }
      else
      {
LABEL_19:
        v17 = sub_224BC3C(v29, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v29, *(_QWORD *)(v17 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*((_WORD *)&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_224B908(v18);
      v20 = *(_QWORD *)v29;
      v21 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
      {
        v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((Il2CppClass **)v22 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_28;
        }
        v23 = v20 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_28:
        v23 = sub_224BC3C(v29, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v29, *(_QWORD *)(v23 + 8));
      if ( !action )
        sub_2213CDC(v24, (unsigned int)v24);
      v12 = ((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))action->fields.invoke_impl)(
              action->fields.method_code,
              (unsigned int)v24,
              action->fields.method);
    }
    v25 = *(_QWORD *)v29;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_36;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_36:
      v28 = sub_224BC3C(v29, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v29, *(_QWORD *)(v28 + 8));
  }
}


void BasicHelper__ForEach_KeyValuePair_int__int__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_3810C00 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
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
  __int64 v29; // [xsp+18h] [xbp-28h]

  if ( !method->rgctx_data )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*((_WORD *)&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_224B908(v3);
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
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
            sequence,
            *(_QWORD *)(v11 + 8));
    v29 = v12;
    while ( 1 )
    {
      if ( !v29 )
        sub_2213CDC(v12, v13);
      v14 = *(_QWORD *)v29;
      v15 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
      {
        v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          v16 += 4;
          if ( !v15 )
            goto LABEL_19;
        }
        v17 = v14 + 16LL * *v16 + 312;
      }
      else
      {
LABEL_19:
        v17 = sub_224BC3C(v29, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v29, *(_QWORD *)(v17 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*((_WORD *)&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_224B908(v18);
      v20 = *(_QWORD *)v29;
      v21 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
      {
        v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((Il2CppClass **)v22 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_28;
        }
        v23 = v20 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_28:
        v23 = sub_224BC3C(v29, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v29, *(_QWORD *)(v23 + 8));
      if ( !action )
        sub_2213CDC(v24, v24);
      v12 = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))action->fields.invoke_impl)(
              action->fields.method_code,
              v24,
              action->fields.method);
    }
    v25 = *(_QWORD *)v29;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_36;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_36:
      v28 = sub_224BC3C(v29, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v29, *(_QWORD *)(v28 + 8));
  }
}


void BasicHelper__ForEach_KeyValuePair_int__object__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_3810EC8 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
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
  __int64 v25; // x1
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // [xsp+18h] [xbp-28h]

  if ( !method->rgctx_data )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*((_WORD *)&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_224B908(v3);
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
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
            sequence,
            *(_QWORD *)(v11 + 8));
    v30 = v12;
    while ( 1 )
    {
      if ( !v30 )
        sub_2213CDC(v12, v13);
      v14 = *(_QWORD *)v30;
      v15 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
      {
        v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          v16 += 4;
          if ( !v15 )
            goto LABEL_19;
        }
        v17 = v14 + 16LL * *v16 + 312;
      }
      else
      {
LABEL_19:
        v17 = sub_224BC3C(v30, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v30, *(_QWORD *)(v17 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*((_WORD *)&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_224B908(v18);
      v20 = *(_QWORD *)v30;
      v21 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
      {
        v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((Il2CppClass **)v22 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_28;
        }
        v23 = v20 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_28:
        v23 = sub_224BC3C(v30, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v30, *(_QWORD *)(v23 + 8));
      if ( !action )
        sub_2213CDC(v24, v25);
      v12 = ((__int64 (__fastcall *)(intptr_t, __int64, __int64, intptr_t))action->fields.invoke_impl)(
              action->fields.method_code,
              v24,
              v25,
              action->fields.method);
    }
    v26 = *(_QWORD *)v30;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_36;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_36:
      v29 = sub_224BC3C(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v30, *(_QWORD *)(v29 + 8));
  }
}


void BasicHelper__ForEach_KeyValuePair_long__object__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_381119C *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
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
  __int64 v25; // x1
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // [xsp+18h] [xbp-28h]

  if ( !method->rgctx_data )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*((_WORD *)&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_224B908(v3);
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
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
            sequence,
            *(_QWORD *)(v11 + 8));
    v30 = v12;
    while ( 1 )
    {
      if ( !v30 )
        sub_2213CDC(v12, v13);
      v14 = *(_QWORD *)v30;
      v15 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
      {
        v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          v16 += 4;
          if ( !v15 )
            goto LABEL_19;
        }
        v17 = v14 + 16LL * *v16 + 312;
      }
      else
      {
LABEL_19:
        v17 = sub_224BC3C(v30, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v30, *(_QWORD *)(v17 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*((_WORD *)&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_224B908(v18);
      v20 = *(_QWORD *)v30;
      v21 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
      {
        v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((Il2CppClass **)v22 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_28;
        }
        v23 = v20 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_28:
        v23 = sub_224BC3C(v30, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v30, *(_QWORD *)(v23 + 8));
      if ( !action )
        sub_2213CDC(v24, v25);
      v12 = ((__int64 (__fastcall *)(intptr_t, __int64, __int64, intptr_t))action->fields.invoke_impl)(
              action->fields.method_code,
              v24,
              v25,
              action->fields.method);
    }
    v26 = *(_QWORD *)v30;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_36;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_36:
      v29 = sub_224BC3C(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v30, *(_QWORD *)(v29 + 8));
  }
}


void BasicHelper__ForEach_KeyValuePair_object__float__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_3811A18 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
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
  __int64 v25; // x1
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // [xsp+18h] [xbp-28h]

  if ( !method->rgctx_data )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*((_WORD *)&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_224B908(v3);
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
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
            sequence,
            *(_QWORD *)(v11 + 8));
    v30 = v12;
    while ( 1 )
    {
      if ( !v30 )
        sub_2213CDC(v12, v13);
      v14 = *(_QWORD *)v30;
      v15 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
      {
        v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          v16 += 4;
          if ( !v15 )
            goto LABEL_19;
        }
        v17 = v14 + 16LL * *v16 + 312;
      }
      else
      {
LABEL_19:
        v17 = sub_224BC3C(v30, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v30, *(_QWORD *)(v17 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*((_WORD *)&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_224B908(v18);
      v20 = *(_QWORD *)v30;
      v21 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
      {
        v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((Il2CppClass **)v22 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_28;
        }
        v23 = v20 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_28:
        v23 = sub_224BC3C(v30, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v30, *(_QWORD *)(v23 + 8));
      if ( !action )
        sub_2213CDC(v24, v25);
      v12 = ((__int64 (__fastcall *)(intptr_t, __int64, __int64, intptr_t))action->fields.invoke_impl)(
              action->fields.method_code,
              v24,
              v25,
              action->fields.method);
    }
    v26 = *(_QWORD *)v30;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_36;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_36:
      v29 = sub_224BC3C(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v30, *(_QWORD *)(v29 + 8));
  }
}


void BasicHelper__ForEach_KeyValuePair_object__int__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_3811470 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
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
  __int64 v25; // x1
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // [xsp+18h] [xbp-28h]

  if ( !method->rgctx_data )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*((_WORD *)&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_224B908(v3);
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
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
            sequence,
            *(_QWORD *)(v11 + 8));
    v30 = v12;
    while ( 1 )
    {
      if ( !v30 )
        sub_2213CDC(v12, v13);
      v14 = *(_QWORD *)v30;
      v15 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
      {
        v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          v16 += 4;
          if ( !v15 )
            goto LABEL_19;
        }
        v17 = v14 + 16LL * *v16 + 312;
      }
      else
      {
LABEL_19:
        v17 = sub_224BC3C(v30, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v30, *(_QWORD *)(v17 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*((_WORD *)&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_224B908(v18);
      v20 = *(_QWORD *)v30;
      v21 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
      {
        v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((Il2CppClass **)v22 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_28;
        }
        v23 = v20 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_28:
        v23 = sub_224BC3C(v30, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v30, *(_QWORD *)(v23 + 8));
      if ( !action )
        sub_2213CDC(v24, v25);
      v12 = ((__int64 (__fastcall *)(intptr_t, __int64, __int64, intptr_t))action->fields.invoke_impl)(
              action->fields.method_code,
              v24,
              v25,
              action->fields.method);
    }
    v26 = *(_QWORD *)v30;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_36;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_36:
      v29 = sub_224BC3C(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v30, *(_QWORD *)(v29 + 8));
  }
}


void BasicHelper__ForEach_KeyValuePair_object__object__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_3811744 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
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
  __int64 v25; // x1
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // [xsp+18h] [xbp-28h]

  if ( !method->rgctx_data )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*((_WORD *)&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_224B908(v3);
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
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
            sequence,
            *(_QWORD *)(v11 + 8));
    v30 = v12;
    while ( 1 )
    {
      if ( !v30 )
        sub_2213CDC(v12, v13);
      v14 = *(_QWORD *)v30;
      v15 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
      {
        v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          v16 += 4;
          if ( !v15 )
            goto LABEL_19;
        }
        v17 = v14 + 16LL * *v16 + 312;
      }
      else
      {
LABEL_19:
        v17 = sub_224BC3C(v30, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v30, *(_QWORD *)(v17 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*((_WORD *)&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_224B908(v18);
      v20 = *(_QWORD *)v30;
      v21 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
      {
        v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((Il2CppClass **)v22 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_28;
        }
        v23 = v20 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_28:
        v23 = sub_224BC3C(v30, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v30, *(_QWORD *)(v23 + 8));
      if ( !action )
        sub_2213CDC(v24, v25);
      v12 = ((__int64 (__fastcall *)(intptr_t, __int64, __int64, intptr_t))action->fields.invoke_impl)(
              action->fields.method_code,
              v24,
              v25,
              action->fields.method);
    }
    v26 = *(_QWORD *)v30;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_36;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_36:
      v29 = sub_224BC3C(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v30, *(_QWORD *)(v29 + 8));
  }
}


void BasicHelper__ForEach___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_3812DCC *method)
{
  long double v3; // q0
  const MethodInfo_3812DCC_RGCTXs *rgctx_data; // x8
  size_t actualSize; // x21
  __int64 _0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x24
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  long double v23; // q0
  __int64 v24; // x24
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x1
  void *v31; // x0
  __int64 v32; // x1
  const MethodInfo_3812DCC_RGCTXs *v33; // x8
  char *v34; // x4
  MethodInfo *_6_System_Action_T__Invoke; // x1
  Il2CppMethodPointer methodPointer; // x0
  __int64 (__fastcall *invoker_method)(_QWORD, _QWORD, _QWORD, _QWORD); // x8
  __int64 v38; // x20
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  _QWORD v43[3]; // [xsp+0h] [xbp-30h] BYREF
  __int64 v44; // [xsp+18h] [xbp-18h] BYREF
  _QWORD v45[2]; // [xsp+20h] [xbp-10h] BYREF

  v45[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964(method);
      rgctx_data = method->rgctx_data;
    }
  }
  actualSize = rgctx_data->_4_T->_2.actualSize;
  v44 = 0;
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = (__int64)rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*((_WORD *)&rgctx_data->_0_System_Collections_Generic_IEnumerable_T_->_2.bitflags2 + 1) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = sub_224B908(v3);
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
      v13 = sub_224BC3C(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v13)(
            sequence,
            *(_QWORD *)(v13 + 8));
    v44 = v14;
    v43[1] = 0;
    v43[2] = &v44;
    if ( !v14 )
LABEL_35:
      sub_2213CDC(v14, v15);
    v16 = v14;
    while ( 1 )
    {
      v17 = *(_QWORD *)v16;
      v18 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
      {
        v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v18;
          v19 += 4;
          if ( !v18 )
            goto LABEL_19;
        }
        v20 = v17 + 16LL * *v19 + 312;
      }
      else
      {
LABEL_19:
        v20 = sub_224BC3C(v16, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8));
      if ( (v21 & 1) == 0 )
        break;
      v24 = v44;
      if ( !v44 )
        sub_2213CDC(v21, v22);
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*((_WORD *)&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_224B908(v23);
      v26 = *(_QWORD *)v24;
      v27 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
      {
        v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *((Il2CppClass **)v28 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v27;
          v28 += 4;
          if ( !v27 )
            goto LABEL_29;
        }
        v29 = v26 + 16LL * *v28 + 312;
      }
      else
      {
LABEL_29:
        v29 = sub_224BC3C(v24, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v30 = *(_QWORD *)(v29 + 8);
      v45[0] = (char *)v43 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD *, _QWORD))(v30 + 16))(
        *(_QWORD *)(v30 + 8),
        v30,
        v24,
        v45,
        v45[0]);
      v31 = memcpy(
              (char *)v43 - ((actualSize + 15) & 0x1FFFFFFF0LL),
              (char *)v43 - ((actualSize + 15) & 0x1FFFFFFF0LL),
              actualSize);
      if ( !action )
        sub_2213CDC(v31, v32);
      v33 = method->rgctx_data;
      v34 = (char *)v43 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      if ( (v33->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v34 = *(char **)((char *)v43 - ((actualSize + 15) & 0x1FFFFFFF0LL));
      _6_System_Action_T__Invoke = v33->_6_System_Action_T__Invoke;
      methodPointer = _6_System_Action_T__Invoke->methodPointer;
      invoker_method = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))_6_System_Action_T__Invoke->invoker_method;
      v45[0] = v34;
      v14 = invoker_method(methodPointer, _6_System_Action_T__Invoke, action, v45);
      v16 = v44;
      if ( !v44 )
        goto LABEL_35;
    }
    v38 = v44;
    if ( v44 )
    {
      v39 = *(_QWORD *)v44;
      v40 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
      {
        v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
        {
          --v40;
          v41 += 4;
          if ( !v40 )
            goto LABEL_41;
        }
        v42 = v39 + 16LL * *v41 + 312;
      }
      else
      {
LABEL_41:
        v42 = sub_224BC3C(v44, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8));
    }
  }
}


void BasicHelper__ForEach___Il2CppFullySharedGenericType__58798468(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_int__T__o *action,
        const MethodInfo_3813184 *method)
{
  long double v3; // q0
  const MethodInfo_3813184_RGCTXs *rgctx_data; // x8
  size_t actualSize; // x21
  __int64 _0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x24
  int v17; // w26
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  long double v24; // q0
  __int64 v25; // x24
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x1
  void *v32; // x0
  __int64 v33; // x1
  const MethodInfo_3813184_RGCTXs *v34; // x8
  char *v35; // x4
  MethodInfo *_6_System_Action_int__T__Invoke; // x1
  Il2CppMethodPointer methodPointer; // x0
  __int64 (__fastcall *invoker_method)(_QWORD, _QWORD, _QWORD, _QWORD); // x8
  __int64 v39; // x20
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  _QWORD v44[3]; // [xsp+0h] [xbp-40h] BYREF
  __int64 v45; // [xsp+18h] [xbp-28h] BYREF
  _QWORD v46[2]; // [xsp+20h] [xbp-20h] BYREF
  int v47; // [xsp+34h] [xbp-Ch] BYREF
  __int64 v48; // [xsp+38h] [xbp-8h]

  v48 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964(method);
      rgctx_data = method->rgctx_data;
    }
  }
  actualSize = rgctx_data->_4_T->_2.actualSize;
  v45 = 0;
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = (__int64)rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*((_WORD *)&rgctx_data->_0_System_Collections_Generic_IEnumerable_T_->_2.bitflags2 + 1) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = sub_224B908(v3);
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
      v13 = sub_224BC3C(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v13)(
            sequence,
            *(_QWORD *)(v13 + 8));
    v45 = v14;
    v44[1] = 0;
    v44[2] = &v45;
    if ( !v14 )
LABEL_35:
      sub_2213CDC(v14, v15);
    v16 = v14;
    v17 = 0;
    while ( 1 )
    {
      v18 = *(_QWORD *)v16;
      v19 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
      {
        v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v19;
          v20 += 4;
          if ( !v19 )
            goto LABEL_19;
        }
        v21 = v18 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_19:
        v21 = sub_224BC3C(v16, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v16, *(_QWORD *)(v21 + 8));
      if ( (v22 & 1) == 0 )
        break;
      v25 = v45;
      if ( !v45 )
        sub_2213CDC(v22, v23);
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*((_WORD *)&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_224B908(v24);
      v27 = *(_QWORD *)v25;
      v28 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
      {
        v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
        while ( *((Il2CppClass **)v29 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v28;
          v29 += 4;
          if ( !v28 )
            goto LABEL_29;
        }
        v30 = v27 + 16LL * *v29 + 312;
      }
      else
      {
LABEL_29:
        v30 = sub_224BC3C(v25, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v31 = *(_QWORD *)(v30 + 8);
      v46[0] = (char *)v44 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD *, _QWORD))(v31 + 16))(
        *(_QWORD *)(v31 + 8),
        v31,
        v25,
        v46,
        v46[0]);
      v32 = memcpy(
              (char *)v44 - ((actualSize + 15) & 0x1FFFFFFF0LL),
              (char *)v44 - ((actualSize + 15) & 0x1FFFFFFF0LL),
              actualSize);
      if ( !action )
        sub_2213CDC(v32, v33);
      v34 = method->rgctx_data;
      v35 = (char *)v44 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      if ( (v34->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v35 = *(char **)((char *)v44 - ((actualSize + 15) & 0x1FFFFFFF0LL));
      _6_System_Action_int__T__Invoke = v34->_6_System_Action_int__T__Invoke;
      v47 = v17;
      methodPointer = _6_System_Action_int__T__Invoke->methodPointer;
      invoker_method = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))_6_System_Action_int__T__Invoke->invoker_method;
      v46[0] = &v47;
      v46[1] = v35;
      v14 = invoker_method(methodPointer, _6_System_Action_int__T__Invoke, action, v46);
      v16 = v45;
      ++v17;
      if ( !v45 )
        goto LABEL_35;
    }
    v39 = v45;
    if ( v45 )
    {
      v40 = *(_QWORD *)v45;
      v41 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
      {
        v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
        {
          --v41;
          v42 += 4;
          if ( !v41 )
            goto LABEL_41;
        }
        v43 = v40 + 16LL * *v42 + 312;
      }
      else
      {
LABEL_41:
        v43 = sub_224BC3C(v45, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8));
    }
  }
}


void BasicHelper__ForEach_int_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_3811CEC *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
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
  __int64 v29; // [xsp+18h] [xbp-28h]

  if ( !method->rgctx_data )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*((_WORD *)&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_224B908(v3);
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
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
            sequence,
            *(_QWORD *)(v11 + 8));
    v29 = v12;
    while ( 1 )
    {
      if ( !v29 )
        sub_2213CDC(v12, v13);
      v14 = *(_QWORD *)v29;
      v15 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
      {
        v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          v16 += 4;
          if ( !v15 )
            goto LABEL_19;
        }
        v17 = v14 + 16LL * *v16 + 312;
      }
      else
      {
LABEL_19:
        v17 = sub_224BC3C(v29, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v29, *(_QWORD *)(v17 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*((_WORD *)&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_224B908(v18);
      v20 = *(_QWORD *)v29;
      v21 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
      {
        v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((Il2CppClass **)v22 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_28;
        }
        v23 = v20 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_28:
        v23 = sub_224BC3C(v29, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v29, *(_QWORD *)(v23 + 8));
      if ( !action )
        sub_2213CDC(v24, (unsigned int)v24);
      v12 = ((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))action->fields.invoke_impl)(
              action->fields.method_code,
              (unsigned int)v24,
              action->fields.method);
    }
    v25 = *(_QWORD *)v29;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_36;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_36:
      v28 = sub_224BC3C(v29, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v29, *(_QWORD *)(v28 + 8));
  }
}


void BasicHelper__ForEach_int__58793908(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_int__T__o *action,
        const MethodInfo_3811FB4 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  unsigned int i; // w21
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
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // [xsp+18h] [xbp-38h]

  if ( !method->rgctx_data )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*((_WORD *)&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_224B908(v3);
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
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
            sequence,
            *(_QWORD *)(v11 + 8));
    v31 = v12;
    for ( i = 0; ; ++i )
    {
      if ( !v31 )
        sub_2213CDC(v12, v13);
      v15 = *(_QWORD *)v31;
      v16 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
      {
        v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_19;
        }
        v18 = v15 + 16LL * *v17 + 312;
      }
      else
      {
LABEL_19:
        v18 = sub_224BC3C(v31, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v31, *(_QWORD *)(v18 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*((_WORD *)&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_224B908(v19);
      v21 = *(_QWORD *)v31;
      v22 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
      {
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((Il2CppClass **)v23 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_28;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_28:
        v24 = sub_224BC3C(v31, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v31, *(_QWORD *)(v24 + 8));
      if ( !action )
        sub_2213CDC(v25, v26);
      v12 = ((__int64 (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))action->fields.invoke_impl)(
              action->fields.method_code,
              i,
              (unsigned int)v25,
              action->fields.method);
    }
    v27 = *(_QWORD *)v31;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_36;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_36:
      v30 = sub_224BC3C(v31, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v31, *(_QWORD *)(v30 + 8));
  }
}


void BasicHelper__ForEach_long_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_int__T__o *action,
        const MethodInfo_3812554 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  unsigned int i; // w21
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
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // [xsp+18h] [xbp-38h]

  if ( !method->rgctx_data )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*((_WORD *)&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_224B908(v3);
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
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
            sequence,
            *(_QWORD *)(v11 + 8));
    v31 = v12;
    for ( i = 0; ; ++i )
    {
      if ( !v31 )
        sub_2213CDC(v12, v13);
      v15 = *(_QWORD *)v31;
      v16 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
      {
        v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_19;
        }
        v18 = v15 + 16LL * *v17 + 312;
      }
      else
      {
LABEL_19:
        v18 = sub_224BC3C(v31, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v31, *(_QWORD *)(v18 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*((_WORD *)&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_224B908(v19);
      v21 = *(_QWORD *)v31;
      v22 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
      {
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((Il2CppClass **)v23 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_28;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_28:
        v24 = sub_224BC3C(v31, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v31, *(_QWORD *)(v24 + 8));
      if ( !action )
        sub_2213CDC(v25, v26);
      v12 = ((__int64 (__fastcall *)(intptr_t, _QWORD, __int64, intptr_t))action->fields.invoke_impl)(
              action->fields.method_code,
              i,
              v25,
              action->fields.method);
    }
    v27 = *(_QWORD *)v31;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_36;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_36:
      v30 = sub_224BC3C(v31, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v31, *(_QWORD *)(v30 + 8));
  }
}


void BasicHelper__ForEach_object_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_381282C *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
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
  __int64 v29; // [xsp+18h] [xbp-28h]

  if ( !method->rgctx_data )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*((_WORD *)&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_224B908(v3);
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
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
            sequence,
            *(_QWORD *)(v11 + 8));
    v29 = v12;
    while ( 1 )
    {
      if ( !v29 )
        sub_2213CDC(v12, v13);
      v14 = *(_QWORD *)v29;
      v15 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
      {
        v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          v16 += 4;
          if ( !v15 )
            goto LABEL_19;
        }
        v17 = v14 + 16LL * *v16 + 312;
      }
      else
      {
LABEL_19:
        v17 = sub_224BC3C(v29, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v29, *(_QWORD *)(v17 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*((_WORD *)&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_224B908(v18);
      v20 = *(_QWORD *)v29;
      v21 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
      {
        v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((Il2CppClass **)v22 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_28;
        }
        v23 = v20 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_28:
        v23 = sub_224BC3C(v29, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v29, *(_QWORD *)(v23 + 8));
      if ( !action )
        sub_2213CDC(v24, v24);
      v12 = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))action->fields.invoke_impl)(
              action->fields.method_code,
              v24,
              action->fields.method);
    }
    v25 = *(_QWORD *)v29;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_36;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_36:
      v28 = sub_224BC3C(v29, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v29, *(_QWORD *)(v28 + 8));
  }
}


void BasicHelper__ForEach_object__58796788(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_int__T__o *action,
        const MethodInfo_3812AF4 *method)
{
  long double v3; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  unsigned int i; // w21
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
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // [xsp+18h] [xbp-38h]

  if ( !method->rgctx_data )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (*((_WORD *)&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_224B908(v3);
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
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(sequence, _0_System_Collections_Generic_IEnumerable_T, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
            sequence,
            *(_QWORD *)(v11 + 8));
    v31 = v12;
    for ( i = 0; ; ++i )
    {
      if ( !v31 )
        sub_2213CDC(v12, v13);
      v15 = *(_QWORD *)v31;
      v16 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
      {
        v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_19;
        }
        v18 = v15 + 16LL * *v17 + 312;
      }
      else
      {
LABEL_19:
        v18 = sub_224BC3C(v31, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v31, *(_QWORD *)(v18 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (*((_WORD *)&_2_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_224B908(v19);
      v21 = *(_QWORD *)v31;
      v22 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
      {
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((Il2CppClass **)v23 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_28;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_28:
        v24 = sub_224BC3C(v31, _2_System_Collections_Generic_IEnumerator_T, 0);
      }
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v31, *(_QWORD *)(v24 + 8));
      if ( !action )
        sub_2213CDC(v25, v26);
      v12 = ((__int64 (__fastcall *)(intptr_t, _QWORD, __int64, intptr_t))action->fields.invoke_impl)(
              action->fields.method_code,
              i,
              v25,
              action->fields.method);
    }
    v27 = *(_QWORD *)v31;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_36;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_36:
      v30 = sub_224BC3C(v31, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v31, *(_QWORD *)(v30 + 8));
  }
}


Il2CppObject *BasicHelper__GetOrAddComponent_object_(UnityEngine_Component_o *self, const MethodInfo_3813E18 *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !method->rgctx_data )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( v4 )
    return 0;
  if ( !self )
    sub_2213CDC(v4, v5);
  gameObject = UnityEngine_Component__get_gameObject(self, 0);
  return GameObjectHelper__GetOrAddComponent_object_(
           gameObject,
           (const MethodInfo_38B87D0 *)method->rgctx_data->_1_GameObjectHelper_GetOrAddComponent_T_);
}


int32_t BasicHelper__GetValue_Int32Enum__Int32Enum_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int32_t def,
        const MethodInfo_3814584 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_224B964(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
         key,
         (const MethodInfo_3FB92BC *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
             key,
             (const MethodInfo_3FB9034 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


int32_t BasicHelper__GetValue_Int32Enum__int_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int32_t def,
        const MethodInfo_3814500 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_224B964(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_Int32Enum__int___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
         key,
         (const MethodInfo_3FB60E8 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_Int32Enum__int___get_Item(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
             key,
             (const MethodInfo_3FB5E60 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


Il2CppObject *BasicHelper__GetValue_Int32Enum__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        Il2CppObject *def,
        const MethodInfo_3814608 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_224B964(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
         key,
         (const MethodInfo_3FBC594 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
             key,
             (const MethodInfo_3FBC300 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o BasicHelper__GetValue___Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        const MethodInfo_381417C *method)
{
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  const MethodInfo_381417C_RGCTXs *rgctx_data; // x8
  Il2CppClass *_0_T; // x8
  size_t actualSize; // x20
  Il2CppObject *Item; // x21
  long double v13; // q0
  Il2CppClass *v14; // x1
  const void *v15; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v16; // x0
  void *v17; // x1
  _QWORD v18[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  monitor = def.monitor;
  klass = def.klass;
  v18[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  v18[0] = def.klass;
  if ( !rgctx_data )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  actualSize = _0_T->_2.actualSize;
  if ( dic )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)dic,
           (Il2CppObject *)key,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)dic,
               (Il2CppObject *)key,
               (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      v14 = method->rgctx_data->_0_T;
      if ( (*((_WORD *)&v14->_2.bitflags2 + 1) & 1) == 0 )
        v14 = (Il2CppClass *)sub_224B908(v13);
      v15 = (const void *)sub_2213BC4(Item, v14, (char *)v18 - ((actualSize + 15) & 0x1FFFFFFF0LL));
      v16 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(monitor, v15, actualSize);
      goto LABEL_13;
    }
    _0_T = method->rgctx_data->_0_T;
  }
  if ( (_0_T->_1.byval_arg.bits & 0x80000000) == 0 )
    klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v18;
  memcpy((char *)v18 - ((actualSize + 15) & 0x1FFFFFFF0LL), klass, actualSize);
  v16 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memmove(monitor, klass, actualSize);
LABEL_13:
  result.monitor = v17;
  result.klass = v16;
  return result;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o BasicHelper__GetValue___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        const MethodInfo_38148D4 *method)
{
  unsigned __int64 StatusReg; // x28
  _QWORD *monitor; // x25
  void **v6; // x23
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v7; // x24
  _QWORD *v9; // x19
  __int64 v10; // x9
  __int64 v11; // x8
  size_t v12; // x27
  size_t v13; // x20
  char *v14; // x26
  int v15; // w28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v16; // x1
  __int64 *v17; // x1
  char *v18; // x8
  __int64 v19; // x0
  void (__fastcall *v20)(__int64, __int64 *, System_Collections_Generic_Dictionary_K__V__o *, char **, _BYTE *); // x9
  _QWORD *v21; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v22; // x1
  __int64 *v23; // x1
  __int64 v24; // x0
  void (__fastcall *v25)(__int64, __int64 *, System_Collections_Generic_Dictionary_K__V__o *, char **, char *); // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v26; // x0
  void *v27; // x1
  void **v28; // x21
  unsigned __int64 v29; // [xsp+0h] [xbp-40h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+8h] [xbp-38h]
  void *v31; // [xsp+10h] [xbp-30h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v32; // [xsp+18h] [xbp-28h] BYREF
  _BYTE v33[4]; // [xsp+24h] [xbp-1Ch] BYREF
  char *v34; // [xsp+28h] [xbp-18h] BYREF
  char *v35; // [xsp+30h] [xbp-10h]
  __int64 v36; // [xsp+38h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  klass = def.klass;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  monitor = def.monitor;
  v6 = (void **)key.monitor;
  v7 = key.klass;
  v36 = *(_QWORD *)(StatusReg + 40);
  v9 = (_QWORD *)*((_QWORD *)def.monitor + 7);
  v31 = key.monitor;
  v32 = key.klass;
  if ( !v9 )
  {
    sub_224B964(def.monitor);
    v9 = (_QWORD *)monitor[7];
  }
  v10 = v9[1];
  v11 = v9[4];
  v12 = *(unsigned int *)(v10 + 252);
  v13 = *(unsigned int *)(v11 + 252);
  v14 = (char *)&v29 - ((v12 + 15) & 0x1FFFFFFF0LL);
  if ( dic )
  {
    v29 = StatusReg;
    v15 = *(_DWORD *)(v10 + 40);
    if ( v15 >= 0 )
      v16 = &v32;
    else
      v16 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v7;
    memcpy((char *)&v29 - ((v12 + 15) & 0x1FFFFFFF0LL), v16, v12);
    v17 = (__int64 *)v9[2];
    v18 = (char *)&v29 - ((v12 + 15) & 0x1FFFFFFF0LL);
    v19 = *v17;
    if ( (v15 & 0x80000000) == 0 )
      v18 = *(char **)v14;
    v20 = (void (__fastcall *)(__int64, __int64 *, System_Collections_Generic_Dictionary_K__V__o *, char **, _BYTE *))v17[2];
    v34 = v18;
    v20(v19, v17, dic, &v34, v33);
    v21 = (_QWORD *)monitor[7];
    if ( v33[0] )
    {
      if ( *(int *)(v21[1] + 40LL) >= 0 )
        v22 = &v32;
      else
        v22 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v7;
      memcpy((char *)&v29 - ((v12 + 15) & 0x1FFFFFFF0LL), v22, v12);
      v23 = (__int64 *)v21[3];
      v24 = *v23;
      if ( (*(_DWORD *)(v21[1] + 40LL) & 0x80000000) == 0 )
        v14 = *(char **)v14;
      v25 = (void (__fastcall *)(__int64, __int64 *, System_Collections_Generic_Dictionary_K__V__o *, char **, char *))v23[2];
      v34 = v14;
      v35 = (char *)&v29 - ((v13 + 15) & 0x1FFFFFFF0LL);
      v25(v24, v23, dic, &v34, v35);
      v26 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                        klass,
                                                                        (char *)&v29 - ((v13 + 15) & 0x1FFFFFFF0LL),
                                                                        v13);
      goto LABEL_21;
    }
    v11 = v21[4];
  }
  if ( *(int *)(v11 + 40) >= 0 )
    v28 = &v31;
  else
    v28 = v6;
  memcpy((char *)&v29 - ((v13 + 15) & 0x1FFFFFFF0LL), v28, v13);
  v26 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memmove(klass, v28, v13);
LABEL_21:
  result.monitor = v27;
  result.klass = v26;
  return result;
}


double BasicHelper__GetValue_double_(
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        double def,
        const MethodInfo_3813EB0 *method)
{
  Il2CppObject *Item; // x0
  __int64 v9; // x2
  long double v10; // q0
  const MethodInfo_3813EB0_RGCTXs *rgctx_data; // x8
  Il2CppObject *v12; // x19
  _QWORD *p_image; // x1
  double result; // d0
  System_Collections_Generic_Dictionary_string__object__o *v15; // x0
  System_String_o *v16; // x1
  int64_t v17; // x2
  const MethodInfo_3813FA0 *v18; // x3

  if ( method->rgctx_data
    || (sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__),
        sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__),
        method->rgctx_data) )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_224B964(method);
    if ( !dic )
      return def;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)dic,
          (Il2CppObject *)key,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return def;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)dic,
           (Il2CppObject *)key,
           (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  rgctx_data = method->rgctx_data;
  v12 = Item;
  p_image = &rgctx_data->_0_T->_1.image;
  if ( (*((_WORD *)&rgctx_data->_0_T->_2.bitflags2 + 1) & 1) == 0 )
  {
    Item = (Il2CppObject *)sub_224B908(v10);
    p_image = &Item->klass;
  }
  if ( !v12 )
    sub_2213CDC(Item, p_image);
  if ( v12->klass->_1.element_class == (Il2CppClass *)p_image[8] )
    return *(double *)j_il2cpp_object_unbox_0(v12, p_image, v9);
  sub_221405C(v12, p_image, v9);
  BasicHelper__GetValue_long_(v15, v16, v17, v18);
  return result;
}


int32_t BasicHelper__GetValue_int__Int32Enum_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int32_t def,
        const MethodInfo_3814374 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_224B964(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_int__Int32Enum___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
         key,
         (const MethodInfo_3F961B8 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_int__Int32Enum___get_Item(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
             key,
             (const MethodInfo_3F95F30 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


int32_t BasicHelper__GetValue_int__int_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int32_t def,
        const MethodInfo_38142F0 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_224B964(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         (System_Collections_Generic_Dictionary_int__int__o *)dic,
         key,
         (const MethodInfo_3F92E0C *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_int__int___get_Item(
             (System_Collections_Generic_Dictionary_int__int__o *)dic,
             key,
             (const MethodInfo_3F92B84 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


int64_t BasicHelper__GetValue_int__long_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int64_t def,
        const MethodInfo_38143F8 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_224B964(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_int__long___ContainsKey(
         (System_Collections_Generic_Dictionary_int__long__o *)dic,
         key,
         (const MethodInfo_3F993A4 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_int__long___get_Item(
             (System_Collections_Generic_Dictionary_int__long__o *)dic,
             key,
             (const MethodInfo_3F99110 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


Il2CppObject *BasicHelper__GetValue_int__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        Il2CppObject *def,
        const MethodInfo_381447C *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_224B964(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)dic,
         key,
         (const MethodInfo_3F9C6A4 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_int__object___get_Item(
             (System_Collections_Generic_Dictionary_int__object__o *)dic,
             key,
             (const MethodInfo_3F9C410 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


int64_t BasicHelper__GetValue_long_(
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        int64_t def,
        const MethodInfo_3813FA0 *method)
{
  Il2CppObject *Item; // x0
  __int64 v9; // x2
  long double v10; // q0
  const MethodInfo_3813FA0_RGCTXs *rgctx_data; // x8
  Il2CppObject *v12; // x19
  _QWORD *p_image; // x1
  System_Collections_Generic_Dictionary_string__object__o *v15; // x0
  System_String_o *v16; // x1
  Il2CppObject *v17; // x2
  const MethodInfo_3814090 *v18; // x3

  if ( method->rgctx_data
    || (sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__),
        sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__),
        method->rgctx_data) )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_224B964(method);
    if ( !dic )
      return def;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)dic,
          (Il2CppObject *)key,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return def;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)dic,
           (Il2CppObject *)key,
           (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  rgctx_data = method->rgctx_data;
  v12 = Item;
  p_image = &rgctx_data->_0_T->_1.image;
  if ( (*((_WORD *)&rgctx_data->_0_T->_2.bitflags2 + 1) & 1) == 0 )
  {
    Item = (Il2CppObject *)sub_224B908(v10);
    p_image = &Item->klass;
  }
  if ( !v12 )
    sub_2213CDC(Item, p_image);
  if ( v12->klass->_1.element_class == (Il2CppClass *)p_image[8] )
    return *(_QWORD *)j_il2cpp_object_unbox_0(v12, p_image, v9);
  sub_221405C(v12, p_image, v9);
  return (int64_t)BasicHelper__GetValue_object_(v15, v16, v17, v18);
}


int32_t BasicHelper__GetValue_long__int_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int64_t key,
        int32_t def,
        const MethodInfo_381468C *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_224B964(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_long__int___ContainsKey(
         (System_Collections_Generic_Dictionary_long__int__o *)dic,
         key,
         (const MethodInfo_3FC9618 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_long__int___get_Item(
             (System_Collections_Generic_Dictionary_long__int__o *)dic,
             key,
             (const MethodInfo_3FC9384 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


Il2CppObject *BasicHelper__GetValue_object_(
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        Il2CppObject *def,
        const MethodInfo_3814090 *method)
{
  const MethodInfo_3814090 *_0_T; // x19
  long double v8; // q0
  __int64 v9; // x2

  _0_T = method;
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !_0_T->rgctx_data )
      goto LABEL_10;
  }
  if ( dic )
  {
    while ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)dic,
              (Il2CppObject *)key,
              (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      key = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                 (System_Collections_Generic_Dictionary_object__object__o *)dic,
                                 (Il2CppObject *)key,
                                 (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      _0_T = (const MethodInfo_3814090 *)_0_T->rgctx_data->_0_T;
      if ( (*(_WORD *)((_BYTE *)&_0_T[3].return_type + 5) & 1) == 0 )
        _0_T = (const MethodInfo_3814090 *)sub_224B908(v8);
      if ( !key )
        return 0;
      def = (Il2CppObject *)sub_2213BB4(key, _0_T);
      if ( !def )
      {
        sub_221405C(key, _0_T, v9);
LABEL_10:
        sub_224B964(_0_T);
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
        const MethodInfo_38147B0 *method)
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
    sub_224B964(method);
  if ( dic
    && System_Collections_Generic_Dictionary_object__Color___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
         key,
         (const MethodInfo_3FEA3D0 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    Item = System_Collections_Generic_Dictionary_object__Color___get_Item(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
             key,
             (const MethodInfo_3FEA128 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
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
        const MethodInfo_3814710 *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v8; // x21
  __int128 v10; // q0
  float a; // w8
  System_Nullable_Color__o v13; // [xsp+Ch] [xbp-44h] BYREF

  v8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic;
  if ( method->rgctx_data )
  {
    if ( !dic )
      goto LABEL_7;
  }
  else
  {
    dic = (System_Collections_Generic_Dictionary_K__V__o *)sub_224B964(method);
    if ( !v8 )
    {
LABEL_7:
      v10 = *(_OWORD *)&def->fields.hasValue;
      a = def->fields.value.fields.a;
      goto LABEL_8;
    }
  }
  dic = (System_Collections_Generic_Dictionary_K__V__o *)System_Collections_Generic_Dictionary_object__Nullable_Color____ContainsKey(
                                                           v8,
                                                           key,
                                                           (const MethodInfo_3FD9728 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey);
  if ( ((unsigned __int8)dic & 1) == 0 )
    goto LABEL_7;
  dic = (System_Collections_Generic_Dictionary_K__V__o *)System_Collections_Generic_Dictionary_object__Nullable_Color____get_Item(
                                                           &v13,
                                                           v8,
                                                           key,
                                                           (const MethodInfo_3FD93B0 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  v10 = *(_OWORD *)&v13.fields.hasValue;
  a = v13.fields.value.fields.a;
LABEL_8:
  *(_OWORD *)&retstr->fields.hasValue = v10;
  retstr->fields.value.fields.a = a;
  return (System_Nullable_Color__o *)dic;
}


Il2CppObject *BasicHelper__GetValue_object__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        Il2CppObject *key,
        Il2CppObject *def,
        const MethodInfo_3814850 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_224B964(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         key,
         (const MethodInfo_3FFDE04 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)dic,
             key,
             (const MethodInfo_3FFDB90 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


UnityEngine_Color_o BasicHelper__IndexValue_Color_(
        UnityEngine_Color_array *array,
        int32_t index,
        UnityEngine_Color_o def,
        const MethodInfo_3814B44 *method)
{
  if ( array && (index & 0x80000000) == 0 && SLODWORD(array->max_length) > index )
    return array->m_Items[index];
  return def;
}


int32_t BasicHelper__IndexValue_Int32Enum_(
        System_Int32Enum_array *array,
        int32_t index,
        int32_t def,
        const MethodInfo_3814C08 *method)
{
  if ( array && (index & 0x80000000) == 0 && SLODWORD(array->max_length) > index )
    return array->m_Items[index];
  return def;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_KeyValuePair_object__int__o BasicHelper__IndexValue_KeyValuePair_object__int__(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        System_Collections_Generic_KeyValuePair_object__int__o def,
        const MethodInfo_3814A94 *method)
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
    sub_224B964(method);
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
           (const MethodInfo_43C3F1C *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
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
        const MethodInfo_3814F38 *method)
{
  struct System_String_o *buttonText; // x9

  if ( array && (index & 0x80000000) == 0 && SLODWORD(array->max_length) > index )
    def = &array->m_Items[index];
  buttonText = def->fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = *(_OWORD *)&def->fields.priority;
  retstr->fields.buttonText = buttonText;
  return (ListViewSort_BonusFilterInfo_o *)array;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o BasicHelper__IndexValue___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        int32_t index,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        const MethodInfo_3814E9C *method)
{
  const MethodInfo_3814E9C_RGCTXs *rgctx_data; // x8
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x20
  Il2CppClass *_1_T; // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v11; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v12; // x0
  void *v13; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v14; // [xsp+8h] [xbp-38h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  rgctx_data = method->rgctx_data;
  monitor = def.monitor;
  klass = def.klass;
  v14 = def.klass;
  if ( !rgctx_data )
  {
    sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  _1_T = rgctx_data->_1_T;
  if ( !array || index < 0 || SLODWORD(array->max_length) <= index )
  {
    if ( (_1_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v11 = &v14;
    else
      v11 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  }
  else
  {
    v11 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&array->m_Items[0].klass
                                                                    + (unsigned int)array->obj.klass->_2.native_size
                                                                    * (unsigned __int64)(unsigned int)index);
  }
  v12 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memmove(monitor, v11, _1_T->_2.actualSize);
  result.monitor = v13;
  result.klass = v12;
  return result;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o BasicHelper__IndexValue___Il2CppFullySharedGenericType__58805608(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        const MethodInfo_3814D68 *method)
{
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x22
  const MethodInfo_3814D68_RGCTXs *rgctx_data; // x8
  Il2CppClass *_3_T; // x9
  size_t actualSize; // x20
  int32_t v12; // w0
  const MethodInfo_3814D68_RGCTXs *v13; // x8
  MethodInfo *_2_System_Collections_Generic_List_T__get_Item; // x1
  Il2CppMethodPointer methodPointer; // x0
  void (__fastcall *invoker_method)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int32_t **, char *); // x9
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v17; // x0
  void *v18; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v19; // x21
  __int64 v20; // [xsp+0h] [xbp-30h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v21; // [xsp+8h] [xbp-28h] BYREF
  int32_t *v22; // [xsp+10h] [xbp-20h] BYREF
  char *v23; // [xsp+18h] [xbp-18h]
  int32_t v24; // [xsp+24h] [xbp-Ch] BYREF
  __int64 v25; // [xsp+28h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  monitor = def.monitor;
  klass = def.klass;
  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  v21 = def.klass;
  if ( !rgctx_data )
  {
    sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  _3_T = rgctx_data->_3_T;
  actualSize = _3_T->_2.actualSize;
  if ( list && (index & 0x80000000) == 0 )
  {
    v12 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list);
    v13 = method->rgctx_data;
    if ( v12 > index )
    {
      _2_System_Collections_Generic_List_T__get_Item = v13->_2_System_Collections_Generic_List_T__get_Item;
      v24 = index;
      methodPointer = _2_System_Collections_Generic_List_T__get_Item->methodPointer;
      invoker_method = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int32_t **, char *))_2_System_Collections_Generic_List_T__get_Item->invoker_method;
      v22 = &v24;
      v23 = (char *)&v20 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      invoker_method(methodPointer, _2_System_Collections_Generic_List_T__get_Item, list, &v22, v23);
      v17 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                        monitor,
                                                                        (char *)&v20
                                                                      - ((actualSize + 15) & 0x1FFFFFFF0LL),
                                                                        actualSize);
      goto LABEL_12;
    }
    _3_T = v13->_3_T;
  }
  if ( (_3_T->_1.byval_arg.bits & 0x80000000) == 0 )
    v19 = &v21;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v20 - ((actualSize + 15) & 0x1FFFFFFF0LL), v19, actualSize);
  v17 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memmove(monitor, v19, actualSize);
LABEL_12:
  result.monitor = v18;
  result.klass = v17;
  return result;
}


bool BasicHelper__IndexValue_bool_(
        System_Boolean_array *array,
        int32_t index,
        bool def,
        const MethodInfo_3814B18 *method)
{
  if ( array && (index & 0x80000000) == 0 && SLODWORD(array->max_length) > index )
    return array->m_Items[index];
  return def;
}


float BasicHelper__IndexValue_float_(
        System_Single_array *array,
        int32_t index,
        float def,
        const MethodInfo_3814D48 *method)
{
  if ( array && (index & 0x80000000) == 0 && SLODWORD(array->max_length) > index )
    return array->m_Items[index];
  return def;
}


float BasicHelper__IndexValue_float__58805452(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        float def,
        const MethodInfo_3814CCC *method)
{
  if ( method->rgctx_data )
  {
    if ( !list )
      return def;
  }
  else
  {
    sub_224B964(method);
    if ( !list )
      return def;
  }
  if ( (index & 0x80000000) == 0 && list->fields._size > index )
    return System_Collections_Generic_List_float___get_Item(
             (System_Collections_Generic_List_float__o *)list,
             index,
             (const MethodInfo_44AE7F8 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
  return def;
}


int32_t BasicHelper__IndexValue_int_(
        System_Int32_array *array,
        int32_t index,
        int32_t def,
        const MethodInfo_3814BE4 *method)
{
  if ( array && (index & 0x80000000) == 0 && SLODWORD(array->max_length) > index )
    return array->m_Items[index];
  return def;
}


int32_t BasicHelper__IndexValue_int__58805096(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        int32_t def,
        const MethodInfo_3814B68 *method)
{
  if ( method->rgctx_data )
  {
    if ( !list )
      return def;
  }
  else
  {
    sub_224B964(method);
    if ( !list )
      return def;
  }
  if ( (index & 0x80000000) == 0 && list->fields._size > index )
    return System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)list,
             index,
             (const MethodInfo_4466F78 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
  return def;
}


Il2CppObject *BasicHelper__IndexValue_object_(
        System_Object_array *array,
        int32_t index,
        Il2CppObject *def,
        const MethodInfo_3814CA8 *method)
{
  if ( array && (index & 0x80000000) == 0 && SLODWORD(array->max_length) > index )
    return array->m_Items[index];
  return def;
}


Il2CppObject *BasicHelper__IndexValue_object__58805292(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        Il2CppObject *def,
        const MethodInfo_3814C2C *method)
{
  if ( method->rgctx_data )
  {
    if ( !list )
      return def;
  }
  else
  {
    sub_224B964(method);
    if ( !list )
      return def;
  }
  if ( (index & 0x80000000) == 0 && list->fields._size > index )
    return System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)list,
             index,
             (const MethodInfo_4483994 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
  return def;
}


bool BasicHelper__IsNullOrEmpty(System_Collections_ICollection_o *self, const MethodInfo *method)
{
  System_Collections_ICollection_c *klass; // x8
  __int64 v4; // x9
  int32_t *p_offset; // x10
  __int64 v6; // x0

  if ( (byte_59722C1 & 1) == 0 )
  {
    sub_2213A60(&System_Collections_ICollection_TypeInfo);
    byte_59722C1 = 1;
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
    v6 = sub_224BC3C(self, System_Collections_ICollection_TypeInfo, 1);
  }
  return (*(int (__fastcall **)(System_Collections_ICollection_o *, _QWORD))v6)(self, *(_QWORD *)(v6 + 8)) < 1;
}


bool BasicHelper__IsValidIndex_Vector3_(
        UnityEngine_Vector3_array *array,
        int32_t index,
        const MethodInfo_3814FF0 *method)
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
        const MethodInfo_3815010 *method)
{
  bool result; // w0

  if ( !method->rgctx_data )
    sub_224B964(method);
  result = 0;
  if ( list )
  {
    if ( (index & 0x80000000) == 0 )
      return ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list) > index;
  }
  return result;
}


bool BasicHelper__IsValidIndex___Il2CppFullySharedGenericType__58806376(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        int32_t index,
        const MethodInfo_3815068 *method)
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


bool BasicHelper__IsValidIndex_int_(System_Int32_array *array, int32_t index, const MethodInfo_3814F6C *method)
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
        const MethodInfo_3814F8C *method)
{
  bool result; // w0

  if ( !method->rgctx_data )
    sub_224B964(method);
  result = 0;
  if ( list )
  {
    if ( (index & 0x80000000) == 0 )
      return list->fields._size > index;
  }
  return result;
}


bool BasicHelper__IsValidIndex_object__58806224(
        System_Object_array *array,
        int32_t index,
        const MethodInfo_3814FD0 *method)
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


float BasicHelper__LastKeyTime(UnityEngine_AnimationCurve_o *self, float def, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *keys; // x0
  UnityEngine_Keyframe_o v7; // [xsp+4h] [xbp-5Ch] BYREF
  UnityEngine_Keyframe_o v8; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_59722BE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_LastOrDefault_Keyframe___);
    byte_59722BE = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( self && UnityEngine_AnimationCurve__get_length(self, 0) >= 1 )
  {
    keys = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_AnimationCurve__get_keys(self, 0);
    System_Linq_Enumerable__LastOrDefault_Keyframe_(
      &v7,
      keys,
      (const MethodInfo_3885754 *)Method_System_Linq_Enumerable_LastOrDefault_Keyframe___);
    *(_OWORD *)&v8.fields.m_Time = *(_OWORD *)&v7.fields.m_Time;
    *(_OWORD *)&v8.fields.m_OutTangent = *(_OWORD *)&v7.fields.m_OutTangent;
    return UnityEngine_Keyframe__get_time(&v8, 0);
  }
  return def;
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
  float v5; // s0
  float v6; // s1
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v8; // s0

  if ( self >= toCompare )
    return 1;
  if ( !byte_5969AE4 )
  {
    sub_2213A60(&UnityEngine_Mathf_TypeInfo);
    byte_5969AE4 = 1;
  }
  v5 = fabsf(self);
  v6 = fabsf(toCompare);
  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
  if ( v5 <= v6 )
    v5 = v6;
  v8 = v5 * 0.000001;
  if ( v8 <= (float)(static_fields->Epsilon * 8.0) )
    v8 = static_fields->Epsilon * 8.0;
  return vabds_f32(toCompare, self) < v8;
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59722C5 & 1) == 0 )
  {
    sub_2213A60(&BasicHelper__RealDelayCall_d__40_TypeInfo);
    byte_59722C5 = 1;
  }
  v5 = sub_2213CCC(BasicHelper__RealDelayCall_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(float *)(v5 + 32) = delay;
  *(_QWORD *)(v5 + 40) = action;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)action, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *BasicHelper__RealDelayCall___Il2CppFullySharedGenericType_(
        float delay,
        System_Action_T__o *action,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg,
        const MethodInfo_3815124 *method)
{
  _QWORD *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  __int64 *v8; // x8
  size_t v9; // x22
  __int64 v10; // x0
  System_Collections_IEnumerator_o *v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  _QWORD *v14; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v15; // x1
  _QWORD v17[2]; // [xsp+0h] [xbp-18h] BYREF

  monitor = arg.monitor;
  klass = arg.klass;
  v17[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = (__int64 *)*((_QWORD *)arg.monitor + 7);
  v17[0] = arg.klass;
  if ( !v8 )
  {
    sub_224B964(arg.monitor);
    v8 = (__int64 *)monitor[7];
  }
  v9 = *(unsigned int *)(v8[3] + 252);
  v10 = *v8;
  if ( (*(_WORD *)(*v8 + 309) & 1) == 0 )
    v10 = sub_224B908(*(long double *)&delay);
  v11 = (System_Collections_IEnumerator_o *)sub_2213CCC(v10);
  v12 = (**(__int64 (__fastcall ***)(System_Collections_IEnumerator_o *, _QWORD))(monitor[7] + 8LL))(v11, 0);
  if ( !v11 )
    sub_2213CDC(v12, v13);
  sub_201DAE0(v11, *(_QWORD *)(*(_QWORD *)monitor[7] + 128LL) + 64LL, delay);
  sub_201B1D4(v11, *(_QWORD *)(*(_QWORD *)monitor[7] + 128LL) + 96LL, action);
  v14 = (_QWORD *)monitor[7];
  if ( *(int *)(v14[3] + 40LL) >= 0 )
    v15 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v17;
  else
    v15 = klass;
  memcpy((char *)v17 - ((v9 + 15) & 0x1FFFFFFF0LL), v15, v9);
  sub_2213A8C(v11, *(_QWORD *)(*v14 + 128LL) + 128LL, (char *)v17 - ((v9 + 15) & 0x1FFFFFFF0LL), (unsigned int)v9);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *BasicHelper__RealDelayCall_object_(
        float delay,
        System_Action_T__o *action,
        Il2CppObject *arg,
        const MethodInfo_3815088 *method)
{
  const MethodInfo_3815088_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__RealDelayCall_d__41_T; // x0
  BasicHelper__RealDelayCall_d__41_T__o *v10; // x0
  const MethodInfo_3815088_RGCTXs *v11; // x8
  BasicHelper__RealDelayCall_d__41_T__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__RealDelayCall_d__41_T = (__int64)rgctx_data->_0_BasicHelper__RealDelayCall_d__41_T_;
  if ( (*((_WORD *)&rgctx_data->_0_BasicHelper__RealDelayCall_d__41_T_->_2.bitflags2 + 1) & 1) == 0 )
    _0_BasicHelper__RealDelayCall_d__41_T = sub_224B908(*(long double *)&delay);
  v10 = (BasicHelper__RealDelayCall_d__41_T__o *)sub_2213CCC(_0_BasicHelper__RealDelayCall_d__41_T);
  v11 = method->rgctx_data;
  v12 = v10;
  BasicHelper__RealDelayCall_d__41_object____ctor(
    v10,
    0,
    (const MethodInfo_3F2E878 *)v11->_1_BasicHelper__RealDelayCall_d__41_T___ctor);
  if ( !v12 )
    sub_2213CDC(v13, v14);
  v12->fields.delay = delay;
  v12->fields.action = action;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->fields.action, (int32_t)action, v15, v16, v17, v18, v19, v20);
  v12->fields.arg = arg;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->fields.arg, (int32_t)arg, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v12;
}


void BasicHelper__RemoveElements___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *self,
        System_Func_T__bool__o *cond,
        const MethodInfo_38159AC *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  const MethodInfo_38159AC_RGCTXs *rgctx_data; // x8
  _QWORD *v7; // x22
  int v8; // w0
  int v9; // w23
  const MethodInfo_38159AC_RGCTXs *v10; // x8
  MethodInfo *_3_System_Collections_Generic_List_T__get_Item; // x1
  Il2CppMethodPointer methodPointer; // x0
  __int64 (__fastcall *invoker_method)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x8
  const MethodInfo_38159AC_RGCTXs *v14; // x9
  _QWORD *v15; // x8
  MethodInfo *_5_System_Func_T__bool__Invoke; // x1
  Il2CppMethodPointer v17; // x0
  void (__fastcall *v18)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x9
  _QWORD v19[2]; // [xsp+0h] [xbp-20h] BYREF
  int v20; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v21; // [xsp+18h] [xbp-8h]

  v5 = self;
  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    self = (System_Collections_Generic_List_T__o *)sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  v7 = (_QWORD *)((char *)v19 - ((rgctx_data->_4_T->_2.actualSize + 15LL) & 0x1FFFFFFF0LL));
  if ( !v5 )
    goto LABEL_13;
  v8 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(v5);
  if ( v8 - 1 >= 0 )
  {
    v9 = v8;
    while ( 1 )
    {
      v10 = method->rgctx_data;
      v20 = --v9;
      _3_System_Collections_Generic_List_T__get_Item = v10->_3_System_Collections_Generic_List_T__get_Item;
      methodPointer = _3_System_Collections_Generic_List_T__get_Item->methodPointer;
      invoker_method = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))_3_System_Collections_Generic_List_T__get_Item->invoker_method;
      v19[0] = &v20;
      v19[1] = v7;
      self = (System_Collections_Generic_List_T__o *)invoker_method(
                                                       methodPointer,
                                                       _3_System_Collections_Generic_List_T__get_Item,
                                                       v5,
                                                       v19,
                                                       v7);
      if ( !cond )
        break;
      v14 = method->rgctx_data;
      v15 = v7;
      if ( (v14->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v15 = (_QWORD *)*v7;
      _5_System_Func_T__bool__Invoke = v14->_5_System_Func_T__bool__Invoke;
      v17 = _5_System_Func_T__bool__Invoke->methodPointer;
      v18 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))_5_System_Func_T__bool__Invoke->invoker_method;
      v19[0] = v15;
      v18(v17, _5_System_Func_T__bool__Invoke, cond, v19, &v20);
      if ( (_BYTE)v20 )
        ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_6_System_Collections_Generic_List_T__RemoveAt->methodPointer)(
          v5,
          (unsigned int)v9);
      if ( v9 <= 0 )
        return;
    }
LABEL_13:
    sub_2213CDC(self, cond);
  }
}


void BasicHelper__RemoveElements_object_(
        System_Collections_Generic_List_T__o *self,
        System_Func_T__bool__o *cond,
        const MethodInfo_3815910 *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t size; // w22

  v5 = (System_Collections_Generic_List_object__o *)self;
  if ( !method->rgctx_data )
    self = (System_Collections_Generic_List_T__o *)sub_224B964(method);
  if ( !v5 )
    goto LABEL_10;
  size = v5->fields._size;
  if ( size - 1 >= 0 )
  {
    while ( 1 )
    {
      self = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                       v5,
                                                       --size,
                                                       (const MethodInfo_4483994 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      if ( !cond )
        break;
      if ( (((__int64 (__fastcall *)(intptr_t, System_Collections_Generic_List_T__o *, intptr_t))cond->fields.invoke_impl)(
              cond->fields.method_code,
              self,
              cond->fields.method)
          & 1) != 0 )
        System_Collections_Generic_List_object___RemoveAt(
          v5,
          size,
          (const MethodInfo_44853FC *)method->rgctx_data->_6_System_Collections_Generic_List_T__RemoveAt);
      if ( size <= 0 )
        return;
    }
LABEL_10:
    sub_2213CDC(self, cond);
  }
}


void BasicHelper__Remove___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        System_Func_KeyValuePair_K__V___bool__o *cond,
        const MethodInfo_3815664 *method)
{
  const MethodInfo_3815664_RGCTXs *rgctx_data; // x8
  size_t actualSize; // x21
  __int64 v8; // x1
  __int64 v9; // x23
  long double v10; // q0
  Il2CppClass *_6_BasicHelper___c__23_K__V; // x8
  const MethodInfo_3815664_RGCTXs *v12; // x8
  __int64 v13; // x0
  __int64 v14; // x24
  __int64 v15; // x0
  const MethodInfo_3815664_RGCTXs *v16; // x8
  __int64 v17; // x0
  __int64 _5_System_Func_KeyValuePair_K__V___K; // x8
  __int64 v19; // x25
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  long double v26; // q0
  Il2CppClass *v27; // x0
  Il2CppClass *v28; // x0
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x8
  _DWORD *v33; // x23
  unsigned __int64 v34; // x24
  const MethodInfo_3815664_RGCTXs *v35; // x9
  char *v36; // x8
  MethodInfo *_14_System_Collections_Generic_Dictionary_K__V__Remove; // x1
  Il2CppMethodPointer methodPointer; // x0
  __int64 (__fastcall *invoker_method)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_Dictionary_K__V__o *, char **, char *); // x9
  __int64 v40; // [xsp+0h] [xbp-20h] BYREF
  char *v41; // [xsp+8h] [xbp-18h] BYREF
  char v42; // [xsp+17h] [xbp-9h] BYREF
  __int64 v43; // [xsp+18h] [xbp-8h]

  v43 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  actualSize = rgctx_data->_13_K->_2.actualSize;
  if ( dic )
  {
    v9 = ((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_K__V__o *, System_Func_KeyValuePair_K__V___bool__o *))rgctx_data->_2_System_Linq_Enumerable_Where_KeyValuePair_K__V__->methodPointer)(
           dic,
           cond);
    _6_BasicHelper___c__23_K__V = method->rgctx_data->_6_BasicHelper___c__23_K__V_;
    if ( (*((_WORD *)&_6_BasicHelper___c__23_K__V->_2.bitflags2 + 1) & 1) == 0 )
      _6_BasicHelper___c__23_K__V = (Il2CppClass *)sub_224B908(v10);
    if ( !*(&_6_BasicHelper___c__23_K__V->_2.cctor_finished + 1) )
      *(__n128 *)&v10 = j_il2cpp_runtime_class_init_0(_6_BasicHelper___c__23_K__V, v8);
    v12 = method->rgctx_data;
    v13 = (__int64)v12->_6_BasicHelper___c__23_K__V_;
    if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    {
      v13 = sub_224B908(v10);
      v12 = method->rgctx_data;
    }
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 184) + 8LL);
    if ( !v14 )
    {
      v15 = (__int64)v12->_6_BasicHelper___c__23_K__V_;
      if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
        v15 = sub_224B908(v10);
      if ( !*(_DWORD *)(v15 + 228) )
        *(__n128 *)&v10 = j_il2cpp_runtime_class_init_0(v15, v8);
      v16 = method->rgctx_data;
      v17 = (__int64)v16->_6_BasicHelper___c__23_K__V_;
      if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
      {
        v17 = sub_224B908(v10);
        v16 = method->rgctx_data;
      }
      _5_System_Func_KeyValuePair_K__V___K = (__int64)v16->_5_System_Func_KeyValuePair_K__V___K_;
      v19 = **(_QWORD **)(v17 + 184);
      if ( (*(_WORD *)(_5_System_Func_KeyValuePair_K__V___K + 309) & 1) == 0 )
        _5_System_Func_KeyValuePair_K__V___K = sub_224B908(v10);
      v14 = sub_2213CCC(_5_System_Func_KeyValuePair_K__V___K);
      ((void (__fastcall *)(__int64, __int64, MethodInfo *))method->rgctx_data->_8_System_Func_KeyValuePair_K__V___K___ctor->methodPointer)(
        v14,
        v19,
        method->rgctx_data->_7_BasicHelper___c__23_K__V___Remove_b__23_0);
      v27 = method->rgctx_data->_6_BasicHelper___c__23_K__V_;
      if ( (*((_WORD *)&v27->_2.bitflags2 + 1) & 1) == 0 )
        v27 = (Il2CppClass *)sub_224B908(v26);
      *((_QWORD *)v27->static_fields + 1) = v14;
      v28 = method->rgctx_data->_6_BasicHelper___c__23_K__V_;
      if ( (*((_WORD *)&v28->_2.bitflags2 + 1) & 1) == 0 )
        v28 = (Il2CppClass *)sub_224B908(v26);
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)((char *)v28->static_fields + 8),
        v14,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v12 = method->rgctx_data;
    }
    v29 = ((__int64 (__fastcall *)(__int64, __int64, long double))v12->_9_System_Linq_Enumerable_Select_KeyValuePair_K__V___K_->methodPointer)(
            v9,
            v14,
            v10);
    v30 = ((__int64 (__fastcall *)(__int64))method->rgctx_data->_11_System_Linq_Enumerable_ToArray_K_->methodPointer)(v29);
    if ( !v30 )
      sub_2213CDC(0, v31);
    v32 = *(_QWORD *)(v30 + 24);
    v33 = (_DWORD *)v30;
    if ( (int)v32 >= 1 )
    {
      v34 = 0;
      do
      {
        if ( v34 >= (unsigned int)v32 )
          sub_2213CE4(v30);
        memmove(
          (char *)&v40 - ((actualSize + 15) & 0x1FFFFFFF0LL),
          (char *)v33 + v34 * *(unsigned int *)(*(_QWORD *)v33 + 260LL) + 32,
          actualSize);
        v35 = method->rgctx_data;
        v36 = (char *)&v40 - ((actualSize + 15) & 0x1FFFFFFF0LL);
        if ( (v35->_13_K->_1.byval_arg.bits & 0x80000000) == 0 )
          v36 = *(char **)((char *)&v40 - ((actualSize + 15) & 0x1FFFFFFF0LL));
        _14_System_Collections_Generic_Dictionary_K__V__Remove = v35->_14_System_Collections_Generic_Dictionary_K__V__Remove;
        methodPointer = _14_System_Collections_Generic_Dictionary_K__V__Remove->methodPointer;
        invoker_method = (__int64 (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_Dictionary_K__V__o *, char **, char *))_14_System_Collections_Generic_Dictionary_K__V__Remove->invoker_method;
        v41 = v36;
        v30 = invoker_method(methodPointer, _14_System_Collections_Generic_Dictionary_K__V__Remove, dic, &v41, &v42);
        LODWORD(v32) = v33[6];
        ++v34;
      }
      while ( (__int64)v34 < (int)v32 );
    }
  }
}


void BasicHelper__Remove_int__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        System_Func_KeyValuePair_K__V___bool__o *cond,
        const MethodInfo_381528C *method)
{
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x21
  long double v8; // q0
  Il2CppClass *_6_BasicHelper___c__23_K__V; // x8
  const MethodInfo_381528C_RGCTXs *rgctx_data; // x8
  __int64 v11; // x0
  System_Func_T__TResult__o *v12; // x22
  __int64 v13; // x0
  const MethodInfo_381528C_RGCTXs *v14; // x8
  __int64 v15; // x0
  __int64 _5_System_Func_KeyValuePair_K__V___K; // x8
  Il2CppObject *v17; // x23
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  long double v24; // q0
  Il2CppClass *v25; // x0
  Il2CppClass *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Int32_array *v28; // x0
  __int64 v29; // x1
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v31; // x21
  unsigned __int64 v32; // x22

  if ( method->rgctx_data )
  {
    if ( !dic )
      return;
  }
  else
  {
    sub_224B964(method);
    if ( !dic )
      return;
  }
  v7 = System_Linq_Enumerable__Where_KeyValuePair_int__object__(
         (System_Collections_Generic_IEnumerable_TSource__o *)dic,
         (System_Func_TSource__bool__o *)cond,
         (const MethodInfo_38A1954 *)method->rgctx_data->_2_System_Linq_Enumerable_Where_KeyValuePair_K__V__);
  _6_BasicHelper___c__23_K__V = method->rgctx_data->_6_BasicHelper___c__23_K__V_;
  if ( (*((_WORD *)&_6_BasicHelper___c__23_K__V->_2.bitflags2 + 1) & 1) == 0 )
    _6_BasicHelper___c__23_K__V = (Il2CppClass *)sub_224B908(v8);
  if ( !*(&_6_BasicHelper___c__23_K__V->_2.cctor_finished + 1) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(_6_BasicHelper___c__23_K__V, v6);
  rgctx_data = method->rgctx_data;
  v11 = (__int64)rgctx_data->_6_BasicHelper___c__23_K__V_;
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
  {
    v11 = sub_224B908(v8);
    rgctx_data = method->rgctx_data;
  }
  v12 = *(System_Func_T__TResult__o **)(*(_QWORD *)(v11 + 184) + 8LL);
  if ( !v12 )
  {
    v13 = (__int64)rgctx_data->_6_BasicHelper___c__23_K__V_;
    if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
      v13 = sub_224B908(v8);
    if ( !*(_DWORD *)(v13 + 228) )
      *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v13, v6);
    v14 = method->rgctx_data;
    v15 = (__int64)v14->_6_BasicHelper___c__23_K__V_;
    if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    {
      v15 = sub_224B908(v8);
      v14 = method->rgctx_data;
    }
    _5_System_Func_KeyValuePair_K__V___K = (__int64)v14->_5_System_Func_KeyValuePair_K__V___K_;
    v17 = **(Il2CppObject ***)(v15 + 184);
    if ( (*(_WORD *)(_5_System_Func_KeyValuePair_K__V___K + 309) & 1) == 0 )
      _5_System_Func_KeyValuePair_K__V___K = sub_224B908(v8);
    v12 = (System_Func_T__TResult__o *)sub_2213CCC(_5_System_Func_KeyValuePair_K__V___K);
    System_Func_KeyValuePair_int__object___int____ctor(
      v12,
      v17,
      (intptr_t)method->rgctx_data->_7_BasicHelper___c__23_K__V___Remove_b__23_0,
      (const MethodInfo_428192C *)method->rgctx_data->_8_System_Func_KeyValuePair_K__V___K___ctor);
    v25 = method->rgctx_data->_6_BasicHelper___c__23_K__V_;
    if ( (*((_WORD *)&v25->_2.bitflags2 + 1) & 1) == 0 )
      v25 = (Il2CppClass *)sub_224B908(v24);
    *((_QWORD *)v25->static_fields + 1) = v12;
    v26 = method->rgctx_data->_6_BasicHelper___c__23_K__V_;
    if ( (*((_WORD *)&v26->_2.bitflags2 + 1) & 1) == 0 )
      v26 = (Il2CppClass *)sub_224B908(v24);
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)((char *)v26->static_fields + 8),
      (int32_t)v12,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    rgctx_data = method->rgctx_data;
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___int_(
                                                               v7,
                                                               (System_Func_TSource__TResult__o *)v12,
                                                               (const MethodInfo_388A610 *)rgctx_data->_9_System_Linq_Enumerable_Select_KeyValuePair_K__V___K_);
  v28 = System_Linq_Enumerable__ToArray_int_(
          v27,
          (const MethodInfo_389B994 *)method->rgctx_data->_11_System_Linq_Enumerable_ToArray_K_);
  if ( !v28 )
    sub_2213CDC(0, v29);
  max_length = v28->max_length;
  v31 = v28;
  if ( (int)max_length >= 1 )
  {
    v32 = 0;
    do
    {
      if ( v32 >= (unsigned int)max_length )
        sub_2213CE4(v28);
      v28 = (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___Remove(
                                    (System_Collections_Generic_Dictionary_int__object__o *)dic,
                                    v31->m_Items[v32],
                                    (const MethodInfo_3F9D958 *)method->rgctx_data->_14_System_Collections_Generic_Dictionary_K__V__Remove);
      LODWORD(max_length) = v31->max_length;
      ++v32;
    }
    while ( (__int64)v32 < (int)max_length );
  }
}


void BasicHelper__Remove_object__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        System_Func_KeyValuePair_K__V___bool__o *cond,
        const MethodInfo_3815478 *method)
{
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x21
  long double v8; // q0
  Il2CppClass *_6_BasicHelper___c__23_K__V; // x8
  const MethodInfo_3815478_RGCTXs *rgctx_data; // x8
  __int64 v11; // x0
  System_Func_T__TResult__o *v12; // x22
  __int64 v13; // x0
  const MethodInfo_3815478_RGCTXs *v14; // x8
  __int64 v15; // x0
  __int64 _5_System_Func_KeyValuePair_K__V___K; // x8
  Il2CppObject *v17; // x23
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  long double v24; // q0
  Il2CppClass *v25; // x0
  Il2CppClass *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Object_array *v28; // x0
  __int64 v29; // x1
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v31; // x21
  unsigned __int64 v32; // x22

  if ( method->rgctx_data )
  {
    if ( !dic )
      return;
  }
  else
  {
    sub_224B964(method);
    if ( !dic )
      return;
  }
  v7 = System_Linq_Enumerable__Where_KeyValuePair_object__object__(
         (System_Collections_Generic_IEnumerable_TSource__o *)dic,
         (System_Func_TSource__bool__o *)cond,
         (const MethodInfo_38A2564 *)method->rgctx_data->_2_System_Linq_Enumerable_Where_KeyValuePair_K__V__);
  _6_BasicHelper___c__23_K__V = method->rgctx_data->_6_BasicHelper___c__23_K__V_;
  if ( (*((_WORD *)&_6_BasicHelper___c__23_K__V->_2.bitflags2 + 1) & 1) == 0 )
    _6_BasicHelper___c__23_K__V = (Il2CppClass *)sub_224B908(v8);
  if ( !*(&_6_BasicHelper___c__23_K__V->_2.cctor_finished + 1) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(_6_BasicHelper___c__23_K__V, v6);
  rgctx_data = method->rgctx_data;
  v11 = (__int64)rgctx_data->_6_BasicHelper___c__23_K__V_;
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
  {
    v11 = sub_224B908(v8);
    rgctx_data = method->rgctx_data;
  }
  v12 = *(System_Func_T__TResult__o **)(*(_QWORD *)(v11 + 184) + 8LL);
  if ( !v12 )
  {
    v13 = (__int64)rgctx_data->_6_BasicHelper___c__23_K__V_;
    if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
      v13 = sub_224B908(v8);
    if ( !*(_DWORD *)(v13 + 228) )
      *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v13, v6);
    v14 = method->rgctx_data;
    v15 = (__int64)v14->_6_BasicHelper___c__23_K__V_;
    if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    {
      v15 = sub_224B908(v8);
      v14 = method->rgctx_data;
    }
    _5_System_Func_KeyValuePair_K__V___K = (__int64)v14->_5_System_Func_KeyValuePair_K__V___K_;
    v17 = **(Il2CppObject ***)(v15 + 184);
    if ( (*(_WORD *)(_5_System_Func_KeyValuePair_K__V___K + 309) & 1) == 0 )
      _5_System_Func_KeyValuePair_K__V___K = sub_224B908(v8);
    v12 = (System_Func_T__TResult__o *)sub_2213CCC(_5_System_Func_KeyValuePair_K__V___K);
    System_Func_KeyValuePair_object__object___object____ctor(
      v12,
      v17,
      (intptr_t)method->rgctx_data->_7_BasicHelper___c__23_K__V___Remove_b__23_0,
      (const MethodInfo_4283F24 *)method->rgctx_data->_8_System_Func_KeyValuePair_K__V___K___ctor);
    v25 = method->rgctx_data->_6_BasicHelper___c__23_K__V_;
    if ( (*((_WORD *)&v25->_2.bitflags2 + 1) & 1) == 0 )
      v25 = (Il2CppClass *)sub_224B908(v24);
    *((_QWORD *)v25->static_fields + 1) = v12;
    v26 = method->rgctx_data->_6_BasicHelper___c__23_K__V_;
    if ( (*((_WORD *)&v26->_2.bitflags2 + 1) & 1) == 0 )
      v26 = (Il2CppClass *)sub_224B908(v24);
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)((char *)v26->static_fields + 8),
      (int32_t)v12,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    rgctx_data = method->rgctx_data;
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__object___object_(
                                                               v7,
                                                               (System_Func_TSource__TResult__o *)v12,
                                                               (const MethodInfo_388C1F4 *)rgctx_data->_9_System_Linq_Enumerable_Select_KeyValuePair_K__V___K_);
  v28 = System_Linq_Enumerable__ToArray_object_(
          v27,
          (const MethodInfo_389BB2C *)method->rgctx_data->_11_System_Linq_Enumerable_ToArray_K_);
  if ( !v28 )
    sub_2213CDC(0, v29);
  max_length = v28->max_length;
  v31 = v28;
  if ( (int)max_length >= 1 )
  {
    v32 = 0;
    do
    {
      if ( v32 >= (unsigned int)max_length )
        sub_2213CE4(v28);
      v28 = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___Remove(
                                     (System_Collections_Generic_Dictionary_object__object__o *)dic,
                                     v31->m_Items[v32],
                                     (const MethodInfo_3FFF12C *)method->rgctx_data->_14_System_Collections_Generic_Dictionary_K__V__Remove);
      LODWORD(max_length) = v31->max_length;
      ++v32;
    }
    while ( (__int64)v32 < (int)max_length );
  }
}


// local variable allocation has failed, the output may be wrong!
void BasicHelper__SetActiveSafely(UnityEngine_Component_o *self, bool value, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v8; // x2

  if ( (byte_59722C6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59722C6 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_2213CDC(v5, v6);
    gameObject = UnityEngine_Component__get_gameObject(self, 0);
    GameObjectHelper__SetActiveSafely(gameObject, value, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void BasicHelper__SetStopEffectCallBack(
        UnityEngine_GameObject_o *obj,
        bool isDestroy,
        System_Action_o *action,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x22

  if ( (byte_59722C0 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59722C0 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDestroy);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  Component_object = 0;
  if ( v7 )
  {
    if ( !obj )
      goto LABEL_14;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         obj,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
    sub_2213CDC(v7, v8);
  }
  ActionExtensions__Call(action, 0);
}


System_Collections_Generic_List_T__o *BasicHelper__Shuffle___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *list,
        const MethodInfo_3815CA8 *method)
{
  const MethodInfo_3815CA8_RGCTXs *rgctx_data; // x8
  size_t actualSize; // x21
  void *v6; // x0
  __int64 v7; // x1
  int v8; // w28
  const MethodInfo_3815CA8_RGCTXs *v9; // x8
  MethodInfo *_1_System_Collections_Generic_List_T__get_Item; // x1
  Il2CppMethodPointer methodPointer; // x0
  void (__fastcall *invoker_method)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int **, char *); // x8
  int32_t v13; // w0
  int32_t v14; // w0
  const MethodInfo_3815CA8_RGCTXs *v15; // x8
  int32_t v16; // w26
  MethodInfo *v17; // x1
  Il2CppMethodPointer v18; // x0
  void (__fastcall *v19)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int **, char *); // x8
  const MethodInfo_3815CA8_RGCTXs *v20; // x8
  char *v21; // x4
  MethodInfo *_4_System_Collections_Generic_List_T__set_Item; // x1
  Il2CppMethodPointer v23; // x0
  void (__fastcall *v24)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int **); // x8
  const MethodInfo_3815CA8_RGCTXs *v25; // x8
  char *v26; // x4
  MethodInfo *v27; // x1
  Il2CppMethodPointer v28; // x0
  void (__fastcall *v29)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int **); // x8
  __int64 v31; // [xsp+0h] [xbp-30h] BYREF
  unsigned __int64 StatusReg; // [xsp+8h] [xbp-28h]
  int *v33; // [xsp+10h] [xbp-20h] BYREF
  char *v34; // [xsp+18h] [xbp-18h]
  int v35; // [xsp+24h] [xbp-Ch] BYREF
  __int64 v36; // [xsp+28h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v36 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  actualSize = rgctx_data->_2_T->_2.actualSize;
  v6 = memset((char *)&v31 - ((actualSize + 15) & 0x1FFFFFFF0LL), 0, actualSize);
  if ( !list )
    sub_2213CDC(v6, v7);
  if ( ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_3_System_Collections_Generic_List_T__get_Count->methodPointer)(list) >= 1 )
  {
    v8 = 0;
    do
    {
      v9 = method->rgctx_data;
      v35 = v8;
      _1_System_Collections_Generic_List_T__get_Item = v9->_1_System_Collections_Generic_List_T__get_Item;
      methodPointer = _1_System_Collections_Generic_List_T__get_Item->methodPointer;
      invoker_method = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int **, char *))_1_System_Collections_Generic_List_T__get_Item->invoker_method;
      v33 = &v35;
      v34 = (char *)&v31 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      invoker_method(methodPointer, _1_System_Collections_Generic_List_T__get_Item, list, &v33, v34);
      memcpy(
        (char *)&v31 - ((actualSize + 15) & 0x1FFFFFFF0LL),
        (char *)&v31 - ((actualSize + 15) & 0x1FFFFFFF0LL),
        actualSize);
      v13 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_3_System_Collections_Generic_List_T__get_Count->methodPointer)(list);
      v14 = UnityEngine_Random__Range_83400680(0, v13, 0);
      v15 = method->rgctx_data;
      v16 = v14;
      v35 = v14;
      v17 = v15->_1_System_Collections_Generic_List_T__get_Item;
      v18 = v17->methodPointer;
      v19 = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int **, char *))v17->invoker_method;
      v33 = &v35;
      v34 = (char *)&v31 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      v19(v18, v17, list, &v33, v34);
      v20 = method->rgctx_data;
      v21 = (char *)&v31 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      if ( (v20->_2_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v21 = *(char **)((char *)&v31 - ((actualSize + 15) & 0x1FFFFFFF0LL));
      _4_System_Collections_Generic_List_T__set_Item = v20->_4_System_Collections_Generic_List_T__set_Item;
      v35 = v8;
      v23 = _4_System_Collections_Generic_List_T__set_Item->methodPointer;
      v24 = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int **))_4_System_Collections_Generic_List_T__set_Item->invoker_method;
      v33 = &v35;
      v34 = v21;
      v24(v23, _4_System_Collections_Generic_List_T__set_Item, list, &v33);
      memcpy(
        (char *)&v31 - ((actualSize + 15) & 0x1FFFFFFF0LL),
        (char *)&v31 - ((actualSize + 15) & 0x1FFFFFFF0LL),
        actualSize);
      v25 = method->rgctx_data;
      v26 = (char *)&v31 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      v27 = v25->_4_System_Collections_Generic_List_T__set_Item;
      v28 = v27->methodPointer;
      if ( (v25->_2_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v26 = *(char **)((char *)&v31 - ((actualSize + 15) & 0x1FFFFFFF0LL));
      v29 = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int **))v27->invoker_method;
      v35 = v16;
      v33 = &v35;
      v34 = v26;
      v29(v28, v27, list, &v33);
      ++v8;
    }
    while ( v8 < ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_3_System_Collections_Generic_List_T__get_Count->methodPointer)(list) );
  }
  return list;
}


System_Collections_Generic_List_T__o *BasicHelper__Shuffle_int_(
        System_Collections_Generic_List_T__o *list,
        const MethodInfo_3815B08 *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w21
  int32_t Item; // w22
  int32_t v6; // w23
  int32_t v7; // w0

  v3 = (System_Collections_Generic_List_int__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_224B964(method);
  if ( !v3 )
    sub_2213CDC(list, method);
  if ( v3->fields._size >= 1 )
  {
    v4 = 0;
    do
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v3,
               v4,
               (const MethodInfo_4466F78 *)method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item);
      v6 = UnityEngine_Random__Range_83400680(0, v3->fields._size, 0);
      v7 = System_Collections_Generic_List_int___get_Item(
             v3,
             v6,
             (const MethodInfo_4466F78 *)method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item);
      System_Collections_Generic_List_int___set_Item(
        v3,
        v4,
        v7,
        (const MethodInfo_4466FCC *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      System_Collections_Generic_List_int___set_Item(
        v3,
        v6,
        Item,
        (const MethodInfo_4466FCC *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      ++v4;
    }
    while ( v4 < v3->fields._size );
  }
  return (System_Collections_Generic_List_T__o *)v3;
}


System_Collections_Generic_List_T__o *BasicHelper__Shuffle_object_(
        System_Collections_Generic_List_T__o *list,
        const MethodInfo_3815BD8 *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w21
  Il2CppObject *Item; // x22
  int32_t v6; // w23
  Il2CppObject *v7; // x0

  v3 = (System_Collections_Generic_List_object__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_224B964(method);
  if ( !v3 )
    sub_2213CDC(list, method);
  if ( v3->fields._size >= 1 )
  {
    v4 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v3,
               v4,
               (const MethodInfo_4483994 *)method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item);
      v6 = UnityEngine_Random__Range_83400680(0, v3->fields._size, 0);
      v7 = System_Collections_Generic_List_object___get_Item(
             v3,
             v6,
             (const MethodInfo_4483994 *)method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item);
      System_Collections_Generic_List_object___set_Item(
        v3,
        v4,
        v7,
        (const MethodInfo_44839E8 *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      System_Collections_Generic_List_object___set_Item(
        v3,
        v6,
        Item,
        (const MethodInfo_44839E8 *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
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
        const MethodInfo_3816074 *method)
{
  const MethodInfo_3816074_RGCTXs *rgctx_data; // x23
  size_t actualSize; // x2
  _QWORD *v10; // x24
  _QWORD *v11; // x26
  int v12; // w0
  const MethodInfo_3816074_RGCTXs *v13; // x8
  MethodInfo *_3_System_Collections_Generic_List_T__get_Item; // x1
  Il2CppMethodPointer methodPointer; // x0
  __int64 (__fastcall *invoker_method)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x9
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo_3816074_RGCTXs *v19; // x8
  MethodInfo *_5_System_Func_T__int__Invoke; // x1
  Il2CppClass *_4_T; // x9
  signed int *v22; // x8
  Il2CppMethodPointer v23; // x0
  void (__fastcall *v24)(Il2CppMethodPointer, MethodInfo *, System_Func_T__int__o *, signed int **, signed int *); // x9
  signed int v25; // w23
  unsigned int v26; // w28
  const MethodInfo_3816074_RGCTXs *v27; // x8
  MethodInfo *v28; // x1
  Il2CppMethodPointer v29; // x0
  void (__fastcall *v30)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x8
  size_t v31; // x25
  const MethodInfo_3816074_RGCTXs *v32; // x9
  signed int *v33; // x8
  MethodInfo *v34; // x1
  Il2CppMethodPointer v35; // x0
  void (__fastcall *v36)(Il2CppMethodPointer, MethodInfo *, System_Func_T__int__o *, signed int **, signed int *); // x9
  signed int v37; // w26
  _BOOL4 v38; // w8
  signed int v39; // w25
  MethodInfo *v40; // x1
  Il2CppMethodPointer v41; // x0
  void (__fastcall *v42)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x8
  const MethodInfo_3816074_RGCTXs *v43; // x9
  signed int *v44; // x8
  MethodInfo *v45; // x1
  Il2CppMethodPointer v46; // x0
  void (__fastcall *v47)(Il2CppMethodPointer, MethodInfo *, System_Func_T__int__o *, signed int **, signed int *); // x9
  void (__fastcall *v48)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x8
  const MethodInfo_3816074_RGCTXs *v49; // x9
  signed int *v50; // x8
  MethodInfo *v51; // x1
  Il2CppMethodPointer v52; // x0
  void (__fastcall *v53)(Il2CppMethodPointer, MethodInfo *, System_Func_T__int__o *, signed int **, signed int *); // x9
  const MethodInfo_3816074_RGCTXs *v54; // x8
  _QWORD *v55; // x4
  MethodInfo *_7_System_Collections_Generic_List_T__Insert; // x1
  Il2CppMethodPointer v57; // x0
  void (__fastcall *v58)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, signed int **); // x8
  __int64 v60; // [xsp+0h] [xbp-50h] BYREF
  unsigned __int64 StatusReg; // [xsp+8h] [xbp-48h]
  _QWORD *v62; // [xsp+10h] [xbp-40h]
  int v63; // [xsp+1Ch] [xbp-34h]
  void *v64; // [xsp+20h] [xbp-30h]
  size_t v65; // [xsp+28h] [xbp-28h]
  signed int *v66; // [xsp+30h] [xbp-20h] BYREF
  _QWORD *v67; // [xsp+38h] [xbp-18h]
  signed int v68; // [xsp+44h] [xbp-Ch] BYREF
  __int64 v69; // [xsp+48h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v69 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  actualSize = rgctx_data->_4_T->_2.actualSize;
  v10 = (__int64 *)((char *)&v60 - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v11 = v10;
  v64 = v10;
  v65 = actualSize;
  memset(v10, 0, actualSize);
  if ( !list
    || ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list) < 2 )
  {
    return list;
  }
  v12 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list);
  v13 = method->rgctx_data;
  v63 = v12;
  v68 = 0;
  _3_System_Collections_Generic_List_T__get_Item = v13->_3_System_Collections_Generic_List_T__get_Item;
  methodPointer = _3_System_Collections_Generic_List_T__get_Item->methodPointer;
  invoker_method = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))_3_System_Collections_Generic_List_T__get_Item->invoker_method;
  v66 = &v68;
  v67 = v10;
  v17 = invoker_method(methodPointer, _3_System_Collections_Generic_List_T__get_Item, list, &v66, v10);
  if ( !priorityFunc )
    sub_2213CDC(v17, v18);
  v19 = method->rgctx_data;
  _4_T = v19->_4_T;
  _5_System_Func_T__int__Invoke = v19->_5_System_Func_T__int__Invoke;
  v22 = (signed int *)v10;
  v23 = _5_System_Func_T__int__Invoke->methodPointer;
  if ( (_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
    v22 = (signed int *)*v10;
  v24 = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Func_T__int__o *, signed int **, signed int *))_5_System_Func_T__int__Invoke->invoker_method;
  v66 = v22;
  v24(v23, _5_System_Func_T__int__Invoke, priorityFunc, &v66, &v68);
  if ( v63 < 2 )
    return list;
  v25 = v68;
  v26 = 1;
  v62 = v10;
  do
  {
    v27 = method->rgctx_data;
    v68 = v26;
    v28 = v27->_3_System_Collections_Generic_List_T__get_Item;
    v29 = v28->methodPointer;
    v30 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v28->invoker_method;
    v66 = &v68;
    v67 = v10;
    v30(v29, v28, list, &v66, v10);
    v31 = v65;
    memcpy(v64, v10, v65);
    memcpy(v11, v10, v31);
    v32 = method->rgctx_data;
    v33 = (signed int *)v11;
    if ( (v32->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v33 = (signed int *)*v11;
    v34 = v32->_5_System_Func_T__int__Invoke;
    v35 = v34->methodPointer;
    v36 = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Func_T__int__o *, signed int **, signed int *))v34->invoker_method;
    v66 = v33;
    v36(v35, v34, priorityFunc, &v66, &v68);
    v37 = v68;
    v38 = v68 > v25;
    if ( !isDescending )
      v38 = v68 < v25;
    if ( !v38 )
      goto LABEL_30;
    ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_6_System_Collections_Generic_List_T__RemoveAt->methodPointer)(
      list,
      v26);
    v39 = 0;
    while ( 1 )
    {
      v40 = method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item;
      v41 = v40->methodPointer;
      if ( !isDescending )
        break;
      v42 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v40->invoker_method;
      v68 = v39;
      v66 = &v68;
      v67 = v10;
      v42(v41, v40, list, &v66, v10);
      v43 = method->rgctx_data;
      v44 = (signed int *)v10;
      if ( (v43->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v44 = (signed int *)*v10;
      v45 = v43->_5_System_Func_T__int__Invoke;
      v46 = v45->methodPointer;
      v47 = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Func_T__int__o *, signed int **, signed int *))v45->invoker_method;
      v66 = v44;
      v47(v46, v45, priorityFunc, &v66, &v68);
      if ( v37 > v68 )
        goto LABEL_26;
LABEL_24:
      if ( v26 == ++v39 )
        goto LABEL_29;
    }
    v48 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v40->invoker_method;
    v68 = v39;
    v66 = &v68;
    v67 = v10;
    v48(v41, v40, list, &v66, v10);
    v49 = method->rgctx_data;
    v50 = (signed int *)v10;
    if ( (v49->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v50 = (signed int *)*v10;
    v51 = v49->_5_System_Func_T__int__Invoke;
    v52 = v51->methodPointer;
    v53 = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Func_T__int__o *, signed int **, signed int *))v51->invoker_method;
    v66 = v50;
    v53(v52, v51, priorityFunc, &v66, &v68);
    if ( v37 >= v68 )
      goto LABEL_24;
LABEL_26:
    memcpy(v10, v64, v65);
    v54 = method->rgctx_data;
    v55 = v10;
    if ( (v54->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v55 = (_QWORD *)*v10;
    _7_System_Collections_Generic_List_T__Insert = v54->_7_System_Collections_Generic_List_T__Insert;
    v68 = v39;
    v57 = _7_System_Collections_Generic_List_T__Insert->methodPointer;
    v58 = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, signed int **))_7_System_Collections_Generic_List_T__Insert->invoker_method;
    v66 = &v68;
    v67 = v55;
    v58(v57, _7_System_Collections_Generic_List_T__Insert, list, &v66);
LABEL_29:
    v37 = v25;
LABEL_30:
    ++v26;
    v25 = v37;
    v11 = v62;
  }
  while ( v26 != v63 );
  return list;
}


System_Collections_Generic_List_T__o *BasicHelper__StableSort_object_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__int__o *priorityFunc,
        bool isDescending,
        const MethodInfo_3815EE8 *method)
{
  int32_t size; // w28
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  int v11; // w24
  int32_t i; // w23
  Il2CppObject *v13; // x25
  int v14; // w26
  _BOOL4 v15; // w8
  int32_t v16; // w27
  Il2CppObject *v17; // x0
  int v18; // w0

  if ( method->rgctx_data )
  {
    if ( !list )
      return list;
  }
  else
  {
    sub_224B964(method);
    if ( !list )
      return list;
  }
  size = list->fields._size;
  if ( size < 2 )
    return list;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)list,
           0,
           (const MethodInfo_4483994 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
  if ( !priorityFunc )
    sub_2213CDC(Item, v10);
  v11 = ((__int64 (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))priorityFunc->fields.invoke_impl)(
          priorityFunc->fields.method_code,
          Item,
          priorityFunc->fields.method);
  for ( i = 1; i != size; ++i )
  {
    v13 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)list,
            i,
            (const MethodInfo_4483994 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
    v14 = ((__int64 (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))priorityFunc->fields.invoke_impl)(
            priorityFunc->fields.method_code,
            v13,
            priorityFunc->fields.method);
    v15 = v14 > v11;
    if ( !isDescending )
      v15 = v14 < v11;
    if ( !v15 )
      goto LABEL_20;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)list,
      i,
      (const MethodInfo_44853FC *)method->rgctx_data->_6_System_Collections_Generic_List_T__RemoveAt);
    v16 = 0;
    while ( 1 )
    {
      v17 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)list,
              v16,
              (const MethodInfo_4483994 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      v18 = ((__int64 (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))priorityFunc->fields.invoke_impl)(
              priorityFunc->fields.method_code,
              v17,
              priorityFunc->fields.method);
      if ( !isDescending )
        break;
      if ( v14 > v18 )
        goto LABEL_18;
LABEL_16:
      if ( i == ++v16 )
        goto LABEL_19;
    }
    if ( v14 >= v18 )
      goto LABEL_16;
LABEL_18:
    System_Collections_Generic_List_object___Insert(
      (System_Collections_Generic_List_object__o *)list,
      v16,
      v13,
      (const MethodInfo_4484A00 *)method->rgctx_data->_7_System_Collections_Generic_List_T__Insert);
LABEL_19:
    v14 = v11;
LABEL_20:
    v11 = v14;
  }
  return list;
}


System_String_o *BasicHelper__SubstringLast(System_Text_StringBuilder_o *self, int32_t len, const MethodInfo *method)
{
  int32_t Length; // w0
  System_String_o *v7; // x21
  int32_t v8; // w0

  if ( (byte_59722C8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59722C8 = 1;
  }
  if ( !self || System_Text_StringBuilder__get_Length(self, 0) < len )
    return (System_String_o *)StringLiteral_1/*""*/;
  Length = System_Text_StringBuilder__get_Length(self, 0);
  v7 = System_Text_StringBuilder__ToString_75731808(self, Length - len, len, 0);
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
  UnityEngine_Animation_o *v7; // x19
  int v9; // w23
  float length; // s8
  UnityEngine_AnimationState_o *Item; // x23
  float time; // s0

  if ( !self )
    goto LABEL_13;
  v7 = self;
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
    self = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v7, selfAnimStr, 0);
    if ( !self )
      goto LABEL_13;
    length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)self, 0);
    self = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(targetAnim, tgAnimStr, 0);
    if ( !self )
      goto LABEL_13;
    if ( length == UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)self, 0) )
    {
      Item = UnityEngine_Animation__get_Item(v7, selfAnimStr, 0);
      self = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(targetAnim, tgAnimStr, 0);
      if ( self )
      {
        time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)self, 0);
        if ( Item )
        {
          UnityEngine_AnimationState__set_time(Item, time, 0);
          UnityEngine_Animation__Sample(v7, 0);
          UnityEngine_Animation__Play_83078544(v7, selfAnimStr, 0);
          return 1;
        }
      }
LABEL_13:
      sub_2213CDC(self, selfAnimStr);
    }
  }
  return 0;
}


bool BasicHelper__SynchronizeAnimation_51161208(
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
  SimpleAnimation_State_c **v23; // x10
  __int64 v24; // x0
  float v25; // s8
  SimpleAnimation_c *v26; // x8
  SimpleAnimation_o *v27; // x23
  __int64 v28; // x9
  SimpleAnimation_State_c **v29; // x10
  __int64 v30; // x0
  SimpleAnimation_State_o *Item; // x23
  SimpleAnimation_c *v32; // x8
  SimpleAnimation_o *v33; // x21
  __int64 v34; // x9
  SimpleAnimation_State_c **v35; // x10
  __int64 v36; // x0
  float v38; // s0
  float v39; // s8
  SimpleAnimation_State_c *v40; // x8
  __int64 v41; // x9
  SimpleAnimation_State_c **v42; // x10
  __int64 v43; // x0

  v8 = self;
  if ( (byte_59722BD & 1) == 0 )
  {
    self = (SimpleAnimation_o *)sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_59722BD = 1;
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
    v13 = (__int64)(&klass[1]._1.element_class + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v13 = sub_224BC3C(self, SimpleAnimation_State_TypeInfo, 15);
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
    v19 = (__int64)(&v15[1]._1.element_class + 2 * *v18);
  }
  else
  {
LABEL_17:
    v19 = sub_224BC3C(self, SimpleAnimation_State_TypeInfo, 15);
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
    v23 = (SimpleAnimation_State_c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v23 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v22;
      v23 += 2;
      if ( !v22 )
        goto LABEL_25;
    }
    v24 = (__int64)(&v20[1]._1.byval_arg + *(_DWORD *)v23);
  }
  else
  {
LABEL_25:
    v24 = sub_224BC3C(self, SimpleAnimation_State_TypeInfo, 13);
  }
  v25 = (*(float (__fastcall **)(SimpleAnimation_o *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
  self = (SimpleAnimation_o *)SimpleAnimation__get_Item(targetAnim, tgAnimStr, 0);
  if ( !self )
LABEL_51:
    sub_2213CDC(self, selfAnimStr);
  v26 = self->klass;
  v27 = self;
  v28 = *(unsigned __int16 *)&self->klass->_2.rank;
  if ( *(_WORD *)&self->klass->_2.rank )
  {
    v29 = (SimpleAnimation_State_c **)&v26->_1.interfaceOffsets->offset;
    while ( *(v29 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v28;
      v29 += 2;
      if ( !v28 )
        goto LABEL_32;
    }
    v30 = (__int64)(&v26[1]._1.byval_arg + *(_DWORD *)v29);
  }
  else
  {
LABEL_32:
    v30 = sub_224BC3C(self, SimpleAnimation_State_TypeInfo, 13);
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
    v36 = sub_224BC3C(self, SimpleAnimation_State_TypeInfo, 3);
  }
  self = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
  if ( !Item )
    goto LABEL_51;
  v39 = v38;
  v40 = Item->klass;
  v41 = *(unsigned __int16 *)&Item->klass->_2.rank;
  if ( *(_WORD *)&Item->klass->_2.rank )
  {
    v42 = (SimpleAnimation_State_c **)&v40->_1.interfaceOffsets->offset;
    while ( *(v42 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v41;
      v42 += 2;
      if ( !v41 )
        goto LABEL_48;
    }
    v43 = (__int64)&v40->vtable[*(_DWORD *)v42 + 4];
  }
  else
  {
LABEL_48:
    v43 = sub_224BC3C(Item, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v43)(Item, *(_QWORD *)(v43 + 8), v39);
  SimpleAnimation__Sample(v8, 0);
  SimpleAnimation__Play_78552168(v8, selfAnimStr, 0);
  return 1;
}


Il2CppObject *BasicHelper__TakeIf_object_(
        Il2CppObject *self,
        System_Predicate_T__o *match,
        const MethodInfo_3816410 *method)
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
    self = (Il2CppObject *)sub_224B964(method);
    if ( !v4 )
      return 0;
  }
  if ( !match )
    sub_2213CDC(self, match);
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
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59722C9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    byte_59722C9 = 1;
  }
  v5 = value;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v5);
  return System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v3, 0);
}


System_String_o *BasicHelper__ToCommaString_51164776(int64_t value, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int64_t v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59722CA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    byte_59722CA = 1;
  }
  v5 = value;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v5);
  return System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v3, 0);
}


System_Collections_Generic_IEnumerable_T__o *BasicHelper__ToIterator___Il2CppFullySharedGenericType_(
        int32_t loopCount,
        System_Func_int__T__o *func,
        const MethodInfo_3816570 *method)
{
  long double v3; // q0
  const MethodInfo_3816570_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__ToIterator_d__32_T; // x0
  System_Collections_Generic_IEnumerable_T__o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__ToIterator_d__32_T = (__int64)rgctx_data->_0_BasicHelper__ToIterator_d__32_T_;
  if ( (*((_WORD *)&rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_2.bitflags2 + 1) & 1) == 0 )
    _0_BasicHelper__ToIterator_d__32_T = sub_224B908(v3);
  v9 = (System_Collections_Generic_IEnumerable_T__o *)sub_2213CCC(_0_BasicHelper__ToIterator_d__32_T);
  v10 = ((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *, __int64))method->rgctx_data->_1_BasicHelper__ToIterator_d__32_T___ctor->methodPointer)(
          v9,
          4294967294LL);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  sub_201DB34(
    v9,
    (char *)method->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields + 192,
    (unsigned int)loopCount);
  sub_201B1D4(v9, (char *)method->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields + 128, func);
  return v9;
}


System_Collections_Generic_IEnumerable_T__o *BasicHelper__ToIterator_float_(
        int32_t loopCount,
        System_Func_int__T__o *func,
        const MethodInfo_38164F0 *method)
{
  long double v3; // q0
  const MethodInfo_38164F0_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__ToIterator_d__32_T; // x0
  BasicHelper__ToIterator_d__32_T__o *v9; // x0
  const MethodInfo_38164F0_RGCTXs *v10; // x8
  BasicHelper__ToIterator_d__32_T__o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__ToIterator_d__32_T = (__int64)rgctx_data->_0_BasicHelper__ToIterator_d__32_T_;
  if ( (*((_WORD *)&rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_2.bitflags2 + 1) & 1) == 0 )
    _0_BasicHelper__ToIterator_d__32_T = sub_224B908(v3);
  v9 = (BasicHelper__ToIterator_d__32_T__o *)sub_2213CCC(_0_BasicHelper__ToIterator_d__32_T);
  v10 = method->rgctx_data;
  v11 = v9;
  BasicHelper__ToIterator_d__32_float____ctor(
    v9,
    -2,
    (const MethodInfo_3F3CA30 *)v10->_1_BasicHelper__ToIterator_d__32_T___ctor);
  if ( !v11 )
    sub_2213CDC(v12, v13);
  HIDWORD(v11->fields.__3__func) = loopCount;
  v11->fields.func = func;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->fields.func, (int32_t)func, v14, v15, v16, v17, v18, v19);
  return (System_Collections_Generic_IEnumerable_T__o *)v11;
}


System_Collections_Generic_IEnumerable_T__o *BasicHelper__ToIterator_object_(
        int32_t loopCount,
        System_Func_int__T__o *func,
        const MethodInfo_3816470 *method)
{
  long double v3; // q0
  const MethodInfo_3816470_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__ToIterator_d__32_T; // x0
  BasicHelper__ToIterator_d__32_T__o *v9; // x0
  const MethodInfo_3816470_RGCTXs *v10; // x8
  BasicHelper__ToIterator_d__32_T__o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__ToIterator_d__32_T = (__int64)rgctx_data->_0_BasicHelper__ToIterator_d__32_T_;
  if ( (*((_WORD *)&rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_2.bitflags2 + 1) & 1) == 0 )
    _0_BasicHelper__ToIterator_d__32_T = sub_224B908(v3);
  v9 = (BasicHelper__ToIterator_d__32_T__o *)sub_2213CCC(_0_BasicHelper__ToIterator_d__32_T);
  v10 = method->rgctx_data;
  v11 = v9;
  BasicHelper__ToIterator_d__32_object____ctor(
    v9,
    -2,
    (const MethodInfo_3F3C86C *)v10->_1_BasicHelper__ToIterator_d__32_T___ctor);
  if ( !v11 )
    sub_2213CDC(v12, v13);
  v11->fields.__3__loopCount = loopCount;
  v11->fields.__3__func = func;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->fields.__3__func, (int32_t)func, v14, v15, v16, v17, v18, v19);
  return (System_Collections_Generic_IEnumerable_T__o *)v11;
}


System_Collections_IEnumerator_o *BasicHelper__WaitCallUntilSatisfyFunc(
        System_Func_float__bool__o *funcCond,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_59722C4 & 1) == 0 )
  {
    sub_2213A60(&BasicHelper__WaitCallUntilSatisfyFunc_d__39_TypeInfo);
    byte_59722C4 = 1;
  }
  v5 = sub_2213CCC(BasicHelper__WaitCallUntilSatisfyFunc_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = funcCond;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)funcCond, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = action;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)action, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *BasicHelper__WaitForEndOfFrameCall(System_Action_o *action, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59722CB & 1) == 0 )
  {
    sub_2213A60(&BasicHelper__WaitForEndOfFrameCall_d__48_TypeInfo);
    byte_59722CB = 1;
  }
  v3 = sub_2213CCC(BasicHelper__WaitForEndOfFrameCall_d__48_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = action;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)action, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void BasicHelper__DelayCall_d__36___ctor(
        BasicHelper__DelayCall_d__36_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BasicHelper__DelayCall_d__36__MoveNext(BasicHelper__DelayCall_d__36_o *this, const MethodInfo *method)
{
  int32_t _1__state; // w8
  float delay; // s8
  _BOOL4 isWaitEvenIfNoDelayTime; // w8
  UnityEngine_WaitForSeconds_o *v6; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  bool result; // w0

  if ( (byte_59722CC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_59722CC = 1;
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
    if ( isWaitEvenIfNoDelayTime || delay > 0.0 )
    {
      v6 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, delay, 0);
      this->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v6, v8, v9, v10, v11, v12, v13);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    goto LABEL_8;
  }
  return 0;
}


Il2CppObject *BasicHelper__DelayCall_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__DelayCall_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BasicHelper__DelayCall_d__36__System_Collections_IEnumerator_Reset(
        BasicHelper__DelayCall_d__36_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BasicHelper__DelayCall_d__36_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BasicHelper__DelayCall_d__36__System_Collections_IEnumerator_get_Current(
        BasicHelper__DelayCall_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BasicHelper__DelayCall_d__36__System_IDisposable_Dispose(
        BasicHelper__DelayCall_d__36_o *this,
        const MethodInfo *method)
{
  ;
}


void BasicHelper__DelayCall_d__37_ShowAllEx_DamageFuncArgument____ctor(
        BasicHelper__DelayCall_d__37_T__o *this,
        int32_t 1__state,
        const MethodInfo_3B1C5BC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BasicHelper__DelayCall_d__37_ShowAllEx_DamageFuncArgument___MoveNext(
        BasicHelper__DelayCall_d__37_T__o *this,
        const MethodInfo_3B1C5E8 *method)
{
  int32_t _1__state; // w21
  BasicHelper__DelayCall_d__37_T__c *klass; // x8
  __int128 v6; // q0
  void *monitor; // x9
  System_Action_T__o *action; // x0
  const MethodInfo_3700040 *_3_ActionExtensions_Call_T; // x2
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  HutongGames_PlayMaker_Actions_ShowAllEx_DamageFuncArgument_o v19; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_5976193 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5976193 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      klass = method->klass;
      v6 = *(_OWORD *)&this->fields.arg;
      this->fields.__1__state = -1;
      monitor = this[1].monitor;
      action = this->fields.action;
      _3_ActionExtensions_Call_T = (const MethodInfo_3700040 *)klass->rgctx_data->_3_ActionExtensions_Call_T_;
      *(_OWORD *)&v19.fields.perf = v6;
      *(_QWORD *)&v19.fields.damageIndex = monitor;
      ActionExtensions__Call_ShowAllEx_DamageFuncArgument_(action, &v19, _3_ActionExtensions_Call_T);
    }
  }
  else
  {
    delay = this->fields.delay;
    this->fields.__1__state = -1;
    v11 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v11, delay, 0);
    this->fields.__2__current = (Il2CppObject *)v11;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.__1__state = 1;
  }
  return _1__state == 0;
}


Il2CppObject *BasicHelper__DelayCall_d__37_ShowAllEx_DamageFuncArgument___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__DelayCall_d__37_T__o *this,
        const MethodInfo_3B1C6C4 *method)
{
  return this->fields.__2__current;
}


void __noreturn BasicHelper__DelayCall_d__37_ShowAllEx_DamageFuncArgument___System_Collections_IEnumerator_Reset(
        BasicHelper__DelayCall_d__37_T__o *this,
        const MethodInfo_3B1C6CC *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_2213CCC(v3);
  System_NotSupportedException___ctor(v4, 0);
  sub_2213BA0(v4, method);
}


Il2CppObject *BasicHelper__DelayCall_d__37_ShowAllEx_DamageFuncArgument___System_Collections_IEnumerator_get_Current(
        BasicHelper__DelayCall_d__37_T__o *this,
        const MethodInfo_3B1C700 *method)
{
  return this->fields.__2__current;
}


void BasicHelper__DelayCall_d__37_ShowAllEx_DamageFuncArgument___System_IDisposable_Dispose(
        BasicHelper__DelayCall_d__37_T__o *this,
        const MethodInfo_3B1C5E4 *method)
{
  ;
}


void BasicHelper__DelayCall_d__37___Il2CppFullySharedGenericType____ctor(
        BasicHelper__DelayCall_d__37_T__o *this,
        int32_t 1__state,
        const MethodInfo_3B1C2E8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  sub_201DB34(this, method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__37_T_->_1.fields, (unsigned int)1__state);
}


bool BasicHelper__DelayCall_d__37___Il2CppFullySharedGenericType___MoveNext(
        BasicHelper__DelayCall_d__37_T__o *this,
        const MethodInfo_3B1C32C *method)
{
  BasicHelper__DelayCall_d__37_T__RGCTXs *rgctx_data; // x8
  size_t actualSize; // x22
  _QWORD *v6; // x21
  int v7; // w24
  __int64 v8; // x25
  const void *v9; // x0
  BasicHelper__DelayCall_d__37_T__RGCTXs *v10; // x8
  MethodInfo *_3_ActionExtensions_Call_T; // x1
  Il2CppMethodPointer methodPointer; // x0
  void (__fastcall *invoker_method)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x8
  float v14; // s8
  UnityEngine_WaitForSeconds_o *v15; // x21
  _QWORD v18[3]; // [xsp+8h] [xbp-20h] BYREF

  v18[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_5976192 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5976192 = 1;
  }
  rgctx_data = method->klass->rgctx_data;
  actualSize = rgctx_data->_2_T->_2.actualSize;
  v6 = (_QWORD *)((char *)&v18[-1] - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v7 = *(_DWORD *)sub_2213A88(this, rgctx_data->_0_BasicHelper__DelayCall_d__37_T_->_1.fields);
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      sub_201DB34(this, method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__37_T_->_1.fields, 0xFFFFFFFFLL);
      v8 = *(_QWORD *)sub_2213A88(
                        this,
                        (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__37_T_->_1.fields + 96);
      v9 = (const void *)sub_2213A88(
                           this,
                           (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__37_T_->_1.fields + 128);
      memcpy((char *)&v18[-1] - ((actualSize + 15) & 0x1FFFFFFF0LL), v9, actualSize);
      v10 = method->klass->rgctx_data;
      _3_ActionExtensions_Call_T = v10->_3_ActionExtensions_Call_T_;
      methodPointer = _3_ActionExtensions_Call_T->methodPointer;
      if ( (v10->_2_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v6 = (_QWORD *)*v6;
      invoker_method = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))_3_ActionExtensions_Call_T->invoker_method;
      v18[0] = v8;
      v18[1] = v6;
      invoker_method(methodPointer, _3_ActionExtensions_Call_T, 0, v18, v6);
    }
  }
  else
  {
    sub_201DB34(this, method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__37_T_->_1.fields, 0xFFFFFFFFLL);
    v14 = *(float *)sub_2213A88(
                      this,
                      (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__37_T_->_1.fields + 64);
    v15 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v15, v14, 0);
    sub_201B1D4(this, (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__37_T_->_1.fields + 32, v15);
    sub_201DB34(this, method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__37_T_->_1.fields, 1);
  }
  return v7 == 0;
}


Il2CppObject *BasicHelper__DelayCall_d__37___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__DelayCall_d__37_T__o *this,
        const MethodInfo_3B1C538 *method)
{
  return *(Il2CppObject **)sub_2213A88(
                             this,
                             (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__37_T_->_1.fields + 32);
}


void __noreturn BasicHelper__DelayCall_d__37___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset(
        BasicHelper__DelayCall_d__37_T__o *this,
        const MethodInfo_3B1C560 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_2213CCC(v3);
  System_NotSupportedException___ctor(v4, 0);
  sub_2213BA0(v4, method);
}


Il2CppObject *BasicHelper__DelayCall_d__37___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current(
        BasicHelper__DelayCall_d__37_T__o *this,
        const MethodInfo_3B1C594 *method)
{
  return *(Il2CppObject **)sub_2213A88(
                             this,
                             (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__37_T_->_1.fields + 32);
}


void BasicHelper__DelayCall_d__37___Il2CppFullySharedGenericType___System_IDisposable_Dispose(
        BasicHelper__DelayCall_d__37_T__o *this,
        const MethodInfo_3B1C328 *method)
{
  ;
}


void BasicHelper__DelayCall_d__37_object____ctor(
        BasicHelper__DelayCall_d__37_T__o *this,
        int32_t 1__state,
        const MethodInfo_3B1C1B8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BasicHelper__DelayCall_d__37_object___MoveNext(
        BasicHelper__DelayCall_d__37_T__o *this,
        const MethodInfo_3B1C1E4 *method)
{
  int32_t _1__state; // w21
  BasicHelper__DelayCall_d__37_T__c *klass; // x8
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5976191 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5976191 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      klass = method->klass;
      this->fields.__1__state = -1;
      ActionExtensions__Call_object_(
        this->fields.action,
        this->fields.arg,
        (const MethodInfo_36FFECC *)klass->rgctx_data->_3_ActionExtensions_Call_T_);
    }
  }
  else
  {
    delay = this->fields.delay;
    this->fields.__1__state = -1;
    v7 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v7, delay, 0);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    this->fields.__1__state = 1;
  }
  return _1__state == 0;
}


Il2CppObject *BasicHelper__DelayCall_d__37_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__DelayCall_d__37_T__o *this,
        const MethodInfo_3B1C2A4 *method)
{
  return this->fields.__2__current;
}


void __noreturn BasicHelper__DelayCall_d__37_object___System_Collections_IEnumerator_Reset(
        BasicHelper__DelayCall_d__37_T__o *this,
        const MethodInfo_3B1C2AC *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_2213CCC(v3);
  System_NotSupportedException___ctor(v4, 0);
  sub_2213BA0(v4, method);
}


Il2CppObject *BasicHelper__DelayCall_d__37_object___System_Collections_IEnumerator_get_Current(
        BasicHelper__DelayCall_d__37_T__o *this,
        const MethodInfo_3B1C2E0 *method)
{
  return this->fields.__2__current;
}


void BasicHelper__DelayCall_d__37_object___System_IDisposable_Dispose(
        BasicHelper__DelayCall_d__37_T__o *this,
        const MethodInfo_3B1C1E0 *method)
{
  ;
}


void BasicHelper__DelayCall_d__38___ctor(
        BasicHelper__DelayCall_d__38_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BasicHelper__DelayCall_d__38__MoveNext(BasicHelper__DelayCall_d__38_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _1__state = this->fields._count_5__2;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields._count_5__2 = 0;
  }
  this->fields.__1__state = -1;
  if ( _1__state < this->fields.delayFrameCount )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    this->fields._count_5__2 = _1__state + 1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  ActionExtensions__Call(this->fields.action, 0);
  return 0;
}


Il2CppObject *BasicHelper__DelayCall_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__DelayCall_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BasicHelper__DelayCall_d__38__System_Collections_IEnumerator_Reset(
        BasicHelper__DelayCall_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BasicHelper__DelayCall_d__38_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BasicHelper__DelayCall_d__38__System_Collections_IEnumerator_get_Current(
        BasicHelper__DelayCall_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BasicHelper__DelayCall_d__38__System_IDisposable_Dispose(
        BasicHelper__DelayCall_d__38_o *this,
        const MethodInfo *method)
{
  ;
}


void BasicHelper__RealDelayCall_d__40___ctor(
        BasicHelper__RealDelayCall_d__40_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BasicHelper__RealDelayCall_d__40__MoveNext(BasicHelper__RealDelayCall_d__40_o *this, const MethodInfo *method)
{
  int32_t _1__state; // w21
  System_Action_o *action; // x0
  float delay; // s8
  UnityEngine_WaitForSecondsRealtime_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_59722CD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    byte_59722CD = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      action = this->fields.action;
      this->fields.__1__state = -1;
      ActionExtensions__Call(action, 0);
    }
  }
  else
  {
    delay = this->fields.delay;
    this->fields.__1__state = -1;
    v6 = (UnityEngine_WaitForSecondsRealtime_o *)sub_2213CCC(UnityEngine_WaitForSecondsRealtime_TypeInfo);
    UnityEngine_WaitForSecondsRealtime___ctor(v6, delay, 0);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    this->fields.__1__state = 1;
  }
  return _1__state == 0;
}


Il2CppObject *BasicHelper__RealDelayCall_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__RealDelayCall_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BasicHelper__RealDelayCall_d__40__System_Collections_IEnumerator_Reset(
        BasicHelper__RealDelayCall_d__40_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BasicHelper__RealDelayCall_d__40_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BasicHelper__RealDelayCall_d__40__System_Collections_IEnumerator_get_Current(
        BasicHelper__RealDelayCall_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BasicHelper__RealDelayCall_d__40__System_IDisposable_Dispose(
        BasicHelper__RealDelayCall_d__40_o *this,
        const MethodInfo *method)
{
  ;
}


void BasicHelper__RealDelayCall_d__41___Il2CppFullySharedGenericType____ctor(
        BasicHelper__RealDelayCall_d__41_T__o *this,
        int32_t 1__state,
        const MethodInfo_3F2E9A8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  sub_201DB34(
    this,
    method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__41_T_->_1.fields,
    (unsigned int)1__state);
}


bool BasicHelper__RealDelayCall_d__41___Il2CppFullySharedGenericType___MoveNext(
        BasicHelper__RealDelayCall_d__41_T__o *this,
        const MethodInfo_3F2E9EC *method)
{
  BasicHelper__RealDelayCall_d__41_T__RGCTXs *rgctx_data; // x8
  size_t actualSize; // x22
  _QWORD *v6; // x21
  int v7; // w24
  __int64 v8; // x25
  const void *v9; // x0
  BasicHelper__RealDelayCall_d__41_T__RGCTXs *v10; // x8
  MethodInfo *_3_ActionExtensions_Call_T; // x1
  Il2CppMethodPointer methodPointer; // x0
  void (__fastcall *invoker_method)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x8
  float v14; // s8
  UnityEngine_WaitForSecondsRealtime_o *v15; // x21
  _QWORD v18[3]; // [xsp+8h] [xbp-20h] BYREF

  v18[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_59772E3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    byte_59772E3 = 1;
  }
  rgctx_data = method->klass->rgctx_data;
  actualSize = rgctx_data->_2_T->_2.actualSize;
  v6 = (_QWORD *)((char *)&v18[-1] - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v7 = *(_DWORD *)sub_2213A88(this, rgctx_data->_0_BasicHelper__RealDelayCall_d__41_T_->_1.fields);
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      sub_201DB34(this, method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__41_T_->_1.fields, 0xFFFFFFFFLL);
      v8 = *(_QWORD *)sub_2213A88(
                        this,
                        (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__41_T_->_1.fields + 96);
      v9 = (const void *)sub_2213A88(
                           this,
                           (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__41_T_->_1.fields + 128);
      memcpy((char *)&v18[-1] - ((actualSize + 15) & 0x1FFFFFFF0LL), v9, actualSize);
      v10 = method->klass->rgctx_data;
      _3_ActionExtensions_Call_T = v10->_3_ActionExtensions_Call_T_;
      methodPointer = _3_ActionExtensions_Call_T->methodPointer;
      if ( (v10->_2_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v6 = (_QWORD *)*v6;
      invoker_method = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))_3_ActionExtensions_Call_T->invoker_method;
      v18[0] = v8;
      v18[1] = v6;
      invoker_method(methodPointer, _3_ActionExtensions_Call_T, 0, v18, v6);
    }
  }
  else
  {
    sub_201DB34(this, method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__41_T_->_1.fields, 0xFFFFFFFFLL);
    v14 = *(float *)sub_2213A88(
                      this,
                      (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__41_T_->_1.fields + 64);
    v15 = (UnityEngine_WaitForSecondsRealtime_o *)sub_2213CCC(UnityEngine_WaitForSecondsRealtime_TypeInfo);
    UnityEngine_WaitForSecondsRealtime___ctor(v15, v14, 0);
    sub_201B1D4(this, (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__41_T_->_1.fields + 32, v15);
    sub_201DB34(this, method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__41_T_->_1.fields, 1);
  }
  return v7 == 0;
}


Il2CppObject *BasicHelper__RealDelayCall_d__41___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__RealDelayCall_d__41_T__o *this,
        const MethodInfo_3F2EBF8 *method)
{
  return *(Il2CppObject **)sub_2213A88(
                             this,
                             (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__41_T_->_1.fields + 32);
}


void __noreturn BasicHelper__RealDelayCall_d__41___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset(
        BasicHelper__RealDelayCall_d__41_T__o *this,
        const MethodInfo_3F2EC20 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_2213CCC(v3);
  System_NotSupportedException___ctor(v4, 0);
  sub_2213BA0(v4, method);
}


Il2CppObject *BasicHelper__RealDelayCall_d__41___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current(
        BasicHelper__RealDelayCall_d__41_T__o *this,
        const MethodInfo_3F2EC54 *method)
{
  return *(Il2CppObject **)sub_2213A88(
                             this,
                             (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__41_T_->_1.fields + 32);
}


void BasicHelper__RealDelayCall_d__41___Il2CppFullySharedGenericType___System_IDisposable_Dispose(
        BasicHelper__RealDelayCall_d__41_T__o *this,
        const MethodInfo_3F2E9E8 *method)
{
  ;
}


void BasicHelper__RealDelayCall_d__41_object____ctor(
        BasicHelper__RealDelayCall_d__41_T__o *this,
        int32_t 1__state,
        const MethodInfo_3F2E878 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BasicHelper__RealDelayCall_d__41_object___MoveNext(
        BasicHelper__RealDelayCall_d__41_T__o *this,
        const MethodInfo_3F2E8A4 *method)
{
  int32_t _1__state; // w21
  BasicHelper__RealDelayCall_d__41_T__c *klass; // x8
  float delay; // s8
  UnityEngine_WaitForSecondsRealtime_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_59772E2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    byte_59772E2 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      klass = method->klass;
      this->fields.__1__state = -1;
      ActionExtensions__Call_object_(
        this->fields.action,
        this->fields.arg,
        (const MethodInfo_36FFECC *)klass->rgctx_data->_3_ActionExtensions_Call_T_);
    }
  }
  else
  {
    delay = this->fields.delay;
    this->fields.__1__state = -1;
    v7 = (UnityEngine_WaitForSecondsRealtime_o *)sub_2213CCC(UnityEngine_WaitForSecondsRealtime_TypeInfo);
    UnityEngine_WaitForSecondsRealtime___ctor(v7, delay, 0);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    this->fields.__1__state = 1;
  }
  return _1__state == 0;
}


Il2CppObject *BasicHelper__RealDelayCall_d__41_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__RealDelayCall_d__41_T__o *this,
        const MethodInfo_3F2E964 *method)
{
  return this->fields.__2__current;
}


void __noreturn BasicHelper__RealDelayCall_d__41_object___System_Collections_IEnumerator_Reset(
        BasicHelper__RealDelayCall_d__41_T__o *this,
        const MethodInfo_3F2E96C *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_2213CCC(v3);
  System_NotSupportedException___ctor(v4, 0);
  sub_2213BA0(v4, method);
}


Il2CppObject *BasicHelper__RealDelayCall_d__41_object___System_Collections_IEnumerator_get_Current(
        BasicHelper__RealDelayCall_d__41_T__o *this,
        const MethodInfo_3F2E9A0 *method)
{
  return this->fields.__2__current;
}


void BasicHelper__RealDelayCall_d__41_object___System_IDisposable_Dispose(
        BasicHelper__RealDelayCall_d__41_T__o *this,
        const MethodInfo_3F2E8A0 *method)
{
  ;
}


void BasicHelper__ToIterator_d__32___Il2CppFullySharedGenericType____ctor(
        BasicHelper__ToIterator_d__32_T__o *this,
        int32_t 1__state,
        const MethodInfo_3F3CC08 *method)
{
  unsigned int CurrentManagedThreadId; // w0

  System_Object___ctor((Il2CppObject *)this, 0);
  sub_201DB34(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields, (unsigned int)1__state);
  CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
  sub_201DB34(
    this,
    (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields + 64,
    CurrentManagedThreadId);
}


bool BasicHelper__ToIterator_d__32___Il2CppFullySharedGenericType___MoveNext(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3CC74 *method)
{
  BasicHelper__ToIterator_d__32_T__RGCTXs *rgctx_data; // x8
  __int64 actualSize; // x21
  int v6; // w8
  BasicHelper__ToIterator_d__32_T__o *v7; // x0
  __int64 v8; // x2
  BasicHelper__ToIterator_d__32_T__RGCTXs *v9; // x8
  int v10; // w9
  int v11; // w23
  __int64 v12; // x23
  int *v13; // x0
  __int64 v14; // x1
  BasicHelper__ToIterator_d__32_T__RGCTXs *v15; // x8
  MethodInfo *_2_System_Func_int__T__Invoke; // x1
  Il2CppMethodPointer methodPointer; // x0
  void (__fastcall *invoker_method)(Il2CppMethodPointer, MethodInfo *, __int64, int **, char *); // x9
  BasicHelper__ToIterator_d__32_T__c *klass; // x8
  bool v20; // w19
  int *v22; // [xsp+0h] [xbp-20h] BYREF
  char *v23; // [xsp+8h] [xbp-18h]
  int v24; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v25; // [xsp+18h] [xbp-8h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->klass->rgctx_data;
  actualSize = rgctx_data->_3_T->_2.actualSize;
  v6 = *(_DWORD *)sub_2213A88(this, rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields);
  if ( v6 == 1 )
  {
    sub_201DB34(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields, 0xFFFFFFFFLL);
    v10 = *(_DWORD *)sub_2213A88(
                       this,
                       (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields + 224);
    v7 = this;
    v9 = method->klass->rgctx_data;
    v8 = (unsigned int)(v10 + 1);
  }
  else
  {
    if ( v6 )
      return 0;
    sub_201DB34(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields, 0xFFFFFFFFLL);
    if ( !*(_QWORD *)sub_2213A88(
                       this,
                       (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields + 96) )
      return 0;
    v7 = this;
    v8 = 0;
    v9 = method->klass->rgctx_data;
  }
  sub_201DB34(v7, (char *)v9->_0_BasicHelper__ToIterator_d__32_T_->_1.fields + 224, v8);
  v11 = *(_DWORD *)sub_2213A88(
                     this,
                     (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields + 224);
  if ( v11 >= *(_DWORD *)sub_2213A88(
                           this,
                           (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields + 160) )
    return 0;
  v12 = *(_QWORD *)sub_2213A88(
                     this,
                     (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields + 96);
  v13 = (int *)sub_2213A88(
                 this,
                 (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields + 224);
  if ( !v12 )
    sub_2213CDC(v13, v14);
  v15 = method->klass->rgctx_data;
  v24 = *v13;
  _2_System_Func_int__T__Invoke = v15->_2_System_Func_int__T__Invoke;
  methodPointer = _2_System_Func_int__T__Invoke->methodPointer;
  invoker_method = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, __int64, int **, char *))_2_System_Func_int__T__Invoke->invoker_method;
  v22 = &v24;
  v23 = (char *)&v22 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  invoker_method(methodPointer, _2_System_Func_int__T__Invoke, v12, &v22, v23);
  sub_2213A8C(
    this,
    (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields + 32,
    (char *)&v22 - ((actualSize + 15) & 0x1FFFFFFF0LL),
    (unsigned int)actualSize);
  klass = method->klass;
  v20 = 1;
  sub_201DB34(this, klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields, 1);
  return v20;
}


System_Collections_Generic_IEnumerator_T__o *BasicHelper__ToIterator_d__32___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_T__GetEnumerator(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3CFF8 *method)
{
  int v4; // w21
  BasicHelper__ToIterator_d__32_T__o *v5; // x21
  __int64 _0_BasicHelper__ToIterator_d__32_T; // x0
  unsigned int *v7; // x0
  __int64 v8; // x1
  _QWORD *v9; // x0

  if ( *(_DWORD *)sub_2213A88(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields) == -2
    && (v4 = *(_DWORD *)sub_2213A88(
                          this,
                          (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields + 64),
        v4 == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    sub_201DB34(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields, 0);
    v5 = this;
  }
  else
  {
    _0_BasicHelper__ToIterator_d__32_T = (__int64)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_;
    if ( (*(_WORD *)(_0_BasicHelper__ToIterator_d__32_T + 309) & 1) == 0 )
      _0_BasicHelper__ToIterator_d__32_T = sub_224B908();
    v5 = (BasicHelper__ToIterator_d__32_T__o *)sub_2213CCC(_0_BasicHelper__ToIterator_d__32_T);
    ((void (__fastcall *)(BasicHelper__ToIterator_d__32_T__o *, _QWORD))method->klass->rgctx_data->_4_BasicHelper__ToIterator_d__32_T___ctor->methodPointer)(
      v5,
      0);
  }
  v7 = (unsigned int *)sub_2213A88(
                         this,
                         (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields + 192);
  if ( !v5 )
    sub_2213CDC(v7, v8);
  sub_201DB34(v5, (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields + 160, *v7);
  v9 = (_QWORD *)sub_2213A88(
                   this,
                   (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields + 128);
  sub_201B1D4(v5, (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields + 96, *v9);
  return (System_Collections_Generic_IEnumerator_T__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o BasicHelper__ToIterator_d__32___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_T__get_Current(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3CEDC *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x8
  size_t v5; // x20
  const void *v6; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v7; // x0
  void *v8; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v4 = *(_QWORD **)(*(_QWORD *)(v2 + 32) + 192LL);
  v5 = *(unsigned int *)(v4[3] + 252LL);
  v6 = (const void *)sub_2213A88(this, *(_QWORD *)(*v4 + 128LL) + 32LL);
  v7 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memmove((void *)method, v6, v5);
  result.monitor = v8;
  result.klass = v7;
  return result;
}


System_Collections_IEnumerator_o *BasicHelper__ToIterator_d__32___Il2CppFullySharedGenericType___System_Collections_IEnumerable_GetEnumerator(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3D148 *method)
{
  return (System_Collections_IEnumerator_o *)((__int64 (__fastcall *)(BasicHelper__ToIterator_d__32_T__o *))method->klass->rgctx_data->_6_BasicHelper__ToIterator_d__32_T__System_Collections_Generic_IEnumerable_T__GetEnumerator->methodPointer)(this);
}


void __noreturn BasicHelper__ToIterator_d__32___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3CF20 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_2213CCC(v3);
  System_NotSupportedException___ctor(v4, 0);
  sub_2213BA0(v4, method);
}


Il2CppObject *BasicHelper__ToIterator_d__32___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3CF54 *method)
{
  BasicHelper__ToIterator_d__32_T__RGCTXs *rgctx_data; // x8
  size_t actualSize; // x20
  const void *v5; // x0
  _QWORD v7[2]; // [xsp+0h] [xbp-10h] BYREF

  v7[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->klass->rgctx_data;
  actualSize = rgctx_data->_3_T->_2.actualSize;
  v5 = (const void *)sub_2213A88(this, (char *)rgctx_data->_0_BasicHelper__ToIterator_d__32_T_->_1.fields + 32);
  memcpy((char *)v7 - ((actualSize + 15) & 0x1FFFFFFF0LL), v5, actualSize);
  return (Il2CppObject *)j_il2cpp_value_box_0(
                           method->klass->rgctx_data->_3_T,
                           (char *)v7 - ((actualSize + 15) & 0x1FFFFFFF0LL));
}


void BasicHelper__ToIterator_d__32___Il2CppFullySharedGenericType___System_IDisposable_Dispose(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3CC70 *method)
{
  ;
}


void BasicHelper__ToIterator_d__32_float____ctor(
        BasicHelper__ToIterator_d__32_T__o *this,
        int32_t 1__state,
        const MethodInfo_3F3CA30 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  LODWORD(this->fields.__2__current) = System_Environment__get_CurrentManagedThreadId(0);
}


bool BasicHelper__ToIterator_d__32_float___MoveNext(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3CA68 *method)
{
  int32_t _1__state; // w8
  __int64 v4; // x8
  __int64 v5; // x1
  int32_t loopCount; // w8
  __int64 v7; // x8
  float v8; // s0
  bool result; // w0

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    loopCount = this->fields.loopCount;
    this->fields.__1__state = -1;
    v5 = (unsigned int)(loopCount + 1);
    this->fields.loopCount = v5;
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
  if ( (int)v5 >= SLODWORD(this->fields.__3__func) )
    return 0;
  v7 = *(_QWORD *)&this->fields.__l__initialThreadId;
  if ( !v7 )
    sub_2213CDC(this, v5);
  v8 = (*(float (__fastcall **)(_QWORD))(v7 + 24))(*(_QWORD *)(v7 + 64));
  result = 1;
  *((float *)&this->fields.__1__state + 1) = v8;
  this->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_T__o *BasicHelper__ToIterator_d__32_float___System_Collections_Generic_IEnumerable_T__GetEnumerator(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3CB58 *method)
{
  int _2__current; // w21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  BasicHelper__ToIterator_d__32_T__o *v11; // x20
  __int64 _0_BasicHelper__ToIterator_d__32_T; // x0
  struct System_Func_int__T__o *func; // x1

  if ( this->fields.__1__state == -2
    && (_2__current = (int)this->fields.__2__current, _2__current == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v11 = this;
  }
  else
  {
    _0_BasicHelper__ToIterator_d__32_T = (__int64)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_;
    if ( (*(_WORD *)(_0_BasicHelper__ToIterator_d__32_T + 309) & 1) == 0 )
      _0_BasicHelper__ToIterator_d__32_T = sub_224B908();
    v11 = (BasicHelper__ToIterator_d__32_T__o *)sub_2213CCC(_0_BasicHelper__ToIterator_d__32_T);
    System_Object___ctor((Il2CppObject *)v11, 0);
    v11->fields.__1__state = 0;
    LODWORD(v11->fields.__2__current) = System_Environment__get_CurrentManagedThreadId(0);
  }
  func = this->fields.func;
  LODWORD(v11->fields.__3__func) = HIDWORD(this->fields.__3__func);
  *(_QWORD *)&v11->fields.__l__initialThreadId = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v11->fields.__l__initialThreadId,
    (int32_t)func,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  return (System_Collections_Generic_IEnumerator_T__o *)v11;
}


float BasicHelper__ToIterator_d__32_float___System_Collections_Generic_IEnumerator_T__get_Current(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3CAF4 *method)
{
  return *((float *)&this->fields.__1__state + 1);
}


System_Collections_IEnumerator_o *BasicHelper__ToIterator_d__32_float___System_Collections_IEnumerable_GetEnumerator(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3CBF8 *method)
{
  return (System_Collections_IEnumerator_o *)BasicHelper__ToIterator_d__32_float___System_Collections_Generic_IEnumerable_T__GetEnumerator(
                                               this,
                                               (const MethodInfo_3F3CB58 *)method->klass->rgctx_data->_6_BasicHelper__ToIterator_d__32_T__System_Collections_Generic_IEnumerable_T__GetEnumerator);
}


void __noreturn BasicHelper__ToIterator_d__32_float___System_Collections_IEnumerator_Reset(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3CAFC *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_2213CCC(v3);
  System_NotSupportedException___ctor(v4, 0);
  sub_2213BA0(v4, method);
}


Il2CppObject *BasicHelper__ToIterator_d__32_float___System_Collections_IEnumerator_get_Current(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3CB30 *method)
{
  BasicHelper__ToIterator_d__32_T__RGCTXs *rgctx_data; // x8
  int v4; // [xsp+Ch] [xbp-4h] BYREF

  rgctx_data = method->klass->rgctx_data;
  v4 = *(&this->fields.__1__state + 1);
  return (Il2CppObject *)j_il2cpp_value_box_0(rgctx_data->_3_T, &v4);
}


void BasicHelper__ToIterator_d__32_float___System_IDisposable_Dispose(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3CA64 *method)
{
  ;
}


void BasicHelper__ToIterator_d__32_object____ctor(
        BasicHelper__ToIterator_d__32_T__o *this,
        int32_t 1__state,
        const MethodInfo_3F3C86C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool BasicHelper__ToIterator_d__32_object___MoveNext(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3C8A4 *method)
{
  int32_t _1__state; // w8
  struct System_Func_int__T__o *func; // x8
  __int64 v5; // x1
  int32_t i_5__2; // w8
  struct System_Func_int__T__o *v7; // x8
  Il2CppObject *v8; // x0
  Il2CppObject **p__2__current; // x19
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  bool result; // w0

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    i_5__2 = this->fields._i_5__2;
    this->fields.__1__state = -1;
    v5 = (unsigned int)(i_5__2 + 1);
    this->fields._i_5__2 = v5;
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
  if ( (int)v5 >= this->fields.loopCount )
    return 0;
  v7 = this->fields.func;
  if ( !v7 )
    sub_2213CDC(this, v5);
  v8 = (Il2CppObject *)((__int64 (__fastcall *)(intptr_t))v7->fields.invoke_impl)(v7->fields.method_code);
  this->fields.__2__current = v8;
  p__2__current = &this->fields.__2__current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v8, v10, v11, v12, v13, v14, v15);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


System_Collections_Generic_IEnumerator_T__o *BasicHelper__ToIterator_d__32_object___System_Collections_Generic_IEnumerable_T__GetEnumerator(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3C980 *method)
{
  int32_t l__initialThreadId; // w21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  BasicHelper__ToIterator_d__32_T__o *v11; // x20
  __int64 _0_BasicHelper__ToIterator_d__32_T; // x0
  struct System_Func_int__T__o *_3__func; // x1

  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v11 = this;
  }
  else
  {
    _0_BasicHelper__ToIterator_d__32_T = (__int64)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__32_T_;
    if ( (*(_WORD *)(_0_BasicHelper__ToIterator_d__32_T + 309) & 1) == 0 )
      _0_BasicHelper__ToIterator_d__32_T = sub_224B908();
    v11 = (BasicHelper__ToIterator_d__32_T__o *)sub_2213CCC(_0_BasicHelper__ToIterator_d__32_T);
    System_Object___ctor((Il2CppObject *)v11, 0);
    v11->fields.__1__state = 0;
    v11->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__func = this->fields.__3__func;
  v11->fields.loopCount = this->fields.__3__loopCount;
  v11->fields.func = _3__func;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->fields.func, (int32_t)_3__func, v5, v6, v7, v8, v9, v10);
  return (System_Collections_Generic_IEnumerator_T__o *)v11;
}


Il2CppObject *BasicHelper__ToIterator_d__32_object___System_Collections_Generic_IEnumerator_T__get_Current(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3C93C *method)
{
  return this->fields.__2__current;
}


System_Collections_IEnumerator_o *BasicHelper__ToIterator_d__32_object___System_Collections_IEnumerable_GetEnumerator(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3CA20 *method)
{
  return (System_Collections_IEnumerator_o *)BasicHelper__ToIterator_d__32_object___System_Collections_Generic_IEnumerable_T__GetEnumerator(
                                               this,
                                               (const MethodInfo_3F3C980 *)method->klass->rgctx_data->_6_BasicHelper__ToIterator_d__32_T__System_Collections_Generic_IEnumerable_T__GetEnumerator);
}


void __noreturn BasicHelper__ToIterator_d__32_object___System_Collections_IEnumerator_Reset(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3C944 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_2213CCC(v3);
  System_NotSupportedException___ctor(v4, 0);
  sub_2213BA0(v4, method);
}


Il2CppObject *BasicHelper__ToIterator_d__32_object___System_Collections_IEnumerator_get_Current(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3C978 *method)
{
  return this->fields.__2__current;
}


void BasicHelper__ToIterator_d__32_object___System_IDisposable_Dispose(
        BasicHelper__ToIterator_d__32_T__o *this,
        const MethodInfo_3F3C8A0 *method)
{
  ;
}


void BasicHelper__WaitCallUntilSatisfyFunc_d__39___ctor(
        BasicHelper__WaitCallUntilSatisfyFunc_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BasicHelper__WaitCallUntilSatisfyFunc_d__39__MoveNext(
        BasicHelper__WaitCallUntilSatisfyFunc_d__39_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  int32_t _1__state; // w8
  float elapsedTime_5__2; // s8
  struct System_Func_float__bool__o *funcCond; // x8
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
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
    *(_QWORD *)&v2 = 0;
    this->fields._elapsedTime_5__2 = 0.0;
    this->fields.__1__state = -1;
  }
  funcCond = this->fields.funcCond;
  if ( !funcCond )
    sub_2213CDC(this, method);
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v7, v8, v9, v10, v11, v12);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *BasicHelper__WaitCallUntilSatisfyFunc_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__WaitCallUntilSatisfyFunc_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BasicHelper__WaitCallUntilSatisfyFunc_d__39__System_Collections_IEnumerator_Reset(
        BasicHelper__WaitCallUntilSatisfyFunc_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BasicHelper__WaitCallUntilSatisfyFunc_d__39_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BasicHelper__WaitCallUntilSatisfyFunc_d__39__System_Collections_IEnumerator_get_Current(
        BasicHelper__WaitCallUntilSatisfyFunc_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BasicHelper__WaitCallUntilSatisfyFunc_d__39__System_IDisposable_Dispose(
        BasicHelper__WaitCallUntilSatisfyFunc_d__39_o *this,
        const MethodInfo *method)
{
  ;
}


void BasicHelper__WaitForEndOfFrameCall_d__48___ctor(
        BasicHelper__WaitForEndOfFrameCall_d__48_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BasicHelper__WaitForEndOfFrameCall_d__48__MoveNext(
        BasicHelper__WaitForEndOfFrameCall_d__48_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w21
  System_Action_o *action; // x0
  UnityEngine_WaitForEndOfFrame_o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59722CE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_59722CE = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      action = this->fields.action;
      this->fields.__1__state = -1;
      ActionExtensions__Call(action, 0);
    }
  }
  else
  {
    this->fields.__1__state = -1;
    v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v5, 0);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    this->fields.__1__state = 1;
  }
  return _1__state == 0;
}


Il2CppObject *BasicHelper__WaitForEndOfFrameCall_d__48__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__WaitForEndOfFrameCall_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BasicHelper__WaitForEndOfFrameCall_d__48__System_Collections_IEnumerator_Reset(
        BasicHelper__WaitForEndOfFrameCall_d__48_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BasicHelper__WaitForEndOfFrameCall_d__48_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BasicHelper__WaitForEndOfFrameCall_d__48__System_Collections_IEnumerator_get_Current(
        BasicHelper__WaitForEndOfFrameCall_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BasicHelper__WaitForEndOfFrameCall_d__48__System_IDisposable_Dispose(
        BasicHelper__WaitForEndOfFrameCall_d__48_o *this,
        const MethodInfo *method)
{
  ;
}


void BasicHelper___c__23___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____cctor(
        const MethodInfo_3AFE2EC *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v6; // x20
  __int16 v7; // w9
  __int64 v8; // x0
  void (__fastcall *v9)(__int64, _QWORD); // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 *v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_224B908();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908();
  v4 = sub_2213CCC(v3);
  v5 = (__int64)method->klass;
  v6 = v4;
  v7 = *(_WORD *)(v5 + 309);
  if ( (v7 & 1) != 0 )
  {
    v8 = (__int64)method->klass;
  }
  else
  {
    v8 = sub_224B908();
    v5 = (__int64)method->klass;
    v7 = *(_WORD *)(v5 + 309);
  }
  v9 = **(void (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)(v8 + 192) + 8LL);
  if ( (v7 & 1) == 0 )
    v5 = sub_224B908();
  v9(v6, *(_QWORD *)(*(_QWORD *)(v5 + 192) + 8LL));
  v16 = (__int64)method->klass;
  if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
    v16 = sub_224B908();
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
    v17 = sub_224B908();
  v18 = *(__int64 **)(v17 + 184);
  v19 = (__int64)method->klass;
  *v18 = v6;
  if ( (*(_WORD *)(v19 + 309) & 1) == 0 )
    v19 = sub_224B908();
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_WORD *)(v20 + 309) & 1) == 0 )
    v20 = sub_224B908();
  sub_2213A04(*(MissionNaviTransitionBoardItem_o **)(v20 + 184), v6, v10, v11, v12, v13, v14, v15);
}


void BasicHelper___c__23___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor(
        BasicHelper___c__23_K__V__o *this,
        const MethodInfo_3AFE3F8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o BasicHelper___c__23___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Remove_b__23_0(
        BasicHelper___c__23_K__V__o *this,
        System_Collections_Generic_KeyValuePair_K__V__o pair,
        const MethodInfo_3AFE400 *method)
{
  Il2CppObject *value; // x19
  Il2CppObject *key; // x2
  BasicHelper___c__23_K__V__RGCTXs *rgctx_data; // x8
  size_t actualSize; // x20
  MethodInfo *_4_System_Collections_Generic_KeyValuePair_K__V__get_Key; // x1
  Il2CppMethodPointer methodPointer; // x0
  void (__fastcall *invoker_method)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v10; // x0
  void *v11; // x1
  _QWORD v12[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  value = pair.fields.value;
  key = pair.fields.key;
  v12[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->klass->rgctx_data;
  actualSize = rgctx_data->_6_K->_2.actualSize;
  _4_System_Collections_Generic_KeyValuePair_K__V__get_Key = rgctx_data->_4_System_Collections_Generic_KeyValuePair_K__V__get_Key;
  methodPointer = _4_System_Collections_Generic_KeyValuePair_K__V__get_Key->methodPointer;
  invoker_method = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))_4_System_Collections_Generic_KeyValuePair_K__V__get_Key->invoker_method;
  v12[0] = (char *)v12 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  invoker_method(methodPointer, _4_System_Collections_Generic_KeyValuePair_K__V__get_Key, key, v12, v12[0]);
  v10 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    value,
                                                                    (char *)v12 - ((actualSize + 15) & 0x1FFFFFFF0LL),
                                                                    actualSize);
  result.monitor = v11;
  result.klass = v10;
  return result;
}


void BasicHelper___c__23_int__object____cctor(const MethodInfo_3AFE11C *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x0
  __int64 v12; // x0
  Il2CppObject **v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_224B908();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908();
  v4 = (Il2CppObject *)sub_2213CCC(v3);
  if ( (*((_WORD *)&method->klass->_2.bitflags2 + 1) & 1) == 0 )
    sub_224B908();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908();
  v13 = *(Il2CppObject ***)(v12 + 184);
  v14 = (__int64)method->klass;
  *v13 = v4;
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_224B908();
  sub_2213A04(*(MissionNaviTransitionBoardItem_o **)(v15 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void BasicHelper___c__23_int__object____ctor(BasicHelper___c__23_K__V__o *this, const MethodInfo_3AFE1F4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BasicHelper___c__23_int__object____Remove_b__23_0(
        BasicHelper___c__23_K__V__o *this,
        System_Collections_Generic_KeyValuePair_K__V__o pair,
        const MethodInfo_3AFE1FC *method)
{
  return (int32_t)pair.fields.key;
}


void BasicHelper___c__23_object__object____cctor(const MethodInfo_3AFE204 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x0
  __int64 v12; // x0
  Il2CppObject **v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_224B908();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908();
  v4 = (Il2CppObject *)sub_2213CCC(v3);
  if ( (*((_WORD *)&method->klass->_2.bitflags2 + 1) & 1) == 0 )
    sub_224B908();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908();
  v13 = *(Il2CppObject ***)(v12 + 184);
  v14 = (__int64)method->klass;
  *v13 = v4;
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_224B908();
  sub_2213A04(*(MissionNaviTransitionBoardItem_o **)(v15 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void BasicHelper___c__23_object__object____ctor(BasicHelper___c__23_K__V__o *this, const MethodInfo_3AFE2DC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


Il2CppObject *BasicHelper___c__23_object__object____Remove_b__23_0(
        BasicHelper___c__23_K__V__o *this,
        System_Collections_Generic_KeyValuePair_K__V__o pair,
        const MethodInfo_3AFE2E4 *method)
{
  return pair.fields.key;
}


void BasicHelper___c__27___Il2CppFullySharedGenericType____cctor(const MethodInfo_3AFE9EC *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v6; // x20
  __int16 v7; // w9
  __int64 v8; // x0
  void (__fastcall *v9)(__int64, _QWORD); // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 *v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_224B908();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908();
  v4 = sub_2213CCC(v3);
  v5 = (__int64)method->klass;
  v6 = v4;
  v7 = *(_WORD *)(v5 + 309);
  if ( (v7 & 1) != 0 )
  {
    v8 = (__int64)method->klass;
  }
  else
  {
    v8 = sub_224B908();
    v5 = (__int64)method->klass;
    v7 = *(_WORD *)(v5 + 309);
  }
  v9 = **(void (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)(v8 + 192) + 8LL);
  if ( (v7 & 1) == 0 )
    v5 = sub_224B908();
  v9(v6, *(_QWORD *)(*(_QWORD *)(v5 + 192) + 8LL));
  v16 = (__int64)method->klass;
  if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
    v16 = sub_224B908();
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
    v17 = sub_224B908();
  v18 = *(__int64 **)(v17 + 184);
  v19 = (__int64)method->klass;
  *v18 = v6;
  if ( (*(_WORD *)(v19 + 309) & 1) == 0 )
    v19 = sub_224B908();
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_WORD *)(v20 + 309) & 1) == 0 )
    v20 = sub_224B908();
  sub_2213A04(*(MissionNaviTransitionBoardItem_o **)(v20 + 184), v6, v10, v11, v12, v13, v14, v15);
}


void BasicHelper___c__27___Il2CppFullySharedGenericType____ctor(
        BasicHelper___c__27_T__o *this,
        const MethodInfo_3AFEAF8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BasicHelper___c__27___Il2CppFullySharedGenericType____ExcludeNull_b__27_0(
        BasicHelper___c__27_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o x,
        const MethodInfo_3AFEB00 *method)
{
  __int64 v3; // x8
  __int64 v4; // x19
  char *v5; // x20
  _QWORD v7[2]; // [xsp+0h] [xbp-10h] BYREF

  v7[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *((_QWORD *)x.monitor + 4);
  v7[0] = x.klass;
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 24LL);
  x.monitor = (void *)*(unsigned int *)(v4 + 252);
  v5 = (char *)v7 - (((__int64)x.monitor + 15) & 0x1FFFFFFF0LL);
  if ( *(int *)(v4 + 40) >= 0 )
    x.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v7;
  memcpy((char *)v7 - (((__int64)x.monitor + 15) & 0x1FFFFFFF0LL), x.klass, (size_t)x.monitor);
  return sub_2213C8C(v4, v5) & 1;
}


void BasicHelper___c__27_object____cctor(const MethodInfo_3AFE900 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x0
  __int64 v12; // x0
  Il2CppObject **v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_224B908();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908();
  v4 = (Il2CppObject *)sub_2213CCC(v3);
  if ( (*((_WORD *)&method->klass->_2.bitflags2 + 1) & 1) == 0 )
    sub_224B908();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908();
  v13 = *(Il2CppObject ***)(v12 + 184);
  v14 = (__int64)method->klass;
  *v13 = v4;
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_224B908();
  sub_2213A04(*(MissionNaviTransitionBoardItem_o **)(v15 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void BasicHelper___c__27_object____ctor(BasicHelper___c__27_T__o *this, const MethodInfo_3AFE9D8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BasicHelper___c__27_object____ExcludeNull_b__27_0(
        BasicHelper___c__27_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3AFE9E0 *method)
{
  return x != 0;
}