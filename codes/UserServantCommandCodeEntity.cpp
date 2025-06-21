void __fastcall UserServantCommandCodeEntity___ctor(UserServantCommandCodeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D466 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1D466 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserServantCommandCodeEntity__CollectUserCommandCodeId(
        UserServantCommandCodeEntity_o *this,
        System_Collections_Generic_List_long__o *collectList,
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
  Il2CppObject *Instance; // x0
  Il2CppObject *v14; // x1
  __int64 v15; // x2
  struct System_Int64_array *userCommandCodeIds; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x21
  unsigned __int64 v18; // x26
  __int64 v19; // x27
  Il2CppObject *v20; // x22
  struct System_Int64_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B1D464 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, collectList);
    sub_1BCAFF8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__isEntityExistsFromId__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v8);
    sub_1BCAFF8(&long___TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__GetEnumerator__, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B1D464 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( this->fields.userCommandCodeIds )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    userCommandCodeIds = this->fields.userCommandCodeIds;
    if ( !userCommandCodeIds )
      goto LABEL_28;
    if ( (int)*(_QWORD *)&userCommandCodeIds->max_length >= 1 )
    {
      v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v18 = 0LL;
      v19 = (unsigned int)*(_QWORD *)&userCommandCodeIds->max_length;
      do
      {
        if ( v18 >= userCommandCodeIds->max_length )
LABEL_29:
          sub_1BCB25C(Instance, v14, v15);
        v20 = (Il2CppObject *)userCommandCodeIds->m_Items[v18];
        if ( (__int64)v20 >= 1 )
        {
          Instance = (Il2CppObject *)sub_1BCB0A0(long___TypeInfo, 1LL);
          if ( !Instance )
            break;
          v14 = Instance;
          if ( !LODWORD(Instance[1].monitor) )
            goto LABEL_29;
          Instance[2].klass = (Il2CppClass *)v20;
          if ( !v17 )
            break;
          Instance = (Il2CppObject *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                       v17,
                                       (System_Int64_array *)Instance,
                                       (const MethodInfo_32C9938 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__isEntityExistsFromId__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !collectList )
              break;
            System_Collections_Generic_List_long___GetEnumerator(
              &v24,
              collectList,
              (const MethodInfo_36A26D8 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
            v25 = v24;
            while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
                      &v25,
                      (const MethodInfo_344C9DC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
            {
              if ( v25.fields._current == v20 )
              {
                v20 = 0LL;
                break;
              }
            }
            System_Collections_Generic_List_Enumerator_long___Dispose(
              &v25,
              (const MethodInfo_344C9D8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
            if ( (__int64)v20 >= 1 )
            {
              items = collectList->fields._items;
              v22 = Method_System_Collections_Generic_List_long__Add__;
              ++collectList->fields._version;
              if ( !items )
                break;
              size = collectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  collectList,
                  (int64_t)v20,
                  *(const MethodInfo_36A1C04 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                collectList->fields._size = size + 1;
                items->m_Items[size] = (int64_t)v20;
              }
            }
          }
        }
        if ( ++v18 == v19 )
          return;
        userCommandCodeIds = this->fields.userCommandCodeIds;
      }
      while ( userCommandCodeIds );
LABEL_28:
      sub_1BCB254(Instance, v14);
    }
  }
}


System_String_o *__fastcall UserServantCommandCodeEntity__CreatePK(
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  if ( (byte_4B1D462 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_long__long___, svtId);
    byte_4B1D462 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           svtId,
           (const MethodInfo_3018DB8 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *__fastcall UserServantCommandCodeEntity__CreatePrimaryKey(
        UserServantCommandCodeEntity_o *this,
        const MethodInfo *method)
{
  __int128 v3; // q0
  int64_t v4; // x0
  __int128 v5; // q1
  int64_t v6; // x20
  int64_t v7; // x0
  const MethodInfo *v8; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-40h]

  if ( (byte_4B1D461 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B1D461 = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v11, 0LL);
  v5 = *(_OWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = v4;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v10, 0LL);
  return UserServantCommandCodeEntity__CreatePK(v6, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeEntity_o *__fastcall UserServantCommandCodeEntity__GetUserCommandCodeEntity(
        UserServantCommandCodeEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UserServantCommandCodeEntity_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Int64_array *userCommandCodeIds; // x8
  int32_t max_length; // w9
  int64_t v9; // x19
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B1D463 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&index);
    sub_1BCAFF8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v5);
    this = (UserServantCommandCodeEntity_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1D463 = 1;
  }
  entity = 0LL;
  userCommandCodeIds = v4->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  max_length = userCommandCodeIds->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
    sub_1BCB25C(this, *(_QWORD *)&index, method);
  v9 = userCommandCodeIds->m_Items[index];
  if ( v9 < 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v11);
  }
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         v9,
         (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
  {
    return (UserCommandCodeEntity_o *)entity;
  }
  else
  {
    return 0LL;
  }
}


int32_t __fastcall UserServantCommandCodeEntity__GetUserCommandCodeNumber(
        UserServantCommandCodeEntity_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  if ( (byte_4B1D465 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_IndexOf_long___, commandCodeId);
    byte_4B1D465 = 1;
  }
  return System_Array__IndexOf_long_(
           this->fields.userCommandCodeIds,
           commandCodeId,
           (const MethodInfo_3119148 *)Method_System_Array_IndexOf_long___);
}


bool __fastcall UserServantCommandCodeEntity__IsAttach(
        UserServantCommandCodeEntity_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  struct System_Int64_array *userCommandCodeIds; // x8
  il2cpp_array_size_t max_length; // w9
  bool v5; // vf
  int v6; // w9
  int v7; // w10
  int64_t v8; // x11
  bool result; // w0

  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0;
  max_length = userCommandCodeIds->max_length;
  v5 = __OFSUB__(max_length, 1);
  v6 = max_length - 1;
  if ( v6 < 0 != v5 )
    return 0;
  v7 = 0;
  do
  {
    v8 = userCommandCodeIds->m_Items[v7];
    result = v8 == userCommandCodeId;
    if ( v8 == userCommandCodeId )
      break;
  }
  while ( v6 != v7++ );
  return result;
}


bool __fastcall UserServantCommandCodeEntity__IsCommandCardSlotOpen(
        UserServantCommandCodeEntity_o *this,
        const MethodInfo *method)
{
  struct System_Int64_array *userCommandCodeIds; // x8
  il2cpp_array_size_t max_length; // w9
  bool v4; // vf
  int v5; // w9
  int v6; // w10
  int64_t v7; // x11
  bool result; // w0

  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0;
  max_length = userCommandCodeIds->max_length;
  v4 = __OFSUB__(max_length, 1);
  v5 = max_length - 1;
  if ( v5 < 0 != v4 )
    return 0;
  v6 = 0;
  do
  {
    v7 = userCommandCodeIds->m_Items[v6];
    result = v7 == 0;
    if ( !v7 )
      break;
  }
  while ( v5 != v6++ );
  return result;
}


bool __fastcall UserServantCommandCodeEntity__IsEquipedCommandCode(
        UserServantCommandCodeEntity_o *this,
        const MethodInfo *method)
{
  struct System_Int64_array *userCommandCodeIds; // x8
  il2cpp_array_size_t max_length; // w9
  bool v4; // vf
  int v5; // w9
  int v6; // w10
  __int64 v7; // x11

  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0;
  max_length = userCommandCodeIds->max_length;
  v4 = __OFSUB__(max_length, 1);
  v5 = max_length - 1;
  if ( v5 < 0 != v4 )
    return 0;
  v6 = 0;
  do
  {
    v7 = userCommandCodeIds->m_Items[v6];
    if ( v5 == v6 )
      break;
    ++v6;
  }
  while ( v7 < 1 );
  return v7 > 0;
}