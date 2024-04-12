void __fastcall FriendshipQuestDialogInfoMaster___ctor(
        FriendshipQuestDialogInfoMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B2BAD & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string___ctor__);
    byte_42B2BAD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    353,
    (const MethodInfo_23E268C *)Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FriendshipQuestDialogInfoEntity_o *__fastcall FriendshipQuestDialogInfoMaster__GetEntity(
        FriendshipQuestDialogInfoMaster_o *this,
        int32_t svtId,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B2BAB & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__GetEntity__);
    byte_42B2BAB = 1;
  }
  PK = FriendshipQuestDialogInfoEntity__CreatePK(svtId, questId, *(const MethodInfo **)&questId);
  return (FriendshipQuestDialogInfoEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_23E2728 *)Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__GetEntity__);
}


bool __fastcall FriendshipQuestDialogInfoMaster__GetLimitCountUnsealInfo(
        FriendshipQuestDialogInfoMaster_o *this,
        int32_t *svtId,
        int32_t *questId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v10; // x23
  __int64 v11; // x10
  bool result; // w0
  void *monitor; // x21
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_42B2BAE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&FriendshipQuestDialogInfoEntity_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B2BAE = 1;
  }
  *svtId = 0;
  *questId = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_B52A5C(list, svtId);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v8,
             (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v10 = Item;
      v11 = *(&FriendshipQuestDialogInfoEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (FriendshipQuestDialogInfoEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == FriendshipQuestDialogInfoEntity_TypeInfo )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v15.fields.currentCryptoKey = klass;
        *(_QWORD *)&v15.fields.fakeValue = monitor;
        *svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v15, 0LL);
        result = 1;
        *questId = (int32_t)v10[2].klass;
        return result;
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
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

  if ( (byte_42B2BAC & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__TryGetEntity__);
    byte_42B2BAC = 1;
  }
  PK = FriendshipQuestDialogInfoEntity__CreatePK(svtId, questId, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__TryGetEntity__);
}