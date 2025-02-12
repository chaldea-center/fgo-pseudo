void __fastcall UserPresentBoxMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BC887F & 1) == 0 )
  {
    sub_1C1ABD4(&UserPresentBoxMaster_TypeInfo, v1);
    byte_4BC887F = 1;
  }
  *UserPresentBoxMaster_TypeInfo->static_fields = (struct UserPresentBoxMaster_StaticFields)xmmword_BFA590;
}


void __fastcall UserPresentBoxMaster___ctor(UserPresentBoxMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8877 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string___ctor__, method);
    byte_4BC8877 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    70,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string___ctor__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *v13; // x19
  int32_t v14; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0

  if ( (byte_4BC887B & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__,
      *(_QWORD *)&type);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v7);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo, v8);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4BC887B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
  v13 = Enumerator;
  v14 = 0;
  while ( 1 )
  {
    if ( !v13 )
      sub_1C1AE30(Enumerator, v12);
    klass = v13->klass;
    v16 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
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
      p_method = sub_1C6CBB4(v13, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v13,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = v13->klass;
    v20 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserPresentBoxEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo )
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
      v22 = sub_1C6CBB4(v13, System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo, 0LL);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                                                  v13,
                                                                  *(_QWORD *)(v22 + 8));
    if ( !Enumerator )
      sub_1C1AE30(0LL, v12);
    if ( LODWORD(Enumerator[4].monitor) == type && HIDWORD(Enumerator[4].monitor) == id )
      ++v14;
  }
  v23 = v13->klass;
  v24 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_28;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_28:
    v26 = sub_1C6CBB4(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(v13, *(_QWORD *)(v26 + 8));
  return v14;
}


UserPresentBoxEntity_o *__fastcall UserPresentBoxMaster__GetEntity(
        UserPresentBoxMaster_o *this,
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC8875 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__GetEntity__, receiveUserId);
    byte_4BC8875 = 1;
  }
  PK = (Il2CppObject *)UserPresentBoxEntity__CreatePK(receiveUserId, presentId, (const MethodInfo *)presentId);
  return (UserPresentBoxEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_324D130 *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t v13; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  _DWORD *v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4BC887C & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__,
      *(_QWORD *)&type);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v7);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo, v8);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4BC887C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v11);
  v13 = 0;
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserPresentBoxEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo )
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
      v21 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo, 0LL);
    }
    v22 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                      Enumerator,
                      *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_1C1AE30(0LL, v23);
    if ( v22[18] == type && v22[19] == id )
      v13 += v22[20];
  }
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_27;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_27:
    v27 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v13;
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *v11; // x19
  int32_t v12; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x22
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0

  if ( (byte_4BC887D & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v5);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo, v6);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4BC887D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
  v11 = Enumerator;
  v12 = 0;
  while ( 1 )
  {
    if ( !v11 )
      sub_1C1AE30(Enumerator, v10);
    klass = v11->klass;
    v14 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C6CBB4(v11, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v11,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = v11->klass;
    v18 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserPresentBoxEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_17;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_17:
      v20 = sub_1C6CBB4(v11, System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v11,
            *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      sub_1C1AE30(0LL, v22);
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)Gift__IsServant(*(_DWORD *)(v21 + 72), 0LL);
    if ( ((unsigned __int8)Enumerator & 1) != 0 && *(_DWORD *)(v23 + 76) == svtId )
      ++v12;
  }
  v24 = v11->klass;
  v25 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_28;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_28:
    v27 = sub_1C6CBB4(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(v11, *(_QWORD *)(v27 + 8));
  return v12;
}


bool __fastcall UserPresentBoxMaster__TryGetEntity(
        UserPresentBoxMaster_o *this,
        UserPresentBoxEntity_o **entity,
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC8876 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__TryGetEntity__, entity);
    byte_4BC8876 = 1;
  }
  PK = (Il2CppObject *)UserPresentBoxEntity__CreatePK(receiveUserId, presentId, (const MethodInfo *)receiveUserId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v12; // x22
  int32_t v13; // w23
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x24
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4BC8878 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Count__, userId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v9);
    byte_4BC8878 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Count__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Item__);
      if ( list )
      {
        v15 = (Il2CppObject *)list;
        if ( list->fields.items == (struct System_Collections_Generic_IList_T__o *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)UserPresentBoxEntity__IsExpired(
                                                                     (UserPresentBoxEntity_o *)list,
                                                                     1,
                                                                     v14);
          if ( ((unsigned __int8)list & 1) == 0 )
          {
            if ( !v12 )
              break;
            items = v12->fields._items;
            v23 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v12->fields._version;
            if ( !items )
              break;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                v15,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v15;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v15, v16, v17, v18, v19, v20, v21);
            }
          }
        }
      }
      if ( Count == ++v13 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C1AE30(list, userId);
  }
LABEL_16:
  if ( !v12 )
    goto LABEL_18;
  return (UserPresentBoxEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v12,
                                         (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
}


UserPresentBoxEntity_array *__fastcall UserPresentBoxMaster__getVaildList_41364216(
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
  void *list; // x0
  int v17; // w23
  signed int max_length; // w26
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w24
  UserPresentBoxEntity_o *Item; // x0
  const MethodInfo *v22; // x2
  Il2CppObject *v23; // x25
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int v30; // w10
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Comparison_T__o *v35; // x19
  Il2CppObject *v36; // x20
  struct UserPresentBoxMaster___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4BC8879 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Count__, userId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Item__, v7);
    sub_1C1ABD4(&System_Comparison_UserPresentBoxEntity__TypeInfo, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Sort__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__, v12);
    sub_1C1ABD4(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v13);
    sub_1C1ABD4(&Method_UserPresentBoxMaster___c__getVaildList_b__8_0__, v14);
    sub_1C1ABD4(&UserPresentBoxMaster___c_TypeInfo, v15);
    byte_4BC8879 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Count__);
  if ( !presentIdList )
    goto LABEL_32;
  v17 = (int)list;
  max_length = presentIdList->max_length;
  v19 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
  if ( v17 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (UserPresentBoxEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         (System_Collections_ObjectModel_Collection_T__o *)list,
                                         v20,
                                         (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Item__);
      if ( Item )
      {
        v23 = (Il2CppObject *)Item;
        if ( Item->fields.receiveUserId == userId )
        {
          list = (void *)UserPresentBoxEntity__IsExpired(Item, 1, v22);
          if ( ((unsigned __int8)list & 1) == 0 && max_length >= 1 )
          {
            v30 = 0;
            while ( 1 )
            {
              if ( presentIdList->max_length == v30 )
                sub_1C1AE38(list, userId);
              if ( (void *)presentIdList->m_Items[v30] == v23[1].monitor )
                break;
              if ( max_length == ++v30 )
                goto LABEL_22;
            }
            if ( !v19 )
              break;
            items = v19->fields._items;
            v32 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                v23,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v34[4] = (Il2CppClass *)v23;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v23, v24, v25, v26, v27, v28, v29);
            }
          }
        }
      }
LABEL_22:
      if ( ++v20 == v17 )
        goto LABEL_23;
    }
LABEL_32:
    sub_1C1AE30(list, userId);
  }
LABEL_23:
  list = UserPresentBoxMaster___c_TypeInfo;
  if ( !UserPresentBoxMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster___c_TypeInfo);
    list = UserPresentBoxMaster___c_TypeInfo;
  }
  v35 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v35 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = UserPresentBoxMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)**((_QWORD **)list + 23);
    v35 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_UserPresentBoxEntity__TypeInfo);
    System_Comparison_object____ctor(v35, v36, Method_UserPresentBoxMaster___c__getVaildList_b__8_0__, 0LL);
    static_fields = UserPresentBoxMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_UserPresentBoxEntity__o *)v35;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)v35, v38, v39, v40, v41, v42, v43);
  }
  if ( !v19 )
    goto LABEL_32;
  System_Collections_Generic_List_object___Sort_56877908(
    v19,
    v35,
    (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Sort__);
  return (UserPresentBoxEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v19,
                                         (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
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
  int64_t Time; // x23
  int64_t Instance; // x0
  const MethodInfo *v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x24
  int32_t v19; // w25
  const MethodInfo *v20; // x2
  UserPresentBoxEntity_o *v21; // x26
  int64_t v22; // x29

  if ( (byte_4BC887E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Count__, userId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Item__, v9);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, v10);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v12);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4BC887E = 1;
  }
  *count = 0;
  *hasLimited = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_21:
    sub_1C1AE30(Instance, v16);
  }
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v19 = 0;
  while ( v19 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Count__) )
  {
    Instance = (int64_t)this->fields.list;
    if ( !Instance )
      goto LABEL_21;
    Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)Instance,
                          v19,
                          (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Item__);
    if ( !Instance )
      goto LABEL_21;
    v21 = (UserPresentBoxEntity_o *)Instance;
    if ( *(_QWORD *)(Instance + 16) == userId )
    {
      Instance = UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)Instance, 1, v20);
      if ( (Instance & 1) == 0 )
      {
        ++*count;
        if ( !*hasLimited && v21->fields.giftType == 2 )
        {
          if ( !v18 )
            goto LABEL_21;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                v18,
                                v21->fields.objectId,
                                (const MethodInfo_3248678 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_21;
          v22 = *(_QWORD *)(Instance + 96);
          if ( v22 > Time )
          {
            Instance = UserPresentBoxEntity__expireAt(v21, v16);
            if ( v22 < Instance )
              *hasLimited = 1;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v19;
    if ( !list )
      goto LABEL_21;
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v17; // w22
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4BC887A & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__,
      *(_QWORD *)&type);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v7);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo, v8);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4BC887A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v17 & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserPresentBoxEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo, 0LL);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_1C1AE30(0LL, v23);
    if ( *(_DWORD *)(v22 + 72) == type && *(_DWORD *)(v22 + 76) == id )
      goto LABEL_23;
  }
  v17 = 0;
LABEL_23:
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_27;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_27:
    v27 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v17 & 1;
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

  if ( (byte_4BC8880 & 1) == 0 )
  {
    sub_1C1ABD4(&UserPresentBoxMaster___c_TypeInfo, v1);
    byte_4BC8880 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(UserPresentBoxMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserPresentBoxMaster___c_TypeInfo->static_fields->__9 = (struct UserPresentBoxMaster___c_o *)v2;
  sub_1C1AB78(
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
    sub_1C1AE30(this, a);
  return LODWORD(b->fields.createdAt) - LODWORD(a->fields.createdAt);
}