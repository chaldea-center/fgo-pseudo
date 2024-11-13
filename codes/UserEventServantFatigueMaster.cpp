void __fastcall UserEventServantFatigueMaster___ctor(UserEventServantFatigueMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16EC5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__,
      method,
      v2);
    byte_4B16EC5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    297,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
}


int64_t __fastcall UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
        UserEventServantFatigueMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  int64_t result; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_long__o *v40; // x19
  Il2CppObject *Item; // x0
  __int64 v42; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *list; // x20
  int32_t Count; // w0
  Il2CppObject *v48; // x20
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_object__object__o *klass; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  int64_t v54; // x21
  Il2CppObject *Instance; // x0
  __int64 v56; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v58; // x1
  __int64 v59; // x0
  __int64 v60; // x1
  _DWORD *monitor; // x23
  int v62; // w8
  unsigned int v63; // w25
  __int64 v64; // x26
  int v65; // w27
  void *v66; // x21
  Il2CppClass *v67; // x22
  int64_t v68; // x1
  struct System_Int64_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  __int64 v72; // x1
  int64_t v73; // x19
  int64_t Time; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v75; // [xsp+0h] [xbp-C0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v77; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_4B16ECA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v16, v17);
    sub_1BCA7E0(&long_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v26, v27);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33);
    sub_1BCA7E0(&UserEventServantFatigueEntity_TypeInfo, v34, v35);
    byte_4B16ECA = 1;
  }
  memset(&v77, 0, sizeof(v77));
  entity = 0LL;
  result = (int64_t)this->fields.list;
  if ( result )
  {
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)result,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      v40 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_long__TypeInfo,
                                                         v37,
                                                         v38,
                                                         v39);
      System_Collections_Generic_List_long____ctor(
        v40,
        (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
      if ( !v40 )
        goto LABEL_52;
      items = v40->fields._items;
      v44 = Method_System_Collections_Generic_List_long__Add__;
      ++v40->fields._version;
      if ( !items )
        goto LABEL_52;
      size = v40->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v40,
          0LL,
          *(const MethodInfo_3589C90 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v40->fields._size = size + 1;
        items->m_Items[size] = 0LL;
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list
        || (Count = System_Collections_ObjectModel_Collection_object___get_Count(
                      list,
                      (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
            (Item = System_Collections_ObjectModel_Collection_object___get_Item(
                      list,
                      Count - 1,
                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__)) == 0LL)
        || (v48 = Item,
            methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (UserEventServantFatigueEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != UserEventServantFatigueEntity_TypeInfo )
      {
LABEL_52:
        sub_1BCAA3C(Item, v42);
      }
      klass = (System_Collections_Generic_Dictionary_object__object__o *)Item[2].klass;
      if ( klass && v48[2].monitor )
      {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator(
          &v75,
          klass,
          (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v77 = v75;
LABEL_18:
        while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v77,
                  (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          if ( !v77.fields._current.fields.value )
            sub_1BCAA3C(0LL, v51);
          if ( v77.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
          {
            sub_1BCACFC(v77.fields._current.fields.value);
LABEL_51:
            sub_1BCAA3C(v59, v60);
          }
          v54 = *(_QWORD *)j_il2cpp_object_unbox_0(v77.fields._current.fields.value, long_TypeInfo, v52, v53);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            sub_1BCAA3C(0LL, v56);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !MasterData_object )
            sub_1BCAA3C(0LL, v58);
          v59 = DataMasterBase_object__object__long___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                  &entity,
                  v54,
                  (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (v59 & 1) != 0 )
          {
            monitor = v48[2].monitor;
            if ( !monitor )
              goto LABEL_51;
            v62 = monitor[6];
            if ( v62 >= 1 )
            {
              v63 = 0;
              while ( 1 )
              {
                if ( v63 >= v62 )
                  sub_1BCAA44(v59, v60);
                v64 = *(_QWORD *)&monitor[2 * v63 + 8];
                if ( !v64 )
                  sub_1BCAA3C(v59, v60);
                if ( !entity )
                  sub_1BCAA3C(v59, v60);
                v65 = *(_DWORD *)(v64 + 16);
                v67 = entity[5].klass;
                v66 = entity[5].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v60);
                *(_QWORD *)&v78.fields.currentCryptoKey = v67;
                *(_QWORD *)&v78.fields.fakeValue = v66;
                v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v78, 0LL);
                if ( v65 == (_DWORD)v59 )
                  break;
                v62 = monitor[6];
                if ( (int)++v63 >= v62 )
                  goto LABEL_18;
              }
              v68 = *(_QWORD *)(v64 + 24);
              v69 = v40->fields._items;
              v70 = Method_System_Collections_Generic_List_long__Add__;
              ++v40->fields._version;
              if ( !v69 )
                sub_1BCAA3C(v59, v68);
              v71 = v40->fields._size;
              if ( (unsigned int)v71 >= v69->max_length )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v40,
                  v68,
                  *(const MethodInfo_3589C90 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
              }
              else
              {
                v40->fields._size = v71 + 1;
                v69->m_Items[v71] = v68;
              }
            }
          }
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
          &v77,
          (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      }
      v73 = System_Linq_Enumerable__Max_64624728((System_Collections_Generic_IEnumerable_long__o *)v40, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v72);
      Time = NetworkManager__getTime(0LL);
      return (v73 - Time) & ~((v73 - Time) >> 63);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


bool __fastcall UserEventServantFatigueMaster__GetFatigueInfo(
        UserEventServantFatigueMaster_o *this,
        int64_t *recoverAt,
        bool *isRecover,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
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
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x22
  System_String_o *v33; // x0
  __int64 v34; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v36; // x23
  __int64 v37; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  _QWORD *v40; // x24
  __int64 methodPtr_low; // x10
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  int64_t v45; // x22
  Il2CppObject *Instance; // x0
  __int64 v47; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v49; // x1
  _BOOL8 v50; // x0
  __int64 v51; // x1
  void *monitor; // x22
  Il2CppClass *v53; // x23
  __int64 v54; // x8
  int v55; // w9
  int v56; // w10
  __int64 v57; // x11
  bool result; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v59; // [xsp+10h] [xbp-D0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v61; // [xsp+40h] [xbp-A0h] BYREF
  _QWORD *v62; // [xsp+70h] [xbp-70h] BYREF
  int32_t v63; // [xsp+7Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  v63 = eventId;
  if ( (byte_4B16EC6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, recoverAt, isRecover);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v20, v21);
    sub_1BCA7E0(&long_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v24, v25);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    sub_1BCA7E0(&UserEventServantFatigueEntity_TypeInfo, v30, v31);
    byte_4B16EC6 = 1;
  }
  v62 = 0LL;
  entity = 0LL;
  memset(&v61, 0, sizeof(v61));
  *isRecover = 0;
  *recoverAt = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v33 = System_Int32__ToString((int32_t)&v63, 0LL);
  if ( !lookup )
    goto LABEL_40;
  klass = lookup->klass;
  v36 = v33;
  v37 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v37;
      p_offset += 2;
      if ( !v37 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  v33 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD **, _QWORD))p_method)(
                             lookup,
                             v36,
                             &v62,
                             *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)v33 & 1) == 0 )
    return 0;
  v40 = v62;
  if ( !v62
    || (methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*v62 + 304LL) < (unsigned int)methodPtr_low)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v62 + 200LL) + 8 * methodPtr_low - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_40:
    sub_1BCAA3C(v33, v34);
  }
  v33 = (System_String_o *)v62[4];
  if ( !v33 )
    goto LABEL_28;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v59,
    (System_Collections_Generic_Dictionary_object__object__o *)v33,
    (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v61 = v59;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v61,
            (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      goto LABEL_27;
    if ( !v61.fields._current.fields.value )
      sub_1BCAA3C(0LL, v42);
    if ( v61.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1BCACFC(v61.fields._current.fields.value);
      goto LABEL_40;
    }
    v45 = *(_QWORD *)j_il2cpp_object_unbox_0(v61.fields._current.fields.value, long_TypeInfo, v43, v44);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v47);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1BCAA3C(0LL, v49);
    v50 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            &entity,
            v45,
            (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( v50 )
    {
      if ( !entity )
        sub_1BCAA3C(v50, v51);
      v53 = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v51);
      *(_QWORD *)&v64.fields.currentCryptoKey = v53;
      *(_QWORD *)&v64.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v64, 0LL) == svtId )
        break;
    }
  }
  *isRecover = 1;
LABEL_27:
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v61,
    (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_28:
  v54 = v40[5];
  if ( !v54 )
    return 0;
  v55 = *(_DWORD *)(v54 + 24);
  if ( v55 < 1 )
    return 0;
  v56 = 0;
  while ( 1 )
  {
    v57 = *(_QWORD *)(v54 + 8LL * v56 + 32);
    if ( !v57 )
      goto LABEL_40;
    if ( *(_DWORD *)(v57 + 16) == svtId )
      break;
    if ( v55 == ++v56 )
      return 0;
  }
  result = 1;
  *recoverAt = *(_QWORD *)(v57 + 24);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *__fastcall UserEventServantFatigueMaster__GetRecoverySvtIdList(
        UserEventServantFatigueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
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
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x19
  __int64 Instance; // x0
  __int64 v34; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  __int64 v36; // x20
  __int64 v37; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v40; // x2
  __int64 v41; // x3
  _QWORD *v42; // x20
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_long__o *v44; // x19
  _BOOL8 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  int64_t *v49; // x0
  int64_t v50; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  int32_t v55; // w20
  int32_t v56; // w8
  struct System_Int64_array *v57; // x9
  _QWORD *v58; // x10
  Il2CppClass **v59; // x9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v60; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v61; // [xsp+30h] [xbp-60h] BYREF
  _QWORD *v62; // [xsp+58h] [xbp-38h] BYREF
  int32_t eventIda; // [xsp+6Ch] [xbp-24h] BYREF

  eventIda = eventId;
  if ( (byte_4B16EC8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v12, v13);
    sub_1BCA7E0(&long_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    sub_1BCA7E0(&UserEventServantFatigueEntity_TypeInfo, v30, v31);
    byte_4B16EC8 = 1;
  }
  v62 = 0LL;
  memset(&v61, 0, sizeof(v61));
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  Instance = (__int64)System_Int32__ToString((int32_t)&eventIda, 0LL);
  if ( !lookup )
    goto LABEL_42;
  klass = lookup->klass;
  v36 = Instance;
  v37 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v37;
      p_offset += 2;
      if ( !v37 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD **, _QWORD))p_method)(
               lookup,
               v36,
               &v62,
               *(_QWORD *)(p_method + 8));
  if ( (Instance & 1) == 0 )
    return 0LL;
  v42 = v62;
  if ( !v62 )
    goto LABEL_42;
  methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*v62 + 304LL) < (unsigned int)methodPtr_low
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v62 + 200LL) + 8 * methodPtr_low - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
    goto LABEL_42;
  }
  if ( !v62[4] )
    return 0LL;
  v44 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v34,
                                                     v40,
                                                     v41);
  System_Collections_Generic_List_long____ctor(
    v44,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = v42[4];
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v60,
    (System_Collections_Generic_Dictionary_object__object__o *)Instance,
    (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v61 = v60;
  while ( 1 )
  {
    v45 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v61,
            (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v45 )
      break;
    if ( !v44 )
      sub_1BCAA3C(v45, v46);
    if ( !v61.fields._current.fields.value )
      sub_1BCAA3C(0LL, v46);
    if ( v61.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1BCACFC(v61.fields._current.fields.value);
      goto LABEL_42;
    }
    v49 = (int64_t *)j_il2cpp_object_unbox_0(v61.fields._current.fields.value, long_TypeInfo, v47, v48);
    v50 = *v49;
    items = v44->fields._items;
    v52 = Method_System_Collections_Generic_List_long__Add__;
    ++v44->fields._version;
    if ( !items )
      sub_1BCAA3C(v49, v50);
    size = v44->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v44,
        v50,
        *(const MethodInfo_3589C90 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
    }
    else
    {
      v44->fields._size = size + 1;
      items->m_Items[size] = v50;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v61,
    (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___)) == 0
    || (Instance = (__int64)EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                              (EventFatigueRecoveryMaster_o *)Instance,
                              eventIda,
                              0LL)) == 0
    || !v44 )
  {
LABEL_42:
    sub_1BCAA3C(Instance, v34);
  }
  v55 = *(_DWORD *)(Instance + 24);
LABEL_31:
  v56 = v44->fields._size;
  while ( v56 < v55 )
  {
    v57 = v44->fields._items;
    v58 = Method_System_Collections_Generic_List_long__Add__;
    ++v44->fields._version;
    if ( !v57 )
      goto LABEL_42;
    if ( v56 >= v57->max_length )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v44,
        0LL,
        *(const MethodInfo_3589C90 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      goto LABEL_31;
    }
    v59 = &v57->obj.klass + v56++;
    v44->fields._size = v56;
    v59[4] = 0LL;
  }
  return System_Collections_Generic_List_long___ToArray(
           v44,
           (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_int__long__o *__fastcall UserEventServantFatigueMaster__GetRecoveryUserSvtDic(
        UserEventServantFatigueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  DataManager_o *Instance; // x0
  __int64 v34; // x1
  System_Int32_array *OpenRecoveryNum; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  DataManager_o *v38; // x21
  __int64 v39; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v42; // x2
  __int64 v43; // x3
  _QWORD *v44; // x21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_int__long__o *v46; // x20
  Il2CppObject *value; // x22
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  int32_t v52; // w21
  int64_t *v53; // x0
  __int64 v54; // x8
  unsigned __int64 v55; // x21
  int32_t *v56; // x22
  __int64 v57; // x8
  unsigned __int64 v58; // x21
  int32_t *v59; // x22
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v61; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v62; // [xsp+30h] [xbp-80h] BYREF
  _QWORD *v63; // [xsp+60h] [xbp-50h] BYREF
  int32_t v64; // [xsp+6Ch] [xbp-44h] BYREF

  v64 = eventId;
  if ( (byte_4B16EC9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__long__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__long___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__long__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v21, v22);
    sub_1BCA7E0(&long_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&UserEventServantFatigueEntity_TypeInfo, v31, v32);
    byte_4B16EC9 = 1;
  }
  v63 = 0LL;
  memset(&v62, 0, sizeof(v62));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_47;
  OpenRecoveryNum = EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                      (EventFatigueRecoveryMaster_o *)Instance,
                      eventId,
                      0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v64, 0LL);
  if ( !lookup )
    goto LABEL_47;
  klass = lookup->klass;
  v38 = Instance;
  v39 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v39;
      p_offset += 2;
      if ( !v39 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, DataManager_o *, _QWORD **, _QWORD))p_method)(
                                lookup,
                                v38,
                                &v63,
                                *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v44 = v63;
    if ( !v63 )
      goto LABEL_47;
    methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v63 + 304LL) < (unsigned int)methodPtr_low
      || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v63 + 200LL) + 8 * methodPtr_low - 8) != UserEventServantFatigueEntity_TypeInfo )
    {
      goto LABEL_47;
    }
    if ( v63[4] )
    {
      v46 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_int__long__TypeInfo,
                                                                    v34,
                                                                    v42,
                                                                    v43);
      System_Collections_Generic_Dictionary_int__long____ctor(
        v46,
        (const MethodInfo_32024B0 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
      Instance = (DataManager_o *)v44[4];
      if ( Instance )
      {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator(
          &v61,
          (System_Collections_Generic_Dictionary_object__object__o *)Instance,
          (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v62 = v61;
        while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v62,
                  (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          value = v62.fields._current.fields.value;
          v48 = System_Int32__Parse((System_String_o *)v62.fields._current.fields.key, 0LL);
          if ( !v46 )
            goto LABEL_49;
          if ( !value )
            sub_1BCAA3C(v48, v49);
          if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
          {
            sub_1BCACFC(value);
LABEL_49:
            sub_1BCAA3C(v48, v49);
          }
          v52 = v48;
          v53 = (int64_t *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v50, v51);
          System_Collections_Generic_Dictionary_int__long___Add(
            v46,
            v52,
            *v53,
            (const MethodInfo_3202E84 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
          &v62,
          (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
        if ( OpenRecoveryNum )
        {
          v57 = *(_QWORD *)&OpenRecoveryNum->max_length;
          if ( (int)v57 >= 1 )
          {
            v58 = 0LL;
            v59 = &OpenRecoveryNum->m_Items[1];
            while ( v58 < (unsigned int)v57 )
            {
              if ( !v46 )
                goto LABEL_47;
              Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                            v46,
                                            v59[v58],
                                            (const MethodInfo_3203078 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( v58 >= OpenRecoveryNum->max_length )
                  goto LABEL_46;
                System_Collections_Generic_Dictionary_int__long___Add(
                  v46,
                  v59[v58],
                  0LL,
                  (const MethodInfo_3202E84 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
              }
              LODWORD(v57) = OpenRecoveryNum->max_length;
              if ( (__int64)++v58 >= (int)v57 )
                return v46;
            }
            goto LABEL_46;
          }
          return v46;
        }
      }
LABEL_47:
      sub_1BCAA3C(Instance, v34);
    }
    return 0LL;
  }
  if ( !OpenRecoveryNum )
    goto LABEL_47;
  if ( !*(_QWORD *)&OpenRecoveryNum->max_length )
    return 0LL;
  v46 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_Dictionary_int__long__TypeInfo,
                                                                v34,
                                                                v42,
                                                                v43);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v46,
    (const MethodInfo_32024B0 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  v54 = *(_QWORD *)&OpenRecoveryNum->max_length;
  if ( (int)v54 >= 1 )
  {
    v55 = 0LL;
    v56 = &OpenRecoveryNum->m_Items[1];
    while ( v55 < (unsigned int)v54 )
    {
      if ( !v46 )
        goto LABEL_47;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                    v46,
                                    v56[v55],
                                    (const MethodInfo_3203078 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( v55 >= OpenRecoveryNum->max_length )
          break;
        System_Collections_Generic_Dictionary_int__long___Add(
          v46,
          v56[v55],
          0LL,
          (const MethodInfo_3202E84 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
      }
      LODWORD(v54) = OpenRecoveryNum->max_length;
      if ( (__int64)++v55 >= (int)v54 )
        return v46;
    }
LABEL_46:
    sub_1BCAA44(Instance, v34);
  }
  return v46;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventServantFatigueMaster__IsRecoverUserServant(
        UserEventServantFatigueMaster_o *this,
        int32_t eventId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x20
  System_String_o *v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v16; // x21
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 methodPtr_low; // x11
  System_Collections_Generic_Dictionary_object__object__o *v21; // x20
  Il2CppObject *v22; // x0
  int64_t v25; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_Dictionary_object__object__o **v26; // [xsp+10h] [xbp-30h] BYREF
  int32_t v27; // [xsp+1Ch] [xbp-24h] BYREF

  v27 = eventId;
  if ( (byte_4B16EC7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__,
      *(_QWORD *)&eventId,
      userSvtId);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v6, v7);
    sub_1BCA7E0(&long_TypeInfo, v8, v9);
    sub_1BCA7E0(&UserEventServantFatigueEntity_TypeInfo, v10, v11);
    byte_4B16EC7 = 1;
  }
  v26 = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v13 = System_Int32__ToString((int32_t)&v27, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v16 = v13;
  v17 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v17;
      p_offset += 2;
      if ( !v17 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  v13 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, System_Collections_Generic_Dictionary_object__object__o ***, _QWORD))p_method)(
                             lookup,
                             v16,
                             &v26,
                             *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)v13 & 1) == 0 )
    return 0;
  if ( !v26
    || (methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE((*v26)[3].fields._values) < (unsigned int)methodPtr_low)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)&(*v26)[2].fields._freeCount + 8 * methodPtr_low - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_18:
    sub_1BCAA3C(v13, v14);
  }
  v21 = v26[4];
  if ( !v21 )
    return 0;
  v25 = userSvtId;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v25);
  return System_Collections_Generic_Dictionary_object__object___ContainsValue(
           v21,
           v22,
           (const MethodInfo_3265478 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
}