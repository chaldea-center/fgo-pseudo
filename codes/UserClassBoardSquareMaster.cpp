void __fastcall UserClassBoardSquareMaster___ctor(UserClassBoardSquareMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA166 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EA166 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    430,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserClassBoardSquareEntity_o *__fastcall UserClassBoardSquareMaster__GetEntity(
        UserClassBoardSquareMaster_o *this,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EA167 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__,
      userId,
      classBoardBaseId,
      method);
    byte_42EA167 = 1;
  }
  PK = UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, *(const MethodInfo **)&classBoardBaseId);
  return (UserClassBoardSquareEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_23FB260 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__);
}


ClassBoardSquareEntity_array *__fastcall UserClassBoardSquareMaster__GetOpenedSquareEntityArray(
        int32_t baseId,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  __int64 v29; // x20
  ClassBoardSquareMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v31; // x1
  System_Collections_Generic_IEnumerable_TSource__o *AllEntity; // x19
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v39; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0

  if ( (byte_42EA165 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_ClassBoardSquareEntity__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v20, v21, v22);
    sub_B5D5C4(
      &Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__,
      v23,
      v24,
      v25);
    sub_B5D5C4(&UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo, v26, v27, v28);
    byte_42EA165 = 1;
  }
  v29 = sub_B5D694(UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo);
  UserClassBoardSquareMaster___c__DisplayClass1_0___ctor((UserClassBoardSquareMaster___c__DisplayClass1_0_o *)v29, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (AllEntity = (System_Collections_Generic_IEnumerable_TSource__o *)ClassBoardSquareMaster__GetAllEntity(
                                                                           Master_WarQuestSelectionMaster,
                                                                           baseId,
                                                                           0LL),
        Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___),
        !v29) )
  {
    sub_B5D69C(Master_WarQuestSelectionMaster, v31);
  }
  *(_QWORD *)(v29 + 16) = Master_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v29 + 16),
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v39,
    (Il2CppObject *)v29,
    Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_ClassBoardSquareEntity__bool___ctor__);
  v40 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          AllEntity,
          (System_Func_TSource__bool__o *)v39,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v40,
                                           (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


bool __fastcall UserClassBoardSquareMaster__HasSquare(
        UserClassBoardSquareMaster_o *this,
        ClassBoardSquareEntity_o *masterEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserClassBoardSquareMaster_o *v5; // x21
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t id; // w20
  int32_t classBoardBaseId; // w22
  int64_t UserId; // x0
  const MethodInfo *v12; // x4
  __int64 v13; // x9
  UserClassBoardSquareEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_42EA164 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, (_DWORD)masterEntity, (_DWORD)method, v3);
    this = (UserClassBoardSquareMaster_o *)sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    byte_42EA164 = 1;
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
  if ( !UserClassBoardSquareMaster__TryGetEntity(v5, &entity, UserId, classBoardBaseId, v12) )
    return 0;
  this = (UserClassBoardSquareMaster_o *)ClassBoardSquareEntity__get_HasLockId(masterEntity, 0LL);
  if ( !entity )
LABEL_14:
    sub_B5D69C(this, masterEntity);
  v13 = 32LL;
  if ( ((unsigned __int8)this & 1) != 0 )
    v13 = 40LL;
  return System_Linq_Enumerable__Contains_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)((char *)&entity->klass + v13),
           id,
           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserClassBoardSquareMaster__TryGetEntity(
        UserClassBoardSquareMaster_o *this,
        UserClassBoardSquareEntity_o **entity,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EA168 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&classBoardBaseId);
    byte_42EA168 = 1;
  }
  PK = UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__);
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
    sub_B5D69C(0LL, x);
  return UserClassBoardSquareMaster__HasSquare(userSquareMaster, x, 0LL);
}