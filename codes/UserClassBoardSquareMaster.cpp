void __fastcall UserClassBoardSquareMaster___ctor(UserClassBoardSquareMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438CAB8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__);
    byte_438CAB8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    430,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserClassBoardSquareEntity_o *__fastcall UserClassBoardSquareMaster__GetEntity(
        UserClassBoardSquareMaster_o *this,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438CAB9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__);
    byte_438CAB9 = 1;
  }
  PK = UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, *(const MethodInfo **)&classBoardBaseId);
  return (UserClassBoardSquareEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_21FBCE4 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__);
}


ClassBoardSquareEntity_array *__fastcall UserClassBoardSquareMaster__GetOpenedSquareEntityArray(
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v3; // x20
  ClassBoardSquareMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *AllEntity; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_438CAB7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
    sub_B775C4(&Method_System_Func_ClassBoardSquareEntity__bool___ctor__);
    sub_B775C4(&System_Func_ClassBoardSquareEntity__bool__TypeInfo);
    sub_B775C4(&Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__);
    sub_B775C4(&UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo);
    byte_438CAB7 = 1;
  }
  v3 = sub_B77694(UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo);
  UserClassBoardSquareMaster___c__DisplayClass1_0___ctor((UserClassBoardSquareMaster___c__DisplayClass1_0_o *)v3, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (AllEntity = (System_Collections_Generic_IEnumerable_TSource__o *)ClassBoardSquareMaster__GetAllEntity(
                                                                           Master_WarQuestSelectionMaster,
                                                                           baseId,
                                                                           0LL),
        Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___),
        !v3) )
  {
    sub_B7769C(Master_WarQuestSelectionMaster, v5);
  }
  *(_QWORD *)(v3 + 16) = Master_WarQuestSelectionMaster;
  sub_B77560(
    (BattleServantConfConponent_o *)(v3 + 16),
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    (Il2CppObject *)v3,
    Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_ClassBoardSquareEntity__bool___ctor__);
  v14 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          AllEntity,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v14,
                                           (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


bool __fastcall UserClassBoardSquareMaster__HasSquare(
        UserClassBoardSquareMaster_o *this,
        ClassBoardSquareEntity_o *masterEntity,
        const MethodInfo *method)
{
  UserClassBoardSquareMaster_o *v4; // x21
  int32_t id; // w20
  int32_t classBoardBaseId; // w22
  int64_t UserId; // x0
  const MethodInfo *v8; // x4
  __int64 v9; // x9
  UserClassBoardSquareEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_438CAB6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    this = (UserClassBoardSquareMaster_o *)sub_B775C4(&NetworkManager_TypeInfo);
    byte_438CAB6 = 1;
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
  if ( !UserClassBoardSquareMaster__TryGetEntity(v4, &entity, UserId, classBoardBaseId, v8) )
    return 0;
  this = (UserClassBoardSquareMaster_o *)ClassBoardSquareEntity__get_HasLockId(masterEntity, 0LL);
  if ( !entity )
LABEL_14:
    sub_B7769C(this, masterEntity);
  v9 = 32LL;
  if ( ((unsigned __int8)this & 1) != 0 )
    v9 = 40LL;
  return System_Linq_Enumerable__Contains_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)((char *)&entity->klass + v9),
           id,
           (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall UserClassBoardSquareMaster__TryGetEntity(
        UserClassBoardSquareMaster_o *this,
        UserClassBoardSquareEntity_o **entity,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438CABA & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__);
    byte_438CABA = 1;
  }
  PK = UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__);
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
    sub_B7769C(0LL, x);
  return UserClassBoardSquareMaster__HasSquare(userSquareMaster, x, 0LL);
}