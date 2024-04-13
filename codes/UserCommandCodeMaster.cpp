void __fastcall UserCommandCodeMaster___ctor(UserCommandCodeMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA199 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EA199 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    251,
    (const MethodInfo_23FAF9C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserCommandCodeMaster__CheckCommandCodeAdd(
        UserCommandCodeMaster_o *this,
        int32_t count,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v5; // x1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0

  v4 = UserCommandCodeMaster__getCount(this, *(const MethodInfo **)&count);
  if ( !UserGameMaster__getSelfUserGame(0LL) )
    sub_B5D69C(0LL, v5);
  if ( !byte_42E4B73 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v5, v6, v7);
    byte_42E4B73 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return v4 + count > v8->static_fields->CommandCodeFrameMax;
}


void __fastcall UserCommandCodeMaster__continueDeviceUserCommandCode(
        UserCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v19; // w20
  int32_t v20; // w21
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v22; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v23; // q0
  const MethodInfo *v24; // x1
  int64_t v25; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-60h]

  if ( (byte_42EA19C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UserCommandCodeEntity_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UserCommandCodeNewManager_TypeInfo, v14, v15, v16);
    byte_42EA19C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v20,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v22 = *(&UserCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
          && (UserCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == UserCommandCodeEntity_TypeInfo )
        {
          v23 = Item[2];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v27.fields.currentCryptoKey = Item[1];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v27.fields.fakeValue = v23;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v26 = v27;
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v26, 0LL);
          if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
          }
          UserCommandCodeNewManager__SetOld(v25, v24);
        }
      }
      if ( ++v20 >= v19 )
        return;
    }
LABEL_19:
    sub_B5D69C(list, method);
  }
}


int32_t __fastcall UserCommandCodeMaster__getCount(UserCommandCodeMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w21
  int32_t v14; // w20
  int32_t v15; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v17; // x10

  if ( (byte_42EA19B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&UserCommandCodeEntity_TypeInfo, v8, v9, v10);
    byte_42EA19B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v15,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v17 = *(&UserCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (UserCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] == UserCommandCodeEntity_TypeInfo )
        {
          ++v14;
        }
      }
      if ( ++v15 >= v13 )
        return v14;
    }
LABEL_15:
    sub_B5D69C(list, method);
  }
  return 0;
}


UserCommandCodeEntity_array *__fastcall UserCommandCodeMaster__getList(
        UserCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x21
  int32_t v26; // w22
  __int64 v27; // x10

  if ( (byte_42EA19A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserCommandCodeEntity__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UserCommandCodeEntity_TypeInfo, v20, v21, v22);
    byte_42EA19A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  if ( Count >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v26,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        method = (const MethodInfo *)list;
        v27 = *(&UserCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v27
          && (UserCommandCodeEntity_c *)list->klass->_2.typeHierarchy[v27 - 1] == UserCommandCodeEntity_TypeInfo )
        {
          if ( !v25 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v25,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__);
        }
      }
      if ( ++v26 >= Count )
        goto LABEL_13;
    }
LABEL_15:
    sub_B5D69C(list, method);
  }
LABEL_13:
  if ( !v25 )
    goto LABEL_15;
  return (UserCommandCodeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserCommandCodeEntity__ToArray__);
}