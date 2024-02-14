void __fastcall UserServantAppendPassiveSkillLvMaster___ctor(
        UserServantAppendPassiveSkillLvMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4212C28 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__,
      method);
    byte_4212C28 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    368,
    (const MethodInfo_2669D60 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
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
  _BOOL8 v19; // x0
  UserServantEntity_o *v20; // x8
  __int64 v21; // x26
  __int64 v22; // x8
  unsigned __int64 v23; // x9
  unsigned __int64 v24; // x27
  _BOOL8 v25; // x0
  __int64 v26; // x9
  int32_t v27; // w9
  int32_t v28; // w2
  __int64 v29; // x8
  __int64 v30; // x9
  __int64 v31; // x8
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x0
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+0h] [xbp-90h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+20h] [xbp-70h] BYREF
  UserServantEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4212C29 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, userId);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v11);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v16);
    byte_4212C29 = 1;
  }
  entity = 0LL;
  memset(&v40, 0, sizeof(v40));
  value = 0;
  v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               userId,
                                                               *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v17,
    (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (UserServantMaster_o *)UserServantMaster__getSvtAllUserIdList(
                                                                  Master_WarQuestSelectionMaster,
                                                                  svtId,
                                                                  0LL)) == 0LL )
  {
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_long__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2FB6CF4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v40 = v38;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v40,
            (const MethodInfo_2110DA4 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    v19 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
            &entity,
            (int64_t)v40.fields.current,
            (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    if ( v19 )
    {
      v20 = entity;
      if ( !entity )
LABEL_34:
        sub_B0D97C(v19);
      v21 = 8LL;
      while ( 1 )
      {
        v22 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
        if ( !v22 )
          sub_B0D97C(v19);
        v23 = *(unsigned int *)(v22 + 24);
        v24 = v21 - 8;
        if ( v21 - 8 >= (int)v23 )
          break;
        value = 0;
        if ( v24 >= v23 )
        {
          v33 = sub_B0D9A8(v19);
          sub_B0D948(v33, 0LL);
        }
        if ( !v17 )
          sub_B0D97C(v19);
        v25 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                v17,
                *(_DWORD *)(v22 + 4 * v21),
                &value,
                (const MethodInfo_2E6B464 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
        if ( v25 )
        {
          if ( !entity )
            sub_B0D97C(v25);
          v26 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          if ( !v26 )
            sub_B0D97C(v25);
          if ( v24 >= *(unsigned int *)(v26 + 24) )
          {
            v34 = sub_B0D9A8(v25);
            sub_B0D948(v34, 0LL);
          }
          v27 = *(_DWORD *)(v26 + 4 * v21);
          if ( v27 <= value )
            v28 = value;
          else
            v28 = v27;
          value = v28;
          v29 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          if ( !v29 )
            sub_B0D97C(v25);
          if ( v24 >= *(unsigned int *)(v29 + 24) )
          {
            v35 = sub_B0D9A8(v25);
            sub_B0D948(v35, 0LL);
          }
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v17,
            *(_DWORD *)(v29 + 4 * v21),
            v28,
            (const MethodInfo_2E6982C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          if ( !entity )
            sub_B0D97C(v25);
          v30 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          if ( !v30 )
            sub_B0D97C(v25);
          if ( v24 >= *(unsigned int *)(v30 + 24) )
          {
            v36 = sub_B0D9A8(v25);
            sub_B0D948(v36, 0LL);
          }
          v31 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          if ( !v31 )
            sub_B0D97C(v25);
          if ( v24 >= *(unsigned int *)(v31 + 24) )
          {
            v37 = sub_B0D9A8(v25);
            sub_B0D948(v37, 0LL);
          }
          System_Collections_Generic_Dictionary_int__int___Add(
            v17,
            *(_DWORD *)(v30 + 4 * v21),
            *(_DWORD *)(v31 + 4 * v21),
            (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v20 = entity;
        ++v21;
        if ( !entity )
          goto LABEL_34;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v40,
    (const MethodInfo_2110DA0 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  return v17;
}