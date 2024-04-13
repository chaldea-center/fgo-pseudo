void __fastcall VoiceCondMaster___ctor(VoiceCondMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE70A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EE70A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    191,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *list; // x0
  __int64 v108; // x1
  int32_t Count; // w0
  const MethodInfo_2BB8668 **v110; // x24
  VoiceCondEntity_c **v111; // x27
  const MethodInfo_2F32338 **v112; // x23
  int32_t v113; // w26
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v114; // x19
  int32_t i; // w28
  const MethodInfo *v116; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v117; // x20
  __int64 v118; // x9
  const MethodInfo_2F32338 **v119; // x25
  VoiceCondEntity_c **v120; // x23
  int32_t v121; // w27
  const MethodInfo_2BB8668 **v122; // x26
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v123; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v124; // x19
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v125; // x0
  WarBoardAIRoute_RouteData_o *v126; // x2
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x19
  System_Collections_Generic_List_int__o *v128; // x20
  int v129; // w23
  char v130; // w19
  __int64 v131; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *Item; // x26
  VoiceCondMaster___c_c *v133; // x0
  struct VoiceCondMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v136; // x27
  struct VoiceCondMaster___c_StaticFields *v137; // x0
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  __int64 v144; // x0
  __int64 v145; // x1
  TitleInfoControl_EventEndTimeInfo_o *v146; // x8
  int32_t event_id; // w20
  int v148; // w28
  int klass; // w24
  bool v150; // w8
  bool v151; // w26
  _BOOL8 v152; // x0
  __int64 v153; // x1
  const MethodInfo *v154; // x3
  Il2CppObject *current; // x20
  __int64 v156; // x1
  const MethodInfo *v157; // x2
  int monitor; // w27
  System_Int32_array **ClosedMessage; // x0
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  int v166; // w24
  int v167; // w8
  bool v168; // w20
  int v169; // w8
  int v170; // w21
  int v171; // w9
  BattleServantConfConponent_o *v173; // [xsp+8h] [xbp-F8h]
  int32_t keya; // [xsp+18h] [xbp-E8h]
  VoiceClosedMessageMaster_o *key; // [xsp+18h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v178; // [xsp+28h] [xbp-D8h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v180; // [xsp+30h] [xbp-D0h]
  _BYTE v181[36]; // [xsp+38h] [xbp-C8h] BYREF
  int v182; // [xsp+5Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v183; // [xsp+60h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v184; // [xsp+80h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v185; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v187; // 0:x2.16

  if ( (byte_42EE70B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)closedType,
      svtVoiceId,
      voiceId);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Comparison_VoiceCondEntity___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Comparison_VoiceCondEntity__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoiceClosedMessageMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__get_Current__, v56, v57, v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VoiceCondEntity__Add__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__, v68, v69, v70);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VoiceCondEntity__Sort__, v71, v72, v73);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v74, v75, v76);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VoiceCondEntity___ctor__, v77, v78, v79);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__, v80, v81, v82);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v83, v84, v85);
    sub_B5D5C4(&System_Collections_Generic_List_VoiceCondEntity__TypeInfo, v86, v87, v88);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v89, v90, v91);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v92, v93, v94);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v95, v96, v97);
    sub_B5D5C4(&Method_VoiceCondMaster___c__IsEnable_b__1_0__, v98, v99, v100);
    sub_B5D5C4(&VoiceCondMaster___c_TypeInfo, v101, v102, v103);
    sub_B5D5C4(&VoiceCondEntity_TypeInfo, v104, v105, v106);
    byte_42EE70B = 1;
  }
  v185 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  memset(&v184, 0, sizeof(v184));
  memset(&v183, 0, sizeof(v183));
  v182 = 0;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v185 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtVoiceId, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  list = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
  v178 = list;
  if ( !this->fields.list )
    goto LABEL_69;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v173 = (BattleServantConfConponent_o *)overwriteCloseMessage;
    v110 = (const MethodInfo_2BB8668 **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v111 = &VoiceCondEntity_TypeInfo;
    v112 = (const MethodInfo_2F32338 **)&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__;
    v113 = Count;
    v114 = 0LL;
    for ( i = 0; i < v113; ++i )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)this->fields.list;
      if ( !list )
        goto LABEL_69;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                                                                     i,
                                                                     *v110);
      if ( !list )
        goto LABEL_69;
      v117 = list;
      v118 = *(&(*v111)->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v118
        || (VoiceCondEntity_c *)list->klass->_2.typeHierarchy[v118 - 1] != *v111 )
      {
        sub_B5D990(list);
        sub_B5D668(v117, 0LL);
      }
      *(_QWORD *)&v186.fields.fakeValue = list->fields.currentCryptoKey;
      *(_QWORD *)&v187.fields.currentCryptoKey = list->fields.hiddenValue;
      *(_QWORD *)&v186.fields.currentCryptoKey = &v185;
      *(_QWORD *)&v187.fields.fakeValue = 0LL;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_44900324(
                                                                     v186,
                                                                     v187,
                                                                     v116);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v178 )
          goto LABEL_69;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__Equals_44938516(
               v178,
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)&v117->fields.inited,
               0LL) )
        {
          if ( !v114 )
          {
            v114 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo);
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
              v114,
              (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
            if ( !v114 )
              goto LABEL_69;
          }
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v114,
                  (int32_t)v117[1].monitor,
                  *v112) )
          {
            keya = (int32_t)v117[1].monitor;
            v119 = v112;
            v120 = v111;
            v121 = v113;
            v122 = v110;
            v123 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v114;
            v124 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_VoiceCondEntity__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v124,
              (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
            v125 = v123;
            v126 = (WarBoardAIRoute_RouteData_o *)v124;
            v114 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v123;
            v110 = v122;
            v113 = v121;
            v111 = v120;
            v112 = v119;
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              v125,
              keya,
              v126,
              (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
          }
          list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                         v114,
                                                                         (int32_t)v117[1].monitor,
                                                                         (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
          if ( !list )
            goto LABEL_69;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v117,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_VoiceCondEntity__Add__);
        }
      }
    }
    if ( v114 )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        key = (VoiceClosedMessageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)list,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
        v180 = v114;
        Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                 (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v114,
                 (const MethodInfo_2F31CD0 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
        v128 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor_50870440(
          v128,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( v128 )
        {
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v181,
            v128,
            (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v129 = 0;
          v130 = 0;
          v184 = *(System_Collections_Generic_List_Enumerator_int__o *)v181;
          while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                    &v184,
                    (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
          {
            Item = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                             v180,
                                                                                             v184.fields.current,
                                                                                             (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
            v133 = VoiceCondMaster___c_TypeInfo;
            if ( (BYTE3(VoiceCondMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !VoiceCondMaster___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(VoiceCondMaster___c_TypeInfo);
              v133 = VoiceCondMaster___c_TypeInfo;
            }
            static_fields = v133->static_fields;
            _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
            if ( !_9__1_0 )
            {
              if ( (BYTE3(v133->vtable._0_Equals.methodPtr) & 4) != 0 && !v133->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v133);
                static_fields = VoiceCondMaster___c_TypeInfo->static_fields;
              }
              v136 = (Il2CppObject *)static_fields->__9;
              _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_VoiceCondEntity__TypeInfo);
              System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
                _9__1_0,
                v136,
                Method_VoiceCondMaster___c__IsEnable_b__1_0__,
                (const MethodInfo_249B1FC *)Method_System_Comparison_VoiceCondEntity___ctor__);
              v137 = VoiceCondMaster___c_TypeInfo->static_fields;
              v137->__9__1_0 = (struct System_Comparison_VoiceCondEntity__o *)_9__1_0;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v137->__9__1_0,
                (System_Int32_array **)_9__1_0,
                v138,
                v139,
                v140,
                v141,
                v142,
                v143);
            }
            if ( !Item )
              sub_B5D69C(v133, v131);
            System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
              Item,
              (System_Comparison_T__o *)_9__1_0,
              (const MethodInfo_305909C *)Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
            if ( !Item->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v146 = Item->fields._items->m_Items[0];
            if ( !v146 )
              sub_B5D69C(v144, v145);
            event_id = v146[1].fields.event_id;
            v130 |= event_id == 0;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v181,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Item,
              (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
            v148 = 0;
            klass = 0;
            v150 = event_id != 0 || isMainResult;
            v183 = *(System_Collections_Generic_List_Enumerator_T__o *)v181;
LABEL_44:
            v151 = v150;
            while ( 1 )
            {
              v152 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v183,
                       (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
              if ( !v152 )
                break;
              current = v183.fields.current;
              if ( !v183.fields.current )
                sub_B5D69C(v152, v153);
              if ( !VoiceCondEntity__IsEnable((VoiceCondEntity_o *)v183.fields.current, svtId, voicePrefix, v154) )
              {
                if ( SLODWORD(current[4].klass) > klass )
                {
                  klass = (int)current[4].klass;
                  *closedType = HIDWORD(current[4].klass);
                }
                monitor = (int)current[4].monitor;
                v150 = 0;
                if ( monitor > v148 )
                {
                  if ( !key )
                    sub_B5D69C(0LL, v156);
                  ClosedMessage = (System_Int32_array **)VoiceClosedMessageMaster__GetClosedMessage(
                                                           key,
                                                           HIDWORD(current[4].monitor),
                                                           v157);
                  v173->klass = (BattleServantConfConponent_c *)ClosedMessage;
                  sub_B5D560(v173, ClosedMessage, v160, v161, v162, v163, v164, v165);
                  v150 = 0;
                  v148 = monitor;
                }
                goto LABEL_44;
              }
            }
            *(_DWORD *)&v181[4 * v129 + 24] = 410;
            v166 = v182 + 1;
            v182 = v166;
            v129 = v166;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v183,
              (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
            if ( v166 )
            {
              v167 = v166 - 1;
              if ( *(_DWORD *)&v181[4 * v166 + 20] == 410 )
              {
                --v166;
                v129 = v167;
                v182 = v167;
              }
            }
            if ( v151 )
            {
              v168 = 1;
              v169 = 456;
              goto LABEL_62;
            }
          }
          v168 = 0;
          v169 = 447;
          v166 = v129;
LABEL_62:
          *(_DWORD *)&v181[4 * v166 + 24] = v169;
          v170 = ++v182;
          System_Collections_Generic_List_Enumerator_int___Dispose(
            &v184,
            (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          if ( v170 )
          {
            v171 = *(_DWORD *)&v181[4 * v170 + 20];
            if ( v171 == 447 )
            {
              v182 = v170 - 1;
            }
            else if ( v171 == 456 )
            {
              v182 = v170 - 1;
              return v168;
            }
          }
          isMainResult &= v130 ^ 1;
          return isMainResult;
        }
      }
LABEL_69:
      sub_B5D69C(list, v108);
    }
  }
  return isMainResult;
}


void __fastcall VoiceCondMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7030 & 1) == 0 )
  {
    sub_B5D5C4(&VoiceCondMaster___c_TypeInfo, v1, v2, v3);
    byte_42E7030 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(VoiceCondMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)VoiceCondMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}