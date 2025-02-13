void __fastcall VoiceCondMaster___ctor(VoiceCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD4D3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
    byte_4BDD4D3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    196,
    (const MethodInfo_325E55C *)Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
}


bool __fastcall VoiceCondMaster__IsEnable(
        VoiceCondMaster_o *this,
        int32_t *closedType,
        int32_t svtVoiceId,
        System_String_o *voiceId,
        int32_t voicePrefix,
        bool isMainResult,
        int32_t svtId,
        System_String_o **overwriteCloseMessage,
        const MethodInfo *method)
{
  int64_t list; // x0
  __int64 v16; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v17; // x26
  int32_t Count; // w0
  int32_t v19; // w27
  System_Collections_Generic_Dictionary_int__object__o *v20; // x24
  int32_t i; // w28
  const MethodInfo *v22; // x4
  int64_t v23; // x29
  __int64 v24; // x20
  __int64 v25; // x23
  int32_t v26; // w20
  System_Collections_Generic_List_object__o *v27; // x23
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  System_Collections_Generic_List_int__o *v39; // x26
  char v40; // w23
  Il2CppObject *Item; // x0
  __int64 v42; // x1
  VoiceCondMaster___c_c *v43; // x8
  System_Collections_Generic_List_object__o *v44; // x26
  System_Comparison_T__o *_9__1_0; // x27
  Il2CppObject *v46; // x28
  struct VoiceCondMaster___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  Il2CppObject *v54; // x0
  __int64 v55; // x1
  int monitor; // w25
  int v57; // w20
  int klass; // w28
  bool v59; // w8
  bool v60; // w27
  _BOOL8 v61; // x0
  __int64 v62; // x1
  const MethodInfo *v63; // x3
  Il2CppObject *current; // x26
  __int64 v65; // x1
  const MethodInfo *v66; // x2
  int v67; // w25
  System_String_o *ClosedMessage; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  VoiceClosedMessageMaster_o *MasterData_object; // [xsp+8h] [xbp-E8h]
  PartyOrganizationUtility_o *v77; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // [xsp+80h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x2.16

  if ( (byte_4BDD4D4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Item__);
    sub_1C21E38(&System_Comparison_VoiceCondEntity__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VoiceCondEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor___77576624);
    sub_1C21E38(&Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_VoiceCondEntity__TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_VoiceCondMaster___c__IsEnable_b__1_0__);
    sub_1C21E38(&VoiceCondMaster___c_TypeInfo);
    byte_4BDD4D4 = 1;
  }
  memset(&v82, 0, sizeof(v82));
  memset(&v81, 0, sizeof(v81));
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtVoiceId, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  list = (int64_t)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
  if ( !this->fields.list )
    goto LABEL_56;
  v17 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)list;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Count__);
  if ( Count >= 1 )
  {
    v77 = (PartyOrganizationUtility_o *)overwriteCloseMessage;
    v19 = Count;
    v20 = 0LL;
    for ( i = 0; i != v19; ++i )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_56;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        i,
                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Item__);
      if ( !list )
        goto LABEL_56;
      v23 = list;
      v25 = *(_QWORD *)(list + 16);
      v24 = *(_QWORD *)(list + 24);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v84.fields.currentCryptoKey = &v83;
      *(_QWORD *)&v84.fields.fakeValue = v25;
      *(_QWORD *)&v85.fields.currentCryptoKey = v24;
      *(_QWORD *)&v85.fields.fakeValue = 0LL;
      list = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_47622512(v84, v85, v22);
      if ( (list & 1) != 0 )
      {
        if ( !v17 )
          goto LABEL_56;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__Equals_47657920(
               v17,
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)(v23 + 40),
               0LL) )
        {
          if ( !v20 )
          {
            v20 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo);
            System_Collections_Generic_Dictionary_int__object____ctor(
              v20,
              (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
            if ( !v20 )
              goto LABEL_56;
          }
          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  v20,
                  *(_DWORD *)(v23 + 56),
                  (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__) )
          {
            v26 = *(_DWORD *)(v23 + 56);
            v27 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_VoiceCondEntity__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v27,
              (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
            System_Collections_Generic_Dictionary_int__object___set_Item(
              v20,
              v26,
              (Il2CppObject *)v27,
              (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
          }
          list = (int64_t)System_Collections_Generic_Dictionary_int__object___get_Item(
                            v20,
                            *(_DWORD *)(v23 + 56),
                            (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
          if ( !list )
            goto LABEL_56;
          v34 = *(_QWORD *)(list + 16);
          v35 = Method_System_Collections_Generic_List_VoiceCondEntity__Add__;
          ++*(_DWORD *)(list + 28);
          if ( !v34 )
            goto LABEL_56;
          v36 = *(int *)(list + 24);
          if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              (Il2CppObject *)v23,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = v34 + 8 * v36;
            *(_DWORD *)(list + 24) = v36 + 1;
            *(_QWORD *)(v37 + 32) = v23;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 32), v23, v28, v29, v30, v31, v32, v33);
          }
        }
      }
    }
    if ( v20 )
    {
      list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        MasterData_object = (VoiceClosedMessageMaster_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)list,
                                                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
        Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                 v20,
                 (const MethodInfo_32B570C *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
        v39 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor_56826212(
          v39,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
        if ( v39 )
        {
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v80,
            v39,
            (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v40 = 0;
          v82 = v80;
          while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v82,
                    (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
          {
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v20,
                     (int32_t)v82.fields._current,
                     (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
            v43 = VoiceCondMaster___c_TypeInfo;
            v44 = (System_Collections_Generic_List_object__o *)Item;
            if ( !VoiceCondMaster___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(VoiceCondMaster___c_TypeInfo);
              v43 = VoiceCondMaster___c_TypeInfo;
            }
            _9__1_0 = (System_Comparison_T__o *)v43->static_fields->__9__1_0;
            if ( !_9__1_0 )
            {
              if ( !v43->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v43);
                v43 = VoiceCondMaster___c_TypeInfo;
              }
              v46 = (Il2CppObject *)v43->static_fields->__9;
              _9__1_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_VoiceCondEntity__TypeInfo);
              System_Comparison_object____ctor(_9__1_0, v46, Method_VoiceCondMaster___c__IsEnable_b__1_0__, 0LL);
              static_fields = VoiceCondMaster___c_TypeInfo->static_fields;
              static_fields->__9__1_0 = (struct System_Comparison_VoiceCondEntity__o *)_9__1_0;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&static_fields->__9__1_0,
                (int64_t)_9__1_0,
                v48,
                v49,
                v50,
                v51,
                v52,
                v53);
            }
            if ( !v44 )
              sub_1C22094(Item, v42);
            System_Collections_Generic_List_object___Sort_56953720(
              v44,
              _9__1_0,
              (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
            v54 = System_Collections_Generic_List_object___get_Item(
                    v44,
                    0,
                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__);
            if ( !v54 )
              sub_1C22094(0LL, v55);
            monitor = (int)v54[3].monitor;
            v40 |= monitor == 0;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v80,
              v44,
              (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
            v57 = 0;
            klass = 0;
            v59 = monitor != 0 || isMainResult;
            v81 = v80;
LABEL_41:
            v60 = v59;
            while ( 1 )
            {
              v61 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v81,
                      (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
              if ( !v61 )
                break;
              current = v81.fields._current;
              if ( !v81.fields._current )
                sub_1C22094(v61, v62);
              if ( !VoiceCondEntity__IsEnable((VoiceCondEntity_o *)v81.fields._current, svtId, voicePrefix, v63) )
              {
                if ( SLODWORD(current[4].klass) > klass )
                {
                  klass = (int)current[4].klass;
                  *closedType = HIDWORD(current[4].klass);
                }
                v67 = (int)current[4].monitor;
                v59 = 0;
                if ( v67 > v57 )
                {
                  if ( !MasterData_object )
                    sub_1C22094(0LL, v65);
                  ClosedMessage = VoiceClosedMessageMaster__GetClosedMessage(
                                    MasterData_object,
                                    HIDWORD(current[4].monitor),
                                    v66);
                  v77->klass = (PartyOrganizationUtility_c *)ClosedMessage;
                  sub_1C21DDC(v77, (int64_t)ClosedMessage, v69, v70, v71, v72, v73, v74);
                  v59 = 0;
                  v57 = v67;
                }
                goto LABEL_41;
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v81,
              (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
            if ( v60 )
            {
              System_Collections_Generic_List_Enumerator_int___Dispose(
                (System_Collections_Generic_List_Enumerator_int__o *)&v82,
                (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              return 1;
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v82,
            (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          isMainResult &= v40 ^ 1;
          return isMainResult;
        }
      }
LABEL_56:
      sub_1C22094(list, v16);
    }
  }
  return isMainResult;
}


void __fastcall VoiceCondMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDD4D5 & 1) == 0 )
  {
    sub_1C21E38(&VoiceCondMaster___c_TypeInfo);
    byte_4BDD4D5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(VoiceCondMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  VoiceCondMaster___c_TypeInfo->static_fields->__9 = (struct VoiceCondMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)VoiceCondMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall VoiceCondMaster___c___ctor(VoiceCondMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall VoiceCondMaster___c___IsEnable_b__1_0(
        VoiceCondMaster___c_o *this,
        VoiceCondEntity_o *a,
        VoiceCondEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}