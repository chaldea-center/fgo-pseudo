void __fastcall UserServantAppendPassiveSkillLvMaster___ctor(
        UserServantAppendPassiveSkillLvMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AE16D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
    byte_42AE16D = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    369,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(
        UserServantAppendPassiveSkillLvMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v6; // x19
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UserServantEntity_o *v11; // x8
  __int64 v12; // x26
  __int64 v13; // x8
  unsigned __int64 v14; // x9
  unsigned __int64 v15; // x27
  _BOOL8 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x9
  int32_t v19; // w9
  int32_t v20; // w2
  __int64 v21; // x8
  __int64 v22; // x9
  __int64 v23; // x8
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x0
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+0h] [xbp-90h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+20h] [xbp-70h] BYREF
  UserServantEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_42AE16E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    byte_42AE16E = 1;
  }
  entity = 0LL;
  memset(&v32, 0, sizeof(v32));
  value = 0;
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (UserServantMaster_o *)UserServantMaster__getSvtAllUserIdList(
                                                                  Master_WarQuestSelectionMaster,
                                                                  svtId,
                                                                  0LL)) == 0LL )
  {
    sub_B52A5C(Master_WarQuestSelectionMaster, v8);
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_long__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2FE2C10 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v32 = v30;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v32,
            (const MethodInfo_20101B0 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    v9 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
           (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
           &entity,
           (int64_t)v32.fields.current,
           (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    if ( v9 )
    {
      v11 = entity;
      if ( !entity )
LABEL_34:
        sub_B52A5C(v9, v10);
      v12 = 8LL;
      while ( 1 )
      {
        v13 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
        if ( !v13 )
          sub_B52A5C(v9, v10);
        v14 = *(unsigned int *)(v13 + 24);
        v15 = v12 - 8;
        if ( v12 - 8 >= (int)v14 )
          break;
        value = 0;
        if ( v15 >= v14 )
        {
          v25 = sub_B52A88(v9);
          sub_B52A28(v25, 0LL);
        }
        if ( !v6 )
          sub_B52A5C(v9, v10);
        v16 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                v6,
                *(_DWORD *)(v13 + 4 * v12),
                &value,
                (const MethodInfo_2F016AC *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
        if ( v16 )
        {
          if ( !entity )
            sub_B52A5C(v16, v17);
          v18 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          if ( !v18 )
            sub_B52A5C(v16, v17);
          if ( v15 >= *(unsigned int *)(v18 + 24) )
          {
            v26 = sub_B52A88(v16);
            sub_B52A28(v26, 0LL);
          }
          v19 = *(_DWORD *)(v18 + 4 * v12);
          if ( v19 <= value )
            v20 = value;
          else
            v20 = v19;
          value = v20;
          v21 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          if ( !v21 )
            sub_B52A5C(v16, v17);
          if ( v15 >= *(unsigned int *)(v21 + 24) )
          {
            v27 = sub_B52A88(v16);
            sub_B52A28(v27, 0LL);
          }
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v6,
            *(_DWORD *)(v21 + 4 * v12),
            v20,
            (const MethodInfo_2EFFA74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          if ( !entity )
            sub_B52A5C(v16, v17);
          v22 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          if ( !v22 )
            sub_B52A5C(v16, v17);
          if ( v15 >= *(unsigned int *)(v22 + 24) )
          {
            v28 = sub_B52A88(v16);
            sub_B52A28(v28, 0LL);
          }
          v23 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          if ( !v23 )
            sub_B52A5C(v16, v17);
          if ( v15 >= *(unsigned int *)(v23 + 24) )
          {
            v29 = sub_B52A88(v16);
            sub_B52A28(v29, 0LL);
          }
          System_Collections_Generic_Dictionary_int__int___Add(
            v6,
            *(_DWORD *)(v22 + 4 * v12),
            *(_DWORD *)(v23 + 4 * v12),
            (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v11 = entity;
        ++v12;
        if ( !entity )
          goto LABEL_34;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v32,
    (const MethodInfo_20101AC *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  return v6;
}