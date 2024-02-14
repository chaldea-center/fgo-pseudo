void __fastcall UserClassBoardSquareMaster___ctor(UserClassBoardSquareMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215B5F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__, method);
    byte_4215B5F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    429,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserClassBoardSquareEntity_o *__fastcall UserClassBoardSquareMaster__GetEntity(
        UserClassBoardSquareMaster_o *this,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4215B60 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__,
      userId);
    byte_4215B60 = 1;
  }
  PK = UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, *(const MethodInfo **)&classBoardBaseId);
  return (UserClassBoardSquareEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_266A024 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__);
}


ClassBoardSquareEntity_array *__fastcall UserClassBoardSquareMaster__GetOpenedSquareEntityArray(
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  ClassBoardSquareMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_TSource__o *AllEntity; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4215B5E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___, v7);
    sub_B0D8A4(&Method_System_Func_ClassBoardSquareEntity__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__, v10);
    sub_B0D8A4(&UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo, v11);
    byte_4215B5E = 1;
  }
  v12 = sub_B0D974(UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo, method, v2);
  UserClassBoardSquareMaster___c__DisplayClass1_0___ctor((UserClassBoardSquareMaster___c__DisplayClass1_0_o *)v12, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (AllEntity = (System_Collections_Generic_IEnumerable_TSource__o *)ClassBoardSquareMaster__GetAllEntity(
                                                                           Master_WarQuestSelectionMaster,
                                                                           baseId,
                                                                           0LL),
        Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___),
        !v12) )
  {
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  *(_QWORD *)(v12 + 16) = Master_WarQuestSelectionMaster;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v12 + 16),
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_ClassBoardSquareEntity__bool__TypeInfo,
                                                                             v21,
                                                                             v22);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)v12,
    Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_ClassBoardSquareEntity__bool___ctor__);
  v24 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          AllEntity,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v24,
                                           (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


bool __fastcall UserClassBoardSquareMaster__HasSquare(
        UserClassBoardSquareMaster_o *this,
        ClassBoardSquareEntity_o *masterEntity,
        const MethodInfo *method)
{
  UserClassBoardSquareMaster_o *v4; // x21
  __int64 v5; // x1
  int32_t id; // w20
  int32_t classBoardBaseId; // w22
  int64_t UserId; // x0
  const MethodInfo *v9; // x4
  __int64 v10; // x9
  UserClassBoardSquareEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4215B5D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, masterEntity);
    this = (UserClassBoardSquareMaster_o *)sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    byte_4215B5D = 1;
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
  if ( !UserClassBoardSquareMaster__TryGetEntity(v4, &entity, UserId, classBoardBaseId, v9) )
    return 0;
  this = (UserClassBoardSquareMaster_o *)ClassBoardSquareEntity__get_HasLockId(masterEntity, 0LL);
  if ( !entity )
LABEL_14:
    sub_B0D97C(this);
  v10 = 32LL;
  if ( ((unsigned __int8)this & 1) != 0 )
    v10 = 40LL;
  return System_Linq_Enumerable__Contains_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)((char *)&entity->klass + v10),
           id,
           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall UserClassBoardSquareMaster__TryGetEntity(
        UserClassBoardSquareMaster_o *this,
        UserClassBoardSquareEntity_o **entity,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4215B61 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__,
      entity);
    byte_4215B61 = 1;
  }
  PK = UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__);
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
    sub_B0D97C(0LL);
  return UserClassBoardSquareMaster__HasSquare(userSquareMaster, x, 0LL);
}