void __fastcall UserEventBoardGameTokenMaster___ctor(UserEventBoardGameTokenMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBB58 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string___ctor__,
      method);
    byte_49BBB58 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    315,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventBoardGameTokenEntity_o *__fastcall UserEventBoardGameTokenMaster__GetEntity(
        UserEventBoardGameTokenMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BBB56 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__GetEntity__,
      userId);
    byte_49BBB56 = 1;
  }
  PK = (Il2CppObject *)UserEventBoardGameTokenEntity__CreatePK(userId, eventId, tokenId, *(const MethodInfo **)&tokenId);
  return (UserEventBoardGameTokenEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_31A2454 *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__GetEntity__);
}


UserEventBoardGameTokenEntity_array *__fastcall UserEventBoardGameTokenMaster__GetList(
        UserEventBoardGameTokenMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_49BBB59 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_UserEventBoardGameTokenEntity__GetEnumerator__,
      userId);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v5);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_UserEventBoardGameTokenEntity__TypeInfo, v6);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__ToArray__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_UserEventBoardGameTokenEntity__TypeInfo, v11);
    byte_49BBB59 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_UserEventBoardGameTokenEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_UserEventBoardGameTokenEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserEventBoardGameTokenEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_UserEventBoardGameTokenEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_UserEventBoardGameTokenEntity__TypeInfo, 0LL);
    }
    v25 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                            Enumerator,
                            *(_QWORD *)(v24 + 8));
    v28 = v25;
    if ( v25 && v25[1].klass == (Il2CppClass *)userId )
    {
      if ( !v12 )
        sub_1B4D1EC(v25, v25);
      items = v12->fields._items;
      v30 = Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B4D1EC(v25, v25);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          v25,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_1B4CF34((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v28, v26, v27);
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_29;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_29:
    v36 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                                                             Enumerator,
                                                             *(_QWORD *)(v36 + 8));
  if ( !v12 )
LABEL_35:
    sub_1B4D1EC(list, v13);
  return (UserEventBoardGameTokenEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v12,
                                                  (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__ToArray__);
}


UserEventBoardGameTokenEntity_array *__fastcall UserEventBoardGameTokenMaster__GetList_40665212(
        UserEventBoardGameTokenMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_49BBB5A & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    byte_49BBB5A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    byte_49B57A5 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  return UserEventBoardGameTokenMaster__GetList(this, v4->static_fields->userIdNumber, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventBoardGameTokenMaster__IsHavingGroupToken(
        UserEventBoardGameTokenMaster_o *this,
        int32_t gameFlagVal,
        int32_t kindNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UserEventBoardGameTokenEntity_array *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v11; // x1
  int max_length; // w8
  UserEventBoardGameTokenEntity_array *v13; // x22
  bool v14; // w23
  int v15; // w24
  int32_t v16; // w25
  int32_t *v17; // x8
  EventBoardGameTokenEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49BBB5C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___, *(_QWORD *)&gameFlagVal);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49BBB5C = 1;
  }
  entity = 0LL;
  Instance = (UserEventBoardGameTokenEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
  Instance = UserEventBoardGameTokenMaster__GetList_40665212(this, v11);
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
        sub_1B4D1F4(Instance, v9);
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
                                                          0LL);
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
    sub_1B4D1EC(Instance, v9);
  }
  return v14;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventBoardGameTokenMaster__IsHavingToken(
        UserEventBoardGameTokenMaster_o *this,
        int32_t tokenId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  const MethodInfo *v10; // x1
  System_Object_array *List_40665212; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_49BBB5B & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_UserEventBoardGameTokenEntity___, *(_QWORD *)&tokenId);
    sub_1B4CF90(&System_Func_UserEventBoardGameTokenEntity__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_UserEventBoardGameTokenMaster___c__DisplayClass5_0__IsHavingToken_b__0__, v6);
    sub_1B4CF90(&UserEventBoardGameTokenMaster___c__DisplayClass5_0_TypeInfo, v7);
    byte_49BBB5B = 1;
  }
  v8 = sub_1B4D1DC(UserEventBoardGameTokenMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B4D1EC(v9, v10);
  *(_DWORD *)(v8 + 16) = tokenId;
  List_40665212 = (System_Object_array *)UserEventBoardGameTokenMaster__GetList_40665212(this, v10);
  v12 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_UserEventBoardGameTokenEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_UserEventBoardGameTokenMaster___c__DisplayClass5_0__IsHavingToken_b__0__,
    0LL);
  return BasicHelper__Any_object__49202496(
           List_40665212,
           (System_Func_T__bool__o *)v12,
           (const MethodInfo_2EEC540 *)Method_BasicHelper_Any_UserEventBoardGameTokenEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventBoardGameTokenMaster__TryGetEntity(
        UserEventBoardGameTokenMaster_o *this,
        UserEventBoardGameTokenEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BBB57 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__TryGetEntity__,
      entity);
    byte_49BBB57 = 1;
  }
  PK = (Il2CppObject *)UserEventBoardGameTokenEntity__CreatePK(userId, eventId, tokenId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__TryGetEntity__);
}


void __fastcall UserEventBoardGameTokenMaster___c__DisplayClass5_0___ctor(
        UserEventBoardGameTokenMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserEventBoardGameTokenMaster___c__DisplayClass5_0___IsHavingToken_b__0(
        UserEventBoardGameTokenMaster___c__DisplayClass5_0_o *this,
        UserEventBoardGameTokenEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.tokenId == this->fields.tokenId && x->fields.num > 0;
}