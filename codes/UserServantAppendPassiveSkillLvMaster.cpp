void __fastcall UserServantAppendPassiveSkillLvMaster___ctor(
        UserServantAppendPassiveSkillLvMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16FC9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__,
      method,
      v2);
    byte_4B16FC9 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    370,
    (const MethodInfo_31B2FAC *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_int__int__o *__fastcall UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(
        UserServantAppendPassiveSkillLvMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_Dictionary_int__int__o *v28; // x19
  __int64 v29; // x1
  UserServantMaster_o *Master_object; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x8
  __int64 v36; // x27
  Il2CppClass *klass; // x8
  unsigned __int64 namespaze_low; // x9
  unsigned __int64 v39; // x28
  _BOOL8 v40; // x0
  __int64 v41; // x1
  _DWORD *monitor; // x9
  int32_t v43; // w9
  int32_t v44; // w2
  Il2CppClass *v45; // x8
  Il2CppClass *v46; // x9
  _DWORD *v47; // x8
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+0h] [xbp-A0h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4B16FCA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, userId, *(_QWORD *)&svtId);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v8,
      v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__GetEnumerator__, v26, v27);
    byte_4B16FCA = 1;
  }
  entity = 0LL;
  memset(&v51, 0, sizeof(v51));
  value = 0;
  v28 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               userId,
                                                               *(_QWORD *)&svtId,
                                                               method);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v28,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (Master_object = (UserServantMaster_o *)UserServantMaster__getSvtAllUserIdList(Master_object, svtId, v32)) == 0LL )
  {
    sub_1BCAA3C(Master_object, v31);
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v49,
    (System_Collections_Generic_List_long__o *)Master_object,
    (const MethodInfo_358A764 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v51 = v49;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v51,
            (const MethodInfo_3313F28 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    v33 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            (int64_t)v51.fields._current,
            (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    if ( v33 )
    {
      v35 = entity;
      if ( !entity )
LABEL_33:
        sub_1BCAA3C(v33, v34);
      v36 = 8LL;
      while ( 1 )
      {
        klass = v35[5].klass;
        if ( !klass )
          sub_1BCAA3C(v33, v34);
        namespaze_low = LODWORD(klass->_1.namespaze);
        v39 = v36 - 8;
        if ( v36 - 8 >= (int)namespaze_low )
          break;
        value = 0;
        if ( v39 >= namespaze_low )
          sub_1BCAA44(v33, v34);
        if ( !v28 )
          sub_1BCAA3C(v33, v34);
        v40 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                v28,
                *((_DWORD *)&klass->_1.image + v36),
                &value,
                (const MethodInfo_31FE90C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
        if ( v40 )
        {
          if ( !entity )
            sub_1BCAA3C(v40, v41);
          monitor = entity[5].monitor;
          if ( !monitor )
            sub_1BCAA3C(v40, v41);
          if ( v39 >= (unsigned int)monitor[6] )
            sub_1BCAA44(v40, v41);
          v43 = monitor[v36];
          if ( v43 <= value )
            v44 = value;
          else
            v44 = v43;
          value = v44;
          v45 = entity[5].klass;
          if ( !v45 )
            sub_1BCAA3C(v40, v41);
          if ( v39 >= LODWORD(v45->_1.namespaze) )
            sub_1BCAA44(v40, v41);
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v28,
            *((_DWORD *)&v45->_1.image + v36),
            v44,
            (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          if ( !entity )
            sub_1BCAA3C(v40, v41);
          v46 = entity[5].klass;
          if ( !v46 )
            sub_1BCAA3C(v40, v41);
          if ( v39 >= LODWORD(v46->_1.namespaze) )
            sub_1BCAA44(v40, v41);
          v47 = entity[5].monitor;
          if ( !v47 )
            sub_1BCAA3C(v40, v41);
          if ( v39 >= (unsigned int)v47[6] )
            sub_1BCAA44(v40, v41);
          System_Collections_Generic_Dictionary_int__int___Add(
            v28,
            *((_DWORD *)&v46->_1.image + v36),
            v47[v36],
            (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v35 = entity;
        ++v36;
        if ( !entity )
          goto LABEL_33;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v51,
    (const MethodInfo_3313F24 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  return v28;
}