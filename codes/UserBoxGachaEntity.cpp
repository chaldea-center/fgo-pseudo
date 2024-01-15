void __fastcall UserBoxGachaEntity___ctor(UserBoxGachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FAAB8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FAAB8 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserBoxGachaEntity__CreatePK(int64_t userId, int32_t boxGachaId, const MethodInfo *method)
{
  if ( (byte_40FAAB7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&boxGachaId);
    byte_40FAAB7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           boxGachaId,
           (const MethodInfo_18C22D0 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x10
  UnityEngine_Purchasing_IStoreExtension_o *v20; // x20
  System_Collections_Generic_List_int__o *v21; // x19
  int monitor; // w8
  unsigned int v23; // w21
  __int64 v24; // x0
  int32_t *v25; // x0
  UserBoxGachaEntity_o *v27; // x0
  const MethodInfo *v28; // x1

  if ( (byte_40FAAB6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B16FFC(&long_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__get_Item__, v8);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_B16FFC(&StringLiteral_21682/*"replaceGiftIdList"*/, v11);
    byte_40FAAB6 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21682/*"replaceGiftIdList"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v13 = this->fields.script;
  if ( !v13
    || ((Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v13,
                  (System_Type_o *)StringLiteral_21682/*"replaceGiftIdList"*/,
                  (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) != 0LL
     && (v19 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
         *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19)
      ? ((System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v19 - 1] != System_Collections_Generic_List_object__TypeInfo
       ? (v20 = 0LL)
       : (v20 = Item))
      : (v20 = 0LL),
        v21 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v15,
                                                          v16,
                                                          v17,
                                                          v18),
        System_Collections_Generic_List_int____ctor(
          v21,
          (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__),
        !v20) )
  {
LABEL_23:
    sub_B170D4();
  }
  monitor = (int)v20[1].monitor;
  if ( monitor < 1 )
    return v21;
  v23 = 0;
  while ( 1 )
  {
    if ( monitor <= v23 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( !v21 )
      goto LABEL_23;
    v24 = *((_QWORD *)&v20[1].klass->_1.byval_arg.data + (int)v23);
    if ( !v24 )
      goto LABEL_23;
    if ( *(Il2CppClass **)(*(_QWORD *)v24 + 64LL) != long_TypeInfo->_1.element_class )
      break;
    v25 = (int32_t *)j_il2cpp_object_unbox_0(v24);
    System_Collections_Generic_List_int___Add(
      v21,
      *v25,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    monitor = (int)v20[1].monitor;
    if ( (int)++v23 >= monitor )
      return v21;
  }
  v27 = (UserBoxGachaEntity_o *)sub_B173C8(v24);
  return (System_Collections_Generic_List_int__o *)UserBoxGachaEntity__CreatePrimaryKey(v27, v28);
}