void __fastcall FriendshipQuestDialogInfoMaster___ctor(
        FriendshipQuestDialogInfoMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB516 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EB516 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    353,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FriendshipQuestDialogInfoEntity_o *__fastcall FriendshipQuestDialogInfoMaster__GetEntity(
        FriendshipQuestDialogInfoMaster_o *this,
        int32_t svtId,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EB514 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__GetEntity__,
      svtId,
      questId,
      method);
    byte_42EB514 = 1;
  }
  PK = FriendshipQuestDialogInfoEntity__CreatePK(svtId, questId, *(const MethodInfo **)&questId);
  return (FriendshipQuestDialogInfoEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_23FB260 *)Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__GetEntity__);
}


bool __fastcall FriendshipQuestDialogInfoMaster__GetLimitCountUnsealInfo(
        FriendshipQuestDialogInfoMaster_o *this,
        int32_t *svtId,
        int32_t *questId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v17; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v19; // x23
  __int64 v20; // x10
  bool result; // w0
  void *monitor; // x21
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_42EB517 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)svtId,
      (_DWORD)questId,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&FriendshipQuestDialogInfoEntity_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14, v15);
    byte_42EB517 = 1;
  }
  *svtId = 0;
  *questId = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_B5D69C(list, svtId);
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v17,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v19 = Item;
      v20 = *(&FriendshipQuestDialogInfoEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20
        && (FriendshipQuestDialogInfoEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] == FriendshipQuestDialogInfoEntity_TypeInfo )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v24.fields.currentCryptoKey = klass;
        *(_QWORD *)&v24.fields.fakeValue = monitor;
        *svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v24, 0LL);
        result = 1;
        *questId = (int32_t)v19[2].klass;
        return result;
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v17;
    if ( !list )
      goto LABEL_13;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FriendshipQuestDialogInfoMaster__TryGetEntity(
        FriendshipQuestDialogInfoMaster_o *this,
        FriendshipQuestDialogInfoEntity_o **entity,
        int32_t svtId,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EB515 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&questId);
    byte_42EB515 = 1;
  }
  PK = FriendshipQuestDialogInfoEntity__CreatePK(svtId, questId, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__TryGetEntity__);
}