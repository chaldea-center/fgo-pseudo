void __fastcall FuncParamValueUpInfoDefault___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Int32_array **v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  __int64 v11; // x0

  if ( (byte_438D905 & 1) == 0 )
  {
    sub_B775C4(&FuncParamValueUpInfoDefault_TypeInfo);
    sub_B775C4(&DataVals_TYPE___TypeInfo);
    byte_438D905 = 1;
  }
  v1 = sub_B775DC(DataVals_TYPE___TypeInfo, 1LL);
  if ( !v1 )
    sub_B7769C(0LL, v2);
  v9 = (System_Int32_array **)v1;
  if ( !*(_DWORD *)(v1 + 24) )
  {
    v11 = sub_B776C8(v1);
    sub_B77668(v11, 0LL);
  }
  *(_DWORD *)(v1 + 32) = 3;
  static_fields = (BattleServantConfConponent_o *)FuncParamValueUpInfoDefault_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v9;
  sub_B77560(static_fields, v9, v3, v4, v5, v6, v7, v8);
}


void __fastcall FuncParamValueUpInfoDefault___ctor(FuncParamValueUpInfoDefault_o *this, const MethodInfo *method)
{
  if ( (byte_438D904 & 1) == 0 )
  {
    sub_B775C4(&FuncParamValueUpInfoBase_TypeInfo);
    byte_438D904 = 1;
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
  __int64 v5; // x21
  struct FunctionEntity_o *funcEnt; // x23
  _BOOL4 isParam; // w0
  const MethodInfo *v8; // x1
  int32_t funcType; // w22
  _BOOL4 v10; // w21
  const MethodInfo *v11; // x1
  int32_t v12; // w22
  _BOOL4 IsIgnoreValueUpBuffType; // w0
  const MethodInfo *v14; // x1
  __int64 v15; // x0
  const MethodInfo *v16; // x1
  System_Int32_array **ValueUpTypeArray; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_438D900 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_IndexValue_int____69469920);
    sub_B775C4(&FuncParamValueUpInfoDefault_TypeInfo);
    byte_438D900 = 1;
  }
  if ( !dataVals )
    return 0LL;
  v5 = 0LL;
  if ( valueUp )
  {
    funcEnt = dataVals->fields.funcEnt;
    if ( funcEnt )
    {
      isParam = DataVals__isParam(dataVals, 121, 0LL);
      funcType = funcEnt->fields.funcType;
      v10 = isParam;
      if ( funcType == 1 || funcType == 16 )
      {
        v12 = BasicHelper__IndexValue_int_(
                funcEnt->fields.vals,
                0,
                0,
                (const MethodInfo_1C683B4 *)Method_BasicHelper_IndexValue_int____69469920);
        if ( (BYTE3(FuncParamValueUpInfoDefault_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
        }
        IsIgnoreValueUpBuffType = FuncParamValueUpInfoDefault__IsIgnoreValueUpBuffType(v12, v11);
      }
      else
      {
        if ( (BYTE3(FuncParamValueUpInfoDefault_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
        }
        IsIgnoreValueUpBuffType = FuncParamValueUpInfoDefault__IsIgnoreValueUpFuncType(funcType, v8);
      }
      if ( v10 || IsIgnoreValueUpBuffType )
        return 0LL;
      v5 = sub_B77694(FuncParamValueUpInfoDefault_TypeInfo);
      FuncParamValueUpInfoDefault___ctor((FuncParamValueUpInfoDefault_o *)v5, v14);
      if ( !v5 )
        sub_B7769C(v15, v16);
      *(_DWORD *)(v5 + 16) = valueUp;
      if ( (BYTE3(FuncParamValueUpInfoDefault_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
      }
      ValueUpTypeArray = (System_Int32_array **)FuncParamValueUpInfoDefault__ExtractValueUpTypeArray(dataVals, v16);
      *(_QWORD *)(v5 + 24) = ValueUpTypeArray;
      sub_B77560((BattleServantConfConponent_o *)(v5 + 24), ValueUpTypeArray, v18, v19, v20, v21, v22, v23);
    }
  }
  return (FuncParamValueUpInfoDefault_o *)v5;
}


DataVals_TYPE_array *__fastcall FuncParamValueUpInfoDefault__ExtractValueUpTypeArray(
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  DataVals_o *v2; // x19
  System_Collections_ICollection_o *ParamAsStringArray; // x19
  bool IsNullOrEmpty; // w8
  DataVals_TYPE_array *v5; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *v6; // x20
  void *monitor; // x8
  unsigned __int64 v8; // x22
  System_String_o *v9; // x21
  __int64 v10; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  v2 = dataVals;
  if ( (byte_438D901 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Enum_TryParse_DataVals_TYPE___);
    sub_B775C4(&System_Enum_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_DataVals_TYPE__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_DataVals_TYPE__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_DataVals_TYPE___ctor__);
    dataVals = (DataVals_o *)sub_B775C4(&System_Collections_Generic_List_DataVals_TYPE__TypeInfo);
    byte_438D901 = 1;
  }
  result = 0;
  if ( !v2 )
    goto LABEL_20;
  ParamAsStringArray = (System_Collections_ICollection_o *)DataVals__GetParamAsStringArray(v2, 122, 0LL, 0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ParamAsStringArray, 0LL);
  v5 = 0LL;
  if ( IsNullOrEmpty )
    return v5;
  v6 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B77694(System_Collections_Generic_List_DataVals_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v6,
    (const MethodInfo_30E8064 *)Method_System_Collections_Generic_List_DataVals_TYPE___ctor__);
  if ( !ParamAsStringArray )
    goto LABEL_20;
  monitor = ParamAsStringArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)monitor )
      {
        v10 = sub_B776C8(dataVals);
        sub_B77668(v10, 0LL);
      }
      v9 = (System_String_o *)*((_QWORD *)&ParamAsStringArray[2].klass + v8);
      if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Enum_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
      }
      dataVals = (DataVals_o *)System_Enum__TryParse_DataVals_TYPE_(
                                 v9,
                                 &result,
                                 (const MethodInfo_1D1AB0C *)Method_System_Enum_TryParse_DataVals_TYPE___);
      if ( ((unsigned __int8)dataVals & 1) != 0 )
      {
        if ( !v6 )
          goto LABEL_20;
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          v6,
          result,
          (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_DataVals_TYPE__Add__);
      }
      LODWORD(monitor) = ParamAsStringArray[1].monitor;
      ++v8;
    }
    while ( (__int64)v8 < (int)monitor );
  }
  if ( !v6 )
LABEL_20:
    sub_B7769C(dataVals, method);
  return (DataVals_TYPE_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                  (System_Collections_Generic_List_Voice_BATTLE__o *)v6,
                                  (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_DataVals_TYPE__ToArray__);
}


bool __fastcall FuncParamValueUpInfoDefault__IsIgnoreValueUpBuffType(int32_t buffId, const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  WarEntity_o *v6; // [xsp+0h] [xbp-20h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438D903 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_BuffMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_BuffTypeDetailMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
    byte_438D903 = 1;
  }
  v6 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          &entity,
          buffId,
          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
    return 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
  if ( !entity || !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &v6,
                                                                  *(&entity->fields.id + 1),
                                                                  (const MethodInfo_21FB8F0 *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( v6 )
      return LOBYTE(v6->fields.name) != 0;
LABEL_19:
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
  }
  return 0;
}


bool __fastcall FuncParamValueUpInfoDefault__IsIgnoreValueUpFuncType(int32_t funcType, const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438D902 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_FuncTypeDetailMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__);
    byte_438D902 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_FuncTypeDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  funcType,
                                                                  (const MethodInfo_21FB8F0 *)Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return *((_BYTE *)&entity->fields.id + 4) != 0;
LABEL_12:
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
  }
  return 0;
}


DataVals_TYPE_array *__fastcall FuncParamValueUpInfoDefault__get_ValueUpTypeArray(
        FuncParamValueUpInfoDefault_o *this,
        const MethodInfo *method)
{
  DataVals_TYPE_array *result; // x0
  FuncParamValueUpInfoDefault_c *v4; // x0

  if ( (byte_438D8FF & 1) == 0 )
  {
    sub_B775C4(&FuncParamValueUpInfoDefault_TypeInfo);
    byte_438D8FF = 1;
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