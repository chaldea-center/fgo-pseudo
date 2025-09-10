void UserClassBoardSquareMaster___ctor(UserClassBoardSquareMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2800F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__);
    byte_4C2800F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    437,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__);
}


UserClassBoardSquareEntity_o *UserClassBoardSquareMaster__GetEntity(
        UserClassBoardSquareMaster_o *this,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C28010 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__);
    byte_4C28010 = 1;
  }
  PK = (Il2CppObject *)UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, 0);
  return (UserClassBoardSquareEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_338C850 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__);
}


ClassBoardSquareEntity_array *UserClassBoardSquareMaster__GetOpenedSquareEntityArray(
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *AllEntity; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Func_object__bool__o *v9; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C2800E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
    sub_1C2D490(&System_Func_ClassBoardSquareEntity__bool__TypeInfo);
    sub_1C2D490(&Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__);
    sub_1C2D490(&UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo);
    byte_4C2800E = 1;
  }
  v3 = sub_1C2D6DC(UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_object
    || (AllEntity = (System_Collections_Generic_IEnumerable_TSource__o *)ClassBoardSquareMaster__GetAllEntity(
                                                                           (ClassBoardSquareMaster_o *)Master_object,
                                                                           baseId,
                                                                           0),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___),
        !v3) )
  {
    sub_1C2D6EC(Master_object, v5);
  }
  *(_QWORD *)(v3 + 16) = Master_object;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Master_object, v7, v8);
  v9 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v3,
    Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          AllEntity,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                           v10,
                                           (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


bool UserClassBoardSquareMaster__HasSquare(
        UserClassBoardSquareMaster_o *this,
        ClassBoardSquareEntity_o *masterEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  UserClassBoardSquareMaster_o *v5; // x21
  int32_t id; // w20
  int32_t classBoardBaseId; // w22
  NetworkManager_c *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o **p_classBoardUnlockSquareIds; // x8
  UserClassBoardSquareEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v5 = this;
  if ( (byte_4C2800D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    this = (UserClassBoardSquareMaster_o *)sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C2800D = 1;
  }
  entity = 0;
  if ( !masterEntity )
    goto LABEL_17;
  classBoardBaseId = masterEntity->fields.classBoardBaseId;
  id = masterEntity->fields.id;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  if ( !UserClassBoardSquareMaster__TryGetEntity(v5, &entity, v8->static_fields->userIdNumber, classBoardBaseId, v3) )
    return 0;
  this = (UserClassBoardSquareMaster_o *)ClassBoardSquareEntity__get_HasLockId(masterEntity, 0);
  if ( !entity )
LABEL_17:
    sub_1C2D6EC(this, masterEntity);
  p_classBoardUnlockSquareIds = (System_Collections_Generic_IEnumerable_TSource__o **)&entity->fields.classBoardUnlockSquareIds;
  if ( ((unsigned __int8)this & 1) == 0 )
    p_classBoardUnlockSquareIds = (System_Collections_Generic_IEnumerable_TSource__o **)&entity->fields.classBoardSquareIds;
  return System_Linq_Enumerable__Contains_int_(
           *p_classBoardUnlockSquareIds,
           id,
           (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool UserClassBoardSquareMaster__TryGetEntity(
        UserClassBoardSquareMaster_o *this,
        UserClassBoardSquareEntity_o **entity,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C28011 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__);
    byte_4C28011 = 1;
  }
  PK = (Il2CppObject *)UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__);
}


void UserClassBoardSquareMaster___c__DisplayClass1_0___ctor(
        UserClassBoardSquareMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserClassBoardSquareMaster___c__DisplayClass1_0___GetOpenedSquareEntityArray_b__0(
        UserClassBoardSquareMaster___c__DisplayClass1_0_o *this,
        ClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  UserClassBoardSquareMaster_o *userSquareMaster; // x0

  userSquareMaster = this->fields.userSquareMaster;
  if ( !userSquareMaster )
    sub_1C2D6EC(0, x);
  return UserClassBoardSquareMaster__HasSquare(userSquareMaster, x, method);
}