void __fastcall FuncParamValueUpInfoDefault___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x1
  BattleServantConfConponent_o *static_fields; // x0
  __int64 v17; // x0

  if ( (byte_42EB53B & 1) == 0 )
  {
    sub_B5D5C4(&FuncParamValueUpInfoDefault_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DataVals_TYPE___TypeInfo, v4, v5, v6);
    byte_42EB53B = 1;
  }
  v7 = sub_B5D5DC(DataVals_TYPE___TypeInfo, 1LL);
  if ( !v7 )
    sub_B5D69C(0LL, v8);
  v15 = (System_Int32_array **)v7;
  if ( !*(_DWORD *)(v7 + 24) )
  {
    v17 = sub_B5D6C8(v7);
    sub_B5D668(v17, 0LL);
  }
  *(_DWORD *)(v7 + 32) = 3;
  static_fields = (BattleServantConfConponent_o *)FuncParamValueUpInfoDefault_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v15;
  sub_B5D560(static_fields, v15, v9, v10, v11, v12, v13, v14);
}


void __fastcall FuncParamValueUpInfoDefault___ctor(FuncParamValueUpInfoDefault_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB53A & 1) == 0 )
  {
    sub_B5D5C4(&FuncParamValueUpInfoBase_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB53A = 1;
  }
  if ( (BYTE3(FuncParamValueUpInfoBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FuncParamValueUpInfoBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoBase_TypeInfo);
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


FuncParamValueUpInfoDefault_o *__fastcall FuncParamValueUpInfoDefault__Create(
        DataVals_o *dataVals,
        int32_t valueUp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x21
  struct FunctionEntity_o *funcEnt; // x23
  _BOOL4 isParam; // w0
  const MethodInfo *v12; // x1
  int32_t funcType; // w22
  _BOOL4 v14; // w21
  const MethodInfo *v15; // x1
  int32_t v16; // w22
  _BOOL4 IsIgnoreValueUpBuffType; // w0
  const MethodInfo *v18; // x1
  __int64 v19; // x0
  const MethodInfo *v20; // x1
  System_Int32_array **ValueUpTypeArray; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42EB536 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_int____68811968, valueUp, (_DWORD)method, v3);
    sub_B5D5C4(&FuncParamValueUpInfoDefault_TypeInfo, v6, v7, v8);
    byte_42EB536 = 1;
  }
  if ( !dataVals )
    return 0LL;
  v9 = 0LL;
  if ( valueUp )
  {
    funcEnt = dataVals->fields.funcEnt;
    if ( funcEnt )
    {
      isParam = DataVals__isParam(dataVals, 122, 0LL);
      funcType = funcEnt->fields.funcType;
      v14 = isParam;
      if ( funcType == 1 || funcType == 16 )
      {
        v16 = BasicHelper__IndexValue_int_(
                funcEnt->fields.vals,
                0,
                0,
                (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
        if ( (BYTE3(FuncParamValueUpInfoDefault_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
        }
        IsIgnoreValueUpBuffType = FuncParamValueUpInfoDefault__IsIgnoreValueUpBuffType(v16, v15);
      }
      else
      {
        if ( (BYTE3(FuncParamValueUpInfoDefault_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
        }
        IsIgnoreValueUpBuffType = FuncParamValueUpInfoDefault__IsIgnoreValueUpFuncType(funcType, v12);
      }
      if ( v14 || IsIgnoreValueUpBuffType )
        return 0LL;
      v9 = sub_B5D694(FuncParamValueUpInfoDefault_TypeInfo);
      FuncParamValueUpInfoDefault___ctor((FuncParamValueUpInfoDefault_o *)v9, v18);
      if ( !v9 )
        sub_B5D69C(v19, v20);
      *(_DWORD *)(v9 + 16) = valueUp;
      if ( (BYTE3(FuncParamValueUpInfoDefault_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
      }
      ValueUpTypeArray = (System_Int32_array **)FuncParamValueUpInfoDefault__ExtractValueUpTypeArray(dataVals, v20);
      *(_QWORD *)(v9 + 24) = ValueUpTypeArray;
      sub_B5D560((BattleServantConfConponent_o *)(v9 + 24), ValueUpTypeArray, v22, v23, v24, v25, v26, v27);
    }
  }
  return (FuncParamValueUpInfoDefault_o *)v9;
}


DataVals_TYPE_array *__fastcall FuncParamValueUpInfoDefault__ExtractValueUpTypeArray(
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DataVals_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_ICollection_o *ParamAsStringArray; // x19
  bool IsNullOrEmpty; // w8
  DataVals_TYPE_array *v22; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *v23; // x20
  void *monitor; // x8
  unsigned __int64 v25; // x22
  System_String_o *v26; // x21
  __int64 v27; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  v4 = dataVals;
  if ( (byte_42EB537 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Enum_TryParse_DataVals_TYPE___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Enum_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataVals_TYPE__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataVals_TYPE__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataVals_TYPE___ctor__, v14, v15, v16);
    dataVals = (DataVals_o *)sub_B5D5C4(&System_Collections_Generic_List_DataVals_TYPE__TypeInfo, v17, v18, v19);
    byte_42EB537 = 1;
  }
  result = 0;
  if ( !v4 )
    goto LABEL_20;
  ParamAsStringArray = (System_Collections_ICollection_o *)DataVals__GetParamAsStringArray(v4, 123, 0LL, 0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ParamAsStringArray, 0LL);
  v22 = 0LL;
  if ( IsNullOrEmpty )
    return v22;
  v23 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_DataVals_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v23,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_DataVals_TYPE___ctor__);
  if ( !ParamAsStringArray )
    goto LABEL_20;
  monitor = ParamAsStringArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v25 = 0LL;
    do
    {
      if ( v25 >= (unsigned int)monitor )
      {
        v27 = sub_B5D6C8(dataVals);
        sub_B5D668(v27, 0LL);
      }
      v26 = (System_String_o *)*((_QWORD *)&ParamAsStringArray[2].klass + v25);
      if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Enum_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
      }
      dataVals = (DataVals_o *)System_Enum__TryParse_DataVals_TYPE_(
                                 v26,
                                 &result,
                                 (const MethodInfo_1AE6968 *)Method_System_Enum_TryParse_DataVals_TYPE___);
      if ( ((unsigned __int8)dataVals & 1) != 0 )
      {
        if ( !v23 )
          goto LABEL_20;
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          v23,
          result,
          (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_DataVals_TYPE__Add__);
      }
      LODWORD(monitor) = ParamAsStringArray[1].monitor;
      ++v25;
    }
    while ( (__int64)v25 < (int)monitor );
  }
  if ( !v23 )
LABEL_20:
    sub_B5D69C(dataVals, method);
  return (DataVals_TYPE_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                  (System_Collections_Generic_List_Voice_BATTLE__o *)v23,
                                  (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_DataVals_TYPE__ToArray__);
}


bool __fastcall FuncParamValueUpInfoDefault__IsIgnoreValueUpBuffType(int32_t buffId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v18; // x1
  WarEntity_o *v20; // [xsp+0h] [xbp-20h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB539 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BuffMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_BuffTypeDetailMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__, v14, v15, v16);
    byte_42EB539 = 1;
  }
  v20 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          &entity,
          buffId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
    return 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
  if ( !entity || !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &v20,
                                                                  *(&entity->fields.id + 1),
                                                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( v20 )
      return LOBYTE(v20->fields.name) != 0;
LABEL_19:
    sub_B5D69C(Master_WarQuestSelectionMaster, v18);
  }
  return 0;
}


bool __fastcall FuncParamValueUpInfoDefault__IsIgnoreValueUpFuncType(int32_t funcType, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB538 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_FuncTypeDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__, v8, v9, v10);
    byte_42EB538 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FuncTypeDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  funcType,
                                                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return *((_BYTE *)&entity->fields.id + 4) != 0;
LABEL_12:
    sub_B5D69C(Master_WarQuestSelectionMaster, v12);
  }
  return 0;
}


DataVals_TYPE_array *__fastcall FuncParamValueUpInfoDefault__get_ValueUpTypeArray(
        FuncParamValueUpInfoDefault_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DataVals_TYPE_array *result; // x0
  FuncParamValueUpInfoDefault_c *v6; // x0

  if ( (byte_42EB535 & 1) == 0 )
  {
    sub_B5D5C4(&FuncParamValueUpInfoDefault_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB535 = 1;
  }
  result = this->fields.overwriteValueUpTypeArray;
  if ( !result )
  {
    v6 = FuncParamValueUpInfoDefault_TypeInfo;
    if ( (BYTE3(FuncParamValueUpInfoDefault_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
      v6 = FuncParamValueUpInfoDefault_TypeInfo;
    }
    return v6->static_fields->defaultValueUpValsTypes;
  }
  return result;
}