void __fastcall FriendshipQuestDialogInfoMaster___ctor(
        FriendshipQuestDialogInfoMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FE73D & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string___ctor__,
      method);
    byte_49FE73D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    354,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FriendshipQuestDialogInfoEntity_o *__fastcall FriendshipQuestDialogInfoMaster__GetEntity(
        FriendshipQuestDialogInfoMaster_o *this,
        int32_t svtId,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FE73B & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49FE73B = 1;
  }
  PK = (Il2CppObject *)FriendshipQuestDialogInfoEntity__CreatePK(svtId, questId, *(const MethodInfo **)&questId);
  return (FriendshipQuestDialogInfoEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_30D64D8 *)Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__GetEntity__);
}


bool __fastcall FriendshipQuestDialogInfoMaster__GetLimitCountUnsealInfo(
        FriendshipQuestDialogInfoMaster_o *this,
        int32_t *svtId,
        int32_t *questId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v11; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v13; // x23
  __int64 methodPtr_low; // x10
  bool result; // w0
  void *monitor; // x21
  Il2CppClass *klass; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FE73E & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, svtId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B64870(&FriendshipQuestDialogInfoEntity_TypeInfo, v8);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_49FE73E = 1;
  }
  *svtId = 0;
  *questId = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1B64ACC(list, svtId);
  v11 = 0;
  while ( v11 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v11,
             (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v13 = Item;
      methodPtr_low = LOBYTE(FriendshipQuestDialogInfoEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (FriendshipQuestDialogInfoEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == FriendshipQuestDialogInfoEntity_TypeInfo )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v18.fields.currentCryptoKey = klass;
        *(_QWORD *)&v18.fields.fakeValue = monitor;
        *svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v18, 0LL);
        result = 1;
        *questId = (int32_t)v13[2].klass;
        return result;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v11;
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
  Il2CppObject *PK; // x2

  if ( (byte_49FE73C & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__TryGetEntity__,
      entity);
    byte_49FE73C = 1;
  }
  PK = (Il2CppObject *)FriendshipQuestDialogInfoEntity__CreatePK(svtId, questId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__TryGetEntity__);
}