void __fastcall FunctionEntity___ctor(FunctionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B3A9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5B3A9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall FunctionEntity__CreatePrimaryKey(FunctionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


EffectFlipData_array *__fastcall FunctionEntity__GetActEnemyEffectFlipDataArray(
        FunctionEntity_o *this,
        const MethodInfo *method)
{
  EffectFlipData_array *result; // x0
  EffectFlipData_array *v4; // x19

  if ( (byte_4A5B3A8 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_string__object___);
    sub_1B885B0(&Method_JsonManager_DeserializeArray_EffectFlipData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&StringLiteral_16643/*"actEnemyEffectFlip"*/);
    byte_4A5B3A8 = 1;
  }
  result = (EffectFlipData_array *)BasicHelper__GetValue_object__object_(
                                     (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                                     (Il2CppObject *)StringLiteral_16643/*"actEnemyEffectFlip"*/,
                                     0LL,
                                     (const MethodInfo_2E6E2D4 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EffectFlipData_array *)JsonManager__DeserializeArray_object_(
                                     &v4->obj,
                                     (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_EffectFlipData___);
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
    sub_1B8880C(isAddState, v4);
  if ( !vals->max_length )
    sub_1B88814(isAddState, v4);
  return vals->m_Items[1];
}


int32_t __fastcall FunctionEntity__GetAddStateBuffTypeFromFunction(FunctionEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  struct System_Int32_array *vals; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5B3A3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_4A5B3A3 = 1;
  }
  entity = 0LL;
  if ( FuncList__isAddState(this->fields.funcType, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BuffMaster___);
    vals = this->fields.vals;
    if ( !vals )
      goto LABEL_13;
    if ( !vals->max_length )
      sub_1B88814(Master_object, v4);
    if ( !Master_object )
      goto LABEL_13;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      vals->m_Items[1],
                                      (const MethodInfo_311D988 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
        return HIDWORD(entity[1].klass);
LABEL_13:
      sub_1B8880C(Master_object, v4);
    }
  }
  return 0;
}


System_Int32_array *__fastcall FunctionEntity__GetFuncIndividuality(FunctionEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_Int32_array *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_Collections_Generic_IEnumerable_T__o *IntArrayDefaultEmpty; // x0

  if ( (byte_4A5B3A5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_FuncTypeDetailMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&StringLiteral_19666/*"funcIndividuality"*/);
    byte_4A5B3A5 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FuncTypeDetailMaster___);
  if ( !Master_object
    || (Master_object = FuncTypeDetailMaster__GetIndividuality(
                          (FuncTypeDetailMaster_o *)Master_object,
                          this->fields.funcType,
                          v6),
        !v3) )
  {
    sub_1B8880C(Master_object, v5);
  }
  System_Collections_Generic_List_int___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  IntArrayDefaultEmpty = (System_Collections_Generic_IEnumerable_T__o *)EntityScriptUtil__GetIntArrayDefaultEmpty(
                                                                          this->fields.script,
                                                                          (System_String_o *)StringLiteral_19666/*"funcIndividuality"*/,
                                                                          0LL);
  System_Collections_Generic_List_int___AddRange(
    v3,
    IntArrayDefaultEmpty,
    (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall FunctionEntity__GetPopupTextCondensedScaleSize(FunctionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B3A6 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_10693/*"PopupTextCondensedScaleSize"*/);
    byte_4A5B3A6 = 1;
  }
  return FunctionEntity__getScript(this, (System_String_o *)StringLiteral_10693/*"PopupTextCondensedScaleSize"*/, 0, v2);
}


int32_t __fastcall FunctionEntity__GetPopupTextCondensedScaleValue(FunctionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B3A7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_10694/*"PopupTextCondensedScaleValue"*/);
    byte_4A5B3A7 = 1;
  }
  return FunctionEntity__getScript(this, (System_String_o *)StringLiteral_10694/*"PopupTextCondensedScaleValue"*/, 0, v2);
}


void __fastcall FunctionEntity__GetTargetVals(
        FunctionEntity_o *this,
        System_Int32_array **originalTvals,
        System_Int32_array_array **overwriteTvals,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  int32_t v8; // w2
  int32_t v9; // w3
  System_Int32_array *tvals; // x1

  *originalTvals = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)originalTvals, 0, (int32_t)overwriteTvals, (int32_t)method);
  if ( !FunctionEntity__TryGetOverwriteTvals(this, overwriteTvals, v7) )
  {
    tvals = this->fields.tvals;
    *originalTvals = tvals;
    sub_1B88554((ServantStatusBattleListViewItem_o *)originalTvals, (int32_t)tvals, v8, v9);
  }
}


bool __fastcall FunctionEntity__TryGetOverwriteTvals(
        FunctionEntity_o *this,
        System_Int32_array_array **tvalsArray,
        const MethodInfo *method)
{
  if ( (byte_4A5B3A4 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22417/*"overwriteTvals"*/);
    byte_4A5B3A4 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_22417/*"overwriteTvals"*/,
           tvalsArray,
           0LL);
}


bool __fastcall FunctionEntity__checkScript(FunctionEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4A5B39E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4A5B39E = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


System_Int32_array *__fastcall FunctionEntity__getEffectList(FunctionEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4A5B3A1 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5B3A1 = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return result;
}


System_Int32_array *__fastcall FunctionEntity__getQuestTargetValues(FunctionEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4A5B3A2 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5B3A2 = 1;
  }
  result = this->fields.questTvals;
  if ( !result )
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
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
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  FunctionEntity_o *v12; // x0
  System_String_o *v13; // x1
  System_String_o *v14; // x2
  const MethodInfo *v15; // x3

  v4 = defVal;
  if ( (byte_4A5B39F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5B39F = 1;
  }
  if ( !FunctionEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B8880C(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  sub_1B88ACC(script);
  return (unsigned int)FunctionEntity__getScript_39334876(v12, v13, v14, v15);
}


System_String_o *__fastcall FunctionEntity__getScript_39334876(
        FunctionEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0

  if ( (byte_4A5B3A0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4A5B3A0 = 1;
  }
  if ( !FunctionEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B8880C(script, v7);
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