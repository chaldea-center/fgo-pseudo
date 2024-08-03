void __fastcall FuncParamValueUpInfoDefault___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct DataVals_TYPE_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FED89 & 1) == 0 )
  {
    sub_1B640C8(&FuncParamValueUpInfoDefault_TypeInfo, v1);
    sub_1B640C8(&DataVals_TYPE___TypeInfo, v2);
    byte_49FED89 = 1;
  }
  v3 = (struct DataVals_TYPE_array *)sub_1B64170(DataVals_TYPE___TypeInfo, 1LL);
  if ( !v3 )
    sub_1B64324(0LL);
  if ( !v3->max_length )
    sub_1B6432C(v3, v3);
  v3->m_Items[1] = 3;
  FuncParamValueUpInfoDefault_TypeInfo->static_fields->defaultValueUpValsTypes = v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)FuncParamValueUpInfoDefault_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall FuncParamValueUpInfoDefault___ctor(FuncParamValueUpInfoDefault_o *this, const MethodInfo *method)
{
  if ( (byte_49FED88 & 1) == 0 )
  {
    sub_1B640C8(&FuncParamValueUpInfoBase_TypeInfo, method);
    byte_49FED88 = 1;
  }
  if ( !FuncParamValueUpInfoBase_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoBase_TypeInfo);
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
  struct FunctionEntity_o *funcEnt; // x22
  _BOOL4 isParam; // w21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  int32_t v11; // w22
  _BOOL4 IsIgnoreValueUpBuffType; // w0
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t funcType; // w22
  const MethodInfo *v16; // x1
  __int64 v17; // x0
  const MethodInfo *v18; // x1
  DataVals_TYPE_array *ValueUpTypeArray; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49FED84 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_int____75711232, *(_QWORD *)&valueUp);
    sub_1B640C8(&FuncParamValueUpInfoDefault_TypeInfo, v5);
    byte_49FED84 = 1;
  }
  if ( !dataVals )
    return 0LL;
  v6 = 0LL;
  if ( valueUp )
  {
    funcEnt = dataVals->fields.funcEnt;
    if ( funcEnt )
    {
      isParam = DataVals__isParam(dataVals, 121, 0LL);
      if ( FuncList__isAddState(funcEnt->fields.funcType, 0LL) )
      {
        v11 = BasicHelper__IndexValue_int_(
                funcEnt->fields.vals,
                0,
                0,
                (const MethodInfo_2E28154 *)Method_BasicHelper_IndexValue_int____75711232);
        if ( !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
        IsIgnoreValueUpBuffType = FuncParamValueUpInfoDefault__IsIgnoreValueUpBuffType(v11, v10);
      }
      else
      {
        funcType = funcEnt->fields.funcType;
        if ( !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
        IsIgnoreValueUpBuffType = FuncParamValueUpInfoDefault__IsIgnoreValueUpFuncType(funcType, v9);
      }
      if ( isParam || IsIgnoreValueUpBuffType )
        return 0LL;
      v6 = sub_1B64314(FuncParamValueUpInfoDefault_TypeInfo, v13, v14);
      FuncParamValueUpInfoDefault___ctor((FuncParamValueUpInfoDefault_o *)v6, v16);
      if ( !v6 )
        sub_1B64324(v17);
      *(_DWORD *)(v6 + 16) = valueUp;
      if ( !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
      ValueUpTypeArray = FuncParamValueUpInfoDefault__ExtractValueUpTypeArray(dataVals, v18);
      *(_QWORD *)(v6 + 24) = ValueUpTypeArray;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 24), (int32_t)ValueUpTypeArray, v20, v21);
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
  __int64 v9; // x1
  __int64 v10; // x2
  bool IsNullOrEmpty; // w8
  DataVals_TYPE_array *v12; // x0
  System_Collections_Generic_List_T__o *v13; // x20
  __int64 v14; // x1
  void *monitor; // x8
  unsigned __int64 v16; // x22
  System_String_o *v17; // x21
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  v2 = dataVals;
  if ( (byte_49FED85 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Enum_TryParse_DataVals_TYPE___, method);
    sub_1B640C8(&System_Enum_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataVals_TYPE__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataVals_TYPE__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataVals_TYPE___ctor__, v6);
    dataVals = (DataVals_o *)sub_1B640C8(&System_Collections_Generic_List_DataVals_TYPE__TypeInfo, v7);
    byte_49FED85 = 1;
  }
  result = 0;
  if ( !v2 )
    goto LABEL_21;
  ParamAsStringArray = (System_Collections_ICollection_o *)DataVals__GetParamAsStringArray(v2, 122, 0LL, 0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ParamAsStringArray, 0LL);
  v12 = 0LL;
  if ( IsNullOrEmpty )
    return v12;
  v13 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_DataVals_TYPE__TypeInfo,
                                                  v9,
                                                  v10);
  System_Collections_Generic_List_Int32Enum____ctor(
    v13,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_DataVals_TYPE___ctor__);
  if ( !ParamAsStringArray )
    goto LABEL_21;
  monitor = ParamAsStringArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)monitor )
        sub_1B6432C(dataVals, v14);
      v17 = (System_String_o *)*((_QWORD *)&ParamAsStringArray[2].klass + v16);
      if ( !System_Enum_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
      dataVals = (DataVals_o *)System_Enum__TryParse_Int32Enum_(
                                 v17,
                                 &result,
                                 (const MethodInfo_2E42464 *)Method_System_Enum_TryParse_DataVals_TYPE___);
      if ( ((unsigned __int8)dataVals & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_21;
        v14 = (unsigned int)result;
        items = v13->fields._items;
        v19 = Method_System_Collections_Generic_List_DataVals_TYPE__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_Int32Enum___AddWithResize(
            v13,
            v14,
            *(const MethodInfo_34927A8 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v13->fields._size = size + 1;
          *((_DWORD *)items->m_Items + size) = v14;
        }
      }
      LODWORD(monitor) = ParamAsStringArray[1].monitor;
    }
    while ( (__int64)++v16 < (int)monitor );
  }
  if ( !v13 )
LABEL_21:
    sub_1B64324(dataVals);
  return (DataVals_TYPE_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                  v13,
                                  (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_DataVals_TYPE__ToArray__);
}


bool __fastcall FuncParamValueUpInfoDefault__IsIgnoreValueUpBuffType(int32_t buffId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  int32_t klass_high; // w19
  Il2CppObject *v11; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FED87 & 1) == 0 )
  {
    sub_1B640C8(&BuffList_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_BuffMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_BuffTypeDetailMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v7);
    byte_49FED87 = 1;
  }
  v11 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    buffId,
                                    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
    {
      klass_high = HIDWORD(entity[1].klass);
      if ( !BuffList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
      if ( BuffList__IsFunctionBuff(klass_high, 0LL) )
        return 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
      if ( entity && Master_object )
      {
        Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                          &v11,
                                          HIDWORD(entity[1].klass),
                                          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          return 0;
        if ( v11 )
          return LOBYTE(v11[2].klass) != 0;
      }
    }
LABEL_21:
    sub_1B64324(Master_object);
  }
  return 1;
}


bool __fastcall FuncParamValueUpInfoDefault__IsIgnoreValueUpFuncType(int32_t funcType, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FED86 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_FuncTypeDetailMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__, v4);
    byte_49FED86 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FuncTypeDetailMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    funcType,
                                    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return BYTE4(entity[1].klass) != 0;
LABEL_11:
    sub_1B64324(Master_object);
  }
  return 0;
}


DataVals_TYPE_array *__fastcall FuncParamValueUpInfoDefault__get_ValueUpTypeArray(
        FuncParamValueUpInfoDefault_o *this,
        const MethodInfo *method)
{
  DataVals_TYPE_array *result; // x0
  FuncParamValueUpInfoDefault_c *v4; // x0

  if ( (byte_49FED83 & 1) == 0 )
  {
    sub_1B640C8(&FuncParamValueUpInfoDefault_TypeInfo, method);
    byte_49FED83 = 1;
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