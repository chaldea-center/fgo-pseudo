void __fastcall UserServantCommandCodeEntity___ctor(UserServantCommandCodeEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6B69 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E6B69 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserServantCommandCodeEntity__CollectUserCommandCodeId(
        UserServantCommandCodeEntity_o *this,
        System_Collections_Generic_List_long__o *collectList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 Instance; // x0
  __int64 v28; // x1
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v30; // x9
  DataMasterBase_o *v31; // x21
  unsigned __int64 v32; // x24
  int v33; // w23
  signed __int64 v34; // x25
  Il2CppObject *v35; // x22
  int v36; // w8
  __int64 v37; // x0
  _BYTE v38[32]; // [xsp+8h] [xbp-98h] BYREF
  int v39; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42E6B67 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, (_DWORD)collectList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v12, v13, v14);
    sub_B5D5C4(&long___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42E6B67 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v39 = 0;
  if ( this->fields.userCommandCodeIds )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    userCommandCodeIds = this->fields.userCommandCodeIds;
    if ( !userCommandCodeIds )
      goto LABEL_28;
    v30 = *(_QWORD *)&userCommandCodeIds->max_length;
    if ( (int)v30 >= 1 )
    {
      v31 = (DataMasterBase_o *)Instance;
      v32 = 0LL;
      v33 = 0;
      v34 = (int)v30;
      do
      {
        if ( v32 >= userCommandCodeIds->max_length )
        {
LABEL_29:
          v37 = sub_B5D6C8(Instance);
          sub_B5D668(v37, 0LL);
        }
        v35 = (Il2CppObject *)userCommandCodeIds->m_Items[v32];
        if ( (__int64)v35 >= 1 )
        {
          Instance = sub_B5D5DC(long___TypeInfo, 1LL);
          if ( !Instance )
            break;
          v28 = Instance;
          if ( !*(_DWORD *)(Instance + 24) )
            goto LABEL_29;
          *(_QWORD *)(Instance + 32) = v35;
          if ( !v31 )
            break;
          Instance = DataMasterBase__isEntityExistsFromId(v31, (System_Int64_array *)Instance, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !collectList )
              break;
            System_Collections_Generic_List_long___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v38,
              collectList,
              (const MethodInfo_30485CC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
            v40 = *(System_Collections_Generic_List_Enumerator_T__o *)v38;
            while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
                      &v40,
                      (const MethodInfo_201D824 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
            {
              if ( v40.fields.current == v35 )
              {
                v35 = 0LL;
                break;
              }
            }
            *(_DWORD *)&v38[4 * v33 + 24] = 115;
            v33 = ++v39;
            System_Collections_Generic_List_Enumerator_long___Dispose(
              &v40,
              (const MethodInfo_201D820 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
            if ( v33 )
            {
              v36 = v33 - 1;
              if ( *(_DWORD *)&v38[4 * v33 + 20] == 115 )
              {
                --v33;
                v39 = v36;
              }
            }
            if ( (__int64)v35 >= 1 )
              System_Collections_Generic_List_long___Add(
                collectList,
                (int64_t)v35,
                (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
          }
        }
        if ( (__int64)++v32 >= v34 )
          return;
        userCommandCodeIds = this->fields.userCommandCodeIds;
      }
      while ( userCommandCodeIds );
LABEL_28:
      sub_B5D69C(Instance, v28);
    }
  }
}


System_String_o *__fastcall UserServantCommandCodeEntity__CreatePK(
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E6B65 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__long___, svtId, (_DWORD)method, v3);
    byte_42E6B65 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           svtId,
           (const MethodInfo_1AE31E0 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *__fastcall UserServantCommandCodeEntity__CreatePrimaryKey(
        UserServantCommandCodeEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int128 v5; // q1
  int64_t v6; // x0
  __int128 v7; // q0
  int64_t v8; // x20
  int64_t v9; // x0
  const MethodInfo *v10; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-30h]

  if ( (byte_42E6B64 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6B64 = 1;
  }
  v5 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v13 = v14;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v13, 0LL);
  v7 = *(_OWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = v6;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v12, 0LL);
  return UserServantCommandCodeEntity__CreatePK(v8, v9, v10);
}


UserCommandCodeEntity_o *__fastcall UserServantCommandCodeEntity__GetUserCommandCodeEntity(
        UserServantCommandCodeEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserServantCommandCodeEntity_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Int64_array *userCommandCodeIds; // x8
  int32_t max_length; // w9
  int64_t v14; // x19
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  __int64 v18; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v5 = this;
  if ( (byte_42E6B66 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v6, v7, v8);
    this = (UserServantCommandCodeEntity_o *)sub_B5D5C4(
                                               &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                               v9,
                                               v10,
                                               v11);
    byte_42E6B66 = 1;
  }
  entity = 0LL;
  userCommandCodeIds = v5->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  max_length = userCommandCodeIds->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
  {
    v18 = sub_B5D6C8(this);
    sub_B5D668(v18, 0LL);
  }
  v14 = userCommandCodeIds->m_Items[index];
  if ( v14 < 1 )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v16);
  }
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
         &entity,
         v14,
         (const MethodInfo_23FB094 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
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
  __int64 v3; // x3

  if ( (byte_42E6B68 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_long___, commandCodeId, (_DWORD)method, v3);
    byte_42E6B68 = 1;
  }
  return System_Array__IndexOf_long_(
           this->fields.userCommandCodeIds,
           commandCodeId,
           (const MethodInfo_1FC184C *)Method_System_Array_IndexOf_long___);
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