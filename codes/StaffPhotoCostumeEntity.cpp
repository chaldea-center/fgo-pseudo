void __fastcall StaffPhotoCostumeEntity___ctor(StaffPhotoCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D0F1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1D0F1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall StaffPhotoCostumeEntity__CreatePK(
        int32_t staffPhotoId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4B1D0F0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4B1D0F0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           staffPhotoId,
           idx,
           (const MethodInfo_3018C2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall StaffPhotoCostumeEntity__CreatePrimaryKey(
        StaffPhotoCostumeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return StaffPhotoCostumeEntity__CreatePK(this->fields.staffPhotoId, this->fields.idx, v2);
}


System_Int32_array *__fastcall StaffPhotoCostumeEntity__GetExtendOffset(
        StaffPhotoCostumeEntity_o *this,
        System_String_o *key,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x0
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__c *v17; // x9
  System_Collections_Generic_List_object__o *v18; // x20
  Il2CppObject *v19; // x21
  __int64 v20; // x2
  Il2CppObject *v21; // x0

  if ( (byte_4B1D0EC & 1) == 0 )
  {
    sub_1BCAFF8(&System_Convert_TypeInfo, key);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_1BCAFF8(&int___TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object__get_Item__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_object__TypeInfo, v11);
    byte_4B1D0EC = 1;
  }
  if ( !defaultValue )
    defaultValue = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 2LL);
  extendData = this->fields.extendData;
  if ( extendData
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)extendData,
         (Il2CppObject *)key,
         (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v14 = this->fields.extendData;
    if ( !v14 )
      goto LABEL_22;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v14,
             (Il2CppObject *)key,
             (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      return defaultValue;
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low )
      return defaultValue;
    v17 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1];
    v18 = v17 == System_Collections_Generic_List_object__TypeInfo
        ? (System_Collections_Generic_List_object__o *)Item
        : 0LL;
    if ( v17 != System_Collections_Generic_List_object__TypeInfo )
      return defaultValue;
    v14 = (struct System_Collections_Generic_Dictionary_string__object__o *)sub_1BCB0A0(int___TypeInfo, 2LL);
    if ( !v18 )
      goto LABEL_22;
    defaultValue = (System_Int32_array *)v14;
    v19 = System_Collections_Generic_List_object___get_Item(
            v18,
            0,
            (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v14 = (struct System_Collections_Generic_Dictionary_string__object__o *)System_Convert__ToInt32(v19, 0LL);
    if ( !defaultValue )
LABEL_22:
      sub_1BCB254(v14, v13);
    if ( !defaultValue->max_length
      || (defaultValue->m_Items[1] = (int)v14,
          v21 = System_Collections_Generic_List_object___get_Item(
                  v18,
                  1,
                  (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_object__get_Item__),
          v14 = (struct System_Collections_Generic_Dictionary_string__object__o *)System_Convert__ToInt32(v21, 0LL),
          defaultValue->max_length <= 1) )
    {
      sub_1BCB25C(v14, v13, v20);
    }
    defaultValue->m_Items[2] = (int)v14;
  }
  return defaultValue;
}


System_Int32_array *__fastcall StaffPhotoCostumeEntity__GetPhotoPositionCenter(
        StaffPhotoCostumeEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B1D0ED & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22533/*"positionCenter"*/, defaultValue);
    byte_4B1D0ED = 1;
  }
  return StaffPhotoCostumeEntity__GetExtendOffset(this, (System_String_o *)StringLiteral_22533/*"positionCenter"*/, defaultValue, v3);
}


System_Int32_array *__fastcall StaffPhotoCostumeEntity__GetPhotoPositionLeft(
        StaffPhotoCostumeEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B1D0EF & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22536/*"positionLeft"*/, defaultValue);
    byte_4B1D0EF = 1;
  }
  return StaffPhotoCostumeEntity__GetExtendOffset(this, (System_String_o *)StringLiteral_22536/*"positionLeft"*/, defaultValue, v3);
}


System_Int32_array *__fastcall StaffPhotoCostumeEntity__GetPhotoPositionRight(
        StaffPhotoCostumeEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B1D0EE & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22537/*"positionRight"*/, defaultValue);
    byte_4B1D0EE = 1;
  }
  return StaffPhotoCostumeEntity__GetExtendOffset(this, (System_String_o *)StringLiteral_22537/*"positionRight"*/, defaultValue, v3);
}