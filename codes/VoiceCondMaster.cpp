void __fastcall VoiceCondMaster___ctor(VoiceCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4357C1E & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
    byte_4357C1E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    191,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *list; // x0
  __int64 v15; // x1
  int32_t Count; // w0
  const MethodInfo_2C86014 **v17; // x24
  VoiceCondEntity_c **v18; // x27
  const MethodInfo_2FC67DC **v19; // x23
  int32_t v20; // w26
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v21; // x19
  int32_t i; // w28
  const MethodInfo *v23; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v24; // x20
  __int64 v25; // x9
  const MethodInfo_2FC67DC **v26; // x25
  VoiceCondEntity_c **v27; // x23
  int32_t v28; // w27
  const MethodInfo_2C86014 **v29; // x26
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v30; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x19
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v32; // x0
  WarBoardAIRoute_RouteData_o *v33; // x2
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x19
  System_Collections_Generic_List_int__o *v35; // x20
  int v36; // w23
  char v37; // w19
  __int64 v38; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *Item; // x26
  VoiceCondMaster___c_c *v40; // x0
  struct VoiceCondMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v43; // x27
  struct VoiceCondMaster___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x0
  __int64 v52; // x1
  TitleInfoControl_EventEndTimeInfo_o *v53; // x8
  int32_t event_id; // w20
  int v55; // w28
  int klass; // w24
  bool v57; // w8
  bool v58; // w26
  _BOOL8 v59; // x0
  __int64 v60; // x1
  const MethodInfo *v61; // x3
  Il2CppObject *current; // x20
  __int64 v63; // x1
  const MethodInfo *v64; // x2
  int monitor; // w27
  System_Int32_array **ClosedMessage; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  int v73; // w24
  int v74; // w8
  bool v75; // w20
  int v76; // w8
  int v77; // w21
  int v78; // w9
  BattleServantConfConponent_o *v80; // [xsp+8h] [xbp-F8h]
  int32_t keya; // [xsp+18h] [xbp-E8h]
  VoiceClosedMessageMaster_o *key; // [xsp+18h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v85; // [xsp+28h] [xbp-D8h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v87; // [xsp+30h] [xbp-D0h]
  _BYTE v88[36]; // [xsp+38h] [xbp-C8h] BYREF
  int v89; // [xsp+5Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v90; // [xsp+60h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v91; // [xsp+80h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x2.16

  if ( (byte_4357C1F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_System_Comparison_VoiceCondEntity___ctor__);
    sub_B70694(&System_Comparison_VoiceCondEntity__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_VoiceCondEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor___69164920);
    sub_B70694(&Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_VoiceCondEntity__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_VoiceCondMaster___c__IsEnable_b__1_0__);
    sub_B70694(&VoiceCondMaster___c_TypeInfo);
    sub_B70694(&VoiceCondEntity_TypeInfo);
    byte_4357C1F = 1;
  }
  v92 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  memset(&v91, 0, sizeof(v91));
  memset(&v90, 0, sizeof(v90));
  v89 = 0;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v92 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtVoiceId, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  list = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
  v85 = list;
  if ( !this->fields.list )
    goto LABEL_69;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v80 = (BattleServantConfConponent_o *)overwriteCloseMessage;
    v17 = (const MethodInfo_2C86014 **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v18 = &VoiceCondEntity_TypeInfo;
    v19 = (const MethodInfo_2FC67DC **)&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__;
    v20 = Count;
    v21 = 0LL;
    for ( i = 0; i < v20; ++i )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)this->fields.list;
      if ( !list )
        goto LABEL_69;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                                                                     i,
                                                                     *v17);
      if ( !list )
        goto LABEL_69;
      v24 = list;
      v25 = *(&(*v18)->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v25
        || (VoiceCondEntity_c *)list->klass->_2.typeHierarchy[v25 - 1] != *v18 )
      {
        sub_B70A60(list);
        sub_B70738(v24, 0LL);
      }
      *(_QWORD *)&v93.fields.fakeValue = list->fields.currentCryptoKey;
      *(_QWORD *)&v94.fields.currentCryptoKey = list->fields.hiddenValue;
      *(_QWORD *)&v93.fields.currentCryptoKey = &v92;
      *(_QWORD *)&v94.fields.fakeValue = 0LL;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_45181020(
                                                                     v93,
                                                                     v94,
                                                                     v23);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v85 )
          goto LABEL_69;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__Equals_45219212(
               v85,
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)&v24->fields.inited,
               0LL) )
        {
          if ( !v21 )
          {
            v21 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo);
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
              v21,
              (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
            if ( !v21 )
              goto LABEL_69;
          }
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v21,
                  (int32_t)v24[1].monitor,
                  *v19) )
          {
            keya = (int32_t)v24[1].monitor;
            v26 = v19;
            v27 = v18;
            v28 = v20;
            v29 = v17;
            v30 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v21;
            v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_VoiceCondEntity__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v31,
              (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
            v32 = v30;
            v33 = (WarBoardAIRoute_RouteData_o *)v31;
            v21 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v30;
            v17 = v29;
            v20 = v28;
            v18 = v27;
            v19 = v26;
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              v32,
              keya,
              v33,
              (const MethodInfo_2FC6540 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
          }
          list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                         v21,
                                                                         (int32_t)v24[1].monitor,
                                                                         (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
          if ( !list )
            goto LABEL_69;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_VoiceCondEntity__Add__);
        }
      }
    }
    if ( v21 )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        key = (VoiceClosedMessageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)list,
                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
        v87 = v21;
        Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                 (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v21,
                 (const MethodInfo_2FC6174 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
        v35 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor_51074676(
          v35,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_30B5674 *)Method_System_Collections_Generic_List_int___ctor___69164920);
        if ( v35 )
        {
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v88,
            v35,
            (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v36 = 0;
          v37 = 0;
          v91 = *(System_Collections_Generic_List_Enumerator_int__o *)v88;
          while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                    &v91,
                    (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
          {
            Item = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                             v87,
                                                                                             v91.fields.current,
                                                                                             (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
            v40 = VoiceCondMaster___c_TypeInfo;
            if ( (BYTE3(VoiceCondMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !VoiceCondMaster___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(VoiceCondMaster___c_TypeInfo);
              v40 = VoiceCondMaster___c_TypeInfo;
            }
            static_fields = v40->static_fields;
            _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
            if ( !_9__1_0 )
            {
              if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v40);
                static_fields = VoiceCondMaster___c_TypeInfo->static_fields;
              }
              v43 = (Il2CppObject *)static_fields->__9;
              _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_VoiceCondEntity__TypeInfo);
              System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
                _9__1_0,
                v43,
                Method_VoiceCondMaster___c__IsEnable_b__1_0__,
                (const MethodInfo_2B05B38 *)Method_System_Comparison_VoiceCondEntity___ctor__);
              v44 = VoiceCondMaster___c_TypeInfo->static_fields;
              v44->__9__1_0 = (struct System_Comparison_VoiceCondEntity__o *)_9__1_0;
              sub_B70630(
                (BattleServantConfConponent_o *)&v44->__9__1_0,
                (System_Int32_array **)_9__1_0,
                v45,
                v46,
                v47,
                v48,
                v49,
                v50);
            }
            if ( !Item )
              sub_B7076C(v40, v38);
            System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
              Item,
              (System_Comparison_T__o *)_9__1_0,
              (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
            if ( !Item->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            v53 = Item->fields._items->m_Items[0];
            if ( !v53 )
              sub_B7076C(v51, v52);
            event_id = v53[1].fields.event_id;
            v37 |= event_id == 0;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v88,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Item,
              (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
            v55 = 0;
            klass = 0;
            v57 = event_id != 0 || isMainResult;
            v90 = *(System_Collections_Generic_List_Enumerator_T__o *)v88;
LABEL_44:
            v58 = v57;
            while ( 1 )
            {
              v59 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v90,
                      (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
              if ( !v59 )
                break;
              current = v90.fields.current;
              if ( !v90.fields.current )
                sub_B7076C(v59, v60);
              if ( !VoiceCondEntity__IsEnable((VoiceCondEntity_o *)v90.fields.current, svtId, voicePrefix, v61) )
              {
                if ( SLODWORD(current[4].klass) > klass )
                {
                  klass = (int)current[4].klass;
                  *closedType = HIDWORD(current[4].klass);
                }
                monitor = (int)current[4].monitor;
                v57 = 0;
                if ( monitor > v55 )
                {
                  if ( !key )
                    sub_B7076C(0LL, v63);
                  ClosedMessage = (System_Int32_array **)VoiceClosedMessageMaster__GetClosedMessage(
                                                           key,
                                                           HIDWORD(current[4].monitor),
                                                           v64);
                  v80->klass = (BattleServantConfConponent_c *)ClosedMessage;
                  sub_B70630(v80, ClosedMessage, v67, v68, v69, v70, v71, v72);
                  v57 = 0;
                  v55 = monitor;
                }
                goto LABEL_44;
              }
            }
            *(_DWORD *)&v88[4 * v36 + 24] = 410;
            v73 = v89 + 1;
            v89 = v73;
            v36 = v73;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v90,
              (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
            if ( v73 )
            {
              v74 = v73 - 1;
              if ( *(_DWORD *)&v88[4 * v73 + 20] == 410 )
              {
                --v73;
                v36 = v74;
                v89 = v74;
              }
            }
            if ( v58 )
            {
              v75 = 1;
              v76 = 456;
              goto LABEL_62;
            }
          }
          v75 = 0;
          v76 = 447;
          v73 = v36;
LABEL_62:
          *(_DWORD *)&v88[4 * v73 + 24] = v76;
          v77 = ++v89;
          System_Collections_Generic_List_Enumerator_int___Dispose(
            &v91,
            (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          if ( v77 )
          {
            v78 = *(_DWORD *)&v88[4 * v77 + 20];
            if ( v78 == 447 )
            {
              v89 = v77 - 1;
            }
            else if ( v78 == 456 )
            {
              v89 = v77 - 1;
              return v75;
            }
          }
          isMainResult &= v37 ^ 1;
          return isMainResult;
        }
      }
LABEL_69:
      sub_B7076C(list, v15);
    }
  }
  return isMainResult;
}


void __fastcall VoiceCondMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct VoiceCondMaster___c_StaticFields *static_fields; // x0

  if ( (byte_434F33E & 1) == 0 )
  {
    sub_B70694(&VoiceCondMaster___c_TypeInfo);
    byte_434F33E = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(VoiceCondMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = VoiceCondMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct VoiceCondMaster___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, a);
  return b->fields.priority - a->fields.priority;
}