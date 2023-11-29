void __fastcall UserEventDataLostEntity___ctor(UserEventDataLostEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FAB58 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FAB58 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventDataLostEntity__CreatePK(
        int64_t userId,
        int32_t dataLostBattleId,
        const MethodInfo *method)
{
  if ( (byte_40FAB57 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&dataLostBattleId);
    byte_40FAB57 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           dataLostBattleId,
           (const MethodInfo_18C22D0 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  if ( (byte_40FAB56 & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    byte_40FAB56 = 1;
  }
  value = 0LL;
  restartSvtInfo = this->fields.restartSvtInfo;
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  if ( !restartSvtInfo )
    sub_B170D4();
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)restartSvtInfo,
          (System_Xml_XmlQualifiedName_o *)v6,
          (System_Xml_Schema_XmlSchemaObject_o **)&value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  System_Collections_Generic_List_int__o *AllServantList; // x0
  const MethodInfo *v10; // x2
  int v11; // w19
  System_Collections_Generic_List_Enumerator_int__o v13; // [xsp+8h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v14; // [xsp+20h] [xbp-30h] BYREF

  if ( (byte_40FAB54 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    byte_40FAB54 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (AllServantList = UserServantMaster__GetAllServantList(Master_WarQuestSelectionMaster, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    AllServantList,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v14,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !UserEventDataLostEntity__IsDataLost(this, v14.fields.current, v10) )
    {
      v11 = 2;
      goto LABEL_13;
    }
  }
  v11 = 0;
LABEL_13:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v14,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v11 != 2;
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
  struct System_Collections_Generic_Dictionary_string__object__o *dataLostSvtInfo; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  int v17; // w25
  bool v18; // w21
  __int64 v19; // x10
  Il2CppObject *current; // x20
  int v21; // w8
  int v22; // w22
  int v23; // w28
  int v24; // w8
  int v25; // w9
  const MethodInfo_26BE60C *v27; // x1
  _BYTE v28[36]; // [xsp+8h] [xbp-B8h] BYREF
  int v29; // [xsp+2Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v31; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_40FAB53 & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Values__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__, v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__get_Current__,
      v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__GetEnumerator__, v12);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__, v14);
    byte_40FAB53 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  memset(&v30, 0, sizeof(v30));
  v29 = 0;
  dataLostSvtInfo = this->fields.dataLostSvtInfo;
  if ( !dataLostSvtInfo
    || (Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                   (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)dataLostSvtInfo,
                   (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Values__)) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v28,
    Values,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__);
  v17 = 0;
  v18 = 0;
  v31 = *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v28;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v31,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__) )
  {
    if ( v31.fields.currentValue )
    {
      v19 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v31.fields.currentValue->klass->_2.bitflags2 + 1) >= (unsigned int)v19
        && (System_Collections_Generic_List_object__c *)v31.fields.currentValue->klass->_2.typeHierarchy[v19 - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v28,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v31.fields.currentValue,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v30 = *(System_Collections_Generic_List_Enumerator_T__o *)v28;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v30,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        {
          current = v30.fields.current;
          if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Convert_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          }
          if ( System_Convert__ToInt32(current, 0LL) == svtId )
          {
            *(_DWORD *)&v28[4 * v17 + 24] = 115;
            v21 = v29;
            v18 = 1;
            goto LABEL_18;
          }
        }
        *(_DWORD *)&v28[4 * v17 + 24] = 88;
        v21 = v29;
LABEL_18:
        v22 = v21 + 1;
        v29 = v21 + 1;
        v23 = v21 + 1;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v30,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        v17 = 0;
        if ( v23 )
        {
          v17 = v23 - 1;
          v24 = *(_DWORD *)&v28[4 * v23 + 20];
          if ( v24 == 88 )
          {
            v29 = v23 - 1;
          }
          else
          {
            v17 = v23;
            if ( v24 == 115 )
            {
              v27 = (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__;
              goto LABEL_24;
            }
          }
        }
      }
    }
  }
  *(_DWORD *)&v28[4 * v17 + 24] = 113;
  v22 = v29 + 1;
  v27 = (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__;
  ++v29;
LABEL_24:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(&v31, v27);
  if ( !v22 )
    return 0;
  v25 = *(_DWORD *)&v28[4 * v22 + 20];
  if ( v25 == 113 )
  {
    v18 = 0;
    goto LABEL_29;
  }
  if ( v25 == 115 )
  {
LABEL_29:
    v29 = v22 - 1;
    return v18;
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
  if ( (byte_40FAB55 & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    byte_40FAB55 = 1;
  }
  value = 0LL;
  restartSvtInfo = this->fields.restartSvtInfo;
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  if ( !restartSvtInfo )
    sub_B170D4();
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)restartSvtInfo,
          (System_Xml_XmlQualifiedName_o *)v6,
          (System_Xml_Schema_XmlSchemaObject_o **)&value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v7 = value;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToInt32(v7, 0LL) > 0;
}