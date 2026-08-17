void FunctionEntity___ctor(FunctionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970BDD & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5970BDD = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t FunctionEntity__CreatePrimaryKey(FunctionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


EffectFlipData_array *FunctionEntity__GetActEnemyEffectFlipDataArray(FunctionEntity_o *this, const MethodInfo *method)
{
  EffectFlipData_array *result; // x0
  __int64 v4; // x1
  EffectFlipData_array *v5; // x19

  if ( (byte_5970BD7 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_string__object___);
    sub_2213A60(&Method_JsonManager_DeserializeArray_EffectFlipData___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_17329/*"actEnemyEffectFlip"*/);
    byte_5970BD7 = 1;
  }
  result = (EffectFlipData_array *)BasicHelper__GetValue_object__object_(
                                     (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                                     (Il2CppObject *)StringLiteral_17329/*"actEnemyEffectFlip"*/,
                                     0,
                                     (const MethodInfo_3814850 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v5 = result;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v4);
    return (EffectFlipData_array *)JsonManager__DeserializeArray_object_(
                                     &v5->obj,
                                     (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_EffectFlipData___);
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
    sub_2213CDC(isAddState, v4);
  if ( !LODWORD(vals->max_length) )
    sub_2213CE4(isAddState);
  return vals->m_Items[0];
}


int32_t FunctionEntity__GetAddStateBuffTypeFromFunction(FunctionEntity_o *this, const MethodInfo *method)
{
  int32_t funcType; // w0
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct System_Int32_array *vals; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5970BD2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BuffMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_5970BD2 = 1;
  }
  funcType = this->fields.funcType;
  entity = 0;
  if ( FuncList__isAddState(funcType, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BuffMaster___);
    vals = this->fields.vals;
    if ( !vals )
      goto LABEL_13;
    if ( !LODWORD(vals->max_length) )
      sub_2213CE4(Master_object);
    if ( !Master_object )
      goto LABEL_13;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      vals->m_Items[0],
                                      (const MethodInfo_3F10B80 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
        return HIDWORD(entity[1].klass);
LABEL_13:
      sub_2213CDC(Master_object, v6);
    }
  }
  return 0;
}


System_Int32_array *FunctionEntity__GetFuncIndividuality(FunctionEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 v4; // x1
  System_Int32_array *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_IEnumerable_T__o *IntArrayDefaultEmpty; // x0

  if ( (byte_5970BD4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_FuncTypeDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&StringLiteral_20640/*"funcIndividuality"*/);
    byte_5970BD4 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FuncTypeDetailMaster___);
  if ( !Master_object
    || (Master_object = FuncTypeDetailMaster__GetIndividuality(
                          (FuncTypeDetailMaster_o *)Master_object,
                          this->fields.funcType,
                          v7),
        !v3) )
  {
    sub_2213CDC(Master_object, v6);
  }
  System_Collections_Generic_List_int___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
  IntArrayDefaultEmpty = (System_Collections_Generic_IEnumerable_T__o *)EntityScriptUtil__GetIntArrayDefaultEmpty(
                                                                          this->fields.script,
                                                                          (System_String_o *)StringLiteral_20640/*"funcIndividuality"*/,
                                                                          0);
  System_Collections_Generic_List_int___AddRange(
    v3,
    IntArrayDefaultEmpty,
    (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *FunctionEntity__GetNoEffectText(
        FunctionEntity_o *this,
        System_String_o *defText,
        const MethodInfo *method)
{
  if ( (byte_5970BD8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23366/*"noEffectText"*/);
    byte_5970BD8 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_23366/*"noEffectText"*/, defText, 0);
}


int32_t FunctionEntity__GetPopupTextCondensedScaleSize(FunctionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970BD5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11160/*"PopupTextCondensedScaleSize"*/);
    byte_5970BD5 = 1;
  }
  return FunctionEntity__getScript(this, (System_String_o *)StringLiteral_11160/*"PopupTextCondensedScaleSize"*/, 0, v2);
}


int32_t FunctionEntity__GetPopupTextCondensedScaleValue(FunctionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970BD6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11161/*"PopupTextCondensedScaleValue"*/);
    byte_5970BD6 = 1;
  }
  return FunctionEntity__getScript(this, (System_String_o *)StringLiteral_11161/*"PopupTextCondensedScaleValue"*/, 0, v2);
}


int32_t FunctionEntity__GetPopupTextEffectId(FunctionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970BDC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23909/*"popupTextEffectId"*/);
    byte_5970BDC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23909/*"popupTextEffectId"*/, 0, 0);
}


void FunctionEntity__GetTargetVals(
        FunctionEntity_o *this,
        System_Int32_array **originalTvals,
        System_Int32_array_array **overwriteTvals,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v11; // x2
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Int32_array *tvals; // x1

  *originalTvals = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)originalTvals,
    0,
    (System_String_o *)overwriteTvals,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( !FunctionEntity__TryGetOverwriteTvals(this, overwriteTvals, v11) )
  {
    tvals = this->fields.tvals;
    *originalTvals = tvals;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)originalTvals, (int32_t)tvals, v12, v13, v14, v15, v16, v17);
  }
}


bool FunctionEntity__IsTargetEnemyOnly(FunctionEntity_o *this, const MethodInfo *method)
{
  return this->fields.applyTarget == 2;
}


bool FunctionEntity__IsToQuoteBattleValue(FunctionEntity_o *this, int32_t *battleValueKey, const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_5970BDB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24102/*"quoteBattleValueKey"*/);
    byte_5970BDB = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24102/*"quoteBattleValueKey"*/, 0, 0);
  *battleValueKey = IntValue;
  return IntValue != 0;
}


bool FunctionEntity__TryGetBattleSkillDropInfoDict(
        FunctionEntity_o *this,
        BattleSkillDropInfo_JsonConvertData_o **data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970BD9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&Method_JsonManager_Deserialize_BattleSkillDropInfo_JsonConvertData___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_17817/*"battleSkillDropInfo"*/);
    byte_5970BD9 = 1;
  }
  value = 0;
  *data = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)data, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  script = this->fields.script;
  if ( !script )
    sub_2213CDC(0, v10);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_17817/*"battleSkillDropInfo"*/,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v13 = value;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v12);
    v14 = JsonManager__Deserialize_object_(
            v13,
            (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_BattleSkillDropInfo_JsonConvertData___);
    *data = (BattleSkillDropInfo_JsonConvertData_o *)v14;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)data, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  }
  return *data != 0;
}


bool FunctionEntity__TryGetBattleValueTarget(
        FunctionEntity_o *this,
        int32_t *valueTargetType,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *v6; // x1
  System_String_o *StringValue; // x20
  __int64 v8; // x1

  if ( (byte_5970BDA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Enum_TryParse_BattleValueTargetType___);
    sub_2213A60(&StringLiteral_17826/*"battleValueTarget"*/);
    byte_5970BDA = 1;
  }
  script = this->fields.script;
  v6 = (System_String_o *)StringLiteral_17826/*"battleValueTarget"*/;
  *valueTargetType = 0;
  StringValue = EntityScriptUtil__GetStringValue(script, v6, 0, 0);
  if ( System_String__IsNullOrEmpty(StringValue, 0) )
    return 0;
  if ( !*(_DWORD *)(qword_5984398 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984398, v8);
  return System_Enum__TryParse_Int32Enum_(
           StringValue,
           valueTargetType,
           (const MethodInfo_3861584 *)Method_System_Enum_TryParse_BattleValueTargetType___);
}


bool FunctionEntity__TryGetOverwriteTvals(
        FunctionEntity_o *this,
        System_Int32_array_array **tvalsArray,
        const MethodInfo *method)
{
  if ( (byte_5970BD3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23746/*"overwriteTvals"*/);
    byte_5970BD3 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_23746/*"overwriteTvals"*/,
           tvalsArray,
           0);
}


bool FunctionEntity__TryGetValsKeyValuePair(
        FunctionEntity_o *this,
        int32_t pairIndex,
        int32_t *key,
        int32_t *value,
        const MethodInfo *method)
{
  bool result; // w0
  struct System_Int32_array *vals; // x8
  unsigned int max_length; // w11
  __int64 v9; // x10
  __int64 v10; // x9

  result = 0;
  *value = 0;
  *key = 0;
  if ( (pairIndex & 0x80000000) == 0 )
  {
    vals = this->fields.vals;
    if ( vals )
    {
      max_length = vals->max_length;
      v9 = 2 * pairIndex;
      v10 = v9 | 1;
      if ( (int)(v9 | 1) >= (int)max_length )
      {
        return 0;
      }
      else
      {
        if ( (unsigned int)v9 >= max_length || (*key = vals->m_Items[v9], (unsigned int)v10 >= max_length) )
          sub_2213CE4(0);
        result = 1;
        *value = vals->m_Items[v10];
      }
    }
  }
  return result;
}


bool FunctionEntity__checkScript(FunctionEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_5970BCE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_5970BCE = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


System_Int32_array *FunctionEntity__getEffectList(FunctionEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_5970BD0 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5970BD0 = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  return result;
}


System_Int32_array *FunctionEntity__getQuestTargetValues(FunctionEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_5970BD1 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5970BD1 = 1;
  }
  result = this->fields.questTvals;
  if ( !result )
    return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
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
  FunctionEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  v4 = defVal;
  if ( (byte_5970BCF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5970BCF = 1;
  }
  if ( !FunctionEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_2213CDC(script, v7);
  }
  if ( script->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, qword_5984368, v9);
  sub_221405C(script, qword_5984368, v9);
  return FunctionEntity__CreatePrimaryKey(v11, v12);
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