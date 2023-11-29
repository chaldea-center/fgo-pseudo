void __fastcall UserServantAppendPassiveSkillLvMaster___ctor(
        UserServantAppendPassiveSkillLvMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F8109 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__,
      method);
    byte_40F8109 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    368,
    (const MethodInfo_266F514 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_int__int__o *__fastcall UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(
        UserServantAppendPassiveSkillLvMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_int__int__o *v18; // x19
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_long__o *SvtAllUserIdList; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  UserServantEntity_o *v24; // x8
  __int64 v25; // x26
  __int64 v26; // x8
  unsigned __int64 v27; // x9
  unsigned __int64 v28; // x27
  _BOOL8 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x9
  int32_t v33; // w9
  __int64 v34; // x2
  __int64 v35; // x8
  __int64 v36; // x9
  __int64 v37; // x8
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+0h] [xbp-90h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-70h] BYREF
  UserServantEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_40F810A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, userId);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__GetEnumerator__, v17);
    byte_40F810A = 1;
  }
  entity = 0LL;
  memset(&v41, 0, sizeof(v41));
  value = 0;
  v18 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               userId,
                                                               *(_QWORD *)&svtId,
                                                               method,
                                                               v4);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v18,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (SvtAllUserIdList = UserServantMaster__getSvtAllUserIdList(Master_WarQuestSelectionMaster, svtId, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v39,
    SvtAllUserIdList,
    (const MethodInfo_2F172E4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v41 = v39;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v41,
            (const MethodInfo_20728A8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    v21 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
            &entity,
            (int64_t)v41.fields.current,
            (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    if ( v21 )
    {
      v24 = entity;
      if ( !entity )
LABEL_34:
        sub_B170D4();
      v25 = 8LL;
      while ( 1 )
      {
        v26 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
        if ( !v26 )
          sub_B170D4();
        v27 = *(unsigned int *)(v26 + 24);
        v28 = v25 - 8;
        if ( v25 - 8 >= (int)v27 )
          break;
        value = 0;
        if ( v28 >= v27 )
        {
          sub_B17100(v21, v22, v23);
          sub_B170A0();
        }
        if ( !v18 )
          sub_B170D4();
        v29 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                v18,
                *(_DWORD *)(v26 + 4 * v25),
                &value,
                (const MethodInfo_2DDEBC4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
        if ( v29 )
        {
          if ( !entity )
            sub_B170D4();
          v32 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          if ( !v32 )
            sub_B170D4();
          if ( v28 >= *(unsigned int *)(v32 + 24) )
          {
            sub_B17100(v29, v30, v31);
            sub_B170A0();
          }
          v33 = *(_DWORD *)(v32 + 4 * v25);
          if ( v33 <= value )
            v34 = (unsigned int)value;
          else
            v34 = (unsigned int)v33;
          value = v34;
          v35 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          if ( !v35 )
            sub_B170D4();
          if ( v28 >= *(unsigned int *)(v35 + 24) )
          {
            sub_B17100(v29, v30, v34);
            sub_B170A0();
          }
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v18,
            *(_DWORD *)(v35 + 4 * v25),
            v34,
            (const MethodInfo_2DDCF8C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          if ( !entity )
            sub_B170D4();
          v36 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          if ( !v36 )
            sub_B170D4();
          if ( v28 >= *(unsigned int *)(v36 + 24) )
          {
            sub_B17100(v29, v30, v31);
            sub_B170A0();
          }
          v37 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          if ( !v37 )
            sub_B170D4();
          if ( v28 >= *(unsigned int *)(v37 + 24) )
          {
            sub_B17100(v29, v30, v31);
            sub_B170A0();
          }
          System_Collections_Generic_Dictionary_int__int___Add(
            v18,
            *(_DWORD *)(v36 + 4 * v25),
            *(_DWORD *)(v37 + 4 * v25),
            (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v24 = entity;
        ++v25;
        if ( !entity )
          goto LABEL_34;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v41,
    (const MethodInfo_20728A4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  return v18;
}