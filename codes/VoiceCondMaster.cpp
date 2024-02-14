void __fastcall VoiceCondMaster___ctor(VoiceCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421A2B3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__, method);
    byte_421A2B3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    190,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *list; // x0
  int32_t Count; // w0
  const MethodInfo_2AB57BC **v47; // x24
  VoiceCondEntity_c **v48; // x27
  const MethodInfo_2E9069C **v49; // x23
  int32_t v50; // w26
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v51; // x19
  int32_t i; // w28
  const MethodInfo *v53; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v54; // x20
  __int64 v55; // x9
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  const MethodInfo_2E9069C **v60; // x25
  VoiceCondEntity_c **v61; // x23
  int32_t v62; // w27
  const MethodInfo_2AB57BC **v63; // x26
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v64; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x19
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v66; // x0
  WarBoardAIRoute_RouteData_o *v67; // x2
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x19
  __int64 v69; // x1
  __int64 v70; // x2
  System_Collections_Generic_List_int__o *v71; // x20
  int v72; // w23
  char v73; // w19
  __int64 v74; // x1
  __int64 v75; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *Item; // x26
  VoiceCondMaster___c_c *v77; // x0
  struct VoiceCondMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v80; // x27
  struct VoiceCondMaster___c_StaticFields *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  __int64 v88; // x0
  TitleInfoControl_EventEndTimeInfo_o *v89; // x8
  int32_t event_id; // w20
  int v91; // w28
  int klass; // w24
  bool v93; // w8
  bool v94; // w26
  _BOOL8 v95; // x0
  const MethodInfo *v96; // x3
  Il2CppObject *current; // x20
  const MethodInfo *v98; // x2
  int monitor; // w27
  System_Int32_array **ClosedMessage; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  int v107; // w24
  int v108; // w8
  bool v109; // w20
  int v110; // w8
  int v111; // w21
  int v112; // w9
  BattleServantConfConponent_o *v114; // [xsp+8h] [xbp-F8h]
  int32_t keya; // [xsp+18h] [xbp-E8h]
  VoiceClosedMessageMaster_o *key; // [xsp+18h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v119; // [xsp+28h] [xbp-D8h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v121; // [xsp+30h] [xbp-D0h]
  _BYTE v122[36]; // [xsp+38h] [xbp-C8h] BYREF
  int v123; // [xsp+5Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v124; // [xsp+60h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v125; // [xsp+80h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x2.16

  if ( (byte_421A2B4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, closedType);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v14);
    sub_B0D8A4(&Method_System_Comparison_VoiceCondEntity___ctor__, v15);
    sub_B0D8A4(&System_Comparison_VoiceCondEntity__TypeInfo, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoiceClosedMessageMaster___, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__, v22);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__get_Current__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VoiceCondEntity__Add__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VoiceCondEntity__Sort__, v33);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v34);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VoiceCondEntity___ctor__, v35);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__, v36);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v37);
    sub_B0D8A4(&System_Collections_Generic_List_VoiceCondEntity__TypeInfo, v38);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v40);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41);
    sub_B0D8A4(&Method_VoiceCondMaster___c__IsEnable_b__1_0__, v42);
    sub_B0D8A4(&VoiceCondMaster___c_TypeInfo, v43);
    sub_B0D8A4(&VoiceCondEntity_TypeInfo, v44);
    byte_421A2B4 = 1;
  }
  v126 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  memset(&v125, 0, sizeof(v125));
  memset(&v124, 0, sizeof(v124));
  v123 = 0;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v126 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtVoiceId, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  list = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
  v119 = list;
  if ( !this->fields.list )
    goto LABEL_69;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v114 = (BattleServantConfConponent_o *)overwriteCloseMessage;
    v47 = (const MethodInfo_2AB57BC **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v48 = &VoiceCondEntity_TypeInfo;
    v49 = (const MethodInfo_2E9069C **)&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__;
    v50 = Count;
    v51 = 0LL;
    for ( i = 0; i < v50; ++i )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)this->fields.list;
      if ( !list )
        goto LABEL_69;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                                                                     i,
                                                                     *v47);
      if ( !list )
        goto LABEL_69;
      v54 = list;
      v55 = *(&(*v48)->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v55
        || (VoiceCondEntity_c *)list->klass->_2.typeHierarchy[v55 - 1] != *v48 )
      {
        sub_B0DC70(list);
        sub_B0D948(v54, 0LL);
      }
      *(_QWORD *)&v127.fields.fakeValue = list->fields.currentCryptoKey;
      *(_QWORD *)&v128.fields.currentCryptoKey = list->fields.hiddenValue;
      *(_QWORD *)&v127.fields.currentCryptoKey = &v126;
      *(_QWORD *)&v128.fields.fakeValue = 0LL;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_44163612(
                                                                     v127,
                                                                     v128,
                                                                     v53);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v119 )
          goto LABEL_69;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__Equals_44201804(
               v119,
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)&v54->fields.inited,
               0LL) )
        {
          if ( !v51 )
          {
            v51 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo, v56, v57);
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
              v51,
              (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
            if ( !v51 )
              goto LABEL_69;
          }
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v51,
                  (int32_t)v54[1].monitor,
                  *v49) )
          {
            keya = (int32_t)v54[1].monitor;
            v60 = v49;
            v61 = v48;
            v62 = v50;
            v63 = v47;
            v64 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v51;
            v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_VoiceCondEntity__TypeInfo, v58, v59);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v65,
              (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
            v66 = v64;
            v67 = (WarBoardAIRoute_RouteData_o *)v65;
            v51 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v64;
            v47 = v63;
            v50 = v62;
            v48 = v61;
            v49 = v60;
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              v66,
              keya,
              v67,
              (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
          }
          list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                         v51,
                                                                         (int32_t)v54[1].monitor,
                                                                         (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
          if ( !list )
            goto LABEL_69;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_VoiceCondEntity__Add__);
        }
      }
    }
    if ( v51 )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        key = (VoiceClosedMessageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)list,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
        v121 = v51;
        Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                 (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v51,
                 (const MethodInfo_2E90034 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
        v71 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v69,
                                                          v70);
        System_Collections_Generic_List_int____ctor_50000796(
          v71,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
        if ( v71 )
        {
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v122,
            v71,
            (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v72 = 0;
          v73 = 0;
          v125 = *(System_Collections_Generic_List_Enumerator_int__o *)v122;
          while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                    &v125,
                    (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
          {
            Item = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                             v121,
                                                                                             v125.fields.current,
                                                                                             (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
            v77 = VoiceCondMaster___c_TypeInfo;
            if ( (BYTE3(VoiceCondMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !VoiceCondMaster___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(VoiceCondMaster___c_TypeInfo);
              v77 = VoiceCondMaster___c_TypeInfo;
            }
            static_fields = v77->static_fields;
            _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
            if ( !_9__1_0 )
            {
              if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v77);
                static_fields = VoiceCondMaster___c_TypeInfo->static_fields;
              }
              v80 = (Il2CppObject *)static_fields->__9;
              _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                                    System_Comparison_VoiceCondEntity__TypeInfo,
                                                                                    v74,
                                                                                    v75);
              System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
                _9__1_0,
                v80,
                Method_VoiceCondMaster___c__IsEnable_b__1_0__,
                (const MethodInfo_2412E90 *)Method_System_Comparison_VoiceCondEntity___ctor__);
              v81 = VoiceCondMaster___c_TypeInfo->static_fields;
              v81->__9__1_0 = (struct System_Comparison_VoiceCondEntity__o *)_9__1_0;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v81->__9__1_0,
                (System_Int32_array **)_9__1_0,
                v82,
                v83,
                v84,
                v85,
                v86,
                v87);
            }
            if ( !Item )
              sub_B0D97C(v77);
            System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
              Item,
              (System_Comparison_T__o *)_9__1_0,
              (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
            if ( !Item->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v89 = Item->fields._items->m_Items[0];
            if ( !v89 )
              sub_B0D97C(v88);
            event_id = v89[1].fields.event_id;
            v73 |= event_id == 0;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v122,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Item,
              (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
            v91 = 0;
            klass = 0;
            v93 = event_id != 0 || isMainResult;
            v124 = *(System_Collections_Generic_List_Enumerator_T__o *)v122;
LABEL_44:
            v94 = v93;
            while ( 1 )
            {
              v95 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v124,
                      (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
              if ( !v95 )
                break;
              current = v124.fields.current;
              if ( !v124.fields.current )
                sub_B0D97C(v95);
              if ( !VoiceCondEntity__IsEnable((VoiceCondEntity_o *)v124.fields.current, svtId, voicePrefix, v96) )
              {
                if ( SLODWORD(current[4].klass) > klass )
                {
                  klass = (int)current[4].klass;
                  *closedType = HIDWORD(current[4].klass);
                }
                monitor = (int)current[4].monitor;
                v93 = 0;
                if ( monitor > v91 )
                {
                  if ( !key )
                    sub_B0D97C(0LL);
                  ClosedMessage = (System_Int32_array **)VoiceClosedMessageMaster__GetClosedMessage(
                                                           key,
                                                           HIDWORD(current[4].monitor),
                                                           v98);
                  v114->klass = (BattleServantConfConponent_c *)ClosedMessage;
                  sub_B0D840(v114, ClosedMessage, v101, v102, v103, v104, v105, v106);
                  v93 = 0;
                  v91 = monitor;
                }
                goto LABEL_44;
              }
            }
            *(_DWORD *)&v122[4 * v72 + 24] = 410;
            v107 = v123 + 1;
            v123 = v107;
            v72 = v107;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v124,
              (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
            if ( v107 )
            {
              v108 = v107 - 1;
              if ( *(_DWORD *)&v122[4 * v107 + 20] == 410 )
              {
                --v107;
                v72 = v108;
                v123 = v108;
              }
            }
            if ( v94 )
            {
              v109 = 1;
              v110 = 456;
              goto LABEL_62;
            }
          }
          v109 = 0;
          v110 = 447;
          v107 = v72;
LABEL_62:
          *(_DWORD *)&v122[4 * v107 + 24] = v110;
          v111 = ++v123;
          System_Collections_Generic_List_Enumerator_int___Dispose(
            &v125,
            (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          if ( v111 )
          {
            v112 = *(_DWORD *)&v122[4 * v111 + 20];
            if ( v112 == 447 )
            {
              v123 = v111 - 1;
            }
            else if ( v112 == 456 )
            {
              v123 = v111 - 1;
              return v109;
            }
          }
          isMainResult &= v73 ^ 1;
          return isMainResult;
        }
      }
LABEL_69:
      sub_B0D97C(list);
    }
  }
  return isMainResult;
}


void __fastcall VoiceCondMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct VoiceCondMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4212654 & 1) == 0 )
  {
    sub_B0D8A4(&VoiceCondMaster___c_TypeInfo, v1);
    byte_4212654 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(VoiceCondMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = VoiceCondMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct VoiceCondMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}