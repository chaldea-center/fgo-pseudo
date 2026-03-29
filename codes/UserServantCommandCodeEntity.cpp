void UserServantCommandCodeEntity___ctor(UserServantCommandCodeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31974 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D31974 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


void UserServantCommandCodeEntity__CollectUserCommandCodeId(
        UserServantCommandCodeEntity_o *this,
        System_Collections_Generic_List_long__o *collectList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *v6; // x1
  struct System_Int64_array *userCommandCodeIds; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  unsigned __int64 v9; // x26
  __int64 max_length; // x27
  Il2CppObject *v11; // x22
  struct System_Int64_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4D31972 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__isEntityExistsFromId__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C93AD4(&long___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31972 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( this->fields.userCommandCodeIds )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    userCommandCodeIds = this->fields.userCommandCodeIds;
    if ( !userCommandCodeIds )
      goto LABEL_28;
    if ( (int)userCommandCodeIds->max_length >= 1 )
    {
      v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v9 = 0;
      max_length = (unsigned int)userCommandCodeIds->max_length;
      do
      {
        if ( v9 >= LODWORD(userCommandCodeIds->max_length) )
LABEL_29:
          sub_1C93D34(Instance);
        v11 = (Il2CppObject *)userCommandCodeIds->m_Items[v9];
        if ( (__int64)v11 >= 1 )
        {
          Instance = (Il2CppObject *)sub_1C93B7C(long___TypeInfo, 1);
          if ( !Instance )
            break;
          v6 = Instance;
          if ( !LODWORD(Instance[1].monitor) )
            goto LABEL_29;
          Instance[2].klass = (Il2CppClass *)v11;
          if ( !v8 )
            break;
          Instance = (Il2CppObject *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                       v8,
                                       (System_Int64_array *)Instance,
                                       (const MethodInfo_3465000 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__isEntityExistsFromId__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !collectList )
              break;
            System_Collections_Generic_List_long___GetEnumerator(
              &v15,
              collectList,
              (const MethodInfo_38624A4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
            v16 = v15;
            while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
                      &v16,
                      (const MethodInfo_35F74D8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
            {
              if ( v16.fields._current == v11 )
              {
                v11 = 0;
                break;
              }
            }
            System_Collections_Generic_List_Enumerator_long___Dispose(
              &v16,
              (const MethodInfo_35F74D4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
            if ( (__int64)v11 >= 1 )
            {
              items = collectList->fields._items;
              v13 = Method_System_Collections_Generic_List_long__Add__;
              ++collectList->fields._version;
              if ( !items )
                break;
              size = collectList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  collectList,
                  (int64_t)v11,
                  *(const MethodInfo_38619D0 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
              }
              else
              {
                collectList->fields._size = size + 1;
                items->m_Items[size] = (int64_t)v11;
              }
            }
          }
        }
        if ( ++v9 == max_length )
          return;
        userCommandCodeIds = this->fields.userCommandCodeIds;
      }
      while ( userCommandCodeIds );
LABEL_28:
      sub_1C93D2C(Instance, v6);
    }
  }
}


System_String_o *UserServantCommandCodeEntity__CreatePK(int64_t userId, int64_t svtId, const MethodInfo *method)
{
  if ( (byte_4D31970 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_long__long___);
    byte_4D31970 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           svtId,
           (const MethodInfo_31A2D50 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *UserServantCommandCodeEntity__CreatePrimaryKey(
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

  if ( (byte_4D3196F & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D3196F = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v11, 0);
  v5 = *(_OWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = v4;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v10, 0);
  return UserServantCommandCodeEntity__CreatePK(v6, v7, v8);
}


UserCommandCodeEntity_o *UserServantCommandCodeEntity__GetUserCommandCodeEntity(
        UserServantCommandCodeEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UserServantCommandCodeEntity_o *v4; // x20
  struct System_Int64_array *userCommandCodeIds; // x8
  int32_t max_length; // w9
  int64_t v7; // x19
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4D31971 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    this = (UserServantCommandCodeEntity_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31971 = 1;
  }
  entity = 0;
  userCommandCodeIds = v4->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0;
  max_length = userCommandCodeIds->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1C93D34(this);
  v7 = userCommandCodeIds->m_Items[index];
  if ( v7 < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v9);
  }
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         v7,
         (const MethodInfo_3465A70 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
  {
    return (UserCommandCodeEntity_o *)entity;
  }
  else
  {
    return 0;
  }
}


int32_t UserServantCommandCodeEntity__GetUserCommandCodeNumber(
        UserServantCommandCodeEntity_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  if ( (byte_4D31973 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_IndexOf_long___);
    byte_4D31973 = 1;
  }
  return System_Array__IndexOf_long_(
           this->fields.userCommandCodeIds,
           commandCodeId,
           (const MethodInfo_32AB264 *)Method_System_Array_IndexOf_long___);
}


bool UserServantCommandCodeEntity__IsAttach(
        UserServantCommandCodeEntity_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w9
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


bool UserServantCommandCodeEntity__IsCommandCardSlotOpen(
        UserServantCommandCodeEntity_o *this,
        const MethodInfo *method)
{
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w9
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


bool UserServantCommandCodeEntity__IsEquipedCommandCode(UserServantCommandCodeEntity_o *this, const MethodInfo *method)
{
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w9
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