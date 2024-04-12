void __fastcall FunctionEntity___ctor(FunctionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2BE2 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B2BE2 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall FunctionEntity__CreatePrimaryKey(FunctionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall FunctionEntity__GetAddStateBuffTypeFromFunction(FunctionEntity_o *this, const MethodInfo *method)
{
  int32_t funcType; // w8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  struct System_Int32_array *vals; // x8
  __int64 v8; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B2BDE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_BuffMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_42B2BDE = 1;
  }
  entity = 0LL;
  funcType = this->fields.funcType;
  if ( funcType == 16 || funcType == 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_BuffMaster___);
    vals = this->fields.vals;
    if ( !vals )
      goto LABEL_15;
    if ( !vals->max_length )
    {
      v8 = sub_B52A88(Master_WarQuestSelectionMaster);
      sub_B52A28(v8, 0LL);
    }
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_15;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                    &entity,
                                                                    vals->m_Items[1],
                                                                    (const MethodInfo_23E2334 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( entity )
        return *(&entity->fields.id + 1);
LABEL_15:
      sub_B52A5C(Master_WarQuestSelectionMaster, v5);
    }
  }
  return 0;
}


int32_t __fastcall FunctionEntity__GetPopupTextCondensedScaleSize(FunctionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B2BE0 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10801/*"PopupTextCondensedScaleSize"*/);
    byte_42B2BE0 = 1;
  }
  return FunctionEntity__getScript(this, (System_String_o *)StringLiteral_10801/*"PopupTextCondensedScaleSize"*/, 0, v2);
}


int32_t __fastcall FunctionEntity__GetPopupTextCondensedScaleValue(FunctionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B2BE1 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10802/*"PopupTextCondensedScaleValue"*/);
    byte_42B2BE1 = 1;
  }
  return FunctionEntity__getScript(this, (System_String_o *)StringLiteral_10802/*"PopupTextCondensedScaleValue"*/, 0, v2);
}


void __fastcall FunctionEntity__GetTargetVals(
        FunctionEntity_o *this,
        System_Int32_array **originalTvals,
        System_Int32_array_array **overwriteTvals,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v11; // x2
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array *tvals; // x1

  *originalTvals = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)originalTvals,
    0LL,
    (System_String_array **)overwriteTvals,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !FunctionEntity__TryGetOverwriteTvals(this, overwriteTvals, v11) )
  {
    tvals = this->fields.tvals;
    *originalTvals = tvals;
    sub_B52920(
      (BattleServantConfConponent_o *)originalTvals,
      (System_Int32_array **)tvals,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
}


bool __fastcall FunctionEntity__TryGetOverwriteTvals(
        FunctionEntity_o *this,
        System_Int32_array_array **tvalsArray,
        const MethodInfo *method)
{
  if ( (byte_42B2BDF & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21558/*"overwriteTvals"*/);
    byte_42B2BDF = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_21558/*"overwriteTvals"*/,
           tvalsArray,
           0LL);
}


bool __fastcall FunctionEntity__checkScript(FunctionEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42B2BD9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_42B2BD9 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


System_Int32_array *__fastcall FunctionEntity__getEffectList(FunctionEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_42B2BDC & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42B2BDC = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  return result;
}


System_Int32_array *__fastcall FunctionEntity__getQuestTargetValues(FunctionEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_42B2BDD & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42B2BDD = 1;
  }
  result = this->fields.questTvals;
  if ( !result )
    return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  FunctionEntity_o *v10; // x0
  System_String_o *v11; // x1
  System_String_o *v12; // x2
  const MethodInfo *v13; // x3

  v4 = defVal;
  if ( (byte_42B2BDA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&long_TypeInfo);
    byte_42B2BDA = 1;
  }
  if ( !FunctionEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B52A5C(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  sub_B52D50(script);
  return (unsigned int)FunctionEntity__getScript_30071432(v10, v11, v12, v13);
}


System_String_o *__fastcall FunctionEntity__getScript_30071432(
        FunctionEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0

  if ( (byte_42B2BDB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_42B2BDB = 1;
  }
  if ( !FunctionEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B52A5C(script, v7);
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_Type__IStoreExtension__o *, Il2CppMethodPointer))script->klass->vtable._3_ToString.method)(
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
  return (this->fields.applyTarget | 1) == 3;
}


bool __fastcall FunctionEntity__isTargetPlayer(FunctionEntity_o *this, const MethodInfo *method)
{
  return (this->fields.applyTarget | 2) == 3;
}