void __fastcall UserClassBoardSquareMaster___ctor(UserClassBoardSquareMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BD1C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__);
    byte_4A5BD1C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    431,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__);
}


UserClassBoardSquareEntity_o *__fastcall UserClassBoardSquareMaster__GetEntity(
        UserClassBoardSquareMaster_o *this,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BD1D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__);
    byte_4A5BD1D = 1;
  }
  PK = (Il2CppObject *)UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, 0LL);
  return (UserClassBoardSquareEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_311DC8C *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__);
}


ClassBoardSquareEntity_array *__fastcall UserClassBoardSquareMaster__GetOpenedSquareEntityArray(
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *AllEntity; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_Func_object__bool__o *v9; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4A5BD1B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
    sub_1B885B0(&System_Func_ClassBoardSquareEntity__bool__TypeInfo);
    sub_1B885B0(&Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__);
    sub_1B885B0(&UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo);
    byte_4A5BD1B = 1;
  }
  v3 = sub_1B887FC(UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_object
    || (AllEntity = (System_Collections_Generic_IEnumerable_TSource__o *)ClassBoardSquareMaster__GetAllEntity(
                                                                           (ClassBoardSquareMaster_o *)Master_object,
                                                                           baseId,
                                                                           0LL),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___),
        !v3) )
  {
    sub_1B8880C(Master_object, v5);
  }
  *(_QWORD *)(v3 + 16) = Master_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)Master_object, v7, v8);
  v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v3,
    Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__,
    0LL);
  v10 = System_Linq_Enumerable__Where_object_(
          AllEntity,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                           v10,
                                           (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
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
  System_Collections_Generic_IEnumerable_TSource__o **p_classBoardUnlockSquareIds; // x8
  UserClassBoardSquareEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4A5BD1A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    this = (UserClassBoardSquareMaster_o *)sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5BD1A = 1;
  }
  entity = 0LL;
  if ( !masterEntity )
    goto LABEL_13;
  classBoardBaseId = masterEntity->fields.classBoardBaseId;
  id = masterEntity->fields.id;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !UserClassBoardSquareMaster__TryGetEntity(v4, &entity, UserId, classBoardBaseId, v8) )
    return 0;
  this = (UserClassBoardSquareMaster_o *)ClassBoardSquareEntity__get_HasLockId(masterEntity, 0LL);
  if ( !entity )
LABEL_13:
    sub_1B8880C(this, masterEntity);
  p_classBoardUnlockSquareIds = (System_Collections_Generic_IEnumerable_TSource__o **)&entity->fields.classBoardUnlockSquareIds;
  if ( ((unsigned __int8)this & 1) == 0 )
    p_classBoardUnlockSquareIds = (System_Collections_Generic_IEnumerable_TSource__o **)&entity->fields.classBoardSquareIds;
  return System_Linq_Enumerable__Contains_int_(
           *p_classBoardUnlockSquareIds,
           id,
           (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall UserClassBoardSquareMaster__TryGetEntity(
        UserClassBoardSquareMaster_o *this,
        UserClassBoardSquareEntity_o **entity,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BD1E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__);
    byte_4A5BD1E = 1;
  }
  PK = (Il2CppObject *)UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__);
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
    sub_1B8880C(0LL, x);
  return UserClassBoardSquareMaster__HasSquare(userSquareMaster, x, method);
}