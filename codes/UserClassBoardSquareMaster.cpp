void __fastcall UserClassBoardSquareMaster___ctor(UserClassBoardSquareMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FAAC0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__, method);
    byte_40FAAC0 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    429,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserClassBoardSquareEntity_o *__fastcall UserClassBoardSquareMaster__GetEntity(
        UserClassBoardSquareMaster_o *this,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FAAC1 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__,
      userId);
    byte_40FAAC1 = 1;
  }
  PK = UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, *(const MethodInfo **)&classBoardBaseId);
  return (UserClassBoardSquareEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_266F7D8 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__);
}


ClassBoardSquareEntity_array *__fastcall UserClassBoardSquareMaster__GetOpenedSquareEntityArray(
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  ClassBoardSquareMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_TSource__o *AllEntity; // x19
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_40FAABF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___, v9);
    sub_B16FFC(&Method_System_Func_ClassBoardSquareEntity__bool___ctor__, v10);
    sub_B16FFC(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v11);
    sub_B16FFC(&Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__, v12);
    sub_B16FFC(&UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo, v13);
    byte_40FAABF = 1;
  }
  v14 = sub_B170CC(UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo, method, v2, v3, v4);
  UserClassBoardSquareMaster___c__DisplayClass1_0___ctor((UserClassBoardSquareMaster___c__DisplayClass1_0_o *)v14, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (AllEntity = (System_Collections_Generic_IEnumerable_TSource__o *)ClassBoardSquareMaster__GetAllEntity(
                                                                           Master_WarQuestSelectionMaster,
                                                                           baseId,
                                                                           0LL),
        v17 = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___),
        !v14) )
  {
    sub_B170D4();
  }
  *(_QWORD *)(v14 + 16) = v17;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), v17, v18, v19, v20, v21, v22, v23);
  v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_ClassBoardSquareEntity__bool__TypeInfo,
                                                                             v24,
                                                                             v25,
                                                                             v26,
                                                                             v27);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v28,
    (Il2CppObject *)v14,
    Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_ClassBoardSquareEntity__bool___ctor__);
  v29 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          AllEntity,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v29,
                                           (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


bool __fastcall UserClassBoardSquareMaster__HasSquare(
        UserClassBoardSquareMaster_o *this,
        ClassBoardSquareEntity_o *masterEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t id; // w20
  int32_t classBoardBaseId; // w22
  int64_t UserId; // x0
  const MethodInfo *v9; // x4
  bool HasLockId; // w0
  __int64 v11; // x9
  UserClassBoardSquareEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FAABE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, masterEntity);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    byte_40FAABE = 1;
  }
  entity = 0LL;
  if ( !masterEntity )
    goto LABEL_14;
  classBoardBaseId = masterEntity->fields.classBoardBaseId;
  id = masterEntity->fields.id;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !UserClassBoardSquareMaster__TryGetEntity(this, &entity, UserId, classBoardBaseId, v9) )
    return 0;
  HasLockId = ClassBoardSquareEntity__get_HasLockId(masterEntity, 0LL);
  if ( !entity )
LABEL_14:
    sub_B170D4();
  v11 = 32LL;
  if ( HasLockId )
    v11 = 40LL;
  return System_Linq_Enumerable__Contains_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)((char *)&entity->klass + v11),
           id,
           (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall UserClassBoardSquareMaster__TryGetEntity(
        UserClassBoardSquareMaster_o *this,
        UserClassBoardSquareEntity_o **entity,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FAAC2 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__,
      entity);
    byte_40FAAC2 = 1;
  }
  PK = UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__);
}


void __fastcall UserClassBoardSquareMaster___c__DisplayClass1_0___ctor(
        UserClassBoardSquareMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserClassBoardSquareMaster___c__DisplayClass1_0___GetOpenedSquareEntityArray_b__0(
        UserClassBoardSquareMaster___c__DisplayClass1_0_o *this,
        ClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  UserClassBoardSquareMaster_o *userSquareMaster; // x0

  userSquareMaster = this->fields.userSquareMaster;
  if ( !userSquareMaster )
    sub_B170D4();
  return UserClassBoardSquareMaster__HasSquare(userSquareMaster, x, 0LL);
}