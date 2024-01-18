void __fastcall FuncParamValueUpInfoDefault___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Int32_array **v11; // x1
  BattleServantConfConponent_o *static_fields; // x0
  __int64 v13; // x0

  if ( (byte_418A4E9 & 1) == 0 )
  {
    sub_B2C35C(&FuncParamValueUpInfoDefault_TypeInfo, v1);
    sub_B2C35C(&DataVals_TYPE___TypeInfo, v2);
    byte_418A4E9 = 1;
  }
  v3 = sub_B2C374(DataVals_TYPE___TypeInfo, 1LL);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  v11 = (System_Int32_array **)v3;
  if ( !*(_DWORD *)(v3 + 24) )
  {
    v13 = sub_B2C460(v3);
    sub_B2C400(v13, 0LL);
  }
  *(_DWORD *)(v3 + 32) = 3;
  static_fields = (BattleServantConfConponent_o *)FuncParamValueUpInfoDefault_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v11;
  sub_B2C2F8(static_fields, v11, v5, v6, v7, v8, v9, v10);
}


void __fastcall FuncParamValueUpInfoDefault___ctor(FuncParamValueUpInfoDefault_o *this, const MethodInfo *method)
{
  if ( (byte_418A4E8 & 1) == 0 )
  {
    sub_B2C35C(&FuncParamValueUpInfoBase_TypeInfo, method);
    byte_418A4E8 = 1;
  }
  if ( (BYTE3(FuncParamValueUpInfoBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FuncParamValueUpInfoBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoBase_TypeInfo);
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
FuncParamValueUpInfoDefault_o *__fastcall FuncParamValueUpInfoDefault__Create(
        DataVals_o *dataVals,
        int32_t valueUp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x21
  struct FunctionEntity_o *funcEnt; // x23
  _BOOL4 isParam; // w0
  const MethodInfo *v9; // x1
  int32_t funcType; // w22
  _BOOL4 v11; // w21
  const MethodInfo *v12; // x1
  int32_t v13; // w22
  _BOOL4 IsIgnoreValueUpBuffType; // w0
  const MethodInfo *v15; // x1
  __int64 v16; // x0
  const MethodInfo *v17; // x1
  System_Int32_array **ValueUpTypeArray; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_418A4E4 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_int____67381984, *(_QWORD *)&valueUp);
    sub_B2C35C(&FuncParamValueUpInfoDefault_TypeInfo, v5);
    byte_418A4E4 = 1;
  }
  if ( !dataVals )
    return 0LL;
  v6 = 0LL;
  if ( valueUp )
  {
    funcEnt = dataVals->fields.funcEnt;
    if ( funcEnt )
    {
      isParam = DataVals__isParam(dataVals, 122, 0LL);
      funcType = funcEnt->fields.funcType;
      v11 = isParam;
      if ( funcType == 1 || funcType == 16 )
      {
        v13 = BasicHelper__IndexValue_int_(
                funcEnt->fields.vals,
                0,
                0,
                (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
        if ( (BYTE3(FuncParamValueUpInfoDefault_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
        }
        IsIgnoreValueUpBuffType = FuncParamValueUpInfoDefault__IsIgnoreValueUpBuffType(v13, v12);
      }
      else
      {
        if ( (BYTE3(FuncParamValueUpInfoDefault_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
        }
        IsIgnoreValueUpBuffType = FuncParamValueUpInfoDefault__IsIgnoreValueUpFuncType(funcType, v9);
      }
      if ( v11 || IsIgnoreValueUpBuffType )
        return 0LL;
      v6 = sub_B2C42C(FuncParamValueUpInfoDefault_TypeInfo);
      FuncParamValueUpInfoDefault___ctor((FuncParamValueUpInfoDefault_o *)v6, v15);
      if ( !v6 )
        sub_B2C434(v16, v17);
      *(_DWORD *)(v6 + 16) = valueUp;
      if ( (BYTE3(FuncParamValueUpInfoDefault_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
      }
      ValueUpTypeArray = (System_Int32_array **)FuncParamValueUpInfoDefault__ExtractValueUpTypeArray(dataVals, v17);
      *(_QWORD *)(v6 + 24) = ValueUpTypeArray;
      sub_B2C2F8((BattleServantConfConponent_o *)(v6 + 24), ValueUpTypeArray, v19, v20, v21, v22, v23, v24);
    }
  }
  return (FuncParamValueUpInfoDefault_o *)v6;
}


DataVals_TYPE_array *__fastcall FuncParamValueUpInfoDefault__ExtractValueUpTypeArray(
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  DataVals_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ICollection_o *ParamAsStringArray; // x19
  bool IsNullOrEmpty; // w8
  DataVals_TYPE_array *v10; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *v11; // x20
  void *monitor; // x8
  unsigned __int64 v13; // x22
  System_String_o *v14; // x21
  __int64 v15; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  v2 = dataVals;
  if ( (byte_418A4E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Enum_TryParse_DataVals_TYPE___, method);
    sub_B2C35C(&System_Enum_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataVals_TYPE__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataVals_TYPE__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataVals_TYPE___ctor__, v6);
    dataVals = (DataVals_o *)sub_B2C35C(&System_Collections_Generic_List_DataVals_TYPE__TypeInfo, v7);
    byte_418A4E5 = 1;
  }
  result = 0;
  if ( !v2 )
    goto LABEL_20;
  ParamAsStringArray = (System_Collections_ICollection_o *)DataVals__GetParamAsStringArray(v2, 123, 0LL, 0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ParamAsStringArray, 0LL);
  v10 = 0LL;
  if ( IsNullOrEmpty )
    return v10;
  v11 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_DataVals_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v11,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_DataVals_TYPE___ctor__);
  if ( !ParamAsStringArray )
    goto LABEL_20;
  monitor = ParamAsStringArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)monitor )
      {
        v15 = sub_B2C460(dataVals);
        sub_B2C400(v15, 0LL);
      }
      v14 = (System_String_o *)*((_QWORD *)&ParamAsStringArray[2].klass + v13);
      if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Enum_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
      }
      dataVals = (DataVals_o *)System_Enum__TryParse_DataVals_TYPE_(
                                 v14,
                                 &result,
                                 (const MethodInfo_1736108 *)Method_System_Enum_TryParse_DataVals_TYPE___);
      if ( ((unsigned __int8)dataVals & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_20;
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          v11,
          result,
          (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_DataVals_TYPE__Add__);
      }
      LODWORD(monitor) = ParamAsStringArray[1].monitor;
      ++v13;
    }
    while ( (__int64)v13 < (int)monitor );
  }
  if ( !v11 )
LABEL_20:
    sub_B2C434(dataVals, method);
  return (DataVals_TYPE_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                  (System_Collections_Generic_List_Voice_BATTLE__o *)v11,
                                  (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_DataVals_TYPE__ToArray__);
}


bool __fastcall FuncParamValueUpInfoDefault__IsIgnoreValueUpBuffType(int32_t buffId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  WarEntity_o *v10; // [xsp+0h] [xbp-20h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A4E7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_BuffMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_BuffTypeDetailMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__, v6);
    byte_418A4E7 = 1;
  }
  v10 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          &entity,
          buffId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
    return 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
  if ( !entity || !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &v10,
                                                                  *(&entity->fields.id + 1),
                                                                  (const MethodInfo_24E412C *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( v10 )
      return LOBYTE(v10->fields.name) != 0;
LABEL_19:
    sub_B2C434(Master_WarQuestSelectionMaster, v8);
  }
  return 0;
}


bool __fastcall FuncParamValueUpInfoDefault__IsIgnoreValueUpFuncType(int32_t funcType, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A4E6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_FuncTypeDetailMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__, v4);
    byte_418A4E6 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_FuncTypeDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  funcType,
                                                                  (const MethodInfo_24E412C *)Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return *((_BYTE *)&entity->fields.id + 4) != 0;
LABEL_12:
    sub_B2C434(Master_WarQuestSelectionMaster, v6);
  }
  return 0;
}


DataVals_TYPE_array *__fastcall FuncParamValueUpInfoDefault__get_ValueUpTypeArray(
        FuncParamValueUpInfoDefault_o *this,
        const MethodInfo *method)
{
  DataVals_TYPE_array *result; // x0
  FuncParamValueUpInfoDefault_c *v4; // x0

  if ( (byte_418A4E3 & 1) == 0 )
  {
    sub_B2C35C(&FuncParamValueUpInfoDefault_TypeInfo, method);
    byte_418A4E3 = 1;
  }
  result = this->fields.overwriteValueUpTypeArray;
  if ( !result )
  {
    v4 = FuncParamValueUpInfoDefault_TypeInfo;
    if ( (BYTE3(FuncParamValueUpInfoDefault_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
      v4 = FuncParamValueUpInfoDefault_TypeInfo;
    }
    return v4->static_fields->defaultValueUpValsTypes;
  }
  return result;
}