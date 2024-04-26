UIWidget_o *__fastcall BasicHelper__AddNotExistComponent_UIWidget_(
        UnityEngine_Transform_o *self,
        const MethodInfo_1BDC668 *method)
{
  UnityEngine_Component_o *v3; // x20
  UnityEngine_Object_o *v4; // x21

  v3 = (UnityEngine_Component_o *)self;
  if ( (byte_4353F97 & 1) == 0 )
  {
    self = (UnityEngine_Transform_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353F97 = 1;
  }
  if ( !v3 )
    goto LABEL_12;
  self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v3, 0LL);
  if ( !self )
    goto LABEL_12;
  v4 = (UnityEngine_Object_o *)((__int64 (*)(void))method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_->methodPointer)();
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v3, 0LL);
    if ( self )
      return (UIWidget_o *)((__int64 (*)(void))method->rgctx_data->_2_UnityEngine_GameObject_AddComponent_T_->methodPointer)();
LABEL_12:
    sub_B7076C(self, method);
  }
  return (UIWidget_o *)v4;
}


bool __fastcall BasicHelper__Any_BattleResultEventItemComponent_EventDropItemInfo_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_1BDCBD8 *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  int v6; // w0
  int v7; // w22
  unsigned int v8; // w23
  const MethodInfo_1BDCBD8_RGCTXs *rgctx_data; // x8
  __int64 (__fastcall *methodPointer)(System_Func_T__bool__o *, __int128 *, MethodInfo *); // x9
  __int128 v12[4]; // [xsp+0h] [xbp-90h] BYREF
  __int128 v13; // [xsp+40h] [xbp-50h]
  __int128 v14; // [xsp+50h] [xbp-40h]

  if ( !list )
LABEL_10:
    sub_B7076C(list, func);
  v5 = list;
  v6 = ((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)();
  if ( v6 < 1 )
    return 0;
  v7 = v6;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_Generic_List_T__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
                                                     v5,
                                                     v8);
    v13 = v12[2];
    v14 = v12[3];
    if ( !func )
      goto LABEL_10;
    rgctx_data = method->rgctx_data;
    methodPointer = (__int64 (__fastcall *)(System_Func_T__bool__o *, __int128 *, MethodInfo *))rgctx_data->_2_System_Func_T__bool__Invoke->methodPointer;
    v12[0] = v13;
    v12[1] = v14;
    if ( (methodPointer(func, v12, rgctx_data->_2_System_Func_T__bool__Invoke) & 1) != 0 )
      return 1;
    if ( (int)++v8 >= v7 )
      return 0;
  }
}


bool __fastcall BasicHelper__Any_ListViewSort_FilterCategoryKind_(
        ListViewSort_FilterCategoryKind_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_1BDC940 *method)
{
  __int64 v3; // x8
  ListViewSort_FilterCategoryKind_array *v4; // x21
  unsigned __int64 v7; // x22
  __int64 v9; // x0

  if ( !array )
LABEL_11:
    sub_B7076C(array, func);
  v3 = *(_QWORD *)&array->max_length;
  v4 = array;
  if ( (int)v3 < 1 )
    return 0;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v3 )
    {
      v9 = sub_B70798(array);
      sub_B70738(v9, 0LL);
    }
    if ( !func )
      goto LABEL_11;
    array = (ListViewSort_FilterCategoryKind_array *)((__int64 (__fastcall *)(System_Func_T__bool__o *, _QWORD))method->rgctx_data->_0_System_Func_T__bool__Invoke->methodPointer)(
                                                       func,
                                                       (unsigned int)v4->m_Items[v7 + 1]);
    if ( ((unsigned __int8)array & 1) != 0 )
      return 1;
    LODWORD(v3) = v4->max_length;
    if ( (__int64)++v7 >= (int)v3 )
      return 0;
  }
}


bool __fastcall BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
        WellFired_USFGOPlayBgmEventConditional_CondBGM_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_1BDCB34 *method)
{
  __int64 v3; // x8
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v4; // x21
  unsigned __int64 v7; // x22
  __int64 v9; // x0

  if ( !array )
LABEL_11:
    sub_B7076C(array, func);
  v3 = *(_QWORD *)&array->max_length;
  v4 = array;
  if ( (int)v3 < 1 )
    return 0;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v3 )
    {
      v9 = sub_B70798(array);
      sub_B70738(v9, 0LL);
    }
    if ( !func )
      goto LABEL_11;
    array = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)((__int64 (__fastcall *)(System_Func_T__bool__o *, WellFired_USFGOPlayBgmEventConditional_CondBGM_o *))method->rgctx_data->_0_System_Func_T__bool__Invoke->methodPointer)(
                                                                      func,
                                                                      v4->m_Items[v7]);
    if ( ((unsigned __int8)array & 1) != 0 )
      return 1;
    LODWORD(v3) = v4->max_length;
    if ( (__int64)++v7 >= (int)v3 )
      return 0;
  }
}


bool __fastcall BasicHelper__Any_Voice_BATTLE_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_1BDC894 *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  int v6; // w0
  int v7; // w22
  unsigned int v8; // w23

  if ( !list )
LABEL_9:
    sub_B7076C(list, func);
  v5 = list;
  v6 = ((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)();
  if ( v6 < 1 )
    return 0;
  v7 = v6;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_Generic_List_T__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
                                                     v5,
                                                     v8);
    if ( !func )
      goto LABEL_9;
    if ( (((__int64 (__fastcall *)(System_Func_T__bool__o *, _QWORD))method->rgctx_data->_2_System_Func_T__bool__Invoke->methodPointer)(
            func,
            (unsigned int)list) & 1) != 0 )
      return 1;
    if ( (int)++v8 >= v7 )
      return 0;
  }
}


bool __fastcall BasicHelper__Any_WarBoardData_SquareRangeSearch_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_1BDCA88 *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  int v6; // w0
  int v7; // w22
  unsigned int v8; // w23

  if ( !list )
LABEL_9:
    sub_B7076C(list, func);
  v5 = list;
  v6 = ((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)();
  if ( v6 < 1 )
    return 0;
  v7 = v6;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_Generic_List_T__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
                                                     v5,
                                                     v8);
    if ( !func )
      goto LABEL_9;
    if ( (((__int64 (__fastcall *)(System_Func_T__bool__o *, System_Collections_Generic_List_T__o *))method->rgctx_data->_2_System_Func_T__bool__Invoke->methodPointer)(
            func,
            list) & 1) != 0 )
      return 1;
    if ( (int)++v8 >= v7 )
      return 0;
  }
}


bool __fastcall BasicHelper__Any_int_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__bool__o *func,
        const MethodInfo_1BDC744 *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  int v6; // w0
  int v7; // w22
  unsigned int v8; // w23

  if ( !list )
LABEL_9:
    sub_B7076C(list, func);
  v5 = list;
  v6 = ((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)();
  if ( v6 < 1 )
    return 0;
  v7 = v6;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_Generic_List_T__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
                                                     v5,
                                                     v8);
    if ( !func )
      goto LABEL_9;
    if ( (((__int64 (__fastcall *)(System_Func_T__bool__o *, _QWORD))method->rgctx_data->_2_System_Func_T__bool__Invoke->methodPointer)(
            func,
            (unsigned int)list) & 1) != 0 )
      return 1;
    if ( (int)++v8 >= v7 )
      return 0;
  }
}


bool __fastcall BasicHelper__Any_int__29214704(
        System_Int32_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_1BDC7F0 *method)
{
  __int64 v3; // x8
  System_Int32_array *v4; // x21
  unsigned __int64 v7; // x22
  __int64 v9; // x0

  if ( !array )
LABEL_11:
    sub_B7076C(array, func);
  v3 = *(_QWORD *)&array->max_length;
  v4 = array;
  if ( (int)v3 < 1 )
    return 0;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v3 )
    {
      v9 = sub_B70798(array);
      sub_B70738(v9, 0LL);
    }
    if ( !func )
      goto LABEL_11;
    array = (System_Int32_array *)((__int64 (__fastcall *)(System_Func_T__bool__o *, _QWORD))method->rgctx_data->_0_System_Func_T__bool__Invoke->methodPointer)(
                                    func,
                                    (unsigned int)v4->m_Items[v7 + 1]);
    if ( ((unsigned __int8)array & 1) != 0 )
      return 1;
    LODWORD(v3) = v4->max_length;
    if ( (__int64)++v7 >= (int)v3 )
      return 0;
  }
}


bool __fastcall BasicHelper__Any_long_(
        System_Int64_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_1BDC9E4 *method)
{
  __int64 v3; // x8
  System_Int64_array *v4; // x21
  unsigned __int64 v7; // x22
  __int64 v9; // x0

  if ( !array )
LABEL_11:
    sub_B7076C(array, func);
  v3 = *(_QWORD *)&array->max_length;
  v4 = array;
  if ( (int)v3 < 1 )
    return 0;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v3 )
    {
      v9 = sub_B70798(array);
      sub_B70738(v9, 0LL);
    }
    if ( !func )
      goto LABEL_11;
    array = (System_Int64_array *)((__int64 (__fastcall *)(System_Func_T__bool__o *, int64_t))method->rgctx_data->_0_System_Func_T__bool__Invoke->methodPointer)(
                                    func,
                                    v4->m_Items[v7]);
    if ( ((unsigned __int8)array & 1) != 0 )
      return 1;
    LODWORD(v3) = v4->max_length;
    if ( (__int64)++v7 >= (int)v3 )
      return 0;
  }
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


bool __fastcall BasicHelper__ContainsSelfNotNull_int_(
        System_Collections_Generic_HashSet_T__o *self,
        int32_t item,
        const MethodInfo_1BDCCA4 *method)
{
  if ( self )
    LOBYTE(self) = ((__int64 (__fastcall *)(System_Collections_Generic_HashSet_T__o *, int32_t))method->rgctx_data->_0_System_Collections_Generic_HashSet_T__Contains->methodPointer)(
                     self,
                     item);
  return (char)self;
}


bool __fastcall BasicHelper__ContainsSelfNotNull_object_(
        System_Collections_Generic_HashSet_T__o *self,
        Il2CppObject *item,
        const MethodInfo_1BDCCBC *method)
{
  if ( self )
    LOBYTE(self) = ((__int64 (__fastcall *)(System_Collections_Generic_HashSet_T__o *, Il2CppObject *))method->rgctx_data->_0_System_Collections_Generic_HashSet_T__Contains->methodPointer)(
                     self,
                     item);
  return (char)self;
}


System_Int32_array *__fastcall BasicHelper__Convert2IntArray(
        System_String_o *self,
        uint16_t separator,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array *v7; // x0
  System_String_array *v8; // x19
  __int64 v9; // x8
  System_Int32_array *v10; // x20
  unsigned __int64 v11; // x21
  __int64 v13; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_434F7C4 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&int___TypeInfo);
    byte_434F7C4 = 1;
  }
  result = 0;
  v5 = sub_B706AC(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_19;
  v6 = v5;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_18;
  *(_WORD *)(v5 + 32) = separator;
  if ( !self )
LABEL_19:
    sub_B7076C(v5, v6);
  v7 = System_String__Split(self, (System_Char_array *)v5, 0LL);
  if ( !v7 )
    return 0LL;
  v8 = v7;
  v5 = sub_B706AC(int___TypeInfo, v7->max_length);
  v9 = *(_QWORD *)&v8->max_length;
  v10 = (System_Int32_array *)v5;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      result = 0;
      if ( v11 >= (unsigned int)v9 )
        break;
      v5 = System_Int32__TryParse(v8->m_Items[v11], &result, 0LL);
      if ( (v5 & 1) != 0 )
      {
        if ( !v10 )
          goto LABEL_19;
        if ( v11 >= v10->max_length )
          break;
        v10->m_Items[v11 + 1] = result;
      }
      LODWORD(v9) = v8->max_length;
      if ( (__int64)++v11 >= (int)v9 )
        return v10;
    }
LABEL_18:
    v13 = sub_B70798(v5);
    sub_B70738(v13, 0LL);
  }
  return v10;
}


int32_t __fastcall BasicHelper__DecryptValue(int32_t self, const MethodInfo *method)
{
  if ( (byte_434F7BD & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F7BD = 1;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Decrypt(self, 0LL);
}


int32_t __fastcall BasicHelper__DecryptValue_20858460(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o self,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v5; // 0:x0.16

  v2 = *(_QWORD *)&self.fields.fakeValue;
  v3 = *(_QWORD *)&self.fields.currentCryptoKey;
  if ( (byte_434F7BE & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F7BE = 1;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v5.fields.currentCryptoKey = v3;
  *(_QWORD *)&v5.fields.fakeValue = v2;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v5, 0LL);
}


System_String_o *__fastcall BasicHelper__DecryptValue_20858676(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *self,
        const MethodInfo *method)
{
  if ( (byte_434F7C0 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_434F7C0 = 1;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45218448(self, 0LL);
}


int64_t __fastcall BasicHelper__DecryptValue_20858776(int64_t self, const MethodInfo *method)
{
  if ( (byte_434F7C1 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_434F7C1 = 1;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Decrypt(self, 0LL);
}


int64_t __fastcall BasicHelper__DecryptValue_20858876(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *self,
        const MethodInfo *method)
{
  __int128 v3; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-30h]

  if ( (byte_434F7C2 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_434F7C2 = 1;
  }
  v3 = *(_OWORD *)&self->fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&self->fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v5, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__DelayCall(
        float delay,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_434F7C8 & 1) == 0 )
  {
    sub_B70694(&BasicHelper__DelayCall_d__35_TypeInfo);
    byte_434F7C8 = 1;
  }
  v5 = sub_B70764(BasicHelper__DelayCall_d__35_TypeInfo);
  BasicHelper__DelayCall_d__35___ctor((BasicHelper__DelayCall_d__35_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(float *)(v5 + 32) = delay;
  *(_QWORD *)(v5 + 40) = action;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)action, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__DelayCall_ShowAllEx_DamageFuncArgument_(
        float delay,
        System_Action_T__o *action,
        HutongGames_PlayMaker_Actions_ShowAllEx_DamageFuncArgument_o *arg,
        const MethodInfo_1BDCD74 *method)
{
  Il2CppClass *_0_BasicHelper__DelayCall_d__36_T; // x22
  __int64 v9; // x0
  const MethodInfo_1BDCD74_RGCTXs *rgctx_data; // x8
  __int64 v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int128 v20; // q0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  _0_BasicHelper__DelayCall_d__36_T = method->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_;
  if ( (BYTE2(_0_BasicHelper__DelayCall_d__36_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_);
  v9 = sub_B70764(_0_BasicHelper__DelayCall_d__36_T);
  rgctx_data = method->rgctx_data;
  v11 = v9;
  v12 = ((__int64 (__fastcall *)(__int64, _QWORD))rgctx_data->_1_BasicHelper__DelayCall_d__36_T___ctor->methodPointer)(
          v9,
          0LL);
  if ( !v11 )
    sub_B7076C(v12, v13);
  *(float *)(v11 + 32) = delay;
  *(_QWORD *)(v11 + 40) = action;
  sub_B70630((BattleServantConfConponent_o *)(v11 + 40), (System_Int32_array **)action, v14, v15, v16, v17, v18, v19);
  v20 = *(_OWORD *)&arg->fields.perf;
  *(_QWORD *)(v11 + 64) = *(_QWORD *)&arg->fields.damageIndex;
  *(_OWORD *)(v11 + 48) = v20;
  sub_B70630((BattleServantConfConponent_o *)(v11 + 48), 0LL, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v11;
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__DelayCall_object_(
        float delay,
        System_Action_T__o *action,
        Il2CppObject *arg,
        const MethodInfo_1BDCCD4 *method)
{
  Il2CppClass *_0_BasicHelper__DelayCall_d__36_T; // x22
  __int64 v9; // x0
  const MethodInfo_1BDCCD4_RGCTXs *rgctx_data; // x8
  __int64 v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  _0_BasicHelper__DelayCall_d__36_T = method->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_;
  if ( (BYTE2(_0_BasicHelper__DelayCall_d__36_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_0_BasicHelper__DelayCall_d__36_T_);
  v9 = sub_B70764(_0_BasicHelper__DelayCall_d__36_T);
  rgctx_data = method->rgctx_data;
  v11 = v9;
  v12 = ((__int64 (__fastcall *)(__int64, _QWORD))rgctx_data->_1_BasicHelper__DelayCall_d__36_T___ctor->methodPointer)(
          v9,
          0LL);
  if ( !v11 )
    sub_B7076C(v12, v13);
  *(float *)(v11 + 32) = delay;
  *(_QWORD *)(v11 + 40) = action;
  sub_B70630((BattleServantConfConponent_o *)(v11 + 40), (System_Int32_array **)action, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 48) = arg;
  sub_B70630((BattleServantConfConponent_o *)(v11 + 48), (System_Int32_array **)arg, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v11;
}


System_String_o *__fastcall BasicHelper__EncryptDecryptValue(System_String_o *self, const MethodInfo *method)
{
  if ( (byte_434F7BF & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_434F7BF = 1;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
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
    sub_B7076C(IsNullOrEmpty, v6);
  return System_String__Equals_44745508(self, target, 0LL);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        const MethodInfo_1BDCE20 *method)
{
  Il2CppClass *_0_BasicHelper___c__26_T; // x21
  __int16 v5; // w8
  Il2CppClass *v6; // x21
  Il2CppClass *v7; // x21
  Il2CppClass *v8; // x21
  System_Int32_array **v9; // x21
  Il2CppClass *v10; // x21
  __int16 v11; // w8
  Il2CppClass *v12; // x21
  Il2CppClass *v13; // x21
  const MethodInfo_1BDCE20_RGCTXs *rgctx_data; // x8
  Il2CppClass *v15; // x21
  Il2CppClass *_2_System_Func_T__bool; // x23
  __int64 v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  Il2CppClass *v24; // x22
  char *static_fields; // x0

  _0_BasicHelper___c__26_T = method->rgctx_data->_0_BasicHelper___c__26_T_;
  v5 = WORD1(_0_BasicHelper___c__26_T->vtable[0].methodPtr);
  if ( (v5 & 1) == 0 )
  {
    sub_B08394(method->rgctx_data->_0_BasicHelper___c__26_T_);
    v5 = WORD1(_0_BasicHelper___c__26_T->vtable[0].methodPtr);
  }
  if ( (v5 & 0x400) != 0 )
  {
    v6 = method->rgctx_data->_0_BasicHelper___c__26_T_;
    if ( (BYTE2(v6->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_0_BasicHelper___c__26_T_);
    if ( !v6->_2.cctor_finished )
    {
      v7 = method->rgctx_data->_0_BasicHelper___c__26_T_;
      if ( (BYTE2(v7->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_0_BasicHelper___c__26_T_);
      j_il2cpp_runtime_class_init_0(v7);
    }
  }
  v8 = method->rgctx_data->_0_BasicHelper___c__26_T_;
  if ( (BYTE2(v8->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_0_BasicHelper___c__26_T_);
  v9 = (System_Int32_array **)*((_QWORD *)v8->static_fields + 1);
  if ( !v9 )
  {
    v10 = method->rgctx_data->_0_BasicHelper___c__26_T_;
    v11 = WORD1(v10->vtable[0].methodPtr);
    if ( (v11 & 1) == 0 )
    {
      sub_B08394(method->rgctx_data->_0_BasicHelper___c__26_T_);
      v11 = WORD1(v10->vtable[0].methodPtr);
    }
    if ( (v11 & 0x400) != 0 )
    {
      v12 = method->rgctx_data->_0_BasicHelper___c__26_T_;
      if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_0_BasicHelper___c__26_T_);
      if ( !v12->_2.cctor_finished )
      {
        v13 = method->rgctx_data->_0_BasicHelper___c__26_T_;
        if ( (BYTE2(v13->vtable[0].methodPtr) & 1) == 0 )
          sub_B08394(method->rgctx_data->_0_BasicHelper___c__26_T_);
        j_il2cpp_runtime_class_init_0(v13);
      }
    }
    rgctx_data = method->rgctx_data;
    v15 = rgctx_data->_0_BasicHelper___c__26_T_;
    if ( (BYTE2(rgctx_data->_0_BasicHelper___c__26_T_->vtable[0].methodPtr) & 1) == 0 )
    {
      sub_B08394(rgctx_data->_0_BasicHelper___c__26_T_);
      rgctx_data = method->rgctx_data;
    }
    _2_System_Func_T__bool = rgctx_data->_2_System_Func_T__bool_;
    v17 = *(_QWORD *)v15->static_fields;
    if ( (BYTE2(_2_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(_2_System_Func_T__bool);
    v9 = (System_Int32_array **)sub_B70764(_2_System_Func_T__bool);
    ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))method->rgctx_data->_3_System_Func_T__bool___ctor->methodPointer)(
      v9,
      v17,
      method->rgctx_data->_1_BasicHelper___c__26_T___ExcludeNull_b__26_0);
    v24 = method->rgctx_data->_0_BasicHelper___c__26_T_;
    if ( (BYTE2(v24->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_0_BasicHelper___c__26_T_);
    static_fields = (char *)v24->static_fields;
    *((_QWORD *)static_fields + 1) = v9;
    sub_B70630((BattleServantConfConponent_o *)(static_fields + 8), v9, v18, v19, v20, v21, v22, v23);
  }
  return (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *, System_Int32_array **))method->rgctx_data->_4_System_Linq_Enumerable_Where_T_->methodPointer)(
                                                          sequence,
                                                          v9);
}


Il2CppObject *__fastcall BasicHelper__FindComponent_object_(
        UnityEngine_GameObject_array *array,
        System_Func_T__bool__o *func,
        const MethodInfo_1BDD080 *method)
{
  UnityEngine_GameObject_array *v5; // x21
  __int64 v6; // x8
  unsigned __int64 v7; // x23
  UnityEngine_GameObject_o **m_Items; // x24
  UnityEngine_Object_o *v9; // x22
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x22
  __int64 v13; // x0

  v5 = array;
  if ( (byte_4353F98 & 1) == 0 )
  {
    array = (UnityEngine_GameObject_array *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353F98 = 1;
  }
  if ( !v5 )
    return 0LL;
  v6 = *(_QWORD *)&v5->max_length;
  if ( (int)v6 < 1 )
    return 0LL;
  v7 = 0LL;
  m_Items = v5->m_Items;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v6 )
    {
LABEL_23:
      v13 = sub_B70798(array);
      sub_B70738(v13, 0LL);
    }
    v9 = (UnityEngine_Object_o *)m_Items[v7];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    array = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
    v11 = 0LL;
    if ( ((unsigned __int8)array & 1) != 0 )
    {
      if ( v7 >= v5->max_length )
        goto LABEL_23;
      array = (UnityEngine_GameObject_array *)m_Items[v7];
      if ( !array )
LABEL_24:
        sub_B7076C(array, v10);
      v11 = (UnityEngine_Object_o *)((__int64 (*)(void))method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_->methodPointer)();
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    array = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(v11, 0LL, 0LL);
    if ( ((unsigned __int8)array & 1) == 0 )
    {
      if ( !func )
        goto LABEL_24;
      array = (UnityEngine_GameObject_array *)((__int64 (__fastcall *)(System_Func_T__bool__o *, UnityEngine_Object_o *))method->rgctx_data->_2_System_Func_T__bool__Invoke->methodPointer)(
                                                func,
                                                v11);
      if ( ((unsigned __int8)array & 1) != 0 )
        return (Il2CppObject *)v11;
    }
    LODWORD(v6) = v5->max_length;
    if ( (__int64)++v7 >= (int)v6 )
      return 0LL;
  }
}


WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *__fastcall BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
        WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *array,
        System_Func_T__bool__o *func,
        const MethodInfo_1BDCFCC *method)
{
  __int64 v3; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *v4; // x19
  unsigned __int64 v7; // x22
  __int64 v8; // x0

  if ( array )
  {
    v3 = *(_QWORD *)&array->fields.isExecute;
    v4 = array;
    if ( (int)v3 < 1 )
    {
      return 0LL;
    }
    else
    {
      v7 = 0LL;
      while ( 1 )
      {
        if ( v7 >= (unsigned int)v3 )
          goto LABEL_13;
        if ( !func )
          sub_B7076C(array, func);
        array = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *)((__int64 (__fastcall *)(System_Func_T__bool__o *, _QWORD))method->rgctx_data->_0_System_Func_T__bool__Invoke->methodPointer)(
                                                                                                func,
                                                                                                *((_QWORD *)&v4[1].klass
                                                                                                + v7));
        if ( ((unsigned __int8)array & 1) != 0 )
          break;
        LODWORD(v3) = *(_DWORD *)&v4->fields.isExecute;
        if ( (__int64)++v7 >= (int)v3 )
          return 0LL;
      }
      if ( (unsigned int)v7 >= *(_DWORD *)&v4->fields.isExecute )
      {
LABEL_13:
        v8 = sub_B70798(array);
        sub_B70738(v8, 0LL);
      }
      return (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *)*((_QWORD *)&v4[1].klass + v7);
    }
  }
  return array;
}


void __fastcall BasicHelper__ForEach_CompensateArgForShowAll_EffectType_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_1BDDD58 *method)
{
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x22
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x1
  __int64 v12; // x19
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  int *v15; // x11
  __int64 v16; // x0
  Il2CppClass *_1_System_Collections_Generic_IEnumerator_T; // x22
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0

  if ( (byte_4353F9D & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_4353F9D = 1;
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (BYTE2(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
    klass = sequence->klass;
    if ( *(_WORD *)&sequence->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&sequence->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B08590(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
            sequence,
            *(_QWORD *)(p_method + 8));
    if ( !v12 )
      sub_B7076C(0LL, v11);
    while ( 1 )
    {
      v13 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
      {
        v14 = 0LL;
        v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v14;
          v15 += 4;
          if ( v14 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
            goto LABEL_17;
        }
        v16 = v13 + 16LL * *v15 + 312;
      }
      else
      {
LABEL_17:
        v16 = sub_B08590(v12, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
        break;
      _1_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_1_System_Collections_Generic_IEnumerator_T_;
      if ( (BYTE2(_1_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_1_System_Collections_Generic_IEnumerator_T_);
      v18 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
      {
        v19 = 0LL;
        v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((Il2CppClass **)v20 - 1) != _1_System_Collections_Generic_IEnumerator_T )
        {
          ++v19;
          v20 += 4;
          if ( v19 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
            goto LABEL_26;
        }
        v21 = v18 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_26:
        v21 = sub_B08590(v12, _1_System_Collections_Generic_IEnumerator_T, 0LL);
      }
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v12, *(_QWORD *)(v21 + 8));
      if ( !action )
        sub_B7076C(v22, (unsigned int)v22);
      ((void (__fastcall *)(System_Action_T__o *, _QWORD, MethodInfo *))method->rgctx_data->_2_System_Action_T__Invoke->methodPointer)(
        action,
        (unsigned int)v22,
        method->rgctx_data->_2_System_Action_T__Invoke);
    }
    v23 = *(_QWORD *)v12;
    if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
          goto LABEL_34;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_34:
      v26 = sub_B08590(v12, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v12, *(_QWORD *)(v26 + 8));
  }
}


void __fastcall BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_1BDE02C *method)
{
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x22
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x1
  __int64 v12; // x19
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  int *v15; // x11
  __int64 v16; // x0
  Il2CppClass *_1_System_Collections_Generic_IEnumerator_T; // x22
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0

  if ( (byte_4353F9E & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_4353F9E = 1;
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (BYTE2(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
    klass = sequence->klass;
    if ( *(_WORD *)&sequence->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&sequence->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B08590(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
            sequence,
            *(_QWORD *)(p_method + 8));
    if ( !v12 )
      sub_B7076C(0LL, v11);
    while ( 1 )
    {
      v13 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
      {
        v14 = 0LL;
        v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v14;
          v15 += 4;
          if ( v14 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
            goto LABEL_17;
        }
        v16 = v13 + 16LL * *v15 + 312;
      }
      else
      {
LABEL_17:
        v16 = sub_B08590(v12, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
        break;
      _1_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_1_System_Collections_Generic_IEnumerator_T_;
      if ( (BYTE2(_1_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_1_System_Collections_Generic_IEnumerator_T_);
      v18 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
      {
        v19 = 0LL;
        v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((Il2CppClass **)v20 - 1) != _1_System_Collections_Generic_IEnumerator_T )
        {
          ++v19;
          v20 += 4;
          if ( v19 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
            goto LABEL_26;
        }
        v21 = v18 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_26:
        v21 = sub_B08590(v12, _1_System_Collections_Generic_IEnumerator_T, 0LL);
      }
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v12, *(_QWORD *)(v21 + 8));
      if ( !action )
        sub_B7076C(v22, v22);
      ((void (__fastcall *)(System_Action_T__o *, __int64, MethodInfo *))method->rgctx_data->_2_System_Action_T__Invoke->methodPointer)(
        action,
        v22,
        method->rgctx_data->_2_System_Action_T__Invoke);
    }
    v23 = *(_QWORD *)v12;
    if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
          goto LABEL_34;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_34:
      v26 = sub_B08590(v12, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v12, *(_QWORD *)(v26 + 8));
  }
}


void __fastcall BasicHelper__ForEach_KeyValuePair_int__PlayMakerFSM__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_1BDD1D8 *method)
{
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x22
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x1
  __int64 v12; // x19
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  int *v15; // x11
  __int64 v16; // x0
  Il2CppClass *_1_System_Collections_Generic_IEnumerator_T; // x22
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0

  if ( (byte_4353F99 & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_4353F99 = 1;
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (BYTE2(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
    klass = sequence->klass;
    if ( *(_WORD *)&sequence->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&sequence->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B08590(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
            sequence,
            *(_QWORD *)(p_method + 8));
    if ( !v12 )
      sub_B7076C(0LL, v11);
    while ( 1 )
    {
      v13 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
      {
        v14 = 0LL;
        v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v14;
          v15 += 4;
          if ( v14 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
            goto LABEL_17;
        }
        v16 = v13 + 16LL * *v15 + 312;
      }
      else
      {
LABEL_17:
        v16 = sub_B08590(v12, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
        break;
      _1_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_1_System_Collections_Generic_IEnumerator_T_;
      if ( (BYTE2(_1_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_1_System_Collections_Generic_IEnumerator_T_);
      v18 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
      {
        v19 = 0LL;
        v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((Il2CppClass **)v20 - 1) != _1_System_Collections_Generic_IEnumerator_T )
        {
          ++v19;
          v20 += 4;
          if ( v19 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
            goto LABEL_26;
        }
        v21 = v18 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_26:
        v21 = sub_B08590(v12, _1_System_Collections_Generic_IEnumerator_T, 0LL);
      }
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v12, *(_QWORD *)(v21 + 8));
      if ( !action )
        sub_B7076C(v22, v23);
      ((void (__fastcall *)(System_Action_T__o *, __int64, __int64, MethodInfo *))method->rgctx_data->_2_System_Action_T__Invoke->methodPointer)(
        action,
        v22,
        v23,
        method->rgctx_data->_2_System_Action_T__Invoke);
    }
    v24 = *(_QWORD *)v12;
    if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
          goto LABEL_34;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_34:
      v27 = sub_B08590(v12, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v12, *(_QWORD *)(v27 + 8));
  }
}


void __fastcall BasicHelper__ForEach_KeyValuePair_string__object__(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_1BDD4B8 *method)
{
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x22
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x1
  __int64 v12; // x19
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  int *v15; // x11
  __int64 v16; // x0
  Il2CppClass *_1_System_Collections_Generic_IEnumerator_T; // x22
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0

  if ( (byte_4353F9A & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_4353F9A = 1;
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (BYTE2(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
    klass = sequence->klass;
    if ( *(_WORD *)&sequence->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&sequence->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B08590(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
            sequence,
            *(_QWORD *)(p_method + 8));
    if ( !v12 )
      sub_B7076C(0LL, v11);
    while ( 1 )
    {
      v13 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
      {
        v14 = 0LL;
        v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v14;
          v15 += 4;
          if ( v14 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
            goto LABEL_17;
        }
        v16 = v13 + 16LL * *v15 + 312;
      }
      else
      {
LABEL_17:
        v16 = sub_B08590(v12, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
        break;
      _1_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_1_System_Collections_Generic_IEnumerator_T_;
      if ( (BYTE2(_1_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_1_System_Collections_Generic_IEnumerator_T_);
      v18 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
      {
        v19 = 0LL;
        v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((Il2CppClass **)v20 - 1) != _1_System_Collections_Generic_IEnumerator_T )
        {
          ++v19;
          v20 += 4;
          if ( v19 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
            goto LABEL_26;
        }
        v21 = v18 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_26:
        v21 = sub_B08590(v12, _1_System_Collections_Generic_IEnumerator_T, 0LL);
      }
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v12, *(_QWORD *)(v21 + 8));
      if ( !action )
        sub_B7076C(v22, v23);
      ((void (__fastcall *)(System_Action_T__o *, __int64, __int64, MethodInfo *))method->rgctx_data->_2_System_Action_T__Invoke->methodPointer)(
        action,
        v22,
        v23,
        method->rgctx_data->_2_System_Action_T__Invoke);
    }
    v24 = *(_QWORD *)v12;
    if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
          goto LABEL_34;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_34:
      v27 = sub_B08590(v12, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v12, *(_QWORD *)(v27 + 8));
  }
}


void __fastcall BasicHelper__ForEach_int_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_T__o *action,
        const MethodInfo_1BDD798 *method)
{
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x22
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x1
  __int64 v12; // x19
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  int *v15; // x11
  __int64 v16; // x0
  Il2CppClass *_1_System_Collections_Generic_IEnumerator_T; // x22
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0

  if ( (byte_4353F9B & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_4353F9B = 1;
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (BYTE2(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
    klass = sequence->klass;
    if ( *(_WORD *)&sequence->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&sequence->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B08590(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
            sequence,
            *(_QWORD *)(p_method + 8));
    if ( !v12 )
      sub_B7076C(0LL, v11);
    while ( 1 )
    {
      v13 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
      {
        v14 = 0LL;
        v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v14;
          v15 += 4;
          if ( v14 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
            goto LABEL_17;
        }
        v16 = v13 + 16LL * *v15 + 312;
      }
      else
      {
LABEL_17:
        v16 = sub_B08590(v12, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
        break;
      _1_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_1_System_Collections_Generic_IEnumerator_T_;
      if ( (BYTE2(_1_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_1_System_Collections_Generic_IEnumerator_T_);
      v18 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
      {
        v19 = 0LL;
        v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((Il2CppClass **)v20 - 1) != _1_System_Collections_Generic_IEnumerator_T )
        {
          ++v19;
          v20 += 4;
          if ( v19 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
            goto LABEL_26;
        }
        v21 = v18 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_26:
        v21 = sub_B08590(v12, _1_System_Collections_Generic_IEnumerator_T, 0LL);
      }
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v12, *(_QWORD *)(v21 + 8));
      if ( !action )
        sub_B7076C(v22, (unsigned int)v22);
      ((void (__fastcall *)(System_Action_T__o *, _QWORD, MethodInfo *))method->rgctx_data->_2_System_Action_T__Invoke->methodPointer)(
        action,
        (unsigned int)v22,
        method->rgctx_data->_2_System_Action_T__Invoke);
    }
    v23 = *(_QWORD *)v12;
    if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
          goto LABEL_34;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_34:
      v26 = sub_B08590(v12, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v12, *(_QWORD *)(v26 + 8));
  }
}


void __fastcall BasicHelper__ForEach_int__29219436(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_int__T__o *action,
        const MethodInfo_1BDDA6C *method)
{
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x22
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x1
  __int64 v12; // x19
  unsigned int i; // w22
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  int *v16; // x11
  __int64 v17; // x0
  Il2CppClass *_1_System_Collections_Generic_IEnumerator_T; // x23
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0

  if ( (byte_4353F9C & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_4353F9C = 1;
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (BYTE2(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
    klass = sequence->klass;
    if ( *(_WORD *)&sequence->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&sequence->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B08590(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
            sequence,
            *(_QWORD *)(p_method + 8));
    if ( !v12 )
      sub_B7076C(0LL, v11);
    for ( i = 0; ; ++i )
    {
      v14 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
      {
        v15 = 0LL;
        v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v15;
          v16 += 4;
          if ( v15 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
            goto LABEL_18;
        }
        v17 = v14 + 16LL * *v16 + 312;
      }
      else
      {
LABEL_18:
        v17 = sub_B08590(v12, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v12, *(_QWORD *)(v17 + 8)) & 1) == 0 )
        break;
      _1_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_1_System_Collections_Generic_IEnumerator_T_;
      if ( (BYTE2(_1_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_1_System_Collections_Generic_IEnumerator_T_);
      v19 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
      {
        v20 = 0LL;
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((Il2CppClass **)v21 - 1) != _1_System_Collections_Generic_IEnumerator_T )
        {
          ++v20;
          v21 += 4;
          if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
            goto LABEL_27;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_27:
        v22 = sub_B08590(v12, _1_System_Collections_Generic_IEnumerator_T, 0LL);
      }
      v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v12, *(_QWORD *)(v22 + 8));
      if ( !action )
        sub_B7076C(v23, v24);
      ((void (__fastcall *)(System_Action_int__T__o *, _QWORD, _QWORD, MethodInfo *))method->rgctx_data->_2_System_Action_int__T__Invoke->methodPointer)(
        action,
        i,
        (unsigned int)v23,
        method->rgctx_data->_2_System_Action_int__T__Invoke);
    }
    v25 = *(_QWORD *)v12;
    if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
          goto LABEL_35;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_35:
      v28 = sub_B08590(v12, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v12, *(_QWORD *)(v28 + 8));
  }
}


void __fastcall BasicHelper__ForEach_object_(
        System_Collections_Generic_IEnumerable_T__o *sequence,
        System_Action_int__T__o *action,
        const MethodInfo_1BDE300 *method)
{
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x22
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x1
  __int64 v12; // x19
  unsigned int i; // w22
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  int *v16; // x11
  __int64 v17; // x0
  Il2CppClass *_1_System_Collections_Generic_IEnumerator_T; // x23
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0

  if ( (byte_4353F9F & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_4353F9F = 1;
  }
  if ( sequence )
  {
    _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
    if ( (BYTE2(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
    klass = sequence->klass;
    if ( *(_WORD *)&sequence->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&sequence->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B08590(sequence, _0_System_Collections_Generic_IEnumerable_T, 0LL);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
            sequence,
            *(_QWORD *)(p_method + 8));
    if ( !v12 )
      sub_B7076C(0LL, v11);
    for ( i = 0; ; ++i )
    {
      v14 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
      {
        v15 = 0LL;
        v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v15;
          v16 += 4;
          if ( v15 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
            goto LABEL_18;
        }
        v17 = v14 + 16LL * *v16 + 312;
      }
      else
      {
LABEL_18:
        v17 = sub_B08590(v12, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v12, *(_QWORD *)(v17 + 8)) & 1) == 0 )
        break;
      _1_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_1_System_Collections_Generic_IEnumerator_T_;
      if ( (BYTE2(_1_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_1_System_Collections_Generic_IEnumerator_T_);
      v19 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
      {
        v20 = 0LL;
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((Il2CppClass **)v21 - 1) != _1_System_Collections_Generic_IEnumerator_T )
        {
          ++v20;
          v21 += 4;
          if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
            goto LABEL_27;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_27:
        v22 = sub_B08590(v12, _1_System_Collections_Generic_IEnumerator_T, 0LL);
      }
      v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v12, *(_QWORD *)(v22 + 8));
      if ( !action )
        sub_B7076C(v23, v24);
      ((void (__fastcall *)(System_Action_int__T__o *, _QWORD, __int64, MethodInfo *))method->rgctx_data->_2_System_Action_int__T__Invoke->methodPointer)(
        action,
        i,
        v23,
        method->rgctx_data->_2_System_Action_int__T__Invoke);
    }
    v25 = *(_QWORD *)v12;
    if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
          goto LABEL_35;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_35:
      v28 = sub_B08590(v12, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v12, *(_QWORD *)(v28 + 8));
  }
}


int32_t __fastcall BasicHelper__GetValue_AiLogic_PROC_STATE__int_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int32_t def,
        const MethodInfo_1BDE988 *method)
{
  if ( dic
    && (((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_Dictionary_K__V__ContainsKey->methodPointer)() & 1) != 0 )
  {
    return ((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_K__V__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_Dictionary_K__V__get_Item->methodPointer)(
             dic,
             (unsigned int)key);
  }
  else
  {
    return def;
  }
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BasicHelper__GetValue_BuffList_TYPE__List_BattleBuffData_BuffData__(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *def,
        const MethodInfo_1BDEA68 *method)
{
  if ( dic
    && (((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_Dictionary_K__V__ContainsKey->methodPointer)() & 1) != 0 )
  {
    return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_K__V__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_Dictionary_K__V__get_Item->methodPointer)(
                                                                           dic,
                                                                           (unsigned int)key);
  }
  else
  {
    return def;
  }
}


int32_t __fastcall BasicHelper__GetValue_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int32_t def,
        const MethodInfo_1BDE9F8 *method)
{
  if ( dic
    && (((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_Dictionary_K__V__ContainsKey->methodPointer)() & 1) != 0 )
  {
    return ((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_K__V__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_Dictionary_K__V__get_Item->methodPointer)(
             dic,
             (unsigned int)key);
  }
  else
  {
    return def;
  }
}


double __fastcall BasicHelper__GetValue_double_(
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        double def,
        const MethodInfo_1BDE5EC *method)
{
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v9; // x1
  UnityEngine_Purchasing_IStoreExtension_o *v10; // x20
  Il2CppClass *_0_T; // x19
  double result; // d0
  System_Collections_Generic_Dictionary_string__object__o *v13; // x0
  System_String_o *v14; // x1
  int64_t v15; // x2
  const MethodInfo_1BDE6D8 *v16; // x3

  if ( (byte_4353FA0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4353FA0 = 1;
  }
  if ( !dic
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dic,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return def;
  }
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)dic,
           (System_Type_o *)key,
           (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v10 = Item;
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    Item = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B08394(_0_T);
  if ( !v10 )
    sub_B7076C(Item, v9);
  if ( v10->klass->_1.element_class == _0_T->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(v10);
  sub_B70A60(v10);
  BasicHelper__GetValue_long_(v13, v14, v15, v16);
  return result;
}


int64_t __fastcall BasicHelper__GetValue_int__long_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        int64_t def,
        const MethodInfo_1BDE8A8 *method)
{
  if ( dic
    && (((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_Dictionary_K__V__ContainsKey->methodPointer)() & 1) != 0 )
  {
    return ((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_K__V__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_Dictionary_K__V__get_Item->methodPointer)(
             dic,
             (unsigned int)key);
  }
  else
  {
    return def;
  }
}


Il2CppObject *__fastcall BasicHelper__GetValue_int__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int32_t key,
        Il2CppObject *def,
        const MethodInfo_1BDE918 *method)
{
  if ( dic
    && (((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_Dictionary_K__V__ContainsKey->methodPointer)() & 1) != 0 )
  {
    return (Il2CppObject *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_K__V__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_Dictionary_K__V__get_Item->methodPointer)(
                             dic,
                             (unsigned int)key);
  }
  else
  {
    return def;
  }
}


int64_t __fastcall BasicHelper__GetValue_long_(
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        int64_t def,
        const MethodInfo_1BDE6D8 *method)
{
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v9; // x1
  UnityEngine_Purchasing_IStoreExtension_o *v10; // x20
  Il2CppClass *_0_T; // x19
  System_Collections_Generic_Dictionary_string__object__o *v13; // x0
  System_String_o *v14; // x1
  System_String_o *v15; // x2
  const MethodInfo_1BDE7C4 *v16; // x3

  if ( (byte_4353FA1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4353FA1 = 1;
  }
  if ( !dic
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dic,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return def;
  }
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)dic,
           (System_Type_o *)key,
           (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v10 = Item;
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    Item = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B08394(_0_T);
  if ( !v10 )
    sub_B7076C(Item, v9);
  if ( v10->klass->_1.element_class == _0_T->_1.element_class )
    return *(_QWORD *)j_il2cpp_object_unbox_0(v10);
  sub_B70A60(v10);
  return (int64_t)BasicHelper__GetValue_string_(v13, v14, v15, v16);
}


int32_t __fastcall BasicHelper__GetValue_long__int_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        int64_t key,
        int32_t def,
        const MethodInfo_1BDEAD8 *method)
{
  if ( dic
    && (((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_Dictionary_K__V__ContainsKey->methodPointer)() & 1) != 0 )
  {
    return ((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_K__V__o *, int64_t))method->rgctx_data->_1_System_Collections_Generic_Dictionary_K__V__get_Item->methodPointer)(
             dic,
             key);
  }
  else
  {
    return def;
  }
}


System_String_o *__fastcall BasicHelper__GetValue_string_(
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        System_String_o *def,
        const MethodInfo_1BDE7C4 *method)
{
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x21
  Il2CppClass *_0_T; // x19

  if ( (byte_4353FA2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4353FA2 = 1;
  }
  if ( dic
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dic,
         (System_Xml_XmlQualifiedName_o *)key,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)dic,
             (System_Type_o *)key,
             (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(_0_T);
    if ( !Item )
      return 0LL;
    def = (System_String_o *)sub_B70754(Item, _0_T);
    if ( !def )
    {
      sub_B70A60(Item);
      return 0LL;
    }
  }
  return def;
}


BattleActorAnimationEffect_array *__fastcall BasicHelper__GetValue_string__BattleActorAnimationEffect___(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        System_String_o *key,
        BattleActorAnimationEffect_array *def,
        const MethodInfo_1BDEB48 *method)
{
  if ( dic
    && (((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_Dictionary_K__V__ContainsKey->methodPointer)() & 1) != 0 )
  {
    return (BattleActorAnimationEffect_array *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_K__V__o *, System_String_o *))method->rgctx_data->_1_System_Collections_Generic_Dictionary_K__V__get_Item->methodPointer)(
                                                 dic,
                                                 key);
  }
  else
  {
    return def;
  }
}


int32_t __fastcall BasicHelper__IndexValue_BattleLogic_LOGICTYPE_(
        BattleLogic_LOGICTYPE_array *array,
        int32_t index,
        int32_t def,
        const MethodInfo_1BDED34 *method)
{
  int32_t max_length; // w8
  __int64 v6; // x0

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      max_length = array->max_length;
      if ( max_length > index )
      {
        if ( max_length <= (unsigned int)index )
        {
          v6 = sub_B70798(array);
          sub_B70738(v6, 0LL);
        }
        return array->m_Items[index + 1];
      }
    }
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_KeyValuePair_string__int__o __fastcall BasicHelper__IndexValue_KeyValuePair_string__int__(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        System_Collections_Generic_KeyValuePair_string__int__o def,
        const MethodInfo_1BDEBB8 *method)
{
  __int64 v4; // x19
  struct System_String_o *key; // x20
  __int64 v9; // x1
  struct System_String_o *v10; // x0 OVERLAPPED
  __int64 v11; // x1
  System_Collections_Generic_KeyValuePair_string__int__o result; // 0:x0.16

  v4 = *(_QWORD *)&def.fields.value;
  key = def.fields.key;
  if ( list
    && (index & 0x80000000) == 0
    && ((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)() > index )
  {
    key = (struct System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
                                      list,
                                      (unsigned int)index);
    v4 = v9;
  }
  v10 = key;
  v11 = v4;
  *(_QWORD *)&result.fields.value = v11;
  result.fields.key = v10;
  return result;
}


WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *__fastcall BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
        WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *array,
        int32_t index,
        WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *def,
        const MethodInfo_1BDEDE8 *method)
{
  int32_t max_length; // w8
  __int64 v6; // x0

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      max_length = array->max_length;
      if ( max_length > index )
      {
        if ( max_length <= (unsigned int)index )
        {
          v6 = sub_B70798(array);
          sub_B70738(v6, 0LL);
        }
        return array->m_Items[index];
      }
    }
  }
  return def;
}


WarBoardAIRoute_RouteData_o *__fastcall BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        WarBoardAIRoute_RouteData_o *def,
        const MethodInfo_1BDED70 *method)
{
  if ( !list
    || (index & 0x80000000) != 0
    || ((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)() <= index )
  {
    return def;
  }
  else
  {
    return (WarBoardAIRoute_RouteData_o *)((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
                                            list,
                                            (unsigned int)index);
  }
}


bool __fastcall BasicHelper__IndexValue_bool_(
        System_Boolean_array *array,
        int32_t index,
        bool def,
        const MethodInfo_1BDEC3C *method)
{
  int32_t max_length; // w8
  __int64 v6; // x0

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      max_length = array->max_length;
      if ( max_length > index )
      {
        if ( max_length <= (unsigned int)index )
        {
          v6 = sub_B70798(array);
          sub_B70738(v6, 0LL);
        }
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
        const MethodInfo_1BDEEA8 *method)
{
  int32_t max_length; // w8
  __int64 v5; // x0

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      max_length = array->max_length;
      if ( max_length > index )
      {
        if ( max_length <= (unsigned int)index )
        {
          v5 = sub_B70798(array);
          sub_B70738(v5, 0LL);
        }
        return array->m_Items[index + 1];
      }
    }
  }
  return def;
}


float __fastcall BasicHelper__IndexValue_float__29224484(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        float def,
        const MethodInfo_1BDEE24 *method)
{
  float result; // s0

  if ( !list
    || (index & 0x80000000) != 0
    || ((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)() <= index )
  {
    return def;
  }
  ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
    list,
    (unsigned int)index);
  return result;
}


int32_t __fastcall BasicHelper__IndexValue_int_(
        System_Int32_array *array,
        int32_t index,
        int32_t def,
        const MethodInfo_1BDECF8 *method)
{
  int32_t max_length; // w8
  __int64 v6; // x0

  if ( array )
  {
    if ( (index & 0x80000000) == 0 )
    {
      max_length = array->max_length;
      if ( max_length > index )
      {
        if ( max_length <= (unsigned int)index )
        {
          v6 = sub_B70798(array);
          sub_B70738(v6, 0LL);
        }
        return array->m_Items[index + 1];
      }
    }
  }
  return def;
}


int32_t __fastcall BasicHelper__IndexValue_int__29224064(
        System_Collections_Generic_List_T__o *list,
        int32_t index,
        int32_t def,
        const MethodInfo_1BDEC80 *method)
{
  if ( !list
    || (index & 0x80000000) != 0
    || ((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)() <= index )
  {
    return def;
  }
  else
  {
    return ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
             list,
             (unsigned int)index);
  }
}


bool __fastcall BasicHelper__IsNullOrEmpty(System_Collections_ICollection_o *self, const MethodInfo *method)
{
  System_Collections_ICollection_c *klass; // x8
  unsigned __int64 v4; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_434F7C6 & 1) == 0 )
  {
    sub_B70694(&System_Collections_ICollection_TypeInfo);
    byte_434F7C6 = 1;
  }
  if ( !self )
    return 1;
  klass = self->klass;
  if ( *(_WORD *)&self->klass->_2.bitflags1 )
  {
    v4 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_ICollection_c **)p_offset - 1) != System_Collections_ICollection_TypeInfo )
    {
      ++v4;
      p_offset += 4;
      if ( v4 >= *(unsigned __int16 *)&self->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(self, System_Collections_ICollection_TypeInfo, 1LL);
  }
  return (*(int (__fastcall **)(System_Collections_ICollection_o *, _QWORD))p_method)(self, *(_QWORD *)(p_method + 8)) < 1;
}


bool __fastcall BasicHelper__IsValidIndex_Vector3_(
        UnityEngine_Vector3_array *array,
        int32_t index,
        const MethodInfo_1BDEF68 *method)
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
        const MethodInfo_1BDEEE0 *method)
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
        const MethodInfo_1BDEF00 *method)
{
  bool result; // w0

  result = 0;
  if ( list )
  {
    if ( (index & 0x80000000) == 0 )
      return ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)(list) > index;
  }
  return result;
}


bool __fastcall BasicHelper__IsValidIndex_object__29224776(
        System_Object_array *array,
        int32_t index,
        const MethodInfo_1BDEF48 *method)
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
  int32_t v5; // w21

  if ( (byte_434F7C7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int__Invoke__);
    byte_434F7C7 = 1;
  }
  if ( action && loopCount >= 1 )
  {
    v5 = 0;
    do
      System_Action_int___Invoke(action, v5++, (const MethodInfo_264ABCC *)Method_System_Action_int__Invoke__);
    while ( loopCount != v5 );
  }
}


bool __fastcall BasicHelper__NearbyOrGreaterThan(float self, float toCompare, const MethodInfo *method)
{
  return self >= toCompare || UnityEngine_Mathf__Approximately(self, toCompare, 0LL);
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
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_434F7C9 & 1) == 0 )
  {
    sub_B70694(&BasicHelper__RealDelayCall_d__37_TypeInfo);
    byte_434F7C9 = 1;
  }
  v5 = sub_B70764(BasicHelper__RealDelayCall_d__37_TypeInfo);
  BasicHelper__RealDelayCall_d__37___ctor((BasicHelper__RealDelayCall_d__37_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(float *)(v5 + 32) = delay;
  *(_QWORD *)(v5 + 40) = action;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)action, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__RealDelayCall_FGODisplayMessage_Argument_(
        float delay,
        System_Action_T__o *action,
        HutongGames_PlayMaker_Actions_FGODisplayMessage_Argument_o *arg,
        const MethodInfo_1BDEF88 *method)
{
  Il2CppClass *_0_BasicHelper__RealDelayCall_d__38_T; // x22
  __int64 v9; // x0
  const MethodInfo_1BDEF88_RGCTXs *rgctx_data; // x8
  __int64 v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  _0_BasicHelper__RealDelayCall_d__38_T = method->rgctx_data->_0_BasicHelper__RealDelayCall_d__38_T_;
  if ( (BYTE2(_0_BasicHelper__RealDelayCall_d__38_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_0_BasicHelper__RealDelayCall_d__38_T_);
  v9 = sub_B70764(_0_BasicHelper__RealDelayCall_d__38_T);
  rgctx_data = method->rgctx_data;
  v11 = v9;
  v12 = ((__int64 (__fastcall *)(__int64, _QWORD))rgctx_data->_1_BasicHelper__RealDelayCall_d__38_T___ctor->methodPointer)(
          v9,
          0LL);
  if ( !v11 )
    sub_B7076C(v12, v13);
  *(float *)(v11 + 32) = delay;
  *(_QWORD *)(v11 + 40) = action;
  sub_B70630((BattleServantConfConponent_o *)(v11 + 40), (System_Int32_array **)action, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 48) = arg;
  sub_B70630((BattleServantConfConponent_o *)(v11 + 48), (System_Int32_array **)arg, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v11;
}


void __fastcall BasicHelper__RemoveElements_MapControl_SpotInfo_(
        System_Collections_Generic_List_T__o *self,
        System_Func_T__bool__o *cond,
        const MethodInfo_1BDF498 *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  int v6; // w22

  if ( !self )
    goto LABEL_8;
  v5 = self;
  v6 = ((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)() - 1;
  if ( v6 >= 0 )
  {
    while ( 1 )
    {
      self = (System_Collections_Generic_List_T__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
                                                       v5,
                                                       (unsigned int)v6);
      if ( !cond )
        break;
      if ( (((__int64 (__fastcall *)(System_Func_T__bool__o *, System_Collections_Generic_List_T__o *))method->rgctx_data->_2_System_Func_T__bool__Invoke->methodPointer)(
              cond,
              self) & 1) != 0 )
        ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_3_System_Collections_Generic_List_T__RemoveAt->methodPointer)(
          v5,
          (unsigned int)v6);
      if ( --v6 < 0 )
        return;
    }
LABEL_8:
    sub_B7076C(self, cond);
  }
}


void __fastcall BasicHelper__Remove_int__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        System_Func_KeyValuePair_K__V___bool__o *cond,
        const MethodInfo_1BDF028 *method)
{
  __int64 v5; // x21
  long double v6; // q0
  Il2CppClass *_1_BasicHelper___c__22_K__V; // x22
  __int16 v8; // w8
  Il2CppClass *v9; // x22
  Il2CppClass *v10; // x22
  Il2CppClass *v11; // x22
  System_Int32_array **v12; // x22
  Il2CppClass *v13; // x22
  __int16 v14; // w8
  Il2CppClass *v15; // x22
  Il2CppClass *v16; // x22
  const MethodInfo_1BDF028_RGCTXs *rgctx_data; // x8
  Il2CppClass *v18; // x22
  Il2CppClass *_3_System_Func_KeyValuePair_K__V___K; // x24
  __int64 v20; // x23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  Il2CppClass *v27; // x23
  char *static_fields; // x0
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x8
  __int64 v33; // x21
  unsigned __int64 v34; // x22
  __int64 v35; // x0

  if ( dic )
  {
    v5 = ((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_K__V__o *, System_Func_KeyValuePair_K__V___bool__o *))method->rgctx_data->_0_System_Linq_Enumerable_Where_KeyValuePair_K__V__->methodPointer)(
           dic,
           cond);
    _1_BasicHelper___c__22_K__V = method->rgctx_data->_1_BasicHelper___c__22_K__V_;
    v8 = WORD1(_1_BasicHelper___c__22_K__V->vtable[0].methodPtr);
    if ( (v8 & 1) == 0 )
    {
      sub_B08394(method->rgctx_data->_1_BasicHelper___c__22_K__V_);
      v8 = WORD1(_1_BasicHelper___c__22_K__V->vtable[0].methodPtr);
    }
    if ( (v8 & 0x400) != 0 )
    {
      v9 = method->rgctx_data->_1_BasicHelper___c__22_K__V_;
      if ( (BYTE2(v9->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_1_BasicHelper___c__22_K__V_);
      if ( !v9->_2.cctor_finished )
      {
        v10 = method->rgctx_data->_1_BasicHelper___c__22_K__V_;
        if ( (BYTE2(v10->vtable[0].methodPtr) & 1) == 0 )
          sub_B08394(method->rgctx_data->_1_BasicHelper___c__22_K__V_);
        *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(v10);
      }
    }
    v11 = method->rgctx_data->_1_BasicHelper___c__22_K__V_;
    if ( (BYTE2(v11->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_1_BasicHelper___c__22_K__V_);
    v12 = (System_Int32_array **)*((_QWORD *)v11->static_fields + 1);
    if ( !v12 )
    {
      v13 = method->rgctx_data->_1_BasicHelper___c__22_K__V_;
      v14 = WORD1(v13->vtable[0].methodPtr);
      if ( (v14 & 1) == 0 )
      {
        sub_B08394(method->rgctx_data->_1_BasicHelper___c__22_K__V_);
        v14 = WORD1(v13->vtable[0].methodPtr);
      }
      if ( (v14 & 0x400) != 0 )
      {
        v15 = method->rgctx_data->_1_BasicHelper___c__22_K__V_;
        if ( (BYTE2(v15->vtable[0].methodPtr) & 1) == 0 )
          sub_B08394(method->rgctx_data->_1_BasicHelper___c__22_K__V_);
        if ( !v15->_2.cctor_finished )
        {
          v16 = method->rgctx_data->_1_BasicHelper___c__22_K__V_;
          if ( (BYTE2(v16->vtable[0].methodPtr) & 1) == 0 )
            sub_B08394(method->rgctx_data->_1_BasicHelper___c__22_K__V_);
          j_il2cpp_runtime_class_init_0(v16);
        }
      }
      rgctx_data = method->rgctx_data;
      v18 = rgctx_data->_1_BasicHelper___c__22_K__V_;
      if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
      {
        sub_B08394(rgctx_data->_1_BasicHelper___c__22_K__V_);
        rgctx_data = method->rgctx_data;
      }
      _3_System_Func_KeyValuePair_K__V___K = rgctx_data->_3_System_Func_KeyValuePair_K__V___K_;
      v20 = *(_QWORD *)v18->static_fields;
      if ( (BYTE2(_3_System_Func_KeyValuePair_K__V___K->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(_3_System_Func_KeyValuePair_K__V___K);
      v12 = (System_Int32_array **)sub_B70764(_3_System_Func_KeyValuePair_K__V___K);
      ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))method->rgctx_data->_4_System_Func_KeyValuePair_K__V___K___ctor->methodPointer)(
        v12,
        v20,
        method->rgctx_data->_2_BasicHelper___c__22_K__V___Remove_b__22_0);
      v27 = method->rgctx_data->_1_BasicHelper___c__22_K__V_;
      if ( (BYTE2(v27->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_1_BasicHelper___c__22_K__V_);
      static_fields = (char *)v27->static_fields;
      *((_QWORD *)static_fields + 1) = v12;
      sub_B70630((BattleServantConfConponent_o *)(static_fields + 8), v12, v21, v22, v23, v24, v25, v26);
    }
    v29 = ((__int64 (__fastcall *)(__int64, System_Int32_array **, long double))method->rgctx_data->_5_System_Linq_Enumerable_Select_KeyValuePair_K__V___K_->methodPointer)(
            v5,
            v12,
            v6);
    v30 = ((__int64 (__fastcall *)(__int64))method->rgctx_data->_6_System_Linq_Enumerable_ToArray_K_->methodPointer)(v29);
    if ( !v30 )
      sub_B7076C(0LL, v31);
    v32 = *(_QWORD *)(v30 + 24);
    v33 = v30;
    if ( (int)v32 >= 1 )
    {
      v34 = 0LL;
      do
      {
        if ( v34 >= (unsigned int)v32 )
        {
          v35 = sub_B70798(v30);
          sub_B70738(v35, 0LL);
        }
        v30 = ((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_K__V__o *, _QWORD))method->rgctx_data->_7_System_Collections_Generic_Dictionary_K__V__Remove->methodPointer)(
                dic,
                *(unsigned int *)(v33 + 32 + 4 * v34));
        LODWORD(v32) = *(_DWORD *)(v33 + 24);
        ++v34;
      }
      while ( (__int64)v34 < (int)v32 );
    }
  }
}


void __fastcall BasicHelper__Remove_object__object_(
        System_Collections_Generic_Dictionary_K__V__o *dic,
        System_Func_KeyValuePair_K__V___bool__o *cond,
        const MethodInfo_1BDF260 *method)
{
  __int64 v5; // x21
  long double v6; // q0
  Il2CppClass *_1_BasicHelper___c__22_K__V; // x22
  __int16 v8; // w8
  Il2CppClass *v9; // x22
  Il2CppClass *v10; // x22
  Il2CppClass *v11; // x22
  System_Int32_array **v12; // x22
  Il2CppClass *v13; // x22
  __int16 v14; // w8
  Il2CppClass *v15; // x22
  Il2CppClass *v16; // x22
  const MethodInfo_1BDF260_RGCTXs *rgctx_data; // x8
  Il2CppClass *v18; // x22
  Il2CppClass *_3_System_Func_KeyValuePair_K__V___K; // x24
  __int64 v20; // x23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  Il2CppClass *v27; // x23
  char *static_fields; // x0
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x8
  __int64 v33; // x21
  unsigned __int64 v34; // x22
  __int64 v35; // x0

  if ( dic )
  {
    v5 = ((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_K__V__o *, System_Func_KeyValuePair_K__V___bool__o *))method->rgctx_data->_0_System_Linq_Enumerable_Where_KeyValuePair_K__V__->methodPointer)(
           dic,
           cond);
    _1_BasicHelper___c__22_K__V = method->rgctx_data->_1_BasicHelper___c__22_K__V_;
    v8 = WORD1(_1_BasicHelper___c__22_K__V->vtable[0].methodPtr);
    if ( (v8 & 1) == 0 )
    {
      sub_B08394(method->rgctx_data->_1_BasicHelper___c__22_K__V_);
      v8 = WORD1(_1_BasicHelper___c__22_K__V->vtable[0].methodPtr);
    }
    if ( (v8 & 0x400) != 0 )
    {
      v9 = method->rgctx_data->_1_BasicHelper___c__22_K__V_;
      if ( (BYTE2(v9->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_1_BasicHelper___c__22_K__V_);
      if ( !v9->_2.cctor_finished )
      {
        v10 = method->rgctx_data->_1_BasicHelper___c__22_K__V_;
        if ( (BYTE2(v10->vtable[0].methodPtr) & 1) == 0 )
          sub_B08394(method->rgctx_data->_1_BasicHelper___c__22_K__V_);
        *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(v10);
      }
    }
    v11 = method->rgctx_data->_1_BasicHelper___c__22_K__V_;
    if ( (BYTE2(v11->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_1_BasicHelper___c__22_K__V_);
    v12 = (System_Int32_array **)*((_QWORD *)v11->static_fields + 1);
    if ( !v12 )
    {
      v13 = method->rgctx_data->_1_BasicHelper___c__22_K__V_;
      v14 = WORD1(v13->vtable[0].methodPtr);
      if ( (v14 & 1) == 0 )
      {
        sub_B08394(method->rgctx_data->_1_BasicHelper___c__22_K__V_);
        v14 = WORD1(v13->vtable[0].methodPtr);
      }
      if ( (v14 & 0x400) != 0 )
      {
        v15 = method->rgctx_data->_1_BasicHelper___c__22_K__V_;
        if ( (BYTE2(v15->vtable[0].methodPtr) & 1) == 0 )
          sub_B08394(method->rgctx_data->_1_BasicHelper___c__22_K__V_);
        if ( !v15->_2.cctor_finished )
        {
          v16 = method->rgctx_data->_1_BasicHelper___c__22_K__V_;
          if ( (BYTE2(v16->vtable[0].methodPtr) & 1) == 0 )
            sub_B08394(method->rgctx_data->_1_BasicHelper___c__22_K__V_);
          j_il2cpp_runtime_class_init_0(v16);
        }
      }
      rgctx_data = method->rgctx_data;
      v18 = rgctx_data->_1_BasicHelper___c__22_K__V_;
      if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
      {
        sub_B08394(rgctx_data->_1_BasicHelper___c__22_K__V_);
        rgctx_data = method->rgctx_data;
      }
      _3_System_Func_KeyValuePair_K__V___K = rgctx_data->_3_System_Func_KeyValuePair_K__V___K_;
      v20 = *(_QWORD *)v18->static_fields;
      if ( (BYTE2(_3_System_Func_KeyValuePair_K__V___K->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(_3_System_Func_KeyValuePair_K__V___K);
      v12 = (System_Int32_array **)sub_B70764(_3_System_Func_KeyValuePair_K__V___K);
      ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))method->rgctx_data->_4_System_Func_KeyValuePair_K__V___K___ctor->methodPointer)(
        v12,
        v20,
        method->rgctx_data->_2_BasicHelper___c__22_K__V___Remove_b__22_0);
      v27 = method->rgctx_data->_1_BasicHelper___c__22_K__V_;
      if ( (BYTE2(v27->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_1_BasicHelper___c__22_K__V_);
      static_fields = (char *)v27->static_fields;
      *((_QWORD *)static_fields + 1) = v12;
      sub_B70630((BattleServantConfConponent_o *)(static_fields + 8), v12, v21, v22, v23, v24, v25, v26);
    }
    v29 = ((__int64 (__fastcall *)(__int64, System_Int32_array **, long double))method->rgctx_data->_5_System_Linq_Enumerable_Select_KeyValuePair_K__V___K_->methodPointer)(
            v5,
            v12,
            v6);
    v30 = ((__int64 (__fastcall *)(__int64))method->rgctx_data->_6_System_Linq_Enumerable_ToArray_K_->methodPointer)(v29);
    if ( !v30 )
      sub_B7076C(0LL, v31);
    v32 = *(_QWORD *)(v30 + 24);
    v33 = v30;
    if ( (int)v32 >= 1 )
    {
      v34 = 0LL;
      do
      {
        if ( v34 >= (unsigned int)v32 )
        {
          v35 = sub_B70798(v30);
          sub_B70738(v35, 0LL);
        }
        v30 = ((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_K__V__o *, _QWORD))method->rgctx_data->_7_System_Collections_Generic_Dictionary_K__V__Remove->methodPointer)(
                dic,
                *(_QWORD *)(v33 + 32 + 8 * v34));
        LODWORD(v32) = *(_DWORD *)(v33 + 24);
        ++v34;
      }
      while ( (__int64)v34 < (int)v32 );
    }
  }
}


void __fastcall BasicHelper__SetStopEffectCallBack(
        UnityEngine_GameObject_o *obj,
        bool isDestroy,
        System_Action_o *action,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x22

  if ( (byte_434F7C5 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F7C5 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  Component_srcLineSprite = 0LL;
  if ( v7 )
  {
    if ( !obj )
      goto LABEL_16;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        obj,
                                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( v7 )
  {
    if ( Component_srcLineSprite )
    {
      ((void (__fastcall *)(UnityEngine_Object_o *, bool, System_Action_o *, Il2CppClass *))Component_srcLineSprite->klass[1]._1.castClass)(
        Component_srcLineSprite,
        isDestroy,
        action,
        Component_srcLineSprite->klass[1]._1.declaringType);
      return;
    }
LABEL_16:
    sub_B7076C(v7, v8);
  }
  ActionExtensions__Call(action, 0LL);
}


System_Collections_Generic_List_T__o *__fastcall BasicHelper__Shuffle_int_(
        System_Collections_Generic_List_T__o *list,
        const MethodInfo_1BDF53C *method)
{
  unsigned int v4; // w21
  unsigned int v5; // w22
  int32_t v6; // w0
  unsigned int v7; // w23
  unsigned int v8; // w0

  if ( !list )
    sub_B7076C(0LL, method);
  if ( ((__int64 (*)(void))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)() >= 1 )
  {
    v4 = 0;
    do
    {
      v5 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Item->methodPointer)(
             list,
             v4);
      v6 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list);
      v7 = UnityEngine_Random__Range_36100992(0, v6, 0LL);
      v8 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Item->methodPointer)(
             list,
             v7);
      ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD, _QWORD))method->rgctx_data->_2_System_Collections_Generic_List_T__set_Item->methodPointer)(
        list,
        v4,
        v8);
      ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD, _QWORD))method->rgctx_data->_2_System_Collections_Generic_List_T__set_Item->methodPointer)(
        list,
        v7,
        v5);
      ++v4;
    }
    while ( (int)v4 < ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list) );
  }
  return list;
}


System_Collections_Generic_List_T__o *__fastcall BasicHelper__Shuffle_string_(
        System_Collections_Generic_List_T__o *list,
        const MethodInfo_1BDF648 *method)
{
  unsigned int v4; // w21
  __int64 v5; // x22
  int32_t v6; // w0
  unsigned int v7; // w23
  __int64 v8; // x0

  if ( !list )
    sub_B7076C(0LL, method);
  if ( ((__int64 (*)(void))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)() >= 1 )
  {
    v4 = 0;
    do
    {
      v5 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Item->methodPointer)(
             list,
             v4);
      v6 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list);
      v7 = UnityEngine_Random__Range_36100992(0, v6, 0LL);
      v8 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Item->methodPointer)(
             list,
             v7);
      ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD, __int64))method->rgctx_data->_2_System_Collections_Generic_List_T__set_Item->methodPointer)(
        list,
        v4,
        v8);
      ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD, __int64))method->rgctx_data->_2_System_Collections_Generic_List_T__set_Item->methodPointer)(
        list,
        v7,
        v5);
      ++v4;
    }
    while ( (int)v4 < ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list) );
  }
  return list;
}


System_Collections_Generic_List_T__o *__fastcall BasicHelper__StableSort_QuestScriptMaterialOverwriteEntity_(
        System_Collections_Generic_List_T__o *list,
        System_Func_T__int__o *priorityFunc,
        bool isDescending,
        const MethodInfo_1BDF754 *method)
{
  int v8; // w23
  __int64 v9; // x0
  __int64 v10; // x1
  int v11; // w0
  int v12; // w25
  unsigned int i; // w24
  __int64 v14; // x26
  int v15; // w0
  _BOOL4 v16; // w8
  int v17; // w27
  unsigned int v18; // w28
  __int64 v19; // x0
  int v20; // w0
  _BOOL4 v21; // w8

  if ( list
    && ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)(list) >= 2 )
  {
    v8 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)(list);
    v9 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
           list,
           0LL);
    if ( !priorityFunc )
      sub_B7076C(v9, v10);
    v11 = ((__int64 (__fastcall *)(System_Func_T__int__o *, __int64))method->rgctx_data->_2_System_Func_T__int__Invoke->methodPointer)(
            priorityFunc,
            v9);
    if ( v8 >= 2 )
    {
      v12 = v11;
      for ( i = 1; i != v8; ++i )
      {
        v14 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
                list,
                i);
        v15 = ((__int64 (__fastcall *)(System_Func_T__int__o *, __int64))method->rgctx_data->_2_System_Func_T__int__Invoke->methodPointer)(
                priorityFunc,
                v14);
        v16 = v15 > v12;
        if ( !isDescending )
          v16 = v15 < v12;
        v17 = v15;
        if ( v16 )
        {
          ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_3_System_Collections_Generic_List_T__RemoveAt->methodPointer)(
            list,
            i);
          v18 = 0;
          while ( 1 )
          {
            v19 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
                    list,
                    v18);
            v20 = ((__int64 (__fastcall *)(System_Func_T__int__o *, __int64))method->rgctx_data->_2_System_Func_T__int__Invoke->methodPointer)(
                    priorityFunc,
                    v19);
            v21 = v17 > v20;
            if ( !isDescending )
              v21 = v17 < v20;
            if ( v21 )
              break;
            if ( ++v18 >= i )
              goto LABEL_16;
          }
          ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD, __int64))method->rgctx_data->_4_System_Collections_Generic_List_T__Insert->methodPointer)(
            list,
            v18,
            v14);
LABEL_16:
          v17 = v12;
        }
        v12 = v17;
      }
    }
  }
  return list;
}


System_String_o *__fastcall BasicHelper__SubstringLast(
        System_Text_StringBuilder_o *self,
        int32_t len,
        const MethodInfo *method)
{
  int32_t Length; // w0
  System_String_o *v7; // x21
  int32_t v8; // w0

  if ( (byte_434F7CA & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434F7CA = 1;
  }
  if ( !self || System_Text_StringBuilder__get_Length(self, 0LL) < len )
    return (System_String_o *)StringLiteral_1/*""*/;
  Length = System_Text_StringBuilder__get_Length(self, 0LL);
  v7 = System_Text_StringBuilder__ToString_42599076(self, Length - len, len, 0LL);
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
          UnityEngine_Animation__Play_51542184(v8, selfAnimStr, 0LL);
          return 1;
        }
      }
LABEL_13:
      sub_B7076C(self, selfAnimStr);
    }
  }
  return 0;
}


bool __fastcall BasicHelper__SynchronizeAnimation_20859312(
        SimpleAnimation_o *self,
        System_String_o *selfAnimStr,
        System_String_o *tgAnimStr,
        SimpleAnimation_o *targetAnim,
        const MethodInfo *method)
{
  SimpleAnimation_o *v8; // x20
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v10; // x23
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 v13; // x0
  int v14; // w23
  SimpleAnimation_c *v15; // x8
  SimpleAnimation_o *v16; // x24
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  SimpleAnimation_c *v20; // x8
  SimpleAnimation_o *v21; // x23
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  float v25; // s8
  SimpleAnimation_c *v26; // x8
  SimpleAnimation_o *v27; // x23
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  SimpleAnimation_State_o *Item; // x23
  SimpleAnimation_c *v32; // x8
  SimpleAnimation_o *v33; // x21
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  long double v38; // q0
  SimpleAnimation_State_c *v39; // x8
  long double v40; // q8
  unsigned __int64 v41; // x10
  SimpleAnimation_State_c **v42; // x11
  __int64 p_method; // x0

  v8 = self;
  if ( (byte_434F7C3 & 1) == 0 )
  {
    self = (SimpleAnimation_o *)sub_B70694(&SimpleAnimation_State_TypeInfo);
    byte_434F7C3 = 1;
  }
  if ( !v8 )
    goto LABEL_51;
  self = (SimpleAnimation_o *)SimpleAnimation__get_Item(v8, selfAnimStr, 0LL);
  if ( !self )
    goto LABEL_51;
  klass = self->klass;
  v10 = self;
  if ( *(_WORD *)&self->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v11;
      p_offset += 4;
      if ( v11 >= *(unsigned __int16 *)&self->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v13 = (__int64)(&klass[1]._1.klass + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v13 = sub_B08590(self, SimpleAnimation_State_TypeInfo, 15LL);
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
  if ( *(_WORD *)&self->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v18 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v17;
      v18 += 4;
      if ( v17 >= *(unsigned __int16 *)&self->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v19 = (__int64)(&v15[1]._1.klass + 2 * *v18);
  }
  else
  {
LABEL_17:
    v19 = sub_B08590(self, SimpleAnimation_State_TypeInfo, 15LL);
  }
  if ( v14 != (*(unsigned int (__fastcall **)(SimpleAnimation_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8)) )
    return 0;
  self = (SimpleAnimation_o *)SimpleAnimation__get_Item(v8, selfAnimStr, 0LL);
  if ( !self )
    goto LABEL_51;
  v20 = self->klass;
  v21 = self;
  if ( *(_WORD *)&self->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v20->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v23 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&self->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    v24 = (__int64)(&v20[1]._1.parent + 2 * *v23);
  }
  else
  {
LABEL_25:
    v24 = sub_B08590(self, SimpleAnimation_State_TypeInfo, 13LL);
  }
  LODWORD(v25) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(SimpleAnimation_o *, _QWORD))*(_QWORD *)v24)(v21, *(_QWORD *)(v24 + 8)));
  self = (SimpleAnimation_o *)SimpleAnimation__get_Item(targetAnim, tgAnimStr, 0LL);
  if ( !self )
LABEL_51:
    sub_B7076C(self, selfAnimStr);
  v26 = self->klass;
  v27 = self;
  if ( *(_WORD *)&self->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v26->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v29 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&self->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v30 = (__int64)(&v26[1]._1.parent + 2 * *v29);
  }
  else
  {
LABEL_32:
    v30 = sub_B08590(self, SimpleAnimation_State_TypeInfo, 13LL);
  }
  if ( v25 != (*(float (__fastcall **)(SimpleAnimation_o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8)) )
    return 0;
  Item = SimpleAnimation__get_Item(v8, selfAnimStr, 0LL);
  self = (SimpleAnimation_o *)SimpleAnimation__get_Item(targetAnim, tgAnimStr, 0LL);
  if ( !self )
    goto LABEL_51;
  v32 = self->klass;
  v33 = self;
  if ( *(_WORD *)&self->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v32->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v35 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&self->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    v36 = (__int64)(&v32->vtable._3_ToString.method + 2 * *v35);
  }
  else
  {
LABEL_40:
    v36 = sub_B08590(self, SimpleAnimation_State_TypeInfo, 3LL);
  }
  self = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
  if ( !Item )
    goto LABEL_51;
  v39 = Item->klass;
  v40 = v38;
  if ( *(_WORD *)&Item->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    v42 = (SimpleAnimation_State_c **)&v39->_1.interfaceOffsets->offset;
    while ( *(v42 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v41;
      v42 += 2;
      if ( v41 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
        goto LABEL_48;
    }
    p_method = (__int64)&v39->vtable[*(_DWORD *)v42 + 4].method;
  }
  else
  {
LABEL_48:
    p_method = sub_B08590(Item, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(
    Item,
    *(_QWORD *)(p_method + 8),
    v40);
  SimpleAnimation__Sample(v8, 0LL);
  SimpleAnimation__Play_16672920(v8, selfAnimStr, 0LL);
  return 1;
}


Il2CppObject *__fastcall BasicHelper__TakeIf_object_(
        Il2CppObject *self,
        System_Predicate_T__o *match,
        const MethodInfo_1BDF91C *method)
{
  Il2CppObject *v3; // x19

  if ( !self )
    return 0LL;
  if ( !match )
    sub_B7076C(self, 0LL);
  v3 = self;
  if ( (((__int64 (__fastcall *)(System_Predicate_T__o *, Il2CppObject *))method->rgctx_data->_1_System_Predicate_T__Invoke->methodPointer)(
          match,
          self) & 1) == 0 )
    return 0LL;
  return v3;
}


System_String_o *__fastcall BasicHelper__ToCommaString(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_434F7CB & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_23872/*"{0:#,0}"*/);
    byte_434F7CB = 1;
  }
  v6 = value;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6, v2);
  return System_String__Format((System_String_o *)StringLiteral_23872/*"{0:#,0}"*/, v4, 0LL);
}


System_String_o *__fastcall BasicHelper__ToCommaString_20861428(int64_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x0
  int64_t v6; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_434F7CC & 1) == 0 )
  {
    sub_B70694(&long_TypeInfo);
    sub_B70694(&StringLiteral_23872/*"{0:#,0}"*/);
    byte_434F7CC = 1;
  }
  v6 = value;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v6, v2);
  return System_String__Format((System_String_o *)StringLiteral_23872/*"{0:#,0}"*/, v4, 0LL);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BasicHelper__ToIterator_RestockServantLogic_(
        int32_t loopCount,
        System_Func_int__T__o *func,
        const MethodInfo_1BDF968 *method)
{
  Il2CppClass *_0_BasicHelper__ToIterator_d__31_T; // x22
  __int64 v7; // x0
  const MethodInfo_1BDF968_RGCTXs *rgctx_data; // x8
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  _0_BasicHelper__ToIterator_d__31_T = method->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
  if ( (BYTE2(_0_BasicHelper__ToIterator_d__31_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_);
  v7 = sub_B70764(_0_BasicHelper__ToIterator_d__31_T);
  rgctx_data = method->rgctx_data;
  v9 = v7;
  v10 = ((__int64 (__fastcall *)(__int64, __int64))rgctx_data->_1_BasicHelper__ToIterator_d__31_T___ctor->methodPointer)(
          v7,
          4294967294LL);
  if ( !v9 )
    sub_B7076C(v10, v11);
  *(_DWORD *)(v9 + 60) = loopCount;
  *(_QWORD *)(v9 + 48) = func;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 48), (System_Int32_array **)func, v12, v13, v14, v15, v16, v17);
  return (System_Collections_Generic_IEnumerable_T__o *)v9;
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BasicHelper__ToIterator_float_(
        int32_t loopCount,
        System_Func_int__T__o *func,
        const MethodInfo_1BDF9EC *method)
{
  Il2CppClass *_0_BasicHelper__ToIterator_d__31_T; // x22
  __int64 v7; // x0
  const MethodInfo_1BDF9EC_RGCTXs *rgctx_data; // x8
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  _0_BasicHelper__ToIterator_d__31_T = method->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_;
  if ( (BYTE2(_0_BasicHelper__ToIterator_d__31_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_0_BasicHelper__ToIterator_d__31_T_);
  v7 = sub_B70764(_0_BasicHelper__ToIterator_d__31_T);
  rgctx_data = method->rgctx_data;
  v9 = v7;
  v10 = ((__int64 (__fastcall *)(__int64, __int64))rgctx_data->_1_BasicHelper__ToIterator_d__31_T___ctor->methodPointer)(
          v7,
          4294967294LL);
  if ( !v9 )
    sub_B7076C(v10, v11);
  *(_DWORD *)(v9 + 52) = loopCount;
  *(_QWORD *)(v9 + 40) = func;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)func, v12, v13, v14, v15, v16, v17);
  return (System_Collections_Generic_IEnumerable_T__o *)v9;
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__WaitForEndOfFrameCall(
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_434F7CD & 1) == 0 )
  {
    sub_B70694(&BasicHelper__WaitForEndOfFrameCall_d__43_TypeInfo);
    byte_434F7CD = 1;
  }
  v3 = sub_B70764(BasicHelper__WaitForEndOfFrameCall_d__43_TypeInfo);
  BasicHelper__WaitForEndOfFrameCall_d__43___ctor((BasicHelper__WaitForEndOfFrameCall_d__43_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = action;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)action, v6, v7, v8, v9, v10, v11);
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_43509EE & 1) == 0 )
  {
    sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_43509EE = 1;
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
    v5 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, delay, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BasicHelper__DelayCall_d__35_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
        const MethodInfo_1F4535C *method)
{
  if ( !this )
    sub_B7076C(0LL, 1__state);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___MoveNext(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_1F45394 *method)
{
  int32_t _1__state; // w8
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  bool result; // w0
  void *monitor; // x9
  __int128 v15; // q0
  struct System_Action_T__o *action; // x0
  __int64 v17; // x10
  BasicHelper__DelayCall_d__36_T__RGCTXs *rgctx_data; // x8
  void (__fastcall *methodPointer)(struct System_Action_T__o *, __int128 *, MethodInfo *); // x9
  __int128 v20; // [xsp+0h] [xbp-60h] BYREF
  __int64 v21; // [xsp+10h] [xbp-50h]
  __int128 v22; // [xsp+20h] [xbp-40h]
  void *v23; // [xsp+30h] [xbp-30h]

  if ( (byte_4355C74 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4355C74 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    monitor = this[1].monitor;
    v15 = *(_OWORD *)&this->fields.arg;
    this->fields.__1__state = -1;
    action = this->fields.action;
    v23 = monitor;
    v22 = v15;
    v17 = (__int64)monitor;
    rgctx_data = method->klass->rgctx_data;
    methodPointer = (void (__fastcall *)(struct System_Action_T__o *, __int128 *, MethodInfo *))rgctx_data->_0_ActionExtensions_Call_T_->methodPointer;
    v21 = v17;
    v20 = v15;
    methodPointer(action, &v20, rgctx_data->_0_ActionExtensions_Call_T_);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    delay = this->fields.delay;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v6, delay, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_1F45490 *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___System_Collections_IEnumerator_Reset(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_1F45498 *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument__System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___System_Collections_IEnumerator_get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_1F454D8 *method)
{
  return this->fields.__2__current;
}


void __fastcall BasicHelper__DelayCall_d__36_ShowAllEx_DamageFuncArgument___System_IDisposable_Dispose(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_1F45390 *method)
{
  ;
}


void __fastcall BasicHelper__DelayCall_d__36_object____ctor(
        BasicHelper__DelayCall_d__36_T__o *this,
        int32_t 1__state,
        const MethodInfo_1F45208 *method)
{
  if ( !this )
    sub_B7076C(0LL, 1__state);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BasicHelper__DelayCall_d__36_object___MoveNext(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_1F45240 *method)
{
  int32_t _1__state; // w8
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  bool result; // w0

  if ( (byte_4355C73 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4355C73 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    ((void (__fastcall *)(struct System_Action_T__o *, Il2CppObject *))method->klass->rgctx_data->_0_ActionExtensions_Call_T_->methodPointer)(
      this->fields.action,
      this->fields.arg);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    delay = this->fields.delay;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v6, delay, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BasicHelper__DelayCall_d__36_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_1F4530C *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BasicHelper__DelayCall_d__36_object___System_Collections_IEnumerator_Reset(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_1F45314 *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BasicHelper__DelayCall_d__36_object__System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BasicHelper__DelayCall_d__36_object___System_Collections_IEnumerator_get_Current(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_1F45354 *method)
{
  return this->fields.__2__current;
}


void __fastcall BasicHelper__DelayCall_d__36_object___System_IDisposable_Dispose(
        BasicHelper__DelayCall_d__36_T__o *this,
        const MethodInfo_1F4523C *method)
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_43509EF & 1) == 0 )
  {
    sub_B70694(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    byte_43509EF = 1;
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
    v5 = (UnityEngine_WaitForSecondsRealtime_o *)sub_B70764(UnityEngine_WaitForSecondsRealtime_TypeInfo);
    UnityEngine_WaitForSecondsRealtime___ctor(v5, delay, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BasicHelper__RealDelayCall_d__37_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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


void __fastcall BasicHelper__RealDelayCall_d__38_object____ctor(
        BasicHelper__RealDelayCall_d__38_T__o *this,
        int32_t 1__state,
        const MethodInfo_263A5DC *method)
{
  if ( !this )
    sub_B7076C(0LL, 1__state);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BasicHelper__RealDelayCall_d__38_object___MoveNext(
        BasicHelper__RealDelayCall_d__38_T__o *this,
        const MethodInfo_263A614 *method)
{
  int32_t _1__state; // w8
  float delay; // s8
  UnityEngine_WaitForSecondsRealtime_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  bool result; // w0

  if ( (byte_435B7BA & 1) == 0 )
  {
    sub_B70694(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    byte_435B7BA = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    ((void (__fastcall *)(struct System_Action_T__o *, Il2CppObject *))method->klass->rgctx_data->_0_ActionExtensions_Call_T_->methodPointer)(
      this->fields.action,
      this->fields.arg);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    delay = this->fields.delay;
    v6 = (UnityEngine_WaitForSecondsRealtime_o *)sub_B70764(UnityEngine_WaitForSecondsRealtime_TypeInfo);
    UnityEngine_WaitForSecondsRealtime___ctor(v6, delay, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BasicHelper__RealDelayCall_d__38_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BasicHelper__RealDelayCall_d__38_T__o *this,
        const MethodInfo_263A6E0 *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BasicHelper__RealDelayCall_d__38_object___System_Collections_IEnumerator_Reset(
        BasicHelper__RealDelayCall_d__38_T__o *this,
        const MethodInfo_263A6E8 *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BasicHelper__RealDelayCall_d__38_object__System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BasicHelper__RealDelayCall_d__38_object___System_Collections_IEnumerator_get_Current(
        BasicHelper__RealDelayCall_d__38_T__o *this,
        const MethodInfo_263A728 *method)
{
  return this->fields.__2__current;
}


void __fastcall BasicHelper__RealDelayCall_d__38_object___System_IDisposable_Dispose(
        BasicHelper__RealDelayCall_d__38_T__o *this,
        const MethodInfo_263A610 *method)
{
  ;
}


void __fastcall BasicHelper__ToIterator_d__31_float____ctor(
        BasicHelper__ToIterator_d__31_T__o *this,
        int32_t 1__state,
        const MethodInfo_26425C8 *method)
{
  if ( !this )
    sub_B7076C(0LL, 1__state);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  LODWORD(this->fields.__2__current) = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BasicHelper__ToIterator_d__31_float___MoveNext(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_264260C *method)
{
  int32_t _1__state; // w8
  __int64 v4; // x8
  int32_t v5; // w8
  int32_t loopCount; // w8
  __int64 v7; // x0
  float v8; // s0
  bool result; // w0

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    loopCount = this->fields.loopCount;
    this->fields.__1__state = -1;
    v5 = loopCount + 1;
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
  if ( v5 >= SLODWORD(this->fields.__3__func) )
    return 0;
  v7 = *(_QWORD *)&this->fields.__l__initialThreadId;
  if ( !v7 )
    sub_B7076C(0LL, method);
  v8 = ((float (__fastcall *)(__int64, _QWORD))method->klass->rgctx_data->_0_System_Func_int__T__Invoke->methodPointer)(
         v7,
         (unsigned int)v5);
  result = 1;
  *((float *)&this->fields.__1__state + 1) = v8;
  this->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_T__o *__fastcall BasicHelper__ToIterator_d__31_float___System_Collections_Generic_IEnumerable_T__GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_264273C *method)
{
  int _2__current; // w21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BasicHelper__ToIterator_d__31_T__o *v11; // x20
  Il2CppClass *_2_BasicHelper__ToIterator_d__31_T; // x21
  __int64 v13; // x0
  BasicHelper__ToIterator_d__31_T__c *klass; // x8
  __int64 v15; // x0
  __int64 v16; // x1
  System_Int32_array **func; // x1

  if ( this->fields.__1__state == -2
    && (_2__current = (int)this->fields.__2__current, _2__current == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v11 = this;
  }
  else
  {
    _2_BasicHelper__ToIterator_d__31_T = method->klass->rgctx_data->_2_BasicHelper__ToIterator_d__31_T_;
    if ( (BYTE2(_2_BasicHelper__ToIterator_d__31_T->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->klass->rgctx_data->_2_BasicHelper__ToIterator_d__31_T_);
    v13 = sub_B70764(_2_BasicHelper__ToIterator_d__31_T);
    klass = method->klass;
    v11 = (BasicHelper__ToIterator_d__31_T__o *)v13;
    v15 = ((__int64 (__fastcall *)(__int64, _QWORD))klass->rgctx_data->_3_BasicHelper__ToIterator_d__31_T___ctor->methodPointer)(
            v13,
            0LL);
    if ( !v11 )
      sub_B7076C(v15, v16);
  }
  LODWORD(v11->fields.__3__func) = HIDWORD(this->fields.__3__func);
  func = (System_Int32_array **)this->fields.func;
  *(_QWORD *)&v11->fields.__l__initialThreadId = func;
  sub_B70630((BattleServantConfConponent_o *)&v11->fields.__l__initialThreadId, func, v5, v6, v7, v8, v9, v10);
  return (System_Collections_Generic_IEnumerator_T__o *)v11;
}


float __fastcall BasicHelper__ToIterator_d__31_float___System_Collections_Generic_IEnumerator_T__get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_26426AC *method)
{
  return *((float *)&this->fields.__1__state + 1);
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__ToIterator_d__31_float___System_Collections_IEnumerable_GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_26427F4 *method)
{
  if ( !this )
    sub_B7076C(0LL, method);
  return (System_Collections_IEnumerator_o *)((__int64 (*)(void))method->klass->rgctx_data->_4_BasicHelper__ToIterator_d__31_T__System_Collections_Generic_IEnumerable_T__GetEnumerator->methodPointer)();
}


void __fastcall __noreturn BasicHelper__ToIterator_d__31_float___System_Collections_IEnumerator_Reset(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_26426B4 *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BasicHelper__ToIterator_d__31_float__System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BasicHelper__ToIterator_d__31_float___System_Collections_IEnumerator_get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_26426F4 *method)
{
  __int64 v2; // x2
  Il2CppClass *_1_T; // x19
  int v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = *(&this->fields.__1__state + 1);
  _1_T = method->klass->rgctx_data->_1_T;
  if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->klass->rgctx_data->_1_T);
  return (Il2CppObject *)j_il2cpp_value_box_0(_1_T, &v5, v2);
}


void __fastcall BasicHelper__ToIterator_d__31_float___System_IDisposable_Dispose(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_2642608 *method)
{
  ;
}


void __fastcall BasicHelper__ToIterator_d__31_object____ctor(
        BasicHelper__ToIterator_d__31_T__o *this,
        int32_t 1__state,
        const MethodInfo_26423AC *method)
{
  if ( !this )
    sub_B7076C(0LL, 1__state);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BasicHelper__ToIterator_d__31_object___MoveNext(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_26423F0 *method)
{
  int32_t _1__state; // w8
  struct System_Func_int__T__o *func; // x8
  int32_t v5; // w8
  int32_t i_5__2; // w8
  struct System_Func_int__T__o *v7; // x0
  Il2CppObject *v8; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  bool result; // w0

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    i_5__2 = this->fields._i_5__2;
    this->fields.__1__state = -1;
    v5 = i_5__2 + 1;
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
  if ( v5 >= this->fields.loopCount )
    return 0;
  v7 = this->fields.func;
  if ( !v7 )
    sub_B7076C(0LL, method);
  v8 = (Il2CppObject *)((__int64 (__fastcall *)(struct System_Func_int__T__o *, _QWORD))method->klass->rgctx_data->_0_System_Func_int__T__Invoke->methodPointer)(
                         v7,
                         (unsigned int)v5);
  this->fields.__2__current = v8;
  p__2__current = &this->fields.__2__current;
  sub_B70630((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


System_Collections_Generic_IEnumerator_T__o *__fastcall BasicHelper__ToIterator_d__31_object___System_Collections_Generic_IEnumerable_T__GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_26424EC *method)
{
  int32_t l__initialThreadId; // w21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BasicHelper__ToIterator_d__31_T__o *v11; // x20
  Il2CppClass *_2_BasicHelper__ToIterator_d__31_T; // x21
  __int64 v13; // x0
  BasicHelper__ToIterator_d__31_T__c *klass; // x8
  __int64 v15; // x0
  __int64 v16; // x1
  System_Int32_array **_3__func; // x1

  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v11 = this;
  }
  else
  {
    _2_BasicHelper__ToIterator_d__31_T = method->klass->rgctx_data->_2_BasicHelper__ToIterator_d__31_T_;
    if ( (BYTE2(_2_BasicHelper__ToIterator_d__31_T->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->klass->rgctx_data->_2_BasicHelper__ToIterator_d__31_T_);
    v13 = sub_B70764(_2_BasicHelper__ToIterator_d__31_T);
    klass = method->klass;
    v11 = (BasicHelper__ToIterator_d__31_T__o *)v13;
    v15 = ((__int64 (__fastcall *)(__int64, _QWORD))klass->rgctx_data->_3_BasicHelper__ToIterator_d__31_T___ctor->methodPointer)(
            v13,
            0LL);
    if ( !v11 )
      sub_B7076C(v15, v16);
  }
  v11->fields.loopCount = this->fields.__3__loopCount;
  _3__func = (System_Int32_array **)this->fields.__3__func;
  v11->fields.func = (struct System_Func_int__T__o *)_3__func;
  sub_B70630((BattleServantConfConponent_o *)&v11->fields.func, _3__func, v5, v6, v7, v8, v9, v10);
  return (System_Collections_Generic_IEnumerator_T__o *)v11;
}


Il2CppObject *__fastcall BasicHelper__ToIterator_d__31_object___System_Collections_Generic_IEnumerator_T__get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_264249C *method)
{
  return this->fields.__2__current;
}


System_Collections_IEnumerator_o *__fastcall BasicHelper__ToIterator_d__31_object___System_Collections_IEnumerable_GetEnumerator(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_26425A4 *method)
{
  if ( !this )
    sub_B7076C(0LL, method);
  return (System_Collections_IEnumerator_o *)((__int64 (*)(void))method->klass->rgctx_data->_4_BasicHelper__ToIterator_d__31_T__System_Collections_Generic_IEnumerable_T__GetEnumerator->methodPointer)();
}


void __fastcall __noreturn BasicHelper__ToIterator_d__31_object___System_Collections_IEnumerator_Reset(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_26424A4 *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BasicHelper__ToIterator_d__31_object__System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BasicHelper__ToIterator_d__31_object___System_Collections_IEnumerator_get_Current(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_26424E4 *method)
{
  return this->fields.__2__current;
}


void __fastcall BasicHelper__ToIterator_d__31_object___System_IDisposable_Dispose(
        BasicHelper__ToIterator_d__31_T__o *this,
        const MethodInfo_26423EC *method)
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_43509F0 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_43509F0 = 1;
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
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0LL);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v4,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BasicHelper__WaitForEndOfFrameCall_d__43_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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


void __fastcall BasicHelper___c__22_int__object____cctor(const MethodInfo_1F36F40 *method)
{
  BasicHelper___c__22_K__V__c *klass; // x20
  Il2CppClass *_0_BasicHelper___c__22_K__V; // x20
  __int64 v4; // x0
  BasicHelper___c__22_K__V__c *v5; // x22
  System_Int32_array **v6; // x20
  __int16 v7; // w8
  BasicHelper___c__22_K__V__c *v8; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BasicHelper___c__22_K__V__c *v16; // x19
  Il2CppClass *_2_BasicHelper___c__22_K__V; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B08394(method->klass);
  _0_BasicHelper___c__22_K__V = klass->rgctx_data->_0_BasicHelper___c__22_K__V_;
  if ( (BYTE2(_0_BasicHelper___c__22_K__V->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(_0_BasicHelper___c__22_K__V);
  v4 = sub_B70764(_0_BasicHelper___c__22_K__V);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_B08394(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BasicHelper___c__22_K__V___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_B08394(v8);
  methodPointer(v6, v8->rgctx_data->_1_BasicHelper___c__22_K__V___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B08394(v16);
  _2_BasicHelper___c__22_K__V = v16->rgctx_data->_2_BasicHelper___c__22_K__V_;
  if ( (BYTE2(_2_BasicHelper___c__22_K__V->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(_2_BasicHelper___c__22_K__V);
  static_fields = (BattleServantConfConponent_o *)_2_BasicHelper___c__22_K__V->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B70630(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BasicHelper___c__22_int__object____ctor(
        BasicHelper___c__22_K__V__o *this,
        const MethodInfo_1F3701C *method)
{
  if ( !this )
    sub_B7076C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BasicHelper___c__22_int__object____Remove_b__22_0(
        BasicHelper___c__22_K__V__o *this,
        System_Collections_Generic_KeyValuePair_K__V__o pair,
        const MethodInfo_1F37034 *method)
{
  return (int32_t)pair.fields.key;
}


void __fastcall BasicHelper___c__22_object__object____cctor(const MethodInfo_1F3703C *method)
{
  BasicHelper___c__22_K__V__c *klass; // x20
  Il2CppClass *_0_BasicHelper___c__22_K__V; // x20
  __int64 v4; // x0
  BasicHelper___c__22_K__V__c *v5; // x22
  System_Int32_array **v6; // x20
  __int16 v7; // w8
  BasicHelper___c__22_K__V__c *v8; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BasicHelper___c__22_K__V__c *v16; // x19
  Il2CppClass *_2_BasicHelper___c__22_K__V; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B08394(method->klass);
  _0_BasicHelper___c__22_K__V = klass->rgctx_data->_0_BasicHelper___c__22_K__V_;
  if ( (BYTE2(_0_BasicHelper___c__22_K__V->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(_0_BasicHelper___c__22_K__V);
  v4 = sub_B70764(_0_BasicHelper___c__22_K__V);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_B08394(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BasicHelper___c__22_K__V___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_B08394(v8);
  methodPointer(v6, v8->rgctx_data->_1_BasicHelper___c__22_K__V___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B08394(v16);
  _2_BasicHelper___c__22_K__V = v16->rgctx_data->_2_BasicHelper___c__22_K__V_;
  if ( (BYTE2(_2_BasicHelper___c__22_K__V->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(_2_BasicHelper___c__22_K__V);
  static_fields = (BattleServantConfConponent_o *)_2_BasicHelper___c__22_K__V->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B70630(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BasicHelper___c__22_object__object____ctor(
        BasicHelper___c__22_K__V__o *this,
        const MethodInfo_1F37118 *method)
{
  if ( !this )
    sub_B7076C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


Il2CppObject *__fastcall BasicHelper___c__22_object__object____Remove_b__22_0(
        BasicHelper___c__22_K__V__o *this,
        System_Collections_Generic_KeyValuePair_K__V__o pair,
        const MethodInfo_1F37130 *method)
{
  return pair.fields.key;
}


void __fastcall BasicHelper___c__26_object____cctor(const MethodInfo_1F37430 *method)
{
  BasicHelper___c__26_T__c *klass; // x20
  Il2CppClass *_0_BasicHelper___c__26_T; // x20
  __int64 v4; // x0
  BasicHelper___c__26_T__c *v5; // x22
  System_Int32_array **v6; // x20
  __int16 v7; // w8
  BasicHelper___c__26_T__c *v8; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BasicHelper___c__26_T__c *v16; // x19
  Il2CppClass *_2_BasicHelper___c__26_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B08394(method->klass);
  _0_BasicHelper___c__26_T = klass->rgctx_data->_0_BasicHelper___c__26_T_;
  if ( (BYTE2(_0_BasicHelper___c__26_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(_0_BasicHelper___c__26_T);
  v4 = sub_B70764(_0_BasicHelper___c__26_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_B08394(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BasicHelper___c__26_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_B08394(v8);
  methodPointer(v6, v8->rgctx_data->_1_BasicHelper___c__26_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B08394(v16);
  _2_BasicHelper___c__26_T = v16->rgctx_data->_2_BasicHelper___c__26_T_;
  if ( (BYTE2(_2_BasicHelper___c__26_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(_2_BasicHelper___c__26_T);
  static_fields = (BattleServantConfConponent_o *)_2_BasicHelper___c__26_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B70630(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BasicHelper___c__26_object____ctor(BasicHelper___c__26_T__o *this, const MethodInfo_1F3750C *method)
{
  if ( !this )
    sub_B7076C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BasicHelper___c__26_object____ExcludeNull_b__26_0(
        BasicHelper___c__26_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F37524 *method)
{
  return x != 0LL;
}