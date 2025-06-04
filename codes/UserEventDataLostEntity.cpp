void __fastcall UserEventDataLostEntity___ctor(UserEventDataLostEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B02D8A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, method);
    byte_4B02D8A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventDataLostEntity__CreatePK(
        int64_t userId,
        int32_t dataLostBattleId,
        const MethodInfo *method)
{
  if ( (byte_4B02D89 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&dataLostBattleId);
    byte_4B02D89 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           dataLostBattleId,
           (const MethodInfo_30000F4 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  __int64 v7; // x1
  Il2CppObject *v8; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  int32_t v11; // [xsp+1Ch] [xbp-14h] BYREF

  v11 = svtId;
  if ( (byte_4B02D88 & 1) == 0 )
  {
    sub_1BC3008(&System_Convert_TypeInfo, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    byte_4B02D88 = 1;
  }
  value = 0LL;
  restartSvtInfo = this->fields.restartSvtInfo;
  v6 = (Il2CppObject *)System_Int32__ToString((int32_t)&v11, 0LL);
  if ( !restartSvtInfo )
    sub_1BC3264(v6, v7);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)restartSvtInfo,
          v6,
          &value,
          (const MethodInfo_336E7F4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v8 = value;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v8, 0LL);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int v11; // w19
  System_Collections_Generic_List_Enumerator_int__o v13; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v14; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4B02D86 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    byte_4B02D86 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (Master_object = (UserServantMaster_o *)UserServantMaster__GetAllServantList(Master_object, 0LL)) == 0LL )
  {
    sub_1BC3264(Master_object, v9);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_36848F0 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v14,
            (const MethodInfo_3432974 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !UserEventDataLostEntity__IsDataLost(this, v14.fields._current, v10) )
    {
      v11 = 4;
      goto LABEL_12;
    }
  }
  v11 = 5;
LABEL_12:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v14,
    (const MethodInfo_3432970 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v11 != 4;
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

  if ( (byte_4B02D85 & 1) == 0 )
  {
    sub_1BC3008(&System_Convert_TypeInfo, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Values__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v10);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__get_Current__,
      v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_object__GetEnumerator__, v12);
    sub_1BC3008(&System_Collections_Generic_List_object__TypeInfo, v13);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__, v14);
    byte_4B02D85 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  memset(&v22, 0, sizeof(v22));
  dataLostSvtInfo = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.dataLostSvtInfo;
  if ( !dataLostSvtInfo
    || (dataLostSvtInfo = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                       dataLostSvtInfo,
                                                                                       (const MethodInfo_336CE18 *)Method_System_Collections_Generic_Dictionary_string__object__get_Values__)) == 0LL )
  {
    sub_1BC3264(dataLostSvtInfo, *(_QWORD *)&svtId);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v21,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)dataLostSvtInfo,
    (const MethodInfo_39D37E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__);
  v16 = 0;
  v23 = v21;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v23,
            (const MethodInfo_34691A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__) )
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
          (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v22 = v21;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v22,
                  (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
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
          (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( (v19 | 2) != 2 )
          goto LABEL_20;
      }
    }
  }
  v19 = 7;
LABEL_20:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v23,
    (const MethodInfo_34691A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__);
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
  __int64 v7; // x1
  Il2CppObject *v8; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  int32_t v11; // [xsp+1Ch] [xbp-14h] BYREF

  v11 = svtId;
  if ( (byte_4B02D87 & 1) == 0 )
  {
    sub_1BC3008(&System_Convert_TypeInfo, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    byte_4B02D87 = 1;
  }
  value = 0LL;
  restartSvtInfo = this->fields.restartSvtInfo;
  v6 = (Il2CppObject *)System_Int32__ToString((int32_t)&v11, 0LL);
  if ( !restartSvtInfo )
    sub_1BC3264(v6, v7);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)restartSvtInfo,
          v6,
          &value,
          (const MethodInfo_336E7F4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v8 = value;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v8, 0LL) > 0;
}