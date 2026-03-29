void UserPresentBoxMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4D318E1 & 1) == 0 )
  {
    sub_1C93AD4(&UserPresentBoxMaster_TypeInfo);
    byte_4D318E1 = 1;
  }
  *UserPresentBoxMaster_TypeInfo->static_fields = (struct UserPresentBoxMaster_StaticFields)xmmword_D00DF0;
}


void UserPresentBoxMaster___ctor(UserPresentBoxMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D318D9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string___ctor__);
    byte_4D318D9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    70,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string___ctor__);
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
  System_Collections_Generic_IEnumerator_T__o *v10; // x19
  int32_t v11; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0

  if ( (byte_4D318DD & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    byte_4D318DD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
  v10 = Enumerator;
  v11 = 0;
  while ( 1 )
  {
    if ( !v10 )
      sub_1C93D2C(Enumerator, v9);
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
      v15 = sub_1C69E5C(v10, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            v10,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = v10->klass;
    v17 = *(unsigned __int16 *)&v10->klass->_2.rank;
    if ( *(_WORD *)&v10->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserPresentBoxEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_17;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_17:
      v19 = sub_1C69E5C(v10, System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                  v10,
                                                                  *(_QWORD *)(v19 + 8));
    if ( !Enumerator )
      sub_1C93D2C(0, v9);
    if ( LODWORD(Enumerator[4].monitor) == type && HIDWORD(Enumerator[4].monitor) == id )
      ++v11;
  }
  v20 = v10->klass;
  v21 = *(unsigned __int16 *)&v10->klass->_2.rank;
  if ( *(_WORD *)&v10->klass->_2.rank )
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
    v23 = sub_1C69E5C(v10, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(v10, *(_QWORD *)(v23 + 8));
  return v11;
}


UserPresentBoxEntity_o *UserPresentBoxMaster__GetEntity(
        UserPresentBoxMaster_o *this,
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D318D7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__GetEntity__);
    byte_4D318D7 = 1;
  }
  PK = (Il2CppObject *)UserPresentBoxEntity__CreatePK(receiveUserId, presentId, (const MethodInfo *)presentId);
  return (UserPresentBoxEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_34681D4 *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserPresentBoxMaster__GetGiftNumTotalCount(
        UserPresentBoxMaster_o *this,
        int32_t type,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t v10; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  _DWORD *v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4D318DE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    byte_4D318DE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v8);
  v10 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
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
      v14 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
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
      v18 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo, 0);
    }
    v19 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                      Enumerator,
                      *(_QWORD *)(v18 + 8));
    if ( !v19 )
      sub_1C93D2C(0, v20);
    if ( v19[18] == type && v19[19] == id )
      v10 += v19[20];
  }
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_27;
    }
    v24 = (__int64)&v21->vtable[*v23];
  }
  else
  {
LABEL_27:
    v24 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return v10;
}


// local variable allocation has failed, the output may be wrong!
int32_t UserPresentBoxMaster__GetServantCount(UserPresentBoxMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *v8; // x19
  int32_t v9; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x22
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0

  if ( (byte_4D318DF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    byte_4D318DF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
  v8 = Enumerator;
  v9 = 0;
  while ( 1 )
  {
    if ( !v8 )
      sub_1C93D2C(Enumerator, v7);
    klass = v8->klass;
    v11 = *(unsigned __int16 *)&v8->klass->_2.rank;
    if ( *(_WORD *)&v8->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_10;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v13 = sub_1C69E5C(v8, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            v8,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = v8->klass;
    v15 = *(unsigned __int16 *)&v8->klass->_2.rank;
    if ( *(_WORD *)&v8->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserPresentBoxEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_17:
      v17 = sub_1C69E5C(v8, System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            v8,
            *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      sub_1C93D2C(0, v19);
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)Gift__IsServant(*(_DWORD *)(v18 + 72), 0);
    if ( ((unsigned __int8)Enumerator & 1) != 0 && *(_DWORD *)(v20 + 76) == svtId )
      ++v9;
  }
  v21 = v8->klass;
  v22 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_28;
    }
    v24 = (__int64)&v21->vtable[*v23];
  }
  else
  {
LABEL_28:
    v24 = sub_1C69E5C(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(v8, *(_QWORD *)(v24 + 8));
  return v9;
}


bool UserPresentBoxMaster__TryGetEntity(
        UserPresentBoxMaster_o *this,
        UserPresentBoxEntity_o **entity,
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D318D8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__TryGetEntity__);
    byte_4D318D8 = 1;
  }
  PK = (Il2CppObject *)UserPresentBoxEntity__CreatePK(receiveUserId, presentId, (const MethodInfo *)receiveUserId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__TryGetEntity__);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4D318DA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    byte_4D318DA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
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
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Item__);
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
                *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v10;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
            }
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C93D2C(list, userId);
  }
LABEL_16:
  if ( !v7 )
    goto LABEL_18;
  return (UserPresentBoxEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v7,
                                         (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
}


UserPresentBoxEntity_array *UserPresentBoxMaster__getVaildList_43803708(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        System_Int64_array *presentIdList,
        const MethodInfo *method)
{
  void *list; // x0
  int v8; // w23
  int max_length; // w26
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w24
  UserPresentBoxEntity_o *Item; // x0
  const MethodInfo *v13; // x2
  Il2CppObject *v14; // x25
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int v21; // w10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Comparison_T__o *v26; // x19
  Il2CppObject *v27; // x20
  struct UserPresentBoxMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7

  if ( (byte_4D318DB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Item__);
    sub_1C93AD4(&System_Comparison_UserPresentBoxEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_1C93AD4(&Method_UserPresentBoxMaster___c__getVaildList_b__8_0__);
    sub_1C93AD4(&UserPresentBoxMaster___c_TypeInfo);
    byte_4D318DB = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Count__);
  if ( !presentIdList )
    goto LABEL_32;
  v8 = (int)list;
  max_length = presentIdList->max_length;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
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
                                         (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Item__);
      if ( Item )
      {
        v14 = (Il2CppObject *)Item;
        if ( Item->fields.receiveUserId == userId )
        {
          list = (void *)UserPresentBoxEntity__IsExpired(Item, 1, v13);
          if ( ((unsigned __int8)list & 1) == 0 && max_length >= 1 )
          {
            v21 = 0;
            while ( 1 )
            {
              if ( LODWORD(presentIdList->max_length) == v21 )
                sub_1C93D34(list);
              if ( (void *)presentIdList->m_Items[v21] == v14[1].monitor )
                break;
              if ( max_length == ++v21 )
                goto LABEL_22;
            }
            if ( !v10 )
              break;
            items = v10->fields._items;
            v23 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v10->fields._version;
            if ( !items )
              break;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v14,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v14;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
            }
          }
        }
      }
LABEL_22:
      if ( ++v11 == v8 )
        goto LABEL_23;
    }
LABEL_32:
    sub_1C93D2C(list, userId);
  }
LABEL_23:
  list = UserPresentBoxMaster___c_TypeInfo;
  if ( !UserPresentBoxMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster___c_TypeInfo);
    list = UserPresentBoxMaster___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = UserPresentBoxMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)list + 23);
    v26 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_UserPresentBoxEntity__TypeInfo);
    System_Comparison_object____ctor(v26, v27, Method_UserPresentBoxMaster___c__getVaildList_b__8_0__, 0);
    static_fields = UserPresentBoxMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_UserPresentBoxEntity__o *)v26;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0, (int32_t)v26, v29, v30, v31, v32, v33, v34);
  }
  if ( !v10 )
    goto LABEL_32;
  System_Collections_Generic_List_object___Sort_59225184(
    v10,
    v26,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Sort__);
  return (UserPresentBoxEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v10,
                                         (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
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

  if ( (byte_4D318E0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Item__);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D318E0 = 1;
  }
  *count = 0;
  *hasLimited = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0) )
  {
LABEL_21:
    sub_1C93D2C(Instance, v11);
  }
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v14 = 0;
  while ( v14 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Count__) )
  {
    Instance = (int64_t)this->fields.list;
    if ( !Instance )
      goto LABEL_21;
    Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)Instance,
                          v14,
                          (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__get_Item__);
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
                                (const MethodInfo_3463274 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  char v14; // w22
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4D318DC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    byte_4D318DC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_UserPresentBoxEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    if ( (v14 & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserPresentBoxEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_16:
      v18 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_UserPresentBoxEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    if ( !v19 )
      sub_1C93D2C(0, v20);
    if ( *(_DWORD *)(v19 + 72) == type && *(_DWORD *)(v19 + 76) == id )
      goto LABEL_23;
  }
  v14 = 0;
LABEL_23:
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_27;
    }
    v24 = (__int64)&v21->vtable[*v23];
  }
  else
  {
LABEL_27:
    v24 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return v14 & 1;
}


void UserPresentBoxMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D318E2 & 1) == 0 )
  {
    sub_1C93AD4(&UserPresentBoxMaster___c_TypeInfo);
    byte_4D318E2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(UserPresentBoxMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserPresentBoxMaster___c_TypeInfo->static_fields->__9 = (struct UserPresentBoxMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)UserPresentBoxMaster___c_TypeInfo->static_fields,
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
    sub_1C93D2C(this, a);
  return LODWORD(b->fields.createdAt) - LODWORD(a->fields.createdAt);
}