void __fastcall FriendshipQuestDialogInfoMaster___ctor(
        FriendshipQuestDialogInfoMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B396 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string___ctor__);
    byte_4A5B396 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    354,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FriendshipQuestDialogInfoEntity_o *__fastcall FriendshipQuestDialogInfoMaster__GetEntity(
        FriendshipQuestDialogInfoMaster_o *this,
        int32_t svtId,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B394 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__GetEntity__);
    byte_4A5B394 = 1;
  }
  PK = (Il2CppObject *)FriendshipQuestDialogInfoEntity__CreatePK(svtId, questId, *(const MethodInfo **)&questId);
  return (FriendshipQuestDialogInfoEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_311DC8C *)Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__GetEntity__);
}


bool __fastcall FriendshipQuestDialogInfoMaster__GetLimitCountUnsealInfo(
        FriendshipQuestDialogInfoMaster_o *this,
        int32_t *svtId,
        int32_t *questId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v10; // x23
  __int64 methodPtr_low; // x10
  bool result; // w0
  void *monitor; // x21
  Il2CppClass *klass; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A5B397 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&FriendshipQuestDialogInfoEntity_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5B397 = 1;
  }
  *svtId = 0;
  *questId = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1B8880C(list, svtId);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v10 = Item;
      methodPtr_low = LOBYTE(FriendshipQuestDialogInfoEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (FriendshipQuestDialogInfoEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == FriendshipQuestDialogInfoEntity_TypeInfo )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v15.fields.currentCryptoKey = klass;
        *(_QWORD *)&v15.fields.fakeValue = monitor;
        *svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
        result = 1;
        *questId = (int32_t)v10[2].klass;
        return result;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
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
  Il2CppObject *PK; // x2

  if ( (byte_4A5B395 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__TryGetEntity__);
    byte_4A5B395 = 1;
  }
  PK = (Il2CppObject *)FriendshipQuestDialogInfoEntity__CreatePK(svtId, questId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__TryGetEntity__);
}