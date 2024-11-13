void __fastcall VoiceCondMaster___ctor(VoiceCondMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1712B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__, method, v2);
    byte_4B1712B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    192,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
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
  System_Collections_Generic_List_object__o *v9; // x23
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
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // kr00_16
  int64_t list; // x0
  __int64 v78; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v79; // x26
  int32_t Count; // w0
  int32_t v81; // w27
  System_Collections_Generic_Dictionary_int__object__o *v82; // x24
  int32_t i; // w28
  const MethodInfo *v84; // x4
  int64_t v85; // x29
  __int64 methodPtr_low; // x9
  __int64 v87; // x20
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  int32_t v93; // w20
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  __int64 v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  __int64 v103; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  System_Collections_Generic_List_int__o *v108; // x26
  Il2CppObject *Item; // x0
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  VoiceCondMaster___c_c *v113; // x8
  System_Collections_Generic_List_object__o *v114; // x26
  System_Comparison_T__o *_9__1_0; // x27
  Il2CppObject *v116; // x28
  struct VoiceCondMaster___c_StaticFields *static_fields; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  Il2CppObject *v124; // x0
  __int64 v125; // x1
  int monitor; // w25
  int v127; // w20
  int klass; // w28
  bool v129; // w8
  bool v130; // w27
  _BOOL8 v131; // x0
  __int64 v132; // x1
  const MethodInfo *v133; // x3
  Il2CppObject *current; // x26
  __int64 v135; // x1
  const MethodInfo *v136; // x2
  int v137; // w25
  System_String_o *ClosedMessage; // x0
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  __int64 v146; // x20
  VoiceClosedMessageMaster_o *MasterData_object; // [xsp+8h] [xbp-E8h]
  PartyOrganizationUtility_o *v148; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v151; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v152; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v153; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // [xsp+80h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // 0:x2.16

  if ( (byte_4B1712C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      closedType,
      *(_QWORD *)&svtVoiceId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v16, v17);
    sub_1BCA7E0(&System_Comparison_VoiceCondEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoiceClosedMessageMaster___, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__get_Current__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VoiceCondEntity__Add__, v46, v47);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__, v48, v49);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v50, v51);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VoiceCondEntity__Sort__, v52, v53);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v54, v55);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VoiceCondEntity___ctor__, v56, v57);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__, v58, v59);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v60, v61);
    sub_1BCA7E0(&System_Collections_Generic_List_VoiceCondEntity__TypeInfo, v62, v63);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v64, v65);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v66, v67);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v68, v69);
    sub_1BCA7E0(&Method_VoiceCondMaster___c__IsEnable_b__1_0__, v70, v71);
    sub_1BCA7E0(&VoiceCondMaster___c_TypeInfo, v72, v73);
    sub_1BCA7E0(&VoiceCondEntity_TypeInfo, v74, v75);
    byte_4B1712C = 1;
  }
  memset(&v153, 0, sizeof(v153));
  memset(&v152, 0, sizeof(v152));
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, closedType);
  v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtVoiceId, 0LL);
  v154 = v76;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo,
      *(_QWORD *)&v76.fields.fakeValue);
  list = (int64_t)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
  if ( !this->fields.list )
    goto LABEL_59;
  v79 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)list;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v148 = (PartyOrganizationUtility_o *)overwriteCloseMessage;
    v81 = Count;
    v82 = 0LL;
    for ( i = 0; i != v81; ++i )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_59;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        i,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        goto LABEL_59;
      v85 = list;
      methodPtr_low = LOBYTE(VoiceCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(VoiceCondEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != VoiceCondEntity_TypeInfo )
      {
        sub_1BCACFC(list);
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v152,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
        if ( (_DWORD)v79 != 1 )
        {
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v153,
            (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          sub_1CB5270();
        }
        v146 = *(_QWORD *)__cxa_begin_catch(this);
        __cxa_end_catch();
        System_Collections_Generic_List_Enumerator_int___Dispose(
          (System_Collections_Generic_List_Enumerator_int__o *)&v153,
          (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v146 )
          sub_1BCAA34(v146);
        goto LABEL_57;
      }
      v9 = *(System_Collections_Generic_List_object__o **)(list + 16);
      v87 = *(_QWORD *)(list + 24);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, VoiceCondEntity_TypeInfo);
      *(_QWORD *)&v155.fields.currentCryptoKey = &v154;
      *(_QWORD *)&v155.fields.fakeValue = v9;
      *(_QWORD *)&v156.fields.currentCryptoKey = v87;
      *(_QWORD *)&v156.fields.fakeValue = 0LL;
      list = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_47012576(v155, v156, v84);
      if ( (list & 1) != 0 )
      {
        if ( !v79 )
          goto LABEL_59;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__Equals_47047984(
               v79,
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)(v85 + 40),
               0LL) )
        {
          if ( !v82 )
          {
            v82 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                            System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo,
                                                                            v78,
                                                                            v88,
                                                                            v89);
            System_Collections_Generic_Dictionary_int__object____ctor(
              v82,
              (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
            if ( !v82 )
              goto LABEL_59;
          }
          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  v82,
                  *(_DWORD *)(v85 + 56),
                  (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__) )
          {
            v93 = *(_DWORD *)(v85 + 56);
            v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_VoiceCondEntity__TypeInfo,
                                                                v90,
                                                                v91,
                                                                v92);
            System_Collections_Generic_List_object____ctor(
              v9,
              (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
            System_Collections_Generic_Dictionary_int__object___set_Item(
              v82,
              v93,
              (Il2CppObject *)v9,
              (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
          }
          list = (int64_t)System_Collections_Generic_Dictionary_int__object___get_Item(
                            v82,
                            *(_DWORD *)(v85 + 56),
                            (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
          if ( !list )
            goto LABEL_59;
          v100 = *(_QWORD *)(list + 16);
          v101 = Method_System_Collections_Generic_List_VoiceCondEntity__Add__;
          ++*(_DWORD *)(list + 28);
          if ( !v100 )
            goto LABEL_59;
          v102 = *(int *)(list + 24);
          if ( (unsigned int)v102 >= *(_DWORD *)(v100 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              (Il2CppObject *)v85,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
          }
          else
          {
            v103 = v100 + 8 * v102;
            *(_DWORD *)(list + 24) = v102 + 1;
            *(_QWORD *)(v103 + 32) = v85;
            sub_1BCA784((PartyOrganizationUtility_o *)(v103 + 32), v85, v94, v95, v96, v97, v98, v99);
          }
        }
      }
    }
    if ( v82 )
    {
      list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        MasterData_object = (VoiceClosedMessageMaster_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)list,
                                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
        Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                 v82,
                 (const MethodInfo_3205BA4 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
        v108 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_int__TypeInfo,
                                                           v105,
                                                           v106,
                                                           v107);
        System_Collections_Generic_List_int____ctor_56116492(
          v108,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
        if ( v108 )
        {
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v151,
            v108,
            (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          LOBYTE(v9) = 0;
          v153 = v151;
          while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v153,
                    (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
          {
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v82,
                     (int32_t)v153.fields._current,
                     (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
            v113 = VoiceCondMaster___c_TypeInfo;
            v114 = (System_Collections_Generic_List_object__o *)Item;
            if ( !VoiceCondMaster___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(VoiceCondMaster___c_TypeInfo, v110);
              v113 = VoiceCondMaster___c_TypeInfo;
            }
            _9__1_0 = (System_Comparison_T__o *)v113->static_fields->__9__1_0;
            if ( !_9__1_0 )
            {
              if ( !v113->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v113, v110);
                v113 = VoiceCondMaster___c_TypeInfo;
              }
              v116 = (Il2CppObject *)v113->static_fields->__9;
              _9__1_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                                    System_Comparison_VoiceCondEntity__TypeInfo,
                                                    v110,
                                                    v111,
                                                    v112);
              System_Comparison_object____ctor(_9__1_0, v116, Method_VoiceCondMaster___c__IsEnable_b__1_0__, 0LL);
              static_fields = VoiceCondMaster___c_TypeInfo->static_fields;
              static_fields->__9__1_0 = (struct System_Comparison_VoiceCondEntity__o *)_9__1_0;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&static_fields->__9__1_0,
                (int64_t)_9__1_0,
                v118,
                v119,
                v120,
                v121,
                v122,
                v123);
            }
            if ( !v114 )
              sub_1BCAA3C(Item, v110);
            System_Collections_Generic_List_object___Sort_56244000(
              v114,
              _9__1_0,
              (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
            v124 = System_Collections_Generic_List_object___get_Item(
                     v114,
                     0,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__);
            if ( !v124 )
              sub_1BCAA3C(0LL, v125);
            monitor = (int)v124[3].monitor;
            LOBYTE(v9) = (unsigned __int8)v9 | (monitor == 0);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v151,
              v114,
              (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
            v127 = 0;
            klass = 0;
            v129 = monitor != 0 || isMainResult;
            v152 = v151;
LABEL_43:
            v130 = v129;
            while ( 1 )
            {
              v131 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v152,
                       (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
              if ( !v131 )
                break;
              current = v152.fields._current;
              if ( !v152.fields._current )
                sub_1BCAA3C(v131, v132);
              if ( !VoiceCondEntity__IsEnable((VoiceCondEntity_o *)v152.fields._current, svtId, voicePrefix, v133) )
              {
                if ( SLODWORD(current[4].klass) > klass )
                {
                  klass = (int)current[4].klass;
                  *closedType = HIDWORD(current[4].klass);
                }
                v137 = (int)current[4].monitor;
                v129 = 0;
                if ( v137 > v127 )
                {
                  if ( !MasterData_object )
                    sub_1BCAA3C(0LL, v135);
                  ClosedMessage = VoiceClosedMessageMaster__GetClosedMessage(
                                    MasterData_object,
                                    HIDWORD(current[4].monitor),
                                    v136);
                  v148->klass = (PartyOrganizationUtility_c *)ClosedMessage;
                  sub_1BCA784(v148, (int64_t)ClosedMessage, v139, v140, v141, v142, v143, v144);
                  v129 = 0;
                  v127 = v137;
                }
                goto LABEL_43;
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v152,
              (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
            if ( v130 )
            {
              System_Collections_Generic_List_Enumerator_int___Dispose(
                (System_Collections_Generic_List_Enumerator_int__o *)&v153,
                (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              return 1;
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v153,
            (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_57:
          isMainResult &= (unsigned __int8)v9 ^ 1;
          return isMainResult;
        }
      }
LABEL_59:
      sub_1BCAA3C(list, v78);
    }
  }
  return isMainResult;
}


void __fastcall VoiceCondMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1712D & 1) == 0 )
  {
    sub_1BCA7E0(&VoiceCondMaster___c_TypeInfo, v1, v2);
    byte_4B1712D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(VoiceCondMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  VoiceCondMaster___c_TypeInfo->static_fields->__9 = (struct VoiceCondMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)VoiceCondMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}