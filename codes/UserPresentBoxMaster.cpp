void UserPresentBoxMaster___cctor(const MethodInfo *method)
{
  if ( (byte_5939617 & 1) == 0 )
  {
    sub_21FFC50(&UserPresentBoxMaster_TypeInfo);
    byte_5939617 = 1;
  }
  *UserPresentBoxMaster_TypeInfo->static_fields = (struct UserPresentBoxMaster_StaticFields)xmmword_E949B0;
}


void UserPresentBoxMaster___ctor(UserPresentBoxMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593960F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string___ctor__);
    byte_593960F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    70,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserPresentBoxMaster__GetCount(
        UserPresentBoxMaster_o *this,
        int32_t type,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  int32_t v10; // w19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  System_Collections_Generic_IEnumerator_T__o *v24; // [xsp+18h] [xbp-48h]

  if ( (byte_5939613 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5939613 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
  v10 = 0;
  v24 = Enumerator;
  while ( 1 )
  {
    if ( !v24 )
      sub_21FFECC(Enumerator, v9);
    klass = v24->klass;
    v12 = *(unsigned __int16 *)&v24->klass->_2.rank;
    if ( *(_WORD *)&v24->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_2237E2C(v24, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            v24,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = v24->klass;
    v16 = *(unsigned __int16 *)&v24->klass->_2.rank;
    if ( *(_WORD *)&v24->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserPresentBoxEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_17:
      v18 = sub_2237E2C(v24, System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                                                  v24,
                                                                  *(_QWORD *)(v18 + 8));
    if ( !Enumerator )
      sub_21FFECC(0, v9);
    if ( LODWORD(Enumerator[4].monitor) == type && HIDWORD(Enumerator[4].monitor) == id )
      ++v10;
  }
  v19 = v24->klass;
  v20 = *(unsigned __int16 *)&v24->klass->_2.rank;
  if ( *(_WORD *)&v24->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_28;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_28:
    v22 = sub_2237E2C(v24, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(v24, *(_QWORD *)(v22 + 8));
  return v10;
}


UserPresentBoxEntity_o *UserPresentBoxMaster__GetEntity(
        UserPresentBoxMaster_o *this,
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_593960D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__GetEntity__);
    byte_593960D = 1;
  }
  PK = (Il2CppObject *)UserPresentBoxEntity__CreatePK(receiveUserId, presentId, (const MethodInfo *)presentId);
  return (UserPresentBoxEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserPresentBoxMaster__GetGiftNumTotalCount(
        UserPresentBoxMaster_o *this,
        int32_t type,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *v10; // x22
  int32_t v11; // w19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  _DWORD *v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  System_Collections_Generic_IEnumerator_T__o *v29; // [xsp+18h] [xbp-38h]

  if ( (byte_5939614 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5939614 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
  v29 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v9);
  v10 = Enumerator;
  v11 = 0;
  while ( 1 )
  {
    klass = v10->klass;
    v13 = *(unsigned __int16 *)&v10->klass->_2.rank;
    if ( *(_WORD *)&v10->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_10;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v15 = sub_2237E2C(v10, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            v10,
            *(_QWORD *)(v15 + 8));
    if ( (v16 & 1) == 0 )
      break;
    if ( !v29 )
      sub_21FFECC(v16, v17);
    v18 = v29->klass;
    v19 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserPresentBoxEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_18;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_18:
      v21 = sub_2237E2C(v29, System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo, 0);
    }
    v22 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                      v29,
                      *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_21FFECC(0, v23);
    if ( v22[18] == type && v22[19] == id )
    {
      v10 = v29;
      v11 += v22[20];
    }
    else
    {
      v10 = v29;
    }
  }
  if ( v29 )
  {
    v24 = v29->klass;
    v25 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_34;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_34:
      v27 = sub_2237E2C(v29, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(v29, *(_QWORD *)(v27 + 8));
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
int32_t UserPresentBoxMaster__GetServantCount(UserPresentBoxMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  int32_t v8; // w19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x21
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  System_Collections_Generic_IEnumerator_T__o *v25; // [xsp+18h] [xbp-38h]

  if ( (byte_5939615 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5939615 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
  v8 = 0;
  v25 = Enumerator;
  while ( 1 )
  {
    if ( !v25 )
      sub_21FFECC(Enumerator, v7);
    klass = v25->klass;
    v10 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_2237E2C(v25, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            v25,
            *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = v25->klass;
    v14 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserPresentBoxEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_17:
      v16 = sub_2237E2C(v25, System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            v25,
            *(_QWORD *)(v16 + 8));
    v19 = v17;
    if ( !v17 )
      sub_21FFECC(0, v18);
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)Gift__IsServant(*(_DWORD *)(v17 + 72), 0);
    if ( ((unsigned __int8)Enumerator & 1) != 0 && *(_DWORD *)(v19 + 76) == svtId )
      ++v8;
  }
  v20 = v25->klass;
  v21 = *(unsigned __int16 *)&v25->klass->_2.rank;
  if ( *(_WORD *)&v25->klass->_2.rank )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_28;
    }
    v23 = (__int64)&v20->vtable[*v22];
  }
  else
  {
LABEL_28:
    v23 = sub_2237E2C(v25, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(v25, *(_QWORD *)(v23 + 8));
  return v8;
}


bool UserPresentBoxMaster__TryGetEntity(
        UserPresentBoxMaster_o *this,
        UserPresentBoxEntity_o **entity,
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_593960E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__TryGetEntity__);
    byte_593960E = 1;
  }
  PK = (Il2CppObject *)UserPresentBoxEntity__CreatePK(receiveUserId, presentId, (const MethodInfo *)receiveUserId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__TryGetEntity__);
}


UserPresentBoxEntity_array *UserPresentBoxMaster__getVaildList(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  const MethodInfo *v9; // x2
  Il2CppObject *v10; // x24
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_5939610 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    byte_5939610 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Item__);
      if ( list )
      {
        v10 = (Il2CppObject *)list;
        if ( list->fields.items == (struct System_Collections_Generic_IList_T__o *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)UserPresentBoxEntity__IsExpired(
                                                                     (UserPresentBoxEntity_o *)list,
                                                                     1,
                                                                     v9);
          if ( ((unsigned __int8)list & 1) == 0 )
          {
            if ( !v7 )
              break;
            items = v7->fields._items;
            v18 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                v10,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v10;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
            }
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_16;
    }
LABEL_18:
    sub_21FFECC(list, userId);
  }
LABEL_16:
  if ( !v7 )
    goto LABEL_18;
  return (UserPresentBoxEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v7,
                                         (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
}


UserPresentBoxEntity_array *UserPresentBoxMaster__getVaildList_50058672(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        System_Int64_array *presentIdList,
        const MethodInfo *method)
{
  void *list; // x0
  int v8; // w23
  int max_length; // w26
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w24
  UserPresentBoxEntity_o *Item; // x0
  const MethodInfo *v13; // x2
  Il2CppObject *v14; // x25
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int v21; // w9
  int v22; // w10
  int64_t *m_Items; // x11
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  struct UserPresentBoxMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__8_0; // x19
  Il2CppObject *v30; // x21
  struct UserPresentBoxMaster___c_StaticFields *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  if ( (byte_5939611 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Item__);
    sub_21FFC50(&System_Comparison_UserPresentBoxEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxMaster___c__getVaildList_b__8_0__);
    sub_21FFC50(&UserPresentBoxMaster___c_TypeInfo);
    byte_5939611 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Count__);
  if ( !presentIdList )
    goto LABEL_32;
  v8 = (int)list;
  max_length = presentIdList->max_length;
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
  if ( v8 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (UserPresentBoxEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         (System_Collections_ObjectModel_Collection_T__o *)list,
                                         v11,
                                         (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Item__);
      if ( Item )
      {
        v14 = (Il2CppObject *)Item;
        if ( Item->fields.receiveUserId == userId )
        {
          list = (void *)UserPresentBoxEntity__IsExpired(Item, 1, v13);
          if ( ((unsigned __int8)list & 1) == 0 && max_length >= 1 )
          {
            v21 = presentIdList->max_length;
            v22 = max_length;
            m_Items = presentIdList->m_Items;
            while ( 1 )
            {
              if ( !v21 )
                sub_21FFED4(list);
              if ( (void *)*m_Items == v14[1].monitor )
                break;
              --v22;
              ++m_Items;
              --v21;
              if ( !v22 )
                goto LABEL_22;
            }
            if ( !v10 )
              break;
            items = v10->fields._items;
            v25 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v10->fields._version;
            if ( !items )
              break;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v14,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v27[4] = (Il2CppClass *)v14;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
            }
          }
        }
      }
LABEL_22:
      if ( ++v11 == v8 )
        goto LABEL_23;
    }
LABEL_32:
    sub_21FFECC(list, userId);
  }
LABEL_23:
  list = UserPresentBoxMaster___c_TypeInfo;
  if ( !*(&UserPresentBoxMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster___c_TypeInfo, userId);
    list = UserPresentBoxMaster___c_TypeInfo;
  }
  static_fields = (struct UserPresentBoxMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__8_0 = (System_Comparison_T__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, userId);
      static_fields = UserPresentBoxMaster___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_UserPresentBoxEntity__TypeInfo);
    System_Comparison_object____ctor(_9__8_0, v30, Method_UserPresentBoxMaster___c__getVaildList_b__8_0__, 0);
    v31 = UserPresentBoxMaster___c_TypeInfo->static_fields;
    v31->__9__8_0 = (struct System_Comparison_UserPresentBoxEntity__o *)_9__8_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v31->__9__8_0, (int32_t)_9__8_0, v32, v33, v34, v35, v36, v37);
  }
  if ( !v10 )
    goto LABEL_32;
  System_Collections_Generic_List_object___Sort_71636404(
    v10,
    _9__8_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Sort__);
  return (UserPresentBoxEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v10,
                                         (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
}


void UserPresentBoxMaster__getValidItemInfo(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        int32_t *count,
        bool *hasLimited,
        const MethodInfo *method)
{
  int64_t Time; // x23
  int64_t Instance; // x0
  const MethodInfo *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x24
  int32_t v14; // w25
  const MethodInfo *v15; // x2
  UserPresentBoxEntity_o *v16; // x26
  int64_t v17; // x29

  if ( (byte_5939616 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939616 = 1;
  }
  *count = 0;
  *hasLimited = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, userId);
  Time = NetworkManager__getTime(0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0) )
  {
LABEL_21:
    sub_21FFECC(Instance, v11);
  }
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v14 = 0;
  while ( v14 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Count__) )
  {
    Instance = (int64_t)this->fields.list;
    if ( !Instance )
      goto LABEL_21;
    Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)Instance,
                          v14,
                          (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Item__);
    if ( !Instance )
      goto LABEL_21;
    v16 = (UserPresentBoxEntity_o *)Instance;
    if ( *(_QWORD *)(Instance + 16) == userId )
    {
      Instance = UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)Instance, 1, v15);
      if ( (Instance & 1) == 0 )
      {
        ++*count;
        if ( !*hasLimited && v16->fields.giftType == 2 )
        {
          if ( !v13 )
            goto LABEL_21;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                v13,
                                v16->fields.objectId,
                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_21;
          v17 = *(_QWORD *)(Instance + 96);
          if ( v17 > Time )
          {
            Instance = UserPresentBoxEntity__expireAt(v16, v11);
            if ( v17 < Instance )
              *hasLimited = 1;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_21;
  }
}


// local variable allocation has failed, the output may be wrong!
bool UserPresentBoxMaster__isExist(UserPresentBoxMaster_o *this, int32_t type, int32_t id, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  char v17; // w21
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  System_Collections_Generic_IEnumerator_T__o *v29; // [xsp+18h] [xbp-38h]

  if ( (byte_5939612 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5939612 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
  v29 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v9);
  for ( i = Enumerator; ; i = v29 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    v17 = v15;
    if ( (v15 & 1) == 0 )
      break;
    if ( !v29 )
      sub_21FFECC(v15, v16);
    v18 = v29->klass;
    v19 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserPresentBoxEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_18;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_18:
      v21 = sub_2237E2C(v29, System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            v29,
            *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_21FFECC(0, v23);
    if ( *(_DWORD *)(v22 + 72) == type && *(_DWORD *)(v22 + 76) == id )
      goto LABEL_26;
  }
  v17 = 0;
LABEL_26:
  if ( v29 )
  {
    v24 = v29->klass;
    v25 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_31;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_31:
      v27 = sub_2237E2C(v29, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(v29, *(_QWORD *)(v27 + 8));
  }
  return v17 & 1;
}


void UserPresentBoxMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5939618 & 1) == 0 )
  {
    sub_21FFC50(&UserPresentBoxMaster___c_TypeInfo);
    byte_5939618 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(UserPresentBoxMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserPresentBoxMaster___c_TypeInfo->static_fields->__9 = (struct UserPresentBoxMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)UserPresentBoxMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserPresentBoxMaster___c___ctor(UserPresentBoxMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t UserPresentBoxMaster___c___getVaildList_b__8_0(
        UserPresentBoxMaster___c_o *this,
        UserPresentBoxEntity_o *a,
        UserPresentBoxEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_21FFECC(this, a);
  return LODWORD(b->fields.createdAt) - LODWORD(a->fields.createdAt);
}