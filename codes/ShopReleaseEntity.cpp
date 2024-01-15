void __fastcall ShopReleaseEntity___ctor(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FB77C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FB77C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopReleaseEntity__CreatePK(
        int32_t shopId,
        int32_t condType,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_40FB779 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&condType);
    byte_40FB779 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           shopId,
           condType,
           priority,
           (const MethodInfo_18C25C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ShopReleaseEntity__CreatePrimaryKey(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ShopReleaseEntity__CreatePK(this->fields.shopId, this->fields.condType, this->fields.priority, v2);
}


System_String_o *__fastcall ShopReleaseEntity__GetPreparationConditionText(
        ShopReleaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  int32_t condType; // w20
  int32_t condValue; // w19

  if ( (byte_40FB77B & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40FB77B = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.closedMessage, 0LL) )
    return this->fields.closedMessage;
  condType = this->fields.condType;
  condValue = ShopReleaseEntity__get_condValue(this, v4);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__OpenConditionText(condType, condValue, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall ShopReleaseEntity__GetPreparationItemNameText(
        ShopReleaseEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.closedItemName;
}


bool __fastcall ShopReleaseEntity__IsCondEnable(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *condValues; // x20
  int32_t condType; // w21
  int64_t condNum; // x19
  int32_t v7; // w20
  int32_t condValue; // w0
  int64_t v9; // x19
  int32_t v10; // w21

  if ( (byte_40FB77A & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    byte_40FB77A = 1;
  }
  condValues = this->fields.condValues;
  if ( condValues && (int)condValues->max_length >= 2 )
  {
    condType = this->fields.condType;
    condNum = this->fields.condNum;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpen_25469964(condType, condValues, condNum, 0LL);
  }
  else
  {
    v7 = this->fields.condType;
    condValue = ShopReleaseEntity__get_condValue(this, method);
    v9 = this->fields.condNum;
    v10 = condValue;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpen(v7, v10, v9, 0, 0LL);
  }
}


bool __fastcall ShopReleaseEntity__IsOpen(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  if ( this->fields.isClosedDisp )
    return (unsigned __int8)&dword_0 + 1;
  else
    return ShopReleaseEntity__IsCondEnable(this, method);
}


bool __fastcall ShopReleaseEntity__IsPreparation(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  bool isClosedDisp; // w8

  isClosedDisp = this->fields.isClosedDisp;
  if ( isClosedDisp )
    return !ShopReleaseEntity__IsCondEnable(this, method);
  return isClosedDisp;
}


bool __fastcall ShopReleaseEntity__get_IsClosedDisp(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.isClosedDisp;
}


int32_t __fastcall ShopReleaseEntity__get_condValue(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *condValues; // x8
  __int64 v4; // x9

  condValues = this->fields.condValues;
  if ( !condValues )
    return 0;
  v4 = *(_QWORD *)&condValues->max_length;
  if ( !v4 )
    return 0;
  if ( !(_DWORD)v4 )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  return condValues->m_Items[1];
}