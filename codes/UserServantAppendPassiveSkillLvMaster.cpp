void UserServantAppendPassiveSkillLvMaster___ctor(
        UserServantAppendPassiveSkillLvMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_5939664 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
    byte_5939664 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    378,
    (const MethodInfo_3EDD598 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
}


System_Collections_Generic_Dictionary_int__int__o *UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(
        UserServantAppendPassiveSkillLvMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v6; // x19
  __int64 v7; // x1
  UserServantMaster_o *Master_object; // x0
  __int64 v9; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x8
  __int64 v13; // x27
  Il2CppClass *klass; // x8
  unsigned __int64 namespaze_low; // x9
  unsigned __int64 v16; // x28
  _BOOL8 v17; // x0
  __int64 v18; // x1
  _DWORD *monitor; // x9
  int32_t v20; // w9
  Il2CppClass *v21; // x8
  int32_t v22; // w2
  Il2CppClass *v23; // x9
  _DWORD *v24; // x8
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+0h] [xbp-A0h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_5939665 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    byte_5939665 = 1;
  }
  entity = 0;
  memset(&v28, 0, sizeof(v28));
  value = 0;
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_3F5EAD4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (Master_object = (UserServantMaster_o *)UserServantMaster__getSvtAllUserIdList(Master_object, svtId, 0)) == 0 )
  {
    sub_21FFECC(Master_object, v9);
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_long__o *)Master_object,
    (const MethodInfo_4438C14 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v28 = v26;
  v26.fields._list = 0;
  *(_QWORD *)&v26.fields._index = &v28;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v28,
            (const MethodInfo_40C441C *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    v10 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            (int64_t)v28.fields._current,
            (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    if ( v10 )
    {
      v12 = entity;
      if ( !entity )
LABEL_33:
        sub_21FFECC(v10, v11);
      v13 = 8;
      while ( 1 )
      {
        klass = v12[5].klass;
        if ( !klass )
          sub_21FFECC(v10, v11);
        namespaze_low = LODWORD(klass->_1.namespaze);
        v16 = v13 - 8;
        if ( v13 - 8 >= (int)namespaze_low )
          break;
        value = 0;
        if ( v16 >= namespaze_low )
          sub_21FFED4(v10);
        if ( !v6 )
          sub_21FFECC(v10, v11);
        v17 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                v6,
                *((_DWORD *)&klass->_1.image + v13),
                &value,
                (const MethodInfo_3F60DE4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
        if ( v17 )
        {
          if ( !entity )
            sub_21FFECC(v17, v18);
          monitor = entity[5].monitor;
          if ( !monitor )
            sub_21FFECC(v17, v18);
          if ( v16 >= (unsigned int)monitor[6] )
            sub_21FFED4(v17);
          v20 = monitor[v13];
          v21 = entity[5].klass;
          if ( v20 <= value )
            v22 = value;
          else
            v22 = v20;
          value = v22;
          if ( !v21 )
            sub_21FFECC(v17, v18);
          if ( v16 >= LODWORD(v21->_1.namespaze) )
            sub_21FFED4(v17);
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v6,
            *((_DWORD *)&v21->_1.image + v13),
            v22,
            (const MethodInfo_3F5F464 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          if ( !entity )
            sub_21FFECC(v17, v18);
          v23 = entity[5].klass;
          if ( !v23 )
            sub_21FFECC(v17, v18);
          if ( v16 >= LODWORD(v23->_1.namespaze) )
            sub_21FFED4(v17);
          v24 = entity[5].monitor;
          if ( !v24 )
            sub_21FFECC(v17, v18);
          if ( v16 >= (unsigned int)v24[6] )
            sub_21FFED4(v17);
          System_Collections_Generic_Dictionary_int__int___Add(
            v6,
            *((_DWORD *)&v23->_1.image + v13),
            v24[v13],
            (const MethodInfo_3F5F478 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v12 = entity;
        ++v13;
        if ( !entity )
          goto LABEL_33;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v28,
    (const MethodInfo_40C4418 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  return v6;
}