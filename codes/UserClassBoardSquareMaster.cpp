void __fastcall UserClassBoardSquareMaster___ctor(UserClassBoardSquareMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188A9E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__, method);
    byte_4188A9E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    429,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserClassBoardSquareEntity_o *__fastcall UserClassBoardSquareMaster__GetEntity(
        UserClassBoardSquareMaster_o *this,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4188A9F & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__,
      userId);
    byte_4188A9F = 1;
  }
  PK = UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, *(const MethodInfo **)&classBoardBaseId);
  return (UserClassBoardSquareEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_24E4520 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__);
}


ClassBoardSquareEntity_array *__fastcall UserClassBoardSquareMaster__GetOpenedSquareEntityArray(
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  ClassBoardSquareMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *AllEntity; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4188A9D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___, v6);
    sub_B2C35C(&Method_System_Func_ClassBoardSquareEntity__bool___ctor__, v7);
    sub_B2C35C(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v8);
    sub_B2C35C(&Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__, v9);
    sub_B2C35C(&UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo, v10);
    byte_4188A9D = 1;
  }
  v11 = sub_B2C42C(UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo);
  UserClassBoardSquareMaster___c__DisplayClass1_0___ctor((UserClassBoardSquareMaster___c__DisplayClass1_0_o *)v11, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (AllEntity = (System_Collections_Generic_IEnumerable_TSource__o *)ClassBoardSquareMaster__GetAllEntity(
                                                                           Master_WarQuestSelectionMaster,
                                                                           baseId,
                                                                           0LL),
        Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___),
        !v11) )
  {
    sub_B2C434(Master_WarQuestSelectionMaster, v13);
  }
  *(_QWORD *)(v11 + 16) = Master_WarQuestSelectionMaster;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v11 + 16),
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v11,
    Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_ClassBoardSquareEntity__bool___ctor__);
  v22 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          AllEntity,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v22,
                                           (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
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
  if ( (byte_4188A9C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, masterEntity);
    this = (UserClassBoardSquareMaster_o *)sub_B2C35C(&NetworkManager_TypeInfo, v5);
    byte_4188A9C = 1;
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
    sub_B2C434(this, masterEntity);
  v10 = 32LL;
  if ( ((unsigned __int8)this & 1) != 0 )
    v10 = 40LL;
  return System_Linq_Enumerable__Contains_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)((char *)&entity->klass + v10),
           id,
           (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall UserClassBoardSquareMaster__TryGetEntity(
        UserClassBoardSquareMaster_o *this,
        UserClassBoardSquareEntity_o **entity,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4188AA0 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__,
      entity);
    byte_4188AA0 = 1;
  }
  PK = UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__);
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
    sub_B2C434(0LL, x);
  return UserClassBoardSquareMaster__HasSquare(userSquareMaster, x, 0LL);
}