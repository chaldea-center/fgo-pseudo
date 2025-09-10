void UserServantAppendPassiveSkillLvMaster___ctor(
        UserServantAppendPassiveSkillLvMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2821C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
    byte_4C2821C = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    376,
    (const MethodInfo_3387FD0 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
}


System_Collections_Generic_Dictionary_int__int__o *UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(
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
  __int64 v11; // x2
  Il2CppObject *v12; // x8
  __int64 v13; // x27
  Il2CppClass *klass; // x8
  unsigned __int64 namespaze_low; // x9
  unsigned __int64 v16; // x28
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  _DWORD *monitor; // x9
  int32_t v21; // w9
  __int64 v22; // x2
  Il2CppClass *v23; // x8
  Il2CppClass *v24; // x9
  _DWORD *v25; // x8
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+0h] [xbp-A0h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4C2821D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    byte_4C2821D = 1;
  }
  entity = 0;
  memset(&v29, 0, sizeof(v29));
  value = 0;
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_33D7E00 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (Master_object = (UserServantMaster_o *)UserServantMaster__getSvtAllUserIdList(Master_object, svtId, 0)) == 0 )
  {
    sub_1C2D6EC(Master_object, v8);
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_long__o *)Master_object,
    (const MethodInfo_377268C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v29 = v27;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v29,
            (const MethodInfo_35119C8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    v9 = DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           (int64_t)v29.fields._current,
           (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    if ( v9 )
    {
      v12 = entity;
      if ( !entity )
LABEL_33:
        sub_1C2D6EC(v9, v10);
      v13 = 8;
      while ( 1 )
      {
        klass = v12[5].klass;
        if ( !klass )
          sub_1C2D6EC(v9, v10);
        namespaze_low = LODWORD(klass->_1.namespaze);
        v16 = v13 - 8;
        if ( v13 - 8 >= (int)namespaze_low )
          break;
        value = 0;
        if ( v16 >= namespaze_low )
          sub_1C2D6F4(v9, v10, v11);
        if ( !v6 )
          sub_1C2D6EC(v9, v10);
        v17 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                v6,
                *((_DWORD *)&klass->_1.image + v13),
                &value,
                (const MethodInfo_33D9E5C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
        if ( v17 )
        {
          if ( !entity )
            sub_1C2D6EC(v17, v18);
          monitor = entity[5].monitor;
          if ( !monitor )
            sub_1C2D6EC(v17, v18);
          if ( v16 >= (unsigned int)monitor[6] )
            sub_1C2D6F4(v17, v18, v19);
          v21 = monitor[v13];
          if ( v21 <= value )
            v22 = (unsigned int)value;
          else
            v22 = (unsigned int)v21;
          value = v22;
          v23 = entity[5].klass;
          if ( !v23 )
            sub_1C2D6EC(v17, v18);
          if ( v16 >= LODWORD(v23->_1.namespaze) )
            sub_1C2D6F4(v17, v18, v22);
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v6,
            *((_DWORD *)&v23->_1.image + v13),
            v22,
            (const MethodInfo_33D87B0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          if ( !entity )
            sub_1C2D6EC(v17, v18);
          v24 = entity[5].klass;
          if ( !v24 )
            sub_1C2D6EC(v17, v18);
          if ( v16 >= LODWORD(v24->_1.namespaze) )
            sub_1C2D6F4(v17, v18, v19);
          v25 = entity[5].monitor;
          if ( !v25 )
            sub_1C2D6EC(v17, v18);
          if ( v16 >= (unsigned int)v25[6] )
            sub_1C2D6F4(v17, v18, v19);
          System_Collections_Generic_Dictionary_int__int___Add(
            v6,
            *((_DWORD *)&v24->_1.image + v13),
            v25[v13],
            (const MethodInfo_33D87C4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v12 = entity;
        ++v13;
        if ( !entity )
          goto LABEL_33;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v29,
    (const MethodInfo_35119C4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  return v6;
}