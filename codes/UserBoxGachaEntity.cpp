void UserBoxGachaEntity___ctor(UserBoxGachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D5E7 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2D5E7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserBoxGachaEntity__CreatePK(int64_t userId, int32_t boxGachaId, const MethodInfo *method)
{
  if ( (byte_4D2D5E6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4D2D5E6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           boxGachaId,
           (const MethodInfo_319A3C4 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserBoxGachaEntity__CreatePrimaryKey(UserBoxGachaEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserBoxGachaEntity__CreatePK(this->fields.userId, this->fields.boxGachaId, v2);
}


System_Collections_Generic_List_int__o *UserBoxGachaEntity__GetReplaceGiftIdList(
        UserBoxGachaEntity_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 klass_low; // x1
  System_Collections_Generic_Dictionary_object__object__o *v5; // x0
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *v8; // x19
  System_Collections_Generic_List_int__o *v9; // x20
  int32_t v10; // w21
  __int64 v11; // x2
  __int64 v12; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  UserBoxGachaEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_4D2D5E5 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C94098(&StringLiteral_23278/*"replaceGiftIdList"*/);
    byte_4D2D5E5 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23278/*"replaceGiftIdList"*/,
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !v5
    || ((Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v5,
                  (Il2CppObject *)StringLiteral_23278/*"replaceGiftIdList"*/,
                  (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) != 0
     && (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
         Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
      ? ((System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo
       ? (v8 = 0)
       : (v8 = (System_Collections_Generic_List_object__o *)Item))
      : (v8 = 0),
        v9 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v9,
          (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__),
        !v8) )
  {
LABEL_25:
    sub_1C942F0(v5, klass_low);
  }
  if ( v8->fields._size < 1 )
    return v9;
  v10 = 0;
  while ( 1 )
  {
    v5 = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v8,
                                                                      v10,
                                                                      (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !v9 || !v5 )
      goto LABEL_25;
    if ( v5->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v5 = (System_Collections_Generic_Dictionary_object__object__o *)j_il2cpp_object_unbox_0(v5, long_TypeInfo, v11, v12);
    klass_low = LODWORD(v5->klass);
    items = v9->fields._items;
    v14 = Method_System_Collections_Generic_List_int__Add__;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_25;
    size = v9->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v9,
        klass_low,
        *(const MethodInfo_384DE10 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v9->fields._size = size + 1;
      items->m_Items[size] = klass_low;
    }
    if ( ++v10 >= v8->fields._size )
      return v9;
  }
  sub_1C9468C(v5);
  return (System_Collections_Generic_List_int__o *)UserBoxGachaEntity__CreatePrimaryKey(v17, v18);
}