void __fastcall UserServantCommandCodeEntity___ctor(UserServantCommandCodeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AE201 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AE201 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserServantCommandCodeEntity__CollectUserCommandCodeId(
        UserServantCommandCodeEntity_o *this,
        System_Collections_Generic_List_long__o *collectList,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v6; // x1
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v8; // x9
  DataMasterBase_o *v9; // x21
  unsigned __int64 v10; // x24
  int v11; // w23
  signed __int64 v12; // x25
  Il2CppObject *v13; // x22
  int v14; // w8
  __int64 v15; // x0
  _BYTE v16[32]; // [xsp+8h] [xbp-98h] BYREF
  int v17; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42AE1FF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE1FF = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v17 = 0;
  if ( this->fields.userCommandCodeIds )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    userCommandCodeIds = this->fields.userCommandCodeIds;
    if ( !userCommandCodeIds )
      goto LABEL_28;
    v8 = *(_QWORD *)&userCommandCodeIds->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = (DataMasterBase_o *)Instance;
      v10 = 0LL;
      v11 = 0;
      v12 = (int)v8;
      do
      {
        if ( v10 >= userCommandCodeIds->max_length )
        {
LABEL_29:
          v15 = sub_B52A88(Instance);
          sub_B52A28(v15, 0LL);
        }
        v13 = (Il2CppObject *)userCommandCodeIds->m_Items[v10];
        if ( (__int64)v13 >= 1 )
        {
          Instance = sub_B5299C(long___TypeInfo, 1LL);
          if ( !Instance )
            break;
          v6 = Instance;
          if ( !*(_DWORD *)(Instance + 24) )
            goto LABEL_29;
          *(_QWORD *)(Instance + 32) = v13;
          if ( !v9 )
            break;
          Instance = DataMasterBase__isEntityExistsFromId(v9, (System_Int64_array *)Instance, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !collectList )
              break;
            System_Collections_Generic_List_long___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v16,
              collectList,
              (const MethodInfo_2FE2C10 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
            v18 = *(System_Collections_Generic_List_Enumerator_T__o *)v16;
            while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
                      &v18,
                      (const MethodInfo_20101B0 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
            {
              if ( v18.fields.current == v13 )
              {
                v13 = 0LL;
                break;
              }
            }
            *(_DWORD *)&v16[4 * v11 + 24] = 115;
            v11 = ++v17;
            System_Collections_Generic_List_Enumerator_long___Dispose(
              &v18,
              (const MethodInfo_20101AC *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
            if ( v11 )
            {
              v14 = v11 - 1;
              if ( *(_DWORD *)&v16[4 * v11 + 20] == 115 )
              {
                --v11;
                v17 = v14;
              }
            }
            if ( (__int64)v13 >= 1 )
              System_Collections_Generic_List_long___Add(
                collectList,
                (int64_t)v13,
                (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
          }
        }
        if ( (__int64)++v10 >= v12 )
          return;
        userCommandCodeIds = this->fields.userCommandCodeIds;
      }
      while ( userCommandCodeIds );
LABEL_28:
      sub_B52A5C(Instance, v6);
    }
  }
}


System_String_o *__fastcall UserServantCommandCodeEntity__CreatePK(
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  if ( (byte_42AE1FD & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__long___);
    byte_42AE1FD = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           svtId,
           (const MethodInfo_1A4E118 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *__fastcall UserServantCommandCodeEntity__CreatePrimaryKey(
        UserServantCommandCodeEntity_o *this,
        const MethodInfo *method)
{
  __int128 v3; // q1
  int64_t v4; // x0
  __int128 v5; // q0
  int64_t v6; // x20
  int64_t v7; // x0
  const MethodInfo *v8; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-30h]

  if ( (byte_42AE1FC & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AE1FC = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v3;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v11 = v12;
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v11, 0LL);
  v5 = *(_OWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = v4;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v10, 0LL);
  return UserServantCommandCodeEntity__CreatePK(v6, v7, v8);
}


UserCommandCodeEntity_o *__fastcall UserServantCommandCodeEntity__GetUserCommandCodeEntity(
        UserServantCommandCodeEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UserServantCommandCodeEntity_o *v4; // x20
  struct System_Int64_array *userCommandCodeIds; // x8
  int32_t max_length; // w9
  int64_t v7; // x19
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v11; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_42AE1FE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    this = (UserServantCommandCodeEntity_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE1FE = 1;
  }
  entity = 0LL;
  userCommandCodeIds = v4->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  max_length = userCommandCodeIds->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
  {
    v11 = sub_B52A88(this);
    sub_B52A28(v11, 0LL);
  }
  v7 = userCommandCodeIds->m_Items[index];
  if ( v7 < 1 )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v9);
  }
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
         &entity,
         v7,
         (const MethodInfo_23E255C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
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
  if ( (byte_42AE200 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_long___);
    byte_42AE200 = 1;
  }
  return System_Array__IndexOf_long_(
           this->fields.userCommandCodeIds,
           commandCodeId,
           (const MethodInfo_201BCA8 *)Method_System_Array_IndexOf_long___);
}


bool __fastcall UserServantCommandCodeEntity__IsAttach(
        UserServantCommandCodeEntity_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  struct System_Int64_array *userCommandCodeIds; // x10
  int max_length; // w8
  __int64 v5; // x9
  int64_t *m_Items; // x10

  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0;
  max_length = userCommandCodeIds->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0LL;
  m_Items = userCommandCodeIds->m_Items;
  while ( m_Items[v5] != userCommandCodeId )
  {
    if ( (int)++v5 >= max_length )
      return 0;
  }
  return 1;
}


bool __fastcall UserServantCommandCodeEntity__IsCommandCardSlotOpen(
        UserServantCommandCodeEntity_o *this,
        const MethodInfo *method)
{
  struct System_Int64_array *userCommandCodeIds; // x10
  int max_length; // w8
  __int64 v4; // x9
  int64_t *m_Items; // x10

  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0;
  max_length = userCommandCodeIds->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0LL;
  m_Items = userCommandCodeIds->m_Items;
  while ( m_Items[v4] )
  {
    if ( (int)++v4 >= max_length )
      return 0;
  }
  return 1;
}


bool __fastcall UserServantCommandCodeEntity__IsEquipedCommandCode(
        UserServantCommandCodeEntity_o *this,
        const MethodInfo *method)
{
  struct System_Int64_array *userCommandCodeIds; // x10
  int max_length; // w8
  __int64 v4; // x9
  int64_t *m_Items; // x10

  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0;
  max_length = userCommandCodeIds->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0LL;
  m_Items = userCommandCodeIds->m_Items;
  while ( m_Items[v4] <= 0 )
  {
    if ( (int)++v4 >= max_length )
      return 0;
  }
  return 1;
}