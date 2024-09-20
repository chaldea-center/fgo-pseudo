void __fastcall UserEventDataLostEntity___ctor(UserEventDataLostEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BD91 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BD91 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventDataLostEntity__CreatePK(
        int64_t userId,
        int32_t dataLostBattleId,
        const MethodInfo *method)
{
  if ( (byte_4A5BD90 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4A5BD90 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           dataLostBattleId,
           (const MethodInfo_2E7DC34 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserEventDataLostEntity__CreatePrimaryKey(
        UserEventDataLostEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserEventDataLostEntity__CreatePK(this->fields.userId, this->fields.dataLostBattleId, v2);
}


int32_t __fastcall UserEventDataLostEntity__GetTimesToRestart(
        UserEventDataLostEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *restartSvtInfo; // x19
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-14h] BYREF

  v10 = svtId;
  if ( (byte_4A5BD8F & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4A5BD8F = 1;
  }
  value = 0LL;
  restartSvtInfo = this->fields.restartSvtInfo;
  v5 = (Il2CppObject *)System_Int32__ToString((int32_t)&v10, 0LL);
  if ( !restartSvtInfo )
    sub_1B8880C(v5, v6);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)restartSvtInfo,
          v5,
          &value,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  UserServantMaster_o *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  int v6; // w19
  System_Collections_Generic_List_Enumerator_int__o v8; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v9; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4A5BD8D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4A5BD8D = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (Master_object = (UserServantMaster_o *)UserServantMaster__GetAllServantList(Master_object, 0LL)) == 0LL )
  {
    sub_1B8880C(Master_object, v4);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v9 = v8;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v9,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !UserEventDataLostEntity__IsDataLost(this, v9.fields._current, v5) )
    {
      v6 = 4;
      goto LABEL_12;
    }
  }
  v6 = 5;
LABEL_12:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v9,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v6 != 4;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventDataLostEntity__IsDataLost(
        UserEventDataLostEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *dataLostSvtInfo; // x0
  char v6; // w22
  __int64 methodPtr_low; // x10
  Il2CppObject *current; // x20
  int v9; // w21
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4A5BD8C & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__);
    byte_4A5BD8C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  memset(&v12, 0, sizeof(v12));
  dataLostSvtInfo = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.dataLostSvtInfo;
  if ( !dataLostSvtInfo
    || (dataLostSvtInfo = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                       dataLostSvtInfo,
                                                                                       (const MethodInfo_31C6FF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Values__)) == 0LL )
  {
    sub_1B8880C(dataLostSvtInfo, *(_QWORD *)&svtId);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v11,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)dataLostSvtInfo,
    (const MethodInfo_382E608 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__);
  v6 = 0;
  v13 = v11;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v13,
            (const MethodInfo_32C5290 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__) )
  {
    if ( v13.fields._current )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v13.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (System_Collections_Generic_List_object__c *)v13.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v11,
          (System_Collections_Generic_List_object__o *)v13.fields._current,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v12 = v11;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v12,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        {
          current = v12.fields._current;
          if ( !System_Convert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          if ( System_Convert__ToInt32(current, 0LL) == svtId )
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
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( (v9 | 2) != 2 )
          goto LABEL_20;
      }
    }
  }
  v9 = 7;
LABEL_20:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v13,
    (const MethodInfo_32C528C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__);
  return v6 & (v9 == 6);
}


bool __fastcall UserEventDataLostEntity__IsRestart(
        UserEventDataLostEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *restartSvtInfo; // x19
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-14h] BYREF

  v10 = svtId;
  if ( (byte_4A5BD8E & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4A5BD8E = 1;
  }
  value = 0LL;
  restartSvtInfo = this->fields.restartSvtInfo;
  v5 = (Il2CppObject *)System_Int32__ToString((int32_t)&v10, 0LL);
  if ( !restartSvtInfo )
    sub_1B8880C(v5, v6);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)restartSvtInfo,
          v5,
          &value,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v7 = value;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v7, 0LL) > 0;
}