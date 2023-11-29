void __fastcall UserServantCommandCodeEntity___ctor(UserServantCommandCodeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F819C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F819C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WarQuestSelectionMaster_o *v14; // x1
  __int64 v15; // x2
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v17; // x9
  DataMasterBase_o *v18; // x21
  unsigned __int64 v19; // x24
  int v20; // w23
  signed __int64 v21; // x25
  Il2CppObject *v22; // x22
  int v23; // w8
  _BYTE v24[32]; // [xsp+8h] [xbp-98h] BYREF
  int v25; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40F819A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, collectList);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v7);
    sub_B16FFC(&long___TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__GetEnumerator__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F819A = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v25 = 0;
  if ( this->fields.userCommandCodeIds )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    userCommandCodeIds = this->fields.userCommandCodeIds;
    if ( !userCommandCodeIds )
      goto LABEL_28;
    v17 = *(_QWORD *)&userCommandCodeIds->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = (DataMasterBase_o *)MasterData_WarQuestSelectionMaster;
      v19 = 0LL;
      v20 = 0;
      v21 = (int)v17;
      do
      {
        if ( v19 >= userCommandCodeIds->max_length )
        {
LABEL_29:
          sub_B17100(MasterData_WarQuestSelectionMaster, v14, v15);
          sub_B170A0();
        }
        v22 = (Il2CppObject *)userCommandCodeIds->m_Items[v19];
        if ( (__int64)v22 >= 1 )
        {
          MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)sub_B17014(long___TypeInfo, 1LL, v15);
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          v14 = MasterData_WarQuestSelectionMaster;
          if ( !LODWORD(MasterData_WarQuestSelectionMaster->fields._MasterName_k__BackingField) )
            goto LABEL_29;
          MasterData_WarQuestSelectionMaster->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v22;
          if ( !v18 )
            break;
          MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase__isEntityExistsFromId(
                                                                              v18,
                                                                              (System_Int64_array *)MasterData_WarQuestSelectionMaster,
                                                                              0LL);
          if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
          {
            if ( !collectList )
              break;
            System_Collections_Generic_List_long___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v24,
              collectList,
              (const MethodInfo_2F172E4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
            v26 = *(System_Collections_Generic_List_Enumerator_T__o *)v24;
            while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
                      &v26,
                      (const MethodInfo_20728A8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
            {
              if ( v26.fields.current == v22 )
              {
                v22 = 0LL;
                break;
              }
            }
            *(_DWORD *)&v24[4 * v20 + 24] = 115;
            v20 = ++v25;
            System_Collections_Generic_List_Enumerator_long___Dispose(
              &v26,
              (const MethodInfo_20728A4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
            if ( v20 )
            {
              v23 = v20 - 1;
              if ( *(_DWORD *)&v24[4 * v20 + 20] == 115 )
              {
                --v20;
                v25 = v23;
              }
            }
            if ( (__int64)v22 >= 1 )
              System_Collections_Generic_List_long___Add(
                collectList,
                (int64_t)v22,
                (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
          }
        }
        if ( (__int64)++v19 >= v21 )
          return;
        userCommandCodeIds = this->fields.userCommandCodeIds;
      }
      while ( userCommandCodeIds );
LABEL_28:
      sub_B170D4();
    }
  }
}


System_String_o *__fastcall UserServantCommandCodeEntity__CreatePK(
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  if ( (byte_40F8198 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_long__long___, svtId);
    byte_40F8198 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           svtId,
           (const MethodInfo_18C2368 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
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

  if ( (byte_40F8197 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40F8197 = 1;
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
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v11, 0LL);
  v5 = *(_OWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = v4;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v10, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_40F8199 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v5);
    this = (UserServantCommandCodeEntity_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F8199 = 1;
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
    sub_B17100(this, *(_QWORD *)&index, method);
    sub_B170A0();
  }
  v9 = userCommandCodeIds->m_Items[index];
  if ( v9 < 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         v9,
         (const MethodInfo_266F60C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
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
  if ( (byte_40F819B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_long___, commandCodeId);
    byte_40F819B = 1;
  }
  return System_Array__IndexOf_long_(
           this->fields.userCommandCodeIds,
           commandCodeId,
           (const MethodInfo_2045640 *)Method_System_Array_IndexOf_long___);
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