void __fastcall FuncParamValueUpInfoDefault___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct DataVals_TYPE_array *v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4AB8840 & 1) == 0 )
  {
    sub_1BAB41C(&FuncParamValueUpInfoDefault_TypeInfo, v1);
    sub_1BAB41C(&DataVals_TYPE___TypeInfo, v2);
    byte_4AB8840 = 1;
  }
  v3 = (struct DataVals_TYPE_array *)sub_1BAB4C4(DataVals_TYPE___TypeInfo, 1LL);
  if ( !v3 )
    sub_1BAB678(0LL, v4);
  if ( !v3->max_length )
    sub_1BAB680(v3, v3);
  v3->m_Items[1] = 3;
  FuncParamValueUpInfoDefault_TypeInfo->static_fields->defaultValueUpValsTypes = v3;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)FuncParamValueUpInfoDefault_TypeInfo->static_fields,
    (int32_t)v3,
    v5,
    v6);
}


void __fastcall FuncParamValueUpInfoDefault___ctor(FuncParamValueUpInfoDefault_o *this, const MethodInfo *method)
{
  if ( (byte_4AB883F & 1) == 0 )
  {
    sub_1BAB41C(&FuncParamValueUpInfoBase_TypeInfo, method);
    byte_4AB883F = 1;
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
  int32_t funcType; // w22
  const MethodInfo *v14; // x1
  __int64 v15; // x0
  const MethodInfo *v16; // x1
  DataVals_TYPE_array *ValueUpTypeArray; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4AB883B & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_IndexValue_int____76456232, *(_QWORD *)&valueUp);
    sub_1BAB41C(&FuncParamValueUpInfoDefault_TypeInfo, v5);
    byte_4AB883B = 1;
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
                (const MethodInfo_2EB30DC *)Method_BasicHelper_IndexValue_int____76456232);
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
      v6 = sub_1BAB668(FuncParamValueUpInfoDefault_TypeInfo);
      FuncParamValueUpInfoDefault___ctor((FuncParamValueUpInfoDefault_o *)v6, v14);
      if ( !v6 )
        sub_1BAB678(v15, v16);
      *(_DWORD *)(v6 + 16) = valueUp;
      if ( !FuncParamValueUpInfoDefault_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoDefault_TypeInfo);
      ValueUpTypeArray = FuncParamValueUpInfoDefault__ExtractValueUpTypeArray(dataVals, v16);
      *(_QWORD *)(v6 + 24) = ValueUpTypeArray;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v6 + 24), (int32_t)ValueUpTypeArray, v18, v19);
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
  System_Collections_Generic_List_T__o *v11; // x20
  void *monitor; // x8
  unsigned __int64 v13; // x22
  System_String_o *v14; // x21
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  v2 = dataVals;
  if ( (byte_4AB883C & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Enum_TryParse_DataVals_TYPE___, method);
    sub_1BAB41C(&System_Enum_TypeInfo, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_DataVals_TYPE__Add__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_DataVals_TYPE__ToArray__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_DataVals_TYPE___ctor__, v6);
    dataVals = (DataVals_o *)sub_1BAB41C(&System_Collections_Generic_List_DataVals_TYPE__TypeInfo, v7);
    byte_4AB883C = 1;
  }
  result = 0;
  if ( !v2 )
    goto LABEL_21;
  ParamAsStringArray = (System_Collections_ICollection_o *)DataVals__GetParamAsStringArray(v2, 122, 0LL, 0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ParamAsStringArray, 0LL);
  v10 = 0LL;
  if ( IsNullOrEmpty )
    return v10;
  v11 = (System_Collections_Generic_List_T__o *)sub_1BAB668(System_Collections_Generic_List_DataVals_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v11,
    (const MethodInfo_3532870 *)Method_System_Collections_Generic_List_DataVals_TYPE___ctor__);
  if ( !ParamAsStringArray )
    goto LABEL_21;
  monitor = ParamAsStringArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)monitor )
        sub_1BAB680(dataVals, method);
      v14 = (System_String_o *)*((_QWORD *)&ParamAsStringArray[2].klass + v13);
      if ( !System_Enum_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
      dataVals = (DataVals_o *)System_Enum__TryParse_Int32Enum_(
                                 v14,
                                 &result,
                                 (const MethodInfo_2ECC820 *)Method_System_Enum_TryParse_DataVals_TYPE___);
      if ( ((unsigned __int8)dataVals & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_21;
        method = (const MethodInfo *)(unsigned int)result;
        items = v11->fields._items;
        v16 = Method_System_Collections_Generic_List_DataVals_TYPE__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_Int32Enum___AddWithResize(
            v11,
            (int32_t)method,
            *(const MethodInfo_35330C4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          *((_DWORD *)items->m_Items + size) = (_DWORD)method;
        }
      }
      LODWORD(monitor) = ParamAsStringArray[1].monitor;
    }
    while ( (__int64)++v13 < (int)monitor );
  }
  if ( !v11 )
LABEL_21:
    sub_1BAB678(dataVals, method);
  return (DataVals_TYPE_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                  v11,
                                  (const MethodInfo_3534B7C *)Method_System_Collections_Generic_List_DataVals_TYPE__ToArray__);
}


bool __fastcall FuncParamValueUpInfoDefault__IsIgnoreValueUpBuffType(int32_t buffId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  int32_t klass_high; // w19
  Il2CppObject *v12; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AB883E & 1) == 0 )
  {
    sub_1BAB41C(&BuffList_TypeInfo, method);
    sub_1BAB41C(&Method_DataManager_GetMaster_BuffMaster___, v3);
    sub_1BAB41C(&Method_DataManager_GetMaster_BuffTypeDetailMaster___, v4);
    sub_1BAB41C(&DataManager_TypeInfo, v5);
    sub_1BAB41C(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__, v6);
    sub_1BAB41C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v7);
    byte_4AB883E = 1;
  }
  v12 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    buffId,
                                    (const MethodInfo_3163DE4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
      if ( entity && Master_object )
      {
        Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                          &v12,
                                          HIDWORD(entity[1].klass),
                                          (const MethodInfo_3163DE4 *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          return 0;
        if ( v12 )
          return LOBYTE(v12[2].klass) != 0;
      }
    }
LABEL_21:
    sub_1BAB678(Master_object, v9);
  }
  return 1;
}


bool __fastcall FuncParamValueUpInfoDefault__IsIgnoreValueUpFuncType(int32_t funcType, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AB883D & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_FuncTypeDetailMaster___, method);
    sub_1BAB41C(&DataManager_TypeInfo, v3);
    sub_1BAB41C(&Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__, v4);
    byte_4AB883D = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_FuncTypeDetailMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    funcType,
                                    (const MethodInfo_3163DE4 *)Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return BYTE4(entity[1].klass) != 0;
LABEL_11:
    sub_1BAB678(Master_object, v6);
  }
  return 0;
}


DataVals_TYPE_array *__fastcall FuncParamValueUpInfoDefault__get_ValueUpTypeArray(
        FuncParamValueUpInfoDefault_o *this,
        const MethodInfo *method)
{
  DataVals_TYPE_array *result; // x0
  FuncParamValueUpInfoDefault_c *v4; // x0

  if ( (byte_4AB883A & 1) == 0 )
  {
    sub_1BAB41C(&FuncParamValueUpInfoDefault_TypeInfo, method);
    byte_4AB883A = 1;
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