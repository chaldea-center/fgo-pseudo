void __fastcall UserServantAppendPassiveSkillLvMaster___ctor(
        UserServantAppendPassiveSkillLvMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6AD4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E6AD4 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    369,
    (const MethodInfo_23FAF9C *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(
        UserServantAppendPassiveSkillLvMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
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
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  System_Collections_Generic_Dictionary_int__int__o *v39; // x19
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v41; // x1
  _BOOL8 v42; // x0
  __int64 v43; // x1
  UserServantEntity_o *v44; // x8
  __int64 v45; // x26
  __int64 v46; // x8
  unsigned __int64 v47; // x9
  unsigned __int64 v48; // x27
  _BOOL8 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x9
  int32_t v52; // w9
  int32_t v53; // w2
  __int64 v54; // x8
  __int64 v55; // x9
  __int64 v56; // x8
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x0
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+0h] [xbp-90h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+20h] [xbp-70h] BYREF
  UserServantEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_42E6AD5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, userId, svtId, method);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v36, v37, v38);
    byte_42E6AD5 = 1;
  }
  entity = 0LL;
  memset(&v65, 0, sizeof(v65));
  value = 0;
  v39 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v39,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (UserServantMaster_o *)UserServantMaster__getSvtAllUserIdList(
                                                                  Master_WarQuestSelectionMaster,
                                                                  svtId,
                                                                  0LL)) == 0LL )
  {
    sub_B5D69C(Master_WarQuestSelectionMaster, v41);
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v63,
    (System_Collections_Generic_List_long__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_30485CC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v65 = v63;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v65,
            (const MethodInfo_201D824 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    v42 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
            &entity,
            (int64_t)v65.fields.current,
            (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    if ( v42 )
    {
      v44 = entity;
      if ( !entity )
LABEL_34:
        sub_B5D69C(v42, v43);
      v45 = 8LL;
      while ( 1 )
      {
        v46 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
        if ( !v46 )
          sub_B5D69C(v42, v43);
        v47 = *(unsigned int *)(v46 + 24);
        v48 = v45 - 8;
        if ( v45 - 8 >= (int)v47 )
          break;
        value = 0;
        if ( v48 >= v47 )
        {
          v58 = sub_B5D6C8(v42);
          sub_B5D668(v58, 0LL);
        }
        if ( !v39 )
          sub_B5D69C(v42, v43);
        v49 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                v39,
                *(_DWORD *)(v46 + 4 * v45),
                &value,
                (const MethodInfo_2F0CA68 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
        if ( v49 )
        {
          if ( !entity )
            sub_B5D69C(v49, v50);
          v51 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          if ( !v51 )
            sub_B5D69C(v49, v50);
          if ( v48 >= *(unsigned int *)(v51 + 24) )
          {
            v59 = sub_B5D6C8(v49);
            sub_B5D668(v59, 0LL);
          }
          v52 = *(_DWORD *)(v51 + 4 * v45);
          if ( v52 <= value )
            v53 = value;
          else
            v53 = v52;
          value = v53;
          v54 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          if ( !v54 )
            sub_B5D69C(v49, v50);
          if ( v48 >= *(unsigned int *)(v54 + 24) )
          {
            v60 = sub_B5D6C8(v49);
            sub_B5D668(v60, 0LL);
          }
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v39,
            *(_DWORD *)(v54 + 4 * v45),
            v53,
            (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          if ( !entity )
            sub_B5D69C(v49, v50);
          v55 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          if ( !v55 )
            sub_B5D69C(v49, v50);
          if ( v48 >= *(unsigned int *)(v55 + 24) )
          {
            v61 = sub_B5D6C8(v49);
            sub_B5D668(v61, 0LL);
          }
          v56 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          if ( !v56 )
            sub_B5D69C(v49, v50);
          if ( v48 >= *(unsigned int *)(v56 + 24) )
          {
            v62 = sub_B5D6C8(v49);
            sub_B5D668(v62, 0LL);
          }
          System_Collections_Generic_Dictionary_int__int___Add(
            v39,
            *(_DWORD *)(v55 + 4 * v45),
            *(_DWORD *)(v56 + 4 * v45),
            (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v44 = entity;
        ++v45;
        if ( !entity )
          goto LABEL_34;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v65,
    (const MethodInfo_201D820 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  return v39;
}