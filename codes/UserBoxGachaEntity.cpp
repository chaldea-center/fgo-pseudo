void __fastcall UserBoxGachaEntity___ctor(UserBoxGachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_48E3260 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataEntityBase_string___ctor__, method);
    byte_48E3260 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_2FE68C4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserBoxGachaEntity__CreatePK(int64_t userId, int32_t boxGachaId, const MethodInfo *method)
{
  if ( (byte_48E325F & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&boxGachaId);
    byte_48E325F = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           boxGachaId,
           (const MethodInfo_2D60F3C *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  __int64 klass_low; // x1
  System_Collections_Generic_Dictionary_object__object__o *v14; // x0
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v17; // x19
  System_Collections_Generic_List_int__o *v18; // x20
  int32_t v19; // w21
  __int64 v20; // x2
  __int64 v21; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  UserBoxGachaEntity_o *v26; // x0
  const MethodInfo *v27; // x1

  if ( (byte_48E325E & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B00CCC(&long_TypeInfo, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_object__get_Count__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_object__get_Item__, v8);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B00CCC(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_1B00CCC(&StringLiteral_22561/*"replaceGiftIdList"*/, v11);
    byte_48E325E = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_22561/*"replaceGiftIdList"*/,
          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v14 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !v14
    || ((Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v14,
                  (Il2CppObject *)StringLiteral_22561/*"replaceGiftIdList"*/,
                  (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) != 0LL
     && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
      ? ((System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo
       ? (v17 = 0LL)
       : (v17 = (System_Collections_Generic_List_object__o *)Item))
      : (v17 = 0LL),
        v18 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v18,
          (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__),
        !v17) )
  {
LABEL_25:
    sub_1B00F28(v14, klass_low);
  }
  if ( v17->fields._size < 1 )
    return v18;
  v19 = 0;
  while ( 1 )
  {
    v14 = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       v17,
                                                                       v19,
                                                                       (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !v18 || !v14 )
      goto LABEL_25;
    if ( v14->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v14 = (System_Collections_Generic_Dictionary_object__object__o *)j_il2cpp_object_unbox_0(
                                                                       v14,
                                                                       long_TypeInfo,
                                                                       v20,
                                                                       v21);
    klass_low = LODWORD(v14->klass);
    items = v18->fields._items;
    v23 = Method_System_Collections_Generic_List_int__Add__;
    ++v18->fields._version;
    if ( !items )
      goto LABEL_25;
    size = v18->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v18,
        klass_low,
        *(const MethodInfo_33A49AC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v18->fields._size = size + 1;
      items->m_Items[size + 1] = klass_low;
    }
    if ( ++v19 >= v17->fields._size )
      return v18;
  }
  sub_1B011E8(v14);
  return (System_Collections_Generic_List_int__o *)UserBoxGachaEntity__CreatePrimaryKey(v26, v27);
}