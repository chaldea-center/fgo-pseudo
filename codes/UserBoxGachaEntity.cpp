void __fastcall UserBoxGachaEntity___ctor(UserBoxGachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4215B57 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4215B57 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserBoxGachaEntity__CreatePK(int64_t userId, int32_t boxGachaId, const MethodInfo *method)
{
  if ( (byte_4215B56 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&boxGachaId);
    byte_4215B56 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           boxGachaId,
           (const MethodInfo_171354C *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v13; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x10
  UnityEngine_Purchasing_IStoreExtension_o *v18; // x20
  System_Collections_Generic_List_int__o *v19; // x19
  int monitor; // w8
  unsigned int v21; // w21
  int32_t *v22; // x0
  UserBoxGachaEntity_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_4215B55 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B0D8A4(&long_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__get_Item__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_21845/*"replaceGiftIdList"*/, v11);
    byte_4215B55 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21845/*"replaceGiftIdList"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v13 = this->fields.script;
  if ( !v13
    || ((Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v13,
                  (System_Type_o *)StringLiteral_21845/*"replaceGiftIdList"*/,
                  (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) != 0LL
     && (v17 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
         *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17)
      ? ((System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v17 - 1] != System_Collections_Generic_List_object__TypeInfo
       ? (v18 = 0LL)
       : (v18 = Item))
      : (v18 = 0LL),
        v19 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v15,
                                                          v16),
        System_Collections_Generic_List_int____ctor(
          v19,
          (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__),
        !v18) )
  {
LABEL_23:
    sub_B0D97C(v13);
  }
  monitor = (int)v18[1].monitor;
  if ( monitor < 1 )
    return v19;
  v21 = 0;
  while ( 1 )
  {
    if ( monitor <= v21 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( !v19 )
      goto LABEL_23;
    v13 = (struct System_Collections_Generic_Dictionary_string__object__o *)*((_QWORD *)&v18[1].klass->_1.byval_arg.data
                                                                            + (int)v21);
    if ( !v13 )
      goto LABEL_23;
    if ( v13->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v22 = (int32_t *)j_il2cpp_object_unbox_0(v13);
    System_Collections_Generic_List_int___Add(
      v19,
      *v22,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    monitor = (int)v18[1].monitor;
    if ( (int)++v21 >= monitor )
      return v19;
  }
  v24 = (UserBoxGachaEntity_o *)sub_B0DC70(v13);
  return (System_Collections_Generic_List_int__o *)UserBoxGachaEntity__CreatePrimaryKey(v24, v25);
}