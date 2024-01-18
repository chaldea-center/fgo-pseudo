void __fastcall UserServantAppendPassiveSkillLvMaster___ctor(
        UserServantAppendPassiveSkillLvMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4185E21 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__,
      method);
    byte_4185E21 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    368,
    (const MethodInfo_24E425C *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(
        UserServantAppendPassiveSkillLvMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_int__int__o *v17; // x19
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x1
  _BOOL8 v20; // x0
  __int64 v21; // x1
  UserServantEntity_o *v22; // x8
  __int64 v23; // x26
  __int64 v24; // x8
  unsigned __int64 v25; // x9
  unsigned __int64 v26; // x27
  _BOOL8 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x9
  int32_t v30; // w9
  int32_t v31; // w2
  __int64 v32; // x8
  __int64 v33; // x9
  __int64 v34; // x8
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x0
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+0h] [xbp-90h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-70h] BYREF
  UserServantEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4185E22 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, userId);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__GetEnumerator__, v16);
    byte_4185E22 = 1;
  }
  entity = 0LL;
  memset(&v43, 0, sizeof(v43));
  value = 0;
  v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v17,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (UserServantMaster_o *)UserServantMaster__getSvtAllUserIdList(
                                                                  Master_WarQuestSelectionMaster,
                                                                  svtId,
                                                                  0LL)) == 0LL )
  {
    sub_B2C434(Master_WarQuestSelectionMaster, v19);
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_long__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2F6DDEC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v43 = v41;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v43,
            (const MethodInfo_20E8C80 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    v20 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
            &entity,
            (int64_t)v43.fields.current,
            (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    if ( v20 )
    {
      v22 = entity;
      if ( !entity )
LABEL_34:
        sub_B2C434(v20, v21);
      v23 = 8LL;
      while ( 1 )
      {
        v24 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
        if ( !v24 )
          sub_B2C434(v20, v21);
        v25 = *(unsigned int *)(v24 + 24);
        v26 = v23 - 8;
        if ( v23 - 8 >= (int)v25 )
          break;
        value = 0;
        if ( v26 >= v25 )
        {
          v36 = sub_B2C460(v20);
          sub_B2C400(v36, 0LL);
        }
        if ( !v17 )
          sub_B2C434(v20, v21);
        v27 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                v17,
                *(_DWORD *)(v24 + 4 * v23),
                &value,
                (const MethodInfo_2E26150 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
        if ( v27 )
        {
          if ( !entity )
            sub_B2C434(v27, v28);
          v29 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          if ( !v29 )
            sub_B2C434(v27, v28);
          if ( v26 >= *(unsigned int *)(v29 + 24) )
          {
            v37 = sub_B2C460(v27);
            sub_B2C400(v37, 0LL);
          }
          v30 = *(_DWORD *)(v29 + 4 * v23);
          if ( v30 <= value )
            v31 = value;
          else
            v31 = v30;
          value = v31;
          v32 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          if ( !v32 )
            sub_B2C434(v27, v28);
          if ( v26 >= *(unsigned int *)(v32 + 24) )
          {
            v38 = sub_B2C460(v27);
            sub_B2C400(v38, 0LL);
          }
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v17,
            *(_DWORD *)(v32 + 4 * v23),
            v31,
            (const MethodInfo_2E24518 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          if ( !entity )
            sub_B2C434(v27, v28);
          v33 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          if ( !v33 )
            sub_B2C434(v27, v28);
          if ( v26 >= *(unsigned int *)(v33 + 24) )
          {
            v39 = sub_B2C460(v27);
            sub_B2C400(v39, 0LL);
          }
          v34 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          if ( !v34 )
            sub_B2C434(v27, v28);
          if ( v26 >= *(unsigned int *)(v34 + 24) )
          {
            v40 = sub_B2C460(v27);
            sub_B2C400(v40, 0LL);
          }
          System_Collections_Generic_Dictionary_int__int___Add(
            v17,
            *(_DWORD *)(v33 + 4 * v23),
            *(_DWORD *)(v34 + 4 * v23),
            (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v22 = entity;
        ++v23;
        if ( !entity )
          goto LABEL_34;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v43,
    (const MethodInfo_20E8C7C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  return v17;
}