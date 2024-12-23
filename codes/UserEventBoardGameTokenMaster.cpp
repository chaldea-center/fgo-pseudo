void __fastcall UserEventBoardGameTokenMaster___ctor(UserEventBoardGameTokenMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67828 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string___ctor__,
      method);
    byte_4B67828 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    313,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string___ctor__);
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

  if ( (byte_4B67826 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__GetEntity__,
      userId);
    byte_4B67826 = 1;
  }
  PK = (Il2CppObject *)UserEventBoardGameTokenEntity__CreatePK(userId, eventId, tokenId, *(const MethodInfo **)&tokenId);
  return (UserEventBoardGameTokenEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_31FDB1C *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__GetEntity__);
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
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  Il2CppObject *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x8
  UserEventBoardGameTokenEntity_c *v34; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v37; // x10
  __int64 size; // x11
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_4B67829 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, userId);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__ToArray__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_UserEventBoardGameTokenEntity__TypeInfo, v11);
    sub_1BE4ACC(&UserEventBoardGameTokenEntity_TypeInfo, v12);
    byte_4B67829 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UserEventBoardGameTokenEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                            Enumerator,
                            *(_QWORD *)(v25 + 8));
    v33 = (int64_t)v26;
    if ( v26 )
    {
      v34 = UserEventBoardGameTokenEntity_TypeInfo;
      methodPtr_low = LOBYTE(UserEventBoardGameTokenEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v26->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (UserEventBoardGameTokenEntity_c *)v26->klass->_2.typeHierarchy[methodPtr_low - 1] != UserEventBoardGameTokenEntity_TypeInfo )
      {
        sub_1BE4FE8(v26);
LABEL_36:
        sub_1BE4D28(v26, v34);
      }
      if ( v26[1].klass == (Il2CppClass *)userId )
      {
        if ( !v13 )
          goto LABEL_36;
        items = v13->fields._items;
        v37 = Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          sub_1BE4D28(v26, v34);
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            v26,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v33;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 4), v33, v27, v28, v29, v30, v31, v32);
        }
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_31;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_31:
    v43 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
                                                             Enumerator,
                                                             *(_QWORD *)(v43 + 8));
  if ( !v13 )
LABEL_38:
    sub_1BE4D28(list, v14);
  return (UserEventBoardGameTokenEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v13,
                                                  (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_UserEventBoardGameTokenEntity__ToArray__);
}


UserEventBoardGameTokenEntity_array *__fastcall UserEventBoardGameTokenMaster__GetList_41026224(
        UserEventBoardGameTokenMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_4B6782A & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    byte_4B6782A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    byte_4B61717 = 1;
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

  if ( (byte_4B6782C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___, *(_QWORD *)&gameFlagVal);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B6782C = 1;
  }
  entity = 0LL;
  Instance = (UserEventBoardGameTokenEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
  Instance = UserEventBoardGameTokenMaster__GetList_41026224(this, v11);
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
        sub_1BE4D30(Instance, v9);
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
    sub_1BE4D28(Instance, v9);
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
  System_Object_array *List_41026224; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4B6782B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_UserEventBoardGameTokenEntity___, *(_QWORD *)&tokenId);
    sub_1BE4ACC(&System_Func_UserEventBoardGameTokenEntity__bool__TypeInfo, v5);
    sub_1BE4ACC(&Method_UserEventBoardGameTokenMaster___c__DisplayClass5_0__IsHavingToken_b__0__, v6);
    sub_1BE4ACC(&UserEventBoardGameTokenMaster___c__DisplayClass5_0_TypeInfo, v7);
    byte_4B6782B = 1;
  }
  v8 = sub_1BE4D18(UserEventBoardGameTokenMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BE4D28(v9, v10);
  *(_DWORD *)(v8 + 16) = tokenId;
  List_41026224 = (System_Object_array *)UserEventBoardGameTokenMaster__GetList_41026224(this, v10);
  v12 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_UserEventBoardGameTokenEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_UserEventBoardGameTokenMaster___c__DisplayClass5_0__IsHavingToken_b__0__,
    0LL);
  return BasicHelper__Any_object__49561896(
           List_41026224,
           (System_Func_T__bool__o *)v12,
           (const MethodInfo_2F44128 *)Method_BasicHelper_Any_UserEventBoardGameTokenEntity___);
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

  if ( (byte_4B67827 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__TryGetEntity__,
      entity);
    byte_4B67827 = 1;
  }
  PK = (Il2CppObject *)UserEventBoardGameTokenEntity__CreatePK(userId, eventId, tokenId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_UserEventBoardGameTokenMaster__UserEventBoardGameTokenEntity__string__TryGetEntity__);
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
    sub_1BE4D28(this, 0LL);
  return x->fields.tokenId == this->fields.tokenId && x->fields.num > 0;
}