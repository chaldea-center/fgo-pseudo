void __fastcall UserClassBoardSquareMaster___ctor(UserClassBoardSquareMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16DD1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__,
      method,
      v2);
    byte_4B16DD1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    431,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserClassBoardSquareEntity_o *__fastcall UserClassBoardSquareMaster__GetEntity(
        UserClassBoardSquareMaster_o *this,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16DD2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&classBoardBaseId);
    byte_4B16DD2 = 1;
  }
  PK = (Il2CppObject *)UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, 0LL);
  return (UserClassBoardSquareEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_31B3198 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__);
}


ClassBoardSquareEntity_array *__fastcall UserClassBoardSquareMaster__GetOpenedSquareEntityArray(
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x20
  __int64 v20; // x1
  Il2CppObject *Master_object; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerable_TSource__o *AllEntity; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Func_object__bool__o *v33; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0

  if ( (byte_4B16DD0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___, v11, v12);
    sub_1BCA7E0(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__, v15, v16);
    sub_1BCA7E0(&UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo, v17, v18);
    byte_4B16DD0 = 1;
  }
  v19 = sub_1BCAA2C(UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_object
    || (AllEntity = (System_Collections_Generic_IEnumerable_TSource__o *)ClassBoardSquareMaster__GetAllEntity(
                                                                           (ClassBoardSquareMaster_o *)Master_object,
                                                                           baseId,
                                                                           0LL),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___),
        !v19) )
  {
    sub_1BCAA3C(Master_object, v22);
  }
  *(_QWORD *)(v19 + 16) = Master_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)Master_object, v24, v25, v26, v27, v28, v29);
  v33 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ClassBoardSquareEntity__bool__TypeInfo, v30, v31, v32);
  System_Func_object__bool____ctor(
    v33,
    (Il2CppObject *)v19,
    Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__,
    0LL);
  v34 = System_Linq_Enumerable__Where_object_(
          AllEntity,
          (System_Func_TSource__bool__o *)v33,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                           v34,
                                           (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


bool __fastcall UserClassBoardSquareMaster__HasSquare(
        UserClassBoardSquareMaster_o *this,
        ClassBoardSquareEntity_o *masterEntity,
        const MethodInfo *method)
{
  UserClassBoardSquareMaster_o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t id; // w20
  int32_t classBoardBaseId; // w22
  int64_t UserId; // x0
  const MethodInfo *v10; // x4
  System_Collections_Generic_IEnumerable_TSource__o **p_classBoardUnlockSquareIds; // x8
  UserClassBoardSquareEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B16DCF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, masterEntity, method);
    this = (UserClassBoardSquareMaster_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    byte_4B16DCF = 1;
  }
  entity = 0LL;
  if ( !masterEntity )
    goto LABEL_13;
  classBoardBaseId = masterEntity->fields.classBoardBaseId;
  id = masterEntity->fields.id;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, masterEntity);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !UserClassBoardSquareMaster__TryGetEntity(v4, &entity, UserId, classBoardBaseId, v10) )
    return 0;
  this = (UserClassBoardSquareMaster_o *)ClassBoardSquareEntity__get_HasLockId(masterEntity, 0LL);
  if ( !entity )
LABEL_13:
    sub_1BCAA3C(this, masterEntity);
  p_classBoardUnlockSquareIds = (System_Collections_Generic_IEnumerable_TSource__o **)&entity->fields.classBoardUnlockSquareIds;
  if ( ((unsigned __int8)this & 1) == 0 )
    p_classBoardUnlockSquareIds = (System_Collections_Generic_IEnumerable_TSource__o **)&entity->fields.classBoardSquareIds;
  return System_Linq_Enumerable__Contains_int_(
           *p_classBoardUnlockSquareIds,
           id,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall UserClassBoardSquareMaster__TryGetEntity(
        UserClassBoardSquareMaster_o *this,
        UserClassBoardSquareEntity_o **entity,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16DD3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__,
      entity,
      userId);
    byte_4B16DD3 = 1;
  }
  PK = (Il2CppObject *)UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__);
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
    sub_1BCAA3C(0LL, x);
  return UserClassBoardSquareMaster__HasSquare(userSquareMaster, x, method);
}