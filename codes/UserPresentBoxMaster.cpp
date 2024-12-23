void __fastcall UserPresentBoxMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B67975 & 1) == 0 )
  {
    sub_1BE4ACC(&UserPresentBoxMaster_TypeInfo, v1);
    byte_4B67975 = 1;
  }
  *UserPresentBoxMaster_TypeInfo->static_fields = (struct UserPresentBoxMaster_StaticFields)xmmword_BE20E0;
}


void __fastcall UserPresentBoxMaster___ctor(UserPresentBoxMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B6796D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string___ctor__, method);
    byte_4B6796D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    70,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserPresentBoxMaster__GetCount(
        UserPresentBoxMaster_o *this,
        int32_t type,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  UserPresentBoxEntity_c *v13; // x1
  System_Collections_Generic_IEnumerator_T__o *v14; // x19
  int32_t v15; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0

  if ( (byte_4B67971 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BE4ACC(&UserPresentBoxEntity_TypeInfo, v10);
    byte_4B67971 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v14 = Enumerator;
  v15 = 0;
  while ( 1 )
  {
    if ( !v14 )
      goto LABEL_34;
    klass = v14->klass;
    v17 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C36AAC(v14, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v14,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = v14->klass;
    v21 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_17;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_17:
      v23 = sub_1C36AAC(v14, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                                                  v14,
                                                                  *(_QWORD *)(v23 + 8));
    if ( !Enumerator )
      sub_1BE4D28(0LL, v24);
    v13 = UserPresentBoxEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserPresentBoxEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Enumerator->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (UserPresentBoxEntity_c *)Enumerator->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentBoxEntity_TypeInfo )
    {
      sub_1BE4FE8(Enumerator);
LABEL_34:
      sub_1BE4D28(Enumerator, v13);
    }
    if ( LODWORD(Enumerator[4].monitor) == type && HIDWORD(Enumerator[4].monitor) == id )
      ++v15;
  }
  v26 = v14->klass;
  v27 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_30;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_30:
    v29 = sub_1C36AAC(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(v14, *(_QWORD *)(v29 + 8));
  return v15;
}


UserPresentBoxEntity_o *__fastcall UserPresentBoxMaster__GetEntity(
        UserPresentBoxMaster_o *this,
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B6796B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__GetEntity__, receiveUserId);
    byte_4B6796B = 1;
  }
  PK = (Il2CppObject *)UserPresentBoxEntity__CreatePK(receiveUserId, presentId, (const MethodInfo *)presentId);
  return (UserPresentBoxEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31FDB1C *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserPresentBoxMaster__GetGiftNumTotalCount(
        UserPresentBoxMaster_o *this,
        int32_t type,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t v14; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  _DWORD *v23; // x0
  __int64 v24; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4B67972 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BE4ACC(&UserPresentBoxEntity_TypeInfo, v10);
    byte_4B67972 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v12);
  v14 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_17;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_17:
      v22 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                      Enumerator,
                      *(_QWORD *)(v22 + 8));
    if ( !v23 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(UserPresentBoxEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 304LL) < (unsigned int)methodPtr_low
      || *(UserPresentBoxEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * methodPtr_low - 8) != UserPresentBoxEntity_TypeInfo )
    {
      sub_1BE4FE8(v23);
LABEL_33:
      sub_1BE4D28(v23, v24);
    }
    if ( v23[18] == type && v23[19] == id )
      v14 += v23[20];
  }
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_29;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_29:
    v29 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return v14;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserPresentBoxMaster__GetServantCount(
        UserPresentBoxMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *v12; // x19
  int32_t v13; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  int32_t *v22; // x0
  __int64 v23; // x1
  int32_t *v24; // x22
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0

  if ( (byte_4B67973 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BE4ACC(&UserPresentBoxEntity_TypeInfo, v8);
    byte_4B67973 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v12 = Enumerator;
  v13 = 0;
  while ( 1 )
  {
    if ( !v12 )
      goto LABEL_34;
    klass = v12->klass;
    v15 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C36AAC(v12, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v12,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = v12->klass;
    v19 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_17;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_17:
      v21 = sub_1C36AAC(v12, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v22 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                       v12,
                       *(_QWORD *)(v21 + 8));
    v24 = v22;
    if ( !v22 )
      sub_1BE4D28(0LL, v23);
    methodPtr_low = LOBYTE(UserPresentBoxEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v22 + 304LL) < (unsigned int)methodPtr_low
      || *(UserPresentBoxEntity_c **)(*(_QWORD *)(*(_QWORD *)v22 + 200LL) + 8 * methodPtr_low - 8) != UserPresentBoxEntity_TypeInfo )
    {
      sub_1BE4FE8(v22);
LABEL_34:
      sub_1BE4D28(Enumerator, v11);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)Gift__IsServant(v22[18], 0LL);
    if ( ((unsigned __int8)Enumerator & 1) != 0 && v24[19] == svtId )
      ++v13;
  }
  v26 = v12->klass;
  v27 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_30;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_30:
    v29 = sub_1C36AAC(v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(v12, *(_QWORD *)(v29 + 8));
  return v13;
}


bool __fastcall UserPresentBoxMaster__TryGetEntity(
        UserPresentBoxMaster_o *this,
        UserPresentBoxEntity_o **entity,
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B6796C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__TryGetEntity__, entity);
    byte_4B6796C = 1;
  }
  PK = (Il2CppObject *)UserPresentBoxEntity__CreatePK(receiveUserId, presentId, (const MethodInfo *)receiveUserId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__TryGetEntity__);
}


UserPresentBoxEntity_array *__fastcall UserPresentBoxMaster__getVaildList(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v13; // x22
  int32_t v14; // w23
  const MethodInfo *v15; // x2
  Il2CppObject *v16; // x24
  __int64 methodPtr_low; // x10
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4B6796E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v9);
    sub_1BE4ACC(&UserPresentBoxEntity_TypeInfo, v10);
    byte_4B6796E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(UserPresentBoxEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserPresentBoxEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentBoxEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)UserPresentBoxEntity__IsExpired(
                                                                     (UserPresentBoxEntity_o *)list,
                                                                     1,
                                                                     v15);
          if ( ((unsigned __int8)list & 1) == 0 )
          {
            if ( !v13 )
              break;
            items = v13->fields._items;
            v25 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v13->fields._version;
            if ( !items )
              break;
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v13,
                v16,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v13->fields._size = size + 1;
              v27[4] = (Il2CppClass *)v16;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)v16, v18, v19, v20, v21, v22, v23);
            }
          }
        }
      }
      if ( Count == ++v14 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1BE4D28(list, userId);
  }
LABEL_18:
  if ( !v13 )
    goto LABEL_20;
  return (UserPresentBoxEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v13,
                                         (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
}


UserPresentBoxEntity_array *__fastcall UserPresentBoxMaster__getVaildList_41102388(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        System_Int64_array *presentIdList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  void *list; // x0
  int v18; // w23
  signed int max_length; // w26
  System_Collections_Generic_List_object__o *v20; // x22
  int32_t v21; // w24
  UserPresentBoxEntity_o *Item; // x0
  const MethodInfo *v23; // x2
  Il2CppObject *v24; // x25
  __int64 methodPtr_low; // x10
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int v32; // w10
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Comparison_T__o *v37; // x19
  Il2CppObject *v38; // x20
  struct UserPresentBoxMaster___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4B6796F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&System_Comparison_UserPresentBoxEntity__TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Sort__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v13);
    sub_1BE4ACC(&Method_UserPresentBoxMaster___c__getVaildList_b__8_0__, v14);
    sub_1BE4ACC(&UserPresentBoxMaster___c_TypeInfo, v15);
    sub_1BE4ACC(&UserPresentBoxEntity_TypeInfo, v16);
    byte_4B6796F = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !presentIdList )
    goto LABEL_33;
  v18 = (int)list;
  max_length = presentIdList->max_length;
  v20 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
  if ( v18 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (UserPresentBoxEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         (System_Collections_ObjectModel_Collection_T__o *)list,
                                         v21,
                                         (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = (Il2CppObject *)Item;
        methodPtr_low = LOBYTE(UserPresentBoxEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserPresentBoxEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentBoxEntity_TypeInfo
          && Item->fields.receiveUserId == userId )
        {
          list = (void *)UserPresentBoxEntity__IsExpired(Item, 1, v23);
          if ( ((unsigned __int8)list & 1) == 0 && max_length >= 1 )
          {
            v32 = 0;
            while ( 1 )
            {
              if ( presentIdList->max_length == v32 )
                sub_1BE4D30(list, userId);
              if ( (void *)presentIdList->m_Items[v32] == v24[1].monitor )
                break;
              if ( max_length == ++v32 )
                goto LABEL_24;
            }
            if ( !v20 )
              break;
            items = v20->fields._items;
            v34 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v20->fields._version;
            if ( !items )
              break;
            size = v20->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v20,
                v24,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v36 = &items->obj.klass + size;
              v20->fields._size = size + 1;
              v36[4] = (Il2CppClass *)v24;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v24, v26, v27, v28, v29, v30, v31);
            }
          }
        }
      }
LABEL_24:
      if ( ++v21 == v18 )
        goto LABEL_25;
    }
LABEL_33:
    sub_1BE4D28(list, userId);
  }
LABEL_25:
  list = UserPresentBoxMaster___c_TypeInfo;
  if ( !UserPresentBoxMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster___c_TypeInfo);
    list = UserPresentBoxMaster___c_TypeInfo;
  }
  v37 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v37 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = UserPresentBoxMaster___c_TypeInfo;
    }
    v38 = (Il2CppObject *)**((_QWORD **)list + 23);
    v37 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_UserPresentBoxEntity__TypeInfo);
    System_Comparison_object____ctor(v37, v38, Method_UserPresentBoxMaster___c__getVaildList_b__8_0__, 0LL);
    static_fields = UserPresentBoxMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_UserPresentBoxEntity__o *)v37;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)v37, v40, v41, v42, v43, v44, v45);
  }
  if ( !v20 )
    goto LABEL_33;
  System_Collections_Generic_List_object___Sort_56548584(
    v20,
    v37,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Sort__);
  return (UserPresentBoxEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v20,
                                         (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
}


void __fastcall UserPresentBoxMaster__getValidItemInfo(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        int32_t *count,
        bool *hasLimited,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t Instance; // x0
  const MethodInfo *v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x24
  int32_t v19; // w25
  const MethodInfo *v20; // x2
  UserPresentBoxEntity_o *v21; // x26
  __int64 methodPtr_low; // x10
  int64_t v23; // x23
  int64_t Time; // [xsp+8h] [xbp-68h]

  if ( (byte_4B67974 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ItemMaster___, v10);
    sub_1BE4ACC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BE4ACC(&UserPresentBoxEntity_TypeInfo, v14);
    byte_4B67974 = 1;
  }
  *count = 0;
  *hasLimited = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ItemMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_23:
    sub_1BE4D28(Instance, v16);
  }
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v19 = 0;
  while ( v19 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (int64_t)this->fields.list;
    if ( !Instance )
      goto LABEL_23;
    Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)Instance,
                          v19,
                          (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_23;
    v21 = (UserPresentBoxEntity_o *)Instance;
    methodPtr_low = LOBYTE(UserPresentBoxEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
      || *(UserPresentBoxEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserPresentBoxEntity_TypeInfo )
    {
      goto LABEL_23;
    }
    if ( *(_QWORD *)(Instance + 16) == userId )
    {
      Instance = UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)Instance, 1, v20);
      if ( (Instance & 1) == 0 )
      {
        ++*count;
        if ( !*hasLimited && v21->fields.giftType == 2 )
        {
          if ( !v18 )
            goto LABEL_23;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                v18,
                                v21->fields.objectId,
                                (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_23;
          v23 = *(_QWORD *)(Instance + 96);
          if ( v23 > Time )
          {
            Instance = UserPresentBoxEntity__expireAt(v21, v16);
            if ( v23 < Instance )
              *hasLimited = 1;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v19;
    if ( !list )
      goto LABEL_23;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserPresentBoxMaster__isExist(
        UserPresentBoxMaster_o *this,
        int32_t type,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v18; // w22
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  _DWORD *v23; // x0
  __int64 v24; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4B67970 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BE4ACC(&UserPresentBoxEntity_TypeInfo, v10);
    byte_4B67970 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v18 & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                      Enumerator,
                      *(_QWORD *)(v22 + 8));
    if ( !v23 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(UserPresentBoxEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 304LL) < (unsigned int)methodPtr_low
      || *(UserPresentBoxEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * methodPtr_low - 8) != UserPresentBoxEntity_TypeInfo )
    {
      sub_1BE4FE8(v23);
LABEL_33:
      sub_1BE4D28(v23, v24);
    }
    if ( v23[18] == type && v23[19] == id )
      goto LABEL_25;
  }
  v18 = 0;
LABEL_25:
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_29;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_29:
    v29 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return v18 & 1;
}


void __fastcall UserPresentBoxMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B67976 & 1) == 0 )
  {
    sub_1BE4ACC(&UserPresentBoxMaster___c_TypeInfo, v1);
    byte_4B67976 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(UserPresentBoxMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserPresentBoxMaster___c_TypeInfo->static_fields->__9 = (struct UserPresentBoxMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)UserPresentBoxMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall UserPresentBoxMaster___c___ctor(UserPresentBoxMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserPresentBoxMaster___c___getVaildList_b__8_0(
        UserPresentBoxMaster___c_o *this,
        UserPresentBoxEntity_o *a,
        UserPresentBoxEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BE4D28(this, a);
  return LODWORD(b->fields.createdAt) - LODWORD(a->fields.createdAt);
}