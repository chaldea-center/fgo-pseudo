void FriendshipQuestDialogInfoMaster___ctor(FriendshipQuestDialogInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938A12 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string___ctor__);
    byte_5938A12 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    362,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FriendshipQuestDialogInfoEntity_o *FriendshipQuestDialogInfoMaster__GetEntity(
        FriendshipQuestDialogInfoMaster_o *this,
        int32_t svtId,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938A10 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__GetEntity__);
    byte_5938A10 = 1;
  }
  PK = (Il2CppObject *)FriendshipQuestDialogInfoEntity__CreatePK(svtId, questId, *(const MethodInfo **)&questId);
  return (FriendshipQuestDialogInfoEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_3EE2044 *)Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__GetEntity__);
}


bool FriendshipQuestDialogInfoMaster__GetLimitCountUnsealInfo(
        FriendshipQuestDialogInfoMaster_o *this,
        int32_t *svtId,
        int32_t *questId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  bool result; // w0
  Il2CppObject *v11; // x23
  Il2CppClass *klass; // x21
  void *monitor; // x22
  int32_t v14; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_5938A13 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_FriendshipQuestDialogInfoEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_FriendshipQuestDialogInfoEntity__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5938A13 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  *svtId = 0;
  *questId = 0;
  if ( !list )
    goto LABEL_11;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_FriendshipQuestDialogInfoEntity__get_Count__) < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_11:
    sub_21FFECC(list, svtId);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_FriendshipQuestDialogInfoEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_11;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_FriendshipQuestDialogInfoEntity__get_Item__);
    if ( Item )
    {
      v11 = Item;
      klass = Item[1].klass;
      monitor = Item[1].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, svtId);
      *(_QWORD *)&v15.fields.currentCryptoKey = klass;
      *(_QWORD *)&v15.fields.fakeValue = monitor;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v15, 0);
      result = 1;
      *svtId = v14;
      *questId = (int32_t)v11[2].klass;
      return result;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_11;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool FriendshipQuestDialogInfoMaster__TryGetEntity(
        FriendshipQuestDialogInfoMaster_o *this,
        FriendshipQuestDialogInfoEntity_o **entity,
        int32_t svtId,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938A11 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__TryGetEntity__);
    byte_5938A11 = 1;
  }
  PK = (Il2CppObject *)FriendshipQuestDialogInfoEntity__CreatePK(svtId, questId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_FriendshipQuestDialogInfoMaster__FriendshipQuestDialogInfoEntity__string__TryGetEntity__);
}