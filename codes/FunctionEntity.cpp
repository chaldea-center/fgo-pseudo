void FunctionEntity___ctor(FunctionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30D50 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D30D50 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
}


int32_t FunctionEntity__CreatePrimaryKey(FunctionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


EffectFlipData_array *FunctionEntity__GetActEnemyEffectFlipDataArray(FunctionEntity_o *this, const MethodInfo *method)
{
  EffectFlipData_array *result; // x0
  EffectFlipData_array *v4; // x19

  if ( (byte_4D30D4A & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_GetValue_string__object___);
    sub_1C93AD4(&Method_JsonManager_DeserializeArray_EffectFlipData___);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_16757/*"actEnemyEffectFlip"*/);
    byte_4D30D4A = 1;
  }
  result = (EffectFlipData_array *)BasicHelper__GetValue_object__object_(
                                     (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                                     (Il2CppObject *)StringLiteral_16757/*"actEnemyEffectFlip"*/,
                                     0,
                                     (const MethodInfo_31928F8 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EffectFlipData_array *)JsonManager__DeserializeArray_object_(
                                     &v4->obj,
                                     (const MethodInfo_3213F70 *)Method_JsonManager_DeserializeArray_EffectFlipData___);
  }
  return result;
}


int32_t FunctionEntity__GetAddStateBuffId(FunctionEntity_o *this, const MethodInfo *method)
{
  _BOOL8 isAddState; // x0
  __int64 v4; // x1
  struct System_Int32_array *vals; // x8

  isAddState = FuncList__isAddState(this->fields.funcType, 0);
  if ( !isAddState )
    return -1;
  vals = this->fields.vals;
  if ( !vals )
    sub_1C93D2C(isAddState, v4);
  if ( !LODWORD(vals->max_length) )
    sub_1C93D34(isAddState);
  return vals->m_Items[0];
}


int32_t FunctionEntity__GetAddStateBuffTypeFromFunction(FunctionEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  struct System_Int32_array *vals; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D30D45 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_4D30D45 = 1;
  }
  entity = 0;
  if ( FuncList__isAddState(this->fields.funcType, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BuffMaster___);
    vals = this->fields.vals;
    if ( !vals )
      goto LABEL_13;
    if ( !LODWORD(vals->max_length) )
      sub_1C93D34(Master_object);
    if ( !Master_object )
      goto LABEL_13;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      vals->m_Items[0],
                                      (const MethodInfo_34632C0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
        return HIDWORD(entity[1].klass);
LABEL_13:
      sub_1C93D2C(Master_object, v4);
    }
  }
  return 0;
}


System_Int32_array *FunctionEntity__GetFuncIndividuality(FunctionEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_Int32_array *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_Collections_Generic_IEnumerable_T__o *IntArrayDefaultEmpty; // x0

  if ( (byte_4D30D47 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_FuncTypeDetailMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&StringLiteral_19920/*"funcIndividuality"*/);
    byte_4D30D47 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FuncTypeDetailMaster___);
  if ( !Master_object
    || (Master_object = FuncTypeDetailMaster__GetIndividuality(
                          (FuncTypeDetailMaster_o *)Master_object,
                          this->fields.funcType,
                          v6),
        !v3) )
  {
    sub_1C93D2C(Master_object, v5);
  }
  System_Collections_Generic_List_int___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
  IntArrayDefaultEmpty = (System_Collections_Generic_IEnumerable_T__o *)EntityScriptUtil__GetIntArrayDefaultEmpty(
                                                                          this->fields.script,
                                                                          (System_String_o *)StringLiteral_19920/*"funcIndividuality"*/,
                                                                          0);
  System_Collections_Generic_List_int___AddRange(
    v3,
    IntArrayDefaultEmpty,
    (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *FunctionEntity__GetNoEffectText(
        FunctionEntity_o *this,
        System_String_o *defText,
        const MethodInfo *method)
{
  if ( (byte_4D30D4B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22513/*"noEffectText"*/);
    byte_4D30D4B = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22513/*"noEffectText"*/, defText, 0);
}


int32_t FunctionEntity__GetPopupTextCondensedScaleSize(FunctionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D30D48 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_10773/*"PopupTextCondensedScaleSize"*/);
    byte_4D30D48 = 1;
  }
  return FunctionEntity__getScript(this, (System_String_o *)StringLiteral_10773/*"PopupTextCondensedScaleSize"*/, 0, v2);
}


int32_t FunctionEntity__GetPopupTextCondensedScaleValue(FunctionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D30D49 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_10774/*"PopupTextCondensedScaleValue"*/);
    byte_4D30D49 = 1;
  }
  return FunctionEntity__getScript(this, (System_String_o *)StringLiteral_10774/*"PopupTextCondensedScaleValue"*/, 0, v2);
}


int32_t FunctionEntity__GetPopupTextEffectId(FunctionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30D4F & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23014/*"popupTextEffectId"*/);
    byte_4D30D4F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23014/*"popupTextEffectId"*/, 0, 0);
}


void FunctionEntity__GetTargetVals(
        FunctionEntity_o *this,
        System_Int32_array **originalTvals,
        System_Int32_array_array **overwriteTvals,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v11; // x2
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Int32_array *tvals; // x1

  *originalTvals = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)originalTvals, 0, (int32_t)overwriteTvals, (int32_t)method, v4, v5, v6, v7);
  if ( !FunctionEntity__TryGetOverwriteTvals(this, overwriteTvals, v11) )
  {
    tvals = this->fields.tvals;
    *originalTvals = tvals;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)originalTvals, (int32_t)tvals, v12, v13, v14, v15, v16, v17);
  }
}


bool FunctionEntity__IsTargetEnemyOnly(FunctionEntity_o *this, const MethodInfo *method)
{
  return this->fields.applyTarget == 2;
}


bool FunctionEntity__IsToQuoteBattleValue(FunctionEntity_o *this, int32_t *battleValueKey, const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4D30D4E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23195/*"quoteBattleValueKey"*/);
    byte_4D30D4E = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23195/*"quoteBattleValueKey"*/, 0, 0);
  *battleValueKey = IntValue;
  return IntValue != 0;
}


bool FunctionEntity__TryGetBattleSkillDropInfoDict(
        FunctionEntity_o *this,
        BattleSkillDropInfo_JsonConvertData_o **data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D30D4C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C93AD4(&Method_JsonManager_Deserialize_BattleSkillDropInfo_JsonConvertData___);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_17211/*"battleSkillDropInfo"*/);
    byte_4D30D4C = 1;
  }
  value = 0;
  *data = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)data, 0, (int32_t)method, v3, v4, v5, v6, v7);
  script = this->fields.script;
  if ( !script )
    sub_1C93D2C(0, v10);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_17211/*"battleSkillDropInfo"*/,
         &value,
         (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v12 = value;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v13 = JsonManager__Deserialize_object_(
            v12,
            (const MethodInfo_3213E20 *)Method_JsonManager_Deserialize_BattleSkillDropInfo_JsonConvertData___);
    *data = (BattleSkillDropInfo_JsonConvertData_o *)v13;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)data, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  }
  return *data != 0;
}


bool FunctionEntity__TryGetBattleValueTarget(
        FunctionEntity_o *this,
        int32_t *valueTargetType,
        const MethodInfo *method)
{
  System_String_o *StringValue; // x20

  if ( (byte_4D30D4D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Enum_TryParse_BattleValueTargetType___);
    sub_1C93AD4(&System_Enum_TypeInfo);
    sub_1C93AD4(&StringLiteral_17218/*"battleValueTarget"*/);
    byte_4D30D4D = 1;
  }
  *valueTargetType = 0;
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_17218/*"battleValueTarget"*/, 0, 0);
  if ( System_String__IsNullOrEmpty(StringValue, 0) )
    return 0;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  return System_Enum__TryParse_Int32Enum_(
           StringValue,
           valueTargetType,
           (const MethodInfo_31AB6E0 *)Method_System_Enum_TryParse_BattleValueTargetType___);
}


bool FunctionEntity__TryGetOverwriteTvals(
        FunctionEntity_o *this,
        System_Int32_array_array **tvalsArray,
        const MethodInfo *method)
{
  if ( (byte_4D30D46 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22870/*"overwriteTvals"*/);
    byte_4D30D46 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_22870/*"overwriteTvals"*/,
           tvalsArray,
           0);
}


bool FunctionEntity__checkScript(FunctionEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4D30D41 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4D30D41 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


System_Int32_array *FunctionEntity__getEffectList(FunctionEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4D30D43 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    byte_4D30D43 = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  return result;
}


System_Int32_array *FunctionEntity__getQuestTargetValues(FunctionEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4D30D44 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    byte_4D30D44 = 1;
  }
  result = this->fields.questTvals;
  if ( !result )
    return (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t FunctionEntity__getScript(
        FunctionEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  FunctionEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  v4 = defVal;
  if ( (byte_4D30D42 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&long_TypeInfo);
    byte_4D30D42 = 1;
  }
  if ( !FunctionEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C93D2C(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  sub_1C940C8(script);
  return FunctionEntity__CreatePrimaryKey(v12, v13);
}


System_Int32_array *FunctionEntity__getValues(FunctionEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


bool FunctionEntity__isTargetEnemy(FunctionEntity_o *this, const MethodInfo *method)
{
  return (this->fields.applyTarget & 0xFFFFFFFE) == 2;
}


bool FunctionEntity__isTargetPlayer(FunctionEntity_o *this, const MethodInfo *method)
{
  return (this->fields.applyTarget & 0xFFFFFFFD) == 1;
}