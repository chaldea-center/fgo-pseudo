void ShopReleaseEntity___ctor(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27E1A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27E1A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ShopReleaseEntity__CreatePK(
        int32_t shopId,
        int32_t condType,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4C27E17 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C27E17 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           shopId,
           condType,
           priority,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ShopReleaseEntity__CreatePrimaryKey(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ShopReleaseEntity__CreatePK(this->fields.shopId, this->fields.condType, this->fields.priority, v2);
}


System_String_o *ShopReleaseEntity__GetPreparationConditionText(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Int32_array *condValues; // x8
  int32_t condType; // w19
  il2cpp_array_size_t max_length; // x9
  int32_t v9; // w20

  if ( (byte_4C27E19 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27E19 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.closedMessage, 0);
  if ( !IsNullOrEmpty )
    return this->fields.closedMessage;
  condValues = this->fields.condValues;
  condType = this->fields.condType;
  if ( condValues && (max_length = condValues->max_length) != 0 )
  {
    if ( !(_DWORD)max_length )
      sub_1C2D6F4(IsNullOrEmpty, v4, v5);
    v9 = condValues->m_Items[0];
  }
  else
  {
    v9 = 0;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__OpenConditionText(condType, v9, (System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *ShopReleaseEntity__GetPreparationItemNameText(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.closedItemName;
}


bool ShopReleaseEntity__IsCondEnable(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ShopReleaseEntity_o *v3; // x20
  System_Int32_array *condValues; // x21
  il2cpp_array_size_t max_length; // x9
  int32_t condType; // w19
  int64_t v7; // x20
  int64_t condNum; // x20

  v3 = this;
  if ( (byte_4C27E18 & 1) == 0 )
  {
    this = (ShopReleaseEntity_o *)sub_1C2D490(&CondType_TypeInfo);
    byte_4C27E18 = 1;
  }
  condValues = v3->fields.condValues;
  if ( !condValues )
  {
    condType = v3->fields.condType;
LABEL_13:
    condNum = v3->fields.condNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpen(condType, (int32_t)condValues, condNum, 0, 0, 0);
  }
  max_length = condValues->max_length;
  condType = v3->fields.condType;
  if ( (int)max_length < 2 )
  {
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        sub_1C2D6F4(this, method, v2);
      LODWORD(condValues) = condValues->m_Items[0];
    }
    else
    {
      LODWORD(condValues) = 0;
    }
    goto LABEL_13;
  }
  v7 = v3->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen_40141812(condType, condValues, v7, 0);
}


bool ShopReleaseEntity__IsOpen(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  _BOOL8 v2; // x0

  if ( this->fields.isClosedDisp )
    return (char)&dword_0 + 1;
  else
    LOBYTE(v2) = ShopReleaseEntity__IsCondEnable(this, method);
  return v2;
}


bool ShopReleaseEntity__IsPreparation(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  bool isClosedDisp; // w8

  isClosedDisp = this->fields.isClosedDisp;
  if ( isClosedDisp )
    return !ShopReleaseEntity__IsCondEnable(this, method);
  return isClosedDisp;
}


bool ShopReleaseEntity__get_IsClosedDisp(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.isClosedDisp;
}


int32_t ShopReleaseEntity__get_condValue(ShopReleaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *condValues; // x8
  il2cpp_array_size_t max_length; // x9

  condValues = this->fields.condValues;
  if ( !condValues )
    return 0;
  max_length = condValues->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C2D6F4(this, method, v2);
  return condValues->m_Items[0];
}