void __fastcall VoiceCondMaster___ctor(VoiceCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5651 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__, method);
    byte_4BB5651 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    196,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  int64_t list; // x0
  __int64 v45; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v46; // x26
  int32_t Count; // w0
  int32_t v48; // w27
  System_Collections_Generic_Dictionary_int__object__o *v49; // x24
  int32_t i; // w28
  const MethodInfo *v51; // x4
  int64_t v52; // x29
  __int64 v53; // x20
  __int64 v54; // x23
  int32_t v55; // w20
  System_Collections_Generic_List_object__o *v56; // x23
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  __int64 v66; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  System_Collections_Generic_List_int__o *v68; // x26
  char v69; // w23
  Il2CppObject *Item; // x0
  __int64 v71; // x1
  VoiceCondMaster___c_c *v72; // x8
  System_Collections_Generic_List_object__o *v73; // x26
  System_Comparison_T__o *_9__1_0; // x27
  Il2CppObject *v75; // x28
  struct VoiceCondMaster___c_StaticFields *static_fields; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  Il2CppObject *v83; // x0
  __int64 v84; // x1
  int monitor; // w25
  int v86; // w20
  int klass; // w28
  bool v88; // w8
  bool v89; // w27
  _BOOL8 v90; // x0
  __int64 v91; // x1
  const MethodInfo *v92; // x3
  Il2CppObject *current; // x26
  __int64 v94; // x1
  const MethodInfo *v95; // x2
  int v96; // w25
  System_String_o *ClosedMessage; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  VoiceClosedMessageMaster_o *MasterData_object; // [xsp+8h] [xbp-E8h]
  PartyOrganizationUtility_o *v106; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v109; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v110; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v111; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // [xsp+80h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x2.16

  if ( (byte_4BB5652 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Count__, closedType);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Item__, v15);
    sub_1C13D24(&System_Comparison_VoiceCondEntity__TypeInfo, v16);
    sub_1C13D24(&Method_DataManager_GetMasterData_VoiceClosedMessageMaster___, v17);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__, v21);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__, v22);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo, v23);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v24);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__, v25);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__, v26);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v27);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__get_Current__, v28);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v29);
    sub_1C13D24(&Method_System_Collections_Generic_List_VoiceCondEntity__Add__, v30);
    sub_1C13D24(&Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__, v31);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__GetEnumerator__, v32);
    sub_1C13D24(&Method_System_Collections_Generic_List_VoiceCondEntity__Sort__, v33);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor___77417304, v34);
    sub_1C13D24(&Method_System_Collections_Generic_List_VoiceCondEntity___ctor__, v35);
    sub_1C13D24(&Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__, v36);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v37);
    sub_1C13D24(&System_Collections_Generic_List_VoiceCondEntity__TypeInfo, v38);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v40);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41);
    sub_1C13D24(&Method_VoiceCondMaster___c__IsEnable_b__1_0__, v42);
    sub_1C13D24(&VoiceCondMaster___c_TypeInfo, v43);
    byte_4BB5652 = 1;
  }
  memset(&v111, 0, sizeof(v111));
  memset(&v110, 0, sizeof(v110));
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v112 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtVoiceId, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  list = (int64_t)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
  if ( !this->fields.list )
    goto LABEL_56;
  v46 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)list;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Count__);
  if ( Count >= 1 )
  {
    v106 = (PartyOrganizationUtility_o *)overwriteCloseMessage;
    v48 = Count;
    v49 = 0LL;
    for ( i = 0; i != v48; ++i )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_56;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        i,
                        (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Item__);
      if ( !list )
        goto LABEL_56;
      v52 = list;
      v54 = *(_QWORD *)(list + 16);
      v53 = *(_QWORD *)(list + 24);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v113.fields.currentCryptoKey = &v112;
      *(_QWORD *)&v113.fields.fakeValue = v54;
      *(_QWORD *)&v114.fields.currentCryptoKey = v53;
      *(_QWORD *)&v114.fields.fakeValue = 0LL;
      list = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_47491756(v113, v114, v51);
      if ( (list & 1) != 0 )
      {
        if ( !v46 )
          goto LABEL_56;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__Equals_47527164(
               v46,
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)(v52 + 40),
               0LL) )
        {
          if ( !v49 )
          {
            v49 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo);
            System_Collections_Generic_Dictionary_int__object____ctor(
              v49,
              (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
            if ( !v49 )
              goto LABEL_56;
          }
          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  v49,
                  *(_DWORD *)(v52 + 56),
                  (const MethodInfo_329249C *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__) )
          {
            v55 = *(_DWORD *)(v52 + 56);
            v56 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_VoiceCondEntity__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v56,
              (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
            System_Collections_Generic_Dictionary_int__object___set_Item(
              v49,
              v55,
              (Il2CppObject *)v56,
              (const MethodInfo_3292294 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
          }
          list = (int64_t)System_Collections_Generic_Dictionary_int__object___get_Item(
                            v49,
                            *(_DWORD *)(v52 + 56),
                            (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
          if ( !list )
            goto LABEL_56;
          v63 = *(_QWORD *)(list + 16);
          v64 = Method_System_Collections_Generic_List_VoiceCondEntity__Add__;
          ++*(_DWORD *)(list + 28);
          if ( !v63 )
            goto LABEL_56;
          v65 = *(int *)(list + 24);
          if ( (unsigned int)v65 >= *(_DWORD *)(v63 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              (Il2CppObject *)v52,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
          }
          else
          {
            v66 = v63 + 8 * v65;
            *(_DWORD *)(list + 24) = v65 + 1;
            *(_QWORD *)(v66 + 32) = v52;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v66 + 32), v52, v57, v58, v59, v60, v61, v62);
          }
        }
      }
    }
    if ( v49 )
    {
      list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        MasterData_object = (VoiceClosedMessageMaster_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)list,
                                                            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
        Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                 v49,
                 (const MethodInfo_3291F68 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
        v68 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor_56687228(
          v68,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_360FA7C *)Method_System_Collections_Generic_List_int___ctor___77417304);
        if ( v68 )
        {
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v109,
            v68,
            (const MethodInfo_3610C7C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v69 = 0;
          v111 = v109;
          while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v111,
                    (const MethodInfo_33BAB1C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
          {
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v49,
                     (int32_t)v111.fields._current,
                     (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
            v72 = VoiceCondMaster___c_TypeInfo;
            v73 = (System_Collections_Generic_List_object__o *)Item;
            if ( !VoiceCondMaster___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(VoiceCondMaster___c_TypeInfo);
              v72 = VoiceCondMaster___c_TypeInfo;
            }
            _9__1_0 = (System_Comparison_T__o *)v72->static_fields->__9__1_0;
            if ( !_9__1_0 )
            {
              if ( !v72->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v72);
                v72 = VoiceCondMaster___c_TypeInfo;
              }
              v75 = (Il2CppObject *)v72->static_fields->__9;
              _9__1_0 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_VoiceCondEntity__TypeInfo);
              System_Comparison_object____ctor(_9__1_0, v75, Method_VoiceCondMaster___c__IsEnable_b__1_0__, 0LL);
              static_fields = VoiceCondMaster___c_TypeInfo->static_fields;
              static_fields->__9__1_0 = (struct System_Comparison_VoiceCondEntity__o *)_9__1_0;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)&static_fields->__9__1_0,
                (int64_t)_9__1_0,
                v77,
                v78,
                v79,
                v80,
                v81,
                v82);
            }
            if ( !v73 )
              sub_1C13F80(Item, v71);
            System_Collections_Generic_List_object___Sort_56814736(
              v73,
              _9__1_0,
              (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
            v83 = System_Collections_Generic_List_object___get_Item(
                    v73,
                    0,
                    (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__);
            if ( !v83 )
              sub_1C13F80(0LL, v84);
            monitor = (int)v83[3].monitor;
            v69 |= monitor == 0;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v109,
              v73,
              (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
            v86 = 0;
            klass = 0;
            v88 = monitor != 0 || isMainResult;
            v110 = v109;
LABEL_41:
            v89 = v88;
            while ( 1 )
            {
              v90 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v110,
                      (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
              if ( !v90 )
                break;
              current = v110.fields._current;
              if ( !v110.fields._current )
                sub_1C13F80(v90, v91);
              if ( !VoiceCondEntity__IsEnable((VoiceCondEntity_o *)v110.fields._current, svtId, voicePrefix, v92) )
              {
                if ( SLODWORD(current[4].klass) > klass )
                {
                  klass = (int)current[4].klass;
                  *closedType = HIDWORD(current[4].klass);
                }
                v96 = (int)current[4].monitor;
                v88 = 0;
                if ( v96 > v86 )
                {
                  if ( !MasterData_object )
                    sub_1C13F80(0LL, v94);
                  ClosedMessage = VoiceClosedMessageMaster__GetClosedMessage(
                                    MasterData_object,
                                    HIDWORD(current[4].monitor),
                                    v95);
                  v106->klass = (PartyOrganizationUtility_c *)ClosedMessage;
                  sub_1C13CC8(v106, (int64_t)ClosedMessage, v98, v99, v100, v101, v102, v103);
                  v88 = 0;
                  v86 = v96;
                }
                goto LABEL_41;
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v110,
              (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
            if ( v89 )
            {
              System_Collections_Generic_List_Enumerator_int___Dispose(
                (System_Collections_Generic_List_Enumerator_int__o *)&v111,
                (const MethodInfo_33BAB18 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              return 1;
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v111,
            (const MethodInfo_33BAB18 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          isMainResult &= v69 ^ 1;
          return isMainResult;
        }
      }
LABEL_56:
      sub_1C13F80(list, v45);
    }
  }
  return isMainResult;
}


void __fastcall VoiceCondMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB5653 & 1) == 0 )
  {
    sub_1C13D24(&VoiceCondMaster___c_TypeInfo, v1);
    byte_4BB5653 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(VoiceCondMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  VoiceCondMaster___c_TypeInfo->static_fields->__9 = (struct VoiceCondMaster___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)VoiceCondMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, a);
  return b->fields.priority - a->fields.priority;
}