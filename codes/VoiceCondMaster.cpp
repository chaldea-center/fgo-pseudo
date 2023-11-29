void __fastcall VoiceCondMaster___ctor(VoiceCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FF742 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__, method);
    byte_40FF742 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    190,
    (const MethodInfo_266F73C *)Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
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
  __int64 v14; // x1
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
  __int64 v44; // x1
  int32_t Count; // w0
  const MethodInfo_290DF28 **v46; // x24
  VoiceCondEntity_c **v47; // x27
  const MethodInfo_2DE9630 **v48; // x23
  int32_t v49; // w26
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v50; // x19
  int32_t i; // w28
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v54; // x4
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v55; // x20
  __int64 v56; // x9
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  const MethodInfo_2DE9630 **v65; // x25
  VoiceCondEntity_c **v66; // x23
  int32_t v67; // w27
  const MethodInfo_290DF28 **v68; // x26
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v69; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // x19
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v71; // x0
  WarBoardAIRoute_RouteData_o *v72; // x2
  WarBoardEvalValueSquare_EvalValueSquare_o *v73; // x0
  WebViewManager_o *Instance; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x19
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  System_Collections_Generic_List_int__o *v80; // x20
  int v81; // w23
  char v82; // w19
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v87; // x26
  VoiceCondMaster___c_c *v88; // x0
  struct VoiceCondMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v91; // x27
  struct VoiceCondMaster___c_StaticFields *v92; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  TitleInfoControl_EventEndTimeInfo_o *v99; // x8
  int32_t event_id; // w20
  int v101; // w28
  int klass; // w24
  bool v103; // w8
  bool v104; // w26
  const MethodInfo *v105; // x3
  Il2CppObject *current; // x20
  const MethodInfo *v107; // x2
  int monitor; // w27
  System_Int32_array **ClosedMessage; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  int v116; // w24
  int v117; // w8
  bool v118; // w20
  int v119; // w8
  int v120; // w21
  int v121; // w9
  BattleServantConfConponent_o *v123; // [xsp+8h] [xbp-F8h]
  int32_t keya; // [xsp+18h] [xbp-E8h]
  VoiceClosedMessageMaster_o *key; // [xsp+18h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v128; // [xsp+28h] [xbp-D8h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v130; // [xsp+30h] [xbp-D0h]
  _BYTE v131[36]; // [xsp+38h] [xbp-C8h] BYREF
  int v132; // [xsp+5Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v133; // [xsp+60h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v134; // [xsp+80h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x2.16

  if ( (byte_40FF743 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, closedType);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v14);
    sub_B16FFC(&Method_System_Comparison_VoiceCondEntity___ctor__, v15);
    sub_B16FFC(&System_Comparison_VoiceCondEntity__TypeInfo, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_VoiceClosedMessageMaster___, v17);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__, v22);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__get_Current__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_VoiceCondEntity__Add__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v31);
    sub_B16FFC(&Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__, v32);
    sub_B16FFC(&Method_System_Collections_Generic_List_VoiceCondEntity__Sort__, v33);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v34);
    sub_B16FFC(&Method_System_Collections_Generic_List_VoiceCondEntity___ctor__, v35);
    sub_B16FFC(&Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__, v36);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v37);
    sub_B16FFC(&System_Collections_Generic_List_VoiceCondEntity__TypeInfo, v38);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v40);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41);
    sub_B16FFC(&Method_VoiceCondMaster___c__IsEnable_b__1_0__, v42);
    sub_B16FFC(&VoiceCondMaster___c_TypeInfo, v43);
    sub_B16FFC(&VoiceCondEntity_TypeInfo, v44);
    byte_40FF743 = 1;
  }
  v135 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  memset(&v134, 0, sizeof(v134));
  memset(&v133, 0, sizeof(v133));
  v132 = 0;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v135 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtVoiceId, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
  if ( !this->fields.list )
    goto LABEL_69;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v123 = (BattleServantConfConponent_o *)overwriteCloseMessage;
    v46 = (const MethodInfo_290DF28 **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v47 = &VoiceCondEntity_TypeInfo;
    v48 = (const MethodInfo_2DE9630 **)&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__;
    v49 = Count;
    v50 = 0LL;
    for ( i = 0; i < v49; ++i )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_69;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(list, i, *v46);
      if ( !Item )
        goto LABEL_69;
      v55 = Item;
      v56 = *(&(*v47)->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v56
        || (VoiceCondEntity_c *)Item->klass->_2.typeHierarchy[v56 - 1] != *v47 )
      {
        sub_B173C8(Item);
        sub_B170A0();
      }
      *(_QWORD *)&v136.fields.fakeValue = Item[1].klass;
      *(_QWORD *)&v137.fields.currentCryptoKey = Item[1].monitor;
      *(_QWORD *)&v136.fields.currentCryptoKey = &v135;
      *(_QWORD *)&v137.fields.fakeValue = 0LL;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_44069572(v136, v137, v54) )
      {
        if ( !v128 )
          goto LABEL_69;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__Equals_44107764(
               v128,
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v55[2].monitor,
               0LL) )
        {
          if ( !v50 )
          {
            v50 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo, v57, v58, v59, v60);
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
              v50,
              (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
            if ( !v50 )
              goto LABEL_69;
          }
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v50,
                  (int32_t)v55[3].monitor,
                  *v48) )
          {
            keya = (int32_t)v55[3].monitor;
            v65 = v48;
            v66 = v47;
            v67 = v49;
            v68 = v46;
            v69 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v50;
            v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_VoiceCondEntity__TypeInfo, v61, v62, v63, v64);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v70,
              (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
            v71 = v69;
            v72 = (WarBoardAIRoute_RouteData_o *)v70;
            v50 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v69;
            v46 = v68;
            v49 = v67;
            v47 = v66;
            v48 = v65;
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              v71,
              keya,
              v72,
              (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
          }
          v73 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                  v50,
                  (int32_t)v55[3].monitor,
                  (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
          if ( !v73 )
            goto LABEL_69;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v73,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_VoiceCondEntity__Add__);
        }
      }
    }
    if ( v50 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        key = (VoiceClosedMessageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
        v130 = v50;
        Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                 (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v50,
                 (const MethodInfo_2DE8FC8 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
        v80 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v76,
                                                          v77,
                                                          v78,
                                                          v79);
        System_Collections_Generic_List_int____ctor_49346956(
          v80,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
        if ( v80 )
        {
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v131,
            v80,
            (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v81 = 0;
          v82 = 0;
          v134 = *(System_Collections_Generic_List_Enumerator_int__o *)v131;
          while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                    &v134,
                    (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
          {
            v87 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                            v130,
                                                                                            v134.fields.current,
                                                                                            (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
            v88 = VoiceCondMaster___c_TypeInfo;
            if ( (BYTE3(VoiceCondMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !VoiceCondMaster___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(VoiceCondMaster___c_TypeInfo);
              v88 = VoiceCondMaster___c_TypeInfo;
            }
            static_fields = v88->static_fields;
            _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
            if ( !_9__1_0 )
            {
              if ( (BYTE3(v88->vtable._0_Equals.methodPtr) & 4) != 0 && !v88->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v88);
                static_fields = VoiceCondMaster___c_TypeInfo->static_fields;
              }
              v91 = (Il2CppObject *)static_fields->__9;
              _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                                    System_Comparison_VoiceCondEntity__TypeInfo,
                                                                                    v83,
                                                                                    v84,
                                                                                    v85,
                                                                                    v86);
              System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
                _9__1_0,
                v91,
                Method_VoiceCondMaster___c__IsEnable_b__1_0__,
                (const MethodInfo_25BFD48 *)Method_System_Comparison_VoiceCondEntity___ctor__);
              v92 = VoiceCondMaster___c_TypeInfo->static_fields;
              v92->__9__1_0 = (struct System_Comparison_VoiceCondEntity__o *)_9__1_0;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v92->__9__1_0,
                (System_Int32_array **)_9__1_0,
                v93,
                v94,
                v95,
                v96,
                v97,
                v98);
            }
            if ( !v87 )
              sub_B170D4();
            System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
              v87,
              (System_Comparison_T__o *)_9__1_0,
              (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
            if ( !v87->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v99 = v87->fields._items->m_Items[0];
            if ( !v99 )
              sub_B170D4();
            event_id = v99[1].fields.event_id;
            v82 |= event_id == 0;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v131,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v87,
              (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
            v101 = 0;
            klass = 0;
            v103 = event_id != 0 || isMainResult;
            v133 = *(System_Collections_Generic_List_Enumerator_T__o *)v131;
LABEL_44:
            v104 = v103;
            while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v133,
                      (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__) )
            {
              current = v133.fields.current;
              if ( !v133.fields.current )
                sub_B170D4();
              if ( !VoiceCondEntity__IsEnable((VoiceCondEntity_o *)v133.fields.current, svtId, voicePrefix, v105) )
              {
                if ( SLODWORD(current[4].klass) > klass )
                {
                  klass = (int)current[4].klass;
                  *closedType = HIDWORD(current[4].klass);
                }
                monitor = (int)current[4].monitor;
                v103 = 0;
                if ( monitor > v101 )
                {
                  if ( !key )
                    sub_B170D4();
                  ClosedMessage = (System_Int32_array **)VoiceClosedMessageMaster__GetClosedMessage(
                                                           key,
                                                           HIDWORD(current[4].monitor),
                                                           v107);
                  v123->klass = (BattleServantConfConponent_c *)ClosedMessage;
                  sub_B16F98(v123, ClosedMessage, v110, v111, v112, v113, v114, v115);
                  v103 = 0;
                  v101 = monitor;
                }
                goto LABEL_44;
              }
            }
            *(_DWORD *)&v131[4 * v81 + 24] = 410;
            v116 = v132 + 1;
            v132 = v116;
            v81 = v116;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v133,
              (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
            if ( v116 )
            {
              v117 = v116 - 1;
              if ( *(_DWORD *)&v131[4 * v116 + 20] == 410 )
              {
                --v116;
                v81 = v117;
                v132 = v117;
              }
            }
            if ( v104 )
            {
              v118 = 1;
              v119 = 456;
              goto LABEL_62;
            }
          }
          v118 = 0;
          v119 = 447;
          v116 = v81;
LABEL_62:
          *(_DWORD *)&v131[4 * v116 + 24] = v119;
          v120 = ++v132;
          System_Collections_Generic_List_Enumerator_int___Dispose(
            &v134,
            (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          if ( v120 )
          {
            v121 = *(_DWORD *)&v131[4 * v120 + 20];
            if ( v121 == 447 )
            {
              v132 = v120 - 1;
            }
            else if ( v121 == 456 )
            {
              v132 = v120 - 1;
              return v118;
            }
          }
          isMainResult &= v82 ^ 1;
          return isMainResult;
        }
      }
LABEL_69:
      sub_B170D4();
    }
  }
  return isMainResult;
}


void __fastcall VoiceCondMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F79B5 & 1) == 0 )
  {
    sub_B16FFC(&VoiceCondMaster___c_TypeInfo, v1);
    byte_40F79B5 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(VoiceCondMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)VoiceCondMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}