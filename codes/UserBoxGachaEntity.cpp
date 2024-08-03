void __fastcall UserBoxGachaEntity___ctor(UserBoxGachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FCEC3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FCEC3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserBoxGachaEntity__CreatePK(int64_t userId, int32_t boxGachaId, const MethodInfo *method)
{
  if ( (byte_49FCEC2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&boxGachaId);
    byte_49FCEC2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           boxGachaId,
           (const MethodInfo_2E37718 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  System_Collections_Generic_Dictionary_object__object__o *v13; // x0
  Il2CppObject *Item; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v18; // x19
  System_Collections_Generic_List_int__o *v19; // x20
  int32_t v20; // w21
  __int64 v21; // x2
  __int64 v22; // x3
  int32_t klass; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  UserBoxGachaEntity_o *v28; // x0
  const MethodInfo *v29; // x1

  if ( (byte_49FCEC1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B640C8(&long_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__get_Item__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_1B640C8(&StringLiteral_22781/*"replaceGiftIdList"*/, v11);
    byte_49FCEC1 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_22781/*"replaceGiftIdList"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v13 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !v13
    || ((Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v13,
                  (Il2CppObject *)StringLiteral_22781/*"replaceGiftIdList"*/,
                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) != 0LL
     && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
      ? ((System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo
       ? (v18 = 0LL)
       : (v18 = (System_Collections_Generic_List_object__o *)Item))
      : (v18 = 0LL),
        v19 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v15,
                                                          v16),
        System_Collections_Generic_List_int____ctor(
          v19,
          (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__),
        !v18) )
  {
LABEL_25:
    sub_1B64324(v13);
  }
  if ( v18->fields._size < 1 )
    return v19;
  v20 = 0;
  while ( 1 )
  {
    v13 = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       v18,
                                                                       v20,
                                                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !v19 || !v13 )
      goto LABEL_25;
    if ( v13->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v13 = (System_Collections_Generic_Dictionary_object__object__o *)j_il2cpp_object_unbox_0(
                                                                       v13,
                                                                       long_TypeInfo,
                                                                       v21,
                                                                       v22);
    klass = (int32_t)v13->klass;
    items = v19->fields._items;
    v25 = Method_System_Collections_Generic_List_int__Add__;
    ++v19->fields._version;
    if ( !items )
      goto LABEL_25;
    size = v19->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v19,
        klass,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v19->fields._size = size + 1;
      items->m_Items[size + 1] = klass;
    }
    if ( ++v20 >= v18->fields._size )
      return v19;
  }
  sub_1B645E4(v13);
  return (System_Collections_Generic_List_int__o *)UserBoxGachaEntity__CreatePrimaryKey(v28, v29);
}