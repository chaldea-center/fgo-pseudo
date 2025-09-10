void UserEventBoardGameTokenMaster___ctor(UserEventBoardGameTokenMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C28075 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string___ctor__);
    byte_4C28075 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    315,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string___ctor__);
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

  if ( (byte_4C28073 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__GetEntity__);
    byte_4C28073 = 1;
  }
  PK = (Il2CppObject *)UserEventBoardGameTokenEntity__CreatePK(userId, eventId, tokenId, *(const MethodInfo **)&tokenId);
  return (UserEventBoardGameTokenEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_338C850 *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__GetEntity__);
}


UserEventBoardGameTokenEntity_array *UserEventBoardGameTokenMaster__GetList(
        UserEventBoardGameTokenMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4C28076 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserEventBoardGameTokenEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_UserEventBoardGameTokenEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserEventBoardGameTokenEntity__TypeInfo);
    byte_4C28076 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserEventBoardGameTokenEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_UserEventBoardGameTokenEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v8);
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
      v13 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserEventBoardGameTokenEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_UserEventBoardGameTokenEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_UserEventBoardGameTokenEntity__TypeInfo, 0);
    }
    v18 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                            Enumerator,
                            *(_QWORD *)(v17 + 8));
    v21 = v18;
    if ( v18 && v18[1].klass == (Il2CppClass *)userId )
    {
      if ( !v5 )
        sub_1C2D6EC(v18, v18);
      items = v5->fields._items;
      v23 = Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C2D6EC(v18, v18);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v18,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v21;
        sub_1C2D434((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v21, v19, v20);
      }
    }
  }
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_29;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_29:
    v29 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                                             Enumerator,
                                                             *(_QWORD *)(v29 + 8));
  if ( !v5 )
LABEL_35:
    sub_1C2D6EC(list, v6);
  return (UserEventBoardGameTokenEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v5,
                                                  (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__ToArray__);
}


UserEventBoardGameTokenEntity_array *UserEventBoardGameTokenMaster__GetList_42791880(
        UserEventBoardGameTokenMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_4C28077 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C28077 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  __int64 v11; // x2
  int max_length; // w8
  UserEventBoardGameTokenEntity_array *v13; // x22
  bool v14; // w23
  int v15; // w24
  int32_t v16; // w25
  int32_t *v17; // x8
  EventBoardGameTokenEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C28079 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28079 = 1;
  }
  entity = 0;
  Instance = (UserEventBoardGameTokenEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
  Instance = UserEventBoardGameTokenMaster__GetList_42791880(this, v10);
  if ( !Instance )
    goto LABEL_16;
  max_length = Instance->max_length;
  v13 = Instance;
  v14 = max_length > 0;
  if ( max_length >= 1 )
  {
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)max_length )
        sub_1C2D6F4(Instance, v8, v11);
      v17 = (int32_t *)v13->m_Items[v15];
      if ( !v17 )
        break;
      if ( v17[8] < 1 )
        goto LABEL_20;
      if ( !MasterData_object )
        break;
      Instance = (UserEventBoardGameTokenEntity_array *)EventBoardGameTokenMaster__TryGetEntity(
                                                          (EventBoardGameTokenMaster_o *)MasterData_object,
                                                          &entity,
                                                          v17[6],
                                                          v17[7],
                                                          0);
      if ( !entity || (entity->fields.flag & gameFlagVal) == 0 || (++v16, v16 < kindNum) )
      {
LABEL_20:
        max_length = v13->max_length;
        v14 = ++v15 < max_length;
        if ( v15 < max_length )
          continue;
      }
      return v14;
    }
LABEL_16:
    sub_1C2D6EC(Instance, v8);
  }
  return v14;
}


bool UserEventBoardGameTokenMaster__IsHavingToken(
        UserEventBoardGameTokenMaster_o *this,
        int32_t tokenId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Object_array *List_42791880; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4C28078 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_UserEventBoardGameTokenEntity___);
    sub_1C2D490(&System_Func_UserEventBoardGameTokenEntity__bool__TypeInfo);
    sub_1C2D490(&Method_UserEventBoardGameTokenMaster___c__DisplayClass5_0__IsHavingToken_b__0__);
    sub_1C2D490(&UserEventBoardGameTokenMaster___c__DisplayClass5_0_TypeInfo);
    byte_4C28078 = 1;
  }
  v5 = sub_1C2D6DC(UserEventBoardGameTokenMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_DWORD *)(v5 + 16) = tokenId;
  List_42791880 = (System_Object_array *)UserEventBoardGameTokenMaster__GetList_42791880(this, v7);
  v9 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_UserEventBoardGameTokenEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_UserEventBoardGameTokenMaster___c__DisplayClass5_0__IsHavingToken_b__0__,
    0);
  return BasicHelper__Any_object__51084700(
           List_42791880,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_UserEventBoardGameTokenEntity___);
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

  if ( (byte_4C28074 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__TryGetEntity__);
    byte_4C28074 = 1;
  }
  PK = (Il2CppObject *)UserEventBoardGameTokenEntity__CreatePK(userId, eventId, tokenId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__TryGetEntity__);
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
    sub_1C2D6EC(this, 0);
  return x->fields.tokenId == this->fields.tokenId && x->fields.num > 0;
}