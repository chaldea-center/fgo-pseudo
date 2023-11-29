void __fastcall ServantVoiceRelationMaster___ctor(ServantVoiceRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FCB1D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__, method);
    byte_40FCB1D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    175,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceRelationEntity_o *__fastcall ServantVoiceRelationMaster__GetEntity(
        ServantVoiceRelationMaster_o *this,
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FCB1B & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_40FCB1B = 1;
  }
  PK = ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&relationSvtId);
  return (ServantVoiceRelationEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_266F7D8 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
}


void __fastcall ServantVoiceRelationMaster__GetRelationList(
        ServantVoiceRelationMaster_o *this,
        ServantVoiceRelationEntity_array **relationList,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w23
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int32_t v29; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v30; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x25
  __int64 v33; // x10
  void *monitor; // x26
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x27
  ServantVoiceRelationMaster___c_c *v36; // x0
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x21
  Il2CppObject *v39; // x22
  struct ServantVoiceRelationMaster___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  ServantVoiceRelationEntity_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_40FCB1E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, relationList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_System_Comparison_ServantVoiceRelationEntity___ctor__, v7);
    sub_B16FFC(&System_Comparison_ServantVoiceRelationEntity__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&ServantVoiceRelationEntity_TypeInfo, v15);
    sub_B16FFC(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__, v16);
    sub_B16FFC(&ServantVoiceRelationMaster___c_TypeInfo, v17);
    byte_40FCB1E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      v30 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v30 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v30,
               v29,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v33 = *(&ServantVoiceRelationEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v33
          && (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[v33 - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          klass = Item[1].klass;
          monitor = Item[1].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v55.fields.currentCryptoKey = klass;
          *(_QWORD *)&v55.fields.fakeValue = monitor;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v55, 0LL) == svtId )
          {
            if ( !v24 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v24,
              v32,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
          }
        }
      }
      if ( ++v29 >= Count )
        goto LABEL_17;
    }
LABEL_27:
    sub_B170D4();
  }
LABEL_17:
  v36 = ServantVoiceRelationMaster___c_TypeInfo;
  if ( (BYTE3(ServantVoiceRelationMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    v36 = ServantVoiceRelationMaster___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_ServantVoiceRelationEntity__TypeInfo,
                                                                          v25,
                                                                          v26,
                                                                          v27,
                                                                          v28);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v39,
      Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantVoiceRelationEntity___ctor__);
    v40 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v40->__9__3_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v40->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  if ( !v24 )
    goto LABEL_27;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v24,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v47 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *relationList = v47;
  sub_B16F98((BattleServantConfConponent_o *)relationList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
}


void __fastcall ServantVoiceRelationMaster__GetRelationList_30012460(
        ServantVoiceRelationMaster_o *this,
        ServantVoiceRelationEntity_array **beforeRelationList,
        ServantVoiceRelationEntity_array **sameRelationList,
        ServantVoiceRelationEntity_array **afterRelationList,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w27
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x25
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x24
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int32_t v40; // w28
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v41; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v43; // x19
  __int64 v44; // x10
  void *monitor; // x20
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x21
  int v47; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x0
  ServantVoiceRelationMaster___c_c *v49; // x0
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x19
  Il2CppObject *v52; // x20
  struct ServantVoiceRelationMaster___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  ServantVoiceRelationEntity_array *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  ServantVoiceRelationEntity_array *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  ServantVoiceRelationMaster___c_c *v78; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v79; // x22
  struct ServantVoiceRelationMaster___c_StaticFields *v80; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_1; // x19
  Il2CppObject *v82; // x20
  struct ServantVoiceRelationMaster___c_StaticFields *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  ServantVoiceRelationEntity_array *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v100; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16

  if ( (byte_40FCB1F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, beforeRelationList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_ServantVoiceRelationEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_ServantVoiceRelationEntity__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&ServantVoiceRelationEntity_TypeInfo, v16);
    sub_B16FFC(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__, v17);
    sub_B16FFC(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__, v18);
    sub_B16FFC(&ServantVoiceRelationMaster___c_TypeInfo, v19);
    byte_40FCB1F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v100 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                                   System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo,
                                                                                   v32,
                                                                                   v33,
                                                                                   v34,
                                                                                   v35);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v100,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v40 = 0;
    while ( 1 )
    {
      v41 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v41 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v41,
               v40,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v43 = Item;
        v44 = *(&ServantVoiceRelationEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v44
          && (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[v44 - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          klass = Item[1].klass;
          monitor = Item[1].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v102.fields.currentCryptoKey = klass;
          *(_QWORD *)&v102.fields.fakeValue = monitor;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v102, 0LL) == svtId )
          {
            v47 = (int)v43[3].klass;
            if ( (v47 & 0x80000000) != 0 )
            {
              if ( !v26 )
                break;
              v48 = v26;
            }
            else if ( v47 )
            {
              v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v100;
              if ( !v100 )
                break;
            }
            else
            {
              if ( !v31 )
                break;
              v48 = v31;
            }
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v48,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
          }
        }
      }
      if ( ++v40 >= Count )
        goto LABEL_24;
    }
LABEL_45:
    sub_B170D4();
  }
LABEL_24:
  v49 = ServantVoiceRelationMaster___c_TypeInfo;
  if ( (BYTE3(ServantVoiceRelationMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    v49 = ServantVoiceRelationMaster___c_TypeInfo;
  }
  static_fields = v49->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_ServantVoiceRelationEntity__TypeInfo,
                                                                          v36,
                                                                          v37,
                                                                          v38,
                                                                          v39);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v52,
      Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantVoiceRelationEntity___ctor__);
    v53 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v53->__9__4_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v53->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  if ( !v26 )
    goto LABEL_45;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v26,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v60 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *beforeRelationList = v60;
  sub_B16F98(
    (BattleServantConfConponent_o *)beforeRelationList,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( !v31 )
    goto LABEL_45;
  v67 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v31,
                                              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *sameRelationList = v67;
  sub_B16F98((BattleServantConfConponent_o *)sameRelationList, (System_Int32_array **)v67, v68, v69, v70, v71, v72, v73);
  v78 = ServantVoiceRelationMaster___c_TypeInfo;
  if ( (BYTE3(ServantVoiceRelationMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v79 = v100;
    if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
      v78 = ServantVoiceRelationMaster___c_TypeInfo;
    }
  }
  else
  {
    v79 = v100;
  }
  v80 = v78->static_fields;
  _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v80->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( (BYTE3(v78->vtable._0_Equals.methodPtr) & 4) != 0 && !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78);
      v80 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    }
    v82 = (Il2CppObject *)v80->__9;
    _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_ServantVoiceRelationEntity__TypeInfo,
                                                                          v74,
                                                                          v75,
                                                                          v76,
                                                                          v77);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_1,
      v82,
      Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantVoiceRelationEntity___ctor__);
    v83 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v83->__9__4_1 = (struct System_Comparison_ServantVoiceRelationEntity__o *)_9__4_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v83->__9__4_1,
      (System_Int32_array **)_9__4_1,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
  }
  if ( !v79 )
    goto LABEL_45;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v79,
    (System_Comparison_T__o *)_9__4_1,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v90 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v79,
                                              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *afterRelationList = v90;
  sub_B16F98(
    (BattleServantConfConponent_o *)afterRelationList,
    (System_Int32_array **)v90,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
}


void __fastcall ServantVoiceRelationMaster__MargeServantVoiceId(
        ServantVoiceRelationMaster_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *isVoiceList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v12; // w21
  int32_t v13; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v16; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v17; // x9
  void *monitor; // x23
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x24
  int v20; // w0
  int32_t v21; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_40FCB20 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isVoiceList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&ServantVoiceRelationEntity_TypeInfo, v9);
    byte_40FCB20 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      v14 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v14 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v14,
               v13,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v16 = *(&ServantVoiceRelationEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] != ServantVoiceRelationEntity_TypeInfo )
      {
        break;
      }
      if ( (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[*(&ServantVoiceRelationEntity_TypeInfo->_2.bitflags2
                                                                         + 1)
                                                                       - 1] == ServantVoiceRelationEntity_TypeInfo )
        v17 = Item;
      else
        v17 = 0LL;
      klass = v17[2].klass;
      monitor = v17[2].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v22.fields.currentCryptoKey = klass;
      *(_QWORD *)&v22.fields.fakeValue = monitor;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v22, 0LL);
      if ( v20 >= 1 )
      {
        if ( !isVoiceList )
          break;
        v21 = v20;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                isVoiceList,
                v20,
                (const MethodInfo_2DD58F4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v21,
            1,
            (const MethodInfo_2DD5654 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( ++v13 >= v12 )
        return;
    }
LABEL_22:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantVoiceRelationMaster__TryGetEntity(
        ServantVoiceRelationMaster_o *this,
        ServantVoiceRelationEntity_o **entity,
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FCB1C & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__,
      entity);
    byte_40FCB1C = 1;
  }
  PK = ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
}


void __fastcall ServantVoiceRelationMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7677 & 1) == 0 )
  {
    sub_B16FFC(&ServantVoiceRelationMaster___c_TypeInfo, v1);
    byte_40F7677 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantVoiceRelationMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantVoiceRelationMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ServantVoiceRelationMaster___c___ctor(ServantVoiceRelationMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__3_0(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_0(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_1(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.ascendOrder - b->fields.ascendOrder;
}