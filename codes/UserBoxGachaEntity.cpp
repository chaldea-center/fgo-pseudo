void UserBoxGachaEntity___ctor(UserBoxGachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3870C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C3870C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserBoxGachaEntity__CreatePK(int64_t userId, int32_t boxGachaId, const MethodInfo *method)
{
  if ( (byte_4C3870B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4C3870B = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           boxGachaId,
           (const MethodInfo_30DB680 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  System_Collections_Generic_Dictionary_object__object__o *v4; // x0
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *v7; // x19
  System_Collections_Generic_List_int__o *v8; // x20
  int32_t v9; // w21
  __int64 v10; // x2
  __int64 v11; // x3
  int32_t klass; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  UserBoxGachaEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_4C3870A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&StringLiteral_23044/*"replaceGiftIdList"*/);
    byte_4C3870A = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23044/*"replaceGiftIdList"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !v4
    || ((Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v4,
                  (Il2CppObject *)StringLiteral_23044/*"replaceGiftIdList"*/,
                  (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) != 0
     && (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
         Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
      ? ((System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo
       ? (v7 = 0)
       : (v7 = (System_Collections_Generic_List_object__o *)Item))
      : (v7 = 0),
        v8 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v8,
          (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__),
        !v7) )
  {
LABEL_25:
    sub_1C32E7C(v4);
  }
  if ( v7->fields._size < 1 )
    return v8;
  v9 = 0;
  while ( 1 )
  {
    v4 = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v7,
                                                                      v9,
                                                                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !v8 || !v4 )
      goto LABEL_25;
    if ( v4->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v4 = (System_Collections_Generic_Dictionary_object__object__o *)j_il2cpp_object_unbox_0(v4, long_TypeInfo, v10, v11);
    klass = (int32_t)v4->klass;
    items = v8->fields._items;
    v14 = Method_System_Collections_Generic_List_int__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_25;
    size = v8->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v8,
        klass,
        *(const MethodInfo_377B798 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v8->fields._size = size + 1;
      items->m_Items[size] = klass;
    }
    if ( ++v9 >= v7->fields._size )
      return v8;
  }
  sub_1C3313C(v4);
  return (System_Collections_Generic_List_int__o *)UserBoxGachaEntity__CreatePrimaryKey(v17, v18);
}