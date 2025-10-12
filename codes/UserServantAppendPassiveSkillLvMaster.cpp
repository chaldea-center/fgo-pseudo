void UserServantAppendPassiveSkillLvMaster___ctor(
        UserServantAppendPassiveSkillLvMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C38920 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
    byte_4C38920 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    376,
    (const MethodInfo_3396A70 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
}


System_Collections_Generic_Dictionary_int__int__o *UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(
        UserServantAppendPassiveSkillLvMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v6; // x19
  UserServantMaster_o *Master_object; // x0
  _BOOL8 v8; // x0
  Il2CppObject *v9; // x8
  __int64 v10; // x27
  Il2CppClass *klass; // x8
  unsigned __int64 namespaze_low; // x9
  unsigned __int64 v13; // x28
  _BOOL8 v14; // x0
  _DWORD *monitor; // x9
  int32_t v16; // w9
  int32_t v17; // w2
  Il2CppClass *v18; // x8
  Il2CppClass *v19; // x9
  _DWORD *v20; // x8
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+0h] [xbp-A0h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4C38921 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    byte_4C38921 = 1;
  }
  entity = 0;
  memset(&v24, 0, sizeof(v24));
  value = 0;
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_33E68A0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (Master_object = (UserServantMaster_o *)UserServantMaster__getSvtAllUserIdList(Master_object, svtId, 0)) == 0 )
  {
    sub_1C32E7C(Master_object);
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_long__o *)Master_object,
    (const MethodInfo_37812C4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v24 = v22;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v24,
            (const MethodInfo_3520468 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    v8 = DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           (int64_t)v24.fields._current,
           (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    if ( v8 )
    {
      v9 = entity;
      if ( !entity )
LABEL_33:
        sub_1C32E7C(v8);
      v10 = 8;
      while ( 1 )
      {
        klass = v9[5].klass;
        if ( !klass )
          sub_1C32E7C(v8);
        namespaze_low = LODWORD(klass->_1.namespaze);
        v13 = v10 - 8;
        if ( v10 - 8 >= (int)namespaze_low )
          break;
        value = 0;
        if ( v13 >= namespaze_low )
          sub_1C32E84(v8);
        if ( !v6 )
          sub_1C32E7C(v8);
        v14 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                v6,
                *((_DWORD *)&klass->_1.image + v10),
                &value,
                (const MethodInfo_33E88FC *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
        if ( v14 )
        {
          if ( !entity )
            sub_1C32E7C(v14);
          monitor = entity[5].monitor;
          if ( !monitor )
            sub_1C32E7C(v14);
          if ( v13 >= (unsigned int)monitor[6] )
            sub_1C32E84(v14);
          v16 = monitor[v10];
          if ( v16 <= value )
            v17 = value;
          else
            v17 = v16;
          value = v17;
          v18 = entity[5].klass;
          if ( !v18 )
            sub_1C32E7C(v14);
          if ( v13 >= LODWORD(v18->_1.namespaze) )
            sub_1C32E84(v14);
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v6,
            *((_DWORD *)&v18->_1.image + v10),
            v17,
            (const MethodInfo_33E7250 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          if ( !entity )
            sub_1C32E7C(v14);
          v19 = entity[5].klass;
          if ( !v19 )
            sub_1C32E7C(v14);
          if ( v13 >= LODWORD(v19->_1.namespaze) )
            sub_1C32E84(v14);
          v20 = entity[5].monitor;
          if ( !v20 )
            sub_1C32E7C(v14);
          if ( v13 >= (unsigned int)v20[6] )
            sub_1C32E84(v14);
          System_Collections_Generic_Dictionary_int__int___Add(
            v6,
            *((_DWORD *)&v19->_1.image + v10),
            v20[v10],
            (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v9 = entity;
        ++v10;
        if ( !entity )
          goto LABEL_33;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v24,
    (const MethodInfo_3520464 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  return v6;
}