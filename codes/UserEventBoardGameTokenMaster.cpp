void __fastcall UserEventBoardGameTokenMaster___ctor(UserEventBoardGameTokenMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BD7C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string___ctor__);
    byte_4A5BD7C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    309,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string___ctor__);
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

  if ( (byte_4A5BD7A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__GetEntity__);
    byte_4A5BD7A = 1;
  }
  PK = (Il2CppObject *)UserEventBoardGameTokenEntity__CreatePK(userId, eventId, tokenId, *(const MethodInfo **)&tokenId);
  return (UserEventBoardGameTokenEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_311DC8C *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__GetEntity__);
}


UserEventBoardGameTokenEntity_array *__fastcall UserEventBoardGameTokenMaster__GetList(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *v21; // x8
  UserEventBoardGameTokenEntity_c *v22; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  Il2CppClass **v27; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4A5BD7D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserEventBoardGameTokenEntity__TypeInfo);
    sub_1B885B0(&UserEventBoardGameTokenEntity_TypeInfo);
    byte_4A5BD7D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserEventBoardGameTokenEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                            Enumerator,
                            *(_QWORD *)(v17 + 8));
    v21 = v18;
    if ( v18 )
    {
      v22 = UserEventBoardGameTokenEntity_TypeInfo;
      methodPtr_low = LOBYTE(UserEventBoardGameTokenEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v18->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (UserEventBoardGameTokenEntity_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != UserEventBoardGameTokenEntity_TypeInfo )
      {
        sub_1B88ACC(v18);
LABEL_36:
        sub_1B8880C(v18, v22);
      }
      if ( v18[1].klass == (Il2CppClass *)userId )
      {
        if ( !v5 )
          goto LABEL_36;
        items = v5->fields._items;
        v25 = Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          sub_1B8880C(v18, v22);
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v18,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v21;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v21, v19, v20);
        }
      }
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_31;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_31:
    v31 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                             Enumerator,
                                                             *(_QWORD *)(v31 + 8));
  if ( !v5 )
LABEL_38:
    sub_1B8880C(list, v6);
  return (UserEventBoardGameTokenEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v5,
                                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__ToArray__);
}


UserEventBoardGameTokenEntity_array *__fastcall UserEventBoardGameTokenMaster__GetList_40068712(
        UserEventBoardGameTokenMaster_o *this,
        const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4A5BD7E & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5BD7E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventBoardGameTokenMaster__GetList(this, UserId, v4);
}


bool __fastcall UserEventBoardGameTokenMaster__IsHavingGroupToken(
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

  if ( (byte_4A5BD80 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BD80 = 1;
  }
  entity = 0LL;
  Instance = (UserEventBoardGameTokenEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
  Instance = UserEventBoardGameTokenMaster__GetList_40068712(this, v10);
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
        sub_1B88814(Instance, v8);
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
                                                          0LL);
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
    sub_1B8880C(Instance, v8);
  }
  return v13;
}


bool __fastcall UserEventBoardGameTokenMaster__IsHavingToken(
        UserEventBoardGameTokenMaster_o *this,
        int32_t tokenId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Object_array *List_40068712; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4A5BD7F & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_UserEventBoardGameTokenEntity___);
    sub_1B885B0(&System_Func_UserEventBoardGameTokenEntity__bool__TypeInfo);
    sub_1B885B0(&Method_UserEventBoardGameTokenMaster___c__DisplayClass5_0__IsHavingToken_b__0__);
    sub_1B885B0(&UserEventBoardGameTokenMaster___c__DisplayClass5_0_TypeInfo);
    byte_4A5BD7F = 1;
  }
  v5 = sub_1B887FC(UserEventBoardGameTokenMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = tokenId;
  List_40068712 = (System_Object_array *)UserEventBoardGameTokenMaster__GetList_40068712(this, v7);
  v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserEventBoardGameTokenEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_UserEventBoardGameTokenMaster___c__DisplayClass5_0__IsHavingToken_b__0__,
    0LL);
  return BasicHelper__Any_object__48672124(
           List_40068712,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_UserEventBoardGameTokenEntity___);
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

  if ( (byte_4A5BD7B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__TryGetEntity__);
    byte_4A5BD7B = 1;
  }
  PK = (Il2CppObject *)UserEventBoardGameTokenEntity__CreatePK(userId, eventId, tokenId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__TryGetEntity__);
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
    sub_1B8880C(this, 0LL);
  return x->fields.tokenId == this->fields.tokenId && x->fields.num > 0;
}