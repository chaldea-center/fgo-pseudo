void __fastcall UserBoxGachaEntity___ctor(UserBoxGachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438CAB0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438CAB0 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserBoxGachaEntity__CreatePK(int64_t userId, int32_t boxGachaId, const MethodInfo *method)
{
  if ( (byte_438CAAF & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_438CAAF = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           boxGachaId,
           (const MethodInfo_1D172EC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserBoxGachaEntity__CreatePrimaryKey(UserBoxGachaEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserBoxGachaEntity__CreatePK(this->fields.userId, this->fields.boxGachaId, v2);
}


System_Collections_Generic_List_int__o *__fastcall UserBoxGachaEntity__GetReplaceGiftIdList(
        UserBoxGachaEntity_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v5; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v7; // x10
  UnityEngine_Purchasing_IStoreExtension_o *v8; // x20
  System_Collections_Generic_List_int__o *v9; // x19
  int monitor; // w8
  unsigned int v11; // w21
  int32_t *v12; // x0
  UserBoxGachaEntity_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_438CAAE & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&StringLiteral_22238/*"replaceGiftIdList"*/);
    byte_438CAAE = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22238/*"replaceGiftIdList"*/,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v5 = this->fields.script;
  if ( !v5
    || ((Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v5,
                  (System_Type_o *)StringLiteral_22238/*"replaceGiftIdList"*/,
                  (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) != 0LL
     && (v7 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
         *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v7)
      ? ((System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v7 - 1] != System_Collections_Generic_List_object__TypeInfo
       ? (v8 = 0LL)
       : (v8 = Item))
      : (v8 = 0LL),
        v9 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v9,
          (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304),
        !v8) )
  {
LABEL_23:
    sub_B7769C(v5, v4);
  }
  monitor = (int)v8[1].monitor;
  if ( monitor < 1 )
    return v9;
  v11 = 0;
  while ( 1 )
  {
    if ( monitor <= v11 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    if ( !v9 )
      goto LABEL_23;
    v5 = (struct System_Collections_Generic_Dictionary_string__object__o *)*((_QWORD *)&v8[1].klass->_1.byval_arg.data
                                                                           + (int)v11);
    if ( !v5 )
      goto LABEL_23;
    if ( v5->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v12 = (int32_t *)j_il2cpp_object_unbox_0(v5);
    System_Collections_Generic_List_int___Add(
      v9,
      *v12,
      (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
    monitor = (int)v8[1].monitor;
    if ( (int)++v11 >= monitor )
      return v9;
  }
  v14 = (UserBoxGachaEntity_o *)sub_B77990(v5);
  return (System_Collections_Generic_List_int__o *)UserBoxGachaEntity__CreatePrimaryKey(v14, v15);
}