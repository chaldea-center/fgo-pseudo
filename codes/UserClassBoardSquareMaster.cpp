void __fastcall UserClassBoardSquareMaster___ctor(UserClassBoardSquareMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B45764 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__, method);
    byte_4B45764 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    437,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__);
}


UserClassBoardSquareEntity_o *__fastcall UserClassBoardSquareMaster__GetEntity(
        UserClassBoardSquareMaster_o *this,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B45765 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__,
      userId);
    byte_4B45765 = 1;
  }
  PK = (Il2CppObject *)UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, 0LL);
  return (UserClassBoardSquareEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_32E68F4 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__);
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
  __int64 v10; // x20
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *AllEntity; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Func_object__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4B45763 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, method);
    sub_1BDB878(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___, v6);
    sub_1BDB878(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v7);
    sub_1BDB878(&Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__, v8);
    sub_1BDB878(&UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo, v9);
    byte_4B45763 = 1;
  }
  v10 = sub_1BDBAC4(UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_object
    || (AllEntity = (System_Collections_Generic_IEnumerable_TSource__o *)ClassBoardSquareMaster__GetAllEntity(
                                                                           (ClassBoardSquareMaster_o *)Master_object,
                                                                           baseId,
                                                                           0LL),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___),
        !v10) )
  {
    sub_1BDBAD4(Master_object, v12);
  }
  *(_QWORD *)(v10 + 16) = Master_object;
  sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)Master_object, v14, v15);
  v16 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v10,
    Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__,
    0LL);
  v17 = System_Linq_Enumerable__Where_object_(
          AllEntity,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                           v17,
                                           (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


bool __fastcall UserClassBoardSquareMaster__HasSquare(
        UserClassBoardSquareMaster_o *this,
        ClassBoardSquareEntity_o *masterEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  UserClassBoardSquareMaster_o *v5; // x21
  __int64 v6; // x1
  int32_t id; // w20
  int32_t classBoardBaseId; // w22
  NetworkManager_c *v9; // x0
  System_Collections_Generic_IEnumerable_TSource__o **p_classBoardUnlockSquareIds; // x8
  UserClassBoardSquareEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v5 = this;
  if ( (byte_4B45762 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_int___, masterEntity);
    this = (UserClassBoardSquareMaster_o *)sub_1BDB878(&NetworkManager_TypeInfo, v6);
    byte_4B45762 = 1;
  }
  entity = 0LL;
  if ( !masterEntity )
    goto LABEL_17;
  classBoardBaseId = masterEntity->fields.classBoardBaseId;
  id = masterEntity->fields.id;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, masterEntity);
    byte_4B3ED56 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  if ( !UserClassBoardSquareMaster__TryGetEntity(v5, &entity, v9->static_fields->userIdNumber, classBoardBaseId, v3) )
    return 0;
  this = (UserClassBoardSquareMaster_o *)ClassBoardSquareEntity__get_HasLockId(masterEntity, 0LL);
  if ( !entity )
LABEL_17:
    sub_1BDBAD4(this, masterEntity);
  p_classBoardUnlockSquareIds = (System_Collections_Generic_IEnumerable_TSource__o **)&entity->fields.classBoardUnlockSquareIds;
  if ( ((unsigned __int8)this & 1) == 0 )
    p_classBoardUnlockSquareIds = (System_Collections_Generic_IEnumerable_TSource__o **)&entity->fields.classBoardSquareIds;
  return System_Linq_Enumerable__Contains_int_(
           *p_classBoardUnlockSquareIds,
           id,
           (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall UserClassBoardSquareMaster__TryGetEntity(
        UserClassBoardSquareMaster_o *this,
        UserClassBoardSquareEntity_o **entity,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B45766 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__,
      entity);
    byte_4B45766 = 1;
  }
  PK = (Il2CppObject *)UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__);
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
    sub_1BDBAD4(0LL, x);
  return UserClassBoardSquareMaster__HasSquare(userSquareMaster, x, method);
}