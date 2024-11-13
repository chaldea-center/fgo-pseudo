void __fastcall UserServantCommandCodeEntity___ctor(UserServantCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1700C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B1700C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserServantCommandCodeEntity__CollectUserCommandCodeId(
        UserServantCommandCodeEntity_o *this,
        System_Collections_Generic_List_long__o *collectList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Instance; // x0
  Il2CppObject *v20; // x1
  struct System_Int64_array *userCommandCodeIds; // x8
  DataMasterBase_o *v22; // x21
  unsigned __int64 v23; // x26
  __int64 v24; // x27
  Il2CppObject *v25; // x22
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B1700A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, collectList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v9, v10);
    sub_1BCA7E0(&long___TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B1700A = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( this->fields.userCommandCodeIds )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    userCommandCodeIds = this->fields.userCommandCodeIds;
    if ( !userCommandCodeIds )
      goto LABEL_28;
    if ( (int)*(_QWORD *)&userCommandCodeIds->max_length >= 1 )
    {
      v22 = (DataMasterBase_o *)Instance;
      v23 = 0LL;
      v24 = (unsigned int)*(_QWORD *)&userCommandCodeIds->max_length;
      do
      {
        if ( v23 >= userCommandCodeIds->max_length )
LABEL_29:
          sub_1BCAA44(Instance, v20);
        v25 = (Il2CppObject *)userCommandCodeIds->m_Items[v23];
        if ( (__int64)v25 >= 1 )
        {
          Instance = (Il2CppObject *)sub_1BCA888(long___TypeInfo, 1LL);
          if ( !Instance )
            break;
          v20 = Instance;
          if ( !LODWORD(Instance[1].monitor) )
            goto LABEL_29;
          Instance[2].klass = (Il2CppClass *)v25;
          if ( !v22 )
            break;
          Instance = (Il2CppObject *)DataMasterBase__isEntityExistsFromId(v22, (System_Int64_array *)Instance, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !collectList )
              break;
            System_Collections_Generic_List_long___GetEnumerator(
              &v29,
              collectList,
              (const MethodInfo_358A764 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
            v30 = v29;
            while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
                      &v30,
                      (const MethodInfo_3313F28 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
            {
              if ( v30.fields._current == v25 )
              {
                v25 = 0LL;
                break;
              }
            }
            System_Collections_Generic_List_Enumerator_long___Dispose(
              &v30,
              (const MethodInfo_3313F24 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
            if ( (__int64)v25 >= 1 )
            {
              items = collectList->fields._items;
              v27 = Method_System_Collections_Generic_List_long__Add__;
              ++collectList->fields._version;
              if ( !items )
                break;
              size = collectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  collectList,
                  (int64_t)v25,
                  *(const MethodInfo_3589C90 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
              }
              else
              {
                collectList->fields._size = size + 1;
                items->m_Items[size] = (int64_t)v25;
              }
            }
          }
        }
        if ( ++v23 == v24 )
          return;
        userCommandCodeIds = this->fields.userCommandCodeIds;
      }
      while ( userCommandCodeIds );
LABEL_28:
      sub_1BCAA3C(Instance, v20);
    }
  }
}


System_String_o *__fastcall UserServantCommandCodeEntity__CreatePK(
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  if ( (byte_4B17008 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_long__long___, svtId, method);
    byte_4B17008 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           svtId,
           (const MethodInfo_2F11040 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *__fastcall UserServantCommandCodeEntity__CreatePrimaryKey(
        UserServantCommandCodeEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int128 v4; // q0
  int64_t v5; // x0
  __int128 v6; // q1
  int64_t v7; // x20
  int64_t v8; // x0
  const MethodInfo *v9; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+40h] [xbp-40h]

  if ( (byte_4B17007 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B17007 = 1;
  }
  v4 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v12 = v13;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v12, 0LL);
  v6 = *(_OWORD *)&this->fields.svtId.fields.fakeValue;
  v7 = v5;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v11, 0LL);
  return UserServantCommandCodeEntity__CreatePK(v7, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeEntity_o *__fastcall UserServantCommandCodeEntity__GetUserCommandCodeEntity(
        UserServantCommandCodeEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UserServantCommandCodeEntity_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Int64_array *userCommandCodeIds; // x8
  int32_t max_length; // w9
  int64_t v11; // x19
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B17009 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v5, v6);
    this = (UserServantCommandCodeEntity_o *)sub_1BCA7E0(
                                               &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                               v7,
                                               v8);
    byte_4B17009 = 1;
  }
  entity = 0LL;
  userCommandCodeIds = v4->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  max_length = userCommandCodeIds->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
    sub_1BCAA44(this, *(_QWORD *)&index);
  v11 = userCommandCodeIds->m_Items[index];
  if ( v11 < 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v13);
  }
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         v11,
         (const MethodInfo_31B3040 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
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
  if ( (byte_4B1700B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_long___, commandCodeId, method);
    byte_4B1700B = 1;
  }
  return System_Array__IndexOf_long_(
           this->fields.userCommandCodeIds,
           commandCodeId,
           (const MethodInfo_300EAB0 *)Method_System_Array_IndexOf_long___);
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