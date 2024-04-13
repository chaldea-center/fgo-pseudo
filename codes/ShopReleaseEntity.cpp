void __fastcall ShopReleaseEntity___ctor(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA69E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA69E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ShopReleaseEntity__CreatePK(
        int32_t shopId,
        int32_t condType,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_42EA69B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, condType, priority, method);
    byte_42EA69B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           shopId,
           condType,
           priority,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo *v8; // x1
  int32_t condType; // w20
  int32_t condValue; // w19

  if ( (byte_42EA69D & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EA69D = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.closedMessage, 0LL) )
    return this->fields.closedMessage;
  condType = this->fields.condType;
  condValue = ShopReleaseEntity__get_condValue(this, v8);
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
  int v2; // w2
  __int64 v3; // x3
  struct System_Int32_array *condValues; // x20
  int32_t condType; // w21
  int64_t condNum; // x19
  int32_t v9; // w20
  int32_t condValue; // w0
  int64_t v11; // x19
  int32_t v12; // w21

  if ( (byte_42EA69C & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA69C = 1;
  }
  condValues = this->fields.condValues;
  if ( condValues && (int)condValues->max_length >= 2 )
  {
    condType = this->fields.condType;
    condNum = this->fields.condNum;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpen_25912304(condType, condValues, condNum, 0LL);
  }
  else
  {
    v9 = this->fields.condType;
    condValue = ShopReleaseEntity__get_condValue(this, method);
    v11 = this->fields.condNum;
    v12 = condValue;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpen(v9, v12, v11, 0, 0LL);
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
  struct System_Int32_array *condValues; // x8
  __int64 v3; // x9
  __int64 v5; // x0

  condValues = this->fields.condValues;
  if ( !condValues )
    return 0;
  v3 = *(_QWORD *)&condValues->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  return condValues->m_Items[1];
}