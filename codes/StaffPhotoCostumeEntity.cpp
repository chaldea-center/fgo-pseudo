void StaffPhotoCostumeEntity___ctor(StaffPhotoCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939326 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939326 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *StaffPhotoCostumeEntity__CreatePK(int32_t staffPhotoId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_5939325 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939325 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           staffPhotoId,
           idx,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *StaffPhotoCostumeEntity__CreatePrimaryKey(StaffPhotoCostumeEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return StaffPhotoCostumeEntity__CreatePK(this->fields.staffPhotoId, this->fields.idx, v2);
}


System_Int32_array *StaffPhotoCostumeEntity__GetExtendOffset(
        StaffPhotoCostumeEntity_o *this,
        System_String_o *key,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 naturalAligment; // x10
  __int64 v13; // x1
  Il2CppObject *v14; // x21
  const MethodInfo_444F85C *v15; // x2
  Il2CppObject *v16; // x0

  if ( (byte_5939321 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    byte_5939321 = 1;
  }
  if ( !defaultValue )
    defaultValue = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 2);
  extendData = this->fields.extendData;
  if ( extendData
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)extendData,
         (Il2CppObject *)key,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v9 = this->fields.extendData;
    if ( !v9 )
      goto LABEL_18;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v9,
             (Il2CppObject *)key,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      return defaultValue;
    v11 = (System_Collections_Generic_List_object__o *)Item;
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      return defaultValue;
    }
    defaultValue = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 2);
    v14 = System_Collections_Generic_List_object___get_Item(
            v11,
            0,
            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v13);
    v9 = (struct System_Collections_Generic_Dictionary_string__object__o *)System_Convert__ToInt32(v14, 0);
    if ( !defaultValue )
LABEL_18:
      sub_21FFECC(v9, v8);
    if ( !LODWORD(defaultValue->max_length)
      || (v15 = (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__,
          defaultValue->m_Items[0] = (int)v9,
          v16 = System_Collections_Generic_List_object___get_Item(v11, 1, v15),
          v9 = (struct System_Collections_Generic_Dictionary_string__object__o *)System_Convert__ToInt32(v16, 0),
          (defaultValue->max_length & 0xFFFFFFFE) == 0) )
    {
      sub_21FFED4(v9);
    }
    defaultValue->m_Items[1] = (int)v9;
  }
  return defaultValue;
}


System_Int32_array *StaffPhotoCostumeEntity__GetPhotoPositionCenter(
        StaffPhotoCostumeEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5939322 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23871/*"positionCenter"*/);
    byte_5939322 = 1;
  }
  return StaffPhotoCostumeEntity__GetExtendOffset(this, (System_String_o *)StringLiteral_23871/*"positionCenter"*/, defaultValue, v3);
}


System_Int32_array *StaffPhotoCostumeEntity__GetPhotoPositionLeft(
        StaffPhotoCostumeEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5939324 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23874/*"positionLeft"*/);
    byte_5939324 = 1;
  }
  return StaffPhotoCostumeEntity__GetExtendOffset(this, (System_String_o *)StringLiteral_23874/*"positionLeft"*/, defaultValue, v3);
}


System_Int32_array *StaffPhotoCostumeEntity__GetPhotoPositionRight(
        StaffPhotoCostumeEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5939323 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23875/*"positionRight"*/);
    byte_5939323 = 1;
  }
  return StaffPhotoCostumeEntity__GetExtendOffset(this, (System_String_o *)StringLiteral_23875/*"positionRight"*/, defaultValue, v3);
}