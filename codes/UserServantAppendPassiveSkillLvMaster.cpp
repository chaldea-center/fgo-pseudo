void __fastcall UserServantAppendPassiveSkillLvMaster___ctor(
        UserServantAppendPassiveSkillLvMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5BF13 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
    byte_4A5BF13 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    370,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long___ctor__);
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
  const MethodInfo *v9; // x2
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
  int32_t v21; // w2
  Il2CppClass *v22; // x8
  Il2CppClass *v23; // x9
  _DWORD *v24; // x8
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+0h] [xbp-A0h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4A5BF14 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    byte_4A5BF14 = 1;
  }
  entity = 0LL;
  memset(&v28, 0, sizeof(v28));
  value = 0;
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object
    || (Master_object = (UserServantMaster_o *)UserServantMaster__getSvtAllUserIdList(Master_object, svtId, v9)) == 0LL )
  {
    sub_1B8880C(Master_object, v8);
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_long__o *)Master_object,
    (const MethodInfo_34E633C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v28 = v26;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v28,
            (const MethodInfo_3275510 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    v10 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            (int64_t)v28.fields._current,
            (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    if ( v10 )
    {
      v12 = entity;
      if ( !entity )
LABEL_33:
        sub_1B8880C(v10, v11);
      v13 = 8LL;
      while ( 1 )
      {
        klass = v12[5].klass;
        if ( !klass )
          sub_1B8880C(v10, v11);
        namespaze_low = LODWORD(klass->_1.namespaze);
        v16 = v13 - 8;
        if ( v13 - 8 >= (int)namespaze_low )
          break;
        value = 0;
        if ( v16 >= namespaze_low )
          sub_1B88814(v10, v11);
        if ( !v6 )
          sub_1B8880C(v10, v11);
        v17 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                v6,
                *((_DWORD *)&klass->_1.image + v13),
                &value,
                (const MethodInfo_3166520 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
        if ( v17 )
        {
          if ( !entity )
            sub_1B8880C(v17, v18);
          monitor = entity[5].monitor;
          if ( !monitor )
            sub_1B8880C(v17, v18);
          if ( v16 >= (unsigned int)monitor[6] )
            sub_1B88814(v17, v18);
          v20 = monitor[v13];
          if ( v20 <= value )
            v21 = value;
          else
            v21 = v20;
          value = v21;
          v22 = entity[5].klass;
          if ( !v22 )
            sub_1B8880C(v17, v18);
          if ( v16 >= LODWORD(v22->_1.namespaze) )
            sub_1B88814(v17, v18);
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v6,
            *((_DWORD *)&v22->_1.image + v13),
            v21,
            (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          if ( !entity )
            sub_1B8880C(v17, v18);
          v23 = entity[5].klass;
          if ( !v23 )
            sub_1B8880C(v17, v18);
          if ( v16 >= LODWORD(v23->_1.namespaze) )
            sub_1B88814(v17, v18);
          v24 = entity[5].monitor;
          if ( !v24 )
            sub_1B8880C(v17, v18);
          if ( v16 >= (unsigned int)v24[6] )
            sub_1B88814(v17, v18);
          System_Collections_Generic_Dictionary_int__int___Add(
            v6,
            *((_DWORD *)&v23->_1.image + v13),
            v24[v13],
            (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
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
    (const MethodInfo_327550C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  return v6;
}