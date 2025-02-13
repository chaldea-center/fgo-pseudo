void __fastcall UserServantAppendPassiveSkillLvMaster___ctor(
        UserServantAppendPassiveSkillLvMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDD371 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
    byte_4BDD371 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    374,
    (const MethodInfo_325C000 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(
        UserServantAppendPassiveSkillLvMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v6; // x19
  UserServantMaster_o *Master_object; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x8
  __int64 v12; // x27
  Il2CppClass *klass; // x8
  unsigned __int64 namespaze_low; // x9
  unsigned __int64 v15; // x28
  _BOOL8 v16; // x0
  __int64 v17; // x1
  _DWORD *monitor; // x9
  int32_t v19; // w9
  int32_t v20; // w2
  Il2CppClass *v21; // x8
  Il2CppClass *v22; // x9
  _DWORD *v23; // x8
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+0h] [xbp-A0h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4BDD372 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    byte_4BDD372 = 1;
  }
  entity = 0LL;
  memset(&v27, 0, sizeof(v27));
  value = 0;
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_32AC5B8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (Master_object = (UserServantMaster_o *)UserServantMaster__getSvtAllUserIdList(Master_object, svtId, 0LL)) == 0LL )
  {
    sub_1C22094(Master_object, v8);
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_long__o *)Master_object,
    (const MethodInfo_3637BBC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v27 = v25;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v27,
            (const MethodInfo_33DE4A8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    v9 = DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           (int64_t)v27.fields._current,
           (const MethodInfo_325E370 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    if ( v9 )
    {
      v11 = entity;
      if ( !entity )
LABEL_33:
        sub_1C22094(v9, v10);
      v12 = 8LL;
      while ( 1 )
      {
        klass = v11[5].klass;
        if ( !klass )
          sub_1C22094(v9, v10);
        namespaze_low = LODWORD(klass->_1.namespaze);
        v15 = v12 - 8;
        if ( v12 - 8 >= (int)namespaze_low )
          break;
        value = 0;
        if ( v15 >= namespaze_low )
          sub_1C2209C(v9, v10);
        if ( !v6 )
          sub_1C22094(v9, v10);
        v16 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                v6,
                *((_DWORD *)&klass->_1.image + v12),
                &value,
                (const MethodInfo_32AE614 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
        if ( v16 )
        {
          if ( !entity )
            sub_1C22094(v16, v17);
          monitor = entity[5].monitor;
          if ( !monitor )
            sub_1C22094(v16, v17);
          if ( v15 >= (unsigned int)monitor[6] )
            sub_1C2209C(v16, v17);
          v19 = monitor[v12];
          if ( v19 <= value )
            v20 = value;
          else
            v20 = v19;
          value = v20;
          v21 = entity[5].klass;
          if ( !v21 )
            sub_1C22094(v16, v17);
          if ( v15 >= LODWORD(v21->_1.namespaze) )
            sub_1C2209C(v16, v17);
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v6,
            *((_DWORD *)&v21->_1.image + v12),
            v20,
            (const MethodInfo_32ACF68 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          if ( !entity )
            sub_1C22094(v16, v17);
          v22 = entity[5].klass;
          if ( !v22 )
            sub_1C22094(v16, v17);
          if ( v15 >= LODWORD(v22->_1.namespaze) )
            sub_1C2209C(v16, v17);
          v23 = entity[5].monitor;
          if ( !v23 )
            sub_1C22094(v16, v17);
          if ( v15 >= (unsigned int)v23[6] )
            sub_1C2209C(v16, v17);
          System_Collections_Generic_Dictionary_int__int___Add(
            v6,
            *((_DWORD *)&v22->_1.image + v12),
            v23[v12],
            (const MethodInfo_32ACF7C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v11 = entity;
        ++v12;
        if ( !entity )
          goto LABEL_33;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v27,
    (const MethodInfo_33DE4A4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  return v6;
}