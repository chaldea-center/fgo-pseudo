void UserEventBoardGameTokenMaster___ctor(UserEventBoardGameTokenMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59394B9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string___ctor__);
    byte_59394B9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    317,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventBoardGameTokenEntity_o *UserEventBoardGameTokenMaster__GetEntity(
        UserEventBoardGameTokenMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59394B7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__GetEntity__);
    byte_59394B7 = 1;
  }
  PK = (Il2CppObject *)UserEventBoardGameTokenEntity__CreatePK(userId, eventId, tokenId, *(const MethodInfo **)&tokenId);
  return (UserEventBoardGameTokenEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__GetEntity__);
}


UserEventBoardGameTokenEntity_array *UserEventBoardGameTokenMaster__GetList(
        UserEventBoardGameTokenMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  __int64 list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  Il2CppObject *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  Il2CppObject *v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  System_Collections_Generic_IEnumerator_T__o *v36; // [xsp+18h] [xbp-38h]

  if ( (byte_59394BA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserEventBoardGameTokenEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserEventBoardGameTokenEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserEventBoardGameTokenEntity__TypeInfo);
    byte_59394BA = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserEventBoardGameTokenEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserEventBoardGameTokenEntity__GetEnumerator__);
  v36 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v9);
  for ( i = Enumerator; ; i = v36 )
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
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
             i,
             *(_QWORD *)(v14 + 8));
    if ( (list & 1) == 0 )
      break;
    if ( !v36 )
      sub_21FFECC(list, v6);
    v15 = v36->klass;
    v16 = *(unsigned __int16 *)&v36->klass->_2.rank;
    if ( *(_WORD *)&v36->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserEventBoardGameTokenEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_UserEventBoardGameTokenEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_18:
      v18 = sub_2237E2C(v36, System_Collections_Generic_IEnumerator_UserEventBoardGameTokenEntity__TypeInfo, 0);
    }
    v19 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                            v36,
                            *(_QWORD *)(v18 + 8));
    v26 = v19;
    if ( v19 && v19[1].klass == (Il2CppClass *)userId )
    {
      if ( !v5
        || (items = v5->fields._items,
            v28 = Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_21FFECC(v19, v19);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v19,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v26, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  if ( v36 )
  {
    v31 = v36->klass;
    v32 = *(unsigned __int16 *)&v36->klass->_2.rank;
    if ( *(_WORD *)&v36->klass->_2.rank )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_34;
      }
      v34 = (__int64)&v31->vtable[*v33];
    }
    else
    {
LABEL_34:
      v34 = sub_2237E2C(v36, System_IDisposable_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
             v36,
             *(_QWORD *)(v34 + 8));
  }
  if ( !v5 )
LABEL_41:
    sub_21FFECC(list, v6);
  return (UserEventBoardGameTokenEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v5,
                                                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__ToArray__);
}


UserEventBoardGameTokenEntity_array *UserEventBoardGameTokenMaster__GetList_49979660(
        UserEventBoardGameTokenMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_59394BB & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_59394BB = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v4 = NetworkManager_TypeInfo;
  }
  return UserEventBoardGameTokenMaster__GetList(this, v4->static_fields->userIdNumber, v2);
}


bool UserEventBoardGameTokenMaster__IsHavingGroupToken(
        UserEventBoardGameTokenMaster_o *this,
        int32_t gameFlagVal,
        int32_t kindNum,
        const MethodInfo *method)
{
  UserEventBoardGameTokenEntity_array *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v10; // x1
  int max_length; // w8
  UserEventBoardGameTokenEntity_array *v12; // x22
  bool v13; // w23
  int v14; // w24
  int32_t v15; // w25
  int32_t *v16; // x8
  EventBoardGameTokenEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_59394BD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59394BD = 1;
  }
  entity = 0;
  Instance = (UserEventBoardGameTokenEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
  Instance = UserEventBoardGameTokenMaster__GetList_49979660(this, v10);
  if ( !Instance )
    goto LABEL_16;
  max_length = Instance->max_length;
  v12 = Instance;
  v13 = max_length > 0;
  if ( max_length >= 1 )
  {
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_21FFED4(Instance);
      v16 = (int32_t *)v12->m_Items[v14];
      if ( !v16 )
        break;
      if ( v16[8] < 1 )
        goto LABEL_20;
      if ( !MasterData_object )
        break;
      Instance = (UserEventBoardGameTokenEntity_array *)EventBoardGameTokenMaster__TryGetEntity(
                                                          (EventBoardGameTokenMaster_o *)MasterData_object,
                                                          &entity,
                                                          v16[6],
                                                          v16[7],
                                                          0);
      if ( !entity || (entity->fields.flag & gameFlagVal) == 0 || (++v15, v15 < kindNum) )
      {
LABEL_20:
        max_length = v12->max_length;
        v13 = ++v14 < max_length;
        if ( v14 < max_length )
          continue;
      }
      return v13;
    }
LABEL_16:
    sub_21FFECC(Instance, v8);
  }
  return v13;
}


bool UserEventBoardGameTokenMaster__IsHavingToken(
        UserEventBoardGameTokenMaster_o *this,
        int32_t tokenId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Object_array *List_49979660; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_59394BC & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_UserEventBoardGameTokenEntity___);
    sub_21FFC50(&System_Func_UserEventBoardGameTokenEntity__bool__TypeInfo);
    sub_21FFC50(&Method_UserEventBoardGameTokenMaster___c__DisplayClass5_0__IsHavingToken_b__0__);
    sub_21FFC50(&UserEventBoardGameTokenMaster___c__DisplayClass5_0_TypeInfo);
    byte_59394BC = 1;
  }
  v5 = sub_21FFEBC(UserEventBoardGameTokenMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_DWORD *)(v5 + 16) = tokenId;
  List_49979660 = (System_Object_array *)UserEventBoardGameTokenMaster__GetList_49979660(this, v7);
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_UserEventBoardGameTokenEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_UserEventBoardGameTokenMaster___c__DisplayClass5_0__IsHavingToken_b__0__,
    0);
  return BasicHelper__Any_object__58575580(
           List_49979660,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_37DCADC *)Method_BasicHelper_Any_UserEventBoardGameTokenEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool UserEventBoardGameTokenMaster__TryGetEntity(
        UserEventBoardGameTokenMaster_o *this,
        UserEventBoardGameTokenEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59394B8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__TryGetEntity__);
    byte_59394B8 = 1;
  }
  PK = (Il2CppObject *)UserEventBoardGameTokenEntity__CreatePK(userId, eventId, tokenId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__TryGetEntity__);
}


void UserEventBoardGameTokenMaster___c__DisplayClass5_0___ctor(
        UserEventBoardGameTokenMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserEventBoardGameTokenMaster___c__DisplayClass5_0___IsHavingToken_b__0(
        UserEventBoardGameTokenMaster___c__DisplayClass5_0_o *this,
        UserEventBoardGameTokenEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.tokenId == this->fields.tokenId && x->fields.num > 0;
}