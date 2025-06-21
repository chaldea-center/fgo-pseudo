void __fastcall FunctionEntity___ctor(FunctionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C78B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_int___ctor__, method);
    byte_4B1C78B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32C591C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall FunctionEntity__CreatePrimaryKey(FunctionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


EffectFlipData_array *__fastcall FunctionEntity__GetActEnemyEffectFlipDataArray(
        FunctionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  EffectFlipData_array *result; // x0
  EffectFlipData_array *v7; // x19

  if ( (byte_4B1C786 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_GetValue_string__object___, method);
    sub_1BCAFF8(&Method_JsonManager_DeserializeArray_EffectFlipData___, v3);
    sub_1BCAFF8(&JsonManager_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_16515/*"actEnemyEffectFlip"*/, v5);
    byte_4B1C786 = 1;
  }
  result = (EffectFlipData_array *)BasicHelper__GetValue_object__object_(
                                     (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                                     (Il2CppObject *)StringLiteral_16515/*"actEnemyEffectFlip"*/,
                                     0LL,
                                     (const MethodInfo_3008C9C *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v7 = result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EffectFlipData_array *)JsonManager__DeserializeArray_object_(
                                     &v7->obj,
                                     (const MethodInfo_3086694 *)Method_JsonManager_DeserializeArray_EffectFlipData___);
  }
  return result;
}


int32_t __fastcall FunctionEntity__GetAddStateBuffId(FunctionEntity_o *this, const MethodInfo *method)
{
  _BOOL8 isAddState; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Int32_array *vals; // x8

  isAddState = FuncList__isAddState(this->fields.funcType, 0LL);
  if ( !isAddState )
    return -1;
  vals = this->fields.vals;
  if ( !vals )
    sub_1BCB254(isAddState, v4);
  if ( !vals->max_length )
    sub_1BCB25C(isAddState, v4, v5);
  return vals->m_Items[1];
}


int32_t __fastcall FunctionEntity__GetAddStateBuffTypeFromFunction(FunctionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Int32_array *vals; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B1C781 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_BuffMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v4);
    byte_4B1C781 = 1;
  }
  entity = 0LL;
  if ( FuncList__isAddState(this->fields.funcType, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_BuffMaster___);
    vals = this->fields.vals;
    if ( !vals )
      goto LABEL_13;
    if ( !vals->max_length )
      sub_1BCB25C(Master_object, v6, v7);
    if ( !Master_object )
      goto LABEL_13;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      vals->m_Items[1],
                                      (const MethodInfo_32C7E4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
        return HIDWORD(entity[1].klass);
LABEL_13:
      sub_1BCB254(Master_object, v6);
    }
  }
  return 0;
}


System_Int32_array *__fastcall FunctionEntity__GetFuncIndividuality(FunctionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x20
  System_Int32_array *Master_object; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_IEnumerable_T__o *IntArrayDefaultEmpty; // x0

  if ( (byte_4B1C783 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_FuncTypeDetailMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__AddRange__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_19536/*"funcIndividuality"*/, v8);
    byte_4B1C783 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_FuncTypeDetailMaster___);
  if ( !Master_object
    || (Master_object = FuncTypeDetailMaster__GetIndividuality(
                          (FuncTypeDetailMaster_o *)Master_object,
                          this->fields.funcType,
                          v12),
        !v9) )
  {
    sub_1BCB254(Master_object, v11);
  }
  System_Collections_Generic_List_int___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_369CDB8 *)Method_System_Collections_Generic_List_int__AddRange__);
  IntArrayDefaultEmpty = (System_Collections_Generic_IEnumerable_T__o *)EntityScriptUtil__GetIntArrayDefaultEmpty(
                                                                          this->fields.script,
                                                                          (System_String_o *)StringLiteral_19536/*"funcIndividuality"*/,
                                                                          0LL);
  System_Collections_Generic_List_int___AddRange(
    v9,
    IntArrayDefaultEmpty,
    (const MethodInfo_369CDB8 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *__fastcall FunctionEntity__GetNoEffectText(
        FunctionEntity_o *this,
        System_String_o *defText,
        const MethodInfo *method)
{
  if ( (byte_4B1C787 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22044/*"noEffectText"*/, defText);
    byte_4B1C787 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22044/*"noEffectText"*/, defText, 0LL);
}


int32_t __fastcall FunctionEntity__GetPopupTextCondensedScaleSize(FunctionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1C784 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_10613/*"PopupTextCondensedScaleSize"*/, method);
    byte_4B1C784 = 1;
  }
  return FunctionEntity__getScript(this, (System_String_o *)StringLiteral_10613/*"PopupTextCondensedScaleSize"*/, 0, v2);
}


int32_t __fastcall FunctionEntity__GetPopupTextCondensedScaleValue(FunctionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1C785 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_10614/*"PopupTextCondensedScaleValue"*/, method);
    byte_4B1C785 = 1;
  }
  return FunctionEntity__getScript(this, (System_String_o *)StringLiteral_10614/*"PopupTextCondensedScaleValue"*/, 0, v2);
}


void __fastcall FunctionEntity__GetTargetVals(
        FunctionEntity_o *this,
        System_Int32_array **originalTvals,
        System_Int32_array_array **overwriteTvals,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Int32_array *tvals; // x1

  *originalTvals = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)originalTvals, 0, (int32_t)overwriteTvals, method);
  if ( !FunctionEntity__TryGetOverwriteTvals(this, overwriteTvals, v7) )
  {
    tvals = this->fields.tvals;
    *originalTvals = tvals;
    sub_1BCAF9C((CGThumbnailListItem_o *)originalTvals, (int32_t)tvals, v8, v9);
  }
}


bool __fastcall FunctionEntity__IsToQuoteBattleValue(
        FunctionEntity_o *this,
        int32_t *battleValueKey,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4B1C78A & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22703/*"quoteBattleValueKey"*/, battleValueKey);
    byte_4B1C78A = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22703/*"quoteBattleValueKey"*/, 0, 0LL);
  *battleValueKey = IntValue;
  return IntValue != 0;
}


bool __fastcall FunctionEntity__TryGetBattleSkillDropInfoDict(
        FunctionEntity_o *this,
        BattleSkillDropInfo_JsonConvertData_o **data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v11; // x20
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1C788 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, data);
    sub_1BCAFF8(&Method_JsonManager_Deserialize_BattleSkillDropInfo_JsonConvertData___, v6);
    sub_1BCAFF8(&JsonManager_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_16945/*"battleSkillDropInfo"*/, v8);
    byte_4B1C788 = 1;
  }
  value = 0LL;
  *data = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)data, 0, (int32_t)method, v3);
  script = this->fields.script;
  if ( !script )
    sub_1BCB254(0LL, v9);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_16945/*"battleSkillDropInfo"*/,
         &value,
         (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v11 = value;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__Deserialize_object_(
            v11,
            (const MethodInfo_3086544 *)Method_JsonManager_Deserialize_BattleSkillDropInfo_JsonConvertData___);
    *data = (BattleSkillDropInfo_JsonConvertData_o *)v12;
    sub_1BCAF9C((CGThumbnailListItem_o *)data, (int32_t)v12, v13, v14);
  }
  return *data != 0LL;
}


bool __fastcall FunctionEntity__TryGetBattleValueTarget(
        FunctionEntity_o *this,
        int32_t *valueTargetType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *StringValue; // x20

  if ( (byte_4B1C789 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Enum_TryParse_BattleValueTargetType___, valueTargetType);
    sub_1BCAFF8(&System_Enum_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_16952/*"battleValueTarget"*/, v6);
    byte_4B1C789 = 1;
  }
  *valueTargetType = 0;
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_16952/*"battleValueTarget"*/, 0LL, 0LL);
  if ( System_String__IsNullOrEmpty(StringValue, 0LL) )
    return 0;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  return System_Enum__TryParse_Int32Enum_(
           StringValue,
           valueTargetType,
           (const MethodInfo_30215E8 *)Method_System_Enum_TryParse_BattleValueTargetType___);
}


bool __fastcall FunctionEntity__TryGetOverwriteTvals(
        FunctionEntity_o *this,
        System_Int32_array_array **tvalsArray,
        const MethodInfo *method)
{
  if ( (byte_4B1C782 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22386/*"overwriteTvals"*/, tvalsArray);
    byte_4B1C782 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_22386/*"overwriteTvals"*/,
           tvalsArray,
           0LL);
}


bool __fastcall FunctionEntity__checkScript(FunctionEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B1C77C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4B1C77C = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


System_Int32_array *__fastcall FunctionEntity__getEffectList(FunctionEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4B1C77F & 1) == 0 )
  {
    sub_1BCAFF8(&int___TypeInfo, method);
    byte_4B1C77F = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 0LL);
  return result;
}


System_Int32_array *__fastcall FunctionEntity__getQuestTargetValues(FunctionEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4B1C780 & 1) == 0 )
  {
    sub_1BCAFF8(&int___TypeInfo, method);
    byte_4B1C780 = 1;
  }
  result = this->fields.questTvals;
  if ( !result )
    return (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FunctionEntity__getScript(
        FunctionEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  FunctionEntity_o *v13; // x0
  System_String_o *v14; // x1
  System_String_o *v15; // x2
  const MethodInfo *v16; // x3

  v4 = defVal;
  if ( (byte_4B1C77D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1BCAFF8(&long_TypeInfo, v7);
    byte_4B1C77D = 1;
  }
  if ( !FunctionEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCB254(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  sub_1BCB514(script);
  return (unsigned int)FunctionEntity__getScript_41362828(v13, v14, v15, v16);
}


System_String_o *__fastcall FunctionEntity__getScript_41362828(
        FunctionEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0

  if ( (byte_4B1C77E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    byte_4B1C77E = 1;
  }
  if ( !FunctionEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCB254(script, v7);
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))script->klass->vtable._3_ToString.method)(
                              script,
                              script->klass->vtable._4_unknown.methodPtr);
}


System_Int32_array *__fastcall FunctionEntity__getTargetValues(FunctionEntity_o *this, const MethodInfo *method)
{
  return this->fields.tvals;
}


System_Int32_array *__fastcall FunctionEntity__getValues(FunctionEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


bool __fastcall FunctionEntity__isTargetEnemy(FunctionEntity_o *this, const MethodInfo *method)
{
  return (this->fields.applyTarget & 0xFFFFFFFE) == 2;
}


bool __fastcall FunctionEntity__isTargetPlayer(FunctionEntity_o *this, const MethodInfo *method)
{
  return (this->fields.applyTarget & 0xFFFFFFFD) == 1;
}