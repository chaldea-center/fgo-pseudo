void __fastcall UserServantAppendPassiveSkillLvMaster___ctor(
        UserServantAppendPassiveSkillLvMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1D422 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__,
      method);
    byte_4B1D422 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    376,
    (const MethodInfo_32C8038 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
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
  UserServantMaster_o *Master_object; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *v24; // x8
  __int64 v25; // x27
  Il2CppClass *klass; // x8
  unsigned __int64 namespaze_low; // x9
  unsigned __int64 v28; // x28
  _BOOL8 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  _DWORD *monitor; // x9
  int32_t v33; // w9
  __int64 v34; // x2
  Il2CppClass *v35; // x8
  Il2CppClass *v36; // x9
  _DWORD *v37; // x8
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+0h] [xbp-A0h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4B1D423 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantMaster___, userId);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v11);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__GetEnumerator__, v16);
    byte_4B1D423 = 1;
  }
  entity = 0LL;
  memset(&v41, 0, sizeof(v41));
  value = 0;
  v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v17,
    (const MethodInfo_3317E68 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (Master_object = (UserServantMaster_o *)UserServantMaster__getSvtAllUserIdList(Master_object, svtId, v20)) == 0LL )
  {
    sub_1BCB254(Master_object, v19);
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_long__o *)Master_object,
    (const MethodInfo_36A26D8 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v41 = v39;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v41,
            (const MethodInfo_344C9DC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    v21 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            (int64_t)v41.fields._current,
            (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    if ( v21 )
    {
      v24 = entity;
      if ( !entity )
LABEL_33:
        sub_1BCB254(v21, v22);
      v25 = 8LL;
      while ( 1 )
      {
        klass = v24[5].klass;
        if ( !klass )
          sub_1BCB254(v21, v22);
        namespaze_low = LODWORD(klass->_1.namespaze);
        v28 = v25 - 8;
        if ( v25 - 8 >= (int)namespaze_low )
          break;
        value = 0;
        if ( v28 >= namespaze_low )
          sub_1BCB25C(v21, v22, v23);
        if ( !v17 )
          sub_1BCB254(v21, v22);
        v29 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                v17,
                *((_DWORD *)&klass->_1.image + v25),
                &value,
                (const MethodInfo_3319EC4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
        if ( v29 )
        {
          if ( !entity )
            sub_1BCB254(v29, v30);
          monitor = entity[5].monitor;
          if ( !monitor )
            sub_1BCB254(v29, v30);
          if ( v28 >= (unsigned int)monitor[6] )
            sub_1BCB25C(v29, v30, v31);
          v33 = monitor[v25];
          if ( v33 <= value )
            v34 = (unsigned int)value;
          else
            v34 = (unsigned int)v33;
          value = v34;
          v35 = entity[5].klass;
          if ( !v35 )
            sub_1BCB254(v29, v30);
          if ( v28 >= LODWORD(v35->_1.namespaze) )
            sub_1BCB25C(v29, v30, v34);
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v17,
            *((_DWORD *)&v35->_1.image + v25),
            v34,
            (const MethodInfo_3318818 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          if ( !entity )
            sub_1BCB254(v29, v30);
          v36 = entity[5].klass;
          if ( !v36 )
            sub_1BCB254(v29, v30);
          if ( v28 >= LODWORD(v36->_1.namespaze) )
            sub_1BCB25C(v29, v30, v31);
          v37 = entity[5].monitor;
          if ( !v37 )
            sub_1BCB254(v29, v30);
          if ( v28 >= (unsigned int)v37[6] )
            sub_1BCB25C(v29, v30, v31);
          System_Collections_Generic_Dictionary_int__int___Add(
            v17,
            *((_DWORD *)&v36->_1.image + v25),
            v37[v25],
            (const MethodInfo_331882C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v24 = entity;
        ++v25;
        if ( !entity )
          goto LABEL_33;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v41,
    (const MethodInfo_344C9D8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  return v17;
}