void StaffPhotoCostumeEntity___ctor(StaffPhotoCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C43BDC & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_string___ctor__);
    byte_4C43BDC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_339EC34 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *StaffPhotoCostumeEntity__CreatePK(int32_t staffPhotoId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4C43BDB & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C43BDB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           staffPhotoId,
           idx,
           (const MethodInfo_30E5DE0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x0
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__c *v11; // x9
  System_Collections_Generic_List_object__o *v12; // x20
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x0

  if ( (byte_4C43BD7 & 1) == 0 )
  {
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_object__TypeInfo);
    byte_4C43BD7 = 1;
  }
  if ( !defaultValue )
    defaultValue = (System_Int32_array *)sub_1C37100(int___TypeInfo, 2);
  extendData = this->fields.extendData;
  if ( extendData
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)extendData,
         (Il2CppObject *)key,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v8 = this->fields.extendData;
    if ( !v8 )
      goto LABEL_22;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v8,
             (Il2CppObject *)key,
             (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      return defaultValue;
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment )
      return defaultValue;
    v11 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1];
    v12 = v11 == System_Collections_Generic_List_object__TypeInfo
        ? (System_Collections_Generic_List_object__o *)Item
        : 0LL;
    if ( v11 != System_Collections_Generic_List_object__TypeInfo )
      return defaultValue;
    v8 = (struct System_Collections_Generic_Dictionary_string__object__o *)sub_1C37100(int___TypeInfo, 2);
    if ( !v12 )
      goto LABEL_22;
    defaultValue = (System_Int32_array *)v8;
    v13 = System_Collections_Generic_List_object___get_Item(
            v12,
            0,
            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v8 = (struct System_Collections_Generic_Dictionary_string__object__o *)System_Convert__ToInt32(v13, 0);
    if ( !defaultValue )
LABEL_22:
      sub_1C372B4(v8);
    if ( !LODWORD(defaultValue->max_length)
      || (defaultValue->m_Items[0] = (int)v8,
          v14 = System_Collections_Generic_List_object___get_Item(
                  v12,
                  1,
                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_object__get_Item__),
          v8 = (struct System_Collections_Generic_Dictionary_string__object__o *)System_Convert__ToInt32(v14, 0),
          LODWORD(defaultValue->max_length) <= 1) )
    {
      sub_1C372BC(v8);
    }
    defaultValue->m_Items[1] = (int)v8;
  }
  return defaultValue;
}


System_Int32_array *StaffPhotoCostumeEntity__GetPhotoPositionCenter(
        StaffPhotoCostumeEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C43BD8 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22741/*"positionCenter"*/);
    byte_4C43BD8 = 1;
  }
  return StaffPhotoCostumeEntity__GetExtendOffset(this, (System_String_o *)StringLiteral_22741/*"positionCenter"*/, defaultValue, v3);
}


System_Int32_array *StaffPhotoCostumeEntity__GetPhotoPositionLeft(
        StaffPhotoCostumeEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C43BDA & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22744/*"positionLeft"*/);
    byte_4C43BDA = 1;
  }
  return StaffPhotoCostumeEntity__GetExtendOffset(this, (System_String_o *)StringLiteral_22744/*"positionLeft"*/, defaultValue, v3);
}


System_Int32_array *StaffPhotoCostumeEntity__GetPhotoPositionRight(
        StaffPhotoCostumeEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C43BD9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22745/*"positionRight"*/);
    byte_4C43BD9 = 1;
  }
  return StaffPhotoCostumeEntity__GetExtendOffset(this, (System_String_o *)StringLiteral_22745/*"positionRight"*/, defaultValue, v3);
}