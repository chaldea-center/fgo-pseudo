Il2CppObject *__fastcall BasicHelper__AddNotExistComponent_object_(
        UnityEngine_Transform_o *self,
        const MethodInfo_2E26D78 *method)
{
  UnityEngine_Component_o *v3; // x20
  Il2CppObject *Component_object; // x21

  v3 = (UnityEngine_Component_o *)self;
  if ( !method->rgctx_data )
  {
    self = (UnityEngine_Transform_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    if ( !method->rgctx_data )
      self = (UnityEngine_Transform_o *)sub_1BB6938(method);
  }
  if ( !v3 )
    goto LABEL_12;
  self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v3, 0LL);
  if ( !self )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)self,
                       (const MethodInfo_2E8A7CC *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v3, 0LL);
    if ( self )
      return UnityEngine_GameObject__AddComponent_object_(
               (UnityEngine_GameObject_o *)self,
               (const MethodInfo_2E8A6E4 *)method->rgctx_data->_2_UnityEngine_GameObject_AddComponent_T_);
LABEL_12:
    sub_1B64C5C(self, method);
  }
  return Component_object;
}


bool __fastcall BasicHelper__Any_BattleResultEventItemComponent_EventDropItemInfo_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_2E27544 *method)
{
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24
  BattleResultEventItemComponent_EventDropItemInfo_o v10; // [xsp+20h] [xbp-60h] BYREF

  v5 = (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1BB6938(method);
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
                                                       (const MethodInfo_3518934 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
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
    sub_1B64C5C(list, func);
  }
  return 0;
}


bool __fastcall BasicHelper__Any_Int32Enum_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_2E26F80 *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24

  v5 = list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1BB6938(method);
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
                                                       (const MethodInfo_3494DAC *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
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
    sub_1B64C5C(list, func);
  }
  return 0;
}


bool __fastcall BasicHelper__Any_Int32Enum__48394284(
        System_Int32Enum_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_2E2702C *method)
{
  System_Int32Enum_array *v4; // x20
  __int64 v5; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22

  v4 = array;
  if ( !method->rgctx_data )
    array = (System_Int32Enum_array *)sub_1BB6938(method);
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
        sub_1B64C64(array, func);
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
    sub_1B64C5C(array, func);
  }
  return v6;
}


bool __fastcall BasicHelper__Any_ListViewSort_BonusFilterInfo_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_2E2760C *method)
{
  System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24
  ListViewSort_BonusFilterInfo_o v10; // [xsp+20h] [xbp-60h] BYREF

  v5 = (System_Collections_Generic_List_ListViewSort_BonusFilterInfo__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1BB6938(method);
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
                                                       (const MethodInfo_352E758 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
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
    sub_1B64C5C(list, func);
  }
  return 0;
}


bool __fastcall BasicHelper__Any___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_2E272AC *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  const MethodInfo_2E272AC_RGCTXs *rgctx_data; // x8
  __int64 *v7; // x22
  int v8; // w0
  int v9; // w23
  int v10; // w26
  bool v11; // w25
  MethodInfo *_3_System_Collections_Generic_List_T__get_Item; // x1
  Il2CppMethodPointer methodPointer; // x0
  const MethodInfo_2E272AC_RGCTXs *v14; // x8
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
    list = (System_Collections_Generic_List_T__o *)sub_1BB6938(method);
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
    sub_1B64C5C(list, func);
  }
  return 0;
}


bool __fastcall BasicHelper__Any___Il2CppFullySharedGenericType__48395268(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_2E27404 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v5; // x21
  const MethodInfo_2E27404_RGCTXs *rgctx_data; // x8
  __int64 native_size; // x22
  __int64 v8; // x8
  bool v9; // w25
  unsigned __int64 v10; // x26
  const MethodInfo_2E27404_RGCTXs *v11; // x8
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
    array = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)sub_1BB6938(method);
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
        sub_1B64C64(array, func);
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
    sub_1B64C5C(array, func);
  }
  return v9;
}


bool __fastcall BasicHelper__Any_int_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_2E26E38 *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24

  v5 = (System_Collections_Generic_List_int__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1BB6938(method);
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
                                                       (const MethodInfo_34924E0 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
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
    sub_1B64C5C(list, func);
  }
  return 0;
}


bool __fastcall BasicHelper__Any_int__48393956(
        System_Int32_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_2E26EE4 *method)
{
  System_Int32_array *v4; // x20
  __int64 v5; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22

  v4 = array;
  if ( !method->rgctx_data )
    array = (System_Int32_array *)sub_1BB6938(method);
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
        sub_1B64C64(array, func);
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
    sub_1B64C5C(array, func);
  }
  return v6;
}


bool __fastcall BasicHelper__Any_long_(
        System_Int64_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_2E270C8 *method)
{
  System_Int64_array *v4; // x20
  __int64 v5; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22

  v4 = array;
  if ( !method->rgctx_data )
    array = (System_Int64_array *)sub_1BB6938(method);
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
        sub_1B64C64(array, func);
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
    sub_1B64C5C(array, func);
  }
  return v6;
}


bool __fastcall BasicHelper__Any_object_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_2E27164 *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int size; // w23
  int32_t v7; // w22
  bool v8; // w24

  v5 = (System_Collections_Generic_List_object__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1BB6938(method);
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
                                                       (const MethodInfo_34AFCF8 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
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
    sub_1B64C5C(list, func);
  }
  return 0;
}


bool __fastcall BasicHelper__Any_object__48394768(
        System_Object_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_2E27210 *method)
{
  System_Object_array *v4; // x20
  __int64 v5; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22

  v4 = array;
  if ( !method->rgctx_data )
    array = (System_Object_array *)sub_1BB6938(method);
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
        sub_1B64C64(array, func);
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
    sub_1B64C5C(array, func);
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
        const MethodInfo_2E2773C *method)
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
    sub_1BB6938(item.monitor);
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
        const MethodInfo_2E276E4 *method)
{
  if ( method->rgctx_data )
  {
    if ( self )
      return System_Collections_Generic_HashSet_int___Contains(
               (System_Collections_Generic_HashSet_int__o *)self,
               item,
               (const MethodInfo_3366994 *)method->rgctx_data->_2_System_Collections_Generic_HashSet_T__Contains);
  }
  else
  {
    sub_1BB6938(method);
    if ( self )
      return System_Collections_Generic_HashSet_int___Contains(
               (System_Collections_Generic_HashSet_int__o *)self,
               item,
               (const MethodInfo_3366994 *)method->rgctx_data->_2_System_Collections_Generic_HashSet_T__Contains);
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
  if ( (byte_4A001AA & 1) == 0 )
  {
    self = (System_String_o *)sub_1B64A00(&int___TypeInfo, separator);
    byte_4A001AA = 1;
  }
  if ( !v4 )
LABEL_17:
    sub_1B64C5C(self, separator);
  v5 = System_String__Split(v4, separator, 0, 0LL);
  if ( !v5 )
    return 0LL;
  v6 = v5;
  self = (System_String_o *)sub_1B64AA8(int___TypeInfo, v5->max_length);
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
    sub_1B64C64(self, separator);
  }
  return v8;
}


int32_t __fastcall BasicHelper__DecryptValue(int32_t self, const MethodInfo *method)
{
  if ( (byte_4A001A3 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A001A3 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Decrypt(self, 0LL);
}


int32_t __fastcall BasicHelper__DecryptValue_40704340(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o self,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v5; // 0:x0.16

  v2 = *(_QWORD *)&self.fields.fakeValue;
  v3 = *(_QWORD *)&self.fields.currentCryptoKey;
  if ( (byte_4A001A4 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&self.fields.fakeValue);
    byte_4A001A4 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v5.fields.currentCryptoKey = v3;
  *(_QWORD *)&v5.fields.fakeValue = v2;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v5, 0LL);
}


System_String_o *__fastcall BasicHelper__DecryptValue_40704532(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *self,
        const MethodInfo *method)
{
  if ( (byte_4A001A6 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
    byte_4A001A6 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46217936(self, 0LL);
}


int64_t __fastcall BasicHelper__DecryptValue_40704620(int64_t self, const MethodInfo *method)
{
  if ( (byte_4A001A7 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4A001A7 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Decrypt(self, 0LL);
}


int64_t __fastcall BasicHelper__DecryptValue_40704708(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *self,
        const MethodInfo *method)
{
  __int128 v3; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_4A001A8 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4A001A8 = 1;
  }
  v3 = *(_OWORD *)&self->fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&self->fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v5, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__DelayCall(
        float delay,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A001AD & 1) == 0 )
  {
    sub_1B64A00(&BasicHelper__DelayCall_d__35_TypeInfo, method);
    byte_4A001AD = 1;
  }
  v5 = sub_1B64C4C(BasicHelper__DelayCall_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(float *)(v5 + 32) = delay;
  *(_QWORD *)(v5 + 40) = action;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)action, v6, v7);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__DelayCall_ShowAllEx_DamageFuncArgument_(
        float delay,
        System_Action_T__o *action,
        HutongGames_PlayMaker_Actions_ShowAllEx_DamageFuncArgument_o *arg,
        const MethodInfo_2E27A14 *method)
{
  const MethodInfo_2E27A14_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__DelayCall_d__36_T; // x0
  BasicHelper__DelayCall_d__36_T__o *v10; // x0
  const MethodInfo_2E27A14_RGCTXs *v11; // x8
  BasicHelper__DelayCall_d__36_T__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  __int128 v17; // q0
  int32_t v18; // w2
  int32_t v19; // w3

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BB6938(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__DelayCall_d__36_T = (__int64)rgctx_data->_0_BasicHelper__DelayCall_d__36_T_;
  if ( (BYTE5(rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BasicHelper__DelayCall_d__36_T = sub_1BB68DC(_0_BasicHelper__DelayCall_d__36_T);
  v10 = (BasicHelper__DelayCall_d__36_T__o *)sub_1B64C4C(_0_BasicHelper__DelayCall_d__36_T);
  v11 = method->rgctx_data;
  v12 = v10;
  BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument____ctor(
    v10,
    0,
    (const MethodInfo_300F574 *)v11->_1_BasicHelper__DelayCall_d__36_T___ctor);
  if ( !v12 )
    sub_1B64C5C(v13, v14);
  v12->fields.delay = delay;
  v12->fields.action = action;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v12->fields.action, (int32_t)action, v15, v16);
  v17 = *(_OWORD *)&arg->fields.perf;
  v12[1].monitor = *(void **)&arg->fields.damageIndex;
  *(_OWORD *)&v12->fields.arg = v17;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v12->fields.arg, 0, v18, v19);
  return (System_Collections_IEnumerator_o *)v12;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BasicHelper__DelayCall___Il2CppFullySharedGenericType_(
        float delay,
        System_Action_T__o *action,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg,
        const MethodInfo_2E278C0 *method)
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
    sub_1BB6938(arg.monitor);
    v7 = (__int64 *)monitor[7];
  }
  v9 = *(unsigned int *)(v7[3] + 252);
  v10 = *v7;
  if ( (*(_BYTE *)(*v7 + 309) & 1) == 0 )
    v10 = sub_1BB68DC(v10);
  v11 = (System_Collections_IEnumerator_o *)sub_1B64C4C(v10);
  v12 = (**(__int64 (__fastcall ***)(System_Collections_IEnumerator_o *, _QWORD))(monitor[7] + 8LL))(v11, 0LL);
  if ( !v11 )
    sub_1B64C5C(v12, v13);
  sub_19B6F08(v11, *(_QWORD *)(*(_QWORD *)monitor[7] + 128LL) + 64LL, v8);
  sub_19B6BDC(v11, *(_QWORD *)(*(_QWORD *)monitor[7] + 128LL) + 96LL, action);
  v14 = (_QWORD *)monitor[7];
  if ( *(int *)(v14[3] + 40LL) >= 0 )
    v15 = v17;
  else
    v15 = (__int64 *)klass;
  memcpy((char *)v17 - ((v9 + 15) & 0x1FFFFFFF0LL), v15, v9);
  sub_1B64A28(v11, *(_QWORD *)(*v14 + 128LL) + 128LL, (char *)v17 - ((v9 + 15) & 0x1FFFFFFF0LL), (unsigned int)v9);
  return v11;
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__DelayCall_object_(
        float delay,
        System_Action_T__o *action,
        Il2CppObject *arg,
        const MethodInfo_2E27828 *method)
{
  const MethodInfo_2E27828_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__DelayCall_d__36_T; // x0
  BasicHelper__DelayCall_d__36_T__o *v10; // x0
  const MethodInfo_2E27828_RGCTXs *v11; // x8
  BasicHelper__DelayCall_d__36_T__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BB6938(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__DelayCall_d__36_T = (__int64)rgctx_data->_0_BasicHelper__DelayCall_d__36_T_;
  if ( (BYTE5(rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BasicHelper__DelayCall_d__36_T = sub_1BB68DC(_0_BasicHelper__DelayCall_d__36_T);
  v10 = (BasicHelper__DelayCall_d__36_T__o *)sub_1B64C4C(_0_BasicHelper__DelayCall_d__36_T);
  v11 = method->rgctx_data;
  v12 = v10;
  BasicHelper__DelayCall_d__36_object____ctor(
    v10,
    0,
    (const MethodInfo_300F178 *)v11->_1_BasicHelper__DelayCall_d__36_T___ctor);
  if ( !v12 )
    sub_1B64C5C(v13, v14);
  v12->fields.delay = delay;
  v12->fields.action = action;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v12->fields.action, (int32_t)action, v15, v16);
  v12->fields.arg = arg;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v12->fields.arg, (int32_t)arg, v17, v18);
  return (System_Collections_IEnumerator_o *)v12;
}


System_String_o *__fastcall BasicHelper__EncryptDecryptValue(System_String_o *self, const MethodInfo *method)
{
  if ( (byte_4A001A5 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
    byte_4A001A5 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
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
    sub_1B64C5C(IsNullOrEmpty, v6);
  return System_String__Equals_61393452(self, target, 0LL);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BasicHelper__ExcludeNull___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        const MethodInfo_2E27BF0 *method)
{
  const MethodInfo_2E27BF0_RGCTXs *rgctx_data; // x8
  __int64 _3_BasicHelper___c__26_T; // x0
  Il2CppClass *v6; // x0
  __int64 v7; // x21
  Il2CppClass *v8; // x0
  const MethodInfo_2E27BF0_RGCTXs *v9; // x8
  __int64 v10; // x0
  __int64 _2_System_Func_T__bool; // x8
  __int64 v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppClass *v15; // x0
  Il2CppClass *v16; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BB6938(method);
    rgctx_data = method->rgctx_data;
  }
  _3_BasicHelper___c__26_T = (__int64)rgctx_data->_3_BasicHelper___c__26_T_;
  if ( (*(_BYTE *)(_3_BasicHelper___c__26_T + 309) & 1) == 0 )
    _3_BasicHelper___c__26_T = sub_1BB68DC(_3_BasicHelper___c__26_T);
  if ( !*(_DWORD *)(_3_BasicHelper___c__26_T + 224) )
    j_il2cpp_runtime_class_init_0(_3_BasicHelper___c__26_T);
  v6 = method->rgctx_data->_3_BasicHelper___c__26_T_;
  if ( (BYTE5(v6->vtable[0].methodPtr) & 1) == 0 )
    v6 = (Il2CppClass *)sub_1BB68DC(v6);
  v7 = *((_QWORD *)v6->static_fields + 1);
  if ( !v7 )
  {
    v8 = method->rgctx_data->_3_BasicHelper___c__26_T_;
    if ( (BYTE5(v8->vtable[0].methodPtr) & 1) == 0 )
      v8 = (Il2CppClass *)sub_1BB68DC(v8);
    if ( !v8->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v8);
    v9 = method->rgctx_data;
    v10 = (__int64)v9->_3_BasicHelper___c__26_T_;
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    {
      v10 = sub_1BB68DC(v10);
      v9 = method->rgctx_data;
    }
    _2_System_Func_T__bool = (__int64)v9->_2_System_Func_T__bool_;
    v12 = **(_QWORD **)(v10 + 184);
    if ( (*(_BYTE *)(_2_System_Func_T__bool + 309) & 1) == 0 )
      _2_System_Func_T__bool = sub_1BB68DC(_2_System_Func_T__bool);
    v7 = sub_1B64C4C(_2_System_Func_T__bool);
    ((void (__fastcall *)(__int64, __int64, MethodInfo *))method->rgctx_data->_5_System_Func_T__bool___ctor->methodPointer)(
      v7,
      v12,
      method->rgctx_data->_4_BasicHelper___c__26_T___ExcludeNull_b__26_0);
    v15 = method->rgctx_data->_3_BasicHelper___c__26_T_;
    if ( (BYTE5(v15->vtable[0].methodPtr) & 1) == 0 )
      v15 = (Il2CppClass *)sub_1BB68DC(v15);
    *((_QWORD *)v15->static_fields + 1) = v7;
    v16 = method->rgctx_data->_3_BasicHelper___c__26_T_;
    if ( (BYTE5(v16->vtable[0].methodPtr) & 1) == 0 )
      v16 = (Il2CppClass *)sub_1BB68DC(v16);
    sub_1B649A4((ServantStatusBattleListViewItem_o *)((char *)v16->static_fields + 8), v7, v13, v14);
  }
  return (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *, __int64))method->rgctx_data->_6_System_Linq_Enumerable_Where_T_->methodPointer)(
                                                          sequence,
                                                          v7);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BasicHelper__ExcludeNull_object_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        const MethodInfo_2E27AB8 *method)
{
  const MethodInfo_2E27AB8_RGCTXs *rgctx_data; // x8
  __int64 _3_BasicHelper___c__26_T; // x0
  Il2CppClass *v6; // x0
  System_Func_object__bool__o *v7; // x21
  Il2CppClass *v8; // x0
  const MethodInfo_2E27AB8_RGCTXs *v9; // x8
  __int64 v10; // x0
  __int64 _2_System_Func_T__bool; // x8
  Il2CppObject *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppClass *v15; // x0
  Il2CppClass *v16; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BB6938(method);
    rgctx_data = method->rgctx_data;
  }
  _3_BasicHelper___c__26_T = (__int64)rgctx_data->_3_BasicHelper___c__26_T_;
  if ( (*(_BYTE *)(_3_BasicHelper___c__26_T + 309) & 1) == 0 )
    _3_BasicHelper___c__26_T = sub_1BB68DC(_3_BasicHelper___c__26_T);
  if ( !*(_DWORD *)(_3_BasicHelper___c__26_T + 224) )
    j_il2cpp_runtime_class_init_0(_3_BasicHelper___c__26_T);
  v6 = method->rgctx_data->_3_BasicHelper___c__26_T_;
  if ( (BYTE5(v6->vtable[0].methodPtr) & 1) == 0 )
    v6 = (Il2CppClass *)sub_1BB68DC(v6);
  v7 = (System_Func_object__bool__o *)*((_QWORD *)v6->static_fields + 1);
  if ( !v7 )
  {
    v8 = method->rgctx_data->_3_BasicHelper___c__26_T_;
    if ( (BYTE5(v8->vtable[0].methodPtr) & 1) == 0 )
      v8 = (Il2CppClass *)sub_1BB68DC(v8);
    if ( !v8->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v8);
    v9 = method->rgctx_data;
    v10 = (__int64)v9->_3_BasicHelper___c__26_T_;
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    {
      v10 = sub_1BB68DC(v10);
      v9 = method->rgctx_data;
    }
    _2_System_Func_T__bool = (__int64)v9->_2_System_Func_T__bool_;
    v12 = **(Il2CppObject ***)(v10 + 184);
    if ( (*(_BYTE *)(_2_System_Func_T__bool + 309) & 1) == 0 )
      _2_System_Func_T__bool = sub_1BB68DC(_2_System_Func_T__bool);
    v7 = (System_Func_object__bool__o *)sub_1B64C4C(_2_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v7,
      v12,
      (intptr_t)method->rgctx_data->_4_BasicHelper___c__26_T___ExcludeNull_b__26_0,
      (const MethodInfo_3325A04 *)method->rgctx_data->_5_System_Func_T__bool___ctor);
    v15 = method->rgctx_data->_3_BasicHelper___c__26_T_;
    if ( (BYTE5(v15->vtable[0].methodPtr) & 1) == 0 )
      v15 = (Il2CppClass *)sub_1BB68DC(v15);
    *((_QWORD *)v15->static_fields + 1) = v7;
    v16 = method->rgctx_data->_3_BasicHelper___c__26_T_;
    if ( (BYTE5(v16->vtable[0].methodPtr) & 1) == 0 )
      v16 = (Il2CppClass *)sub_1BB68DC(v16);
    sub_1B649A4((ServantStatusBattleListViewItem_o *)((char *)v16->static_fields + 8), (int32_t)v7, v13, v14);
  }
  return (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)sequence,
                                                          (System_Func_TSource__bool__o *)v7,
                                                          (const MethodInfo_2E79990 *)method->rgctx_data->_6_System_Linq_Enumerable_Where_T_);
}


Il2CppObject *__fastcall BasicHelper__FindComponent_object_(
        UnityEngine_GameObject_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_2E27DE0 *method)
{
  UnityEngine_GameObject_array *v5; // x21
  __int64 v6; // x8
  unsigned __int64 v7; // x23
  UnityEngine_GameObject_o **m_Items; // x24
  UnityEngine_Object_o *v9; // x22
  Il2CppObject *Component_object; // x22

  v5 = array;
  if ( method->rgctx_data
    || (array = (UnityEngine_GameObject_array *)sub_1B64A00(&UnityEngine_Object_TypeInfo, func), method->rgctx_data) )
  {
    if ( !v5 )
      return 0LL;
  }
  else
  {
    array = (UnityEngine_GameObject_array *)sub_1BB6938(method);
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
      sub_1B64C64(array, func);
    v9 = (UnityEngine_Object_o *)m_Items[v7];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    array = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
    Component_object = 0LL;
    if ( ((unsigned __int8)array & 1) != 0 )
    {
      if ( v7 >= v5->max_length )
        goto LABEL_23;
      array = (UnityEngine_GameObject_array *)m_Items[v7];
      if ( !array )
LABEL_24:
        sub_1B64C5C(array, func);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)array,
                           (const MethodInfo_2E8A7CC *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        const MethodInfo_2E27D30 *method)
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
    array = (System_Object_array *)sub_1BB6938(method);
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
      sub_1B64C5C(array, func);
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
    sub_1B64C64(array, func);
  return v4->m_Items[v6];
}


void __fastcall BasicHelper__ForEach_Int32Enum_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_2E28E54 *method)
{
  __int64 v6; // x1
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v12; // x1
  __int64 v13; // x19
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
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
    || (sub_1B64A00(&System_IDisposable_TypeInfo, action),
        sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v6),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1BB6938(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB69E0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          sequence,
          *(_QWORD *)(p_method + 8));
  if ( !v13 )
    sub_1B64C5C(0LL, v12);
  while ( 1 )
  {
    v14 = *(_QWORD *)v13;
    v15 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_17:
      v17 = sub_1BB69E0(v13, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_);
    v19 = *(_QWORD *)v13;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
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
      v22 = sub_1BB69E0(v13, _2_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v13, *(_QWORD *)(v22 + 8));
    if ( !action )
      sub_1B64C5C(v23, (unsigned int)v23);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      (unsigned int)v23,
      *(_QWORD *)&action->fields.extra_arg);
  }
  v24 = *(_QWORD *)v13;
  v25 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
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
    v27 = sub_1BB69E0(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v27)(v13, *(_QWORD *)(v27 + 8));
}


void __fastcall BasicHelper__ForEach_KeyValuePair_int__object__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_2E27F18 *method)
{
  __int64 v6; // x1
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v12; // x1
  __int64 v13; // x19
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
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
    || (sub_1B64A00(&System_IDisposable_TypeInfo, action),
        sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v6),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1BB6938(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB69E0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          sequence,
          *(_QWORD *)(p_method + 8));
  if ( !v13 )
    sub_1B64C5C(0LL, v12);
  while ( 1 )
  {
    v14 = *(_QWORD *)v13;
    v15 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_17:
      v17 = sub_1BB69E0(v13, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_);
    v19 = *(_QWORD *)v13;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
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
      v22 = sub_1BB69E0(v13, _2_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v13, *(_QWORD *)(v22 + 8));
    if ( !action )
      sub_1B64C5C(v23, v24);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      v23,
      v24,
      *(_QWORD *)&action->fields.extra_arg);
  }
  v25 = *(_QWORD *)v13;
  v26 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
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
    v28 = sub_1BB69E0(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v28)(v13, *(_QWORD *)(v28 + 8));
}


void __fastcall BasicHelper__ForEach_KeyValuePair_long__object__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_2E28224 *method)
{
  __int64 v6; // x1
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v12; // x1
  __int64 v13; // x19
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
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
    || (sub_1B64A00(&System_IDisposable_TypeInfo, action),
        sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v6),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1BB6938(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB69E0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          sequence,
          *(_QWORD *)(p_method + 8));
  if ( !v13 )
    sub_1B64C5C(0LL, v12);
  while ( 1 )
  {
    v14 = *(_QWORD *)v13;
    v15 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_17:
      v17 = sub_1BB69E0(v13, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_);
    v19 = *(_QWORD *)v13;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
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
      v22 = sub_1BB69E0(v13, _2_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v13, *(_QWORD *)(v22 + 8));
    if ( !action )
      sub_1B64C5C(v23, v24);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      v23,
      v24,
      *(_QWORD *)&action->fields.extra_arg);
  }
  v25 = *(_QWORD *)v13;
  v26 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
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
    v28 = sub_1BB69E0(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v28)(v13, *(_QWORD *)(v28 + 8));
}


void __fastcall BasicHelper__ForEach_KeyValuePair_object__object__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_2E28530 *method)
{
  __int64 v6; // x1
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v12; // x1
  __int64 v13; // x19
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
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
    || (sub_1B64A00(&System_IDisposable_TypeInfo, action),
        sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v6),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1BB6938(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB69E0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          sequence,
          *(_QWORD *)(p_method + 8));
  if ( !v13 )
    sub_1B64C5C(0LL, v12);
  while ( 1 )
  {
    v14 = *(_QWORD *)v13;
    v15 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_17:
      v17 = sub_1BB69E0(v13, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_);
    v19 = *(_QWORD *)v13;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
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
      v22 = sub_1BB69E0(v13, _2_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v13, *(_QWORD *)(v22 + 8));
    if ( !action )
      sub_1B64C5C(v23, v24);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      v23,
      v24,
      *(_QWORD *)&action->fields.extra_arg);
  }
  v25 = *(_QWORD *)v13;
  v26 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
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
    v28 = sub_1BB69E0(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v28)(v13, *(_QWORD *)(v28 + 8));
}


void __fastcall BasicHelper__ForEach___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_2E2976C *method)
{
  const MethodInfo_2E2976C_RGCTXs *rgctx_data; // x27
  __int64 v7; // x1
  __int64 native_size; // x22
  __int64 _0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v14; // x1
  __int64 v15; // x19
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  void *v25; // x0
  __int64 v26; // x1
  const MethodInfo_2E2976C_RGCTXs *v27; // x8
  char *v28; // x4
  MethodInfo *_6_System_Action_T__Invoke; // x1
  Il2CppMethodPointer methodPointer; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35[2]; // [xsp+0h] [xbp-10h] BYREF

  v35[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B64A00(&System_IDisposable_TypeInfo, action);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v7);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6938(method);
      rgctx_data = method->rgctx_data;
    }
  }
  native_size = (unsigned int)rgctx_data->_4_T->_2.native_size;
  memset((char *)v35 - ((native_size + 15) & 0x1FFFFFFF0LL), 0, rgctx_data->_4_T->_2.native_size);
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = (__int64)rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (BYTE5(rgctx_data->_0_System_Collections_Generic_IEnumerable_T_->vtable[0].methodPtr) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = sub_1BB68DC(rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
    klass = sequence->klass;
    v11 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((_QWORD *)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BB69E0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
            sequence,
            *(_QWORD *)(p_method + 8));
    if ( !v15 )
      sub_1B64C5C(0LL, v14);
    while ( 1 )
    {
      v16 = *(_QWORD *)v15;
      v17 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
      {
        v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v17;
          v18 += 4;
          if ( !v17 )
            goto LABEL_18;
        }
        v19 = v16 + 16LL * *v18 + 312;
      }
      else
      {
LABEL_18:
        v19 = sub_1BB69E0(v15, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_);
      v21 = *(_QWORD *)v15;
      v22 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
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
        v24 = sub_1BB69E0(v15, _2_System_Collections_Generic_IEnumerator_T, 0LL);
      }
      v35[0] = (__int64)v35 - ((native_size + 15) & 0x1FFFFFFF0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, __int64))(*(_QWORD *)(v24 + 8) + 16LL))(
        *(_QWORD *)(*(_QWORD *)(v24 + 8) + 8LL),
        *(_QWORD *)(v24 + 8),
        v15,
        v35,
        v35[0]);
      memcpy(
        (char *)v35 - ((native_size + 15) & 0x1FFFFFFF0LL),
        (char *)v35 - ((native_size + 15) & 0x1FFFFFFF0LL),
        native_size);
      v25 = memcpy(
              (char *)v35 - ((native_size + 15) & 0x1FFFFFFF0LL),
              (char *)v35 - ((native_size + 15) & 0x1FFFFFFF0LL),
              native_size);
      if ( !action )
        sub_1B64C5C(v25, v26);
      v27 = method->rgctx_data;
      v28 = (char *)v35 - ((native_size + 15) & 0x1FFFFFFF0LL);
      if ( (v27->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v28 = *(char **)((char *)v35 - ((native_size + 15) & 0x1FFFFFFF0LL));
      _6_System_Action_T__Invoke = v27->_6_System_Action_T__Invoke;
      methodPointer = _6_System_Action_T__Invoke->methodPointer;
      v35[0] = (__int64)v28;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Action_T__o *, __int64 *))_6_System_Action_T__Invoke->invoker_method)(
        methodPointer,
        _6_System_Action_T__Invoke,
        action,
        v35);
    }
    v31 = *(_QWORD *)v15;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_37;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_37:
      v34 = sub_1BB69E0(v15, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v34)(v15, *(_QWORD *)(v34 + 8));
  }
}


void __fastcall BasicHelper__ForEach___Il2CppFullySharedGenericType__48405308(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_int__T__o *action,
        const MethodInfo_2E29B3C *method)
{
  unsigned __int64 StatusReg; // x27
  const MethodInfo_2E29B3C_RGCTXs *rgctx_data; // x26
  __int64 v8; // x1
  __int64 native_size; // x22
  __int64 _0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v15; // x1
  __int64 (__fastcall *v16)(System_Collections_Generic_IEnumerable_T__o *, __int64); // x8
  __int64 v17; // x1
  __int64 v18; // x19
  int i; // w27
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  Il2CppClass *_2_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  void *v29; // x0
  __int64 v30; // x1
  const MethodInfo_2E29B3C_RGCTXs *v31; // x8
  char *v32; // x4
  MethodInfo *_6_System_Action_int__T__Invoke; // x1
  Il2CppMethodPointer methodPointer; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  _QWORD v39[2]; // [xsp+0h] [xbp-30h] BYREF
  __int64 v40[2]; // [xsp+10h] [xbp-20h] BYREF
  int v41; // [xsp+24h] [xbp-Ch] BYREF
  __int64 v42; // [xsp+28h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v42 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B64A00(&System_IDisposable_TypeInfo, action);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v8);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6938(method);
      rgctx_data = method->rgctx_data;
    }
  }
  native_size = (unsigned int)rgctx_data->_4_T->_2.native_size;
  memset((char *)v39 - ((native_size + 15) & 0x1FFFFFFF0LL), 0, rgctx_data->_4_T->_2.native_size);
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = (__int64)rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (BYTE5(rgctx_data->_0_System_Collections_Generic_IEnumerable_T_->vtable[0].methodPtr) & 1) == 0 )
      _0_System_Collections_Generic_IEnumerable_T = sub_1BB68DC(rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
    klass = sequence->klass;
    v12 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((_QWORD *)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BB69E0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
    }
    v16 = *(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, __int64))p_method;
    v15 = *(_QWORD *)(p_method + 8);
    v39[1] = StatusReg;
    v18 = v16(sequence, v15);
    if ( !v18 )
      sub_1B64C5C(0LL, v17);
    for ( i = 0; ; ++i )
    {
      v20 = *(_QWORD *)v18;
      v21 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
      {
        v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_19;
        }
        v23 = v20 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_19:
        v23 = sub_1BB69E0(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v18, *(_QWORD *)(v23 + 8)) & 1) == 0 )
        break;
      _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
      if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
        _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_);
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
            goto LABEL_28;
        }
        v28 = v25 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_28:
        v28 = sub_1BB69E0(v18, _2_System_Collections_Generic_IEnumerator_T, 0LL);
      }
      v40[0] = (__int64)v39 - ((native_size + 15) & 0x1FFFFFFF0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, __int64))(*(_QWORD *)(v28 + 8) + 16LL))(
        *(_QWORD *)(*(_QWORD *)(v28 + 8) + 8LL),
        *(_QWORD *)(v28 + 8),
        v18,
        v40,
        v40[0]);
      memcpy(
        (char *)v39 - ((native_size + 15) & 0x1FFFFFFF0LL),
        (char *)v39 - ((native_size + 15) & 0x1FFFFFFF0LL),
        native_size);
      v29 = memcpy(
              (char *)v39 - ((native_size + 15) & 0x1FFFFFFF0LL),
              (char *)v39 - ((native_size + 15) & 0x1FFFFFFF0LL),
              native_size);
      if ( !action )
        sub_1B64C5C(v29, v30);
      v31 = method->rgctx_data;
      v32 = (char *)v39 - ((native_size + 15) & 0x1FFFFFFF0LL);
      if ( (v31->_4_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v32 = *(char **)((char *)v39 - ((native_size + 15) & 0x1FFFFFFF0LL));
      _6_System_Action_int__T__Invoke = v31->_6_System_Action_int__T__Invoke;
      methodPointer = _6_System_Action_int__T__Invoke->methodPointer;
      v41 = i;
      v40[0] = (__int64)&v41;
      v40[1] = (__int64)v32;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Action_int__T__o *, __int64 *))_6_System_Action_int__T__Invoke->invoker_method)(
        methodPointer,
        _6_System_Action_int__T__Invoke,
        action,
        v40);
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
          goto LABEL_38;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_38:
      v38 = sub_1BB69E0(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v38)(v18, *(_QWORD *)(v38 + 8));
  }
}


void __fastcall BasicHelper__ForEach_int_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_2E2883C *method)
{
  __int64 v6; // x1
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v12; // x1
  __int64 v13; // x19
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
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
    || (sub_1B64A00(&System_IDisposable_TypeInfo, action),
        sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v6),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1BB6938(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB69E0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          sequence,
          *(_QWORD *)(p_method + 8));
  if ( !v13 )
    sub_1B64C5C(0LL, v12);
  while ( 1 )
  {
    v14 = *(_QWORD *)v13;
    v15 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_17:
      v17 = sub_1BB69E0(v13, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_);
    v19 = *(_QWORD *)v13;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
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
      v22 = sub_1BB69E0(v13, _2_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v13, *(_QWORD *)(v22 + 8));
    if ( !action )
      sub_1B64C5C(v23, (unsigned int)v23);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      (unsigned int)v23,
      *(_QWORD *)&action->fields.extra_arg);
  }
  v24 = *(_QWORD *)v13;
  v25 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
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
    v27 = sub_1BB69E0(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v27)(v13, *(_QWORD *)(v27 + 8));
}


void __fastcall BasicHelper__ForEach_int__48401212(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_int__T__o *action,
        const MethodInfo_2E28B3C *method)
{
  __int64 v6; // x1
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v12; // x1
  __int64 v13; // x19
  unsigned int i; // w22
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
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

  if ( method->rgctx_data
    || (sub_1B64A00(&System_IDisposable_TypeInfo, action),
        sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v6),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1BB6938(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB69E0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          sequence,
          *(_QWORD *)(p_method + 8));
  if ( !v13 )
    sub_1B64C5C(0LL, v12);
  for ( i = 0; ; ++i )
  {
    v15 = *(_QWORD *)v13;
    v16 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
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
      v18 = sub_1BB69E0(v13, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v13, *(_QWORD *)(v18 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_);
    v20 = *(_QWORD *)v13;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
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
      v23 = sub_1BB69E0(v13, _2_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v13, *(_QWORD *)(v23 + 8));
    if ( !action )
      sub_1B64C5C(v24, v25);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      i,
      (unsigned int)v24,
      *(_QWORD *)&action->fields.extra_arg);
  }
  v26 = *(_QWORD *)v13;
  v27 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
  {
    v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_35;
    }
    v29 = v26 + 16LL * *v28 + 312;
  }
  else
  {
LABEL_35:
    v29 = sub_1BB69E0(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v29)(v13, *(_QWORD *)(v29 + 8));
}


void __fastcall BasicHelper__ForEach_object_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_2E29154 *method)
{
  __int64 v6; // x1
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v12; // x1
  __int64 v13; // x19
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
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
    || (sub_1B64A00(&System_IDisposable_TypeInfo, action),
        sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v6),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1BB6938(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB69E0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          sequence,
          *(_QWORD *)(p_method + 8));
  if ( !v13 )
    sub_1B64C5C(0LL, v12);
  while ( 1 )
  {
    v14 = *(_QWORD *)v13;
    v15 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_17:
      v17 = sub_1BB69E0(v13, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_);
    v19 = *(_QWORD *)v13;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
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
      v22 = sub_1BB69E0(v13, _2_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v13, *(_QWORD *)(v22 + 8));
    if ( !action )
      sub_1B64C5C(v23, v23);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      v23,
      *(_QWORD *)&action->fields.extra_arg);
  }
  v24 = *(_QWORD *)v13;
  v25 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
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
    v27 = sub_1BB69E0(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v27)(v13, *(_QWORD *)(v27 + 8));
}


void __fastcall BasicHelper__ForEach_object__48403540(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_int__T__o *action,
        const MethodInfo_2E29454 *method)
{
  __int64 v6; // x1
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v12; // x1
  __int64 v13; // x19
  unsigned int i; // w22
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
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

  if ( method->rgctx_data
    || (sub_1B64A00(&System_IDisposable_TypeInfo, action),
        sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v6),
        method->rgctx_data) )
  {
    if ( !sequence )
      return;
  }
  else
  {
    sub_1BB6938(method);
    if ( !sequence )
      return;
  }
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
  klass = sequence->klass;
  v9 = *(unsigned __int16 *)(&sequence->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&sequence->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB69E0(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          sequence,
          *(_QWORD *)(p_method + 8));
  if ( !v13 )
    sub_1B64C5C(0LL, v12);
  for ( i = 0; ; ++i )
  {
    v15 = *(_QWORD *)v13;
    v16 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
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
      v18 = sub_1BB69E0(v13, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v13, *(_QWORD *)(v18 + 8)) & 1) == 0 )
      break;
    _2_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_2_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _2_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_2_System_Collections_Generic_IEnumerator_T_);
    v20 = *(_QWORD *)v13;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
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
      v23 = sub_1BB69E0(v13, _2_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v13, *(_QWORD *)(v23 + 8));
    if ( !action )
      sub_1B64C5C(v24, v25);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, __int64, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      i,
      v24,
      *(_QWORD *)&action->fields.extra_arg);
  }
  v26 = *(_QWORD *)v13;
  v27 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
  {
    v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_35;
    }
    v29 = v26 + 16LL * *v28 + 312;
  }
  else
  {
LABEL_35:
    v29 = sub_1BB69E0(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v29)(v13, *(_QWORD *)(v29 + 8));
}


int32_t __fastcall BasicHelper__GetValue_Int32Enum__Int32Enum_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int32_t def,
        const MethodInfo_2E2A558 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1BB6938(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
         key,
         (const MethodInfo_313DD98 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
             key,
             (const MethodInfo_313DB10 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


int32_t __fastcall BasicHelper__GetValue_Int32Enum__int_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int32_t def,
        const MethodInfo_2E2A4D4 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1BB6938(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_Int32Enum__int___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
         key,
         (const MethodInfo_313AFB0 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_Int32Enum__int___get_Item(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
             key,
             (const MethodInfo_313AD28 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


Il2CppObject *__fastcall BasicHelper__GetValue_Int32Enum__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        Il2CppObject *def,
        const MethodInfo_2E2A5DC *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1BB6938(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
         key,
         (const MethodInfo_3155328 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)dic,
             key,
             (const MethodInfo_3155094 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall BasicHelper__GetValue___Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        const MethodInfo_2E2A1E4 *method)
{
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  const MethodInfo_2E2A1E4_RGCTXs *rgctx_data; // x8
  __int64 v10; // x1
  Il2CppClass *_0_T; // x8
  __int64 native_size; // x20
  Il2CppObject *Item; // x21
  Il2CppClass *v14; // x1
  char *v15; // x1
  void *v16; // x0
  __int64 *v17; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v18; // x0 OVERLAPPED
  void *v19; // x1
  __int64 v20[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  monitor = def.monitor;
  klass = def.klass;
  v20[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v20[0] = (__int64)def.klass;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6938(method);
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
          (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    _0_T = method->rgctx_data->_0_T;
LABEL_10:
    if ( (_0_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v17 = v20;
    else
      v17 = (__int64 *)klass;
    memcpy((char *)v20 - ((native_size + 15) & 0x1FFFFFFF0LL), v17, native_size);
    v16 = monitor;
    v15 = (char *)v20 - ((native_size + 15) & 0x1FFFFFFF0LL);
    goto LABEL_14;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)dic,
           (Il2CppObject *)key,
           (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v14 = method->rgctx_data->_0_T;
  if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
    v14 = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_0_T);
  v15 = (char *)sub_1B64B4C(Item, v14, (char *)v20 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v16 = monitor;
LABEL_14:
  v18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v16, v15, native_size);
  result.monitor = v19;
  result.klass = v18;
  return result;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall BasicHelper__GetValue___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        const MethodInfo_2E2A768 *method)
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
    sub_1BB6938(def.monitor);
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
        const MethodInfo_2E29F24 *method)
{
  __int64 v8; // x1
  Il2CppObject *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  const MethodInfo_2E29F24_RGCTXs *rgctx_data; // x8
  Il2CppObject *v13; // x19
  _QWORD *p_image; // x1
  double result; // d0
  System_Collections_Generic_Dictionary_string__object__o *v16; // x0
  System_String_o *v17; // x1
  int64_t v18; // x2
  const MethodInfo_2E2A010 *v19; // x3

  if ( method->rgctx_data
    || (sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key),
        sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8),
        method->rgctx_data) )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1BB6938(method);
    if ( !dic )
      return def;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)dic,
          (Il2CppObject *)key,
          (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return def;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)dic,
           (Il2CppObject *)key,
           (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  rgctx_data = method->rgctx_data;
  v13 = Item;
  p_image = &rgctx_data->_0_T->_1.image;
  if ( (BYTE5(rgctx_data->_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    Item = (Il2CppObject *)sub_1BB68DC(p_image);
    p_image = &Item->klass;
  }
  if ( !v13 )
    sub_1B64C5C(Item, p_image);
  if ( v13->klass->_1.element_class == (Il2CppClass *)p_image[8] )
    return *(double *)j_il2cpp_object_unbox_0(v13, p_image, v10, v11);
  sub_1B64F1C(v13);
  BasicHelper__GetValue_long_(v16, v17, v18, v19);
  return result;
}


int32_t __fastcall BasicHelper__GetValue_int__int_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int32_t def,
        const MethodInfo_2E2A348 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1BB6938(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         (System_Collections_Generic_Dictionary_int__int__o *)dic,
         key,
         (const MethodInfo_311D994 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_int__int___get_Item(
             (System_Collections_Generic_Dictionary_int__int__o *)dic,
             key,
             (const MethodInfo_311D70C *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


int64_t __fastcall BasicHelper__GetValue_int__long_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int64_t def,
        const MethodInfo_2E2A3CC *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1BB6938(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_int__long___ContainsKey(
         (System_Collections_Generic_Dictionary_int__long__o *)dic,
         key,
         (const MethodInfo_31235AC *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_int__long___get_Item(
             (System_Collections_Generic_Dictionary_int__long__o *)dic,
             key,
             (const MethodInfo_3123318 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


Il2CppObject *__fastcall BasicHelper__GetValue_int__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        Il2CppObject *def,
        const MethodInfo_2E2A450 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1BB6938(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)dic,
         key,
         (const MethodInfo_312646C *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_int__object___get_Item(
             (System_Collections_Generic_Dictionary_int__object__o *)dic,
             key,
             (const MethodInfo_31261D8 *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


int64_t __fastcall BasicHelper__GetValue_long_(
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        int64_t def,
        const MethodInfo_2E2A010 *method)
{
  __int64 v8; // x1
  Il2CppObject *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  const MethodInfo_2E2A010_RGCTXs *rgctx_data; // x8
  Il2CppObject *v13; // x19
  _QWORD *p_image; // x1
  System_Collections_Generic_Dictionary_string__object__o *v16; // x0
  System_String_o *v17; // x1
  Il2CppObject *v18; // x2
  const MethodInfo_2E2A0FC *v19; // x3

  if ( method->rgctx_data
    || (sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key),
        sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8),
        method->rgctx_data) )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1BB6938(method);
    if ( !dic )
      return def;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)dic,
          (Il2CppObject *)key,
          (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return def;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)dic,
           (Il2CppObject *)key,
           (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  rgctx_data = method->rgctx_data;
  v13 = Item;
  p_image = &rgctx_data->_0_T->_1.image;
  if ( (BYTE5(rgctx_data->_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    Item = (Il2CppObject *)sub_1BB68DC(p_image);
    p_image = &Item->klass;
  }
  if ( !v13 )
    sub_1B64C5C(Item, p_image);
  if ( v13->klass->_1.element_class == (Il2CppClass *)p_image[8] )
    return *(_QWORD *)j_il2cpp_object_unbox_0(v13, p_image, v10, v11);
  sub_1B64F1C(v13);
  return (int64_t)BasicHelper__GetValue_object_(v16, v17, v18, v19);
}


int32_t __fastcall BasicHelper__GetValue_long__int_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int64_t key,
        int32_t def,
        const MethodInfo_2E2A660 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1BB6938(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_long__int___ContainsKey(
         (System_Collections_Generic_Dictionary_long__int__o *)dic,
         key,
         (const MethodInfo_315E540 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_long__int___get_Item(
             (System_Collections_Generic_Dictionary_long__int__o *)dic,
             key,
             (const MethodInfo_315E2AC *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


Il2CppObject *__fastcall BasicHelper__GetValue_object_(
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        Il2CppObject *def,
        const MethodInfo_2E2A0FC *method)
{
  const MethodInfo_2E2A0FC *_0_T; // x19
  Il2CppObject *Item; // x21
  __int64 v8; // x1

  _0_T = method;
  Item = (Il2CppObject *)key;
  if ( !method->rgctx_data )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    if ( !_0_T->rgctx_data )
      goto LABEL_10;
  }
  if ( dic )
  {
    while ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)dic,
              Item,
              (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)dic,
               Item,
               (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      _0_T = (const MethodInfo_2E2A0FC *)_0_T->rgctx_data->_0_T;
      if ( (BYTE5(_0_T[3].return_type) & 1) == 0 )
        _0_T = (const MethodInfo_2E2A0FC *)sub_1BB68DC(_0_T);
      if ( !Item )
        return 0LL;
      def = (Il2CppObject *)sub_1B64B3C(Item, _0_T);
      if ( !def )
      {
        sub_1B64F1C(Item);
LABEL_10:
        sub_1BB6938(_0_T);
        if ( dic )
          continue;
      }
      return def;
    }
  }
  return def;
}


Il2CppObject *__fastcall BasicHelper__GetValue_object__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        Il2CppObject *key,
        Il2CppObject *def,
        const MethodInfo_2E2A6E4 *method)
{
  if ( method->rgctx_data )
  {
    if ( !dic )
      return def;
  }
  else
  {
    sub_1BB6938(method);
    if ( !dic )
      return def;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         key,
         (const MethodInfo_317BEE0 *)method->rgctx_data->_2_System_Collections_Generic_Dictionary_K__V__ContainsKey) )
  {
    return System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)dic,
             key,
             (const MethodInfo_317BC6C *)method->rgctx_data->_3_System_Collections_Generic_Dictionary_K__V__get_Item);
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BasicHelper__IndexValue_Int32Enum_(
        System_Int32Enum_array *array,
        int32_t index,
        int32_t def,
        const MethodInfo_2E2AA7C *method)
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
          sub_1B64C64(array, *(_QWORD *)&index);
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
        const MethodInfo_2E2A90C *method)
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
    sub_1BB6938(method);
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
           (const MethodInfo_3405794 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
  v10 = *(_QWORD *)&Item.fields.value;
  v9 = Item.fields.key;
LABEL_9:
  *(_QWORD *)&result.fields.value = v10;
  result.fields.key = v9;
  return result;
}


// local variable allocation has failed, the output may be wrong!
ListViewSort_BonusFilterInfo_o *__fastcall BasicHelper__IndexValue_ListViewSort_BonusFilterInfo_(
        ListViewSort_BonusFilterInfo_o *retstr,
        ListViewSort_BonusFilterInfo_o *array,
        int32_t index,
        ListViewSort_BonusFilterInfo_o *def,
        const MethodInfo_2E2AE34 *method)
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
          sub_1B64C64(array, *(_QWORD *)&index);
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
        const MethodInfo_2E2AD30 *method)
{
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x22
  const MethodInfo_2E2AD30_RGCTXs *rgctx_data; // x8
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
    array = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)sub_1BB6938(method);
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
      sub_1B64C64(array, *(_QWORD *)&index);
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
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall BasicHelper__IndexValue___Il2CppFullySharedGenericType__48409612(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o def,
        const MethodInfo_2E2AC0C *method)
{
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  const MethodInfo_2E2AC0C_RGCTXs *rgctx_data; // x8
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
    sub_1BB6938(method);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall BasicHelper__IndexValue_bool_(
        System_Boolean_array *array,
        int32_t index,
        bool def,
        const MethodInfo_2E2A990 *method)
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
          sub_1B64C64(array, *(_QWORD *)&index);
        return array->m_Items[index + 4];
      }
    }
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BasicHelper__IndexValue_float_(
        System_Single_array *array,
        int32_t index,
        float def,
        const MethodInfo_2E2ABDC *method)
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
          sub_1B64C64(array, *(_QWORD *)&index);
        return array->m_Items[index + 1];
      }
    }
  }
  return def;
}


float __fastcall BasicHelper__IndexValue_float__48409440(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        float def,
        const MethodInfo_2E2AB60 *method)
{
  if ( method->rgctx_data )
  {
    if ( !list )
      return def;
  }
  else
  {
    sub_1BB6938(method);
    if ( !list )
      return def;
  }
  if ( (index & 0x80000000) == 0 && list->fields._size > index )
    return System_Collections_Generic_List_float___get_Item(
             (System_Collections_Generic_List_float__o *)list,
             index,
             (const MethodInfo_34D0D5C *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
  return def;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BasicHelper__IndexValue_int_(
        System_Int32_array *array,
        int32_t index,
        int32_t def,
        const MethodInfo_2E2AA48 *method)
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
          sub_1B64C64(array, *(_QWORD *)&index);
        return array->m_Items[index + 1];
      }
    }
  }
  return def;
}


int32_t __fastcall BasicHelper__IndexValue_int__48409036(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        int32_t def,
        const MethodInfo_2E2A9CC *method)
{
  if ( method->rgctx_data )
  {
    if ( !list )
      return def;
  }
  else
  {
    sub_1BB6938(method);
    if ( !list )
      return def;
  }
  if ( (index & 0x80000000) == 0 && list->fields._size > index )
    return System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)list,
             index,
             (const MethodInfo_34924E0 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
  return def;
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall BasicHelper__IndexValue_object_(
        System_Object_array *array,
        int32_t index,
        Il2CppObject *def,
        const MethodInfo_2E2AB2C *method)
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
          sub_1B64C64(array, *(_QWORD *)&index);
        return array->m_Items[index];
      }
    }
  }
  return def;
}


Il2CppObject *__fastcall BasicHelper__IndexValue_object__48409264(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        Il2CppObject *def,
        const MethodInfo_2E2AAB0 *method)
{
  if ( method->rgctx_data )
  {
    if ( !list )
      return def;
  }
  else
  {
    sub_1BB6938(method);
    if ( !list )
      return def;
  }
  if ( (index & 0x80000000) == 0 && list->fields._size > index )
    return System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)list,
             index,
             (const MethodInfo_34AFCF8 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
  return def;
}


bool __fastcall BasicHelper__IsNullOrEmpty(System_Collections_ICollection_o *self, const MethodInfo *method)
{
  System_Collections_ICollection_c *klass; // x8
  __int64 v4; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4A001AC & 1) == 0 )
  {
    sub_1B64A00(&System_Collections_ICollection_TypeInfo, method);
    byte_4A001AC = 1;
  }
  if ( !self )
    return 1;
  klass = self->klass;
  v4 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_ICollection_c **)p_offset - 1) != System_Collections_ICollection_TypeInfo )
    {
      --v4;
      p_offset += 4;
      if ( !v4 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB69E0(self, System_Collections_ICollection_TypeInfo, 1LL);
  }
  return (*(int (__fastcall **)(System_Collections_ICollection_o *, _QWORD))p_method)(self, *(_QWORD *)(p_method + 8)) < 1;
}


bool __fastcall BasicHelper__IsValidIndex_Vector3_(
        UnityEngine_Vector3_array *array,
        int32_t index,
        const MethodInfo_2E2AEFC *method)
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
        const MethodInfo_2E2AF1C *method)
{
  bool result; // w0

  if ( !method->rgctx_data )
    sub_1BB6938(method);
  result = 0;
  if ( list )
  {
    if ( (index & 0x80000000) == 0 )
      return ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list) > index;
  }
  return result;
}


bool __fastcall BasicHelper__IsValidIndex___Il2CppFullySharedGenericType__48410484(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        int32_t index,
        const MethodInfo_2E2AF74 *method)
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
        const MethodInfo_2E2AE78 *method)
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
        const MethodInfo_2E2AE98 *method)
{
  bool result; // w0

  if ( !method->rgctx_data )
    sub_1BB6938(method);
  result = 0;
  if ( list )
  {
    if ( (index & 0x80000000) == 0 )
      return list->fields._size > index;
  }
  return result;
}


bool __fastcall BasicHelper__IsValidIndex_object__48410332(
        System_Object_array *array,
        int32_t index,
        const MethodInfo_2E2AEDC *method)
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
  float v6; // s1
  float v7; // s2
  float v8; // s0

  if ( self >= toCompare )
    return 1;
  if ( !byte_49F9825 )
  {
    sub_1B64A00(&UnityEngine_Mathf_TypeInfo, v3);
    byte_49F9825 = 1;
  }
  v6 = fabsf(self);
  v7 = fabsf(toCompare);
  if ( v6 <= v7 )
    v6 = v7;
  v8 = v6 * 0.000001;
  if ( (float)(v6 * 0.000001) <= (float)(UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0) )
    v8 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  return vabds_f32(toCompare, self) < v8;
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
  __int64 v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A001AE & 1) == 0 )
  {
    sub_1B64A00(&BasicHelper__RealDelayCall_d__37_TypeInfo, method);
    byte_4A001AE = 1;
  }
  v5 = sub_1B64C4C(BasicHelper__RealDelayCall_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(float *)(v5 + 32) = delay;
  *(_QWORD *)(v5 + 40) = action;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)action, v6, v7);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BasicHelper__RealDelayCall___Il2CppFullySharedGenericType_(
        float delay,
        System_Action_T__o *action,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg,
        const MethodInfo_2E2B02C *method)
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
    sub_1BB6938(arg.monitor);
    v7 = (__int64 *)monitor[7];
  }
  v9 = *(unsigned int *)(v7[3] + 252);
  v10 = *v7;
  if ( (*(_BYTE *)(*v7 + 309) & 1) == 0 )
    v10 = sub_1BB68DC(v10);
  v11 = (System_Collections_IEnumerator_o *)sub_1B64C4C(v10);
  v12 = (**(__int64 (__fastcall ***)(System_Collections_IEnumerator_o *, _QWORD))(monitor[7] + 8LL))(v11, 0LL);
  if ( !v11 )
    sub_1B64C5C(v12, v13);
  sub_19B6F08(v11, *(_QWORD *)(*(_QWORD *)monitor[7] + 128LL) + 64LL, v8);
  sub_19B6BDC(v11, *(_QWORD *)(*(_QWORD *)monitor[7] + 128LL) + 96LL, action);
  v14 = (_QWORD *)monitor[7];
  if ( *(int *)(v14[3] + 40LL) >= 0 )
    v15 = v17;
  else
    v15 = (__int64 *)klass;
  memcpy((char *)v17 - ((v9 + 15) & 0x1FFFFFFF0LL), v15, v9);
  sub_1B64A28(v11, *(_QWORD *)(*v14 + 128LL) + 128LL, (char *)v17 - ((v9 + 15) & 0x1FFFFFFF0LL), (unsigned int)v9);
  return v11;
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__RealDelayCall_object_(
        float delay,
        System_Action_T__o *action,
        Il2CppObject *arg,
        const MethodInfo_2E2AF94 *method)
{
  const MethodInfo_2E2AF94_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__RealDelayCall_d__38_T; // x0
  BasicHelper__RealDelayCall_d__38_T__o *v10; // x0
  const MethodInfo_2E2AF94_RGCTXs *v11; // x8
  BasicHelper__RealDelayCall_d__38_T__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BB6938(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__RealDelayCall_d__38_T = (__int64)rgctx_data->_0_BasicHelper__RealDelayCall_d__38_T_;
  if ( (BYTE5(rgctx_data->_0_BasicHelper__RealDelayCall_d__38_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BasicHelper__RealDelayCall_d__38_T = sub_1BB68DC(_0_BasicHelper__RealDelayCall_d__38_T);
  v10 = (BasicHelper__RealDelayCall_d__38_T__o *)sub_1B64C4C(_0_BasicHelper__RealDelayCall_d__38_T);
  v11 = method->rgctx_data;
  v12 = v10;
  BasicHelper__RealDelayCall_d__38_object____ctor(
    v10,
    0,
    (const MethodInfo_302102C *)v11->_1_BasicHelper__RealDelayCall_d__38_T___ctor);
  if ( !v12 )
    sub_1B64C5C(v13, v14);
  v12->fields.delay = delay;
  v12->fields.action = action;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v12->fields.action, (int32_t)action, v15, v16);
  v12->fields.arg = arg;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v12->fields.arg, (int32_t)arg, v17, v18);
  return (System_Collections_IEnumerator_o *)v12;
}


void __fastcall BasicHelper__RemoveElements___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *self,
        System_Func_T__bool__o *cond,
        const MethodInfo_2E2B6A8 *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  const MethodInfo_2E2B6A8_RGCTXs *rgctx_data; // x8
  __int64 *v7; // x22
  int v8; // w23
  MethodInfo *_3_System_Collections_Generic_List_T__get_Item; // x1
  Il2CppMethodPointer methodPointer; // x0
  const MethodInfo_2E2B6A8_RGCTXs *v11; // x8
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
    self = (System_Collections_Generic_List_T__o *)sub_1BB6938(method);
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
    sub_1B64C5C(self, cond);
  }
}


void __fastcall BasicHelper__RemoveElements_object_(
        System_Collections_Generic_List_T__o *self,
        System_Func_T__bool__o *cond,
        const MethodInfo_2E2B610 *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w22

  v5 = (System_Collections_Generic_List_object__o *)self;
  if ( !method->rgctx_data )
    self = (System_Collections_Generic_List_T__o *)sub_1BB6938(method);
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
                                                       (const MethodInfo_34AFCF8 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
      if ( !cond )
        break;
      if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Collections_Generic_List_T__o *, _QWORD))cond->fields.m_target)(
              cond->fields.original_method_info,
              self,
              *(_QWORD *)&cond->fields.extra_arg) & 1) != 0 )
        System_Collections_Generic_List_object___RemoveAt(
          v5,
          v6,
          (const MethodInfo_34B183C *)method->rgctx_data->_6_System_Collections_Generic_List_T__RemoveAt);
      if ( --v6 < 0 )
        return;
    }
LABEL_10:
    sub_1B64C5C(self, cond);
  }
}


void __fastcall BasicHelper__Remove___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        System_Func_KeyValuePair_K__V___bool__o *cond,
        const MethodInfo_2E2B350 *method)
{
  const MethodInfo_2E2B350_RGCTXs *rgctx_data; // x26
  __int64 native_size; // x21
  __int64 v8; // x25
  long double inited; // q0
  Il2CppClass *_6_BasicHelper___c__22_K__V; // x8
  Il2CppClass *v11; // x0
  __int64 v12; // x26
  Il2CppClass *v13; // x0
  const MethodInfo_2E2B350_RGCTXs *v14; // x8
  __int64 v15; // x0
  __int64 _5_System_Func_KeyValuePair_K__V___K; // x8
  __int64 v17; // x27
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppClass *v20; // x0
  Il2CppClass *v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  _DWORD *v26; // x25
  unsigned __int64 v27; // x26
  const MethodInfo_2E2B350_RGCTXs *v28; // x8
  char *v29; // x9
  MethodInfo *_14_System_Collections_Generic_Dictionary_K__V__Remove; // x1
  Il2CppMethodPointer methodPointer; // x0
  __int64 v32; // [xsp+0h] [xbp-20h] BYREF
  char *v33; // [xsp+8h] [xbp-18h] BYREF
  char v34[4]; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v35; // [xsp+18h] [xbp-8h]

  v35 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BB6938(method);
    rgctx_data = method->rgctx_data;
  }
  native_size = (unsigned int)rgctx_data->_13_K->_2.native_size;
  memset((char *)&v32 - ((native_size + 15) & 0x1FFFFFFF0LL), 0, rgctx_data->_13_K->_2.native_size);
  if ( dic )
  {
    v8 = ((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_K__V__o *, System_Func_KeyValuePair_K__V___bool__o *))rgctx_data->_2_System_Linq_Enumerable_Where_KeyValuePair_K__V__->methodPointer)(
           dic,
           cond);
    _6_BasicHelper___c__22_K__V = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
    if ( (BYTE5(_6_BasicHelper___c__22_K__V->vtable[0].methodPtr) & 1) == 0 )
      _6_BasicHelper___c__22_K__V = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_6_BasicHelper___c__22_K__V_);
    if ( !_6_BasicHelper___c__22_K__V->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(_6_BasicHelper___c__22_K__V);
    v11 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
    if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
      v11 = (Il2CppClass *)sub_1BB68DC(v11);
    v12 = *((_QWORD *)v11->static_fields + 1);
    if ( !v12 )
    {
      v13 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
      if ( (BYTE5(v13->vtable[0].methodPtr) & 1) == 0 )
        v13 = (Il2CppClass *)sub_1BB68DC(v13);
      if ( !v13->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v13);
      v14 = method->rgctx_data;
      v15 = (__int64)v14->_6_BasicHelper___c__22_K__V_;
      if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      {
        v15 = sub_1BB68DC(v15);
        v14 = method->rgctx_data;
      }
      _5_System_Func_KeyValuePair_K__V___K = (__int64)v14->_5_System_Func_KeyValuePair_K__V___K_;
      v17 = **(_QWORD **)(v15 + 184);
      if ( (*(_BYTE *)(_5_System_Func_KeyValuePair_K__V___K + 309) & 1) == 0 )
        _5_System_Func_KeyValuePair_K__V___K = sub_1BB68DC(_5_System_Func_KeyValuePair_K__V___K);
      v12 = sub_1B64C4C(_5_System_Func_KeyValuePair_K__V___K);
      ((void (__fastcall *)(__int64, __int64, MethodInfo *))method->rgctx_data->_8_System_Func_KeyValuePair_K__V___K___ctor->methodPointer)(
        v12,
        v17,
        method->rgctx_data->_7_BasicHelper___c__22_K__V___Remove_b__22_0);
      v20 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
      if ( (BYTE5(v20->vtable[0].methodPtr) & 1) == 0 )
        v20 = (Il2CppClass *)sub_1BB68DC(v20);
      *((_QWORD *)v20->static_fields + 1) = v12;
      v21 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
      if ( (BYTE5(v21->vtable[0].methodPtr) & 1) == 0 )
        v21 = (Il2CppClass *)sub_1BB68DC(v21);
      sub_1B649A4((ServantStatusBattleListViewItem_o *)((char *)v21->static_fields + 8), v12, v18, v19);
    }
    v22 = ((__int64 (__fastcall *)(__int64, __int64, long double))method->rgctx_data->_9_System_Linq_Enumerable_Select_KeyValuePair_K__V___K_->methodPointer)(
            v8,
            v12,
            inited);
    v23 = ((__int64 (__fastcall *)(__int64))method->rgctx_data->_11_System_Linq_Enumerable_ToArray_K_->methodPointer)(v22);
    if ( !v23 )
      sub_1B64C5C(0LL, v24);
    v25 = *(_QWORD *)(v23 + 24);
    v26 = (_DWORD *)v23;
    if ( (int)v25 >= 1 )
    {
      v27 = 0LL;
      do
      {
        if ( v27 >= (unsigned int)v25 )
          sub_1B64C64(v23, v24);
        memcpy(
          (char *)&v32 - ((native_size + 15) & 0x1FFFFFFF0LL),
          (char *)v26 + v27 * *(unsigned int *)(*(_QWORD *)v26 + 260LL) + 32,
          native_size);
        memcpy(
          (char *)&v32 - ((native_size + 15) & 0x1FFFFFFF0LL),
          (char *)&v32 - ((native_size + 15) & 0x1FFFFFFF0LL),
          native_size);
        memcpy(
          (char *)&v32 - ((native_size + 15) & 0x1FFFFFFF0LL),
          (char *)&v32 - ((native_size + 15) & 0x1FFFFFFF0LL),
          native_size);
        v28 = method->rgctx_data;
        v29 = (char *)&v32 - ((native_size + 15) & 0x1FFFFFFF0LL);
        if ( (v28->_13_K->_1.byval_arg.bits & 0x80000000) == 0 )
          v29 = *(char **)((char *)&v32 - ((native_size + 15) & 0x1FFFFFFF0LL));
        _14_System_Collections_Generic_Dictionary_K__V__Remove = v28->_14_System_Collections_Generic_Dictionary_K__V__Remove;
        methodPointer = _14_System_Collections_Generic_Dictionary_K__V__Remove->methodPointer;
        v33 = v29;
        v23 = ((__int64 (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_Dictionary_K__V__o *, char **, char *))_14_System_Collections_Generic_Dictionary_K__V__Remove->invoker_method)(
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


void __fastcall BasicHelper__Remove_int__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        System_Func_KeyValuePair_K__V___bool__o *cond,
        const MethodInfo_2E2B180 *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x21
  Il2CppClass *_6_BasicHelper___c__22_K__V; // x8
  Il2CppClass *v8; // x0
  System_Func_T__TResult__o *v9; // x22
  Il2CppClass *v10; // x0
  const MethodInfo_2E2B180_RGCTXs *rgctx_data; // x8
  __int64 v12; // x0
  __int64 _5_System_Func_KeyValuePair_K__V___K; // x8
  Il2CppObject *v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppClass *v17; // x0
  Il2CppClass *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Int32_array *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x8
  System_Int32_array *v23; // x21
  unsigned __int64 v24; // x22

  if ( method->rgctx_data )
  {
    if ( !dic )
      return;
  }
  else
  {
    sub_1BB6938(method);
    if ( !dic )
      return;
  }
  v6 = System_Linq_Enumerable__Where_KeyValuePair_int__object__(
         (System_Collections_Generic_IEnumerable_TSource__o *)dic,
         (System_Func_TSource__bool__o *)cond,
         (const MethodInfo_2E782F0 *)method->rgctx_data->_2_System_Linq_Enumerable_Where_KeyValuePair_K__V__);
  _6_BasicHelper___c__22_K__V = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
  if ( (BYTE5(_6_BasicHelper___c__22_K__V->vtable[0].methodPtr) & 1) == 0 )
    _6_BasicHelper___c__22_K__V = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_6_BasicHelper___c__22_K__V_);
  if ( !_6_BasicHelper___c__22_K__V->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(_6_BasicHelper___c__22_K__V);
  v8 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
  if ( (BYTE5(v8->vtable[0].methodPtr) & 1) == 0 )
    v8 = (Il2CppClass *)sub_1BB68DC(v8);
  v9 = (System_Func_T__TResult__o *)*((_QWORD *)v8->static_fields + 1);
  if ( !v9 )
  {
    v10 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
    if ( (BYTE5(v10->vtable[0].methodPtr) & 1) == 0 )
      v10 = (Il2CppClass *)sub_1BB68DC(v10);
    if ( !v10->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v10);
    rgctx_data = method->rgctx_data;
    v12 = (__int64)rgctx_data->_6_BasicHelper___c__22_K__V_;
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    {
      v12 = sub_1BB68DC(v12);
      rgctx_data = method->rgctx_data;
    }
    _5_System_Func_KeyValuePair_K__V___K = (__int64)rgctx_data->_5_System_Func_KeyValuePair_K__V___K_;
    v14 = **(Il2CppObject ***)(v12 + 184);
    if ( (*(_BYTE *)(_5_System_Func_KeyValuePair_K__V___K + 309) & 1) == 0 )
      _5_System_Func_KeyValuePair_K__V___K = sub_1BB68DC(_5_System_Func_KeyValuePair_K__V___K);
    v9 = (System_Func_T__TResult__o *)sub_1B64C4C(_5_System_Func_KeyValuePair_K__V___K);
    System_Func_KeyValuePair_int__object___int____ctor(
      v9,
      v14,
      (intptr_t)method->rgctx_data->_7_BasicHelper___c__22_K__V___Remove_b__22_0,
      (const MethodInfo_331F8E0 *)method->rgctx_data->_8_System_Func_KeyValuePair_K__V___K___ctor);
    v17 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1BB68DC(v17);
    *((_QWORD *)v17->static_fields + 1) = v9;
    v18 = method->rgctx_data->_6_BasicHelper___c__22_K__V_;
    if ( (BYTE5(v18->vtable[0].methodPtr) & 1) == 0 )
      v18 = (Il2CppClass *)sub_1BB68DC(v18);
    sub_1B649A4((ServantStatusBattleListViewItem_o *)((char *)v18->static_fields + 8), (int32_t)v9, v15, v16);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___int_(
                                                               v6,
                                                               (System_Func_TSource__TResult__o *)v9,
                                                               (const MethodInfo_2E66C04 *)method->rgctx_data->_9_System_Linq_Enumerable_Select_KeyValuePair_K__V___K_);
  v20 = System_Linq_Enumerable__ToArray_int_(
          v19,
          (const MethodInfo_2E73B20 *)method->rgctx_data->_11_System_Linq_Enumerable_ToArray_K_);
  if ( !v20 )
    sub_1B64C5C(0LL, v21);
  v22 = *(_QWORD *)&v20->max_length;
  v23 = v20;
  if ( (int)v22 >= 1 )
  {
    v24 = 0LL;
    do
    {
      if ( v24 >= (unsigned int)v22 )
        sub_1B64C64(v20, v21);
      v20 = (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___Remove(
                                    (System_Collections_Generic_Dictionary_int__object__o *)dic,
                                    v23->m_Items[v24 + 1],
                                    (const MethodInfo_3127700 *)method->rgctx_data->_14_System_Collections_Generic_Dictionary_K__V__Remove);
      LODWORD(v22) = v23->max_length;
      ++v24;
    }
    while ( (__int64)v24 < (int)v22 );
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
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x22

  if ( (byte_4A001AB & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, isDestroy);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v7);
    byte_4A001AB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  Component_object = 0LL;
  if ( v8 )
  {
    if ( !obj )
      goto LABEL_14;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         obj,
                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v8 )
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
    sub_1B64C5C(v8, v9);
  }
  ActionExtensions__Call(action, 0LL);
}


System_Collections_Generic_List_T__o *__fastcall BasicHelper__Shuffle___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *list,
        const MethodInfo_2E2B98C *method)
{
  const MethodInfo_2E2B98C_RGCTXs *rgctx_data; // x26
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
  const MethodInfo_2E2B98C_RGCTXs *v15; // x8
  char *v16; // x4
  MethodInfo *_4_System_Collections_Generic_List_T__set_Item; // x1
  Il2CppMethodPointer v18; // x0
  const MethodInfo_2E2B98C_RGCTXs *v19; // x8
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
    sub_1BB6938(method);
    rgctx_data = method->rgctx_data;
  }
  native_size = (unsigned int)rgctx_data->_2_T->_2.native_size;
  v6 = memset((char *)&v24 - ((native_size + 15) & 0x1FFFFFFF0LL), 0, rgctx_data->_2_T->_2.native_size);
  if ( !list )
    sub_1B64C5C(v6, v7);
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
      v12 = UnityEngine_Random__Range_69097216(0, v11, 0LL);
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
        const MethodInfo_2E2B7EC *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w21
  int32_t Item; // w22
  int32_t v6; // w23
  int32_t v7; // w0

  v3 = (System_Collections_Generic_List_int__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1BB6938(method);
  if ( !v3 )
    sub_1B64C5C(list, method);
  if ( v3->fields._size >= 1 )
  {
    v4 = 0;
    do
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v3,
               v4,
               (const MethodInfo_34924E0 *)method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item);
      v6 = UnityEngine_Random__Range_69097216(0, v3->fields._size, 0LL);
      v7 = System_Collections_Generic_List_int___get_Item(
             v3,
             v6,
             (const MethodInfo_34924E0 *)method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item);
      System_Collections_Generic_List_int___set_Item(
        v3,
        v4,
        v7,
        (const MethodInfo_3492534 *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      System_Collections_Generic_List_int___set_Item(
        v3,
        v6,
        Item,
        (const MethodInfo_3492534 *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      ++v4;
    }
    while ( v4 < v3->fields._size );
  }
  return (System_Collections_Generic_List_T__o *)v3;
}


System_Collections_Generic_List_T__o *__fastcall BasicHelper__Shuffle_object_(
        System_Collections_Generic_List_T__o *list,
        const MethodInfo_2E2B8BC *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w21
  Il2CppObject *Item; // x22
  int32_t v6; // w23
  Il2CppObject *v7; // x0

  v3 = (System_Collections_Generic_List_object__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1BB6938(method);
  if ( !v3 )
    sub_1B64C5C(list, method);
  if ( v3->fields._size >= 1 )
  {
    v4 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v3,
               v4,
               (const MethodInfo_34AFCF8 *)method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item);
      v6 = UnityEngine_Random__Range_69097216(0, v3->fields._size, 0LL);
      v7 = System_Collections_Generic_List_object___get_Item(
             v3,
             v6,
             (const MethodInfo_34AFCF8 *)method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item);
      System_Collections_Generic_List_object___set_Item(
        v3,
        v4,
        v7,
        (const MethodInfo_34AFD4C *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      System_Collections_Generic_List_object___set_Item(
        v3,
        v6,
        Item,
        (const MethodInfo_34AFD4C *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
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
        const MethodInfo_2E2BD48 *method)
{
  const MethodInfo_2E2BD48_RGCTXs *rgctx_data; // x23
  __int64 native_size; // x2
  _QWORD *v10; // x24
  _QWORD *v11; // x25
  int v12; // w0
  const MethodInfo_2E2BD48_RGCTXs *v13; // x8
  MethodInfo *_3_System_Collections_Generic_List_T__get_Item; // x1
  Il2CppMethodPointer methodPointer; // x8
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo_2E2BD48_RGCTXs *v18; // x8
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
  const MethodInfo_2E2BD48_RGCTXs *v29; // x8
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
  const MethodInfo_2E2BD48_RGCTXs *v42; // x8
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
    sub_1BB6938(method);
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
    sub_1B64C5C(v16, v17);
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
        const MethodInfo_2E2BBB4 *method)
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
    sub_1BB6938(method);
    if ( !list )
      return list;
  }
  size = list->fields._size;
  if ( size >= 2 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)list,
             0,
             (const MethodInfo_34AFCF8 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
    if ( !priorityFunc )
      sub_1B64C5C(Item, v10);
    v11 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD))priorityFunc->fields.m_target)(
            priorityFunc->fields.original_method_info,
            Item,
            *(_QWORD *)&priorityFunc->fields.extra_arg);
    for ( i = 1; i != size; ++i )
    {
      v13 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)list,
              i,
              (const MethodInfo_34AFCF8 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
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
          (const MethodInfo_34B183C *)method->rgctx_data->_6_System_Collections_Generic_List_T__RemoveAt);
        v17 = 0;
        while ( 1 )
        {
          v18 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)list,
                  v17,
                  (const MethodInfo_34AFCF8 *)method->rgctx_data->_3_System_Collections_Generic_List_T__get_Item);
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
          (const MethodInfo_34B0E18 *)method->rgctx_data->_7_System_Collections_Generic_List_T__Insert);
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

  if ( (byte_4A001AF & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_1/*""*/, *(_QWORD *)&len);
    byte_4A001AF = 1;
  }
  if ( !self || System_Text_StringBuilder__get_Length(self, 0LL) < len )
    return (System_String_o *)StringLiteral_1/*""*/;
  Length = System_Text_StringBuilder__get_Length(self, 0LL);
  v7 = System_Text_StringBuilder__ToString_60543756(self, Length - len, len, 0LL);
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
          UnityEngine_Animation__Play_68882568(v8, selfAnimStr, 0LL);
          return 1;
        }
      }
LABEL_13:
      sub_1B64C5C(self, selfAnimStr);
    }
  }
  return 0;
}


bool __fastcall BasicHelper__SynchronizeAnimation_40705120(
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
  if ( (byte_4A001A9 & 1) == 0 )
  {
    self = (SimpleAnimation_o *)sub_1B64A00(&SimpleAnimation_State_TypeInfo, selfAnimStr);
    byte_4A001A9 = 1;
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
    v13 = sub_1BB69E0(self, SimpleAnimation_State_TypeInfo, 15LL);
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
    v19 = sub_1BB69E0(self, SimpleAnimation_State_TypeInfo, 15LL);
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
    v24 = sub_1BB69E0(self, SimpleAnimation_State_TypeInfo, 13LL);
  }
  LODWORD(v25) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(SimpleAnimation_o *, _QWORD))*(_QWORD *)v24)(v21, *(_QWORD *)(v24 + 8)));
  self = (SimpleAnimation_o *)SimpleAnimation__get_Item(targetAnim, tgAnimStr, 0LL);
  if ( !self )
LABEL_51:
    sub_1B64C5C(self, selfAnimStr);
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
    v30 = sub_1BB69E0(self, SimpleAnimation_State_TypeInfo, 13LL);
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
    v36 = sub_1BB69E0(self, SimpleAnimation_State_TypeInfo, 3LL);
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
    p_method = sub_1BB69E0(Item, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(
    Item,
    *(_QWORD *)(p_method + 8),
    v40);
  SimpleAnimation__Sample(v8, 0LL);
  SimpleAnimation__Play_63522800(v8, selfAnimStr, 0LL);
  return 1;
}


Il2CppObject *__fastcall BasicHelper__TakeIf_object_(
        Il2CppObject *self,
        System_Predicate_T__o *match,
        const MethodInfo_2E2C0A4 *method)
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
    self = (Il2CppObject *)sub_1BB6938(method);
    if ( !v4 )
      return 0LL;
  }
  if ( !match )
    sub_1B64C5C(self, match);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A001B0 & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, method);
    sub_1B64A00(&StringLiteral_24838/*"{0:#,0}"*/, v6);
    byte_4A001B0 = 1;
  }
  v9 = value;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_24838/*"{0:#,0}"*/, v7, 0LL);
}


System_String_o *__fastcall BasicHelper__ToCommaString_40707688(int64_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int64_t v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A001B1 & 1) == 0 )
  {
    sub_1B64A00(&long_TypeInfo, method);
    sub_1B64A00(&StringLiteral_24838/*"{0:#,0}"*/, v6);
    byte_4A001B1 = 1;
  }
  v9 = value;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v9, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_24838/*"{0:#,0}"*/, v7, 0LL);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BasicHelper__ToIterator___Il2CppFullySharedGenericType_(
        int32_t loopCount,
        System_Func_int__T__o *func,
        const MethodInfo_2E2C1FC *method)
{
  const MethodInfo_2E2C1FC_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__ToIterator_d__31_T; // x0
  System_Collections_Generic_IEnumerable_T__o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BB6938(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__ToIterator_d__31_T = (__int64)rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
  if ( (BYTE5(rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BasicHelper__ToIterator_d__31_T = sub_1BB68DC(_0_BasicHelper__ToIterator_d__31_T);
  v8 = (System_Collections_Generic_IEnumerable_T__o *)sub_1B64C4C(_0_BasicHelper__ToIterator_d__31_T);
  v9 = ((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *, __int64))method->rgctx_data->_1_BasicHelper__ToIterator_d__31_T___ctor->methodPointer)(
         v8,
         4294967294LL);
  if ( !v8 )
    sub_1B64C5C(v9, v10);
  sub_19B6F58(
    v8,
    (char *)method->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 192,
    (unsigned int)loopCount);
  sub_19B6BDC(v8, (char *)method->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 128, func);
  return v8;
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BasicHelper__ToIterator_float_(
        int32_t loopCount,
        System_Func_int__T__o *func,
        const MethodInfo_2E2C180 *method)
{
  const MethodInfo_2E2C180_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__ToIterator_d__31_T; // x0
  BasicHelper__ToIterator_d__31_T__o *v8; // x0
  const MethodInfo_2E2C180_RGCTXs *v9; // x8
  BasicHelper__ToIterator_d__31_T__o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BB6938(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__ToIterator_d__31_T = (__int64)rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
  if ( (BYTE5(rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BasicHelper__ToIterator_d__31_T = sub_1BB68DC(_0_BasicHelper__ToIterator_d__31_T);
  v8 = (BasicHelper__ToIterator_d__31_T__o *)sub_1B64C4C(_0_BasicHelper__ToIterator_d__31_T);
  v9 = method->rgctx_data;
  v10 = v8;
  BasicHelper__ToIterator_d__31_float____ctor(
    v8,
    -2,
    (const MethodInfo_3140330 *)v9->_1_BasicHelper__ToIterator_d__31_T___ctor);
  if ( !v10 )
    sub_1B64C5C(v11, v12);
  HIDWORD(v10->fields.__3__func) = loopCount;
  v10->fields.func = func;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v10->fields.func, (int32_t)func, v13, v14);
  return (System_Collections_Generic_IEnumerable_T__o *)v10;
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BasicHelper__ToIterator_object_(
        int32_t loopCount,
        System_Func_int__T__o *func,
        const MethodInfo_2E2C104 *method)
{
  const MethodInfo_2E2C104_RGCTXs *rgctx_data; // x8
  __int64 _0_BasicHelper__ToIterator_d__31_T; // x0
  BasicHelper__ToIterator_d__31_T__o *v8; // x0
  const MethodInfo_2E2C104_RGCTXs *v9; // x8
  BasicHelper__ToIterator_d__31_T__o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BB6938(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BasicHelper__ToIterator_d__31_T = (__int64)rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
  if ( (BYTE5(rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BasicHelper__ToIterator_d__31_T = sub_1BB68DC(_0_BasicHelper__ToIterator_d__31_T);
  v8 = (BasicHelper__ToIterator_d__31_T__o *)sub_1B64C4C(_0_BasicHelper__ToIterator_d__31_T);
  v9 = method->rgctx_data;
  v10 = v8;
  BasicHelper__ToIterator_d__31_object____ctor(
    v8,
    -2,
    (const MethodInfo_3140170 *)v9->_1_BasicHelper__ToIterator_d__31_T___ctor);
  if ( !v10 )
    sub_1B64C5C(v11, v12);
  v10->fields.__3__loopCount = loopCount;
  v10->fields.__3__func = func;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v10->fields.__3__func, (int32_t)func, v13, v14);
  return (System_Collections_Generic_IEnumerable_T__o *)v10;
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__WaitForEndOfFrameCall(
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A001B2 & 1) == 0 )
  {
    sub_1B64A00(&BasicHelper__WaitForEndOfFrameCall_d__43_TypeInfo, method);
    byte_4A001B2 = 1;
  }
  v3 = sub_1B64C4C(BasicHelper__WaitForEndOfFrameCall_d__43_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = action;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)action, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
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
  int32_t _1__state; // w8
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4A001B3 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_4A001B3 = 1;
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
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1B64C4C(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, delay, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7);
    result = 1;
    this->fields.__1__state = 1;
    return result;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_BasicHelper__DelayCall_d__35_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
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
        const MethodInfo_300F574 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___MoveNext(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_300F5A0 *method)
{
  int32_t _1__state; // w8
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  bool result; // w0
  void *monitor; // x9
  __int128 v11; // q0
  System_Action_T__o *action; // x0
  MethodInfo *_3_ActionExtensions_Call_T; // x2
  HutongGames_PlayMaker_Actions_ShowAllEx_DamageFuncArgument_o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A0466F & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_4A0466F = 1;
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
      (const MethodInfo_2D934E4 *)_3_ActionExtensions_Call_T);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    delay = this->fields.delay;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_1B64C4C(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v6, delay, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_300F680 *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___System_Collections_IEnumerator_Reset(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_300F688 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1B64C4C(v3);
  System_NotSupportedException___ctor(v4, 0LL);
  sub_1B64B28(v4, method);
}


Il2CppObject *__fastcall BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___System_Collections_IEnumerator_get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_300F6BC *method)
{
  return this->fields.__2__current;
}


void __fastcall BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___System_IDisposable_Dispose(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_300F59C *method)
{
  ;
}


void __fastcall BasicHelper__DelayCall_d__36___Il2CppFullySharedGenericType____ctor(
        BasicHelper__DelayCall_d__36_T__o *this,
        int32_t 1__state,
        const MethodInfo_300F2A4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  sub_19B6F58(this, method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields, (unsigned int)1__state);
}


bool __fastcall BasicHelper__DelayCall_d__36___Il2CppFullySharedGenericType___MoveNext(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_300F2E8 *method)
{
  BasicHelper__DelayCall_d__36_T__RGCTXs *rgctx_data; // x8
  __int64 native_size; // x22
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
  void (__fastcall *methodPointer)(); // x0
  __int64 v19[3]; // [xsp+8h] [xbp-28h] BYREF

  v19[2] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4A0466E & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_4A0466E = 1;
  }
  rgctx_data = method->klass->rgctx_data;
  native_size = (unsigned int)rgctx_data->_2_T->_2.native_size;
  v6 = (__int64 *)((char *)&v19[-1] - ((native_size + 15) & 0x1FFFFFFF0LL));
  v7 = *(_DWORD *)sub_1B64A24(this, rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields);
  if ( v7 == 1 )
  {
    sub_19B6F58(this, method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields, 0xFFFFFFFFLL);
    v12 = *(_QWORD *)sub_1B64A24(
                       this,
                       (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields + 96);
    v13 = (const void *)sub_1B64A24(
                          this,
                          (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields + 128);
    memcpy((char *)&v19[-1] - ((native_size + 15) & 0x1FFFFFFF0LL), v13, native_size);
    v14 = method->klass->rgctx_data;
    _3_ActionExtensions_Call_T = v14->_3_ActionExtensions_Call_T_;
    methodPointer = _3_ActionExtensions_Call_T->methodPointer;
    if ( (v14->_2_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v6 = (_QWORD *)*v6;
    v19[0] = v12;
    v19[1] = (__int64)v6;
    _3_ActionExtensions_Call_T->invoker_method(methodPointer, _3_ActionExtensions_Call_T, 0LL, (void **)v19, v6);
    return 0;
  }
  if ( v7 )
    return 0;
  sub_19B6F58(this, method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields, 0xFFFFFFFFLL);
  v8 = *(float *)sub_1B64A24(
                   this,
                   (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields + 64);
  v9 = (UnityEngine_WaitForSeconds_o *)sub_1B64C4C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v9, v8, 0LL);
  sub_19B6BDC(this, (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields + 32, v9);
  klass = method->klass;
  v11 = 1;
  sub_19B6F58(this, klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields, 1LL);
  return v11;
}


Il2CppObject *__fastcall BasicHelper__DelayCall_d__36___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_300F4F0 *method)
{
  return *(Il2CppObject **)sub_1B64A24(
                             this,
                             (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields + 32);
}


void __fastcall __noreturn BasicHelper__DelayCall_d__36___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_300F518 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1B64C4C(v3);
  System_NotSupportedException___ctor(v4, 0LL);
  sub_1B64B28(v4, method);
}


Il2CppObject *__fastcall BasicHelper__DelayCall_d__36___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_300F54C *method)
{
  return *(Il2CppObject **)sub_1B64A24(
                             this,
                             (char *)method->klass->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_->_1.fields + 32);
}


void __fastcall BasicHelper__DelayCall_d__36___Il2CppFullySharedGenericType___System_IDisposable_Dispose(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_300F2E4 *method)
{
  ;
}


void __fastcall BasicHelper__DelayCall_d__36_object____ctor(
        BasicHelper__DelayCall_d__36_T__o *this,
        int32_t 1__state,
        const MethodInfo_300F178 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BasicHelper__DelayCall_d__36_object___MoveNext(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_300F1A4 *method)
{
  int32_t _1__state; // w8
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  bool result; // w0

  if ( (byte_4A0466D & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_4A0466D = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    ActionExtensions__Call_object_(
      this->fields.action,
      this->fields.arg,
      (const MethodInfo_2D9336C *)method->klass->rgctx_data->_3_ActionExtensions_Call_T_);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    delay = this->fields.delay;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_1B64C4C(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v6, delay, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BasicHelper__DelayCall_d__36_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_300F260 *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BasicHelper__DelayCall_d__36_object___System_Collections_IEnumerator_Reset(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_300F268 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1B64C4C(v3);
  System_NotSupportedException___ctor(v4, 0LL);
  sub_1B64B28(v4, method);
}


Il2CppObject *__fastcall BasicHelper__DelayCall_d__36_object___System_Collections_IEnumerator_get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_300F29C *method)
{
  return this->fields.__2__current;
}


void __fastcall BasicHelper__DelayCall_d__36_object___System_IDisposable_Dispose(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_300F1A0 *method)
{
  ;
}


void __fastcall BasicHelper__RealDelayCall_d__37___ctor(
        BasicHelper__RealDelayCall_d__37_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BasicHelper__RealDelayCall_d__37__MoveNext(
        BasicHelper__RealDelayCall_d__37_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  float delay; // s8
  UnityEngine_WaitForSecondsRealtime_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4A001B4 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_WaitForSecondsRealtime_TypeInfo, method);
    byte_4A001B4 = 1;
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
    v5 = (UnityEngine_WaitForSecondsRealtime_o *)sub_1B64C4C(UnityEngine_WaitForSecondsRealtime_TypeInfo);
    UnityEngine_WaitForSecondsRealtime___ctor(v5, delay, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BasicHelper__RealDelayCall_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__RealDelayCall_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BasicHelper__RealDelayCall_d__37__System_Collections_IEnumerator_Reset(
        BasicHelper__RealDelayCall_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_BasicHelper__RealDelayCall_d__37_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
}


Il2CppObject *__fastcall BasicHelper__RealDelayCall_d__37__System_Collections_IEnumerator_get_Current(
        BasicHelper__RealDelayCall_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BasicHelper__RealDelayCall_d__37__System_IDisposable_Dispose(
        BasicHelper__RealDelayCall_d__37_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BasicHelper__RealDelayCall_d__38___Il2CppFullySharedGenericType____ctor(
        BasicHelper__RealDelayCall_d__38_T__o *this,
        int32_t 1__state,
        const MethodInfo_3021158 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  sub_19B6F58(
    this,
    method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__38_T_->_1.fields,
    (unsigned int)1__state);
}


bool __fastcall BasicHelper__RealDelayCall_d__38___Il2CppFullySharedGenericType___MoveNext(
        BasicHelper__RealDelayCall_d__38_T__o *this,
        const MethodInfo_302119C *method)
{
  BasicHelper__RealDelayCall_d__38_T__RGCTXs *rgctx_data; // x8
  __int64 native_size; // x22
  _QWORD *v6; // x21
  int v7; // w8
  float v8; // s8
  UnityEngine_WaitForSecondsRealtime_o *v9; // x21
  BasicHelper__RealDelayCall_d__38_T__c *klass; // x8
  bool v11; // w19
  __int64 v12; // x24
  const void *v13; // x0
  BasicHelper__RealDelayCall_d__38_T__RGCTXs *v14; // x8
  MethodInfo *_3_ActionExtensions_Call_T; // x1
  void (__fastcall *methodPointer)(); // x0
  __int64 v19[3]; // [xsp+8h] [xbp-28h] BYREF

  v19[2] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4A046A2 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_WaitForSecondsRealtime_TypeInfo, method);
    byte_4A046A2 = 1;
  }
  rgctx_data = method->klass->rgctx_data;
  native_size = (unsigned int)rgctx_data->_2_T->_2.native_size;
  v6 = (__int64 *)((char *)&v19[-1] - ((native_size + 15) & 0x1FFFFFFF0LL));
  v7 = *(_DWORD *)sub_1B64A24(this, rgctx_data->_0_BasicHelper__RealDelayCall_d__38_T_->_1.fields);
  if ( v7 == 1 )
  {
    sub_19B6F58(this, method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__38_T_->_1.fields, 0xFFFFFFFFLL);
    v12 = *(_QWORD *)sub_1B64A24(
                       this,
                       (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__38_T_->_1.fields + 96);
    v13 = (const void *)sub_1B64A24(
                          this,
                          (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__38_T_->_1.fields + 128);
    memcpy((char *)&v19[-1] - ((native_size + 15) & 0x1FFFFFFF0LL), v13, native_size);
    v14 = method->klass->rgctx_data;
    _3_ActionExtensions_Call_T = v14->_3_ActionExtensions_Call_T_;
    methodPointer = _3_ActionExtensions_Call_T->methodPointer;
    if ( (v14->_2_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v6 = (_QWORD *)*v6;
    v19[0] = v12;
    v19[1] = (__int64)v6;
    _3_ActionExtensions_Call_T->invoker_method(methodPointer, _3_ActionExtensions_Call_T, 0LL, (void **)v19, v6);
    return 0;
  }
  if ( v7 )
    return 0;
  sub_19B6F58(this, method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__38_T_->_1.fields, 0xFFFFFFFFLL);
  v8 = *(float *)sub_1B64A24(
                   this,
                   (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__38_T_->_1.fields + 64);
  v9 = (UnityEngine_WaitForSecondsRealtime_o *)sub_1B64C4C(UnityEngine_WaitForSecondsRealtime_TypeInfo);
  UnityEngine_WaitForSecondsRealtime___ctor(v9, v8, 0LL);
  sub_19B6BDC(this, (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__38_T_->_1.fields + 32, v9);
  klass = method->klass;
  v11 = 1;
  sub_19B6F58(this, klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__38_T_->_1.fields, 1LL);
  return v11;
}


Il2CppObject *__fastcall BasicHelper__RealDelayCall_d__38___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__RealDelayCall_d__38_T__o *this,
        const MethodInfo_30213A4 *method)
{
  return *(Il2CppObject **)sub_1B64A24(
                             this,
                             (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__38_T_->_1.fields + 32);
}


void __fastcall __noreturn BasicHelper__RealDelayCall_d__38___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset(
        BasicHelper__RealDelayCall_d__38_T__o *this,
        const MethodInfo_30213CC *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1B64C4C(v3);
  System_NotSupportedException___ctor(v4, 0LL);
  sub_1B64B28(v4, method);
}


Il2CppObject *__fastcall BasicHelper__RealDelayCall_d__38___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current(
        BasicHelper__RealDelayCall_d__38_T__o *this,
        const MethodInfo_3021400 *method)
{
  return *(Il2CppObject **)sub_1B64A24(
                             this,
                             (char *)method->klass->rgctx_data->_0_BasicHelper__RealDelayCall_d__38_T_->_1.fields + 32);
}


void __fastcall BasicHelper__RealDelayCall_d__38___Il2CppFullySharedGenericType___System_IDisposable_Dispose(
        BasicHelper__RealDelayCall_d__38_T__o *this,
        const MethodInfo_3021198 *method)
{
  ;
}


void __fastcall BasicHelper__RealDelayCall_d__38_object____ctor(
        BasicHelper__RealDelayCall_d__38_T__o *this,
        int32_t 1__state,
        const MethodInfo_302102C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BasicHelper__RealDelayCall_d__38_object___MoveNext(
        BasicHelper__RealDelayCall_d__38_T__o *this,
        const MethodInfo_3021058 *method)
{
  int32_t _1__state; // w8
  float delay; // s8
  UnityEngine_WaitForSecondsRealtime_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  bool result; // w0

  if ( (byte_4A046A1 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_WaitForSecondsRealtime_TypeInfo, method);
    byte_4A046A1 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    ActionExtensions__Call_object_(
      this->fields.action,
      this->fields.arg,
      (const MethodInfo_2D9336C *)method->klass->rgctx_data->_3_ActionExtensions_Call_T_);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    delay = this->fields.delay;
    v6 = (UnityEngine_WaitForSecondsRealtime_o *)sub_1B64C4C(UnityEngine_WaitForSecondsRealtime_TypeInfo);
    UnityEngine_WaitForSecondsRealtime___ctor(v6, delay, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BasicHelper__RealDelayCall_d__38_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__RealDelayCall_d__38_T__o *this,
        const MethodInfo_3021114 *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BasicHelper__RealDelayCall_d__38_object___System_Collections_IEnumerator_Reset(
        BasicHelper__RealDelayCall_d__38_T__o *this,
        const MethodInfo_302111C *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1B64C4C(v3);
  System_NotSupportedException___ctor(v4, 0LL);
  sub_1B64B28(v4, method);
}


Il2CppObject *__fastcall BasicHelper__RealDelayCall_d__38_object___System_Collections_IEnumerator_get_Current(
        BasicHelper__RealDelayCall_d__38_T__o *this,
        const MethodInfo_3021150 *method)
{
  return this->fields.__2__current;
}


void __fastcall BasicHelper__RealDelayCall_d__38_object___System_IDisposable_Dispose(
        BasicHelper__RealDelayCall_d__38_T__o *this,
        const MethodInfo_3021054 *method)
{
  ;
}


void __fastcall BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType____ctor(
        BasicHelper__ToIterator_d__31_T__o *this,
        int32_t 1__state,
        const MethodInfo_3140504 *method)
{
  unsigned int CurrentManagedThreadId; // w0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  sub_19B6F58(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields, (unsigned int)1__state);
  CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
  sub_19B6F58(
    this,
    (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 64,
    CurrentManagedThreadId);
}


bool __fastcall BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___MoveNext(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_3140570 *method)
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
  v6 = *(_DWORD *)sub_1B64A24(this, rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields);
  if ( v6 == 1 )
  {
    sub_19B6F58(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields, 0xFFFFFFFFLL);
    v10 = *(_DWORD *)sub_1B64A24(
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
    sub_19B6F58(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields, 0xFFFFFFFFLL);
    if ( !*(_QWORD *)sub_1B64A24(
                       this,
                       (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 96) )
      return 0;
    v7 = this;
    v8 = 0LL;
    v9 = method->klass->rgctx_data;
  }
  sub_19B6F58(v7, (char *)v9->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 224, v8);
  v11 = *(_DWORD *)sub_1B64A24(
                     this,
                     (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 224);
  if ( v11 >= *(_DWORD *)sub_1B64A24(
                           this,
                           (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 160) )
    return 0;
  v12 = *(void **)sub_1B64A24(
                    this,
                    (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 96);
  v13 = (int *)sub_1B64A24(
                 this,
                 (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 224);
  if ( !v12 )
    sub_1B64C5C(v13, v14);
  _2_System_Func_int__T__Invoke = method->klass->rgctx_data->_2_System_Func_int__T__Invoke;
  v16 = *v13;
  methodPointer = _2_System_Func_int__T__Invoke->methodPointer;
  v23 = v16;
  v21 = &v23;
  v22 = (char *)&v21 - ((native_size + 15) & 0x1FFFFFFF0LL);
  _2_System_Func_int__T__Invoke->invoker_method(methodPointer, _2_System_Func_int__T__Invoke, v12, (void **)&v21, v22);
  sub_1B64A28(
    this,
    (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 32,
    (char *)&v21 - ((native_size + 15) & 0x1FFFFFFF0LL),
    (unsigned int)native_size);
  klass = method->klass;
  v19 = 1;
  sub_19B6F58(this, klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields, 1LL);
  return v19;
}


System_Collections_Generic_IEnumerator_T__o *__fastcall BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_T__GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_3140940 *method)
{
  int v4; // w21
  BasicHelper__ToIterator_d__31_T__o *v5; // x21
  Il2CppClass *_0_BasicHelper__ToIterator_d__31_T; // x0
  unsigned int *v7; // x0
  __int64 v8; // x1
  _QWORD *v9; // x0

  if ( *(_DWORD *)sub_1B64A24(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields) == -2
    && (v4 = *(_DWORD *)sub_1B64A24(
                          this,
                          (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 64),
        v4 == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    sub_19B6F58(this, method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields, 0LL);
    v5 = this;
  }
  else
  {
    _0_BasicHelper__ToIterator_d__31_T = method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
    if ( (BYTE5(_0_BasicHelper__ToIterator_d__31_T->vtable[0].methodPtr) & 1) == 0 )
      _0_BasicHelper__ToIterator_d__31_T = (Il2CppClass *)sub_1BB68DC(_0_BasicHelper__ToIterator_d__31_T);
    v5 = (BasicHelper__ToIterator_d__31_T__o *)sub_1B64C4C(_0_BasicHelper__ToIterator_d__31_T);
    ((void (__fastcall *)(BasicHelper__ToIterator_d__31_T__o *, _QWORD))method->klass->rgctx_data->_4_BasicHelper__ToIterator_d__31_T___ctor->methodPointer)(
      v5,
      0LL);
  }
  v7 = (unsigned int *)sub_1B64A24(
                         this,
                         (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 192);
  if ( !v5 )
    sub_1B64C5C(v7, v8);
  sub_19B6F58(v5, (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 160, *v7);
  v9 = (_QWORD *)sub_1B64A24(
                   this,
                   (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 128);
  sub_19B6BDC(v5, (char *)method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 96, *v9);
  return (System_Collections_Generic_IEnumerator_T__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_T__get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_31407C8 *method)
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
  v6 = (const void *)sub_1B64A24(this, *(_QWORD *)(*v4 + 128LL) + 32LL);
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
        const MethodInfo_3140A8C *method)
{
  return (System_Collections_IEnumerator_o *)((__int64 (__fastcall *)(BasicHelper__ToIterator_d__31_T__o *))method->klass->rgctx_data->_6_BasicHelper__ToIterator_d__31_T__System_Collections_Generic_IEnumerable_T__GetEnumerator->methodPointer)(this);
}


void __fastcall __noreturn BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_3140868 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1B64C4C(v3);
  System_NotSupportedException___ctor(v4, 0LL);
  sub_1B64B28(v4, method);
}


Il2CppObject *__fastcall BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_314089C *method)
{
  BasicHelper__ToIterator_d__31_T__RGCTXs *rgctx_data; // x8
  __int64 native_size; // x20
  const void *v5; // x0
  _QWORD v7[2]; // [xsp+0h] [xbp-10h] BYREF

  v7[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->klass->rgctx_data;
  native_size = (unsigned int)rgctx_data->_3_T->_2.native_size;
  v5 = (const void *)sub_1B64A24(this, (char *)rgctx_data->_0_BasicHelper__ToIterator_d__31_T_->_1.fields + 32);
  memcpy((char *)v7 - ((native_size + 15) & 0x1FFFFFFF0LL), v5, native_size);
  return (Il2CppObject *)j_il2cpp_value_box_0(
                           method->klass->rgctx_data->_3_T,
                           (char *)v7 - ((native_size + 15) & 0x1FFFFFFF0LL));
}


void __fastcall BasicHelper__ToIterator_d__31___Il2CppFullySharedGenericType___System_IDisposable_Dispose(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_314056C *method)
{
  ;
}


void __fastcall BasicHelper__ToIterator_d__31_float____ctor(
        BasicHelper__ToIterator_d__31_T__o *this,
        int32_t 1__state,
        const MethodInfo_3140330 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  LODWORD(this->fields.__2__current) = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BasicHelper__ToIterator_d__31_float___MoveNext(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_3140368 *method)
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
    sub_1B64C5C(this, v5);
  v8 = (*(float (__fastcall **)(_QWORD))(v7 + 24))(*(_QWORD *)(v7 + 64));
  result = 1;
  *((float *)&this->fields.__1__state + 1) = v8;
  this->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_T__o *__fastcall BasicHelper__ToIterator_d__31_float___System_Collections_Generic_IEnumerable_T__GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_3140458 *method)
{
  int _2__current; // w21
  int32_t v5; // w2
  int32_t v6; // w3
  BasicHelper__ToIterator_d__31_T__o *v7; // x20
  Il2CppClass *_0_BasicHelper__ToIterator_d__31_T; // x0
  struct System_Func_int__T__o *func; // x1

  if ( this->fields.__1__state == -2
    && (_2__current = (int)this->fields.__2__current, _2__current == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v7 = this;
  }
  else
  {
    _0_BasicHelper__ToIterator_d__31_T = method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
    if ( (BYTE5(_0_BasicHelper__ToIterator_d__31_T->vtable[0].methodPtr) & 1) == 0 )
      _0_BasicHelper__ToIterator_d__31_T = (Il2CppClass *)sub_1BB68DC(_0_BasicHelper__ToIterator_d__31_T);
    v7 = (BasicHelper__ToIterator_d__31_T__o *)sub_1B64C4C(_0_BasicHelper__ToIterator_d__31_T);
    System_Object___ctor((Il2CppObject *)v7, 0LL);
    v7->fields.__1__state = 0;
    LODWORD(v7->fields.__2__current) = System_Environment__get_CurrentManagedThreadId(0LL);
  }
  LODWORD(v7->fields.__3__func) = HIDWORD(this->fields.__3__func);
  func = this->fields.func;
  *(_QWORD *)&v7->fields.__l__initialThreadId = func;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v7->fields.__l__initialThreadId, (int32_t)func, v5, v6);
  return (System_Collections_Generic_IEnumerator_T__o *)v7;
}


float __fastcall BasicHelper__ToIterator_d__31_float___System_Collections_Generic_IEnumerator_T__get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_31403F4 *method)
{
  return *((float *)&this->fields.__1__state + 1);
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__ToIterator_d__31_float___System_Collections_IEnumerable_GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_31404F4 *method)
{
  return (System_Collections_IEnumerator_o *)BasicHelper__ToIterator_d__31_float___System_Collections_Generic_IEnumerable_T__GetEnumerator(
                                               this,
                                               (const MethodInfo_3140458 *)method->klass->rgctx_data->_6_BasicHelper__ToIterator_d__31_T__System_Collections_Generic_IEnumerable_T__GetEnumerator);
}


void __fastcall __noreturn BasicHelper__ToIterator_d__31_float___System_Collections_IEnumerator_Reset(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_31403FC *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1B64C4C(v3);
  System_NotSupportedException___ctor(v4, 0LL);
  sub_1B64B28(v4, method);
}


Il2CppObject *__fastcall BasicHelper__ToIterator_d__31_float___System_Collections_IEnumerator_get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_3140430 *method)
{
  int v3; // [xsp+Ch] [xbp-4h] BYREF

  v3 = *(&this->fields.__1__state + 1);
  return (Il2CppObject *)j_il2cpp_value_box_0(method->klass->rgctx_data->_3_T, &v3);
}


void __fastcall BasicHelper__ToIterator_d__31_float___System_IDisposable_Dispose(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_3140364 *method)
{
  ;
}


void __fastcall BasicHelper__ToIterator_d__31_object____ctor(
        BasicHelper__ToIterator_d__31_T__o *this,
        int32_t 1__state,
        const MethodInfo_3140170 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BasicHelper__ToIterator_d__31_object___MoveNext(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_31401A8 *method)
{
  int32_t _1__state; // w8
  struct System_Func_int__T__o *func; // x8
  __int64 v5; // x1
  int32_t i_5__2; // w8
  struct System_Func_int__T__o *v7; // x8
  Il2CppObject *v8; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v10; // w2
  int32_t v11; // w3
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
    sub_1B64C5C(this, v5);
  v8 = (Il2CppObject *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *))v7->fields.m_target)(v7->fields.original_method_info);
  this->fields.__2__current = v8;
  p__2__current = &this->fields.__2__current;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v8, v10, v11);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


System_Collections_Generic_IEnumerator_T__o *__fastcall BasicHelper__ToIterator_d__31_object___System_Collections_Generic_IEnumerable_T__GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_3140284 *method)
{
  int32_t l__initialThreadId; // w21
  int32_t v5; // w2
  int32_t v6; // w3
  BasicHelper__ToIterator_d__31_T__o *v7; // x20
  Il2CppClass *_0_BasicHelper__ToIterator_d__31_T; // x0
  struct System_Func_int__T__o *_3__func; // x1

  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v7 = this;
  }
  else
  {
    _0_BasicHelper__ToIterator_d__31_T = method->klass->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
    if ( (BYTE5(_0_BasicHelper__ToIterator_d__31_T->vtable[0].methodPtr) & 1) == 0 )
      _0_BasicHelper__ToIterator_d__31_T = (Il2CppClass *)sub_1BB68DC(_0_BasicHelper__ToIterator_d__31_T);
    v7 = (BasicHelper__ToIterator_d__31_T__o *)sub_1B64C4C(_0_BasicHelper__ToIterator_d__31_T);
    System_Object___ctor((Il2CppObject *)v7, 0LL);
    v7->fields.__1__state = 0;
    v7->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
  }
  v7->fields.loopCount = this->fields.__3__loopCount;
  _3__func = this->fields.__3__func;
  v7->fields.func = _3__func;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v7->fields.func, (int32_t)_3__func, v5, v6);
  return (System_Collections_Generic_IEnumerator_T__o *)v7;
}


Il2CppObject *__fastcall BasicHelper__ToIterator_d__31_object___System_Collections_Generic_IEnumerator_T__get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_3140240 *method)
{
  return this->fields.__2__current;
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__ToIterator_d__31_object___System_Collections_IEnumerable_GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_3140320 *method)
{
  return (System_Collections_IEnumerator_o *)BasicHelper__ToIterator_d__31_object___System_Collections_Generic_IEnumerable_T__GetEnumerator(
                                               this,
                                               (const MethodInfo_3140284 *)method->klass->rgctx_data->_6_BasicHelper__ToIterator_d__31_T__System_Collections_Generic_IEnumerable_T__GetEnumerator);
}


void __fastcall __noreturn BasicHelper__ToIterator_d__31_object___System_Collections_IEnumerator_Reset(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_3140248 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1B64C4C(v3);
  System_NotSupportedException___ctor(v4, 0LL);
  sub_1B64B28(v4, method);
}


Il2CppObject *__fastcall BasicHelper__ToIterator_d__31_object___System_Collections_IEnumerator_get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_314027C *method)
{
  return this->fields.__2__current;
}


void __fastcall BasicHelper__ToIterator_d__31_object___System_IDisposable_Dispose(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_31401A4 *method)
{
  ;
}


void __fastcall BasicHelper__WaitForEndOfFrameCall_d__43___ctor(
        BasicHelper__WaitForEndOfFrameCall_d__43_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BasicHelper__WaitForEndOfFrameCall_d__43__MoveNext(
        BasicHelper__WaitForEndOfFrameCall_d__43_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4A001B5 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_WaitForEndOfFrame_TypeInfo, method);
    byte_4A001B5 = 1;
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
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0LL);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v4, v5, v6);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BasicHelper__WaitForEndOfFrameCall_d__43__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__WaitForEndOfFrameCall_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BasicHelper__WaitForEndOfFrameCall_d__43__System_Collections_IEnumerator_Reset(
        BasicHelper__WaitForEndOfFrameCall_d__43_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_BasicHelper__WaitForEndOfFrameCall_d__43_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
}


Il2CppObject *__fastcall BasicHelper__WaitForEndOfFrameCall_d__43__System_Collections_IEnumerator_get_Current(
        BasicHelper__WaitForEndOfFrameCall_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BasicHelper__WaitForEndOfFrameCall_d__43__System_IDisposable_Dispose(
        BasicHelper__WaitForEndOfFrameCall_d__43_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BasicHelper___c__22___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____cctor(
        const MethodInfo_2FFBBB4 *method)
{
  BasicHelper___c__22_K__V__c *klass; // x0
  __int64 _0_BasicHelper___c__22_K__V; // x0
  __int64 v4; // x0
  BasicHelper___c__22_K__V__c *v5; // x8
  __int64 v6; // x20
  __int16 v7; // w9
  BasicHelper___c__22_K__V__c *v8; // x0
  void (__fastcall *methodPointer)(__int64, MethodInfo *); // x21
  int32_t v10; // w2
  int32_t v11; // w3
  BasicHelper___c__22_K__V__c *v12; // x0
  __int64 _2_BasicHelper___c__22_K__V; // x0
  BasicHelper___c__22_K__V__c *v14; // x0
  __int64 v15; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (BasicHelper___c__22_K__V__c *)sub_1BB68DC(klass);
  _0_BasicHelper___c__22_K__V = (__int64)klass->rgctx_data->_0_BasicHelper___c__22_K__V_;
  if ( (*(_BYTE *)(_0_BasicHelper___c__22_K__V + 309) & 1) == 0 )
    _0_BasicHelper___c__22_K__V = sub_1BB68DC(_0_BasicHelper___c__22_K__V);
  v4 = sub_1B64C4C(_0_BasicHelper___c__22_K__V);
  v5 = method->klass;
  v6 = v4;
  v7 = *(_WORD *)((char *)&v5->vtable._0_Equals.methodPtr + 5);
  if ( (v7 & 1) != 0 )
  {
    v8 = method->klass;
  }
  else
  {
    v8 = (BasicHelper___c__22_K__V__c *)sub_1BB68DC(method->klass);
    v5 = method->klass;
    v7 = *(_WORD *)((char *)&v5->vtable._0_Equals.methodPtr + 5);
  }
  methodPointer = (void (__fastcall *)(__int64, MethodInfo *))v8->rgctx_data->_1_BasicHelper___c__22_K__V___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    v5 = (BasicHelper___c__22_K__V__c *)sub_1BB68DC(v5);
  methodPointer(v6, v5->rgctx_data->_1_BasicHelper___c__22_K__V___ctor);
  v12 = method->klass;
  if ( (BYTE5(v12->vtable._0_Equals.methodPtr) & 1) == 0 )
    v12 = (BasicHelper___c__22_K__V__c *)sub_1BB68DC(v12);
  _2_BasicHelper___c__22_K__V = (__int64)v12->rgctx_data->_2_BasicHelper___c__22_K__V_;
  if ( (*(_BYTE *)(_2_BasicHelper___c__22_K__V + 309) & 1) == 0 )
    _2_BasicHelper___c__22_K__V = sub_1BB68DC(_2_BasicHelper___c__22_K__V);
  **(_QWORD **)(_2_BasicHelper___c__22_K__V + 184) = v6;
  v14 = method->klass;
  if ( (BYTE5(v14->vtable._0_Equals.methodPtr) & 1) == 0 )
    v14 = (BasicHelper___c__22_K__V__c *)sub_1BB68DC(v14);
  v15 = (__int64)v14->rgctx_data->_2_BasicHelper___c__22_K__V_;
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BB68DC(v15);
  sub_1B649A4(*(ServantStatusBattleListViewItem_o **)(v15 + 184), v6, v10, v11);
}


void __fastcall BasicHelper___c__22___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor(
        BasicHelper___c__22_K__V__o *this,
        const MethodInfo_2FFBCA8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall BasicHelper___c__22___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Remove_b__22_0(
        BasicHelper___c__22_K__V__o *this,
        System_Collections_Generic_KeyValuePair_K__V__o pair,
        const MethodInfo_2FFBCB0 *method)
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


void __fastcall BasicHelper___c__22_int__object____cctor(const MethodInfo_2FFBAE8 *method)
{
  BasicHelper___c__22_K__V__c *klass; // x0
  __int64 _0_BasicHelper___c__22_K__V; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  BasicHelper___c__22_K__V__c *v7; // x0
  __int64 _2_BasicHelper___c__22_K__V; // x0
  BasicHelper___c__22_K__V__c *v9; // x0
  __int64 v10; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (BasicHelper___c__22_K__V__c *)sub_1BB68DC(klass);
  _0_BasicHelper___c__22_K__V = (__int64)klass->rgctx_data->_0_BasicHelper___c__22_K__V_;
  if ( (*(_BYTE *)(_0_BasicHelper___c__22_K__V + 309) & 1) == 0 )
    _0_BasicHelper___c__22_K__V = sub_1BB68DC(_0_BasicHelper___c__22_K__V);
  v4 = (Il2CppObject *)sub_1B64C4C(_0_BasicHelper___c__22_K__V);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BB68DC(method->klass);
  System_Object___ctor(v4, 0LL);
  v7 = method->klass;
  if ( (BYTE5(v7->vtable._0_Equals.methodPtr) & 1) == 0 )
    v7 = (BasicHelper___c__22_K__V__c *)sub_1BB68DC(v7);
  _2_BasicHelper___c__22_K__V = (__int64)v7->rgctx_data->_2_BasicHelper___c__22_K__V_;
  if ( (*(_BYTE *)(_2_BasicHelper___c__22_K__V + 309) & 1) == 0 )
    _2_BasicHelper___c__22_K__V = sub_1BB68DC(_2_BasicHelper___c__22_K__V);
  **(_QWORD **)(_2_BasicHelper___c__22_K__V + 184) = v4;
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (BasicHelper___c__22_K__V__c *)sub_1BB68DC(v9);
  v10 = (__int64)v9->rgctx_data->_2_BasicHelper___c__22_K__V_;
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BB68DC(v10);
  sub_1B649A4(*(ServantStatusBattleListViewItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall BasicHelper___c__22_int__object____ctor(
        BasicHelper___c__22_K__V__o *this,
        const MethodInfo_2FFBBA4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BasicHelper___c__22_int__object____Remove_b__22_0(
        BasicHelper___c__22_K__V__o *this,
        System_Collections_Generic_KeyValuePair_K__V__o pair,
        const MethodInfo_2FFBBAC *method)
{
  return (int32_t)pair.fields.key;
}


void __fastcall BasicHelper___c__26___Il2CppFullySharedGenericType____cctor(const MethodInfo_2FFC230 *method)
{
  BasicHelper___c__26_T__c *klass; // x0
  __int64 _0_BasicHelper___c__26_T; // x0
  __int64 v4; // x0
  BasicHelper___c__26_T__c *v5; // x8
  __int64 v6; // x20
  __int16 v7; // w9
  BasicHelper___c__26_T__c *v8; // x0
  void (__fastcall *methodPointer)(__int64, MethodInfo *); // x21
  int32_t v10; // w2
  int32_t v11; // w3
  BasicHelper___c__26_T__c *v12; // x0
  __int64 _2_BasicHelper___c__26_T; // x0
  BasicHelper___c__26_T__c *v14; // x0
  __int64 v15; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (BasicHelper___c__26_T__c *)sub_1BB68DC(klass);
  _0_BasicHelper___c__26_T = (__int64)klass->rgctx_data->_0_BasicHelper___c__26_T_;
  if ( (*(_BYTE *)(_0_BasicHelper___c__26_T + 309) & 1) == 0 )
    _0_BasicHelper___c__26_T = sub_1BB68DC(_0_BasicHelper___c__26_T);
  v4 = sub_1B64C4C(_0_BasicHelper___c__26_T);
  v5 = method->klass;
  v6 = v4;
  v7 = *(_WORD *)((char *)&v5->vtable._0_Equals.methodPtr + 5);
  if ( (v7 & 1) != 0 )
  {
    v8 = method->klass;
  }
  else
  {
    v8 = (BasicHelper___c__26_T__c *)sub_1BB68DC(method->klass);
    v5 = method->klass;
    v7 = *(_WORD *)((char *)&v5->vtable._0_Equals.methodPtr + 5);
  }
  methodPointer = (void (__fastcall *)(__int64, MethodInfo *))v8->rgctx_data->_1_BasicHelper___c__26_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    v5 = (BasicHelper___c__26_T__c *)sub_1BB68DC(v5);
  methodPointer(v6, v5->rgctx_data->_1_BasicHelper___c__26_T___ctor);
  v12 = method->klass;
  if ( (BYTE5(v12->vtable._0_Equals.methodPtr) & 1) == 0 )
    v12 = (BasicHelper___c__26_T__c *)sub_1BB68DC(v12);
  _2_BasicHelper___c__26_T = (__int64)v12->rgctx_data->_2_BasicHelper___c__26_T_;
  if ( (*(_BYTE *)(_2_BasicHelper___c__26_T + 309) & 1) == 0 )
    _2_BasicHelper___c__26_T = sub_1BB68DC(_2_BasicHelper___c__26_T);
  **(_QWORD **)(_2_BasicHelper___c__26_T + 184) = v6;
  v14 = method->klass;
  if ( (BYTE5(v14->vtable._0_Equals.methodPtr) & 1) == 0 )
    v14 = (BasicHelper___c__26_T__c *)sub_1BB68DC(v14);
  v15 = (__int64)v14->rgctx_data->_2_BasicHelper___c__26_T_;
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BB68DC(v15);
  sub_1B649A4(*(ServantStatusBattleListViewItem_o **)(v15 + 184), v6, v10, v11);
}


void __fastcall BasicHelper___c__26___Il2CppFullySharedGenericType____ctor(
        BasicHelper___c__26_T__o *this,
        const MethodInfo_2FFC324 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BasicHelper___c__26___Il2CppFullySharedGenericType____ExcludeNull_b__26_0(
        BasicHelper___c__26_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o x,
        const MethodInfo_2FFC32C *method)
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
  return sub_1B64C10(*(_QWORD *)(*(_QWORD *)(v3 + 192) + 24LL), v5) & 1;
}


void __fastcall BasicHelper___c__26_object____cctor(const MethodInfo_2FFC160 *method)
{
  BasicHelper___c__26_T__c *klass; // x0
  __int64 _0_BasicHelper___c__26_T; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  BasicHelper___c__26_T__c *v7; // x0
  __int64 _2_BasicHelper___c__26_T; // x0
  BasicHelper___c__26_T__c *v9; // x0
  __int64 v10; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (BasicHelper___c__26_T__c *)sub_1BB68DC(klass);
  _0_BasicHelper___c__26_T = (__int64)klass->rgctx_data->_0_BasicHelper___c__26_T_;
  if ( (*(_BYTE *)(_0_BasicHelper___c__26_T + 309) & 1) == 0 )
    _0_BasicHelper___c__26_T = sub_1BB68DC(_0_BasicHelper___c__26_T);
  v4 = (Il2CppObject *)sub_1B64C4C(_0_BasicHelper___c__26_T);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BB68DC(method->klass);
  System_Object___ctor(v4, 0LL);
  v7 = method->klass;
  if ( (BYTE5(v7->vtable._0_Equals.methodPtr) & 1) == 0 )
    v7 = (BasicHelper___c__26_T__c *)sub_1BB68DC(v7);
  _2_BasicHelper___c__26_T = (__int64)v7->rgctx_data->_2_BasicHelper___c__26_T_;
  if ( (*(_BYTE *)(_2_BasicHelper___c__26_T + 309) & 1) == 0 )
    _2_BasicHelper___c__26_T = sub_1BB68DC(_2_BasicHelper___c__26_T);
  **(_QWORD **)(_2_BasicHelper___c__26_T + 184) = v4;
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (BasicHelper___c__26_T__c *)sub_1BB68DC(v9);
  v10 = (__int64)v9->rgctx_data->_2_BasicHelper___c__26_T_;
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BB68DC(v10);
  sub_1B649A4(*(ServantStatusBattleListViewItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall BasicHelper___c__26_object____ctor(BasicHelper___c__26_T__o *this, const MethodInfo_2FFC21C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BasicHelper___c__26_object____ExcludeNull_b__26_0(
        BasicHelper___c__26_T__o *this,
        Il2CppObject *x,
        const MethodInfo_2FFC224 *method)
{
  return x != 0LL;
}