void __fastcall UserEventDataLostEntity___ctor(UserEventDataLostEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FD018 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FD018 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventDataLostEntity__CreatePK(
        int64_t userId,
        int32_t dataLostBattleId,
        const MethodInfo *method)
{
  if ( (byte_49FD017 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&dataLostBattleId);
    byte_49FD017 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           dataLostBattleId,
           (const MethodInfo_2E37718 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserEventDataLostEntity__CreatePrimaryKey(
        UserEventDataLostEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserEventDataLostEntity__CreatePK(this->fields.userId, this->fields.dataLostBattleId, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventDataLostEntity__GetTimesToRestart(
        UserEventDataLostEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *restartSvtInfo; // x19
  Il2CppObject *v6; // x0
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-14h] BYREF

  v10 = svtId;
  if ( (byte_49FD016 & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    byte_49FD016 = 1;
  }
  value = 0LL;
  restartSvtInfo = this->fields.restartSvtInfo;
  v6 = (Il2CppObject *)System_Int32__ToString((int32_t)&v10, 0LL);
  if ( !restartSvtInfo )
    sub_1B64324(v6);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)restartSvtInfo,
          v6,
          &value,
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v7 = value;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v7, 0LL);
}


bool __fastcall UserEventDataLostEntity__IsAllServantDataLost(
        UserEventDataLostEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserServantMaster_o *Master_object; // x0
  const MethodInfo *v9; // x2
  int v10; // w19
  System_Collections_Generic_List_Enumerator_int__o v12; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v13; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_49FD014 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    byte_49FD014 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (Master_object = (UserServantMaster_o *)UserServantMaster__GetAllServantList(Master_object, 0LL)) == 0LL )
  {
    sub_1B64324(Master_object);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v13 = v12;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v13,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !UserEventDataLostEntity__IsDataLost(this, v13.fields._current, v9) )
    {
      v10 = 4;
      goto LABEL_12;
    }
  }
  v10 = 5;
LABEL_12:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v13,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v10 != 4;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventDataLostEntity__IsDataLost(
        UserEventDataLostEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_object__object__o *dataLostSvtInfo; // x0
  char v16; // w22
  __int64 methodPtr_low; // x10
  Il2CppObject *current; // x20
  int v19; // w21
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_49FD013 & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Values__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v10);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__get_Current__,
      v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__GetEnumerator__, v12);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__, v14);
    byte_49FD013 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  memset(&v22, 0, sizeof(v22));
  dataLostSvtInfo = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.dataLostSvtInfo;
  if ( !dataLostSvtInfo
    || (dataLostSvtInfo = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                       dataLostSvtInfo,
                                                                                       (const MethodInfo_3179228 *)Method_System_Collections_Generic_Dictionary_string__object__get_Values__)) == 0LL )
  {
    sub_1B64324(dataLostSvtInfo);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v21,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)dataLostSvtInfo,
    (const MethodInfo_37BDDB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__);
  v16 = 0;
  v23 = v21;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v23,
            (const MethodInfo_3277270 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__) )
  {
    if ( v23.fields._current )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v23.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (System_Collections_Generic_List_object__c *)v23.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v21,
          (System_Collections_Generic_List_object__o *)v23.fields._current,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v22 = v21;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v22,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        {
          current = v22.fields._current;
          if ( !System_Convert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          if ( System_Convert__ToInt32(current, 0LL) == svtId )
          {
            v16 = 1;
            v19 = 6;
            goto LABEL_17;
          }
        }
        v19 = 2;
LABEL_17:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v22,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( (v19 | 2) != 2 )
          goto LABEL_20;
      }
    }
  }
  v19 = 7;
LABEL_20:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v23,
    (const MethodInfo_327726C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__);
  return v16 & (v19 == 6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventDataLostEntity__IsRestart(
        UserEventDataLostEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *restartSvtInfo; // x19
  Il2CppObject *v6; // x0
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-14h] BYREF

  v10 = svtId;
  if ( (byte_49FD015 & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    byte_49FD015 = 1;
  }
  value = 0LL;
  restartSvtInfo = this->fields.restartSvtInfo;
  v6 = (Il2CppObject *)System_Int32__ToString((int32_t)&v10, 0LL);
  if ( !restartSvtInfo )
    sub_1B64324(v6);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)restartSvtInfo,
          v6,
          &value,
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v7 = value;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v7, 0LL) > 0;
}