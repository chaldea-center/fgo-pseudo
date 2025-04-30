void __fastcall UserServantAppendPassiveSkillLvMaster___ctor(
        UserServantAppendPassiveSkillLvMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A4F36A & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__,
      method);
    byte_4A4F36A = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    376,
    (const MethodInfo_32144B8 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
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
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x8
  __int64 v23; // x27
  Il2CppClass *klass; // x8
  unsigned __int64 namespaze_low; // x9
  unsigned __int64 v26; // x28
  _BOOL8 v27; // x0
  __int64 v28; // x1
  _DWORD *monitor; // x9
  int32_t v30; // w9
  int32_t v31; // w2
  Il2CppClass *v32; // x8
  Il2CppClass *v33; // x9
  _DWORD *v34; // x8
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+0h] [xbp-A0h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4A4F36B & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantMaster___, userId);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v7);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v11);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_long__GetEnumerator__, v16);
    byte_4A4F36B = 1;
  }
  entity = 0LL;
  memset(&v38, 0, sizeof(v38));
  value = 0;
  v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v17,
    (const MethodInfo_3264078 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (Master_object = (UserServantMaster_o *)UserServantMaster__getSvtAllUserIdList(Master_object, svtId, 0LL)) == 0LL )
  {
    sub_1B86614(Master_object, v19);
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_long__o *)Master_object,
    (const MethodInfo_35E5460 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v38 = v36;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v38,
            (const MethodInfo_337D808 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    v20 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            (int64_t)v38.fields._current,
            (const MethodInfo_3216828 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    if ( v20 )
    {
      v22 = entity;
      if ( !entity )
LABEL_33:
        sub_1B86614(v20, v21);
      v23 = 8LL;
      while ( 1 )
      {
        klass = v22[5].klass;
        if ( !klass )
          sub_1B86614(v20, v21);
        namespaze_low = LODWORD(klass->_1.namespaze);
        v26 = v23 - 8;
        if ( v23 - 8 >= (int)namespaze_low )
          break;
        value = 0;
        if ( v26 >= namespaze_low )
          sub_1B8661C(v20, v21);
        if ( !v17 )
          sub_1B86614(v20, v21);
        v27 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                v17,
                *((_DWORD *)&klass->_1.image + v23),
                &value,
                (const MethodInfo_32660D4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
        if ( v27 )
        {
          if ( !entity )
            sub_1B86614(v27, v28);
          monitor = entity[5].monitor;
          if ( !monitor )
            sub_1B86614(v27, v28);
          if ( v26 >= (unsigned int)monitor[6] )
            sub_1B8661C(v27, v28);
          v30 = monitor[v23];
          if ( v30 <= value )
            v31 = value;
          else
            v31 = v30;
          value = v31;
          v32 = entity[5].klass;
          if ( !v32 )
            sub_1B86614(v27, v28);
          if ( v26 >= LODWORD(v32->_1.namespaze) )
            sub_1B8661C(v27, v28);
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v17,
            *((_DWORD *)&v32->_1.image + v23),
            v31,
            (const MethodInfo_3264A28 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          if ( !entity )
            sub_1B86614(v27, v28);
          v33 = entity[5].klass;
          if ( !v33 )
            sub_1B86614(v27, v28);
          if ( v26 >= LODWORD(v33->_1.namespaze) )
            sub_1B8661C(v27, v28);
          v34 = entity[5].monitor;
          if ( !v34 )
            sub_1B86614(v27, v28);
          if ( v26 >= (unsigned int)v34[6] )
            sub_1B8661C(v27, v28);
          System_Collections_Generic_Dictionary_int__int___Add(
            v17,
            *((_DWORD *)&v33->_1.image + v23),
            v34[v23],
            (const MethodInfo_3264A3C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v22 = entity;
        ++v23;
        if ( !entity )
          goto LABEL_33;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v38,
    (const MethodInfo_337D804 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  return v17;
}