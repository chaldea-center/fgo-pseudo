void __fastcall FuncParamValueUpInfoDefault___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Int32_array **v11; // x1
  BattleServantConfConponent_o *static_fields; // x0

  if ( (byte_40FB2F5 & 1) == 0 )
  {
    sub_B16FFC(&FuncParamValueUpInfoDefault_TypeInfo, v1);
    sub_B16FFC(&DataVals_TYPE___TypeInfo, v3);
    byte_40FB2F5 = 1;
  }
  v4 = sub_B17014(DataVals_TYPE___TypeInfo, 1LL, v2);
  if ( !v4 )
    sub_B170D4();
  v11 = (System_Int32_array **)v4;
  if ( !*(_DWORD *)(v4 + 24) )
  {
    sub_B17100(v4, v4, v5);
    sub_B170A0();
  }
  *(_DWORD *)(v4 + 32) = 3;
  static_fields = (BattleServantConfConponent_o *)FuncParamValueUpInfoDefault_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v11;
  sub_B16F98(static_fields, v11, v5, v6, v7, v8, v9, v10);
}


void __fastcall FuncParamValueUpInfoDefault___ctor(FuncParamValueUpInfoDefault_o *this, const MethodInfo *method)
{
  if ( (byte_40FB2F4 & 1) == 0 )
  {
    sub_B16FFC(&FuncParamValueUpInfoBase_TypeInfo, method);
    byte_40FB2F4 = 1;
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  System_Int32_array **ValueUpTypeArray; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40FB2F0 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_int____66807072, *(_QWORD *)&valueUp);
    sub_B16FFC(&FuncParamValueUpInfoDefault_TypeInfo, v5);
    byte_40FB2F0 = 1;
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
                (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
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
      v6 = sub_B170CC(FuncParamValueUpInfoDefault_TypeInfo, v15, v16, v17, v18);
      FuncParamValueUpInfoDefault___ctor((FuncParamValueUpInfoDefault_o *)v6, v19);
      if ( !v6 )
        sub_B170D4();
      *(_DWORD *)(v6 + 16) = valueUp;
      if ( (BYTE3(FuncParamValueUpInfoDefault_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
      }
      ValueUpTypeArray = (System_Int32_array **)FuncParamValueUpInfoDefault__ExtractValueUpTypeArray(dataVals, v20);
      *(_QWORD *)(v6 + 24) = ValueUpTypeArray;
      sub_B16F98((BattleServantConfConponent_o *)(v6 + 24), ValueUpTypeArray, v22, v23, v24, v25, v26, v27);
    }
  }
  return (FuncParamValueUpInfoDefault_o *)v6;
}


DataVals_TYPE_array *__fastcall FuncParamValueUpInfoDefault__ExtractValueUpTypeArray(
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ICollection_o *ParamAsStringArray; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  bool IsNullOrEmpty; // w8
  DataVals_TYPE_array *v14; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *v15; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  void *monitor; // x8
  unsigned __int64 v20; // x22
  System_String_o *v21; // x21
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FB2F1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Enum_TryParse_DataVals_TYPE___, method);
    sub_B16FFC(&System_Enum_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataVals_TYPE__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataVals_TYPE__ToArray__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataVals_TYPE___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_DataVals_TYPE__TypeInfo, v7);
    byte_40FB2F1 = 1;
  }
  result = 0;
  if ( !dataVals )
    goto LABEL_20;
  ParamAsStringArray = (System_Collections_ICollection_o *)DataVals__GetParamAsStringArray(dataVals, 123, 0LL, 0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ParamAsStringArray, 0LL);
  v14 = 0LL;
  if ( IsNullOrEmpty )
    return v14;
  v15 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_DataVals_TYPE__TypeInfo,
                                                                   v9,
                                                                   v10,
                                                                   v11,
                                                                   v12);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v15,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_DataVals_TYPE___ctor__);
  if ( !ParamAsStringArray )
    goto LABEL_20;
  monitor = ParamAsStringArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v20 = 0LL;
    do
    {
      if ( v20 >= (unsigned int)monitor )
      {
        sub_B17100(v16, v17, v18);
        sub_B170A0();
      }
      v21 = (System_String_o *)*((_QWORD *)&ParamAsStringArray[2].klass + v20);
      if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Enum_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
      }
      v16 = System_Enum__TryParse_DataVals_TYPE_(
              v21,
              &result,
              (const MethodInfo_18C59A0 *)Method_System_Enum_TryParse_DataVals_TYPE___);
      if ( v16 )
      {
        if ( !v15 )
          goto LABEL_20;
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          v15,
          result,
          (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_DataVals_TYPE__Add__);
      }
      LODWORD(monitor) = ParamAsStringArray[1].monitor;
      ++v20;
    }
    while ( (__int64)v20 < (int)monitor );
  }
  if ( !v15 )
LABEL_20:
    sub_B170D4();
  return (DataVals_TYPE_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                  (System_Collections_Generic_List_Voice_BATTLE__o *)v15,
                                  (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_DataVals_TYPE__ToArray__);
}


bool __fastcall FuncParamValueUpInfoDefault__IsIgnoreValueUpBuffType(int32_t buffId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x0
  WarEntity_o *v10; // [xsp+0h] [xbp-20h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB2F3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_BuffMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_BuffTypeDetailMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__, v6);
    byte_40FB2F3 = 1;
  }
  v10 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          buffId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
    return 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
  if ( !entity || !v8 )
    goto LABEL_19;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v8,
         &v10,
         *(&entity->fields.id + 1),
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__) )
  {
    if ( v10 )
      return LOBYTE(v10->fields.name) != 0;
LABEL_19:
    sub_B170D4();
  }
  return 0;
}


bool __fastcall FuncParamValueUpInfoDefault__IsIgnoreValueUpFuncType(int32_t funcType, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB2F2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_FuncTypeDetailMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__, v4);
    byte_40FB2F2 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_FuncTypeDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         funcType,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__) )
  {
    if ( entity )
      return *((_BYTE *)&entity->fields.id + 4) != 0;
LABEL_12:
    sub_B170D4();
  }
  return 0;
}


DataVals_TYPE_array *__fastcall FuncParamValueUpInfoDefault__get_ValueUpTypeArray(
        FuncParamValueUpInfoDefault_o *this,
        const MethodInfo *method)
{
  DataVals_TYPE_array *result; // x0
  FuncParamValueUpInfoDefault_c *v4; // x0

  if ( (byte_40FB2EF & 1) == 0 )
  {
    sub_B16FFC(&FuncParamValueUpInfoDefault_TypeInfo, method);
    byte_40FB2EF = 1;
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