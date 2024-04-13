void __fastcall UserEquipMaster___ctor(UserEquipMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA1CF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long___ctor__, (_DWORD)method, v2, v3);
    byte_42EA1CF = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    49,
    (const MethodInfo_23FAF9C *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long___ctor__);
}


void __fastcall UserEquipMaster__continueDeviceEquipLvInfo(UserEquipMaster_o *this, const MethodInfo *method)
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
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v22; // x22
  __int64 v23; // x10
  void *monitor; // x23
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x24
  int32_t v26; // w0
  const MethodInfo *v27; // x2
  int32_t v28; // w22
  int32_t v29; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_42EA1D1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UserEquipEntity_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UserEquipNewManager_TypeInfo, v14, v15, v16);
    byte_42EA1D1 = 1;
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
        v22 = Item;
        v23 = *(&UserEquipEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v23
          && (UserEquipEntity_c *)Item->klass->_2.typeHierarchy[v23 - 1] == UserEquipEntity_TypeInfo )
        {
          klass = Item[2].klass;
          monitor = Item[2].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v30.fields.currentCryptoKey = klass;
          *(_QWORD *)&v30.fields.fakeValue = monitor;
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL);
          v28 = (int32_t)v22[3].klass;
          v29 = v26;
          if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
          }
          UserEquipNewManager__SetOld(v29, v28, v27);
        }
      }
      if ( ++v20 >= v19 )
        return;
    }
LABEL_19:
    sub_B5D69C(list, method);
  }
}


UserEquipEntity_array *__fastcall UserEquipMaster__getList(
        UserEquipMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t v4; // x19
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x22
  int32_t v27; // w23
  __int64 v28; // x10

  v4 = userId;
  if ( (byte_42EA1D0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      userId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_UserEquipEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UserEquipEntity_TypeInfo, v21, v22, v23);
    byte_42EA1D0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
  if ( Count >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        v28 = *(&UserEquipEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (UserEquipEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == UserEquipEntity_TypeInfo
          && list->fields._syncRoot == (Il2CppObject *)v4 )
        {
          if ( !v26 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserEquipEntity__Add__);
        }
      }
      if ( ++v27 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(list, userId);
  }
LABEL_14:
  if ( !v26 )
    goto LABEL_16;
  return (UserEquipEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserEquipEntity__ToArray__);
}