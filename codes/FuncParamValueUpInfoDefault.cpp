void __fastcall FuncParamValueUpInfoDefault___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  struct DataVals_TYPE_array *v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B18D1E & 1) == 0 )
  {
    sub_1BCA7E0(&FuncParamValueUpInfoDefault_TypeInfo, v1, v2);
    sub_1BCA7E0(&DataVals_TYPE___TypeInfo, v3, v4);
    byte_4B18D1E = 1;
  }
  v5 = (struct DataVals_TYPE_array *)sub_1BCA888(DataVals_TYPE___TypeInfo, 1LL);
  if ( !v5 )
    sub_1BCAA3C(0LL, v6);
  if ( !v5->max_length )
    sub_1BCAA44(v5, v5);
  v5->m_Items[1] = 3;
  FuncParamValueUpInfoDefault_TypeInfo->static_fields->defaultValueUpValsTypes = v5;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)FuncParamValueUpInfoDefault_TypeInfo->static_fields,
    (int64_t)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


void __fastcall FuncParamValueUpInfoDefault___ctor(FuncParamValueUpInfoDefault_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18D1D & 1) == 0 )
  {
    sub_1BCA7E0(&FuncParamValueUpInfoBase_TypeInfo, method, v2);
    byte_4B18D1D = 1;
  }
  if ( !FuncParamValueUpInfoBase_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoBase_TypeInfo, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
FuncParamValueUpInfoDefault_o *__fastcall FuncParamValueUpInfoDefault__Create(
        DataVals_o *dataVals,
        int32_t valueUp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x21
  struct FunctionEntity_o *funcEnt; // x22
  _BOOL4 isParam; // w21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  int32_t v12; // w22
  _BOOL4 IsIgnoreValueUpBuffType; // w0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  int32_t funcType; // w22
  const MethodInfo *v18; // x1
  __int64 v19; // x0
  const MethodInfo *v20; // x1
  DataVals_TYPE_array *ValueUpTypeArray; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B18D19 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int____76842096, *(_QWORD *)&valueUp, method);
    sub_1BCA7E0(&FuncParamValueUpInfoDefault_TypeInfo, v5, v6);
    byte_4B18D19 = 1;
  }
  if ( !dataVals )
    return 0LL;
  v7 = 0LL;
  if ( valueUp )
  {
    funcEnt = dataVals->fields.funcEnt;
    if ( funcEnt )
    {
      isParam = DataVals__isParam(dataVals, 121, 0LL);
      if ( FuncList__isAddState(funcEnt->fields.funcType, 0LL) )
      {
        v12 = BasicHelper__IndexValue_int_(
                funcEnt->fields.vals,
                0,
                0,
                (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
        if ( !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo, v11);
        IsIgnoreValueUpBuffType = FuncParamValueUpInfoDefault__IsIgnoreValueUpBuffType(v12, v11);
      }
      else
      {
        funcType = funcEnt->fields.funcType;
        if ( !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo, v10);
        IsIgnoreValueUpBuffType = FuncParamValueUpInfoDefault__IsIgnoreValueUpFuncType(funcType, v10);
      }
      if ( isParam || IsIgnoreValueUpBuffType )
        return 0LL;
      v7 = sub_1BCAA2C(FuncParamValueUpInfoDefault_TypeInfo, v14, v15, v16);
      FuncParamValueUpInfoDefault___ctor((FuncParamValueUpInfoDefault_o *)v7, v18);
      if ( !v7 )
        sub_1BCAA3C(v19, v20);
      *(_DWORD *)(v7 + 16) = valueUp;
      if ( !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo, v20);
      ValueUpTypeArray = FuncParamValueUpInfoDefault__ExtractValueUpTypeArray(dataVals, v20);
      *(_QWORD *)(v7 + 24) = ValueUpTypeArray;
      sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)ValueUpTypeArray, v22, v23, v24, v25, v26, v27);
    }
  }
  return (FuncParamValueUpInfoDefault_o *)v7;
}


DataVals_TYPE_array *__fastcall FuncParamValueUpInfoDefault__ExtractValueUpTypeArray(
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  __int64 v2; // x2
  DataVals_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_ICollection_o *ParamAsStringArray; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  bool IsNullOrEmpty; // w8
  DataVals_TYPE_array *v19; // x0
  System_Collections_Generic_List_T__o *v20; // x20
  void *monitor; // x8
  unsigned __int64 v22; // x22
  System_String_o *v23; // x21
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  v3 = dataVals;
  if ( (byte_4B18D1A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Enum_TryParse_DataVals_TYPE___, method, v2);
    sub_1BCA7E0(&System_Enum_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataVals_TYPE__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataVals_TYPE__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataVals_TYPE___ctor__, v10, v11);
    dataVals = (DataVals_o *)sub_1BCA7E0(&System_Collections_Generic_List_DataVals_TYPE__TypeInfo, v12, v13);
    byte_4B18D1A = 1;
  }
  result = 0;
  if ( !v3 )
    goto LABEL_21;
  ParamAsStringArray = (System_Collections_ICollection_o *)DataVals__GetParamAsStringArray(v3, 122, 0LL, 0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ParamAsStringArray, 0LL);
  v19 = 0LL;
  if ( IsNullOrEmpty )
    return v19;
  v20 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_DataVals_TYPE__TypeInfo,
                                                  v15,
                                                  v16,
                                                  v17);
  System_Collections_Generic_List_Int32Enum____ctor(
    v20,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_DataVals_TYPE___ctor__);
  if ( !ParamAsStringArray )
    goto LABEL_21;
  monitor = ParamAsStringArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v22 = 0LL;
    do
    {
      if ( v22 >= (unsigned int)monitor )
        sub_1BCAA44(dataVals, method);
      v23 = (System_String_o *)*((_QWORD *)&ParamAsStringArray[2].klass + v22);
      if ( !System_Enum_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, method);
      dataVals = (DataVals_o *)System_Enum__TryParse_Int32Enum_(
                                 v23,
                                 &result,
                                 (const MethodInfo_2F19EE8 *)Method_System_Enum_TryParse_DataVals_TYPE___);
      if ( ((unsigned __int8)dataVals & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_21;
        method = (const MethodInfo *)(unsigned int)result;
        items = v20->fields._items;
        v25 = Method_System_Collections_Generic_List_DataVals_TYPE__Add__;
        ++v20->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_Int32Enum___AddWithResize(
            v20,
            (int32_t)method,
            *(const MethodInfo_3587464 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v20->fields._size = size + 1;
          *((_DWORD *)items->m_Items + size) = (_DWORD)method;
        }
      }
      LODWORD(monitor) = ParamAsStringArray[1].monitor;
    }
    while ( (__int64)++v22 < (int)monitor );
  }
  if ( !v20 )
LABEL_21:
    sub_1BCAA3C(dataVals, method);
  return (DataVals_TYPE_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                  v20,
                                  (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_DataVals_TYPE__ToArray__);
}


bool __fastcall FuncParamValueUpInfoDefault__IsIgnoreValueUpBuffType(int32_t buffId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  int32_t klass_high; // w19
  __int64 v17; // x1
  Il2CppObject *v19; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18D1C & 1) == 0 )
  {
    sub_1BCA7E0(&BuffList_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BuffMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BuffTypeDetailMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v12, v13);
    byte_4B18D1C = 1;
  }
  v19 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    buffId,
                                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
    {
      klass_high = HIDWORD(entity[1].klass);
      if ( !BuffList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v15);
      if ( BuffList__IsFunctionBuff(klass_high, 0LL) )
        return 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
      if ( entity && Master_object )
      {
        Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                          &v19,
                                          HIDWORD(entity[1].klass),
                                          (const MethodInfo_31B2E94 *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          return 0;
        if ( v19 )
          return LOBYTE(v19[2].klass) != 0;
      }
    }
LABEL_21:
    sub_1BCAA3C(Master_object, v15);
  }
  return 1;
}


bool __fastcall FuncParamValueUpInfoDefault__IsIgnoreValueUpFuncType(int32_t funcType, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18D1B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_FuncTypeDetailMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__, v6, v7);
    byte_4B18D1B = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FuncTypeDetailMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    funcType,
                                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return BYTE4(entity[1].klass) != 0;
LABEL_11:
    sub_1BCAA3C(Master_object, v9);
  }
  return 0;
}


DataVals_TYPE_array *__fastcall FuncParamValueUpInfoDefault__get_ValueUpTypeArray(
        FuncParamValueUpInfoDefault_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  DataVals_TYPE_array *result; // x0
  FuncParamValueUpInfoDefault_c *v5; // x0

  if ( (byte_4B18D18 & 1) == 0 )
  {
    sub_1BCA7E0(&FuncParamValueUpInfoDefault_TypeInfo, method, v2);
    byte_4B18D18 = 1;
  }
  result = this->fields.overwriteValueUpTypeArray;
  if ( !result )
  {
    v5 = FuncParamValueUpInfoDefault_TypeInfo;
    if ( !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo, method);
      v5 = FuncParamValueUpInfoDefault_TypeInfo;
    }
    return v5->static_fields->defaultValueUpValsTypes;
  }
  return result;
}