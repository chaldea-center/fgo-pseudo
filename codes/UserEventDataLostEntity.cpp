void UserEventDataLostEntity___ctor(UserEventDataLostEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3878D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C3878D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventDataLostEntity__CreatePK(int64_t userId, int32_t dataLostBattleId, const MethodInfo *method)
{
  if ( (byte_4C3878C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4C3878C = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           dataLostBattleId,
           (const MethodInfo_30DB680 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserEventDataLostEntity__CreatePrimaryKey(UserEventDataLostEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserEventDataLostEntity__CreatePK(this->fields.userId, this->fields.dataLostBattleId, v2);
}


int32_t UserEventDataLostEntity__GetTimesToRestart(
        UserEventDataLostEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *restartSvtInfo; // x19
  Il2CppObject *v5; // x0
  Il2CppObject *v6; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  int32_t v9; // [xsp+1Ch] [xbp-14h] BYREF

  v9 = svtId;
  if ( (byte_4C3878B & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4C3878B = 1;
  }
  value = 0;
  restartSvtInfo = this->fields.restartSvtInfo;
  v5 = (Il2CppObject *)System_Int32__ToString((int32_t)&v9, 0);
  if ( !restartSvtInfo )
    sub_1C32E7C(v5);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)restartSvtInfo,
          v5,
          &value,
          (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v6 = value;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v6, 0);
}


bool UserEventDataLostEntity__IsAllServantDataLost(UserEventDataLostEntity_o *this, const MethodInfo *method)
{
  UserServantMaster_o *Master_object; // x0
  const MethodInfo *v4; // x2
  int v5; // w19
  System_Collections_Generic_List_Enumerator_int__o v7; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v8; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4C38789 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4C38789 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (Master_object = (UserServantMaster_o *)UserServantMaster__GetAllServantList(Master_object, 0)) == 0 )
  {
    sub_1C32E7C(Master_object);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v8 = v7;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v8,
            (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !UserEventDataLostEntity__IsDataLost(this, v8.fields._current, v4) )
    {
      v5 = 4;
      goto LABEL_12;
    }
  }
  v5 = 5;
LABEL_12:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v8,
    (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v5 != 4;
}


bool UserEventDataLostEntity__IsDataLost(UserEventDataLostEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *dataLostSvtInfo; // x0
  char v6; // w22
  __int64 naturalAligment; // x10
  Il2CppObject *current; // x20
  int v9; // w21
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C38788 & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Values__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__);
    byte_4C38788 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  memset(&v12, 0, sizeof(v12));
  dataLostSvtInfo = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.dataLostSvtInfo;
  if ( !dataLostSvtInfo
    || (dataLostSvtInfo = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                       dataLostSvtInfo,
                                                                                       (const MethodInfo_3458BF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Values__)) == 0 )
  {
    sub_1C32E7C(dataLostSvtInfo);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v11,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)dataLostSvtInfo,
    (const MethodInfo_3AD9840 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__);
  v6 = 0;
  v13 = v11;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v13,
            (const MethodInfo_355659C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__) )
  {
    if ( v13.fields._current )
    {
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( v13.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (System_Collections_Generic_List_object__c *)v13.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v11,
          (System_Collections_Generic_List_object__o *)v13.fields._current,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v12 = v11;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v12,
                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        {
          current = v12.fields._current;
          if ( !System_Convert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          if ( System_Convert__ToInt32(current, 0) == svtId )
          {
            v6 = 1;
            v9 = 6;
            goto LABEL_17;
          }
        }
        v9 = 2;
LABEL_17:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v12,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( (v9 | 2) != 2 )
          goto LABEL_20;
      }
    }
  }
  v9 = 7;
LABEL_20:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v13,
    (const MethodInfo_3556598 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__);
  return v6 & (v9 == 6);
}


bool UserEventDataLostEntity__IsRestart(UserEventDataLostEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *restartSvtInfo; // x19
  Il2CppObject *v5; // x0
  Il2CppObject *v6; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  int32_t v9; // [xsp+1Ch] [xbp-14h] BYREF

  v9 = svtId;
  if ( (byte_4C3878A & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4C3878A = 1;
  }
  value = 0;
  restartSvtInfo = this->fields.restartSvtInfo;
  v5 = (Il2CppObject *)System_Int32__ToString((int32_t)&v9, 0);
  if ( !restartSvtInfo )
    sub_1C32E7C(v5);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)restartSvtInfo,
          v5,
          &value,
          (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v6 = value;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v6, 0) > 0;
}