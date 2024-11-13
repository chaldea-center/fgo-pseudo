void __fastcall ShopReleaseEntity___ctor(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16C04 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16C04 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopReleaseEntity__CreatePK(
        int32_t shopId,
        int32_t condType,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4B16C01 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&condType, *(_QWORD *)&priority);
    byte_4B16C01 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           shopId,
           condType,
           priority,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  struct System_Int32_array *condValues; // x8
  int32_t condType; // w19
  __int64 v10; // x9
  int32_t v11; // w20

  if ( (byte_4B16C03 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B16C03 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.closedMessage, 0LL);
  if ( !IsNullOrEmpty )
    return this->fields.closedMessage;
  condValues = this->fields.condValues;
  condType = this->fields.condType;
  if ( condValues && (v10 = *(_QWORD *)&condValues->max_length) != 0 )
  {
    if ( !(_DWORD)v10 )
      sub_1BCAA44(IsNullOrEmpty, v7);
    v11 = condValues->m_Items[1];
  }
  else
  {
    v11 = 0;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v7);
  return CondType__OpenConditionText(condType, v11, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall ShopReleaseEntity__GetPreparationItemNameText(
        ShopReleaseEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.closedItemName;
}


bool __fastcall ShopReleaseEntity__IsCondEnable(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ShopReleaseEntity_o *v3; // x20
  struct System_Int32_array *condValues; // x21
  __int64 v5; // x9
  int32_t condType; // w19
  int64_t v7; // x20
  int64_t condNum; // x20

  v3 = this;
  if ( (byte_4B16C02 & 1) == 0 )
  {
    this = (ShopReleaseEntity_o *)sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B16C02 = 1;
  }
  condValues = v3->fields.condValues;
  if ( !condValues )
  {
    condType = v3->fields.condType;
LABEL_13:
    condNum = v3->fields.condNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
    return CondType__IsOpen(condType, (int32_t)condValues, condNum, 0, 0LL, 0LL);
  }
  v5 = *(_QWORD *)&condValues->max_length;
  condType = v3->fields.condType;
  if ( (int)v5 < 2 )
  {
    if ( v5 )
    {
      if ( !(_DWORD)v5 )
        sub_1BCAA44(this, method);
      LODWORD(condValues) = condValues->m_Items[1];
    }
    else
    {
      LODWORD(condValues) = 0;
    }
    goto LABEL_13;
  }
  v7 = v3->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen_38344416(condType, condValues, v7, 0LL);
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

  condValues = this->fields.condValues;
  if ( !condValues )
    return 0;
  v3 = *(_QWORD *)&condValues->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1BCAA44(this, method);
  return condValues->m_Items[1];
}