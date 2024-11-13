void __fastcall UserEventDataLostEntity___ctor(UserEventDataLostEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16E46 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16E46 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventDataLostEntity__CreatePK(
        int64_t userId,
        int32_t dataLostBattleId,
        const MethodInfo *method)
{
  if ( (byte_4B16E45 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&dataLostBattleId, method);
    byte_4B16E45 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           dataLostBattleId,
           (const MethodInfo_2F10FBC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *restartSvtInfo; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *v10; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-14h] BYREF

  v13 = svtId;
  if ( (byte_4B16E44 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4, v5);
    byte_4B16E44 = 1;
  }
  value = 0LL;
  restartSvtInfo = this->fields.restartSvtInfo;
  v7 = (Il2CppObject *)System_Int32__ToString((int32_t)&v13, 0LL);
  if ( !restartSvtInfo )
    sub_1BCAA3C(v7, v8);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)restartSvtInfo,
          v7,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v10 = value;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v9);
  return System_Convert__ToInt32(v10, 0LL);
}


bool __fastcall UserEventDataLostEntity__IsAllServantDataLost(
        UserEventDataLostEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UserServantMaster_o *Master_object; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  int v17; // w19
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4B16E42 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v12, v13);
    byte_4B16E42 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (Master_object = (UserServantMaster_o *)UserServantMaster__GetAllServantList(Master_object, 0LL)) == 0LL )
  {
    sub_1BCAA3C(Master_object, v15);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v20,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !UserEventDataLostEntity__IsDataLost(this, v20.fields._current, v16) )
    {
      v17 = 4;
      goto LABEL_12;
    }
  }
  v17 = 5;
LABEL_12:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v20,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v17 != 4;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventDataLostEntity__IsDataLost(
        UserEventDataLostEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_Dictionary_object__object__o *dataLostSvtInfo; // x0
  char v26; // w22
  __int64 methodPtr_low; // x10
  __int64 v28; // x1
  Il2CppObject *current; // x20
  int v30; // w21
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B16E41 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Values__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v15, v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__get_Current__,
      v17,
      v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__, v23, v24);
    byte_4B16E41 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  memset(&v33, 0, sizeof(v33));
  dataLostSvtInfo = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.dataLostSvtInfo;
  if ( !dataLostSvtInfo
    || (dataLostSvtInfo = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                       dataLostSvtInfo,
                                                                                       (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__object__get_Values__)) == 0LL )
  {
    sub_1BCAA3C(dataLostSvtInfo, *(_QWORD *)&svtId);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v32,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)dataLostSvtInfo,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__);
  v26 = 0;
  v34 = v32;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v34,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__) )
  {
    if ( v34.fields._current )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v34.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (System_Collections_Generic_List_object__c *)v34.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v32,
          (System_Collections_Generic_List_object__o *)v34.fields._current,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v33 = v32;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v33,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        {
          current = v33.fields._current;
          if ( !System_Convert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v28);
          if ( System_Convert__ToInt32(current, 0LL) == svtId )
          {
            v26 = 1;
            v30 = 6;
            goto LABEL_17;
          }
        }
        v30 = 2;
LABEL_17:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v33,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( (v30 | 2) != 2 )
          goto LABEL_20;
      }
    }
  }
  v30 = 7;
LABEL_20:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v34,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__);
  return v26 & (v30 == 6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventDataLostEntity__IsRestart(
        UserEventDataLostEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *restartSvtInfo; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *v10; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-14h] BYREF

  v13 = svtId;
  if ( (byte_4B16E43 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4, v5);
    byte_4B16E43 = 1;
  }
  value = 0LL;
  restartSvtInfo = this->fields.restartSvtInfo;
  v7 = (Il2CppObject *)System_Int32__ToString((int32_t)&v13, 0LL);
  if ( !restartSvtInfo )
    sub_1BCAA3C(v7, v8);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)restartSvtInfo,
          v7,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v10 = value;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v9);
  return System_Convert__ToInt32(v10, 0LL) > 0;
}