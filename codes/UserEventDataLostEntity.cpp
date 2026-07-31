void UserEventDataLostEntity___ctor(UserEventDataLostEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59394CE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59394CE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventDataLostEntity__CreatePK(int64_t userId, int32_t dataLostBattleId, const MethodInfo *method)
{
  if ( (byte_59394CD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_59394CD = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           dataLostBattleId,
           (const MethodInfo_3821070 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  int32_t v11; // [xsp+1Ch] [xbp-14h] BYREF

  v11 = svtId;
  if ( (byte_59394CC & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_59394CC = 1;
  }
  restartSvtInfo = this->fields.restartSvtInfo;
  value = 0;
  v5 = (Il2CppObject *)System_Int32__ToString((int32_t)&v11, 0);
  if ( !restartSvtInfo )
    sub_21FFECC(v5, v6);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)restartSvtInfo,
          v5,
          &value,
          (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v8 = value;
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v7);
  return System_Convert__ToInt32(v8, 0);
}


bool UserEventDataLostEntity__IsAllServantDataLost(UserEventDataLostEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  UserServantMaster_o *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  bool v7; // w20
  System_Collections_Generic_List_Enumerator_int__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59394CA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_59394CA = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v9, 0, sizeof(v9));
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (Master_object = (UserServantMaster_o *)UserServantMaster__GetAllServantList(Master_object, 0)) == 0 )
  {
    sub_21FFECC(Master_object, v5);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  do
    v7 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v9,
           (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
  while ( v7 && UserEventDataLostEntity__IsDataLost(this, v9.fields._current, v6) );
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v9,
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return !v7;
}


// local variable allocation has failed, the output may be wrong!
bool UserEventDataLostEntity__IsDataLost(UserEventDataLostEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *dataLostSvtInfo; // x0
  __int64 naturalAligment; // x10
  __int128 v7; // q0
  __int64 v8; // x1
  bool v9; // w20
  Il2CppObject *current; // x21
  int v11; // w22
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v15; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_59394C9 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Values__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__);
    byte_59394C9 = 1;
  }
  dataLostSvtInfo = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.dataLostSvtInfo;
  memset(&v15, 0, sizeof(v15));
  memset(&v14, 0, sizeof(v14));
  if ( !dataLostSvtInfo
    || (dataLostSvtInfo = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                       dataLostSvtInfo,
                                                                                       (const MethodInfo_3FCA28C *)Method_System_Collections_Generic_Dictionary_string__object__get_Values__)) == 0 )
  {
    sub_21FFECC(dataLostSvtInfo, *(_QWORD *)&svtId);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)dataLostSvtInfo,
    (const MethodInfo_3C9BB94 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__);
  v15 = v13;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v15,
            (const MethodInfo_413634C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__) )
  {
    if ( v15.fields._currentValue )
    {
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( v15.fields._currentValue->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (System_Collections_Generic_List_object__c *)v15.fields._currentValue->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v13,
          (System_Collections_Generic_List_object__o *)v15.fields._currentValue,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v7 = *(_OWORD *)&v13.fields._dictionary;
        v13.fields._dictionary = 0;
        *(_QWORD *)&v13.fields._index = &v14;
        *(_OWORD *)&v14.fields._list = v7;
        v14.fields._current = v13.fields._currentValue;
        while ( 1 )
        {
          v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v14,
                 (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
          if ( !v9 )
            break;
          current = v14.fields._current;
          if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v8);
          if ( System_Convert__ToInt32(current, 0) == svtId )
          {
            v11 = 6;
            goto LABEL_17;
          }
        }
        v11 = 2;
LABEL_17:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v14,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( (v11 | 2) != 2 )
          goto LABEL_20;
      }
    }
  }
  v9 = 0;
LABEL_20:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v15,
    (const MethodInfo_4136348 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__);
  return v9;
}


bool UserEventDataLostEntity__IsRestart(UserEventDataLostEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *restartSvtInfo; // x19
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  int32_t v11; // [xsp+1Ch] [xbp-14h] BYREF

  v11 = svtId;
  if ( (byte_59394CB & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_59394CB = 1;
  }
  restartSvtInfo = this->fields.restartSvtInfo;
  value = 0;
  v5 = (Il2CppObject *)System_Int32__ToString((int32_t)&v11, 0);
  if ( !restartSvtInfo )
    sub_21FFECC(v5, v6);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)restartSvtInfo,
          v5,
          &value,
          (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v8 = value;
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v7);
  return System_Convert__ToInt32(v8, 0) > 0;
}