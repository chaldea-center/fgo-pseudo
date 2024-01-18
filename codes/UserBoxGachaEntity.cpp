void __fastcall UserBoxGachaEntity___ctor(UserBoxGachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188A96 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188A96 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserBoxGachaEntity__CreatePK(int64_t userId, int32_t boxGachaId, const MethodInfo *method)
{
  if ( (byte_4188A95 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&boxGachaId);
    byte_4188A95 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           boxGachaId,
           (const MethodInfo_1732A38 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v16; // x10
  UnityEngine_Purchasing_IStoreExtension_o *v17; // x20
  System_Collections_Generic_List_int__o *v18; // x19
  int monitor; // w8
  unsigned int v20; // w21
  int32_t *v21; // x0
  UserBoxGachaEntity_o *v23; // x0
  const MethodInfo *v24; // x1

  if ( (byte_4188A94 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B2C35C(&long_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Item__, v8);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_B2C35C(&StringLiteral_21774/*"replaceGiftIdList"*/, v11);
    byte_4188A94 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21774/*"replaceGiftIdList"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v14 = this->fields.script;
  if ( !v14
    || ((Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v14,
                  (System_Type_o *)StringLiteral_21774/*"replaceGiftIdList"*/,
                  (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) != 0LL
     && (v16 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
         *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v16)
      ? ((System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v16 - 1] != System_Collections_Generic_List_object__TypeInfo
       ? (v17 = 0LL)
       : (v17 = Item))
      : (v17 = 0LL),
        v18 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v18,
          (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__),
        !v17) )
  {
LABEL_23:
    sub_B2C434(v14, v13);
  }
  monitor = (int)v17[1].monitor;
  if ( monitor < 1 )
    return v18;
  v20 = 0;
  while ( 1 )
  {
    if ( monitor <= v20 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( !v18 )
      goto LABEL_23;
    v14 = (struct System_Collections_Generic_Dictionary_string__object__o *)*((_QWORD *)&v17[1].klass->_1.byval_arg.data
                                                                            + (int)v20);
    if ( !v14 )
      goto LABEL_23;
    if ( v14->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v21 = (int32_t *)j_il2cpp_object_unbox_0(v14);
    System_Collections_Generic_List_int___Add(
      v18,
      *v21,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    monitor = (int)v17[1].monitor;
    if ( (int)++v20 >= monitor )
      return v18;
  }
  v23 = (UserBoxGachaEntity_o *)sub_B2C728(v14);
  return (System_Collections_Generic_List_int__o *)UserBoxGachaEntity__CreatePrimaryKey(v23, v24);
}