void __fastcall UserBoxGachaEntity___ctor(UserBoxGachaEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16DCB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16DCB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserBoxGachaEntity__CreatePK(int64_t userId, int32_t boxGachaId, const MethodInfo *method)
{
  if ( (byte_4B16DCA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&boxGachaId, method);
    byte_4B16DCA = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           boxGachaId,
           (const MethodInfo_2F10FBC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 klass_low; // x1
  System_Collections_Generic_Dictionary_object__object__o *v24; // x0
  Il2CppObject *Item; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v30; // x19
  System_Collections_Generic_List_int__o *v31; // x20
  int32_t v32; // w21
  __int64 v33; // x2
  __int64 v34; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  UserBoxGachaEntity_o *v39; // x0
  const MethodInfo *v40; // x1

  if ( (byte_4B16DC9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    sub_1BCA7E0(&long_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Item__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_23120/*"replaceGiftIdList"*/, v20, v21);
    byte_4B16DC9 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23120/*"replaceGiftIdList"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v24 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !v24
    || ((Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v24,
                  (Il2CppObject *)StringLiteral_23120/*"replaceGiftIdList"*/,
                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) != 0LL
     && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
      ? ((System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo
       ? (v30 = 0LL)
       : (v30 = (System_Collections_Generic_List_object__o *)Item))
      : (v30 = 0LL),
        v31 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v26,
                                                          v27,
                                                          v28),
        System_Collections_Generic_List_int____ctor(
          v31,
          (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__),
        !v30) )
  {
LABEL_25:
    sub_1BCAA3C(v24, klass_low);
  }
  if ( v30->fields._size < 1 )
    return v31;
  v32 = 0;
  while ( 1 )
  {
    v24 = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       v30,
                                                                       v32,
                                                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !v31 || !v24 )
      goto LABEL_25;
    if ( v24->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v24 = (System_Collections_Generic_Dictionary_object__object__o *)j_il2cpp_object_unbox_0(
                                                                       v24,
                                                                       long_TypeInfo,
                                                                       v33,
                                                                       v34);
    klass_low = LODWORD(v24->klass);
    items = v31->fields._items;
    v36 = Method_System_Collections_Generic_List_int__Add__;
    ++v31->fields._version;
    if ( !items )
      goto LABEL_25;
    size = v31->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v31,
        klass_low,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v31->fields._size = size + 1;
      items->m_Items[size + 1] = klass_low;
    }
    if ( ++v32 >= v30->fields._size )
      return v31;
  }
  sub_1BCACFC(v24);
  return (System_Collections_Generic_List_int__o *)UserBoxGachaEntity__CreatePrimaryKey(v39, v40);
}