void __fastcall UserEventDataLostEntity___ctor(UserEventDataLostEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438CB50 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438CB50 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventDataLostEntity__CreatePK(
        int64_t userId,
        int32_t dataLostBattleId,
        const MethodInfo *method)
{
  if ( (byte_438CB4F & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_438CB4F = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           dataLostBattleId,
           (const MethodInfo_1D172EC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  System_String_o *v5; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+0h] [xbp-20h] BYREF
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = svtId;
  if ( (byte_438CB4E & 1) == 0 )
  {
    sub_B775C4(&System_Convert_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_438CB4E = 1;
  }
  value = 0LL;
  restartSvtInfo = this->fields.restartSvtInfo;
  v5 = System_Int32__ToString((int32_t)&v10, 0LL);
  if ( !restartSvtInfo )
    sub_B7769C(v5, v6);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)restartSvtInfo,
          (System_Xml_XmlQualifiedName_o *)v5,
          (System_Xml_Schema_XmlSchemaObject_o **)&value,
          (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  int v6; // w19
  System_Collections_Generic_List_Enumerator_int__o v8; // [xsp+8h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v9; // [xsp+20h] [xbp-30h] BYREF

  if ( (byte_438CB4C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_438CB4C = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (UserServantMaster_o *)UserServantMaster__GetAllServantList(
                                                                  Master_WarQuestSelectionMaster,
                                                                  0LL)) == 0LL )
  {
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_30E6C2C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v9 = v8;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v9,
            (const MethodInfo_225A1B4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !UserEventDataLostEntity__IsDataLost(this, v9.fields.current, v5) )
    {
      v6 = 2;
      goto LABEL_13;
    }
  }
  v6 = 0;
LABEL_13:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v9,
    (const MethodInfo_225A1B0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v6 != 2;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventDataLostEntity__IsDataLost(
        UserEventDataLostEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *dataLostSvtInfo; // x0
  int v6; // w25
  bool v7; // w21
  __int64 v8; // x10
  Il2CppObject *current; // x20
  int v10; // w8
  int v11; // w22
  int v12; // w28
  int v13; // w8
  int v14; // w9
  const MethodInfo_27E4E60 *v16; // x1
  _BYTE v17[36]; // [xsp+8h] [xbp-B8h] BYREF
  int v18; // [xsp+2Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v20; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_438CB4B & 1) == 0 )
  {
    sub_B775C4(&System_Convert_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__);
    byte_438CB4B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  memset(&v19, 0, sizeof(v19));
  v18 = 0;
  dataLostSvtInfo = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.dataLostSvtInfo;
  if ( !dataLostSvtInfo
    || (dataLostSvtInfo = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(dataLostSvtInfo, (const MethodInfo_2F7D39C *)Method_System_Collections_Generic_Dictionary_string__object__get_Values__)) == 0LL )
  {
    sub_B7769C(dataLostSvtInfo, *(_QWORD *)&svtId);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v17,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)dataLostSvtInfo,
    (const MethodInfo_26BC9D0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__);
  v6 = 0;
  v7 = 0;
  v20 = *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v17;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v20,
            (const MethodInfo_27E4E64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__) )
  {
    if ( v20.fields.currentValue )
    {
      v8 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v20.fields.currentValue->klass->_2.bitflags2 + 1) >= (unsigned int)v8
        && (System_Collections_Generic_List_object__c *)v20.fields.currentValue->klass->_2.typeHierarchy[v8 - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v17,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v20.fields.currentValue,
          (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v19 = *(System_Collections_Generic_List_Enumerator_T__o *)v17;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v19,
                  (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        {
          current = v19.fields.current;
          if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Convert_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          }
          if ( System_Convert__ToInt32(current, 0LL) == svtId )
          {
            *(_DWORD *)&v17[4 * v6 + 24] = 115;
            v10 = v18;
            v7 = 1;
            goto LABEL_18;
          }
        }
        *(_DWORD *)&v17[4 * v6 + 24] = 88;
        v10 = v18;
LABEL_18:
        v11 = v10 + 1;
        v18 = v10 + 1;
        v12 = v10 + 1;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v19,
          (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        v6 = 0;
        if ( v12 )
        {
          v6 = v12 - 1;
          v13 = *(_DWORD *)&v17[4 * v12 + 20];
          if ( v13 == 88 )
          {
            v18 = v12 - 1;
          }
          else
          {
            v6 = v12;
            if ( v13 == 115 )
            {
              v16 = (const MethodInfo_27E4E60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__;
              goto LABEL_24;
            }
          }
        }
      }
    }
  }
  *(_DWORD *)&v17[4 * v6 + 24] = 113;
  v11 = v18 + 1;
  v16 = (const MethodInfo_27E4E60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__;
  ++v18;
LABEL_24:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(&v20, v16);
  if ( !v11 )
    return 0;
  v14 = *(_DWORD *)&v17[4 * v11 + 20];
  if ( v14 == 113 )
  {
    v7 = 0;
    goto LABEL_29;
  }
  if ( v14 == 115 )
  {
LABEL_29:
    v18 = v11 - 1;
    return v7;
  }
  return 0;
}


bool __fastcall UserEventDataLostEntity__IsRestart(
        UserEventDataLostEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *restartSvtInfo; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+0h] [xbp-20h] BYREF
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = svtId;
  if ( (byte_438CB4D & 1) == 0 )
  {
    sub_B775C4(&System_Convert_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_438CB4D = 1;
  }
  value = 0LL;
  restartSvtInfo = this->fields.restartSvtInfo;
  v5 = System_Int32__ToString((int32_t)&v10, 0LL);
  if ( !restartSvtInfo )
    sub_B7769C(v5, v6);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)restartSvtInfo,
          (System_Xml_XmlQualifiedName_o *)v5,
          (System_Xml_Schema_XmlSchemaObject_o **)&value,
          (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v7 = value;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToInt32(v7, 0LL) > 0;
}