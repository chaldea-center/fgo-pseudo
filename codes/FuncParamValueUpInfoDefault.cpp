void FuncParamValueUpInfoDefault___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  __int64 v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4C2A1F7 & 1) == 0 )
  {
    sub_1C2D490(&FuncParamValueUpInfoDefault_TypeInfo);
    sub_1C2D490(&DataVals_TYPE___TypeInfo);
    byte_4C2A1F7 = 1;
  }
  v1 = sub_1C2D538(DataVals_TYPE___TypeInfo, 1);
  if ( !v1 )
    sub_1C2D6EC(0, v2);
  if ( !*(_DWORD *)(v1 + 24) )
    sub_1C2D6F4(v1, v1, v3);
  *(_DWORD *)(v1 + 32) = 3;
  FuncParamValueUpInfoDefault_TypeInfo->static_fields->defaultValueUpValsTypes = (struct DataVals_TYPE_array *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)FuncParamValueUpInfoDefault_TypeInfo->static_fields, v1, v3, v4);
}


void FuncParamValueUpInfoDefault___ctor(FuncParamValueUpInfoDefault_o *this, const MethodInfo *method)
{
  if ( (byte_4C2A1F6 & 1) == 0 )
  {
    sub_1C2D490(&FuncParamValueUpInfoBase_TypeInfo);
    byte_4C2A1F6 = 1;
  }
  if ( !FuncParamValueUpInfoBase_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoBase_TypeInfo);
  System_Object___ctor((Il2CppObject *)this, 0);
}


FuncParamValueUpInfoDefault_o *FuncParamValueUpInfoDefault__Create(
        DataVals_o *dataVals,
        int32_t valueUp,
        const MethodInfo *method)
{
  __int64 v5; // x21
  struct FunctionEntity_o *funcEnt; // x22
  _BOOL4 isParam; // w21
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  int32_t v10; // w22
  _BOOL4 IsIgnoreValueUpBuffType; // w0
  int32_t funcType; // w22
  const MethodInfo *v13; // x1
  __int64 v14; // x0
  const MethodInfo *v15; // x1
  DataVals_TYPE_array *ValueUpTypeArray; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C2A1F2 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_int____77999320);
    sub_1C2D490(&FuncParamValueUpInfoDefault_TypeInfo);
    byte_4C2A1F2 = 1;
  }
  if ( !dataVals )
    return 0;
  v5 = 0;
  if ( valueUp )
  {
    funcEnt = dataVals->fields.funcEnt;
    if ( funcEnt )
    {
      isParam = DataVals__isParam(dataVals, 122, 0);
      if ( FuncList__isAddState(funcEnt->fields.funcType, 0) )
      {
        v10 = BasicHelper__IndexValue_int_(
                funcEnt->fields.vals,
                0,
                0,
                (const MethodInfo_30BCE0C *)Method_BasicHelper_IndexValue_int____77999320);
        if ( !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
        IsIgnoreValueUpBuffType = FuncParamValueUpInfoDefault__IsIgnoreValueUpBuffType(v10, v9);
      }
      else
      {
        funcType = funcEnt->fields.funcType;
        if ( !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
        IsIgnoreValueUpBuffType = FuncParamValueUpInfoDefault__IsIgnoreValueUpFuncType(funcType, v8);
      }
      if ( isParam || IsIgnoreValueUpBuffType )
        return 0;
      v5 = sub_1C2D6DC(FuncParamValueUpInfoDefault_TypeInfo);
      FuncParamValueUpInfoDefault___ctor((FuncParamValueUpInfoDefault_o *)v5, v13);
      if ( !v5 )
        sub_1C2D6EC(v14, v15);
      *(_DWORD *)(v5 + 16) = valueUp;
      if ( !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
      ValueUpTypeArray = FuncParamValueUpInfoDefault__ExtractValueUpTypeArray(dataVals, v15);
      *(_QWORD *)(v5 + 24) = ValueUpTypeArray;
      sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)ValueUpTypeArray, v17, v18);
    }
  }
  return (FuncParamValueUpInfoDefault_o *)v5;
}


DataVals_TYPE_array *FuncParamValueUpInfoDefault__ExtractValueUpTypeArray(
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  DataVals_o *v2; // x19
  System_Collections_ICollection_o *ParamAsStringArray; // x19
  bool IsNullOrEmpty; // w8
  DataVals_TYPE_array *v5; // x0
  System_Collections_Generic_List_T__o *v6; // x20
  __int64 v7; // x2
  void *monitor; // x8
  unsigned __int64 v9; // x22
  System_String_o *v10; // x21
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  v2 = dataVals;
  if ( (byte_4C2A1F3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Enum_TryParse_DataVals_TYPE___);
    sub_1C2D490(&System_Enum_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_DataVals_TYPE__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_DataVals_TYPE__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_DataVals_TYPE___ctor__);
    dataVals = (DataVals_o *)sub_1C2D490(&System_Collections_Generic_List_DataVals_TYPE__TypeInfo);
    byte_4C2A1F3 = 1;
  }
  result = 0;
  if ( !v2 )
    goto LABEL_21;
  ParamAsStringArray = (System_Collections_ICollection_o *)DataVals__GetParamAsStringArray(v2, 123, 0, 0);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ParamAsStringArray, 0);
  v5 = 0;
  if ( IsNullOrEmpty )
    return v5;
  v6 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_DataVals_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v6,
    (const MethodInfo_376EB38 *)Method_System_Collections_Generic_List_DataVals_TYPE___ctor__);
  if ( !ParamAsStringArray )
    goto LABEL_21;
  monitor = ParamAsStringArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= (unsigned int)monitor )
        sub_1C2D6F4(dataVals, method, v7);
      v10 = (System_String_o *)*((_QWORD *)&ParamAsStringArray[2].klass + v9);
      if ( !System_Enum_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
      dataVals = (DataVals_o *)System_Enum__TryParse_Int32Enum_(
                                 v10,
                                 &result,
                                 (const MethodInfo_30D5494 *)Method_System_Enum_TryParse_DataVals_TYPE___);
      if ( ((unsigned __int8)dataVals & 1) != 0 )
      {
        if ( !v6 )
          goto LABEL_21;
        method = (const MethodInfo *)(unsigned int)result;
        items = v6->fields._items;
        v12 = Method_System_Collections_Generic_List_DataVals_TYPE__Add__;
        ++v6->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_Int32Enum___AddWithResize(
            v6,
            (int32_t)method,
            *(const MethodInfo_376F38C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          *((_DWORD *)items->m_Items + size) = (_DWORD)method;
        }
      }
      LODWORD(monitor) = ParamAsStringArray[1].monitor;
    }
    while ( (__int64)++v9 < (int)monitor );
  }
  if ( !v6 )
LABEL_21:
    sub_1C2D6EC(dataVals, method);
  return (DataVals_TYPE_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                  v6,
                                  (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_DataVals_TYPE__ToArray__);
}


bool FuncParamValueUpInfoDefault__IsIgnoreValueUpBuffType(int32_t buffId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  int32_t klass_high; // w19
  Il2CppObject *v7; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2A1F5 & 1) == 0 )
  {
    sub_1C2D490(&BuffList_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_BuffTypeDetailMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_4C2A1F5 = 1;
  }
  v7 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    buffId,
                                    (const MethodInfo_3387DE4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
    {
      klass_high = HIDWORD(entity[1].klass);
      if ( !BuffList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
      if ( BuffList__IsFunctionBuff(klass_high, 0) )
        return 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
      if ( entity && Master_object )
      {
        Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                          &v7,
                                          HIDWORD(entity[1].klass),
                                          (const MethodInfo_3387DE4 *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          return 0;
        if ( v7 )
          return LOBYTE(v7[2].klass) != 0;
      }
    }
LABEL_21:
    sub_1C2D6EC(Master_object, v4);
  }
  return 1;
}


bool FuncParamValueUpInfoDefault__IsIgnoreValueUpFuncType(int32_t funcType, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2A1F4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_FuncTypeDetailMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__);
    byte_4C2A1F4 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_FuncTypeDetailMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    funcType,
                                    (const MethodInfo_3387DE4 *)Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return BYTE4(entity[1].klass) != 0;
LABEL_11:
    sub_1C2D6EC(Master_object, v4);
  }
  return 0;
}


DataVals_TYPE_array *FuncParamValueUpInfoDefault__get_ValueUpTypeArray(
        FuncParamValueUpInfoDefault_o *this,
        const MethodInfo *method)
{
  DataVals_TYPE_array *result; // x0
  FuncParamValueUpInfoDefault_c *v4; // x0

  if ( (byte_4C2A1F1 & 1) == 0 )
  {
    sub_1C2D490(&FuncParamValueUpInfoDefault_TypeInfo);
    byte_4C2A1F1 = 1;
  }
  result = this->fields.overwriteValueUpTypeArray;
  if ( !result )
  {
    v4 = FuncParamValueUpInfoDefault_TypeInfo;
    if ( !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
      v4 = FuncParamValueUpInfoDefault_TypeInfo;
    }
    return v4->static_fields->defaultValueUpValsTypes;
  }
  return result;
}