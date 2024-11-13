Il2CppObject *__fastcall BasicHelper__AddNotExistComponent_object_(
        UnityEngine_Transform_o *self,
        const MethodInfo_2EFD8A8 *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *v4; // x20
  __int64 v5; // x1
  Il2CppObject *Component_object; // x21

  v4 = (UnityEngine_Component_o *)self;
  if ( !method->rgctx_data )
  {
    self = (UnityEngine_Transform_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    if ( !method->rgctx_data )
      self = (UnityEngine_Transform_o *)sub_1C1C718(method, method);
  }
  if ( !v4 )
    goto LABEL_12;
  self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
  if ( !self )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)self,
                       (const MethodInfo_2F626D0 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
    if ( self )
      return UnityEngine_GameObject__AddComponent_object_(
               (UnityEngine_GameObject_o *)self,
               (const MethodInfo_2F625E8 *)method->rgctx_data->_2_UnityEngine_GameObject_AddComponent_T_);
LABEL_12:
    sub_1BCAA3C(self, method);
  }
  return Component_object;
}


bool __fastcall BasicHelper__Any_BattleResultEventItemComponent_EventDropItemInfo_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_2EFE074 *method)
{
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24
  BattleResultEventItemComponent_EventDropItemInfo_o v10; // [xsp+20h] [xbp-60h] BYREF

  v5 = (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1C1C718(method, func);
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
                                                       (const MethodInfo_36088CC *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      if ( !func )
        break;
      if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, BattleResultEventItemComponent_EventDropItemInfo_o *, _QWORD))func->fields.m_target)(
              func->fields.original_method_info,
              &v10,
              *(_QWORD *)&func->fields.extra_arg) & 1) == 0 )
      {
        v8 = ++v7 < size;
        if ( size != v7 )
          continue;
      }
      return v8;
    }
LABEL_12:
    sub_1BCAA3C(list, func);
  }
  return 0;
}


bool __fastcall BasicHelper__Any_Int32Enum_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_2EFDAB0 *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24

  v5 = list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1C1C718(method, func);
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
                                                       (const MethodInfo_3587174 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      if ( !func )
        break;
      if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))func->fields.m_target)(
              func->fields.original_method_info,
              (unsigned int)list,
              *(_QWORD *)&func->fields.extra_arg) & 1) == 0 )
      {
        v8 = ++v7 < size;
        if ( size != v7 )
          continue;
      }
      return v8;
    }
LABEL_12:
    sub_1BCAA3C(list, func);
  }
  return 0;
}


bool __fastcall BasicHelper__Any_Int32Enum__49273692(
        System_Int32Enum_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_2EFDB5C *method)
{
  System_Int32Enum_array *v4; // x20
  __int64 v5; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22

  v4 = array;
  if ( !method->rgctx_data )
    array = (System_Int32Enum_array *)sub_1C1C718(method, func);
  if ( !v4 )
    goto LABEL_12;
  v5 = *(_QWORD *)&v4->max_length;
  v6 = (int)v5 > 0;
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1BCAA44(array, func);
      if ( !func )
        break;
      array = (System_Int32Enum_array *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))func->fields.m_target)(
                                          func->fields.original_method_info,
                                          (unsigned int)v4->m_Items[v7 + 1],
                                          *(_QWORD *)&func->fields.extra_arg);
      if ( ((unsigned __int8)array & 1) == 0 )
      {
        LODWORD(v5) = v4->max_length;
        v6 = (__int64)++v7 < (int)v5;
        if ( (__int64)v7 < (int)v5 )
          continue;
      }
      return v6;
    }
LABEL_12:
    sub_1BCAA3C(array, func);
  }
  return v6;
}


bool __fastcall BasicHelper__Any_ListViewSort_BonusFilterInfo_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_2EFE13C *method)
{
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24
  ListViewSort_BonusFilterInfo_o v10; // [xsp+20h] [xbp-60h] BYREF

  v5 = (System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1C1C718(method, func);
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
                                                       (const MethodInfo_361E114 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      if ( !func )
        break;
      if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, ListViewSort_BonusFilterInfo_o *, _QWORD))func->fields.m_target)(
              func->fields.original_method_info,
              &v10,
              *(_QWORD *)&func->fields.extra_arg) & 1) == 0 )
      {
        v8 = ++v7 < size;
        if ( size != v7 )
          continue;
      }
      return v8;
    }
LABEL_12:
    sub_1BCAA3C(list, func);
  }
  return 0;
}


bool __fastcall BasicHelper__Any___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_2EFDDDC *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  const MethodInfo_2EFDDDC_RGCTXs *rgctx_data; // x8
  __int64 *v7; // x22
  int v8; // w0
  int v9; // w23
  int v10; // w26
  bool v11; // w25
  MethodInfo *_3_System_Collections_Generic_List_T__get_Item; // x1
  Il2CppMethodPointer methodPointer; // x0
  const MethodInfo_2EFDDDC_RGCTXs *v14; // x8
  __int64 v15; // x9
  MethodInfo *_5_System_Func_T__bool__Invoke; // x1
  void (__fastcall *v17)(); // x0
  __int64 v19[2]; // [xsp+0h] [xbp-20h] BYREF
  int v20; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v21; // [xsp+18h] [xbp-8h]

  v5 = list;
  v21 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    list = (System_Collections_Generic_List_T__o *)sub_1C1C718(method, func);
    rgctx_data = method->rgctx_data;
  }
  v7 = (__int64 *)((char *)v19 - (((unsigned int)rgctx_data->_4_T->_2.native_size + 15LL) & 0x1FFFFFFF0LL));
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
      v19[0] = (__int64)&v20;
      v19[1] = (__int64)v7;
      list = (System_Collections_Generic_List_T__o *)((__int64 (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, __int64 *, __int64 *))_3_System_Collections_Generic_List_T__get_Item->invoker_method)(
                                                       methodPointer,
                                                       _3_System_Collections_Generic_List_T__get_Item,
                                                       v5,
                                                       v19,
                                                       v7);
      if ( !func )
        break;
      v14 = method->rgctx_data;
      v15 = (__int64)v7;
      if ( (v14->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v15 = *v7;
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
    sub_1BCAA3C(list, func);
  }
  return 0;
}


bool __fastcall BasicHelper__Any___Il2CppFullySharedGenericType__49274676(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_2EFDF34 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v5; // x21
  const MethodInfo_2EFDF34_RGCTXs *rgctx_data; // x8
  __int64 native_size; // x22
  __int64 v8; // x8
  bool v9; // w25
  unsigned __int64 v10; // x26
  const MethodInfo_2EFDF34_RGCTXs *v11; // x8
  char *v12; // x9
  MethodInfo *_3_System_Func_T__bool__Invoke; // x1
  Il2CppMethodPointer methodPointer; // x0
  __int64 v16; // [xsp+0h] [xbp-20h] BYREF
  char *v17; // [xsp+8h] [xbp-18h] BYREF
  char v18[4]; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v19; // [xsp+18h] [xbp-8h]

  v5 = array;
  v19 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    array = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)sub_1C1C718(method, func);
    rgctx_data = method->rgctx_data;
  }
  native_size = (unsigned int)rgctx_data->_2_T->_2.native_size;
  if ( !v5 )
    goto LABEL_13;
  v8 = *(_QWORD *)&v5->max_length;
  v9 = (int)v8 > 0;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v8 )
        sub_1BCAA44(array, func);
      array = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)memcpy(
                                                                              (char *)&v16
                                                                            - ((native_size + 15) & 0x1FFFFFFF0LL),
                                                                              (char *)v5->m_Items
                                                                            + v10
                                                                            * v5->obj.klass->_2.thread_static_fields_size,
                                                                              native_size);
      if ( !func )
        break;
      v11 = method->rgctx_data;
      v12 = (char *)&v16 - ((native_size + 15) & 0x1FFFFFFF0LL);
      if ( (v11->_2_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v12 = *(char **)((char *)&v16 - ((native_size + 15) & 0x1FFFFFFF0LL));
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
        LODWORD(v8) = v5->max_length;
        v9 = (__int64)++v10 < (int)v8;
        if ( (__int64)v10 < (int)v8 )
          continue;
      }
      return v9;
    }
LABEL_13:
    sub_1BCAA3C(array, func);
  }
  return v9;
}


bool __fastcall BasicHelper__Any_int_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_2EFD968 *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24

  v5 = (System_Collections_Generic_List_int__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1C1C718(method, func);
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
                                                       (const MethodInfo_3584948 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      if ( !func )
        break;
      if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))func->fields.m_target)(
              func->fields.original_method_info,
              (unsigned int)list,
              *(_QWORD *)&func->fields.extra_arg) & 1) == 0 )
      {
        v8 = ++v7 < size;
        if ( size != v7 )
          continue;
      }
      return v8;
    }
LABEL_12:
    sub_1BCAA3C(list, func);
  }
  return 0;
}


bool __fastcall BasicHelper__Any_int__49273364(
        System_Int32_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_2EFDA14 *method)
{
  System_Int32_array *v4; // x20
  __int64 v5; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22

  v4 = array;
  if ( !method->rgctx_data )
    array = (System_Int32_array *)sub_1C1C718(method, func);
  if ( !v4 )
    goto LABEL_12;
  v5 = *(_QWORD *)&v4->max_length;
  v6 = (int)v5 > 0;
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1BCAA44(array, func);
      if ( !func )
        break;
      array = (System_Int32_array *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))func->fields.m_target)(
                                      func->fields.original_method_info,
                                      (unsigned int)v4->m_Items[v7 + 1],
                                      *(_QWORD *)&func->fields.extra_arg);
      if ( ((unsigned __int8)array & 1) == 0 )
      {
        LODWORD(v5) = v4->max_length;
        v6 = (__int64)++v7 < (int)v5;
        if ( (__int64)v7 < (int)v5 )
          continue;
      }
      return v6;
    }
LABEL_12:
    sub_1BCAA3C(array, func);
  }
  return v6;
}


bool __fastcall BasicHelper__Any_long_(
        System_Int64_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_2EFDBF8 *method)
{
  System_Int64_array *v4; // x20
  __int64 v5; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22

  v4 = array;
  if ( !method->rgctx_data )
    array = (System_Int64_array *)sub_1C1C718(method, func);
  if ( !v4 )
    goto LABEL_12;
  v5 = *(_QWORD *)&v4->max_length;
  v6 = (int)v5 > 0;
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1BCAA44(array, func);
      if ( !func )
        break;
      array = (System_Int64_array *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, int64_t, _QWORD))func->fields.m_target)(
                                      func->fields.original_method_info,
                                      v4->m_Items[v7],
                                      *(_QWORD *)&func->fields.extra_arg);
      if ( ((unsigned __int8)array & 1) == 0 )
      {
        LODWORD(v5) = v4->max_length;
        v6 = (__int64)++v7 < (int)v5;
        if ( (__int64)v7 < (int)v5 )
          continue;
      }
      return v6;
    }
LABEL_12:
    sub_1BCAA3C(array, func);
  }
  return v6;
}


bool __fastcall BasicHelper__Any_object_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_2EFDC94 *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24

  v5 = (System_Collections_Generic_List_object__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1C1C718(method, func);
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
                                                       (const MethodInfo_35A198C *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      if ( !func )
        break;
      if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Collections_Generic_List_T__o *, _QWORD))func->fields.m_target)(
              func->fields.original_method_info,
              list,
              *(_QWORD *)&func->fields.extra_arg) & 1) == 0 )
      {
        v8 = ++v7 < size;
        if ( size != v7 )
          continue;
      }
      return v8;
    }
LABEL_12:
    sub_1BCAA3C(list, func);
  }
  return 0;
}


bool __fastcall BasicHelper__Any_object__49274176(
        System_Object_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_2EFDD40 *method)
{
  System_Object_array *v4; // x20
  __int64 v5; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22

  v4 = array;
  if ( !method->rgctx_data )
    array = (System_Object_array *)sub_1C1C718(method, func);
  if ( !v4 )
    goto LABEL_12;
  v5 = *(_QWORD *)&v4->max_length;
  v6 = (int)v5 > 0;
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1BCAA44(array, func);
      if ( !func )
        break;
      array = (System_Object_array *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD))func->fields.m_target)(
                                       func->fields.original_method_info,
                                       v4->m_Items[v7],
                                       *(_QWORD *)&func->fields.extra_arg);
      if ( ((unsigned __int8)array & 1) == 0 )
      {
        LODWORD(v5) = v4->max_length;
        v6 = (__int64)++v7 < (int)v5;
        if ( (__int64)v7 < (int)v5 )
          continue;
      }
      return v6;
    }
LABEL_12:
    sub_1BCAA3C(array, func);
  }
  return v6;
}


int32_t __fastcall BasicHelper__Clamp(int32_t value, int32_t min, int32_t max, const MethodInfo *method)
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


bool __fastcall BasicHelper__ContainsSelfNotNull___Il2CppFullySharedGenericType_(
        System_Collections_Generic_HashSet_T__o *self,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item,
        const MethodInfo_2EFE26C *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x20
  __int64 v5; // x23
  _QWORD *monitor; // x21
  __int64 v7; // x8
  __int64 v8; // x2
  _QWORD *v9; // x21
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v10; // x1
  __int64 *v11; // x1
  __int64 v12; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v14; // [xsp+0h] [xbp-20h] BYREF
  _QWORD *v15; // [xsp+8h] [xbp-18h] BYREF
  char v16[4]; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v17; // [xsp+18h] [xbp-8h]

  klass = item.klass;
  v17 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v14 = item.klass;
  v5 = *((_QWORD *)item.monitor + 7);
  if ( !v5 )
  {
    monitor = item.monitor;
    sub_1C1C718(item.monitor, item.klass);
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
  ((void (__fastcall *)(__int64, __int64 *, System_Collections_Generic_HashSet_T__o *, _QWORD **, char *))v11[2])(
    v12,
    v11,
    self,
    &v15,
    v16);
  return v16[0] != 0;
}


bool __fastcall BasicHelper__ContainsSelfNotNull_int_(
        System_Collections_Generic_HashSet_T__o *self,
        int32_t item,
        const MethodInfo_2EFE214 *method)
{
  if ( method->rgctx_data )
  {
    if ( self )
      return System_Collections_Generic_HashSet_int___Contains(
               (System_Collections_Generic_HashSet_int__o *)self,
               item,
               (const MethodInfo_3455298 *)method->rgctx_data->_2_System_Collections_Generic_HashSet_T__Contains);
  }
  else
  {
    sub_1C1C718(method, item);
    if ( self )
      return System_Collections_Generic_HashSet_int___Contains(
               (System_Collections_Generic_HashSet_int__o *)self,
               item,
               (const MethodInfo_3455298 *)method->rgctx_data->_2_System_Collections_Generic_HashSet_T__Contains);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BasicHelper__Convert2IntArray(
        System_String_o *self,
        uint16_t separator,
        const MethodInfo *method)
{
  System_String_o *v4; // x20
  System_String_array *v5; // x0
  System_String_array *v6; // x19
  __int64 v7; // x8
  System_Int32_array *v8; // x20
  unsigned __int64 v9; // x21
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF

  v4 = self;
  if ( (byte_4B1799B & 1) == 0 )
  {
    self = (System_String_o *)sub_1BCA7E0(&int___TypeInfo, separator, method);
    byte_4B1799B = 1;
  }
  if ( !v4 )
LABEL_17:
    sub_1BCAA3C(self, separator);
  v5 = System_String__Split(v4, separator, 0, 0LL);
  if ( !v5 )
    return 0LL;
  v6 = v5;
  self = (System_String_o *)sub_1BCA888(int___TypeInfo, v5->max_length);
  v7 = *(_QWORD *)&v6->max_length;
  v8 = (System_Int32_array *)self;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      result = 0;
      if ( v9 >= (unsigned int)v7 )
        break;
      self = (System_String_o *)System_Int32__TryParse(v6->m_Items[v9], &result, 0LL);
      if ( ((unsigned __int8)self & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_17;
        if ( v9 >= v8->max_length )
          break;
        v8->m_Items[v9 + 1] = result;
      }
      LODWORD(v7) = v6->max_length;
      if ( (__int64)++v9 >= (int)v7 )
        return v8;
    }
    sub_1BCAA44(self, separator);
  }
  return v8;
}


int32_t __fastcall BasicHelper__DecryptValue(int32_t self, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17994 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B17994 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Decrypt(self, 0LL);
}


int32_t __fastcall BasicHelper__DecryptValue_41845724(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o self,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v5; // 0:x0.16

  v2 = *(_QWORD *)&self.fields.fakeValue;
  v3 = *(_QWORD *)&self.fields.currentCryptoKey;
  if ( (byte_4B17995 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&self.fields.fakeValue, method);
    byte_4B17995 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&self.fields.fakeValue);
  *(_QWORD *)&v5.fields.currentCryptoKey = v3;
  *(_QWORD *)&v5.fields.fakeValue = v2;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v5, 0LL);
}


System_String_o *__fastcall BasicHelper__DecryptValue_41845916(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *self,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17997 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method, v2);
    byte_4B17997 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(self, 0LL);
}


int64_t __fastcall BasicHelper__DecryptValue_41846004(int64_t self, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17998 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B17998 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Decrypt(self, 0LL);
}


int64_t __fastcall BasicHelper__DecryptValue_41846092(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *self,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int128 v4; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4B17999 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B17999 = 1;
  }
  v4 = *(_OWORD *)&self->fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&self->fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BasicHelper__DelayCall(
        float delay,
        System_Action_o *action,
        bool isWaitEvenIfNoDelayTime,
        const MethodInfo *method)
{
  __int64 v4; // x3
  bool v8; // w21
  __int64 v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B1799E & 1) == 0 )
  {
    sub_1BCA7E0(&BasicHelper__DelayCall_d__35_TypeInfo, isWaitEvenIfNoDelayTime, method);
    byte_4B1799E = 1;
  }
  v8 = isWaitEvenIfNoDelayTime;
  v9 = sub_1BCAA2C(BasicHelper__DelayCall_d__35_TypeInfo, isWaitEvenIfNoDelayTime, method, v4);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(float *)(v9 + 32) = delay;
  *(_QWORD *)(v9 + 40) = action;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)action, v10, v11, v12, v13, v14, v15);
  *(_BYTE *)(v9 + 36) = v8;
  return (System_Collections_IEnumerator_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BasicHelper__DelayCall_ShowAllEx_DamageFuncArgument_(
        float delay,
        System_Action_T__o *action,
        HutongGames_PlayMaker_Actions_ShowAllEx_DamageFuncArgument_o *arg,
        const MethodInfo_2EFE544 *method)
{
  __int64 v4; // x3
  const MethodInfo_2EFE544_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__DelayCall_d__36_T; // x0
  BasicHelper__DelayCall_d__36_T__o *v11; // x0
  const MethodInfo_2EFE544_RGCTXs *v12; // x8
  BasicHelper__DelayCall_d__36_T__o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int128 v22; // q0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method, arg);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__DelayCall_d__36_T = (__int64)rgctx_data->_0_BasicHelper__DelayCall_d__36_T_;
  if ( (BYTE5(rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BasicHelper__DelayCall_d__36_T = sub_1C1C6BC(*(long double *)&delay);
  v11 = (BasicHelper__DelayCall_d__36_T__o *)sub_1BCAA2C(_0_BasicHelper__DelayCall_d__36_T, arg, method, v4);
  v12 = method->rgctx_data;
  v13 = v11;
  BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument____ctor(
    v11,
    0,
    (const MethodInfo_30EBE88 *)v12->_1_BasicHelper__DelayCall_d__36_T___ctor);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  v13->fields.delay = delay;
  v13->fields.action = action;
  sub_1BCA784((PartyOrganizationUtility_o *)&v13->fields.action, (int64_t)action, v16, v17, v18, v19, v20, v21);
  v22 = *(_OWORD *)&arg->fields.perf;
  v13[1].monitor = *(void **)&arg->fields.damageIndex;
  *(_OWORD *)&v13->fields.arg = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&v13->fields.arg, 0LL, v23, v24, v25, v26, v27, v28);
  return (System_Collections_IEnumerator_o *)v13;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BasicHelper__DelayCall___Il2CppFullySharedGenericType_(
        float delay,
        System_Action_T__o *action,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg,
        const MethodInfo_2EFE3F0 *method)
{
  _QWORD *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  __int64 *v7; // x8
  long double v8; // q8
  __int64 v9; // x21
  __int64 v10; // x0
  System_Collections_IEnumerator_o *v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  _QWORD *v14; // x20
  __int64 *v15; // x1
  __int64 v17[2]; // [xsp+0h] [xbp-18h] BYREF

  monitor = arg.monitor;
  klass = arg.klass;
  v17[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v17[0] = (__int64)arg.klass;
  v7 = (__int64 *)*((_QWORD *)arg.monitor + 7);
  v8 = *(long double *)&delay;
  if ( !v7 )
  {
    sub_1C1C718(arg.monitor, arg.klass);
    v7 = (__int64 *)monitor[7];
  }
  v9 = *(unsigned int *)(v7[3] + 252);
  v10 = *v7;
  if ( (*(_BYTE *)(*v7 + 309) & 1) == 0 )
    v10 = sub_1C1C6BC(*(long double *)&delay);
  v11 = (System_Collections_IEnumerator_o *)sub_1BCAA2C(v10, arg.klass, arg.monitor, method);
  v12 = (**(__int64 (__fastcall ***)(System_Collections_IEnumerator_o *, _QWORD))(monitor[7] + 8LL))(v11, 0LL);
  if ( !v11 )
    sub_1BCAA3C(v12, v13);
  sub_1A17D50(v11, *(_QWORD *)(*(_QWORD *)monitor[7] + 128LL) + 64LL, v8);
  sub_1A17A24(v11, *(_QWORD *)(*(_QWORD *)monitor[7] + 128LL) + 96LL, action);
  v14 = (_QWORD *)monitor[7];
  if ( *(int *)(v14[3] + 40LL) >= 0 )
    v15 = v17;
  else
    v15 = (__int64 *)klass;
  memcpy((char *)v17 - ((v9 + 15) & 0x1FFFFFFF0LL), v15, v9);
  sub_1BCA808(v11, *(_QWORD *)(*v14 + 128LL) + 128LL, (char *)v17 - ((v9 + 15) & 0x1FFFFFFF0LL), (unsigned int)v9);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BasicHelper__DelayCall_object_(
        float delay,
        System_Action_T__o *action,
        Il2CppObject *arg,
        const MethodInfo_2EFE358 *method)
{
  __int64 v4; // x3
  const MethodInfo_2EFE358_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__DelayCall_d__36_T; // x0
  BasicHelper__DelayCall_d__36_T__o *v11; // x0
  const MethodInfo_2EFE358_RGCTXs *v12; // x8
  BasicHelper__DelayCall_d__36_T__o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method, arg);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__DelayCall_d__36_T = (__int64)rgctx_data->_0_BasicHelper__DelayCall_d__36_T_;
  if ( (BYTE5(rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BasicHelper__DelayCall_d__36_T = sub_1C1C6BC(*(long double *)&delay);
  v11 = (BasicHelper__DelayCall_d__36_T__o *)sub_1BCAA2C(_0_BasicHelper__DelayCall_d__36_T, arg, method, v4);
  v12 = method->rgctx_data;
  v13 = v11;
  BasicHelper__DelayCall_d__36_object____ctor(
    v11,
    0,
    (const MethodInfo_30EBA8C *)v12->_1_BasicHelper__DelayCall_d__36_T___ctor);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  v13->fields.delay = delay;
  v13->fields.action = action;
  sub_1BCA784((PartyOrganizationUtility_o *)&v13->fields.action, (int64_t)action, v16, v17, v18, v19, v20, v21);
  v13->fields.arg = arg;
  sub_1BCA784((PartyOrganizationUtility_o *)&v13->fields.arg, (int64_t)arg, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v13;
}


System_String_o *__fastcall BasicHelper__EncryptDecryptValue(System_String_o *self, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17996 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method, v2);
    byte_4B17996 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__EncryptDecrypt(self, 0LL);
}


bool __fastcall BasicHelper__EqualExceptNullOrEmpty(
        System_String_o *self,
        System_String_o *target,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1

  if ( System_String__IsNullOrEmpty(self, 0LL) )
    return 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(target, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !self )
    sub_1BCAA3C(IsNullOrEmpty, v6);
  return System_String__Equals_62409536(self, target, 0LL);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BasicHelper__ExcludeNull___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        const MethodInfo_2EFE720 *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  long double inited; // q0
  const MethodInfo_2EFE720_RGCTXs *rgctx_data; // x8
  __int64 _3_BasicHelper___c__26_T; // x0
  Il2CppClass *v9; // x0
  int64_t v10; // x21
  Il2CppClass *v11; // x0
  const MethodInfo_2EFE720_RGCTXs *v12; // x8
  __int64 v13; // x0
  __int64 _2_System_Func_T__bool; // x8
  __int64 v15; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  long double v22; // q0
  Il2CppClass *v23; // x0
  Il2CppClass *v24; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method, method);
    rgctx_data = method->rgctx_data;
  }
  _3_BasicHelper___c__26_T = (__int64)rgctx_data->_3_BasicHelper___c__26_T_;
  if ( (*(_BYTE *)(_3_BasicHelper___c__26_T + 309) & 1) == 0 )
    _3_BasicHelper___c__26_T = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(_3_BasicHelper___c__26_T + 224) )
    inited = j_il2cpp_runtime_class_init_0(_3_BasicHelper___c__26_T, method);
  v9 = method->rgctx_data->_3_BasicHelper___c__26_T_;
  if ( (BYTE5(v9->vtable[0].methodPtr) & 1) == 0 )
    v9 = (Il2CppClass *)sub_1C1C6BC(inited);
  v10 = *((_QWORD *)v9->static_fields + 1);
  if ( !v10 )
  {
    v11 = method->rgctx_data->_3_BasicHelper___c__26_T_;
    if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
      v11 = (Il2CppClass *)sub_1C1C6BC(inited);
    if ( !v11->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v11, method);
    v12 = method->rgctx_data;
    v13 = (__int64)v12->_3_BasicHelper___c__26_T_;
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    {
      v13 = sub_1C1C6BC(inited);
      v12 = method->rgctx_data;
    }
    _2_System_Func_T__bool = (__int64)v12->_2_System_Func_T__bool_;
    v15 = **(_QWORD **)(v13 + 184);
    if ( (*(_BYTE *)(_2_System_Func_T__bool + 309) & 1) == 0 )
      _2_System_Func_T__bool = sub_1C1C6BC(inited);
    v10 = sub_1BCAA2C(_2_System_Func_T__bool, method, v2, v3);
    ((void (__fastcall *)(int64_t, __int64, MethodInfo *))method->rgctx_data->_5_System_Func_T__bool___ctor->methodPointer)(
      v10,
      v15,
      method->rgctx_data->_4_BasicHelper___c__26_T___ExcludeNull_b__26_0);
    v23 = method->rgctx_data->_3_BasicHelper___c__26_T_;
    if ( (BYTE5(v23->vtable[0].methodPtr) & 1) == 0 )
      v23 = (Il2CppClass *)sub_1C1C6BC(v22);
    *((_QWORD *)v23->static_fields + 1) = v10;
    v24 = method->rgctx_data->_3_BasicHelper___c__26_T_;
    if ( (BYTE5(v24->vtable[0].methodPtr) & 1) == 0 )
      v24 = (Il2CppClass *)sub_1C1C6BC(v22);
    sub_1BCA784((PartyOrganizationUtility_o *)((char *)v24->static_fields + 8), v10, v16, v17, v18, v19, v20, v21);
  }
  return (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *, int64_t))method->rgctx_data->_6_System_Linq_Enumerable_Where_T_->methodPointer)(
                                                          sequence,
                                                          v10);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BasicHelper__ExcludeNull_object_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        const MethodInfo_2EFE5E8 *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  long double inited; // q0
  const MethodInfo_2EFE5E8_RGCTXs *rgctx_data; // x8
  __int64 _3_BasicHelper___c__26_T; // x0
  Il2CppClass *v9; // x0
  System_Func_object__bool__o *v10; // x21
  Il2CppClass *v11; // x0
  const MethodInfo_2EFE5E8_RGCTXs *v12; // x8
  __int64 v13; // x0
  __int64 _2_System_Func_T__bool; // x8
  Il2CppObject *v15; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  long double v22; // q0
  Il2CppClass *v23; // x0
  Il2CppClass *v24; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method, method);
    rgctx_data = method->rgctx_data;
  }
  _3_BasicHelper___c__26_T = (__int64)rgctx_data->_3_BasicHelper___c__26_T_;
  if ( (*(_BYTE *)(_3_BasicHelper___c__26_T + 309) & 1) == 0 )
    _3_BasicHelper___c__26_T = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(_3_BasicHelper___c__26_T + 224) )
    inited = j_il2cpp_runtime_class_init_0(_3_BasicHelper___c__26_T, method);
  v9 = method->rgctx_data->_3_BasicHelper___c__26_T_;
  if ( (BYTE5(v9->vtable[0].methodPtr) & 1) == 0 )
    v9 = (Il2CppClass *)sub_1C1C6BC(inited);
  v10 = (System_Func_object__bool__o *)*((_QWORD *)v9->static_fields + 1);
  if ( !v10 )
  {
    v11 = method->rgctx_data->_3_BasicHelper___c__26_T_;
    if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
      v11 = (Il2CppClass *)sub_1C1C6BC(inited);
    if ( !v11->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v11, method);
    v12 = method->rgctx_data;
    v13 = (__int64)v12->_3_BasicHelper___c__26_T_;
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    {
      v13 = sub_1C1C6BC(inited);
      v12 = method->rgctx_data;
    }
    _2_System_Func_T__bool = (__int64)v12->_2_System_Func_T__bool_;
    v15 = **(Il2CppObject ***)(v13 + 184);
    if ( (*(_BYTE *)(_2_System_Func_T__bool + 309) & 1) == 0 )
      _2_System_Func_T__bool = sub_1C1C6BC(inited);
    v10 = (System_Func_object__bool__o *)sub_1BCAA2C(_2_System_Func_T__bool, method, v2, v3);
    System_Func_object__bool____ctor(
      v10,
      v15,
      (intptr_t)method->rgctx_data->_4_BasicHelper___c__26_T___ExcludeNull_b__26_0,
      (const MethodInfo_3413A9C *)method->rgctx_data->_5_System_Func_T__bool___ctor);
    v23 = method->rgctx_data->_3_BasicHelper___c__26_T_;
    if ( (BYTE5(v23->vtable[0].methodPtr) & 1) == 0 )
      v23 = (Il2CppClass *)sub_1C1C6BC(v22);
    *((_QWORD *)v23->static_fields + 1) = v10;
    v24 = method->rgctx_data->_3_BasicHelper___c__26_T_;
    if ( (BYTE5(v24->vtable[0].methodPtr) & 1) == 0 )
      v24 = (Il2CppClass *)sub_1C1C6BC(v22);
    sub_1BCA784(
      (PartyOrganizationUtility_o *)((char *)v24->static_fields + 8),
      (int64_t)v10,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)sequence,
                                                          (System_Func_TSource__bool__o *)v10,
                                                          (const MethodInfo_2F51894 *)method->rgctx_data->_6_System_Linq_Enumerable_Where_T_);
}


Il2CppObject *__fastcall BasicHelper__FindComponent_object_(
        UnityEngine_GameObject_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_2EFE910 *method)
{
  UnityEngine_GameObject_array *v5; // x21
  __int64 v6; // x8
  unsigned __int64 v7; // x23
  UnityEngine_GameObject_o **m_Items; // x24
  UnityEngine_Object_o *v9; // x22
  Il2CppObject *Component_object; // x22

  v5 = array;
  if ( method->rgctx_data
    || (array = (UnityEngine_GameObject_array *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, func, method),
        method->rgctx_data) )
  {
    if ( !v5 )
      return 0LL;
  }
  else
  {
    array = (UnityEngine_GameObject_array *)sub_1C1C718(method, func);
    if ( !v5 )
      return 0LL;
  }
  v6 = *(_QWORD *)&v5->max_length;
  if ( (int)v6 < 1 )
    return 0LL;
  v7 = 0LL;
  m_Items = v5->m_Items;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v6 )
LABEL_23:
      sub_1BCAA44(array, func);
    v9 = (UnityEngine_Object_o *)m_Items[v7];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, func);
    array = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
    Component_object = 0LL;
    if ( ((unsigned __int8)array & 1) != 0 )
    {
      if ( v7 >= v5->max_length )
        goto LABEL_23;
      array = (UnityEngine_GameObject_array *)m_Items[v7];
      if ( !array )
LABEL_24:
        sub_1BCAA3C(array, func);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)array,
                           (const MethodInfo_2F626D0 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, func);
    array = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0LL,
                                              0LL);
    if ( ((unsigned __int8)array & 1) == 0 )
    {
      if ( !func )
        goto LABEL_24;
      array = (UnityEngine_GameObject_array *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD))func->fields.m_target)(
                                                func->fields.original_method_info,
                                                Component_object,
                                                *(_QWORD *)&func->fields.extra_arg);
      if ( ((unsigned __int8)array & 1) != 0 )
        return Component_object;
    }
    LODWORD(v6) = v5->max_length;
    if ( (__int64)++v7 >= (int)v6 )
      return 0LL;
  }
}


Il2CppObject *__fastcall BasicHelper__Find_object_(
        System_Object_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_2EFE860 *method)
{
  System_Object_array *v4; // x19
  __int64 v5; // x8
  unsigned __int64 v6; // x21

  v4 = array;
  if ( method->rgctx_data )
  {
    if ( !array )
      return 0LL;
  }
  else
  {
    array = (System_Object_array *)sub_1C1C718(method, func);
    if ( !v4 )
      return 0LL;
  }
  v5 = *(_QWORD *)&v4->max_length;
  if ( (int)v5 < 1 )
    return 0LL;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v5 )
      goto LABEL_15;
    if ( !func )
      sub_1BCAA3C(array, func);
    array = (System_Object_array *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD))func->fields.m_target)(
                                     func->fields.original_method_info,
                                     v4->m_Items[v6],
                                     *(_QWORD *)&func->fields.extra_arg);
    if ( ((unsigned __int8)array & 1) != 0 )
      break;
    LODWORD(v5) = v4->max_length;
    if ( (__int64)++v6 >= (int)v5 )
      return 0LL;
  }
  if ( (unsigned int)v6 >= v4->max_length )
LABEL_15:
    sub_1BCAA44(array, func);
  return v4->m_Items[v6];
}


void __fastcall BasicHelper__ForEach_Int32Enum_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_2EFF984 *method)
{
  long double v3; // q0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v15; // x1
  __int64 v16; // x19
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  long double v21; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0

  if ( method->rgctx_data
    || (sub_1BCA7E0(&System_IDisposable_TypeInfo, action, method),
        sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v7, v8),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C1C718(method, v9);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C1C6BC(v3);
  klass = sequence->klass;
  v12 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          sequence,
          *(_QWORD *)(p_method + 8));
  if ( !v16 )
    sub_1BCAA3C(0LL, v15);
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
          goto LABEL_17;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_17:
      v20 = sub_1C1C7C0(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C1C6BC(v21);
    v23 = *(_QWORD *)v16;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((Il2CppClass **)v25 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_26;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_26:
      v26 = sub_1C1C7C0(v16, _2_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v16, *(_QWORD *)(v26 + 8));
    if ( !action )
      sub_1BCAA3C(v27, (unsigned int)v27);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      (unsigned int)v27,
      *(_QWORD *)&action->fields.extra_arg);
  }
  v28 = *(_QWORD *)v16;
  v29 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
  {
    v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_34;
    }
    v31 = v28 + 16LL * *v30 + 312;
  }
  else
  {
LABEL_34:
    v31 = sub_1C1C7C0(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v31)(v16, *(_QWORD *)(v31 + 8));
}


void __fastcall BasicHelper__ForEach_KeyValuePair_int__object__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_2EFEA48 *method)
{
  long double v3; // q0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v15; // x1
  __int64 v16; // x19
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  long double v21; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0

  if ( method->rgctx_data
    || (sub_1BCA7E0(&System_IDisposable_TypeInfo, action, method),
        sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v7, v8),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C1C718(method, v9);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C1C6BC(v3);
  klass = sequence->klass;
  v12 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          sequence,
          *(_QWORD *)(p_method + 8));
  if ( !v16 )
    sub_1BCAA3C(0LL, v15);
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
          goto LABEL_17;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_17:
      v20 = sub_1C1C7C0(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C1C6BC(v21);
    v23 = *(_QWORD *)v16;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((Il2CppClass **)v25 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_26;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_26:
      v26 = sub_1C1C7C0(v16, _2_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v16, *(_QWORD *)(v26 + 8));
    if ( !action )
      sub_1BCAA3C(v27, v28);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      v27,
      v28,
      *(_QWORD *)&action->fields.extra_arg);
  }
  v29 = *(_QWORD *)v16;
  v30 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
  {
    v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_34;
    }
    v32 = v29 + 16LL * *v31 + 312;
  }
  else
  {
LABEL_34:
    v32 = sub_1C1C7C0(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v32)(v16, *(_QWORD *)(v32 + 8));
}


void __fastcall BasicHelper__ForEach_KeyValuePair_long__object__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_2EFED54 *method)
{
  long double v3; // q0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v15; // x1
  __int64 v16; // x19
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  long double v21; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0

  if ( method->rgctx_data
    || (sub_1BCA7E0(&System_IDisposable_TypeInfo, action, method),
        sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v7, v8),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C1C718(method, v9);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C1C6BC(v3);
  klass = sequence->klass;
  v12 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          sequence,
          *(_QWORD *)(p_method + 8));
  if ( !v16 )
    sub_1BCAA3C(0LL, v15);
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
          goto LABEL_17;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_17:
      v20 = sub_1C1C7C0(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C1C6BC(v21);
    v23 = *(_QWORD *)v16;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((Il2CppClass **)v25 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_26;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_26:
      v26 = sub_1C1C7C0(v16, _2_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v16, *(_QWORD *)(v26 + 8));
    if ( !action )
      sub_1BCAA3C(v27, v28);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      v27,
      v28,
      *(_QWORD *)&action->fields.extra_arg);
  }
  v29 = *(_QWORD *)v16;
  v30 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
  {
    v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_34;
    }
    v32 = v29 + 16LL * *v31 + 312;
  }
  else
  {
LABEL_34:
    v32 = sub_1C1C7C0(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v32)(v16, *(_QWORD *)(v32 + 8));
}


void __fastcall BasicHelper__ForEach_KeyValuePair_object__object__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_2EFF060 *method)
{
  long double v3; // q0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v15; // x1
  __int64 v16; // x19
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  long double v21; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0

  if ( method->rgctx_data
    || (sub_1BCA7E0(&System_IDisposable_TypeInfo, action, method),
        sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v7, v8),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C1C718(method, v9);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C1C6BC(v3);
  klass = sequence->klass;
  v12 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          sequence,
          *(_QWORD *)(p_method + 8));
  if ( !v16 )
    sub_1BCAA3C(0LL, v15);
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
          goto LABEL_17;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_17:
      v20 = sub_1C1C7C0(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C1C6BC(v21);
    v23 = *(_QWORD *)v16;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((Il2CppClass **)v25 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_26;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_26:
      v26 = sub_1C1C7C0(v16, _2_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v16, *(_QWORD *)(v26 + 8));
    if ( !action )
      sub_1BCAA3C(v27, v28);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      v27,
      v28,
      *(_QWORD *)&action->fields.extra_arg);
  }
  v29 = *(_QWORD *)v16;
  v30 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
  {
    v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_34;
    }
    v32 = v29 + 16LL * *v31 + 312;
  }
  else
  {
LABEL_34:
    v32 = sub_1C1C7C0(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v32)(v16, *(_QWORD *)(v32 + 8));
}


void __fastcall BasicHelper__ForEach___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_2F0029C *method)
{
  const MethodInfo_2F0029C_RGCTXs *rgctx_data; // x27
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 native_size; // x22
  long double v11; // q0
  __int64 _0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x1
  __int64 v18; // x19
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
  __int64 v30; // x1
  const MethodInfo_2F0029C_RGCTXs *v31; // x8
  char *v32; // x4
  MethodInfo *_6_System_Action_T__Invoke; // x1
  Il2CppMethodPointer methodPointer; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39[2]; // [xsp+0h] [xbp-10h] BYREF

  v39[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, action, method);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v7, v8);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method, v9);
      rgctx_data = method->rgctx_data;
    }
  }
  native_size = (unsigned int)rgctx_data->_4_T->_2.native_size;
  memset((char *)v39 - ((native_size + 15) & 0x1FFFFFFF0LL), 0, rgctx_data->_4_T->_2.native_size);
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = (__int64)rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (BYTE5(rgctx_data->_0_System_Collections_Generic_IEnumerable_T_->vtable[0].methodPtr) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = sub_1C1C6BC(v11);
    klass = sequence->klass;
    v14 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((_QWORD *)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
            sequence,
            *(_QWORD *)(p_method + 8));
    if ( !v18 )
      sub_1BCAA3C(0LL, v17);
    while ( 1 )
    {
      v19 = *(_QWORD *)v18;
      v20 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
      {
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_18;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_18:
        v22 = sub_1C1C7C0(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C1C6BC(v23);
      v25 = *(_QWORD *)v18;
      v26 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
      {
        v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *((Il2CppClass **)v27 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v26;
          v27 += 4;
          if ( !v26 )
            goto LABEL_27;
        }
        v28 = v25 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_27:
        v28 = sub_1C1C7C0(v18, _2_System_Collections_Generic_IEnumerator_T, 0LL);
      }
      v39[0] = (__int64)v39 - ((native_size + 15) & 0x1FFFFFFF0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, __int64))(*(_QWORD *)(v28 + 8) + 16LL))(
        *(_QWORD *)(*(_QWORD *)(v28 + 8) + 8LL),
        *(_QWORD *)(v28 + 8),
        v18,
        v39,
        v39[0]);
      memcpy(
        (char *)v39 - ((native_size + 15) & 0x1FFFFFFF0LL),
        (char *)v39 - ((native_size + 15) & 0x1FFFFFFF0LL),
        native_size);
      v29 = memcpy(
              (char *)v39 - ((native_size + 15) & 0x1FFFFFFF0LL),
              (char *)v39 - ((native_size + 15) & 0x1FFFFFFF0LL),
              native_size);
      if ( !action )
        sub_1BCAA3C(v29, v30);
      v31 = method->rgctx_data;
      v32 = (char *)v39 - ((native_size + 15) & 0x1FFFFFFF0LL);
      if ( (v31->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v32 = *(char **)((char *)v39 - ((native_size + 15) & 0x1FFFFFFF0LL));
      _6_System_Action_T__Invoke = v31->_6_System_Action_T__Invoke;
      methodPointer = _6_System_Action_T__Invoke->methodPointer;
      v39[0] = (__int64)v32;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Action_T__o *, __int64 *))_6_System_Action_T__Invoke->invoker_method)(
        methodPointer,
        _6_System_Action_T__Invoke,
        action,
        v39);
    }
    v35 = *(_QWORD *)v18;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_37;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_37:
      v38 = sub_1C1C7C0(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v38)(v18, *(_QWORD *)(v38 + 8));
  }
}


void __fastcall BasicHelper__ForEach___Il2CppFullySharedGenericType__49284716(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_int__T__o *action,
        const MethodInfo_2F0066C *method)
{
  unsigned __int64 StatusReg; // x27
  const MethodInfo_2F0066C_RGCTXs *rgctx_data; // x26
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 native_size; // x22
  long double v12; // q0
  __int64 _0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v18; // x1
  __int64 (__fastcall *v19)(System_Collections_Generic_IEnumerable_T__o *, __int64); // x8
  __int64 v20; // x1
  __int64 v21; // x19
  int i; // w27
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  long double v27; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  void *v33; // x0
  __int64 v34; // x1
  const MethodInfo_2F0066C_RGCTXs *v35; // x8
  char *v36; // x4
  MethodInfo *_6_System_Action_int__T__Invoke; // x1
  Il2CppMethodPointer methodPointer; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  _QWORD v43[2]; // [xsp+0h] [xbp-30h] BYREF
  __int64 v44[2]; // [xsp+10h] [xbp-20h] BYREF
  int v45; // [xsp+24h] [xbp-Ch] BYREF
  __int64 v46; // [xsp+28h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v46 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, action, method);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v8, v9);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method, v10);
      rgctx_data = method->rgctx_data;
    }
  }
  native_size = (unsigned int)rgctx_data->_4_T->_2.native_size;
  memset((char *)v43 - ((native_size + 15) & 0x1FFFFFFF0LL), 0, rgctx_data->_4_T->_2.native_size);
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = (__int64)rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (BYTE5(rgctx_data->_0_System_Collections_Generic_IEnumerable_T_->vtable[0].methodPtr) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = sub_1C1C6BC(v12);
    klass = sequence->klass;
    v15 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((_QWORD *)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
    }
    v19 = *(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, __int64))p_method;
    v18 = *(_QWORD *)(p_method + 8);
    v43[1] = StatusReg;
    v21 = v19(sequence, v18);
    if ( !v21 )
      sub_1BCAA3C(0LL, v20);
    for ( i = 0; ; ++i )
    {
      v23 = *(_QWORD *)v21;
      v24 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
      {
        v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v24;
          v25 += 4;
          if ( !v24 )
            goto LABEL_19;
        }
        v26 = v23 + 16LL * *v25 + 312;
      }
      else
      {
LABEL_19:
        v26 = sub_1C1C7C0(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v21, *(_QWORD *)(v26 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C1C6BC(v27);
      v29 = *(_QWORD *)v21;
      v30 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
      {
        v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
        while ( *((Il2CppClass **)v31 - 1) != _2_System_Collections_Generic_IEnumerator_T )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_28;
        }
        v32 = v29 + 16LL * *v31 + 312;
      }
      else
      {
LABEL_28:
        v32 = sub_1C1C7C0(v21, _2_System_Collections_Generic_IEnumerator_T, 0LL);
      }
      v44[0] = (__int64)v43 - ((native_size + 15) & 0x1FFFFFFF0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, __int64))(*(_QWORD *)(v32 + 8) + 16LL))(
        *(_QWORD *)(*(_QWORD *)(v32 + 8) + 8LL),
        *(_QWORD *)(v32 + 8),
        v21,
        v44,
        v44[0]);
      memcpy(
        (char *)v43 - ((native_size + 15) & 0x1FFFFFFF0LL),
        (char *)v43 - ((native_size + 15) & 0x1FFFFFFF0LL),
        native_size);
      v33 = memcpy(
              (char *)v43 - ((native_size + 15) & 0x1FFFFFFF0LL),
              (char *)v43 - ((native_size + 15) & 0x1FFFFFFF0LL),
              native_size);
      if ( !action )
        sub_1BCAA3C(v33, v34);
      v35 = method->rgctx_data;
      v36 = (char *)v43 - ((native_size + 15) & 0x1FFFFFFF0LL);
      if ( (v35->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v36 = *(char **)((char *)v43 - ((native_size + 15) & 0x1FFFFFFF0LL));
      _6_System_Action_int__T__Invoke = v35->_6_System_Action_int__T__Invoke;
      methodPointer = _6_System_Action_int__T__Invoke->methodPointer;
      v45 = i;
      v44[0] = (__int64)&v45;
      v44[1] = (__int64)v36;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Action_int__T__o *, __int64 *))_6_System_Action_int__T__Invoke->invoker_method)(
        methodPointer,
        _6_System_Action_int__T__Invoke,
        action,
        v44);
    }
    v39 = *(_QWORD *)v21;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_38;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_38:
      v42 = sub_1C1C7C0(v21, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v42)(v21, *(_QWORD *)(v42 + 8));
  }
}


void __fastcall BasicHelper__ForEach_int_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_2EFF36C *method)
{
  long double v3; // q0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v15; // x1
  __int64 v16; // x19
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  long double v21; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0

  if ( method->rgctx_data
    || (sub_1BCA7E0(&System_IDisposable_TypeInfo, action, method),
        sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v7, v8),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C1C718(method, v9);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C1C6BC(v3);
  klass = sequence->klass;
  v12 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          sequence,
          *(_QWORD *)(p_method + 8));
  if ( !v16 )
    sub_1BCAA3C(0LL, v15);
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
          goto LABEL_17;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_17:
      v20 = sub_1C1C7C0(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C1C6BC(v21);
    v23 = *(_QWORD *)v16;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((Il2CppClass **)v25 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_26;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_26:
      v26 = sub_1C1C7C0(v16, _2_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v16, *(_QWORD *)(v26 + 8));
    if ( !action )
      sub_1BCAA3C(v27, (unsigned int)v27);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      (unsigned int)v27,
      *(_QWORD *)&action->fields.extra_arg);
  }
  v28 = *(_QWORD *)v16;
  v29 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
  {
    v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_34;
    }
    v31 = v28 + 16LL * *v30 + 312;
  }
  else
  {
LABEL_34:
    v31 = sub_1C1C7C0(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v31)(v16, *(_QWORD *)(v31 + 8));
}


void __fastcall BasicHelper__ForEach_int__49280620(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_int__T__o *action,
        const MethodInfo_2EFF66C *method)
{
  long double v3; // q0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v15; // x1
  __int64 v16; // x19
  unsigned int i; // w22
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  long double v22; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( method->rgctx_data
    || (sub_1BCA7E0(&System_IDisposable_TypeInfo, action, method),
        sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v7, v8),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C1C718(method, v9);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C1C6BC(v3);
  klass = sequence->klass;
  v12 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          sequence,
          *(_QWORD *)(p_method + 8));
  if ( !v16 )
    sub_1BCAA3C(0LL, v15);
  for ( i = 0; ; ++i )
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
          goto LABEL_18;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_18:
      v21 = sub_1C1C7C0(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v16, *(_QWORD *)(v21 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C1C6BC(v22);
    v24 = *(_QWORD *)v16;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((Il2CppClass **)v26 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_27;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_27:
      v27 = sub_1C1C7C0(v16, _2_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v16, *(_QWORD *)(v27 + 8));
    if ( !action )
      sub_1BCAA3C(v28, v29);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      i,
      (unsigned int)v28,
      *(_QWORD *)&action->fields.extra_arg);
  }
  v30 = *(_QWORD *)v16;
  v31 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
  {
    v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_35;
    }
    v33 = v30 + 16LL * *v32 + 312;
  }
  else
  {
LABEL_35:
    v33 = sub_1C1C7C0(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v33)(v16, *(_QWORD *)(v33 + 8));
}


void __fastcall BasicHelper__ForEach_object_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_2EFFC84 *method)
{
  long double v3; // q0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v15; // x1
  __int64 v16; // x19
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  long double v21; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0

  if ( method->rgctx_data
    || (sub_1BCA7E0(&System_IDisposable_TypeInfo, action, method),
        sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v7, v8),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C1C718(method, v9);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C1C6BC(v3);
  klass = sequence->klass;
  v12 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          sequence,
          *(_QWORD *)(p_method + 8));
  if ( !v16 )
    sub_1BCAA3C(0LL, v15);
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
          goto LABEL_17;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_17:
      v20 = sub_1C1C7C0(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C1C6BC(v21);
    v23 = *(_QWORD *)v16;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((Il2CppClass **)v25 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_26;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_26:
      v26 = sub_1C1C7C0(v16, _2_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v16, *(_QWORD *)(v26 + 8));
    if ( !action )
      sub_1BCAA3C(v27, v27);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      v27,
      *(_QWORD *)&action->fields.extra_arg);
  }
  v28 = *(_QWORD *)v16;
  v29 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
  {
    v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_34;
    }
    v31 = v28 + 16LL * *v30 + 312;
  }
  else
  {
LABEL_34:
    v31 = sub_1C1C7C0(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v31)(v16, *(_QWORD *)(v31 + 8));
}


void __fastcall BasicHelper__ForEach_object__49282948(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_int__T__o *action,
        const MethodInfo_2EFFF84 *method)
{
  long double v3; // q0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v15; // x1
  __int64 v16; // x19
  unsigned int i; // w22
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  long double v22; // q0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( method->rgctx_data
    || (sub_1BCA7E0(&System_IDisposable_TypeInfo, action, method),
        sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v7, v8),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1C1C718(method, v9);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C1C6BC(v3);
  klass = sequence->klass;
  v12 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          sequence,
          *(_QWORD *)(p_method + 8));
  if ( !v16 )
    sub_1BCAA3C(0LL, v15);
  for ( i = 0; ; ++i )
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
          goto LABEL_18;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_18:
      v21 = sub_1C1C7C0(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v16, *(_QWORD *)(v21 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C1C6BC(v22);
    v24 = *(_QWORD *)v16;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((Il2CppClass **)v26 - 1) != _2_System_Collections_Generic_IEnumerator_T )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_27;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_27:
      v27 = sub_1C1C7C0(v16, _2_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v16, *(_QWORD *)(v27 + 8));
    if ( !action )
      sub_1BCAA3C(v28, v29);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, __int64, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      i,
      v28,
      *(_QWORD *)&action->fields.extra_arg);
  }
  v30 = *(_QWORD *)v16;
  v31 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
  {
    v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_35;
    }
    v33 = v30 + 16LL * *v32 + 312;
  }
  else
  {
LABEL_35:
    v33 = sub_1C1C7C0(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v33)(v16, *(_QWORD *)(v33 + 8));
}


int32_t __fastcall BasicHelper__GetValue_Int32Enum__Int32Enum_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int32_t def,
        const MethodInfo_2F0110C *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C1C718(method, key);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
         key,
         (const MethodInfo_32323EC *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
             key,
             (const MethodInfo_3232164 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


int32_t __fastcall BasicHelper__GetValue_Int32Enum__int_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int32_t def,
        const MethodInfo_2F01088 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C1C718(method, key);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_Int32Enum__int___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
         key,
         (const MethodInfo_322F604 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_Int32Enum__int___get_Item(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
             key,
             (const MethodInfo_322F37C *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


Il2CppObject *__fastcall BasicHelper__GetValue_Int32Enum__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        Il2CppObject *def,
        const MethodInfo_2F01190 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C1C718(method, key);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
         key,
         (const MethodInfo_32351EC *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
             key,
             (const MethodInfo_3234F58 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall BasicHelper__GetValue___Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        const MethodInfo_2F00D14 *method)
{
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  const MethodInfo_2F00D14_RGCTXs *rgctx_data; // x8
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  Il2CppClass *_0_T; // x8
  __int64 native_size; // x20
  Il2CppObject *Item; // x21
  long double v16; // q0
  Il2CppClass *v17; // x1
  char *v18; // x1
  void *v19; // x0
  __int64 *v20; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v21; // x0 OVERLAPPED
  void *v22; // x1
  __int64 v23[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  monitor = def.monitor;
  klass = def.klass;
  v23[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v23[0] = (__int64)def.klass;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, def.klass);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10, v11);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method, v12);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  native_size = (unsigned int)_0_T->_2.native_size;
  if ( !dic )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)dic,
          (Il2CppObject *)key,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    _0_T = method->rgctx_data->_0_T;
LABEL_10:
    if ( (_0_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v20 = v23;
    else
      v20 = (__int64 *)klass;
    memcpy((char *)v23 - ((native_size + 15) & 0x1FFFFFFF0LL), v20, native_size);
    v19 = monitor;
    v18 = (char *)v23 - ((native_size + 15) & 0x1FFFFFFF0LL);
    goto LABEL_14;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)dic,
           (Il2CppObject *)key,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v17 = method->rgctx_data->_0_T;
  if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
    v17 = (Il2CppClass *)sub_1C1C6BC(v16);
  v18 = (char *)sub_1BCA92C(Item, v17, (char *)v23 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v19 = monitor;
LABEL_14:
  v21 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v19, v18, native_size);
  result.monitor = v22;
  result.klass = v21;
  return result;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall BasicHelper__GetValue___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        const MethodInfo_2F0145C *method)
{
  _QWORD *monitor; // x25
  void **v5; // x23
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v6; // x24
  _QWORD *v7; // x19
  __int64 v9; // x9
  __int64 v10; // x8
  __int64 v11; // x27
  __int64 v12; // x20
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
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v23; // x0 OVERLAPPED
  void *v24; // x1
  __int64 v25; // [xsp+0h] [xbp-40h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+8h] [xbp-38h]
  void *v27; // [xsp+10h] [xbp-30h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v28; // [xsp+18h] [xbp-28h] BYREF
  char *v29; // [xsp+20h] [xbp-20h] BYREF
  __int64 v30; // [xsp+28h] [xbp-18h]
  char v31[4]; // [xsp+34h] [xbp-Ch] BYREF
  __int64 v32; // [xsp+38h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  klass = def.klass;
  monitor = def.monitor;
  v5 = (void **)key.monitor;
  v6 = key.klass;
  v32 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v27 = key.monitor;
  v28 = key.klass;
  v7 = (_QWORD *)*((_QWORD *)def.monitor + 7);
  if ( !v7 )
  {
    sub_1C1C718(def.monitor, key.klass);
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
    memcpy((char *)&v25 - ((v11 + 15) & 0x1FFFFFFF0LL), v14, *(_DWORD *)(v9 + 252));
    v15 = (__int64 *)v7[2];
    v16 = *v15;
    v17 = (char *)&v25 - ((v11 + 15) & 0x1FFFFFFF0LL);
    if ( (*(_DWORD *)(v7[1] + 40LL) & 0x80000000) == 0 )
      v17 = *(char **)v13;
    v29 = v17;
    ((void (__fastcall *)(__int64, __int64 *, System_Collections_Generic_Dictionary_K__V__o *, char **, char *))v15[2])(
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
      v30 = (__int64)&v25 - ((v12 + 15) & 0x1FFFFFFF0LL);
      ((void (__fastcall *)(__int64, __int64 *, System_Collections_Generic_Dictionary_K__V__o *, char **, __int64))v20[2])(
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


double __fastcall BasicHelper__GetValue_double_(
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        double def,
        const MethodInfo_2F00A54 *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  Il2CppObject *Item; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  long double v14; // q0
  const MethodInfo_2F00A54_RGCTXs *rgctx_data; // x8
  Il2CppObject *v16; // x19
  _QWORD *p_image; // x1
  double result; // d0
  System_Collections_Generic_Dictionary_string__object__o *v19; // x0
  System_String_o *v20; // x1
  int64_t v21; // x2
  const MethodInfo_2F00B40 *v22; // x3

  if ( method->rgctx_data
    || (sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, method),
        sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8, v9),
        method->rgctx_data) )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C1C718(method, v10);
    if ( !dic )
      return def;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)dic,
          (Il2CppObject *)key,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return def;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)dic,
           (Il2CppObject *)key,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  rgctx_data = method->rgctx_data;
  v16 = Item;
  p_image = &rgctx_data->_0_T->_1.image;
  if ( (BYTE5(rgctx_data->_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    Item = (Il2CppObject *)sub_1C1C6BC(v14);
    p_image = &Item->klass;
  }
  if ( !v16 )
    sub_1BCAA3C(Item, p_image);
  if ( v16->klass->_1.element_class == (Il2CppClass *)p_image[8] )
    return *(double *)j_il2cpp_object_unbox_0(v16, p_image, v12, v13);
  sub_1BCACFC(v16);
  BasicHelper__GetValue_long_(v19, v20, v21, v22);
  return result;
}


int32_t __fastcall BasicHelper__GetValue_int__Int32Enum_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int32_t def,
        const MethodInfo_2F00EFC *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C1C718(method, key);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_int__Int32Enum___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
         key,
         (const MethodInfo_3200260 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_int__Int32Enum___get_Item(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
             key,
             (const MethodInfo_31FFFD8 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


int32_t __fastcall BasicHelper__GetValue_int__int_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int32_t def,
        const MethodInfo_2F00E78 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C1C718(method, key);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         (System_Collections_Generic_Dictionary_int__int__o *)dic,
         key,
         (const MethodInfo_31FD460 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_int__int___get_Item(
             (System_Collections_Generic_Dictionary_int__int__o *)dic,
             key,
             (const MethodInfo_31FD1D8 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


int64_t __fastcall BasicHelper__GetValue_int__long_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int64_t def,
        const MethodInfo_2F00F80 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C1C718(method, key);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_int__long___ContainsKey(
         (System_Collections_Generic_Dictionary_int__long__o *)dic,
         key,
         (const MethodInfo_3203078 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_int__long___get_Item(
             (System_Collections_Generic_Dictionary_int__long__o *)dic,
             key,
             (const MethodInfo_3202DE4 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


Il2CppObject *__fastcall BasicHelper__GetValue_int__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        Il2CppObject *def,
        const MethodInfo_2F01004 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C1C718(method, key);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)dic,
         key,
         (const MethodInfo_32060D8 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_int__object___get_Item(
             (System_Collections_Generic_Dictionary_int__object__o *)dic,
             key,
             (const MethodInfo_3205E44 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


int64_t __fastcall BasicHelper__GetValue_long_(
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        int64_t def,
        const MethodInfo_2F00B40 *method)
{
  int64_t v5; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  Il2CppObject *Item; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  long double v14; // q0
  const MethodInfo_2F00B40_RGCTXs *rgctx_data; // x8
  Il2CppObject *v16; // x19
  _QWORD *p_image; // x1
  System_Collections_Generic_Dictionary_string__object__o *v19; // x0
  System_String_o *v20; // x1
  Il2CppObject *v21; // x2
  const MethodInfo_2F00C2C *v22; // x3

  v5 = def;
  if ( method->rgctx_data
    || (sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, def),
        sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8, v9),
        method->rgctx_data) )
  {
    if ( !dic )
      return v5;
  }
  else
  {
    sub_1C1C718(method, v10);
    if ( !dic )
      return v5;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)dic,
          (Il2CppObject *)key,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return v5;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)dic,
           (Il2CppObject *)key,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  rgctx_data = method->rgctx_data;
  v16 = Item;
  p_image = &rgctx_data->_0_T->_1.image;
  if ( (BYTE5(rgctx_data->_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    Item = (Il2CppObject *)sub_1C1C6BC(v14);
    p_image = &Item->klass;
  }
  if ( !v16 )
    sub_1BCAA3C(Item, p_image);
  if ( v16->klass->_1.element_class == (Il2CppClass *)p_image[8] )
    return *(_QWORD *)j_il2cpp_object_unbox_0(v16, p_image, v12, v13);
  sub_1BCACFC(v16);
  return (int64_t)BasicHelper__GetValue_object_(v19, v20, v21, v22);
}


int32_t __fastcall BasicHelper__GetValue_long__int_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int64_t key,
        int32_t def,
        const MethodInfo_2F01214 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C1C718(method, key);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_long__int___ContainsKey(
         (System_Collections_Generic_Dictionary_long__int__o *)dic,
         key,
         (const MethodInfo_323E404 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_long__int___get_Item(
             (System_Collections_Generic_Dictionary_long__int__o *)dic,
             key,
             (const MethodInfo_323E170 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


Il2CppObject *__fastcall BasicHelper__GetValue_object_(
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        Il2CppObject *def,
        const MethodInfo_2F00C2C *method)
{
  const MethodInfo_2F00C2C *_0_T; // x19
  Il2CppObject *v5; // x20
  Il2CppObject *Item; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  long double v11; // q0

  _0_T = method;
  v5 = def;
  Item = (Il2CppObject *)key;
  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, def);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8, v9);
    if ( !_0_T->rgctx_data )
      goto LABEL_10;
  }
  if ( dic )
  {
    while ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)dic,
              Item,
              (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)dic,
               Item,
               (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      _0_T = (const MethodInfo_2F00C2C *)_0_T->rgctx_data->_0_T;
      if ( (BYTE5(_0_T[3].return_type) & 1) == 0 )
        _0_T = (const MethodInfo_2F00C2C *)sub_1C1C6BC(v11);
      if ( !Item )
        return 0LL;
      v5 = (Il2CppObject *)sub_1BCA91C(Item, _0_T);
      if ( !v5 )
      {
        sub_1BCACFC(Item);
LABEL_10:
        sub_1C1C718(_0_T, v10);
        if ( dic )
          continue;
      }
      return v5;
    }
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall BasicHelper__GetValue_object__Color_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        Il2CppObject *key,
        UnityEngine_Color_o def,
        const MethodInfo_2F01338 *method)
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
    sub_1C1C718(method, key);
  if ( dic
    && System_Collections_Generic_Dictionary_object__Color___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
         key,
         (const MethodInfo_3256634 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    Item = System_Collections_Generic_Dictionary_object__Color___get_Item(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
             key,
             (const MethodInfo_325638C *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
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


System_Nullable_Color__o *__fastcall BasicHelper__GetValue_object__Nullable_Color__(
        System_Nullable_Color__o *retstr,
        System_Nullable_Color__o *dic,
        Il2CppObject *key,
        System_Nullable_Color__o *def,
        const MethodInfo_2F01298 *method)
{
  System_Nullable_Color__o *v8; // x21
  float a; // w8
  __int128 v11; // q0
  System_Nullable_Color__o v12; // [xsp+8h] [xbp-48h] BYREF

  v8 = dic;
  if ( method->rgctx_data )
  {
    if ( !dic )
      goto LABEL_7;
  }
  else
  {
    dic = (System_Nullable_Color__o *)sub_1C1C718(method, key);
    if ( !v8 )
    {
LABEL_7:
      a = def->fields.value.fields.a;
      v11 = *(_OWORD *)&def->fields.hasValue;
      goto LABEL_8;
    }
  }
  dic = (System_Nullable_Color__o *)System_Collections_Generic_Dictionary_object__Nullable_Color____ContainsKey(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)v8,
                                      key,
                                      (const MethodInfo_324A144 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey);
  if ( ((unsigned __int8)dic & 1) == 0 )
    goto LABEL_7;
  dic = System_Collections_Generic_Dictionary_object__Nullable_Color____get_Item(
          &v12,
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)v8,
          key,
          (const MethodInfo_3249D8C *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  a = v12.fields.value.fields.a;
  v11 = *(_OWORD *)&v12.fields.hasValue;
LABEL_8:
  retstr->fields.value.fields.a = a;
  *(_OWORD *)&retstr->fields.hasValue = v11;
  return dic;
}


Il2CppObject *__fastcall BasicHelper__GetValue_object__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        Il2CppObject *key,
        Il2CppObject *def,
        const MethodInfo_2F013D8 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1C1C718(method, key);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         key,
         (const MethodInfo_3265454 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)dic,
             key,
             (const MethodInfo_32651E0 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall BasicHelper__IndexValue_Color_(
        UnityEngine_Color_array *array,
        int32_t index,
        UnityEngine_Color_o def,
        const MethodInfo_2F016C0 *method)
{
  il2cpp_array_size_t max_length; // w8

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      max_length = array->max_length;
      if ( (int)max_length > index )
      {
        if ( max_length <= index )
          sub_1BCAA44(array, index);
        return *(UnityEngine_Color_o *)&array->m_Items[index].fields.g;
      }
    }
  }
  return def;
}


int32_t __fastcall BasicHelper__IndexValue_Int32Enum_(
        System_Int32Enum_array *array,
        int32_t index,
        int32_t def,
        const MethodInfo_2F017A8 *method)
{
  il2cpp_array_size_t max_length; // w8

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      max_length = array->max_length;
      if ( (int)max_length > index )
      {
        if ( max_length <= index )
          sub_1BCAA44(array, index);
        return array->m_Items[index + 1];
      }
    }
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_KeyValuePair_object__int__o __fastcall BasicHelper__IndexValue_KeyValuePair_object__int__(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        System_Collections_Generic_KeyValuePair_object__int__o def,
        const MethodInfo_2F01600 *method)
{
  __int64 v5; // x19
  Il2CppObject *key; // x21
  Il2CppObject *v9; // x0 OVERLAPPED
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
    sub_1C1C718(method, index);
    if ( !list )
    {
LABEL_8:
      v9 = key;
      v10 = v5;
      goto LABEL_9;
    }
  }
  if ( (index & 0x80000000) != 0 || list->fields._size <= index )
    goto LABEL_8;
  Item = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
           list,
           index,
           (const MethodInfo_34F71A8 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
  v10 = *(_QWORD *)&Item.fields.value;
  v9 = Item.fields.key;
LABEL_9:
  *(_QWORD *)&result.fields.value = v10;
  result.fields.key = v9;
  return result;
}


ListViewSort_BonusFilterInfo_o *__fastcall BasicHelper__IndexValue_ListViewSort_BonusFilterInfo_(
        ListViewSort_BonusFilterInfo_o *retstr,
        ListViewSort_BonusFilterInfo_o *array,
        int32_t index,
        ListViewSort_BonusFilterInfo_o *def,
        const MethodInfo_2F01B60 *method)
{
  int32_t priority; // w9
  __int128 v6; // q0

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      priority = array[1].fields.priority;
      if ( priority > index )
      {
        if ( priority <= (unsigned int)index )
          sub_1BCAA44(array, index);
        def = (ListViewSort_BonusFilterInfo_o *)&array[(unsigned int)index + 1].fields.eventId;
      }
    }
  }
  v6 = *(_OWORD *)&def->fields.priority;
  retstr->fields.buttonText = def->fields.buttonText;
  *(_OWORD *)&retstr->fields.priority = v6;
  return array;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall BasicHelper__IndexValue___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        int32_t index,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        const MethodInfo_2F01A5C *method)
{
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x22
  const MethodInfo_2F01A5C_RGCTXs *rgctx_data; // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v8; // x24
  Il2CppClass *_1_T; // x8
  __int64 native_size; // x20
  int32_t max_length; // w9
  __int64 *v13; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v14; // x0 OVERLAPPED
  void *v15; // x1
  __int64 v16[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  monitor = def.monitor;
  klass = def.klass;
  v16[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v16[0] = (__int64)def.klass;
  rgctx_data = method->rgctx_data;
  v8 = array;
  if ( !rgctx_data )
  {
    array = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)sub_1C1C718(method, index);
    rgctx_data = method->rgctx_data;
  }
  _1_T = rgctx_data->_1_T;
  native_size = (unsigned int)_1_T->_2.native_size;
  if ( !v8 || (index & 0x80000000) != 0 || (max_length = v8->max_length, max_length <= index) )
  {
    if ( (_1_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v13 = v16;
    else
      v13 = (__int64 *)klass;
  }
  else
  {
    if ( max_length <= (unsigned int)index )
      sub_1BCAA44(array, *(_QWORD *)&index);
    v13 = (__int64 *)((char *)v8->m_Items
                    + v8->obj.klass->_2.thread_static_fields_size * (unsigned __int64)(unsigned int)index);
  }
  memcpy((char *)v16 - ((native_size + 15) & 0x1FFFFFFF0LL), v13, native_size);
  v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    monitor,
                                                                    (char *)v16 - ((native_size + 15) & 0x1FFFFFFF0LL),
                                                                    native_size);
  result.monitor = v15;
  result.klass = v14;
  return result;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall BasicHelper__IndexValue___Il2CppFullySharedGenericType__49289528(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        const MethodInfo_2F01938 *method)
{
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  const MethodInfo_2F01938_RGCTXs *rgctx_data; // x8
  Il2CppClass *_3_T; // x9
  __int64 native_size; // x20
  MethodInfo *_2_System_Collections_Generic_List_T__get_Item; // x1
  void (__fastcall *methodPointer)(); // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v14; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v15; // x0 OVERLAPPED
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
  v22 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v18 = def.klass;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method, index);
    rgctx_data = method->rgctx_data;
  }
  _3_T = rgctx_data->_3_T;
  native_size = (unsigned int)_3_T->_2.native_size;
  if ( list && (index & 0x80000000) == 0 )
  {
    if ( ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list) > index )
    {
      _2_System_Collections_Generic_List_T__get_Item = method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item;
      methodPointer = _2_System_Collections_Generic_List_T__get_Item->methodPointer;
      v21 = index;
      v19 = &v21;
      v20 = (char *)&v17 - ((native_size + 15) & 0x1FFFFFFF0LL);
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
  memcpy((char *)&v17 - ((native_size + 15) & 0x1FFFFFFF0LL), v14, native_size);
LABEL_12:
  v15 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    monitor,
                                                                    (char *)&v17 - ((native_size + 15) & 0x1FFFFFFF0LL),
                                                                    native_size);
  result.monitor = v16;
  result.klass = v15;
  return result;
}


bool __fastcall BasicHelper__IndexValue_bool_(
        System_Boolean_array *array,
        int32_t index,
        bool def,
        const MethodInfo_2F01684 *method)
{
  il2cpp_array_size_t max_length; // w8

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      max_length = array->max_length;
      if ( (int)max_length > index )
      {
        if ( max_length <= index )
          sub_1BCAA44(array, index);
        return array->m_Items[index + 4];
      }
    }
  }
  return def;
}


float __fastcall BasicHelper__IndexValue_float_(
        System_Single_array *array,
        int32_t index,
        float def,
        const MethodInfo_2F01908 *method)
{
  il2cpp_array_size_t max_length; // w8

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      max_length = array->max_length;
      if ( (int)max_length > index )
      {
        if ( max_length <= index )
          sub_1BCAA44(array, index);
        return array->m_Items[index + 1];
      }
    }
  }
  return def;
}


float __fastcall BasicHelper__IndexValue_float__49289356(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        float def,
        const MethodInfo_2F0188C *method)
{
  if ( method->rgctx_data )
  {
    if ( !list )
      return def;
  }
  else
  {
    sub_1C1C718(method, index);
    if ( !list )
      return def;
  }
  if ( (index & 0x80000000) == 0 && list->fields._size > index )
    return System_Collections_Generic_List_float___get_Item(
             (System_Collections_Generic_List_float__o *)list,
             index,
             (const MethodInfo_35C20E0 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
  return def;
}


int32_t __fastcall BasicHelper__IndexValue_int_(
        System_Int32_array *array,
        int32_t index,
        int32_t def,
        const MethodInfo_2F01774 *method)
{
  il2cpp_array_size_t max_length; // w8

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      max_length = array->max_length;
      if ( (int)max_length > index )
      {
        if ( max_length <= index )
          sub_1BCAA44(array, index);
        return array->m_Items[index + 1];
      }
    }
  }
  return def;
}


int32_t __fastcall BasicHelper__IndexValue_int__49288952(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        int32_t def,
        const MethodInfo_2F016F8 *method)
{
  if ( method->rgctx_data )
  {
    if ( !list )
      return def;
  }
  else
  {
    sub_1C1C718(method, index);
    if ( !list )
      return def;
  }
  if ( (index & 0x80000000) == 0 && list->fields._size > index )
    return System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)list,
             index,
             (const MethodInfo_3584948 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
  return def;
}


Il2CppObject *__fastcall BasicHelper__IndexValue_object_(
        System_Object_array *array,
        int32_t index,
        Il2CppObject *def,
        const MethodInfo_2F01858 *method)
{
  il2cpp_array_size_t max_length; // w8

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      max_length = array->max_length;
      if ( (int)max_length > index )
      {
        if ( max_length <= index )
          sub_1BCAA44(array, index);
        return array->m_Items[index];
      }
    }
  }
  return def;
}


Il2CppObject *__fastcall BasicHelper__IndexValue_object__49289180(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        Il2CppObject *def,
        const MethodInfo_2F017DC *method)
{
  if ( method->rgctx_data )
  {
    if ( !list )
      return def;
  }
  else
  {
    sub_1C1C718(method, index);
    if ( !list )
      return def;
  }
  if ( (index & 0x80000000) == 0 && list->fields._size > index )
    return System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)list,
             index,
             (const MethodInfo_35A198C *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
  return def;
}


bool __fastcall BasicHelper__IsNullOrEmpty(System_Collections_ICollection_o *self, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_ICollection_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B1799D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_ICollection_TypeInfo, method, v2);
    byte_4B1799D = 1;
  }
  if ( !self )
    return 1;
  klass = self->klass;
  v5 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_ICollection_c **)p_offset - 1) != System_Collections_ICollection_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(self, System_Collections_ICollection_TypeInfo, 1LL);
  }
  return (*(int (__fastcall **)(System_Collections_ICollection_o *, _QWORD))p_method)(self, *(_QWORD *)(p_method + 8)) < 1;
}


bool __fastcall BasicHelper__IsValidIndex_Vector3_(
        UnityEngine_Vector3_array *array,
        int32_t index,
        const MethodInfo_2F01C28 *method)
{
  bool result; // w0

  result = 0;
  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
      return (signed int)array->max_length > index;
  }
  return result;
}


bool __fastcall BasicHelper__IsValidIndex___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        const MethodInfo_2F01C48 *method)
{
  bool result; // w0

  if ( !method->rgctx_data )
    sub_1C1C718(method, index);
  result = 0;
  if ( list )
  {
    if ( (index & 0x80000000) == 0 )
      return ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list) > index;
  }
  return result;
}


bool __fastcall BasicHelper__IsValidIndex___Il2CppFullySharedGenericType__49290400(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        int32_t index,
        const MethodInfo_2F01CA0 *method)
{
  bool result; // w0

  result = 0;
  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
      return (signed int)array->max_length > index;
  }
  return result;
}


bool __fastcall BasicHelper__IsValidIndex_int_(
        System_Int32_array *array,
        int32_t index,
        const MethodInfo_2F01BA4 *method)
{
  bool result; // w0

  result = 0;
  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
      return (signed int)array->max_length > index;
  }
  return result;
}


bool __fastcall BasicHelper__IsValidIndex_object_(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        const MethodInfo_2F01BC4 *method)
{
  bool result; // w0

  if ( !method->rgctx_data )
    sub_1C1C718(method, index);
  result = 0;
  if ( list )
  {
    if ( (index & 0x80000000) == 0 )
      return list->fields._size > index;
  }
  return result;
}


bool __fastcall BasicHelper__IsValidIndex_object__49290248(
        System_Object_array *array,
        int32_t index,
        const MethodInfo_2F01C08 *method)
{
  bool result; // w0

  result = 0;
  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
      return (signed int)array->max_length > index;
  }
  return result;
}


void __fastcall BasicHelper__Loop(int32_t loopCount, System_Action_int__o *action, const MethodInfo *method)
{
  unsigned int i; // w21

  if ( action && loopCount >= 1 )
  {
    for ( i = 0; i != loopCount; ++i )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))action->fields.m_target)(
        action->fields.original_method_info,
        i,
        *(_QWORD *)&action->fields.extra_arg);
  }
}


bool __fastcall BasicHelper__NearbyOrGreaterThan(float self, float toCompare, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  float v7; // s1
  float v8; // s2
  float v9; // s0

  if ( self >= toCompare )
    return 1;
  if ( !byte_4B109C5 )
  {
    sub_1BCA7E0(&UnityEngine_Mathf_TypeInfo, v3, v4);
    byte_4B109C5 = 1;
  }
  v7 = fabsf(self);
  v8 = fabsf(toCompare);
  if ( v7 <= v8 )
    v7 = v8;
  v9 = v7 * 0.000001;
  if ( (float)(v7 * 0.000001) <= (float)(UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0) )
    v9 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  return vabds_f32(toCompare, self) < v9;
}


int32_t __fastcall BasicHelper__PositiveModulo(int32_t self, int32_t residue, const MethodInfo *method)
{
  return (self % residue + residue) % residue;
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__RealDelayCall(
        float delay,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B179A0 & 1) == 0 )
  {
    sub_1BCA7E0(&BasicHelper__RealDelayCall_d__38_TypeInfo, method, v3);
    byte_4B179A0 = 1;
  }
  v7 = sub_1BCAA2C(BasicHelper__RealDelayCall_d__38_TypeInfo, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(float *)(v7 + 32) = delay;
  *(_QWORD *)(v7 + 40) = action;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)action, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BasicHelper__RealDelayCall___Il2CppFullySharedGenericType_(
        float delay,
        System_Action_T__o *action,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg,
        const MethodInfo_2F01D58 *method)
{
  _QWORD *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  __int64 *v7; // x8
  long double v8; // q8
  __int64 v9; // x21
  __int64 v10; // x0
  System_Collections_IEnumerator_o *v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  _QWORD *v14; // x20
  __int64 *v15; // x1
  __int64 v17[2]; // [xsp+0h] [xbp-18h] BYREF

  monitor = arg.monitor;
  klass = arg.klass;
  v17[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v17[0] = (__int64)arg.klass;
  v7 = (__int64 *)*((_QWORD *)arg.monitor + 7);
  v8 = *(long double *)&delay;
  if ( !v7 )
  {
    sub_1C1C718(arg.monitor, arg.klass);
    v7 = (__int64 *)monitor[7];
  }
  v9 = *(unsigned int *)(v7[3] + 252);
  v10 = *v7;
  if ( (*(_BYTE *)(*v7 + 309) & 1) == 0 )
    v10 = sub_1C1C6BC(*(long double *)&delay);
  v11 = (System_Collections_IEnumerator_o *)sub_1BCAA2C(v10, arg.klass, arg.monitor, method);
  v12 = (**(__int64 (__fastcall ***)(System_Collections_IEnumerator_o *, _QWORD))(monitor[7] + 8LL))(v11, 0LL);
  if ( !v11 )
    sub_1BCAA3C(v12, v13);
  sub_1A17D50(v11, *(_QWORD *)(*(_QWORD *)monitor[7] + 128LL) + 64LL, v8);
  sub_1A17A24(v11, *(_QWORD *)(*(_QWORD *)monitor[7] + 128LL) + 96LL, action);
  v14 = (_QWORD *)monitor[7];
  if ( *(int *)(v14[3] + 40LL) >= 0 )
    v15 = v17;
  else
    v15 = (__int64 *)klass;
  memcpy((char *)v17 - ((v9 + 15) & 0x1FFFFFFF0LL), v15, v9);
  sub_1BCA808(v11, *(_QWORD *)(*v14 + 128LL) + 128LL, (char *)v17 - ((v9 + 15) & 0x1FFFFFFF0LL), (unsigned int)v9);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BasicHelper__RealDelayCall_object_(
        float delay,
        System_Action_T__o *action,
        Il2CppObject *arg,
        const MethodInfo_2F01CC0 *method)
{
  __int64 v4; // x3
  const MethodInfo_2F01CC0_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__RealDelayCall_d__39_T; // x0
  BasicHelper__RealDelayCall_d__39_T__o *v11; // x0
  const MethodInfo_2F01CC0_RGCTXs *v12; // x8
  BasicHelper__RealDelayCall_d__39_T__o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method, arg);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__RealDelayCall_d__39_T = (__int64)rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_;
  if ( (BYTE5(rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BasicHelper__RealDelayCall_d__39_T = sub_1C1C6BC(*(long double *)&delay);
  v11 = (BasicHelper__RealDelayCall_d__39_T__o *)sub_1BCAA2C(_0_BasicHelper__RealDelayCall_d__39_T, arg, method, v4);
  v12 = method->rgctx_data;
  v13 = v11;
  BasicHelper__RealDelayCall_d__39_object____ctor(
    v11,
    0,
    (const MethodInfo_30FD940 *)v12->_1_BasicHelper__RealDelayCall_d__39_T___ctor);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  v13->fields.delay = delay;
  v13->fields.action = action;
  sub_1BCA784((PartyOrganizationUtility_o *)&v13->fields.action, (int64_t)action, v16, v17, v18, v19, v20, v21);
  v13->fields.arg = arg;
  sub_1BCA784((PartyOrganizationUtility_o *)&v13->fields.arg, (int64_t)arg, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v13;
}


void __fastcall BasicHelper__RemoveElements___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *self,
        System_Func_T__bool__o *cond,
        const MethodInfo_2F023D4 *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  const MethodInfo_2F023D4_RGCTXs *rgctx_data; // x8
  __int64 *v7; // x22
  int v8; // w23
  MethodInfo *_3_System_Collections_Generic_List_T__get_Item; // x1
  Il2CppMethodPointer methodPointer; // x0
  const MethodInfo_2F023D4_RGCTXs *v11; // x8
  __int64 v12; // x9
  MethodInfo *_5_System_Func_T__bool__Invoke; // x1
  void (__fastcall *v14)(); // x0
  __int64 v15[2]; // [xsp+0h] [xbp-20h] BYREF
  int v16; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v17; // [xsp+18h] [xbp-8h]

  v5 = self;
  v17 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    self = (System_Collections_Generic_List_T__o *)sub_1C1C718(method, cond);
    rgctx_data = method->rgctx_data;
  }
  v7 = (__int64 *)((char *)v15 - (((unsigned int)rgctx_data->_4_T->_2.native_size + 15LL) & 0x1FFFFFFF0LL));
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
      v15[0] = (__int64)&v16;
      v15[1] = (__int64)v7;
      self = (System_Collections_Generic_List_T__o *)((__int64 (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, __int64 *, __int64 *))_3_System_Collections_Generic_List_T__get_Item->invoker_method)(
                                                       methodPointer,
                                                       _3_System_Collections_Generic_List_T__get_Item,
                                                       v5,
                                                       v15,
                                                       v7);
      if ( !cond )
        break;
      v11 = method->rgctx_data;
      v12 = (__int64)v7;
      if ( (v11->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v12 = *v7;
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
    sub_1BCAA3C(self, cond);
  }
}


void __fastcall BasicHelper__RemoveElements_object_(
        System_Collections_Generic_List_T__o *self,
        System_Func_T__bool__o *cond,
        const MethodInfo_2F0233C *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w22

  v5 = (System_Collections_Generic_List_object__o *)self;
  if ( !method->rgctx_data )
    self = (System_Collections_Generic_List_T__o *)sub_1C1C718(method, cond);
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
                                                       (const MethodInfo_35A198C *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      if ( !cond )
        break;
      if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Collections_Generic_List_T__o *, _QWORD))cond->fields.m_target)(
              cond->fields.original_method_info,
              self,
              *(_QWORD *)&cond->fields.extra_arg) & 1) != 0 )
        System_Collections_Generic_List_object___RemoveAt(
          v5,
          v6,
          (const MethodInfo_35A3430 *)method->rgctx_data->_6_System_Collections_Generic_List_T__RemoveAt);
      if ( --v6 < 0 )
        return;
    }
LABEL_10:
    sub_1BCAA3C(self, cond);
  }
}


void __fastcall BasicHelper__Remove___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        System_Func_KeyValuePair_K__V___bool__o *cond,
        const MethodInfo_2F0207C *method)
{
  const MethodInfo_2F0207C_RGCTXs *rgctx_data; // x26
  __int64 native_size; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x25
  long double inited; // q0
  Il2CppClass *_6_BasicHelper___c__22_K__V; // x8
  Il2CppClass *v14; // x0
  int64_t v15; // x26
  Il2CppClass *v16; // x0
  const MethodInfo_2F0207C_RGCTXs *v17; // x8
  __int64 v18; // x0
  __int64 _5_System_Func_KeyValuePair_K__V___K; // x8
  __int64 v20; // x27
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  long double v27; // q0
  Il2CppClass *v28; // x0
  Il2CppClass *v29; // x0
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x8
  _DWORD *v34; // x25
  unsigned __int64 v35; // x26
  const MethodInfo_2F0207C_RGCTXs *v36; // x8
  char *v37; // x9
  MethodInfo *_14_System_Collections_Generic_Dictionary_K__V__Remove; // x1
  Il2CppMethodPointer methodPointer; // x0
  __int64 v40; // [xsp+0h] [xbp-20h] BYREF
  char *v41; // [xsp+8h] [xbp-18h] BYREF
  char v42[4]; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v43; // [xsp+18h] [xbp-8h]

  v43 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method, cond);
    rgctx_data = method->rgctx_data;
  }
  native_size = (unsigned int)rgctx_data->_13_K->_2.native_size;
  memset((char *)&v40 - ((native_size + 15) & 0x1FFFFFFF0LL), 0, rgctx_data->_13_K->_2.native_size);
  if ( dic )
  {
    v11 = ((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_K__V__o *, System_Func_KeyValuePair_K__V___bool__o *))rgctx_data->_2_System_Linq_Enumerable_Where_KeyValuePair_K__V__->methodPointer)(
            dic,
            cond);
    _6_BasicHelper___c__22_K__V = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
    if ( (BYTE5(_6_BasicHelper___c__22_K__V->vtable[0].methodPtr) & 1) == 0 )
      _6_BasicHelper___c__22_K__V = (Il2CppClass *)sub_1C1C6BC(inited);
    if ( !_6_BasicHelper___c__22_K__V->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(_6_BasicHelper___c__22_K__V, v8);
    v14 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
    if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
      v14 = (Il2CppClass *)sub_1C1C6BC(inited);
    v15 = *((_QWORD *)v14->static_fields + 1);
    if ( !v15 )
    {
      v16 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
      if ( (BYTE5(v16->vtable[0].methodPtr) & 1) == 0 )
        v16 = (Il2CppClass *)sub_1C1C6BC(inited);
      if ( !v16->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(v16, v8);
      v17 = method->rgctx_data;
      v18 = (__int64)v17->_6_BasicHelper___c__22_K__V_;
      if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      {
        v18 = sub_1C1C6BC(inited);
        v17 = method->rgctx_data;
      }
      _5_System_Func_KeyValuePair_K__V___K = (__int64)v17->_5_System_Func_KeyValuePair_K__V___K_;
      v20 = **(_QWORD **)(v18 + 184);
      if ( (*(_BYTE *)(_5_System_Func_KeyValuePair_K__V___K + 309) & 1) == 0 )
        _5_System_Func_KeyValuePair_K__V___K = sub_1C1C6BC(inited);
      v15 = sub_1BCAA2C(_5_System_Func_KeyValuePair_K__V___K, v8, v9, v10);
      ((void (__fastcall *)(int64_t, __int64, MethodInfo *))method->rgctx_data->_8_System_Func_KeyValuePair_K__V___K___ctor->methodPointer)(
        v15,
        v20,
        method->rgctx_data->_7_BasicHelper___c__22_K__V___Remove_b__22_0);
      v28 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
      if ( (BYTE5(v28->vtable[0].methodPtr) & 1) == 0 )
        v28 = (Il2CppClass *)sub_1C1C6BC(v27);
      *((_QWORD *)v28->static_fields + 1) = v15;
      v29 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
      if ( (BYTE5(v29->vtable[0].methodPtr) & 1) == 0 )
        v29 = (Il2CppClass *)sub_1C1C6BC(v27);
      sub_1BCA784((PartyOrganizationUtility_o *)((char *)v29->static_fields + 8), v15, v21, v22, v23, v24, v25, v26);
    }
    v30 = ((__int64 (__fastcall *)(__int64, int64_t, long double))method->rgctx_data->_9_System_Linq_Enumerable_Select_KeyValuePair_K__V___K_->methodPointer)(
            v11,
            v15,
            inited);
    v31 = ((__int64 (__fastcall *)(__int64))method->rgctx_data->_11_System_Linq_Enumerable_ToArray_K_->methodPointer)(v30);
    if ( !v31 )
      sub_1BCAA3C(0LL, v32);
    v33 = *(_QWORD *)(v31 + 24);
    v34 = (_DWORD *)v31;
    if ( (int)v33 >= 1 )
    {
      v35 = 0LL;
      do
      {
        if ( v35 >= (unsigned int)v33 )
          sub_1BCAA44(v31, v32);
        memcpy(
          (char *)&v40 - ((native_size + 15) & 0x1FFFFFFF0LL),
          (char *)v34 + v35 * *(unsigned int *)(*(_QWORD *)v34 + 260LL) + 32,
          native_size);
        memcpy(
          (char *)&v40 - ((native_size + 15) & 0x1FFFFFFF0LL),
          (char *)&v40 - ((native_size + 15) & 0x1FFFFFFF0LL),
          native_size);
        memcpy(
          (char *)&v40 - ((native_size + 15) & 0x1FFFFFFF0LL),
          (char *)&v40 - ((native_size + 15) & 0x1FFFFFFF0LL),
          native_size);
        v36 = method->rgctx_data;
        v37 = (char *)&v40 - ((native_size + 15) & 0x1FFFFFFF0LL);
        if ( (v36->_13_K->_1.byval_arg.bits & 0x80000000) == 0 )
          v37 = *(char **)((char *)&v40 - ((native_size + 15) & 0x1FFFFFFF0LL));
        _14_System_Collections_Generic_Dictionary_K__V__Remove = v36->_14_System_Collections_Generic_Dictionary_K__V__Remove;
        methodPointer = _14_System_Collections_Generic_Dictionary_K__V__Remove->methodPointer;
        v41 = v37;
        v31 = ((__int64 (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_Dictionary_K__V__o *, char **, char *))_14_System_Collections_Generic_Dictionary_K__V__Remove->invoker_method)(
                methodPointer,
                _14_System_Collections_Generic_Dictionary_K__V__Remove,
                dic,
                &v41,
                v42);
        LODWORD(v33) = v34[6];
        ++v35;
      }
      while ( (__int64)v35 < (int)v33 );
    }
  }
}


void __fastcall BasicHelper__Remove_int__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        System_Func_KeyValuePair_K__V___bool__o *cond,
        const MethodInfo_2F01EAC *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x21
  long double inited; // q0
  Il2CppClass *_6_BasicHelper___c__22_K__V; // x8
  Il2CppClass *v12; // x0
  System_Func_T__TResult__o *v13; // x22
  Il2CppClass *v14; // x0
  const MethodInfo_2F01EAC_RGCTXs *rgctx_data; // x8
  __int64 v16; // x0
  __int64 _5_System_Func_KeyValuePair_K__V___K; // x8
  Il2CppObject *v18; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  long double v25; // q0
  Il2CppClass *v26; // x0
  Il2CppClass *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Int32_array *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x8
  System_Int32_array *v32; // x21
  unsigned __int64 v33; // x22

  if ( method->rgctx_data )
  {
    if ( !dic )
      return;
  }
  else
  {
    sub_1C1C718(method, cond);
    if ( !dic )
      return;
  }
  v9 = System_Linq_Enumerable__Where_KeyValuePair_int__object__(
         (System_Collections_Generic_IEnumerable_TSource__o *)dic,
         (System_Func_TSource__bool__o *)cond,
         (const MethodInfo_2F501F4 *)method->rgctx_data->_2_System_Linq_Enumerable_Where_KeyValuePair_K__V__);
  _6_BasicHelper___c__22_K__V = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
  if ( (BYTE5(_6_BasicHelper___c__22_K__V->vtable[0].methodPtr) & 1) == 0 )
    _6_BasicHelper___c__22_K__V = (Il2CppClass *)sub_1C1C6BC(inited);
  if ( !_6_BasicHelper___c__22_K__V->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_6_BasicHelper___c__22_K__V, v6);
  v12 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
  if ( (BYTE5(v12->vtable[0].methodPtr) & 1) == 0 )
    v12 = (Il2CppClass *)sub_1C1C6BC(inited);
  v13 = (System_Func_T__TResult__o *)*((_QWORD *)v12->static_fields + 1);
  if ( !v13 )
  {
    v14 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
    if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
      v14 = (Il2CppClass *)sub_1C1C6BC(inited);
    if ( !v14->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v14, v6);
    rgctx_data = method->rgctx_data;
    v16 = (__int64)rgctx_data->_6_BasicHelper___c__22_K__V_;
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    {
      v16 = sub_1C1C6BC(inited);
      rgctx_data = method->rgctx_data;
    }
    _5_System_Func_KeyValuePair_K__V___K = (__int64)rgctx_data->_5_System_Func_KeyValuePair_K__V___K_;
    v18 = **(Il2CppObject ***)(v16 + 184);
    if ( (*(_BYTE *)(_5_System_Func_KeyValuePair_K__V___K + 309) & 1) == 0 )
      _5_System_Func_KeyValuePair_K__V___K = sub_1C1C6BC(inited);
    v13 = (System_Func_T__TResult__o *)sub_1BCAA2C(_5_System_Func_KeyValuePair_K__V___K, v6, v7, v8);
    System_Func_KeyValuePair_int__object___int____ctor(
      v13,
      v18,
      (intptr_t)method->rgctx_data->_7_BasicHelper___c__22_K__V___Remove_b__22_0,
      (const MethodInfo_340D640 *)method->rgctx_data->_8_System_Func_KeyValuePair_K__V___K___ctor);
    v26 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
    if ( (BYTE5(v26->vtable[0].methodPtr) & 1) == 0 )
      v26 = (Il2CppClass *)sub_1C1C6BC(v25);
    *((_QWORD *)v26->static_fields + 1) = v13;
    v27 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
    if ( (BYTE5(v27->vtable[0].methodPtr) & 1) == 0 )
      v27 = (Il2CppClass *)sub_1C1C6BC(v25);
    sub_1BCA784(
      (PartyOrganizationUtility_o *)((char *)v27->static_fields + 8),
      (int64_t)v13,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___int_(
                                                               v9,
                                                               (System_Func_TSource__TResult__o *)v13,
                                                               (const MethodInfo_2F3C650 *)method->rgctx_data->_9_System_Linq_Enumerable_Select_KeyValuePair_K__V___K_);
  v29 = System_Linq_Enumerable__ToArray_int_(
          v28,
          (const MethodInfo_2F4B870 *)method->rgctx_data->_11_System_Linq_Enumerable_ToArray_K_);
  if ( !v29 )
    sub_1BCAA3C(0LL, v30);
  v31 = *(_QWORD *)&v29->max_length;
  v32 = v29;
  if ( (int)v31 >= 1 )
  {
    v33 = 0LL;
    do
    {
      if ( v33 >= (unsigned int)v31 )
        sub_1BCAA44(v29, v30);
      v29 = (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___Remove(
                                    (System_Collections_Generic_Dictionary_int__object__o *)dic,
                                    v32->m_Items[v33 + 1],
                                    (const MethodInfo_320736C *)method->rgctx_data->_14_System_Collections_Generic_Dictionary_K__V__Remove);
      LODWORD(v31) = v32->max_length;
      ++v33;
    }
    while ( (__int64)v33 < (int)v31 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BasicHelper__SetStopEffectCallBack(
        UnityEngine_GameObject_o *obj,
        bool isDestroy,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x22

  if ( (byte_4B1799C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, isDestroy, action);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B1799C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDestroy);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  Component_object = 0LL;
  if ( v9 )
  {
    if ( !obj )
      goto LABEL_14;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         obj,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v9 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, bool, System_Action_o *, Il2CppMethodPointer))Component_object->klass->vtable[8].method)(
        Component_object,
        isDestroy,
        action,
        Component_object->klass->vtable[9].methodPtr);
      return;
    }
LABEL_14:
    sub_1BCAA3C(v9, v10);
  }
  ActionExtensions__Call(action, 0LL);
}


System_Collections_Generic_List_T__o *__fastcall BasicHelper__Shuffle___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *list,
        const MethodInfo_2F026B8 *method)
{
  const MethodInfo_2F026B8_RGCTXs *rgctx_data; // x26
  __int64 native_size; // x21
  void *v6; // x0
  __int64 v7; // x1
  int v8; // w28
  MethodInfo *_1_System_Collections_Generic_List_T__get_Item; // x1
  void (__fastcall *methodPointer)(); // x0
  int32_t v11; // w0
  int32_t v12; // w26
  MethodInfo *v13; // x1
  void (__fastcall *v14)(); // x0
  const MethodInfo_2F026B8_RGCTXs *v15; // x8
  char *v16; // x4
  MethodInfo *_4_System_Collections_Generic_List_T__set_Item; // x1
  Il2CppMethodPointer v18; // x0
  const MethodInfo_2F026B8_RGCTXs *v19; // x8
  char *v20; // x4
  MethodInfo *v21; // x1
  Il2CppMethodPointer v22; // x0
  __int64 v24; // [xsp+0h] [xbp-30h] BYREF
  unsigned __int64 StatusReg; // [xsp+8h] [xbp-28h]
  int *v26; // [xsp+10h] [xbp-20h] BYREF
  char *v27; // [xsp+18h] [xbp-18h]
  int v28; // [xsp+24h] [xbp-Ch] BYREF
  __int64 v29; // [xsp+28h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v29 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method, method);
    rgctx_data = method->rgctx_data;
  }
  native_size = (unsigned int)rgctx_data->_2_T->_2.native_size;
  v6 = memset((char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL), 0, rgctx_data->_2_T->_2.native_size);
  if ( !list )
    sub_1BCAA3C(v6, v7);
  if ( ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))rgctx_data->_3_System_Collections_Generic_List_T__get_Count->methodPointer)(list) >= 1 )
  {
    v8 = 0;
    do
    {
      _1_System_Collections_Generic_List_T__get_Item = method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item;
      methodPointer = _1_System_Collections_Generic_List_T__get_Item->methodPointer;
      v28 = v8;
      v26 = &v28;
      v27 = (char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL);
      _1_System_Collections_Generic_List_T__get_Item->invoker_method(
        methodPointer,
        _1_System_Collections_Generic_List_T__get_Item,
        list,
        (void **)&v26,
        v27);
      memcpy(
        (char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL),
        (char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL),
        native_size);
      v11 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_3_System_Collections_Generic_List_T__get_Count->methodPointer)(list);
      v12 = UnityEngine_Random__Range_70113984(0, v11, 0LL);
      v13 = method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item;
      v14 = v13->methodPointer;
      v28 = v12;
      v26 = &v28;
      v27 = (char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL);
      v13->invoker_method(v14, v13, list, (void **)&v26, v27);
      v15 = method->rgctx_data;
      v16 = (char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL);
      if ( (v15->_2_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v16 = *(char **)((char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL));
      _4_System_Collections_Generic_List_T__set_Item = v15->_4_System_Collections_Generic_List_T__set_Item;
      v18 = _4_System_Collections_Generic_List_T__set_Item->methodPointer;
      v28 = v8;
      v26 = &v28;
      v27 = v16;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int **))_4_System_Collections_Generic_List_T__set_Item->invoker_method)(
        v18,
        _4_System_Collections_Generic_List_T__set_Item,
        list,
        &v26);
      memcpy(
        (char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL),
        (char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL),
        native_size);
      v19 = method->rgctx_data;
      v20 = (char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL);
      v21 = v19->_4_System_Collections_Generic_List_T__set_Item;
      v22 = v21->methodPointer;
      if ( (v19->_2_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v20 = *(char **)((char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL));
      v28 = v12;
      v26 = &v28;
      v27 = v20;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int **))v21->invoker_method)(
        v22,
        v21,
        list,
        &v26);
      ++v8;
    }
    while ( v8 < ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_3_System_Collections_Generic_List_T__get_Count->methodPointer)(list) );
  }
  return list;
}


System_Collections_Generic_List_T__o *__fastcall BasicHelper__Shuffle_int_(
        System_Collections_Generic_List_T__o *list,
        const MethodInfo_2F02518 *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w21
  int32_t Item; // w22
  int32_t v6; // w23
  int32_t v7; // w0

  v3 = (System_Collections_Generic_List_int__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1C1C718(method, method);
  if ( !v3 )
    sub_1BCAA3C(list, method);
  if ( v3->fields._size >= 1 )
  {
    v4 = 0;
    do
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v3,
               v4,
               (const MethodInfo_3584948 *)method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item);
      v6 = UnityEngine_Random__Range_70113984(0, v3->fields._size, 0LL);
      v7 = System_Collections_Generic_List_int___get_Item(
             v3,
             v6,
             (const MethodInfo_3584948 *)method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item);
      System_Collections_Generic_List_int___set_Item(
        v3,
        v4,
        v7,
        (const MethodInfo_358499C *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      System_Collections_Generic_List_int___set_Item(
        v3,
        v6,
        Item,
        (const MethodInfo_358499C *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      ++v4;
    }
    while ( v4 < v3->fields._size );
  }
  return (System_Collections_Generic_List_T__o *)v3;
}


System_Collections_Generic_List_T__o *__fastcall BasicHelper__Shuffle_object_(
        System_Collections_Generic_List_T__o *list,
        const MethodInfo_2F025E8 *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w21
  Il2CppObject *Item; // x22
  int32_t v6; // w23
  Il2CppObject *v7; // x0

  v3 = (System_Collections_Generic_List_object__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1C1C718(method, method);
  if ( !v3 )
    sub_1BCAA3C(list, method);
  if ( v3->fields._size >= 1 )
  {
    v4 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v3,
               v4,
               (const MethodInfo_35A198C *)method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item);
      v6 = UnityEngine_Random__Range_70113984(0, v3->fields._size, 0LL);
      v7 = System_Collections_Generic_List_object___get_Item(
             v3,
             v6,
             (const MethodInfo_35A198C *)method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item);
      System_Collections_Generic_List_object___set_Item(
        v3,
        v4,
        v7,
        (const MethodInfo_35A19E0 *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      System_Collections_Generic_List_object___set_Item(
        v3,
        v6,
        Item,
        (const MethodInfo_35A19E0 *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      ++v4;
    }
    while ( v4 < v3->fields._size );
  }
  return (System_Collections_Generic_List_T__o *)v3;
}


System_Collections_Generic_List_T__o *__fastcall BasicHelper__StableSort___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__int__o *priorityFunc,
        bool isDescending,
        const MethodInfo_2F02A74 *method)
{
  const MethodInfo_2F02A74_RGCTXs *rgctx_data; // x23
  __int64 native_size; // x2
  _QWORD *v10; // x24
  _QWORD *v11; // x25
  int v12; // w0
  const MethodInfo_2F02A74_RGCTXs *v13; // x8
  MethodInfo *_3_System_Collections_Generic_List_T__get_Item; // x1
  Il2CppMethodPointer methodPointer; // x8
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo_2F02A74_RGCTXs *v18; // x8
  MethodInfo *_5_System_Func_T__int__Invoke; // x1
  Il2CppClass *_4_T; // x9
  __int64 v21; // x8
  void (__fastcall *v22)(); // x0
  int v23; // w26
  unsigned int v24; // w28
  MethodInfo *v25; // x1
  void (__fastcall *v26)(); // x0
  size_t v27; // w23
  const void *v28; // x27
  const MethodInfo_2F02A74_RGCTXs *v29; // x8
  __int64 v30; // x9
  MethodInfo *v31; // x1
  void (__fastcall *v32)(); // x0
  int v33; // w23
  _BOOL4 v34; // w8
  int v35; // w25
  MethodInfo *v36; // x1
  void (__fastcall *v37)(); // x0
  MethodInfo *v38; // x1
  void (__fastcall *v39)(); // x0
  unsigned int bits; // w9
  __int64 v41; // x8
  const MethodInfo_2F02A74_RGCTXs *v42; // x8
  __int64 v43; // x4
  MethodInfo *_7_System_Collections_Generic_List_T__Insert; // x1
  Il2CppMethodPointer v45; // x0
  __int64 v47; // [xsp+0h] [xbp-50h] BYREF
  unsigned __int64 StatusReg; // [xsp+8h] [xbp-48h]
  _QWORD *v49; // [xsp+10h] [xbp-40h]
  int v50; // [xsp+1Ch] [xbp-34h]
  void *v51; // [xsp+20h] [xbp-30h]
  __int64 v52; // [xsp+28h] [xbp-28h]
  int *v53; // [xsp+30h] [xbp-20h] BYREF
  _QWORD *v54; // [xsp+38h] [xbp-18h]
  int v55; // [xsp+44h] [xbp-Ch] BYREF
  __int64 v56; // [xsp+48h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v56 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method, priorityFunc);
    rgctx_data = method->rgctx_data;
  }
  native_size = (unsigned int)rgctx_data->_4_T->_2.native_size;
  v10 = (__int64 *)((char *)&v47 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v11 = v10;
  v51 = v10;
  v52 = native_size;
  memset(v10, 0, native_size);
  if ( !list
    || ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list) < 2 )
  {
    return list;
  }
  v12 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list);
  v13 = method->rgctx_data;
  v50 = v12;
  _3_System_Collections_Generic_List_T__get_Item = v13->_3_System_Collections_Generic_List_T__get_Item;
  methodPointer = _3_System_Collections_Generic_List_T__get_Item->methodPointer;
  v55 = 0;
  v53 = &v55;
  v54 = v10;
  v16 = ((__int64 (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int **, _QWORD *))_3_System_Collections_Generic_List_T__get_Item->invoker_method)(
          methodPointer,
          _3_System_Collections_Generic_List_T__get_Item,
          list,
          &v53,
          v10);
  if ( !priorityFunc )
    sub_1BCAA3C(v16, v17);
  v18 = method->rgctx_data;
  _4_T = v18->_4_T;
  _5_System_Func_T__int__Invoke = v18->_5_System_Func_T__int__Invoke;
  v21 = (__int64)v10;
  v22 = _5_System_Func_T__int__Invoke->methodPointer;
  if ( (_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
    v21 = *v10;
  v53 = (int *)v21;
  _5_System_Func_T__int__Invoke->invoker_method(v22, _5_System_Func_T__int__Invoke, priorityFunc, (void **)&v53, &v55);
  if ( v50 < 2 )
    return list;
  v23 = v55;
  v24 = 1;
  v49 = v10;
  do
  {
    v25 = method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item;
    v26 = v25->methodPointer;
    v55 = v24;
    v53 = &v55;
    v54 = v10;
    v25->invoker_method(v26, v25, list, (void **)&v53, v10);
    v28 = v51;
    v27 = v52;
    memcpy(v51, v10, v52);
    memcpy(v11, v28, v27);
    v29 = method->rgctx_data;
    v30 = (__int64)v11;
    if ( (v29->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v30 = *v11;
    v31 = v29->_5_System_Func_T__int__Invoke;
    v32 = v31->methodPointer;
    v53 = (int *)v30;
    v31->invoker_method(v32, v31, priorityFunc, (void **)&v53, &v55);
    v33 = v55;
    v34 = v55 > v23;
    if ( !isDescending )
      v34 = v55 < v23;
    if ( !v34 )
      goto LABEL_30;
    ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_6_System_Collections_Generic_List_T__RemoveAt->methodPointer)(
      list,
      v24);
    v35 = 0;
    while ( 1 )
    {
      v36 = method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item;
      v37 = v36->methodPointer;
      v55 = v35;
      v53 = &v55;
      v54 = v10;
      v36->invoker_method(v37, v36, list, (void **)&v53, v10);
      v38 = method->rgctx_data->_5_System_Func_T__int__Invoke;
      v39 = v38->methodPointer;
      bits = method->rgctx_data->_4_T->_1.byval_arg.bits;
      v41 = (__int64)v10;
      if ( !isDescending )
        break;
      if ( (bits & 0x80000000) == 0 )
        v41 = *v10;
      v53 = (int *)v41;
      v38->invoker_method(v39, v38, priorityFunc, (void **)&v53, &v55);
      if ( v33 > v55 )
        goto LABEL_26;
LABEL_24:
      if ( v24 == ++v35 )
        goto LABEL_29;
    }
    if ( (bits & 0x80000000) == 0 )
      v41 = *v10;
    v53 = (int *)v41;
    v38->invoker_method(v39, v38, priorityFunc, (void **)&v53, &v55);
    if ( v33 >= v55 )
      goto LABEL_24;
LABEL_26:
    memcpy(v10, v51, v52);
    v42 = method->rgctx_data;
    v43 = (__int64)v10;
    if ( (v42->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v43 = *v10;
    _7_System_Collections_Generic_List_T__Insert = v42->_7_System_Collections_Generic_List_T__Insert;
    v45 = _7_System_Collections_Generic_List_T__Insert->methodPointer;
    v55 = v35;
    v53 = &v55;
    v54 = (_QWORD *)v43;
    ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int **))_7_System_Collections_Generic_List_T__Insert->invoker_method)(
      v45,
      _7_System_Collections_Generic_List_T__Insert,
      list,
      &v53);
LABEL_29:
    v11 = v49;
    v33 = v23;
LABEL_30:
    ++v24;
    v23 = v33;
  }
  while ( v24 != v50 );
  return list;
}


System_Collections_Generic_List_T__o *__fastcall BasicHelper__StableSort_object_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__int__o *priorityFunc,
        bool isDescending,
        const MethodInfo_2F028E0 *method)
{
  int32_t size; // w28
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  int v11; // w24
  int32_t i; // w23
  Il2CppObject *v13; // x25
  int v14; // w0
  _BOOL4 v15; // w8
  int v16; // w26
  int32_t v17; // w27
  Il2CppObject *v18; // x0
  int v19; // w0
  _BOOL4 v20; // w8

  if ( method->rgctx_data )
  {
    if ( !list )
      return list;
  }
  else
  {
    sub_1C1C718(method, priorityFunc);
    if ( !list )
      return list;
  }
  size = list->fields._size;
  if ( size >= 2 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)list,
             0,
             (const MethodInfo_35A198C *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
    if ( !priorityFunc )
      sub_1BCAA3C(Item, v10);
    v11 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD))priorityFunc->fields.m_target)(
            priorityFunc->fields.original_method_info,
            Item,
            *(_QWORD *)&priorityFunc->fields.extra_arg);
    for ( i = 1; i != size; ++i )
    {
      v13 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)list,
              i,
              (const MethodInfo_35A198C *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      v14 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD))priorityFunc->fields.m_target)(
              priorityFunc->fields.original_method_info,
              v13,
              *(_QWORD *)&priorityFunc->fields.extra_arg);
      v15 = v14 > v11;
      if ( !isDescending )
        v15 = v14 < v11;
      v16 = v14;
      if ( v15 )
      {
        System_Collections_Generic_List_object___RemoveAt(
          (System_Collections_Generic_List_object__o *)list,
          i,
          (const MethodInfo_35A3430 *)method->rgctx_data->_6_System_Collections_Generic_List_T__RemoveAt);
        v17 = 0;
        while ( 1 )
        {
          v18 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)list,
                  v17,
                  (const MethodInfo_35A198C *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
          v19 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD))priorityFunc->fields.m_target)(
                  priorityFunc->fields.original_method_info,
                  v18,
                  *(_QWORD *)&priorityFunc->fields.extra_arg);
          v20 = v16 > v19;
          if ( !isDescending )
            v20 = v16 < v19;
          if ( v20 )
            break;
          if ( i == ++v17 )
            goto LABEL_18;
        }
        System_Collections_Generic_List_object___Insert(
          (System_Collections_Generic_List_object__o *)list,
          v17,
          v13,
          (const MethodInfo_35A2A0C *)method->rgctx_data->_7_System_Collections_Generic_List_T__Insert);
LABEL_18:
        v16 = v11;
      }
      v11 = v16;
    }
  }
  return list;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BasicHelper__SubstringLast(
        System_Text_StringBuilder_o *self,
        int32_t len,
        const MethodInfo *method)
{
  int32_t Length; // w0
  System_String_o *v7; // x21
  int32_t v8; // w0

  if ( (byte_4B179A1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, *(_QWORD *)&len, method);
    byte_4B179A1 = 1;
  }
  if ( !self || System_Text_StringBuilder__get_Length(self, 0LL) < len )
    return (System_String_o *)StringLiteral_1/*""*/;
  Length = System_Text_StringBuilder__get_Length(self, 0LL);
  v7 = System_Text_StringBuilder__ToString_61559840(self, Length - len, len, 0LL);
  v8 = System_Text_StringBuilder__get_Length(self, 0LL);
  System_Text_StringBuilder__Remove(self, v8 - len, len, 0LL);
  return v7;
}


bool __fastcall BasicHelper__SynchronizeAnimation(
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
  self = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(self, selfAnimStr, 0LL);
  if ( !self )
    goto LABEL_13;
  self = (UnityEngine_Animation_o *)UnityEngine_AnimationState__get_wrapMode((UnityEngine_AnimationState_o *)self, 0LL);
  if ( !targetAnim )
    goto LABEL_13;
  v9 = (int)self;
  self = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(targetAnim, tgAnimStr, 0LL);
  if ( !self )
    goto LABEL_13;
  if ( v9 == UnityEngine_AnimationState__get_wrapMode((UnityEngine_AnimationState_o *)self, 0LL) )
  {
    self = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v8, selfAnimStr, 0LL);
    if ( !self )
      goto LABEL_13;
    length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)self, 0LL);
    self = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(targetAnim, tgAnimStr, 0LL);
    if ( !self )
      goto LABEL_13;
    if ( length == UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)self, 0LL) )
    {
      Item = UnityEngine_Animation__get_Item(v8, selfAnimStr, 0LL);
      self = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(targetAnim, tgAnimStr, 0LL);
      if ( self )
      {
        time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)self, 0LL);
        if ( Item )
        {
          UnityEngine_AnimationState__set_time(Item, time, 0LL);
          UnityEngine_Animation__Sample(v8, 0LL);
          UnityEngine_Animation__Play_69899248(v8, selfAnimStr, 0LL);
          return 1;
        }
      }
LABEL_13:
      sub_1BCAA3C(self, selfAnimStr);
    }
  }
  return 0;
}


bool __fastcall BasicHelper__SynchronizeAnimation_41846504(
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
  int32_t *v35; // x10
  __int64 v36; // x0
  long double v38; // q0
  SimpleAnimation_State_c *v39; // x8
  long double v40; // q8
  __int64 v41; // x9
  SimpleAnimation_State_c **v42; // x10
  __int64 p_method; // x0

  v8 = self;
  if ( (byte_4B1799A & 1) == 0 )
  {
    self = (SimpleAnimation_o *)sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, selfAnimStr, tgAnimStr);
    byte_4B1799A = 1;
  }
  if ( !v8 )
    goto LABEL_51;
  self = (SimpleAnimation_o *)SimpleAnimation__get_Item(v8, selfAnimStr, 0LL);
  if ( !self )
    goto LABEL_51;
  klass = self->klass;
  v10 = self;
  v11 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_9;
    }
    v13 = (__int64)(&klass[1]._1.klass + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v13 = sub_1C1C7C0(self, SimpleAnimation_State_TypeInfo, 15LL);
  }
  self = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
  if ( !targetAnim )
    goto LABEL_51;
  v14 = (int)self;
  self = (SimpleAnimation_o *)SimpleAnimation__get_Item(targetAnim, tgAnimStr, 0LL);
  if ( !self )
    goto LABEL_51;
  v15 = self->klass;
  v16 = self;
  v17 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v18 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_17;
    }
    v19 = (__int64)(&v15[1]._1.klass + 2 * *v18);
  }
  else
  {
LABEL_17:
    v19 = sub_1C1C7C0(self, SimpleAnimation_State_TypeInfo, 15LL);
  }
  if ( v14 != (*(unsigned int (__fastcall **)(SimpleAnimation_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8)) )
    return 0;
  self = (SimpleAnimation_o *)SimpleAnimation__get_Item(v8, selfAnimStr, 0LL);
  if ( !self )
    goto LABEL_51;
  v20 = self->klass;
  v21 = self;
  v22 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    v23 = &v20->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v23 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_25;
    }
    v24 = (__int64)(&v20[1]._1.parent + 2 * *v23);
  }
  else
  {
LABEL_25:
    v24 = sub_1C1C7C0(self, SimpleAnimation_State_TypeInfo, 13LL);
  }
  LODWORD(v25) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(SimpleAnimation_o *, _QWORD))*(_QWORD *)v24)(v21, *(_QWORD *)(v24 + 8)));
  self = (SimpleAnimation_o *)SimpleAnimation__get_Item(targetAnim, tgAnimStr, 0LL);
  if ( !self )
LABEL_51:
    sub_1BCAA3C(self, selfAnimStr);
  v26 = self->klass;
  v27 = self;
  v28 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    v29 = &v26->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v29 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_32;
    }
    v30 = (__int64)(&v26[1]._1.parent + 2 * *v29);
  }
  else
  {
LABEL_32:
    v30 = sub_1C1C7C0(self, SimpleAnimation_State_TypeInfo, 13LL);
  }
  if ( v25 != (*(float (__fastcall **)(SimpleAnimation_o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8)) )
    return 0;
  Item = SimpleAnimation__get_Item(v8, selfAnimStr, 0LL);
  self = (SimpleAnimation_o *)SimpleAnimation__get_Item(targetAnim, tgAnimStr, 0LL);
  if ( !self )
    goto LABEL_51;
  v32 = self->klass;
  v33 = self;
  v34 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    v35 = &v32->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v35 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_40;
    }
    v36 = (__int64)(&v32->vtable._3_ToString.method + 2 * *v35);
  }
  else
  {
LABEL_40:
    v36 = sub_1C1C7C0(self, SimpleAnimation_State_TypeInfo, 3LL);
  }
  self = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
  if ( !Item )
    goto LABEL_51;
  v39 = Item->klass;
  v40 = v38;
  v41 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
  {
    v42 = (SimpleAnimation_State_c **)&v39->_1.interfaceOffsets->offset;
    while ( *(v42 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v41;
      v42 += 2;
      if ( !v41 )
        goto LABEL_48;
    }
    p_method = (__int64)&v39->vtable[*(_DWORD *)v42 + 4].method;
  }
  else
  {
LABEL_48:
    p_method = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(
    Item,
    *(_QWORD *)(p_method + 8),
    v40);
  SimpleAnimation__Sample(v8, 0LL);
  SimpleAnimation__Play_64539336(v8, selfAnimStr, 0LL);
  return 1;
}


Il2CppObject *__fastcall BasicHelper__TakeIf_object_(
        Il2CppObject *self,
        System_Predicate_T__o *match,
        const MethodInfo_2F02DD0 *method)
{
  Il2CppObject *v4; // x19

  v4 = self;
  if ( method->rgctx_data )
  {
    if ( !self )
      return 0LL;
  }
  else
  {
    self = (Il2CppObject *)sub_1C1C718(method, match);
    if ( !v4 )
      return 0LL;
  }
  if ( !match )
    sub_1BCAA3C(self, match);
  if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD))match->fields.m_target)(
          match->fields.original_method_info,
          v4,
          *(_QWORD *)&match->fields.extra_arg) & 1) == 0 )
    return 0LL;
  return v4;
}


System_String_o *__fastcall BasicHelper__ToCommaString(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B179A2 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v4, v5);
    byte_4B179A2 = 1;
  }
  v8 = value;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v6, 0LL);
}


System_String_o *__fastcall BasicHelper__ToCommaString_41849268(int64_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int64_t v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B179A3 & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v4, v5);
    byte_4B179A3 = 1;
  }
  v8 = value;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v8);
  return System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v6, 0LL);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BasicHelper__ToIterator___Il2CppFullySharedGenericType_(
        int32_t loopCount,
        System_Func_int__T__o *func,
        const MethodInfo_2F02F28 *method)
{
  __int64 v3; // x3
  long double v4; // q0
  const MethodInfo_2F02F28_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__ToIterator_d__31_T; // x0
  System_Collections_Generic_IEnumerable_T__o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method, func);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__ToIterator_d__31_T = (__int64)rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
  if ( (BYTE5(rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BasicHelper__ToIterator_d__31_T = sub_1C1C6BC(v4);
  v10 = (System_Collections_Generic_IEnumerable_T__o *)sub_1BCAA2C(_0_BasicHelper__ToIterator_d__31_T, func, method, v3);
  v11 = ((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *, __int64))method->rgctx_data->_1_BasicHelper__ToIterator_d__31_T___ctor->methodPointer)(
          v10,
          4294967294LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  sub_1A17DA0(
    v10,
    (char *)method->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 192,
    (unsigned int)loopCount);
  sub_1A17A24(v10, (char *)method->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 128, func);
  return v10;
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BasicHelper__ToIterator_float_(
        int32_t loopCount,
        System_Func_int__T__o *func,
        const MethodInfo_2F02EAC *method)
{
  __int64 v3; // x3
  long double v4; // q0
  const MethodInfo_2F02EAC_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__ToIterator_d__31_T; // x0
  BasicHelper__ToIterator_d__31_T__o *v10; // x0
  const MethodInfo_2F02EAC_RGCTXs *v11; // x8
  BasicHelper__ToIterator_d__31_T__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method, func);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__ToIterator_d__31_T = (__int64)rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
  if ( (BYTE5(rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BasicHelper__ToIterator_d__31_T = sub_1C1C6BC(v4);
  v10 = (BasicHelper__ToIterator_d__31_T__o *)sub_1BCAA2C(_0_BasicHelper__ToIterator_d__31_T, func, method, v3);
  v11 = method->rgctx_data;
  v12 = v10;
  BasicHelper__ToIterator_d__31_float____ctor(
    v10,
    -2,
    (const MethodInfo_321C44C *)v11->_1_BasicHelper__ToIterator_d__31_T___ctor);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  HIDWORD(v12->fields.__3__func) = loopCount;
  v12->fields.func = func;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->fields.func, (int64_t)func, v15, v16, v17, v18, v19, v20);
  return (System_Collections_Generic_IEnumerable_T__o *)v12;
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BasicHelper__ToIterator_object_(
        int32_t loopCount,
        System_Func_int__T__o *func,
        const MethodInfo_2F02E30 *method)
{
  __int64 v3; // x3
  long double v4; // q0
  const MethodInfo_2F02E30_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__ToIterator_d__31_T; // x0
  BasicHelper__ToIterator_d__31_T__o *v10; // x0
  const MethodInfo_2F02E30_RGCTXs *v11; // x8
  BasicHelper__ToIterator_d__31_T__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method, func);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__ToIterator_d__31_T = (__int64)rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
  if ( (BYTE5(rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BasicHelper__ToIterator_d__31_T = sub_1C1C6BC(v4);
  v10 = (BasicHelper__ToIterator_d__31_T__o *)sub_1BCAA2C(_0_BasicHelper__ToIterator_d__31_T, func, method, v3);
  v11 = method->rgctx_data;
  v12 = v10;
  BasicHelper__ToIterator_d__31_object____ctor(
    v10,
    -2,
    (const MethodInfo_321C28C *)v11->_1_BasicHelper__ToIterator_d__31_T___ctor);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  v12->fields.__3__loopCount = loopCount;
  v12->fields.__3__func = func;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->fields.__3__func, (int64_t)func, v15, v16, v17, v18, v19, v20);
  return (System_Collections_Generic_IEnumerable_T__o *)v12;
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__WaitCallUntilSatisfyFunc(
        System_Func_float__bool__o *funcCond,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B1799F & 1) == 0 )
  {
    sub_1BCA7E0(&BasicHelper__WaitCallUntilSatisfyFunc_d__37_TypeInfo, action, method);
    byte_4B1799F = 1;
  }
  v6 = sub_1BCAA2C(BasicHelper__WaitCallUntilSatisfyFunc_d__37_TypeInfo, action, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = funcCond;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)funcCond, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = action;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)action, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__WaitForEndOfFrameCall(
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B179A4 & 1) == 0 )
  {
    sub_1BCA7E0(&BasicHelper__WaitForEndOfFrameCall_d__44_TypeInfo, method, v2);
    byte_4B179A4 = 1;
  }
  v5 = sub_1BCAA2C(BasicHelper__WaitForEndOfFrameCall_d__44_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = action;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)action, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BasicHelper__DelayCall_d__35___ctor(
        BasicHelper__DelayCall_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BasicHelper__DelayCall_d__35__MoveNext(BasicHelper__DelayCall_d__35_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  int32_t _1__state; // w8
  float delay; // s8
  _BOOL4 isWaitEvenIfNoDelayTime; // w8
  UnityEngine_WaitForSeconds_o *v8; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  bool result; // w0

  if ( (byte_4B179A5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    byte_4B179A5 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
LABEL_8:
    ActionExtensions__Call(this->fields.action, 0LL);
    return 0;
  }
  if ( !_1__state )
  {
    delay = this->fields.delay;
    isWaitEvenIfNoDelayTime = this->fields.isWaitEvenIfNoDelayTime;
    this->fields.__1__state = -1;
    if ( delay > 0.0 || isWaitEvenIfNoDelayTime )
    {
      v8 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
      UnityEngine_WaitForSeconds___ctor(v8, delay, 0LL);
      this->fields.__2__current = (Il2CppObject *)v8;
      p__2__current = &this->fields.__2__current;
      sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v8, v10, v11, v12, v13, v14, v15);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    goto LABEL_8;
  }
  return 0;
}


Il2CppObject *__fastcall BasicHelper__DelayCall_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__DelayCall_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BasicHelper__DelayCall_d__35__System_Collections_IEnumerator_Reset(
        BasicHelper__DelayCall_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BasicHelper__DelayCall_d__35_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BasicHelper__DelayCall_d__35__System_Collections_IEnumerator_get_Current(
        BasicHelper__DelayCall_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BasicHelper__DelayCall_d__35__System_IDisposable_Dispose(
        BasicHelper__DelayCall_d__35_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument____ctor(
        BasicHelper__DelayCall_d__36_T__o *this,
        int32_t 1__state,
        const MethodInfo_30EBE88 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___MoveNext(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_30EBEB4 *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  int32_t _1__state; // w8
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  bool result; // w0
  void *monitor; // x9
  __int128 v17; // q0
  System_Action_T__o *action; // x0
  MethodInfo *_3_ActionExtensions_Call_T; // x2
  HutongGames_PlayMaker_Actions_ShowAllEx_DamageFuncArgument_o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B1BCF1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    byte_4B1BCF1 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    monitor = this[1].monitor;
    v17 = *(_OWORD *)&this->fields.arg;
    action = this->fields.action;
    this->fields.__1__state = -1;
    _3_ActionExtensions_Call_T = method->klass->rgctx_data->_3_ActionExtensions_Call_T_;
    *(_OWORD *)&v20.fields.perf = v17;
    *(_QWORD *)&v20.fields.damageIndex = monitor;
    ActionExtensions__Call_ShowAllEx_DamageFuncArgument_(
      action,
      &v20,
      (const MethodInfo_2E65700 *)_3_ActionExtensions_Call_T);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    delay = this->fields.delay;
    v8 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
    UnityEngine_WaitForSeconds___ctor(v8, delay, 0LL);
    this->fields.__2__current = (Il2CppObject *)v8;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v8, v9, v10, v11, v12, v13, v14);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_30EBF94 *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___System_Collections_IEnumerator_Reset(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_30EBF9C *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  System_NotSupportedException_o *v7; // x20

  v3 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_1BCAA2C(v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_1BCA908(v7, method);
}


Il2CppObject *__fastcall BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___System_Collections_IEnumerator_get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_30EBFD0 *method)
{
  return this->fields.__2__current;
}


void __fastcall BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___System_IDisposable_Dispose(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_30EBEB0 *method)
{
  ;
}


void __fastcall BasicHelper__DelayCall_d__36___Il2CppFullySharedGenericType____ctor(
        BasicHelper__DelayCall_d__36_T__o *this,
        int32_t 1__state,
        const MethodInfo_30EBBB8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  sub_1A17DA0(this, method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields, (unsigned int)1__state);
}


bool __fastcall BasicHelper__DelayCall_d__36___Il2CppFullySharedGenericType___MoveNext(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_30EBBFC *method)
{
  __int64 v2; // x2
  BasicHelper__DelayCall_d__36_T__RGCTXs *rgctx_data; // x8
  __int64 native_size; // x22
  _QWORD *v7; // x21
  int v8; // w8
  float v9; // s8
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  UnityEngine_WaitForSeconds_o *v13; // x21
  BasicHelper__DelayCall_d__36_T__c *klass; // x8
  bool v15; // w19
  __int64 v16; // x24
  const void *v17; // x0
  BasicHelper__DelayCall_d__36_T__RGCTXs *v18; // x8
  MethodInfo *_3_ActionExtensions_Call_T; // x1
  void (__fastcall *methodPointer)(); // x0
  __int64 v23[3]; // [xsp+8h] [xbp-28h] BYREF

  v23[2] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4B1BCF0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    byte_4B1BCF0 = 1;
  }
  rgctx_data = method->klass->rgctx_data;
  native_size = (unsigned int)rgctx_data->_2_T->_2.native_size;
  v7 = (__int64 *)((char *)&v23[-1] - ((native_size + 15) & 0x1FFFFFFF0LL));
  v8 = *(_DWORD *)sub_1BCA804(this, rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields);
  if ( v8 == 1 )
  {
    sub_1A17DA0(this, method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields, 0xFFFFFFFFLL);
    v16 = *(_QWORD *)sub_1BCA804(
                       this,
                       (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields + 96);
    v17 = (const void *)sub_1BCA804(
                          this,
                          (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields + 128);
    memcpy((char *)&v23[-1] - ((native_size + 15) & 0x1FFFFFFF0LL), v17, native_size);
    v18 = method->klass->rgctx_data;
    _3_ActionExtensions_Call_T = v18->_3_ActionExtensions_Call_T_;
    methodPointer = _3_ActionExtensions_Call_T->methodPointer;
    if ( (v18->_2_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v7 = (_QWORD *)*v7;
    v23[0] = v16;
    v23[1] = (__int64)v7;
    _3_ActionExtensions_Call_T->invoker_method(methodPointer, _3_ActionExtensions_Call_T, 0LL, (void **)v23, v7);
    return 0;
  }
  if ( v8 )
    return 0;
  sub_1A17DA0(this, method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields, 0xFFFFFFFFLL);
  v9 = *(float *)sub_1BCA804(
                   this,
                   (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields + 64);
  v13 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, v10, v11, v12);
  UnityEngine_WaitForSeconds___ctor(v13, v9, 0LL);
  sub_1A17A24(this, (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields + 32, v13);
  klass = method->klass;
  v15 = 1;
  sub_1A17DA0(this, klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields, 1LL);
  return v15;
}


Il2CppObject *__fastcall BasicHelper__DelayCall_d__36___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_30EBE04 *method)
{
  return *(Il2CppObject **)sub_1BCA804(
                             this,
                             (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields + 32);
}


void __fastcall __noreturn BasicHelper__DelayCall_d__36___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_30EBE2C *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  System_NotSupportedException_o *v7; // x20

  v3 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_1BCAA2C(v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_1BCA908(v7, method);
}


Il2CppObject *__fastcall BasicHelper__DelayCall_d__36___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_30EBE60 *method)
{
  return *(Il2CppObject **)sub_1BCA804(
                             this,
                             (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields + 32);
}


void __fastcall BasicHelper__DelayCall_d__36___Il2CppFullySharedGenericType___System_IDisposable_Dispose(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_30EBBF8 *method)
{
  ;
}


void __fastcall BasicHelper__DelayCall_d__36_object____ctor(
        BasicHelper__DelayCall_d__36_T__o *this,
        int32_t 1__state,
        const MethodInfo_30EBA8C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BasicHelper__DelayCall_d__36_object___MoveNext(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_30EBAB8 *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  int32_t _1__state; // w8
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  bool result; // w0

  if ( (byte_4B1BCEF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    byte_4B1BCEF = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    ActionExtensions__Call_object_(
      this->fields.action,
      this->fields.arg,
      (const MethodInfo_2E65588 *)method->klass->rgctx_data->_3_ActionExtensions_Call_T_);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    delay = this->fields.delay;
    v8 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
    UnityEngine_WaitForSeconds___ctor(v8, delay, 0LL);
    this->fields.__2__current = (Il2CppObject *)v8;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v8, v9, v10, v11, v12, v13, v14);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BasicHelper__DelayCall_d__36_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_30EBB74 *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BasicHelper__DelayCall_d__36_object___System_Collections_IEnumerator_Reset(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_30EBB7C *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  System_NotSupportedException_o *v7; // x20

  v3 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_1BCAA2C(v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_1BCA908(v7, method);
}


Il2CppObject *__fastcall BasicHelper__DelayCall_d__36_object___System_Collections_IEnumerator_get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_30EBBB0 *method)
{
  return this->fields.__2__current;
}


void __fastcall BasicHelper__DelayCall_d__36_object___System_IDisposable_Dispose(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_30EBAB4 *method)
{
  ;
}


void __fastcall BasicHelper__RealDelayCall_d__38___ctor(
        BasicHelper__RealDelayCall_d__38_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BasicHelper__RealDelayCall_d__38__MoveNext(
        BasicHelper__RealDelayCall_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  int32_t _1__state; // w8
  float delay; // s8
  UnityEngine_WaitForSecondsRealtime_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4B179A6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_WaitForSecondsRealtime_TypeInfo, method, v2);
    byte_4B179A6 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    action = this->fields.action;
    this->fields.__1__state = -1;
    ActionExtensions__Call(action, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    delay = this->fields.delay;
    v7 = (UnityEngine_WaitForSecondsRealtime_o *)sub_1BCAA2C(
                                                   UnityEngine_WaitForSecondsRealtime_TypeInfo,
                                                   method,
                                                   v2,
                                                   v3);
    UnityEngine_WaitForSecondsRealtime___ctor(v7, delay, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v7, v8, v9, v10, v11, v12, v13);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BasicHelper__RealDelayCall_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__RealDelayCall_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BasicHelper__RealDelayCall_d__38__System_Collections_IEnumerator_Reset(
        BasicHelper__RealDelayCall_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BasicHelper__RealDelayCall_d__38_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BasicHelper__RealDelayCall_d__38__System_Collections_IEnumerator_get_Current(
        BasicHelper__RealDelayCall_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BasicHelper__RealDelayCall_d__38__System_IDisposable_Dispose(
        BasicHelper__RealDelayCall_d__38_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BasicHelper__RealDelayCall_d__39___Il2CppFullySharedGenericType____ctor(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        int32_t 1__state,
        const MethodInfo_30FDA6C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  sub_1A17DA0(
    this,
    method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields,
    (unsigned int)1__state);
}


bool __fastcall BasicHelper__RealDelayCall_d__39___Il2CppFullySharedGenericType___MoveNext(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_30FDAB0 *method)
{
  __int64 v2; // x2
  BasicHelper__RealDelayCall_d__39_T__RGCTXs *rgctx_data; // x8
  __int64 native_size; // x22
  _QWORD *v7; // x21
  int v8; // w8
  float v9; // s8
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  UnityEngine_WaitForSecondsRealtime_o *v13; // x21
  BasicHelper__RealDelayCall_d__39_T__c *klass; // x8
  bool v15; // w19
  __int64 v16; // x24
  const void *v17; // x0
  BasicHelper__RealDelayCall_d__39_T__RGCTXs *v18; // x8
  MethodInfo *_3_ActionExtensions_Call_T; // x1
  void (__fastcall *methodPointer)(); // x0
  __int64 v23[3]; // [xsp+8h] [xbp-28h] BYREF

  v23[2] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4B1BD24 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_WaitForSecondsRealtime_TypeInfo, method, v2);
    byte_4B1BD24 = 1;
  }
  rgctx_data = method->klass->rgctx_data;
  native_size = (unsigned int)rgctx_data->_2_T->_2.native_size;
  v7 = (__int64 *)((char *)&v23[-1] - ((native_size + 15) & 0x1FFFFFFF0LL));
  v8 = *(_DWORD *)sub_1BCA804(this, rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields);
  if ( v8 == 1 )
  {
    sub_1A17DA0(this, method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields, 0xFFFFFFFFLL);
    v16 = *(_QWORD *)sub_1BCA804(
                       this,
                       (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields + 96);
    v17 = (const void *)sub_1BCA804(
                          this,
                          (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields + 128);
    memcpy((char *)&v23[-1] - ((native_size + 15) & 0x1FFFFFFF0LL), v17, native_size);
    v18 = method->klass->rgctx_data;
    _3_ActionExtensions_Call_T = v18->_3_ActionExtensions_Call_T_;
    methodPointer = _3_ActionExtensions_Call_T->methodPointer;
    if ( (v18->_2_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v7 = (_QWORD *)*v7;
    v23[0] = v16;
    v23[1] = (__int64)v7;
    _3_ActionExtensions_Call_T->invoker_method(methodPointer, _3_ActionExtensions_Call_T, 0LL, (void **)v23, v7);
    return 0;
  }
  if ( v8 )
    return 0;
  sub_1A17DA0(this, method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields, 0xFFFFFFFFLL);
  v9 = *(float *)sub_1BCA804(
                   this,
                   (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields + 64);
  v13 = (UnityEngine_WaitForSecondsRealtime_o *)sub_1BCAA2C(UnityEngine_WaitForSecondsRealtime_TypeInfo, v10, v11, v12);
  UnityEngine_WaitForSecondsRealtime___ctor(v13, v9, 0LL);
  sub_1A17A24(this, (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields + 32, v13);
  klass = method->klass;
  v15 = 1;
  sub_1A17DA0(this, klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields, 1LL);
  return v15;
}


Il2CppObject *__fastcall BasicHelper__RealDelayCall_d__39___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_30FDCB8 *method)
{
  return *(Il2CppObject **)sub_1BCA804(
                             this,
                             (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields + 32);
}


void __fastcall __noreturn BasicHelper__RealDelayCall_d__39___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_30FDCE0 *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  System_NotSupportedException_o *v7; // x20

  v3 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_1BCAA2C(v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_1BCA908(v7, method);
}


Il2CppObject *__fastcall BasicHelper__RealDelayCall_d__39___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_30FDD14 *method)
{
  return *(Il2CppObject **)sub_1BCA804(
                             this,
                             (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__39_T_->_1.fields + 32);
}


void __fastcall BasicHelper__RealDelayCall_d__39___Il2CppFullySharedGenericType___System_IDisposable_Dispose(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_30FDAAC *method)
{
  ;
}


void __fastcall BasicHelper__RealDelayCall_d__39_object____ctor(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        int32_t 1__state,
        const MethodInfo_30FD940 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BasicHelper__RealDelayCall_d__39_object___MoveNext(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_30FD96C *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  int32_t _1__state; // w8
  float delay; // s8
  UnityEngine_WaitForSecondsRealtime_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  bool result; // w0

  if ( (byte_4B1BD23 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_WaitForSecondsRealtime_TypeInfo, method, v2);
    byte_4B1BD23 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    ActionExtensions__Call_object_(
      this->fields.action,
      this->fields.arg,
      (const MethodInfo_2E65588 *)method->klass->rgctx_data->_3_ActionExtensions_Call_T_);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    delay = this->fields.delay;
    v8 = (UnityEngine_WaitForSecondsRealtime_o *)sub_1BCAA2C(
                                                   UnityEngine_WaitForSecondsRealtime_TypeInfo,
                                                   method,
                                                   v2,
                                                   v3);
    UnityEngine_WaitForSecondsRealtime___ctor(v8, delay, 0LL);
    this->fields.__2__current = (Il2CppObject *)v8;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v8, v9, v10, v11, v12, v13, v14);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BasicHelper__RealDelayCall_d__39_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_30FDA28 *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BasicHelper__RealDelayCall_d__39_object___System_Collections_IEnumerator_Reset(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_30FDA30 *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  System_NotSupportedException_o *v7; // x20

  v3 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_1BCAA2C(v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_1BCA908(v7, method);
}


Il2CppObject *__fastcall BasicHelper__RealDelayCall_d__39_object___System_Collections_IEnumerator_get_Current(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_30FDA64 *method)
{
  return this->fields.__2__current;
}


void __fastcall BasicHelper__RealDelayCall_d__39_object___System_IDisposable_Dispose(
        BasicHelper__RealDelayCall_d__39_T__o *this,
        const MethodInfo_30FD968 *method)
{
  ;
}


void __fastcall BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType____ctor(
        BasicHelper__ToIterator_d__31_T__o *this,
        int32_t 1__state,
        const MethodInfo_321C620 *method)
{
  unsigned int CurrentManagedThreadId; // w0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  sub_1A17DA0(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields, (unsigned int)1__state);
  CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
  sub_1A17DA0(
    this,
    (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 64,
    CurrentManagedThreadId);
}


bool __fastcall BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___MoveNext(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C68C *method)
{
  BasicHelper__ToIterator_d__31_T__RGCTXs *rgctx_data; // x8
  __int64 native_size; // x21
  int v6; // w8
  BasicHelper__ToIterator_d__31_T__o *v7; // x0
  __int64 v8; // x2
  BasicHelper__ToIterator_d__31_T__RGCTXs *v9; // x8
  int v10; // w9
  int v11; // w23
  void *v12; // x23
  int *v13; // x0
  __int64 v14; // x1
  MethodInfo *_2_System_Func_int__T__Invoke; // x1
  int v16; // w8
  void (__fastcall *methodPointer)(); // x0
  BasicHelper__ToIterator_d__31_T__c *klass; // x8
  bool v19; // w20
  int *v21; // [xsp+0h] [xbp-20h] BYREF
  char *v22; // [xsp+8h] [xbp-18h]
  int v23; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v24; // [xsp+18h] [xbp-8h]

  v24 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->klass->rgctx_data;
  native_size = (unsigned int)rgctx_data->_3_T->_2.native_size;
  v6 = *(_DWORD *)sub_1BCA804(this, rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields);
  if ( v6 == 1 )
  {
    sub_1A17DA0(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields, 0xFFFFFFFFLL);
    v10 = *(_DWORD *)sub_1BCA804(
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
    sub_1A17DA0(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields, 0xFFFFFFFFLL);
    if ( !*(_QWORD *)sub_1BCA804(
                       this,
                       (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 96) )
      return 0;
    v7 = this;
    v8 = 0LL;
    v9 = method->klass->rgctx_data;
  }
  sub_1A17DA0(v7, (char *)v9->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 224, v8);
  v11 = *(_DWORD *)sub_1BCA804(
                     this,
                     (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 224);
  if ( v11 >= *(_DWORD *)sub_1BCA804(
                           this,
                           (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 160) )
    return 0;
  v12 = *(void **)sub_1BCA804(
                    this,
                    (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 96);
  v13 = (int *)sub_1BCA804(
                 this,
                 (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 224);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  _2_System_Func_int__T__Invoke = method->klass->rgctx_data->_2_System_Func_int__T__Invoke;
  v16 = *v13;
  methodPointer = _2_System_Func_int__T__Invoke->methodPointer;
  v23 = v16;
  v21 = &v23;
  v22 = (char *)&v21 - ((native_size + 15) & 0x1FFFFFFF0LL);
  _2_System_Func_int__T__Invoke->invoker_method(methodPointer, _2_System_Func_int__T__Invoke, v12, (void **)&v21, v22);
  sub_1BCA808(
    this,
    (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 32,
    (char *)&v21 - ((native_size + 15) & 0x1FFFFFFF0LL),
    (unsigned int)native_size);
  klass = method->klass;
  v19 = 1;
  sub_1A17DA0(this, klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields, 1LL);
  return v19;
}


System_Collections_Generic_IEnumerator_T__o *__fastcall BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_T__GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321CA5C *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  int v7; // w21
  BasicHelper__ToIterator_d__31_T__o *v8; // x21
  __int64 _0_BasicHelper__ToIterator_d__31_T; // x0
  unsigned int *v10; // x0
  __int64 v11; // x1
  _QWORD *v12; // x0

  if ( *(_DWORD *)sub_1BCA804(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields) == -2
    && (v7 = *(_DWORD *)sub_1BCA804(
                          this,
                          (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 64),
        v7 == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    sub_1A17DA0(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields, 0LL);
    v8 = this;
  }
  else
  {
    _0_BasicHelper__ToIterator_d__31_T = (__int64)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
    if ( (*(_BYTE *)(_0_BasicHelper__ToIterator_d__31_T + 309) & 1) == 0 )
      _0_BasicHelper__ToIterator_d__31_T = sub_1C1C6BC();
    v8 = (BasicHelper__ToIterator_d__31_T__o *)sub_1BCAA2C(_0_BasicHelper__ToIterator_d__31_T, v4, v5, v6);
    ((void (__fastcall *)(BasicHelper__ToIterator_d__31_T__o *, _QWORD))method->klass->rgctx_data->_4_BasicHelper__ToIterator_d__31_T___ctor->methodPointer)(
      v8,
      0LL);
  }
  v10 = (unsigned int *)sub_1BCA804(
                          this,
                          (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 192);
  if ( !v8 )
    sub_1BCAA3C(v10, v11);
  sub_1A17DA0(v8, (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 160, *v10);
  v12 = (_QWORD *)sub_1BCA804(
                    this,
                    (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 128);
  sub_1A17A24(v8, (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 96, *v12);
  return (System_Collections_Generic_IEnumerator_T__o *)v8;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_T__get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C8E4 *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x8
  __int64 v5; // x20
  const void *v6; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v7; // x0 OVERLAPPED
  void *v8; // x1
  _QWORD v9[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v9[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v4 = *(_QWORD **)(*(_QWORD *)(v2 + 32) + 192LL);
  v5 = *(unsigned int *)(v4[3] + 252LL);
  v6 = (const void *)sub_1BCA804(this, *(_QWORD *)(*v4 + 128LL) + 32LL);
  memcpy((char *)v9 - ((v5 + 15) & 0x1FFFFFFF0LL), v6, v5);
  v7 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                   (void *)method,
                                                                   (char *)v9 - ((v5 + 15) & 0x1FFFFFFF0LL),
                                                                   v5);
  result.monitor = v8;
  result.klass = v7;
  return result;
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___System_Collections_IEnumerable_GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321CBA8 *method)
{
  return (System_Collections_IEnumerator_o *)((__int64 (__fastcall *)(BasicHelper__ToIterator_d__31_T__o *))method->klass->rgctx_data->_6_BasicHelper__ToIterator_d__31_T__System_Collections_Generic_IEnumerable_T__GetEnumerator->methodPointer)(this);
}


void __fastcall __noreturn BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C984 *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  System_NotSupportedException_o *v7; // x20

  v3 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_1BCAA2C(v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_1BCA908(v7, method);
}


Il2CppObject *__fastcall BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C9B8 *method)
{
  BasicHelper__ToIterator_d__31_T__RGCTXs *rgctx_data; // x8
  __int64 native_size; // x20
  const void *v5; // x0
  _QWORD v7[2]; // [xsp+0h] [xbp-10h] BYREF

  v7[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->klass->rgctx_data;
  native_size = (unsigned int)rgctx_data->_3_T->_2.native_size;
  v5 = (const void *)sub_1BCA804(this, (char *)rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 32);
  memcpy((char *)v7 - ((native_size + 15) & 0x1FFFFFFF0LL), v5, native_size);
  return (Il2CppObject *)j_il2cpp_value_box_0(
                           method->klass->rgctx_data->_3_T,
                           (char *)v7 - ((native_size + 15) & 0x1FFFFFFF0LL));
}


void __fastcall BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___System_IDisposable_Dispose(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C688 *method)
{
  ;
}


void __fastcall BasicHelper__ToIterator_d__31_float____ctor(
        BasicHelper__ToIterator_d__31_T__o *this,
        int32_t 1__state,
        const MethodInfo_321C44C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  LODWORD(this->fields.__2__current) = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BasicHelper__ToIterator_d__31_float___MoveNext(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C484 *method)
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
    v5 = 0LL;
    this->fields.loopCount = 0;
  }
  if ( (int)v5 >= SLODWORD(this->fields.__3__func) )
    return 0;
  v7 = *(_QWORD *)&this->fields.__l__initialThreadId;
  if ( !v7 )
    sub_1BCAA3C(this, v5);
  v8 = (*(float (__fastcall **)(_QWORD))(v7 + 24))(*(_QWORD *)(v7 + 64));
  result = 1;
  *((float *)&this->fields.__1__state + 1) = v8;
  this->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_T__o *__fastcall BasicHelper__ToIterator_d__31_float___System_Collections_Generic_IEnumerable_T__GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C574 *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  int _2__current; // w21
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  BasicHelper__ToIterator_d__31_T__o *v11; // x20
  __int64 _0_BasicHelper__ToIterator_d__31_T; // x0
  struct System_Func_int__T__o *func; // x1

  if ( this->fields.__1__state == -2
    && (_2__current = (int)this->fields.__2__current, _2__current == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v11 = this;
  }
  else
  {
    _0_BasicHelper__ToIterator_d__31_T = (__int64)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
    if ( (*(_BYTE *)(_0_BasicHelper__ToIterator_d__31_T + 309) & 1) == 0 )
      _0_BasicHelper__ToIterator_d__31_T = sub_1C1C6BC();
    v11 = (BasicHelper__ToIterator_d__31_T__o *)sub_1BCAA2C(_0_BasicHelper__ToIterator_d__31_T, method, v2, v3);
    System_Object___ctor((Il2CppObject *)v11, 0LL);
    v11->fields.__1__state = 0;
    LODWORD(v11->fields.__2__current) = System_Environment__get_CurrentManagedThreadId(0LL);
  }
  LODWORD(v11->fields.__3__func) = HIDWORD(this->fields.__3__func);
  func = this->fields.func;
  *(_QWORD *)&v11->fields.__l__initialThreadId = func;
  sub_1BCA784((PartyOrganizationUtility_o *)&v11->fields.__l__initialThreadId, (int64_t)func, v2, v3, v7, v8, v9, v10);
  return (System_Collections_Generic_IEnumerator_T__o *)v11;
}


float __fastcall BasicHelper__ToIterator_d__31_float___System_Collections_Generic_IEnumerator_T__get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C510 *method)
{
  return *((float *)&this->fields.__1__state + 1);
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__ToIterator_d__31_float___System_Collections_IEnumerable_GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C610 *method)
{
  return (System_Collections_IEnumerator_o *)BasicHelper__ToIterator_d__31_float___System_Collections_Generic_IEnumerable_T__GetEnumerator(
                                               this,
                                               (const MethodInfo_321C574 *)method->klass->rgctx_data->_6_BasicHelper__ToIterator_d__31_T__System_Collections_Generic_IEnumerable_T__GetEnumerator);
}


void __fastcall __noreturn BasicHelper__ToIterator_d__31_float___System_Collections_IEnumerator_Reset(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C518 *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  System_NotSupportedException_o *v7; // x20

  v3 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_1BCAA2C(v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_1BCA908(v7, method);
}


Il2CppObject *__fastcall BasicHelper__ToIterator_d__31_float___System_Collections_IEnumerator_get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C54C *method)
{
  int v3; // [xsp+Ch] [xbp-4h] BYREF

  v3 = *(&this->fields.__1__state + 1);
  return (Il2CppObject *)j_il2cpp_value_box_0(method->klass->rgctx_data->_3_T, &v3);
}


void __fastcall BasicHelper__ToIterator_d__31_float___System_IDisposable_Dispose(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C480 *method)
{
  ;
}


void __fastcall BasicHelper__ToIterator_d__31_object____ctor(
        BasicHelper__ToIterator_d__31_T__o *this,
        int32_t 1__state,
        const MethodInfo_321C28C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BasicHelper__ToIterator_d__31_object___MoveNext(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C2C4 *method)
{
  int32_t _1__state; // w8
  struct System_Func_int__T__o *func; // x8
  __int64 v5; // x1
  int32_t i_5__2; // w8
  struct System_Func_int__T__o *v7; // x8
  Il2CppObject *v8; // x0
  Il2CppObject **p__2__current; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
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
    v5 = 0LL;
    this->fields._i_5__2 = 0;
  }
  if ( (int)v5 >= this->fields.loopCount )
    return 0;
  v7 = this->fields.func;
  if ( !v7 )
    sub_1BCAA3C(this, v5);
  v8 = (Il2CppObject *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *))v7->fields.m_target)(v7->fields.original_method_info);
  this->fields.__2__current = v8;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v8, v10, v11, v12, v13, v14, v15);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


System_Collections_Generic_IEnumerator_T__o *__fastcall BasicHelper__ToIterator_d__31_object___System_Collections_Generic_IEnumerable_T__GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C3A0 *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w21
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  BasicHelper__ToIterator_d__31_T__o *v11; // x20
  __int64 _0_BasicHelper__ToIterator_d__31_T; // x0
  struct System_Func_int__T__o *_3__func; // x1

  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v11 = this;
  }
  else
  {
    _0_BasicHelper__ToIterator_d__31_T = (__int64)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
    if ( (*(_BYTE *)(_0_BasicHelper__ToIterator_d__31_T + 309) & 1) == 0 )
      _0_BasicHelper__ToIterator_d__31_T = sub_1C1C6BC();
    v11 = (BasicHelper__ToIterator_d__31_T__o *)sub_1BCAA2C(_0_BasicHelper__ToIterator_d__31_T, method, v2, v3);
    System_Object___ctor((Il2CppObject *)v11, 0LL);
    v11->fields.__1__state = 0;
    v11->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
  }
  v11->fields.loopCount = this->fields.__3__loopCount;
  _3__func = this->fields.__3__func;
  v11->fields.func = _3__func;
  sub_1BCA784((PartyOrganizationUtility_o *)&v11->fields.func, (int64_t)_3__func, v2, v3, v7, v8, v9, v10);
  return (System_Collections_Generic_IEnumerator_T__o *)v11;
}


Il2CppObject *__fastcall BasicHelper__ToIterator_d__31_object___System_Collections_Generic_IEnumerator_T__get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C35C *method)
{
  return this->fields.__2__current;
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__ToIterator_d__31_object___System_Collections_IEnumerable_GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C43C *method)
{
  return (System_Collections_IEnumerator_o *)BasicHelper__ToIterator_d__31_object___System_Collections_Generic_IEnumerable_T__GetEnumerator(
                                               this,
                                               (const MethodInfo_321C3A0 *)method->klass->rgctx_data->_6_BasicHelper__ToIterator_d__31_T__System_Collections_Generic_IEnumerable_T__GetEnumerator);
}


void __fastcall __noreturn BasicHelper__ToIterator_d__31_object___System_Collections_IEnumerator_Reset(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C364 *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  System_NotSupportedException_o *v7; // x20

  v3 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_1BCAA2C(v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_1BCA908(v7, method);
}


Il2CppObject *__fastcall BasicHelper__ToIterator_d__31_object___System_Collections_IEnumerator_get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C398 *method)
{
  return this->fields.__2__current;
}


void __fastcall BasicHelper__ToIterator_d__31_object___System_IDisposable_Dispose(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_321C2C0 *method)
{
  ;
}


void __fastcall BasicHelper__WaitCallUntilSatisfyFunc_d__37___ctor(
        BasicHelper__WaitCallUntilSatisfyFunc_d__37_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BasicHelper__WaitCallUntilSatisfyFunc_d__37__MoveNext(
        BasicHelper__WaitCallUntilSatisfyFunc_d__37_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  int32_t _1__state; // w8
  float elapsedTime_5__2; // s8
  struct System_Func_float__bool__o *funcCond; // x8
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    elapsedTime_5__2 = this->fields._elapsedTime_5__2;
    this->fields.__1__state = -1;
    *(float *)&v2 = elapsedTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
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
    sub_1BCAA3C(this, method);
  if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, long double))funcCond->fields.m_target)(
          funcCond->fields.original_method_info,
          *(_QWORD *)&funcCond->fields.extra_arg,
          v2) & 1) != 0 )
  {
    ActionExtensions__Call(this->fields.action, 0LL);
    return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v7, v8, v9, v10, v11, v12);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall BasicHelper__WaitCallUntilSatisfyFunc_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__WaitCallUntilSatisfyFunc_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BasicHelper__WaitCallUntilSatisfyFunc_d__37__System_Collections_IEnumerator_Reset(
        BasicHelper__WaitCallUntilSatisfyFunc_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BasicHelper__WaitCallUntilSatisfyFunc_d__37_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BasicHelper__WaitCallUntilSatisfyFunc_d__37__System_Collections_IEnumerator_get_Current(
        BasicHelper__WaitCallUntilSatisfyFunc_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BasicHelper__WaitCallUntilSatisfyFunc_d__37__System_IDisposable_Dispose(
        BasicHelper__WaitCallUntilSatisfyFunc_d__37_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BasicHelper__WaitForEndOfFrameCall_d__44___ctor(
        BasicHelper__WaitForEndOfFrameCall_d__44_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BasicHelper__WaitForEndOfFrameCall_d__44__MoveNext(
        BasicHelper__WaitForEndOfFrameCall_d__44_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4B179A7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
    byte_4B179A7 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    action = this->fields.action;
    this->fields.__1__state = -1;
    ActionExtensions__Call(action, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
    UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v6, v7, v8, v9, v10, v11, v12);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BasicHelper__WaitForEndOfFrameCall_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__WaitForEndOfFrameCall_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BasicHelper__WaitForEndOfFrameCall_d__44__System_Collections_IEnumerator_Reset(
        BasicHelper__WaitForEndOfFrameCall_d__44_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BasicHelper__WaitForEndOfFrameCall_d__44_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BasicHelper__WaitForEndOfFrameCall_d__44__System_Collections_IEnumerator_get_Current(
        BasicHelper__WaitForEndOfFrameCall_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BasicHelper__WaitForEndOfFrameCall_d__44__System_IDisposable_Dispose(
        BasicHelper__WaitForEndOfFrameCall_d__44_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BasicHelper___c__22___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____cctor(
        const MethodInfo_30D5C58 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 klass; // x0
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x8
  int64_t v9; // x20
  __int16 v10; // w9
  __int64 v11; // x0
  void (__fastcall *v12)(int64_t, _QWORD); // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C1C6BC();
  v6 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC();
  v7 = sub_1BCAA2C(v6, v1, v2, v3);
  v8 = (__int64)method->klass;
  v9 = v7;
  v10 = *(_WORD *)(v8 + 309);
  if ( (v10 & 1) != 0 )
  {
    v11 = (__int64)method->klass;
  }
  else
  {
    v11 = sub_1C1C6BC();
    v8 = (__int64)method->klass;
    v10 = *(_WORD *)(v8 + 309);
  }
  v12 = **(void (__fastcall ***)(int64_t, _QWORD))(*(_QWORD *)(v11 + 192) + 8LL);
  if ( (v10 & 1) == 0 )
    v8 = sub_1C1C6BC();
  v12(v9, *(_QWORD *)(*(_QWORD *)(v8 + 192) + 8LL));
  v19 = (__int64)method->klass;
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C1C6BC();
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C1C6BC();
  **(_QWORD **)(v20 + 184) = v9;
  v21 = (__int64)method->klass;
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C1C6BC();
  v22 = *(_QWORD *)(*(_QWORD *)(v21 + 192) + 16LL);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1C1C6BC();
  sub_1BCA784(*(PartyOrganizationUtility_o **)(v22 + 184), v9, v13, v14, v15, v16, v17, v18);
}


void __fastcall BasicHelper___c__22___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor(
        BasicHelper___c__22_K__V__o *this,
        const MethodInfo_30D5D4C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall BasicHelper___c__22___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Remove_b__22_0(
        BasicHelper___c__22_K__V__o *this,
        System_Collections_Generic_KeyValuePair_K__V__o pair,
        const MethodInfo_30D5D54 *method)
{
  Il2CppObject *value; // x19
  Il2CppObject *key; // x2
  BasicHelper___c__22_K__V__RGCTXs *rgctx_data; // x8
  __int64 native_size; // x20
  MethodInfo *_4_System_Collections_Generic_KeyValuePair_K__V__get_Key; // x1
  void (__fastcall *methodPointer)(); // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v9; // x0 OVERLAPPED
  void *v10; // x1
  __int64 v11[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  value = pair.fields.value;
  key = pair.fields.key;
  v11[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->klass->rgctx_data;
  native_size = (unsigned int)rgctx_data->_6_K->_2.native_size;
  _4_System_Collections_Generic_KeyValuePair_K__V__get_Key = rgctx_data->_4_System_Collections_Generic_KeyValuePair_K__V__get_Key;
  methodPointer = _4_System_Collections_Generic_KeyValuePair_K__V__get_Key->methodPointer;
  v11[0] = (__int64)v11 - ((native_size + 15) & 0x1FFFFFFF0LL);
  _4_System_Collections_Generic_KeyValuePair_K__V__get_Key->invoker_method(
    methodPointer,
    _4_System_Collections_Generic_KeyValuePair_K__V__get_Key,
    key,
    (void **)v11,
    (void *)v11[0]);
  v9 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                   value,
                                                                   (char *)v11 - ((native_size + 15) & 0x1FFFFFFF0LL),
                                                                   native_size);
  result.monitor = v10;
  result.klass = v9;
  return result;
}


void __fastcall BasicHelper___c__22_int__object____cctor(const MethodInfo_30D5B8C *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 klass; // x0
  __int64 v6; // x0
  Il2CppObject *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C1C6BC();
  v6 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC();
  v7 = (Il2CppObject *)sub_1BCAA2C(v6, v1, v2, v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C1C6BC();
  System_Object___ctor(v7, 0LL);
  v14 = (__int64)method->klass;
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC();
  **(_QWORD **)(v15 + 184) = v7;
  v16 = (__int64)method->klass;
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1C6BC();
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1C6BC();
  sub_1BCA784(*(PartyOrganizationUtility_o **)(v17 + 184), (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall BasicHelper___c__22_int__object____ctor(
        BasicHelper___c__22_K__V__o *this,
        const MethodInfo_30D5C48 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BasicHelper___c__22_int__object____Remove_b__22_0(
        BasicHelper___c__22_K__V__o *this,
        System_Collections_Generic_KeyValuePair_K__V__o pair,
        const MethodInfo_30D5C50 *method)
{
  return (int32_t)pair.fields.key;
}


void __fastcall BasicHelper___c__26___Il2CppFullySharedGenericType____cctor(const MethodInfo_30D62D4 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 klass; // x0
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x8
  int64_t v9; // x20
  __int16 v10; // w9
  __int64 v11; // x0
  void (__fastcall *v12)(int64_t, _QWORD); // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C1C6BC();
  v6 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC();
  v7 = sub_1BCAA2C(v6, v1, v2, v3);
  v8 = (__int64)method->klass;
  v9 = v7;
  v10 = *(_WORD *)(v8 + 309);
  if ( (v10 & 1) != 0 )
  {
    v11 = (__int64)method->klass;
  }
  else
  {
    v11 = sub_1C1C6BC();
    v8 = (__int64)method->klass;
    v10 = *(_WORD *)(v8 + 309);
  }
  v12 = **(void (__fastcall ***)(int64_t, _QWORD))(*(_QWORD *)(v11 + 192) + 8LL);
  if ( (v10 & 1) == 0 )
    v8 = sub_1C1C6BC();
  v12(v9, *(_QWORD *)(*(_QWORD *)(v8 + 192) + 8LL));
  v19 = (__int64)method->klass;
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C1C6BC();
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C1C6BC();
  **(_QWORD **)(v20 + 184) = v9;
  v21 = (__int64)method->klass;
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C1C6BC();
  v22 = *(_QWORD *)(*(_QWORD *)(v21 + 192) + 16LL);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1C1C6BC();
  sub_1BCA784(*(PartyOrganizationUtility_o **)(v22 + 184), v9, v13, v14, v15, v16, v17, v18);
}


void __fastcall BasicHelper___c__26___Il2CppFullySharedGenericType____ctor(
        BasicHelper___c__26_T__o *this,
        const MethodInfo_30D63C8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BasicHelper___c__26___Il2CppFullySharedGenericType____ExcludeNull_b__26_0(
        BasicHelper___c__26_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o x,
        const MethodInfo_30D63D0 *method)
{
  __int64 v3; // x21
  __int64 v4; // x8
  char *v5; // x19
  __int64 v7[2]; // [xsp+0h] [xbp-10h] BYREF

  v7[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v7[0] = (__int64)x.klass;
  v3 = *((_QWORD *)x.monitor + 4);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 24LL);
  x.monitor = (void *)*(unsigned int *)(v4 + 252);
  v5 = (char *)v7 - (((__int64)x.monitor + 15) & 0x1FFFFFFF0LL);
  if ( *(int *)(v4 + 40) >= 0 )
    x.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v7;
  memcpy((char *)v7 - (((__int64)x.monitor + 15) & 0x1FFFFFFF0LL), x.klass, (size_t)x.monitor);
  return sub_1BCA9F0(*(_QWORD *)(*(_QWORD *)(v3 + 192) + 24LL), v5) & 1;
}


void __fastcall BasicHelper___c__26_object____cctor(const MethodInfo_30D6204 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 klass; // x0
  __int64 v6; // x0
  Il2CppObject *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C1C6BC();
  v6 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC();
  v7 = (Il2CppObject *)sub_1BCAA2C(v6, v1, v2, v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C1C6BC();
  System_Object___ctor(v7, 0LL);
  v14 = (__int64)method->klass;
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC();
  **(_QWORD **)(v15 + 184) = v7;
  v16 = (__int64)method->klass;
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1C6BC();
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1C6BC();
  sub_1BCA784(*(PartyOrganizationUtility_o **)(v17 + 184), (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall BasicHelper___c__26_object____ctor(BasicHelper___c__26_T__o *this, const MethodInfo_30D62C0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BasicHelper___c__26_object____ExcludeNull_b__26_0(
        BasicHelper___c__26_T__o *this,
        Il2CppObject *x,
        const MethodInfo_30D62C8 *method)
{
  return x != 0LL;
}