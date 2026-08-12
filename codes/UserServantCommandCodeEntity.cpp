void UserServantCommandCodeEntity___ctor(UserServantCommandCodeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597186C & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_597186C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


void UserServantCommandCodeEntity__CollectUserCommandCodeId(
        UserServantCommandCodeEntity_o *this,
        System_Collections_Generic_List_long__o *collectList,
        const MethodInfo *method)
{
  struct System_Int64_array *userCommandCodeIds; // x8
  Il2CppObject *Instance; // x0
  Il2CppObject *v7; // x1
  struct System_Int64_array *v8; // x8
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  unsigned __int64 v11; // x24
  __int64 v12; // x23
  struct System_Int64_array *v13; // x8
  Il2CppObject *v14; // x22
  __int128 v15; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_597186A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__isEntityExistsFromId__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597186A = 1;
  }
  userCommandCodeIds = this->fields.userCommandCodeIds;
  memset(&v20, 0, sizeof(v20));
  if ( userCommandCodeIds )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v8 = this->fields.userCommandCodeIds;
    if ( !v8 )
      goto LABEL_27;
    max_length = v8->max_length;
    if ( (int)max_length >= 1 )
    {
      v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v11 = 0;
      v12 = (unsigned int)max_length;
      while ( 1 )
      {
        v13 = this->fields.userCommandCodeIds;
        if ( !v13 )
          break;
        if ( v11 >= LODWORD(v13->max_length) )
          goto LABEL_28;
        v14 = (Il2CppObject *)v13->m_Items[v11];
        if ( (__int64)v14 >= 1 )
        {
          Instance = (Il2CppObject *)sub_2213B20(long___TypeInfo, 1);
          if ( !Instance )
            break;
          v7 = Instance;
          if ( !LODWORD(Instance[1].monitor) )
LABEL_28:
            sub_2213CE4(Instance);
          Instance[2].klass = (Il2CppClass *)v14;
          if ( !v10 )
            break;
          Instance = (Il2CppObject *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                       v10,
                                       (System_Int64_array *)Instance,
                                       (const MethodInfo_3F12868 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__isEntityExistsFromId__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !collectList )
              break;
            System_Collections_Generic_List_long___GetEnumerator(
              &v19,
              collectList,
              (const MethodInfo_446CD4C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
            v15 = *(_OWORD *)&v19.fields._list;
            v19.fields._list = 0;
            *(_QWORD *)&v19.fields._index = &v20;
            *(_OWORD *)&v20.fields._list = v15;
            v20.fields._current = v19.fields._current;
            while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
                      &v20,
                      (const MethodInfo_40F7FA8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
            {
              if ( v20.fields._current == v14 )
              {
                v14 = 0;
                break;
              }
            }
            System_Collections_Generic_List_Enumerator_long___Dispose(
              &v20,
              (const MethodInfo_40F7FA4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
            if ( (__int64)v14 >= 1 )
            {
              items = collectList->fields._items;
              v17 = Method_System_Collections_Generic_List_long__Add__;
              ++collectList->fields._version;
              if ( !items )
                break;
              size = collectList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  collectList,
                  (int64_t)v14,
                  *(const MethodInfo_446C29C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
              }
              else
              {
                collectList->fields._size = size + 1;
                items->m_Items[size] = (int64_t)v14;
              }
            }
          }
        }
        if ( ++v11 == v12 )
          return;
      }
LABEL_27:
      sub_2213CDC(Instance, v7);
    }
  }
}


System_String_o *UserServantCommandCodeEntity__CreatePK(int64_t userId, int64_t svtId, const MethodInfo *method)
{
  if ( (byte_5971868 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_long__long___);
    byte_5971868 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           svtId,
           (const MethodInfo_38545BC *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *UserServantCommandCodeEntity__CreatePrimaryKey(
        UserServantCommandCodeEntity_o *this,
        const MethodInfo *method)
{
  __int128 v3; // q1
  int v4; // w8
  int64_t v5; // x0
  __int128 v6; // q1
  int64_t v7; // x20
  int64_t v8; // x0
  const MethodInfo *v9; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+40h] [xbp-40h]

  if ( (byte_5971867 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5971867 = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v4 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v3;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v12 = v13;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v12, 0);
  v6 = *(_OWORD *)&this->fields.svtId.fields.fakeValue;
  v7 = v5;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v11, 0);
  return UserServantCommandCodeEntity__CreatePK(v7, v8, v9);
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
  if ( (byte_5971869 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    this = (UserServantCommandCodeEntity_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971869 = 1;
  }
  userCommandCodeIds = v4->fields.userCommandCodeIds;
  entity = 0;
  if ( !userCommandCodeIds )
    return 0;
  max_length = userCommandCodeIds->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_2213CE4(this);
  v7 = userCommandCodeIds->m_Items[index];
  if ( v7 < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v9);
  }
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         v7,
         (const MethodInfo_3F131DC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
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
  if ( (byte_597186B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_long___);
    byte_597186B = 1;
  }
  return System_Array__IndexOf_long_(
           this->fields.userCommandCodeIds,
           commandCodeId,
           (const MethodInfo_3A2E664 *)Method_System_Array_IndexOf_long___);
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
  int64_t *m_Items; // x8
  __int64 v8; // t1
  bool result; // w0

  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0;
  max_length = userCommandCodeIds->max_length;
  v5 = __OFSUB__(max_length, 1);
  v6 = max_length - 1;
  if ( v6 < 0 != v5 )
    return 0;
  m_Items = userCommandCodeIds->m_Items;
  do
  {
    v8 = *m_Items++;
    result = v8 == userCommandCodeId;
    if ( v8 == userCommandCodeId )
      break;
  }
  while ( v6-- );
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
  int64_t *m_Items; // x8
  __int64 v7; // t1
  bool result; // w0

  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0;
  max_length = userCommandCodeIds->max_length;
  v4 = __OFSUB__(max_length, 1);
  v5 = max_length - 1;
  if ( v5 < 0 != v4 )
    return 0;
  m_Items = userCommandCodeIds->m_Items;
  do
  {
    v7 = *m_Items++;
    result = v7 == 0;
    if ( !v7 )
      break;
  }
  while ( v5-- );
  return result;
}


bool UserServantCommandCodeEntity__IsEquipedCommandCode(UserServantCommandCodeEntity_o *this, const MethodInfo *method)
{
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w9
  bool v4; // vf
  int v5; // w9
  int64_t *m_Items; // x8
  __int64 v7; // t1
  bool result; // w0

  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0;
  max_length = userCommandCodeIds->max_length;
  v4 = __OFSUB__(max_length, 1);
  v5 = max_length - 1;
  if ( v5 < 0 != v4 )
    return 0;
  m_Items = userCommandCodeIds->m_Items;
  do
  {
    v7 = *m_Items++;
    result = v7 > 0;
    if ( v7 > 0 )
      break;
  }
  while ( v5-- );
  return result;
}