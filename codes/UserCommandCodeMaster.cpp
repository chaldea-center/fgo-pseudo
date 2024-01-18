void __fastcall UserCommandCodeMaster___ctor(UserCommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188AD1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long___ctor__, method);
    byte_4188AD1 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    250,
    (const MethodInfo_24E425C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserCommandCodeMaster__CheckCommandCodeAdd(
        UserCommandCodeMaster_o *this,
        int32_t count,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0

  v4 = UserCommandCodeMaster__getCount(this, *(const MethodInfo **)&count);
  if ( !UserGameMaster__getSelfUserGame(0LL) )
    sub_B2C434(0LL, v5);
  if ( !byte_4183CB7 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, v5);
    byte_4183CB7 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  return v4 + count > v6->static_fields->CommandCodeFrameMax;
}


void __fastcall UserCommandCodeMaster__continueDeviceUserCommandCode(
        UserCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w20
  int32_t v10; // w21
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v12; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v13; // q0
  const MethodInfo *v14; // x1
  int64_t v15; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-60h]

  if ( (byte_4188AD4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B2C35C(&UserCommandCodeEntity_TypeInfo, v5);
    sub_B2C35C(&UserCommandCodeNewManager_TypeInfo, v6);
    byte_4188AD4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v10,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v12 = *(&UserCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (UserCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[v12 - 1] == UserCommandCodeEntity_TypeInfo )
        {
          v13 = Item[2];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v17.fields.currentCryptoKey = Item[1];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v17.fields.fakeValue = v13;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v16 = v17;
          v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v16, 0LL);
          if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
          }
          UserCommandCodeNewManager__SetOld(v15, v14);
        }
      }
      if ( ++v10 >= v9 )
        return;
    }
LABEL_19:
    sub_B2C434(list, method);
  }
}


int32_t __fastcall UserCommandCodeMaster__getCount(UserCommandCodeMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w20
  int32_t v9; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v11; // x10

  if ( (byte_4188AD3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&UserCommandCodeEntity_TypeInfo, v4);
    byte_4188AD3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v9,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v11 = *(&UserCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (UserCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == UserCommandCodeEntity_TypeInfo )
        {
          ++v8;
        }
      }
      if ( ++v9 >= v7 )
        return v8;
    }
LABEL_15:
    sub_B2C434(list, method);
  }
  return 0;
}


UserCommandCodeEntity_array *__fastcall UserCommandCodeMaster__getList(
        UserCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  int32_t v12; // w22
  __int64 v13; // x10

  if ( (byte_4188AD2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserCommandCodeEntity__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo, v7);
    sub_B2C35C(&UserCommandCodeEntity_TypeInfo, v8);
    byte_4188AD2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  if ( Count >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v12,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        method = (const MethodInfo *)list;
        v13 = *(&UserCommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (UserCommandCodeEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] == UserCommandCodeEntity_TypeInfo )
        {
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__);
        }
      }
      if ( ++v12 >= Count )
        goto LABEL_13;
    }
LABEL_15:
    sub_B2C434(list, method);
  }
LABEL_13:
  if ( !v11 )
    goto LABEL_15;
  return (UserCommandCodeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserCommandCodeEntity__ToArray__);
}