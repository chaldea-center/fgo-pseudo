void __fastcall UserBoxGachaEntity___ctor(UserBoxGachaEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA15E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA15E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserBoxGachaEntity__CreatePK(int64_t userId, int32_t boxGachaId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EA15D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__int___, boxGachaId, (_DWORD)method, v3);
    byte_42EA15D = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           boxGachaId,
           (const MethodInfo_1AE3148 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v33; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v34; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v36; // x10
  UnityEngine_Purchasing_IStoreExtension_o *v37; // x20
  System_Collections_Generic_List_int__o *v38; // x19
  int monitor; // w8
  unsigned int v40; // w21
  int32_t *v41; // x0
  UserBoxGachaEntity_o *v43; // x0
  const MethodInfo *v44; // x1

  if ( (byte_42EA15C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    sub_B5D5C4(&long_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__get_Item__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_22069/*"replaceGiftIdList"*/, v29, v30, v31);
    byte_42EA15C = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22069/*"replaceGiftIdList"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v34 = this->fields.script;
  if ( !v34
    || ((Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v34,
                  (System_Type_o *)StringLiteral_22069/*"replaceGiftIdList"*/,
                  (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) != 0LL
     && (v36 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
         *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v36)
      ? ((System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v36 - 1] != System_Collections_Generic_List_object__TypeInfo
       ? (v37 = 0LL)
       : (v37 = Item))
      : (v37 = 0LL),
        v38 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v38,
          (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224),
        !v37) )
  {
LABEL_23:
    sub_B5D69C(v34, v33);
  }
  monitor = (int)v37[1].monitor;
  if ( monitor < 1 )
    return v38;
  v40 = 0;
  while ( 1 )
  {
    if ( monitor <= v40 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( !v38 )
      goto LABEL_23;
    v34 = (struct System_Collections_Generic_Dictionary_string__object__o *)*((_QWORD *)&v37[1].klass->_1.byval_arg.data
                                                                            + (int)v40);
    if ( !v34 )
      goto LABEL_23;
    if ( v34->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v41 = (int32_t *)j_il2cpp_object_unbox_0(v34);
    System_Collections_Generic_List_int___Add(
      v38,
      *v41,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    monitor = (int)v37[1].monitor;
    if ( (int)++v40 >= monitor )
      return v38;
  }
  v43 = (UserBoxGachaEntity_o *)sub_B5D990(v34);
  return (System_Collections_Generic_List_int__o *)UserBoxGachaEntity__CreatePrimaryKey(v43, v44);
}