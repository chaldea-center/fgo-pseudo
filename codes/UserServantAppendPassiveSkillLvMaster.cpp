void __fastcall UserServantAppendPassiveSkillLvMaster___ctor(
        UserServantAppendPassiveSkillLvMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FD19A & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__,
      method);
    byte_49FD19A = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    370,
    (const MethodInfo_30D4010 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
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
  UserServantMaster_o *Master_object; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x8
  __int64 v22; // x27
  Il2CppClass *klass; // x8
  unsigned __int64 namespaze_low; // x9
  unsigned __int64 v25; // x28
  _BOOL8 v26; // x0
  __int64 v27; // x1
  _DWORD *monitor; // x9
  int32_t v29; // w9
  int32_t v30; // w2
  Il2CppClass *v31; // x8
  Il2CppClass *v32; // x9
  _DWORD *v33; // x8
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+0h] [xbp-A0h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_49FD19B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, userId);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__GetEnumerator__, v16);
    byte_49FD19B = 1;
  }
  entity = 0LL;
  memset(&v37, 0, sizeof(v37));
  value = 0;
  v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               userId,
                                                               *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v17,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (Master_object = (UserServantMaster_o *)UserServantMaster__getSvtAllUserIdList(Master_object, svtId, 0LL)) == 0LL )
  {
    sub_1B64324(Master_object);
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_long__o *)Master_object,
    (const MethodInfo_3495BE8 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v37 = v35;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v37,
            (const MethodInfo_32272BC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    v19 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            (int64_t)v37.fields._current,
            (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    if ( v19 )
    {
      v21 = entity;
      if ( !entity )
LABEL_33:
        sub_1B64324(v19);
      v22 = 8LL;
      while ( 1 )
      {
        klass = v21[5].klass;
        if ( !klass )
          sub_1B64324(v19);
        namespaze_low = LODWORD(klass->_1.namespaze);
        v25 = v22 - 8;
        if ( v22 - 8 >= (int)namespaze_low )
          break;
        value = 0;
        if ( v25 >= namespaze_low )
          sub_1B6432C(v19, v20);
        if ( !v17 )
          sub_1B64324(v19);
        v26 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                v17,
                *((_DWORD *)&klass->_1.image + v22),
                &value,
                (const MethodInfo_311C54C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
        if ( v26 )
        {
          if ( !entity )
            sub_1B64324(v26);
          monitor = entity[5].monitor;
          if ( !monitor )
            sub_1B64324(v26);
          if ( v25 >= (unsigned int)monitor[6] )
            sub_1B6432C(v26, v27);
          v29 = monitor[v22];
          if ( v29 <= value )
            v30 = value;
          else
            v30 = v29;
          value = v30;
          v31 = entity[5].klass;
          if ( !v31 )
            sub_1B64324(v26);
          if ( v25 >= LODWORD(v31->_1.namespaze) )
            sub_1B6432C(v26, v27);
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v17,
            *((_DWORD *)&v31->_1.image + v22),
            v30,
            (const MethodInfo_311AEA0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          if ( !entity )
            sub_1B64324(v26);
          v32 = entity[5].klass;
          if ( !v32 )
            sub_1B64324(v26);
          if ( v25 >= LODWORD(v32->_1.namespaze) )
            sub_1B6432C(v26, v27);
          v33 = entity[5].monitor;
          if ( !v33 )
            sub_1B64324(v26);
          if ( v25 >= (unsigned int)v33[6] )
            sub_1B6432C(v26, v27);
          System_Collections_Generic_Dictionary_int__int___Add(
            v17,
            *((_DWORD *)&v32->_1.image + v22),
            v33[v22],
            (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v21 = entity;
        ++v22;
        if ( !entity )
          goto LABEL_33;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v37,
    (const MethodInfo_32272B8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  return v17;
}