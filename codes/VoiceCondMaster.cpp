void __fastcall VoiceCondMaster___ctor(VoiceCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418D2CF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__, method);
    byte_418D2CF = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    190,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
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
  __int64 v46; // x1
  int32_t Count; // w0
  const MethodInfo_2A0E38C **v48; // x24
  VoiceCondEntity_c **v49; // x27
  const MethodInfo_2E649C0 **v50; // x23
  int32_t v51; // w26
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v52; // x19
  int32_t i; // w28
  const MethodInfo *v54; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v55; // x20
  __int64 v56; // x9
  const MethodInfo_2E649C0 **v57; // x25
  VoiceCondEntity_c **v58; // x23
  int32_t v59; // w27
  const MethodInfo_2A0E38C **v60; // x26
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v61; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x19
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v63; // x0
  WarBoardAIRoute_RouteData_o *v64; // x2
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x19
  System_Collections_Generic_List_int__o *v66; // x20
  int v67; // w23
  char v68; // w19
  __int64 v69; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *Item; // x26
  VoiceCondMaster___c_c *v71; // x0
  struct VoiceCondMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v74; // x27
  struct VoiceCondMaster___c_StaticFields *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  __int64 v82; // x0
  __int64 v83; // x1
  TitleInfoControl_EventEndTimeInfo_o *v84; // x8
  int32_t event_id; // w20
  int v86; // w28
  int klass; // w24
  bool v88; // w8
  bool v89; // w26
  _BOOL8 v90; // x0
  __int64 v91; // x1
  const MethodInfo *v92; // x3
  Il2CppObject *current; // x20
  __int64 v94; // x1
  const MethodInfo *v95; // x2
  int monitor; // w27
  System_Int32_array **ClosedMessage; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  int v104; // w24
  int v105; // w8
  bool v106; // w20
  int v107; // w8
  int v108; // w21
  int v109; // w9
  BattleServantConfConponent_o *v111; // [xsp+8h] [xbp-F8h]
  int32_t keya; // [xsp+18h] [xbp-E8h]
  VoiceClosedMessageMaster_o *key; // [xsp+18h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v116; // [xsp+28h] [xbp-D8h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v118; // [xsp+30h] [xbp-D0h]
  _BYTE v119[36]; // [xsp+38h] [xbp-C8h] BYREF
  int v120; // [xsp+5Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v121; // [xsp+60h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v122; // [xsp+80h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x2.16

  if ( (byte_418D2D0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, closedType);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v14);
    sub_B2C35C(&Method_System_Comparison_VoiceCondEntity___ctor__, v15);
    sub_B2C35C(&System_Comparison_VoiceCondEntity__TypeInfo, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_VoiceClosedMessageMaster___, v17);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__, v22);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__get_Current__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_VoiceCondEntity__Add__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v31);
    sub_B2C35C(&Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__, v32);
    sub_B2C35C(&Method_System_Collections_Generic_List_VoiceCondEntity__Sort__, v33);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v34);
    sub_B2C35C(&Method_System_Collections_Generic_List_VoiceCondEntity___ctor__, v35);
    sub_B2C35C(&Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__, v36);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v37);
    sub_B2C35C(&System_Collections_Generic_List_VoiceCondEntity__TypeInfo, v38);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v40);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41);
    sub_B2C35C(&Method_VoiceCondMaster___c__IsEnable_b__1_0__, v42);
    sub_B2C35C(&VoiceCondMaster___c_TypeInfo, v43);
    sub_B2C35C(&VoiceCondEntity_TypeInfo, v44);
    byte_418D2D0 = 1;
  }
  v123 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  memset(&v122, 0, sizeof(v122));
  memset(&v121, 0, sizeof(v121));
  v120 = 0;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtVoiceId, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  list = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
  v116 = list;
  if ( !this->fields.list )
    goto LABEL_69;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v111 = (BattleServantConfConponent_o *)overwriteCloseMessage;
    v48 = (const MethodInfo_2A0E38C **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v49 = &VoiceCondEntity_TypeInfo;
    v50 = (const MethodInfo_2E649C0 **)&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__;
    v51 = Count;
    v52 = 0LL;
    for ( i = 0; i < v51; ++i )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)this->fields.list;
      if ( !list )
        goto LABEL_69;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                                                                     i,
                                                                     *v48);
      if ( !list )
        goto LABEL_69;
      v55 = list;
      v56 = *(&(*v49)->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v56
        || (VoiceCondEntity_c *)list->klass->_2.typeHierarchy[v56 - 1] != *v49 )
      {
        sub_B2C728(list);
        sub_B2C400(v55, 0LL);
      }
      *(_QWORD *)&v124.fields.fakeValue = list->fields.currentCryptoKey;
      *(_QWORD *)&v125.fields.currentCryptoKey = list->fields.hiddenValue;
      *(_QWORD *)&v124.fields.currentCryptoKey = &v123;
      *(_QWORD *)&v125.fields.fakeValue = 0LL;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_44759100(
                                                                     v124,
                                                                     v125,
                                                                     v54);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v116 )
          goto LABEL_69;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__Equals_44797292(
               v116,
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)&v55->fields.inited,
               0LL) )
        {
          if ( !v52 )
          {
            v52 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo);
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
              v52,
              (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
            if ( !v52 )
              goto LABEL_69;
          }
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v52,
                  (int32_t)v55[1].monitor,
                  *v50) )
          {
            keya = (int32_t)v55[1].monitor;
            v57 = v50;
            v58 = v49;
            v59 = v51;
            v60 = v48;
            v61 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v52;
            v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_VoiceCondEntity__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v62,
              (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
            v63 = v61;
            v64 = (WarBoardAIRoute_RouteData_o *)v62;
            v52 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v61;
            v48 = v60;
            v51 = v59;
            v49 = v58;
            v50 = v57;
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              v63,
              keya,
              v64,
              (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
          }
          list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                         v52,
                                                                         (int32_t)v55[1].monitor,
                                                                         (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
          if ( !list )
            goto LABEL_69;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_VoiceCondEntity__Add__);
        }
      }
    }
    if ( v52 )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        key = (VoiceClosedMessageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)list,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
        v118 = v52;
        Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                 (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v52,
                 (const MethodInfo_2E64358 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
        v66 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor_49702036(
          v66,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
        if ( v66 )
        {
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v119,
            v66,
            (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v67 = 0;
          v68 = 0;
          v122 = *(System_Collections_Generic_List_Enumerator_int__o *)v119;
          while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                    &v122,
                    (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
          {
            Item = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                             v118,
                                                                                             v122.fields.current,
                                                                                             (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
            v71 = VoiceCondMaster___c_TypeInfo;
            if ( (BYTE3(VoiceCondMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !VoiceCondMaster___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(VoiceCondMaster___c_TypeInfo);
              v71 = VoiceCondMaster___c_TypeInfo;
            }
            static_fields = v71->static_fields;
            _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
            if ( !_9__1_0 )
            {
              if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 && !v71->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v71);
                static_fields = VoiceCondMaster___c_TypeInfo->static_fields;
              }
              v74 = (Il2CppObject *)static_fields->__9;
              _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_VoiceCondEntity__TypeInfo);
              System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
                _9__1_0,
                v74,
                Method_VoiceCondMaster___c__IsEnable_b__1_0__,
                (const MethodInfo_25D8DF8 *)Method_System_Comparison_VoiceCondEntity___ctor__);
              v75 = VoiceCondMaster___c_TypeInfo->static_fields;
              v75->__9__1_0 = (struct System_Comparison_VoiceCondEntity__o *)_9__1_0;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v75->__9__1_0,
                (System_Int32_array **)_9__1_0,
                v76,
                v77,
                v78,
                v79,
                v80,
                v81);
            }
            if ( !Item )
              sub_B2C434(v71, v69);
            System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
              Item,
              (System_Comparison_T__o *)_9__1_0,
              (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
            if ( !Item->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v84 = Item->fields._items->m_Items[0];
            if ( !v84 )
              sub_B2C434(v82, v83);
            event_id = v84[1].fields.event_id;
            v68 |= event_id == 0;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v119,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Item,
              (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
            v86 = 0;
            klass = 0;
            v88 = event_id != 0 || isMainResult;
            v121 = *(System_Collections_Generic_List_Enumerator_T__o *)v119;
LABEL_44:
            v89 = v88;
            while ( 1 )
            {
              v90 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v121,
                      (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
              if ( !v90 )
                break;
              current = v121.fields.current;
              if ( !v121.fields.current )
                sub_B2C434(v90, v91);
              if ( !VoiceCondEntity__IsEnable((VoiceCondEntity_o *)v121.fields.current, svtId, voicePrefix, v92) )
              {
                if ( SLODWORD(current[4].klass) > klass )
                {
                  klass = (int)current[4].klass;
                  *closedType = HIDWORD(current[4].klass);
                }
                monitor = (int)current[4].monitor;
                v88 = 0;
                if ( monitor > v86 )
                {
                  if ( !key )
                    sub_B2C434(0LL, v94);
                  ClosedMessage = (System_Int32_array **)VoiceClosedMessageMaster__GetClosedMessage(
                                                           key,
                                                           HIDWORD(current[4].monitor),
                                                           v95);
                  v111->klass = (BattleServantConfConponent_c *)ClosedMessage;
                  sub_B2C2F8(v111, ClosedMessage, v98, v99, v100, v101, v102, v103);
                  v88 = 0;
                  v86 = monitor;
                }
                goto LABEL_44;
              }
            }
            *(_DWORD *)&v119[4 * v67 + 24] = 410;
            v104 = v120 + 1;
            v120 = v104;
            v67 = v104;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v121,
              (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
            if ( v104 )
            {
              v105 = v104 - 1;
              if ( *(_DWORD *)&v119[4 * v104 + 20] == 410 )
              {
                --v104;
                v67 = v105;
                v120 = v105;
              }
            }
            if ( v89 )
            {
              v106 = 1;
              v107 = 456;
              goto LABEL_62;
            }
          }
          v106 = 0;
          v107 = 447;
          v104 = v67;
LABEL_62:
          *(_DWORD *)&v119[4 * v104 + 24] = v107;
          v108 = ++v120;
          System_Collections_Generic_List_Enumerator_int___Dispose(
            &v122,
            (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          if ( v108 )
          {
            v109 = *(_DWORD *)&v119[4 * v108 + 20];
            if ( v109 == 447 )
            {
              v120 = v108 - 1;
            }
            else if ( v109 == 456 )
            {
              v120 = v108 - 1;
              return v106;
            }
          }
          isMainResult &= v68 ^ 1;
          return isMainResult;
        }
      }
LABEL_69:
      sub_B2C434(list, v46);
    }
  }
  return isMainResult;
}


void __fastcall VoiceCondMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct VoiceCondMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41856DD & 1) == 0 )
  {
    sub_B2C35C(&VoiceCondMaster___c_TypeInfo, v1);
    byte_41856DD = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(VoiceCondMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = VoiceCondMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct VoiceCondMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}