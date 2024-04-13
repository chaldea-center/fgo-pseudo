void __fastcall UserEventDataLostEntity___ctor(UserEventDataLostEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA1FE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA1FE = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventDataLostEntity__CreatePK(
        int64_t userId,
        int32_t dataLostBattleId,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EA1FD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__int___, dataLostBattleId, (_DWORD)method, v3);
    byte_42EA1FD = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           dataLostBattleId,
           (const MethodInfo_1AE3148 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *restartSvtInfo; // x19
  System_String_o *v9; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x19
  Il2CppObject *value; // [xsp+0h] [xbp-20h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v14 = svtId;
  if ( (byte_42EA1FC & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5, v6, v7);
    byte_42EA1FC = 1;
  }
  value = 0LL;
  restartSvtInfo = this->fields.restartSvtInfo;
  v9 = System_Int32__ToString((int32_t)&v14, 0LL);
  if ( !restartSvtInfo )
    sub_B5D69C(v9, v10);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)restartSvtInfo,
          (System_Xml_XmlQualifiedName_o *)v9,
          (System_Xml_Schema_XmlSchemaObject_o **)&value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v11 = value;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToInt32(v11, 0LL);
}


bool __fastcall UserEventDataLostEntity__IsAllServantDataLost(
        UserEventDataLostEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  int v23; // w19
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+8h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+20h] [xbp-30h] BYREF

  if ( (byte_42EA1FA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17, v18, v19);
    byte_42EA1FA = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (UserServantMaster_o *)UserServantMaster__GetAllServantList(
                                                                  Master_WarQuestSelectionMaster,
                                                                  0LL)) == 0LL )
  {
    sub_B5D69C(Master_WarQuestSelectionMaster, v21);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v26,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !UserEventDataLostEntity__IsDataLost(this, v26.fields.current, v22) )
    {
      v23 = 2;
      goto LABEL_13;
    }
  }
  v23 = 0;
LABEL_13:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v26,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v23 != 2;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventDataLostEntity__IsDataLost(
        UserEventDataLostEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *dataLostSvtInfo; // x0
  int v37; // w25
  bool v38; // w21
  __int64 v39; // x10
  Il2CppObject *current; // x20
  int v41; // w8
  int v42; // w22
  int v43; // w28
  int v44; // w8
  int v45; // w9
  const MethodInfo_27693B4 *v47; // x1
  _BYTE v48[36]; // [xsp+8h] [xbp-B8h] BYREF
  int v49; // [xsp+2Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v51; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42EA1F9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Values__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v15, v16, v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__,
      v18,
      v19,
      v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__get_Current__,
      v21,
      v22,
      v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v30, v31, v32);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__,
      v33,
      v34,
      v35);
    byte_42EA1F9 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  memset(&v50, 0, sizeof(v50));
  v49 = 0;
  dataLostSvtInfo = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.dataLostSvtInfo;
  if ( !dataLostSvtInfo
    || (dataLostSvtInfo = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(dataLostSvtInfo, (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__object__get_Values__)) == 0LL )
  {
    sub_B5D69C(dataLostSvtInfo, *(_QWORD *)&svtId);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v48,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)dataLostSvtInfo,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__object__GetEnumerator__);
  v37 = 0;
  v38 = 0;
  v51 = *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)v48;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v51,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__MoveNext__) )
  {
    if ( v51.fields.currentValue )
    {
      v39 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v51.fields.currentValue->klass->_2.bitflags2 + 1) >= (unsigned int)v39
        && (System_Collections_Generic_List_object__c *)v51.fields.currentValue->klass->_2.typeHierarchy[v39 - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v48,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v51.fields.currentValue,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v50 = *(System_Collections_Generic_List_Enumerator_T__o *)v48;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v50,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        {
          current = v50.fields.current;
          if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Convert_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          }
          if ( System_Convert__ToInt32(current, 0LL) == svtId )
          {
            *(_DWORD *)&v48[4 * v37 + 24] = 115;
            v41 = v49;
            v38 = 1;
            goto LABEL_18;
          }
        }
        *(_DWORD *)&v48[4 * v37 + 24] = 88;
        v41 = v49;
LABEL_18:
        v42 = v41 + 1;
        v49 = v41 + 1;
        v43 = v41 + 1;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v50,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        v37 = 0;
        if ( v43 )
        {
          v37 = v43 - 1;
          v44 = *(_DWORD *)&v48[4 * v43 + 20];
          if ( v44 == 88 )
          {
            v49 = v43 - 1;
          }
          else
          {
            v37 = v43;
            if ( v44 == 115 )
            {
              v47 = (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__;
              goto LABEL_24;
            }
          }
        }
      }
    }
  }
  *(_DWORD *)&v48[4 * v37 + 24] = 113;
  v42 = v49 + 1;
  v47 = (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__object__Dispose__;
  ++v49;
LABEL_24:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(&v51, v47);
  if ( !v42 )
    return 0;
  v45 = *(_DWORD *)&v48[4 * v42 + 20];
  if ( v45 == 113 )
  {
    v38 = 0;
    goto LABEL_29;
  }
  if ( v45 == 115 )
  {
LABEL_29:
    v49 = v42 - 1;
    return v38;
  }
  return 0;
}


bool __fastcall UserEventDataLostEntity__IsRestart(
        UserEventDataLostEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *restartSvtInfo; // x19
  System_String_o *v9; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x19
  Il2CppObject *value; // [xsp+0h] [xbp-20h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v14 = svtId;
  if ( (byte_42EA1FB & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5, v6, v7);
    byte_42EA1FB = 1;
  }
  value = 0LL;
  restartSvtInfo = this->fields.restartSvtInfo;
  v9 = System_Int32__ToString((int32_t)&v14, 0LL);
  if ( !restartSvtInfo )
    sub_B5D69C(v9, v10);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)restartSvtInfo,
          (System_Xml_XmlQualifiedName_o *)v9,
          (System_Xml_Schema_XmlSchemaObject_o **)&value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v11 = value;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToInt32(v11, 0LL) > 0;
}