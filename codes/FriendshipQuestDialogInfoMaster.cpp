void __fastcall FriendshipQuestDialogInfoMaster___ctor(
        FriendshipQuestDialogInfoMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B0226A & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string___ctor__,
      method);
    byte_4B0226A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    360,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FriendshipQuestDialogInfoEntity_o *__fastcall FriendshipQuestDialogInfoMaster__GetEntity(
        FriendshipQuestDialogInfoMaster_o *this,
        int32_t svtId,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B02268 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B02268 = 1;
  }
  PK = (Il2CppObject *)FriendshipQuestDialogInfoEntity__CreatePK(svtId, questId, *(const MethodInfo **)&questId);
  return (FriendshipQuestDialogInfoEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_32B3B28 *)Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__GetEntity__);
}


bool __fastcall FriendshipQuestDialogInfoMaster__GetLimitCountUnsealInfo(
        FriendshipQuestDialogInfoMaster_o *this,
        int32_t *svtId,
        int32_t *questId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w22
  Il2CppObject *Item; // x0
  bool result; // w0
  Il2CppObject *v13; // x23
  void *monitor; // x21
  Il2CppClass *klass; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B0226B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_FriendshipQuestDialogInfoEntity__get_Count__, svtId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_FriendshipQuestDialogInfoEntity__get_Item__, v7);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4B0226B = 1;
  }
  *svtId = 0;
  *questId = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_11;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_FriendshipQuestDialogInfoEntity__get_Count__) < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_11:
    sub_1BC3264(list, svtId);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_FriendshipQuestDialogInfoEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_11;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v10,
             (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_FriendshipQuestDialogInfoEntity__get_Item__);
    if ( Item )
    {
      v13 = Item;
      klass = Item[1].klass;
      monitor = Item[1].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v16.fields.currentCryptoKey = klass;
      *(_QWORD *)&v16.fields.fakeValue = monitor;
      *svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v16, 0LL);
      result = 1;
      *questId = (int32_t)v13[2].klass;
      return result;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_11;
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

  if ( (byte_4B02269 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__TryGetEntity__,
      entity);
    byte_4B02269 = 1;
  }
  PK = (Il2CppObject *)FriendshipQuestDialogInfoEntity__CreatePK(svtId, questId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__TryGetEntity__);
}