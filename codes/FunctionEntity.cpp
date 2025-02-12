void __fastcall FunctionEntity___ctor(FunctionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7CF7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_int___ctor__, method);
    byte_4BC7CF7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3246194 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4BC7CF5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_GetValue_string__object___, method);
    sub_1C1ABD4(&Method_JsonManager_DeserializeArray_EffectFlipData___, v3);
    sub_1C1ABD4(&JsonManager_TypeInfo, v4);
    sub_1C1ABD4(&StringLiteral_16912/*"actEnemyEffectFlip"*/, v5);
    byte_4BC7CF5 = 1;
  }
  result = (EffectFlipData_array *)BasicHelper__GetValue_object__object_(
                                     (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                                     (Il2CppObject *)StringLiteral_16912/*"actEnemyEffectFlip"*/,
                                     0LL,
                                     (const MethodInfo_2F8DBD8 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v7 = result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EffectFlipData_array *)JsonManager__DeserializeArray_object_(
                                     &v7->obj,
                                     (const MethodInfo_3006E90 *)Method_JsonManager_DeserializeArray_EffectFlipData___);
  }
  return result;
}


int32_t __fastcall FunctionEntity__GetAddStateBuffId(FunctionEntity_o *this, const MethodInfo *method)
{
  _BOOL8 isAddState; // x0
  __int64 v4; // x1
  struct System_Int32_array *vals; // x8

  isAddState = FuncList__isAddState(this->fields.funcType, 0LL);
  if ( !isAddState )
    return -1;
  vals = this->fields.vals;
  if ( !vals )
    sub_1C1AE30(isAddState, v4);
  if ( !vals->max_length )
    sub_1C1AE38(isAddState, v4);
  return vals->m_Items[1];
}


int32_t __fastcall FunctionEntity__GetAddStateBuffTypeFromFunction(FunctionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct System_Int32_array *vals; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BC7CF0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_BuffMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v4);
    byte_4BC7CF0 = 1;
  }
  entity = 0LL;
  if ( FuncList__isAddState(this->fields.funcType, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_BuffMaster___);
    vals = this->fields.vals;
    if ( !vals )
      goto LABEL_13;
    if ( !vals->max_length )
      sub_1C1AE38(Master_object, v6);
    if ( !Master_object )
      goto LABEL_13;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      vals->m_Items[1],
                                      (const MethodInfo_32486C4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
        return HIDWORD(entity[1].klass);
LABEL_13:
      sub_1C1AE30(Master_object, v6);
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

  if ( (byte_4BC7CF2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_FuncTypeDetailMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__AddRange__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1C1ABD4(&StringLiteral_19994/*"funcIndividuality"*/, v8);
    byte_4BC7CF2 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_FuncTypeDetailMaster___);
  if ( !Master_object
    || (Master_object = FuncTypeDetailMaster__GetIndividuality(
                          (FuncTypeDetailMaster_o *)Master_object,
                          this->fields.funcType,
                          v12),
        !v9) )
  {
    sub_1C1AE30(Master_object, v11);
  }
  System_Collections_Generic_List_int___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_361FA78 *)Method_System_Collections_Generic_List_int__AddRange__);
  IntArrayDefaultEmpty = (System_Collections_Generic_IEnumerable_T__o *)EntityScriptUtil__GetIntArrayDefaultEmpty(
                                                                          this->fields.script,
                                                                          (System_String_o *)StringLiteral_19994/*"funcIndividuality"*/,
                                                                          0LL);
  System_Collections_Generic_List_int___AddRange(
    v9,
    IntArrayDefaultEmpty,
    (const MethodInfo_361FA78 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *__fastcall FunctionEntity__GetNoEffectText(
        FunctionEntity_o *this,
        System_String_o *defText,
        const MethodInfo *method)
{
  if ( (byte_4BC7CF6 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22471/*"noEffectText"*/, defText);
    byte_4BC7CF6 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22471/*"noEffectText"*/, defText, 0LL);
}


int32_t __fastcall FunctionEntity__GetPopupTextCondensedScaleSize(FunctionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7CF3 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_10892/*"PopupTextCondensedScaleSize"*/, method);
    byte_4BC7CF3 = 1;
  }
  return FunctionEntity__getScript(this, (System_String_o *)StringLiteral_10892/*"PopupTextCondensedScaleSize"*/, 0, v2);
}


int32_t __fastcall FunctionEntity__GetPopupTextCondensedScaleValue(FunctionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7CF4 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_10893/*"PopupTextCondensedScaleValue"*/, method);
    byte_4BC7CF4 = 1;
  }
  return FunctionEntity__getScript(this, (System_String_o *)StringLiteral_10893/*"PopupTextCondensedScaleValue"*/, 0, v2);
}


void __fastcall FunctionEntity__GetTargetVals(
        FunctionEntity_o *this,
        System_Int32_array **originalTvals,
        System_Int32_array_array **overwriteTvals,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v11; // x2
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Int32_array *tvals; // x1

  *originalTvals = 0LL;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)originalTvals,
    0LL,
    (int64_t)overwriteTvals,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( !FunctionEntity__TryGetOverwriteTvals(this, overwriteTvals, v11) )
  {
    tvals = this->fields.tvals;
    *originalTvals = tvals;
    sub_1C1AB78((PartyOrganizationUtility_o *)originalTvals, (int64_t)tvals, v12, v13, v14, v15, v16, v17);
  }
}


bool __fastcall FunctionEntity__TryGetOverwriteTvals(
        FunctionEntity_o *this,
        System_Int32_array_array **tvalsArray,
        const MethodInfo *method)
{
  if ( (byte_4BC7CF1 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22809/*"overwriteTvals"*/, tvalsArray);
    byte_4BC7CF1 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_22809/*"overwriteTvals"*/,
           tvalsArray,
           0LL);
}


bool __fastcall FunctionEntity__checkScript(FunctionEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4BC7CEB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4BC7CEB = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


System_Int32_array *__fastcall FunctionEntity__getEffectList(FunctionEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4BC7CEE & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    byte_4BC7CEE = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  return result;
}


System_Int32_array *__fastcall FunctionEntity__getQuestTargetValues(FunctionEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4BC7CEF & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    byte_4BC7CEF = 1;
  }
  result = this->fields.questTvals;
  if ( !result )
    return (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
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
  if ( (byte_4BC7CEC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1C1ABD4(&long_TypeInfo, v7);
    byte_4BC7CEC = 1;
  }
  if ( !FunctionEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1C1AE30(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  sub_1C1B0F0(script);
  return (unsigned int)FunctionEntity__getScript_40537984(v13, v14, v15, v16);
}


System_String_o *__fastcall FunctionEntity__getScript_40537984(
        FunctionEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0

  if ( (byte_4BC7CED & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    byte_4BC7CED = 1;
  }
  if ( !FunctionEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1C1AE30(script, v7);
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