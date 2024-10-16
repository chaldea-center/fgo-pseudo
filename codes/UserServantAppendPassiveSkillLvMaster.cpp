void __fastcall UserServantAppendPassiveSkillLvMaster___ctor(
        UserServantAppendPassiveSkillLvMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB6B15 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__,
      method);
    byte_4AB6B15 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    370,
    (const MethodInfo_3163EFC *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
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
  Il2CppObject *v23; // x8
  __int64 v24; // x27
  Il2CppClass *klass; // x8
  unsigned __int64 namespaze_low; // x9
  unsigned __int64 v27; // x28
  _BOOL8 v28; // x0
  __int64 v29; // x1
  _DWORD *monitor; // x9
  int32_t v31; // w9
  int32_t v32; // w2
  Il2CppClass *v33; // x8
  Il2CppClass *v34; // x9
  _DWORD *v35; // x8
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+0h] [xbp-A0h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4AB6B16 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_UserServantMaster___, userId);
    sub_1BAB41C(&DataManager_TypeInfo, v6);
    sub_1BAB41C(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v7);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v11);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v14);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v15);
    sub_1BAB41C(&Method_System_Collections_Generic_List_long__GetEnumerator__, v16);
    byte_4AB6B16 = 1;
  }
  entity = 0LL;
  memset(&v39, 0, sizeof(v39));
  value = 0;
  v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BAB668(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v17,
    (const MethodInfo_31AD800 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (Master_object = (UserServantMaster_o *)UserServantMaster__getSvtAllUserIdList(Master_object, svtId, v20)) == 0LL )
  {
    sub_1BAB678(Master_object, v19);
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_long__o *)Master_object,
    (const MethodInfo_35363C4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v39 = v37;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v39,
            (const MethodInfo_32C1E84 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    v21 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            (int64_t)v39.fields._current,
            (const MethodInfo_3163F90 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    if ( v21 )
    {
      v23 = entity;
      if ( !entity )
LABEL_33:
        sub_1BAB678(v21, v22);
      v24 = 8LL;
      while ( 1 )
      {
        klass = v23[5].klass;
        if ( !klass )
          sub_1BAB678(v21, v22);
        namespaze_low = LODWORD(klass->_1.namespaze);
        v27 = v24 - 8;
        if ( v24 - 8 >= (int)namespaze_low )
          break;
        value = 0;
        if ( v27 >= namespaze_low )
          sub_1BAB680(v21, v22);
        if ( !v17 )
          sub_1BAB678(v21, v22);
        v28 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                v17,
                *((_DWORD *)&klass->_1.image + v24),
                &value,
                (const MethodInfo_31AF85C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
        if ( v28 )
        {
          if ( !entity )
            sub_1BAB678(v28, v29);
          monitor = entity[5].monitor;
          if ( !monitor )
            sub_1BAB678(v28, v29);
          if ( v27 >= (unsigned int)monitor[6] )
            sub_1BAB680(v28, v29);
          v31 = monitor[v24];
          if ( v31 <= value )
            v32 = value;
          else
            v32 = v31;
          value = v32;
          v33 = entity[5].klass;
          if ( !v33 )
            sub_1BAB678(v28, v29);
          if ( v27 >= LODWORD(v33->_1.namespaze) )
            sub_1BAB680(v28, v29);
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v17,
            *((_DWORD *)&v33->_1.image + v24),
            v32,
            (const MethodInfo_31AE1B0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          if ( !entity )
            sub_1BAB678(v28, v29);
          v34 = entity[5].klass;
          if ( !v34 )
            sub_1BAB678(v28, v29);
          if ( v27 >= LODWORD(v34->_1.namespaze) )
            sub_1BAB680(v28, v29);
          v35 = entity[5].monitor;
          if ( !v35 )
            sub_1BAB678(v28, v29);
          if ( v27 >= (unsigned int)v35[6] )
            sub_1BAB680(v28, v29);
          System_Collections_Generic_Dictionary_int__int___Add(
            v17,
            *((_DWORD *)&v34->_1.image + v24),
            v35[v24],
            (const MethodInfo_31AE1C4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v23 = entity;
        ++v24;
        if ( !entity )
          goto LABEL_33;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v39,
    (const MethodInfo_32C1E80 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  return v17;
}