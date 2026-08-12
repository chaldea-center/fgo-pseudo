void UserClassBoardSquareMaster___ctor(UserClassBoardSquareMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597161D & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__);
    byte_597161D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    439,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string___ctor__);
}


UserClassBoardSquareEntity_o *UserClassBoardSquareMaster__GetEntity(
        UserClassBoardSquareMaster_o *this,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_597161E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__);
    byte_597161E = 1;
  }
  PK = (Il2CppObject *)UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, 0);
  return (UserClassBoardSquareEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_3F157EC *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__GetEntity__);
}


ClassBoardSquareEntity_array *UserClassBoardSquareMaster__GetOpenedSquareEntityArray(
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *AllEntity; // x19
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Func_object__bool__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_597161C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
    sub_2213A60(&System_Func_ClassBoardSquareEntity__bool__TypeInfo);
    sub_2213A60(&Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__);
    sub_2213A60(&UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo);
    byte_597161C = 1;
  }
  v3 = sub_2213CCC(UserClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_object
    || (AllEntity = (System_Collections_Generic_IEnumerable_TSource__o *)ClassBoardSquareMaster__GetAllEntity(
                                                                           (ClassBoardSquareMaster_o *)Master_object,
                                                                           baseId,
                                                                           0),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___),
        !v3) )
  {
    sub_2213CDC(Master_object, v6);
  }
  *(_QWORD *)(v3 + 16) = Master_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)Master_object, v8, v9, v10, v11, v12, v13);
  v14 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_UserClassBoardSquareMaster___c__DisplayClass1_0__GetOpenedSquareEntityArray_b__0__,
    0);
  v15 = System_Linq_Enumerable__Where_object_(
          AllEntity,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                           v15,
                                           (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


bool UserClassBoardSquareMaster__HasSquare(
        UserClassBoardSquareMaster_o *this,
        ClassBoardSquareEntity_o *masterEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  UserClassBoardSquareMaster_o *v5; // x21
  int32_t id; // w19
  int32_t classBoardBaseId; // w22
  NetworkManager_c *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o **p_classBoardUnlockSquareIds; // x8
  UserClassBoardSquareEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v5 = this;
  if ( (byte_597161B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    this = (UserClassBoardSquareMaster_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_597161B = 1;
  }
  entity = 0;
  if ( !masterEntity )
    goto LABEL_19;
  classBoardBaseId = masterEntity->fields.classBoardBaseId;
  id = masterEntity->fields.id;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, masterEntity);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, masterEntity);
    v8 = NetworkManager_TypeInfo;
  }
  if ( UserClassBoardSquareMaster__TryGetEntity(v5, &entity, v8->static_fields->userIdNumber, classBoardBaseId, v3) )
  {
    this = (UserClassBoardSquareMaster_o *)ClassBoardSquareEntity__get_HasLockId(masterEntity, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( entity )
      {
        p_classBoardUnlockSquareIds = (System_Collections_Generic_IEnumerable_TSource__o **)&entity->fields.classBoardUnlockSquareIds;
        return System_Linq_Enumerable__Contains_int_(
                 *p_classBoardUnlockSquareIds,
                 id,
                 (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
      }
    }
    else if ( entity )
    {
      p_classBoardUnlockSquareIds = (System_Collections_Generic_IEnumerable_TSource__o **)&entity->fields.classBoardSquareIds;
      return System_Linq_Enumerable__Contains_int_(
               *p_classBoardUnlockSquareIds,
               id,
               (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
    }
LABEL_19:
    sub_2213CDC(this, masterEntity);
  }
  return 0;
}


bool UserClassBoardSquareMaster__TryGetEntity(
        UserClassBoardSquareMaster_o *this,
        UserClassBoardSquareEntity_o **entity,
        int64_t userId,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_597161F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__);
    byte_597161F = 1;
  }
  PK = (Il2CppObject *)UserClassBoardSquareEntity__CreatePK(userId, classBoardBaseId, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__TryGetEntity__);
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
    sub_2213CDC(0, x);
  return UserClassBoardSquareMaster__HasSquare(userSquareMaster, x, method);
}