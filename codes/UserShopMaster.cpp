void __fastcall UserShopMaster___ctor(UserShopMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B170E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__, method, v2);
    byte_4B170E6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    99,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserShopEntity_o *__fastcall UserShopMaster__GetEntity(
        UserShopMaster_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B170E4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__, userId, *(_QWORD *)&shopId);
    byte_4B170E4 = 1;
  }
  PK = (Il2CppObject *)UserShopEntity__CreatePK(userId, shopId, 0LL);
  return (UserShopEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_31B3198 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserShopEntity_o *__fastcall UserShopMaster__GetEntityDefinitely(
        UserShopMaster_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v11; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v13; // x23
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v20; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v21; // x20
  __int64 v22; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v23; // x10
  __int64 v24; // x0
  UserShopEntity_o *v25; // x19
  UserShopEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B170E7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      userId,
      *(_QWORD *)&shopId);
    sub_1BCA7E0(&UserShopEntity_TypeInfo, v7, v8);
    byte_4B170E7 = 1;
  }
  PK = UserShopEntity__CreatePK(userId, shopId, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_25;
  klass = lookup->klass;
  v13 = lookup;
  v14 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v13,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v25 = (UserShopEntity_o *)sub_1BCAA2C(UserShopEntity_TypeInfo, v17, v18, v19);
    UserShopEntity___ctor_41009324(v25, userId, shopId, 0LL);
    return v25;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_25:
    sub_1BCAA3C(lookup, v11);
  v20 = lookup->klass;
  v21 = lookup;
  v22 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v23 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v23 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v22;
      v23 += 2;
      if ( !v22 )
        goto LABEL_16;
    }
    v24 = (__int64)&v20->vtable[*(_DWORD *)v23 + 2].method;
  }
  else
  {
LABEL_16:
    v24 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  result = (UserShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v24)(
                                 v21,
                                 PK,
                                 *(_QWORD *)(v24 + 8));
  if ( result )
  {
    methodPtr_low = LOBYTE(UserShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (UserShopEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != UserShopEntity_TypeInfo )
        return 0LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


bool __fastcall UserShopMaster__TryGetEntity(
        UserShopMaster_o *this,
        UserShopEntity_o **entity,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B170E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__, entity, userId);
    byte_4B170E5 = 1;
  }
  PK = (Il2CppObject *)UserShopEntity__CreatePK(userId, shopId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__);
}


int32_t __fastcall UserShopMaster__UpdateTimeSort(
        UserShopMaster_o *this,
        UserShopEntity_o *x,
        UserShopEntity_o *y,
        const MethodInfo *method)
{
  int64_t updatedAt; // x8
  int64_t v5; // x9

  if ( !x || !y )
    sub_1BCAA3C(this, x);
  updatedAt = x->fields.updatedAt;
  v5 = y->fields.updatedAt;
  if ( updatedAt < v5 )
    return 1;
  if ( updatedAt <= v5 )
    return x->fields.shopId - y->fields.shopId;
  return -1;
}


UserShopEntity_o *__fastcall UserShopMaster__getLastPurchaseEntity(UserShopMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  Il2CppObject *v25; // x1
  System_Collections_ObjectModel_Collection_T__o *Item; // x0
  int32_t Count; // w0
  __int64 v28; // x2
  __int64 v29; // x3
  int32_t v30; // w21
  int32_t v31; // w22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Comparison_T__o *v43; // x21

  if ( (byte_4B170E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&System_Comparison_UserShopEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserShopEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserShopEntity__Sort__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserShopEntity___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserShopEntity__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_UserShopEntity__TypeInfo, v17, v18);
    sub_1BCA7E0(&UserShopEntity_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_UserShopMaster_UpdateTimeSort__, v21, v22);
    byte_4B170E8 = 1;
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserShopEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
  {
    return 0LL;
  }
  Item = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Item )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            Item,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v30 = Count;
    v31 = 0;
    while ( 1 )
    {
      Item = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Item )
        break;
      Item = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 Item,
                                                                 v31,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v23 )
        break;
      if ( Item
        && (methodPtr_low = LOBYTE(UserShopEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v25 = (UserShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserShopEntity_TypeInfo
            ? (Il2CppObject *)Item
            : 0LL;
      }
      else
      {
        v25 = 0LL;
      }
      items = v23->fields._items;
      v40 = Method_System_Collections_Generic_List_UserShopEntity__Add__;
      ++v23->fields._version;
      if ( !items )
        break;
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          v25,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v42[4] = (Il2CppClass *)v25;
        sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)v25, v32, v33, v34, v35, v36, v37);
      }
      if ( v30 == ++v31 )
        goto LABEL_21;
    }
LABEL_24:
    sub_1BCAA3C(Item, v25);
  }
LABEL_21:
  v43 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_UserShopEntity__TypeInfo, v25, v28, v29);
  System_Comparison_object____ctor(v43, (Il2CppObject *)this, Method_UserShopMaster_UpdateTimeSort__, 0LL);
  if ( !v23 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_56244000(
    v23,
    v43,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_UserShopEntity__Sort__);
  return (UserShopEntity_o *)System_Collections_Generic_List_object___get_Item(
                               v23,
                               0,
                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserShopEntity__get_Item__);
}