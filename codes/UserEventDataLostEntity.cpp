void __fastcall UserEventDataLostEntity___ctor(UserEventDataLostEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4215BF7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4215BF7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventDataLostEntity__CreatePK(
        int64_t userId,
        int32_t dataLostBattleId,
        const MethodInfo *method)
{
  if ( (byte_4215BF6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&dataLostBattleId);
    byte_4215BF6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           dataLostBattleId,
           (const MethodInfo_171354C *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  System_String_o *v6; // x0
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+0h] [xbp-20h] BYREF
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = svtId;
  if ( (byte_4215BF5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    byte_4215BF5 = 1;
  }
  value = 0LL;
  restartSvtInfo = this->fields.restartSvtInfo;
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  if ( !restartSvtInfo )
    sub_B0D97C(v6);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)restartSvtInfo,
          (System_Xml_XmlQualifiedName_o *)v6,
          (System_Xml_Schema_XmlSchemaObject_o **)&value,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v7 = value;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
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
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v9; // x2
  int v10; // w19
  System_Collections_Generic_List_Enumerator_int__o v12; // [xsp+8h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v13; // [xsp+20h] [xbp-30h] BYREF

  if ( (byte_4215BF3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    byte_4215BF3 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (UserServantMaster_o *)UserServantMaster__GetAllServantList(
                                                                  Master_WarQuestSelectionMaster,
                                                                  0LL)) == 0LL )
  {
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v13 = v12;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v13,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !UserEventDataLostEntity__IsDataLost(this, v13.fields.current, v9) )
    {
      v10 = 2;
      goto LABEL_13;
    }
  }
  v10 = 0;
LABEL_13:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v13,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v10 != 2;
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *dataLostSvtInfo; // x0
  int v16; // w25
  bool v17; // w21
  __int64 v18; // x10
  Il2CppObject *current; // x20
  int v20; // w8
  int v21; // w22
  int v22; // w28
  int v23; // w8
  int v24; // w9
  const MethodInfo_26CA93C *v26; // x1
  _BYTE v27[36]; // [xsp+8h] [xbp-B8h] BYREF
  int v28; // [xsp+2Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v30; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4215BF2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Values__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__, v9);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__get_Current__,
      v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__, v14);
    byte_4215BF2 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  memset(&v29, 0, sizeof(v29));
  v28 = 0;
  dataLostSvtInfo = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.dataLostSvtInfo;
  if ( !dataLostSvtInfo
    || (dataLostSvtInfo = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(dataLostSvtInfo, (const MethodInfo_2E4AA0C *)Method_System_Collections_Generic_Dictionary_string__object__get_Values__)) == 0LL )
  {
    sub_B0D97C(dataLostSvtInfo);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v27,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)dataLostSvtInfo,
    (const MethodInfo_22D9A80 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__);
  v16 = 0;
  v17 = 0;
  v30 = *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v27;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v30,
            (const MethodInfo_26CA940 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__) )
  {
    if ( v30.fields.currentValue )
    {
      v18 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30.fields.currentValue->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (System_Collections_Generic_List_object__c *)v30.fields.currentValue->klass->_2.typeHierarchy[v18 - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v27,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v30.fields.currentValue,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v29 = *(System_Collections_Generic_List_Enumerator_T__o *)v27;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v29,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        {
          current = v29.fields.current;
          if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Convert_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          }
          if ( System_Convert__ToInt32(current, 0LL) == svtId )
          {
            *(_DWORD *)&v27[4 * v16 + 24] = 115;
            v20 = v28;
            v17 = 1;
            goto LABEL_18;
          }
        }
        *(_DWORD *)&v27[4 * v16 + 24] = 88;
        v20 = v28;
LABEL_18:
        v21 = v20 + 1;
        v28 = v20 + 1;
        v22 = v20 + 1;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v29,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        v16 = 0;
        if ( v22 )
        {
          v16 = v22 - 1;
          v23 = *(_DWORD *)&v27[4 * v22 + 20];
          if ( v23 == 88 )
          {
            v28 = v22 - 1;
          }
          else
          {
            v16 = v22;
            if ( v23 == 115 )
            {
              v26 = (const MethodInfo_26CA93C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__;
              goto LABEL_24;
            }
          }
        }
      }
    }
  }
  *(_DWORD *)&v27[4 * v16 + 24] = 113;
  v21 = v28 + 1;
  v26 = (const MethodInfo_26CA93C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__;
  ++v28;
LABEL_24:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(&v30, v26);
  if ( !v21 )
    return 0;
  v24 = *(_DWORD *)&v27[4 * v21 + 20];
  if ( v24 == 113 )
  {
    v17 = 0;
    goto LABEL_29;
  }
  if ( v24 == 115 )
  {
LABEL_29:
    v28 = v21 - 1;
    return v17;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventDataLostEntity__IsRestart(
        UserEventDataLostEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *restartSvtInfo; // x19
  System_String_o *v6; // x0
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+0h] [xbp-20h] BYREF
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = svtId;
  if ( (byte_4215BF4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    byte_4215BF4 = 1;
  }
  value = 0LL;
  restartSvtInfo = this->fields.restartSvtInfo;
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  if ( !restartSvtInfo )
    sub_B0D97C(v6);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)restartSvtInfo,
          (System_Xml_XmlQualifiedName_o *)v6,
          (System_Xml_Schema_XmlSchemaObject_o **)&value,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v7 = value;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToInt32(v7, 0LL) > 0;
}