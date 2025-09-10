void StaffPhotoCostumeEntity___ctor(StaffPhotoCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27EE0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27EE0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *StaffPhotoCostumeEntity__CreatePK(int32_t staffPhotoId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4C27EDF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C27EDF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           staffPhotoId,
           idx,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__c *v12; // x9
  System_Collections_Generic_List_object__o *v13; // x20
  Il2CppObject *v14; // x21
  __int64 v15; // x2
  Il2CppObject *v16; // x0

  if ( (byte_4C27EDB & 1) == 0 )
  {
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    byte_4C27EDB = 1;
  }
  if ( !defaultValue )
    defaultValue = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 2);
  extendData = this->fields.extendData;
  if ( extendData
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)extendData,
         (Il2CppObject *)key,
         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v9 = this->fields.extendData;
    if ( !v9 )
      goto LABEL_22;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v9,
             (Il2CppObject *)key,
             (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      return defaultValue;
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment )
      return defaultValue;
    v12 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1];
    v13 = v12 == System_Collections_Generic_List_object__TypeInfo
        ? (System_Collections_Generic_List_object__o *)Item
        : 0LL;
    if ( v12 != System_Collections_Generic_List_object__TypeInfo )
      return defaultValue;
    v9 = (struct System_Collections_Generic_Dictionary_string__object__o *)sub_1C2D538(int___TypeInfo, 2);
    if ( !v13 )
      goto LABEL_22;
    defaultValue = (System_Int32_array *)v9;
    v14 = System_Collections_Generic_List_object___get_Item(
            v13,
            0,
            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v9 = (struct System_Collections_Generic_Dictionary_string__object__o *)System_Convert__ToInt32(v14, 0);
    if ( !defaultValue )
LABEL_22:
      sub_1C2D6EC(v9, v8);
    if ( !LODWORD(defaultValue->max_length)
      || (defaultValue->m_Items[0] = (int)v9,
          v16 = System_Collections_Generic_List_object___get_Item(
                  v13,
                  1,
                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_object__get_Item__),
          v9 = (struct System_Collections_Generic_Dictionary_string__object__o *)System_Convert__ToInt32(v16, 0),
          LODWORD(defaultValue->max_length) <= 1) )
    {
      sub_1C2D6F4(v9, v8, v15);
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

  if ( (byte_4C27EDC & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22720/*"positionCenter"*/);
    byte_4C27EDC = 1;
  }
  return StaffPhotoCostumeEntity__GetExtendOffset(this, (System_String_o *)StringLiteral_22720/*"positionCenter"*/, defaultValue, v3);
}


System_Int32_array *StaffPhotoCostumeEntity__GetPhotoPositionLeft(
        StaffPhotoCostumeEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C27EDE & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22723/*"positionLeft"*/);
    byte_4C27EDE = 1;
  }
  return StaffPhotoCostumeEntity__GetExtendOffset(this, (System_String_o *)StringLiteral_22723/*"positionLeft"*/, defaultValue, v3);
}


System_Int32_array *StaffPhotoCostumeEntity__GetPhotoPositionRight(
        StaffPhotoCostumeEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C27EDD & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22724/*"positionRight"*/);
    byte_4C27EDD = 1;
  }
  return StaffPhotoCostumeEntity__GetExtendOffset(this, (System_String_o *)StringLiteral_22724/*"positionRight"*/, defaultValue, v3);
}