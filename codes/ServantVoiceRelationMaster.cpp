void __fastcall ServantVoiceRelationMaster___ctor(ServantVoiceRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42177C1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__, method);
    byte_42177C1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    175,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceRelationEntity_o *__fastcall ServantVoiceRelationMaster__GetEntity(
        ServantVoiceRelationMaster_o *this,
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42177BF & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_42177BF = 1;
  }
  PK = ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&relationSvtId);
  return (ServantVoiceRelationEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_266A024 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
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
  void *list; // x0
  int32_t Count; // w23
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t v25; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x25
  __int64 v28; // x10
  void *monitor; // x26
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x27
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x21
  Il2CppObject *v33; // x22
  struct ServantVoiceRelationMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  ServantVoiceRelationEntity_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_42177C2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, relationList);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B0D8A4(&Method_System_Comparison_ServantVoiceRelationEntity___ctor__, v7);
    sub_B0D8A4(&System_Comparison_ServantVoiceRelationEntity__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B0D8A4(&ServantVoiceRelationEntity_TypeInfo, v15);
    sub_B0D8A4(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__, v16);
    sub_B0D8A4(&ServantVoiceRelationMaster___c_TypeInfo, v17);
    byte_42177C2 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v25,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v28 = *(&ServantVoiceRelationEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[v28 - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          klass = Item[1].klass;
          monitor = Item[1].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v49.fields.currentCryptoKey = klass;
          *(_QWORD *)&v49.fields.fakeValue = monitor;
          list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v49, 0LL);
          if ( (_DWORD)list == svtId )
          {
            if ( !v22 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v22,
              v27,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
          }
        }
      }
      if ( ++v25 >= Count )
        goto LABEL_17;
    }
LABEL_27:
    sub_B0D97C(list);
  }
LABEL_17:
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( (BYTE3(ServantVoiceRelationMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  static_fields = (struct ServantVoiceRelationMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_ServantVoiceRelationEntity__TypeInfo,
                                                                          v23,
                                                                          v24);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v33,
      Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_ServantVoiceRelationEntity___ctor__);
    v34 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v34->__9__3_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)_9__3_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v34->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !v22 )
    goto LABEL_27;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v41 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                              (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *relationList = v41;
  sub_B0D840((BattleServantConfConponent_o *)relationList, (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
}


void __fastcall ServantVoiceRelationMaster__GetRelationList_29919536(
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
  void *list; // x0
  int32_t Count; // w27
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x25
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x24
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  int32_t v32; // w28
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v34; // x19
  __int64 v35; // x10
  void *monitor; // x20
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x21
  int v38; // w8
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x19
  Il2CppObject *v41; // x20
  struct ServantVoiceRelationMaster___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  ServantVoiceRelationEntity_array *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  ServantVoiceRelationEntity_array *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x1
  __int64 v64; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v65; // x22
  struct ServantVoiceRelationMaster___c_StaticFields *v66; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_1; // x19
  Il2CppObject *v68; // x20
  struct ServantVoiceRelationMaster___c_StaticFields *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  ServantVoiceRelationEntity_array *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v86; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  if ( (byte_42177C3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, beforeRelationList);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_System_Comparison_ServantVoiceRelationEntity___ctor__, v8);
    sub_B0D8A4(&System_Comparison_ServantVoiceRelationEntity__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo, v14);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B0D8A4(&ServantVoiceRelationEntity_TypeInfo, v16);
    sub_B0D8A4(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__, v17);
    sub_B0D8A4(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__, v18);
    sub_B0D8A4(&ServantVoiceRelationMaster___c_TypeInfo, v19);
    byte_42177C3 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v86 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                                  System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo,
                                                                                  v28,
                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v86,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v32,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v34 = Item;
        v35 = *(&ServantVoiceRelationEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v35
          && (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[v35 - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          klass = Item[1].klass;
          monitor = Item[1].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v88.fields.currentCryptoKey = klass;
          *(_QWORD *)&v88.fields.fakeValue = monitor;
          list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v88, 0LL);
          if ( (_DWORD)list == svtId )
          {
            v38 = (int)v34[3].klass;
            if ( (v38 & 0x80000000) != 0 )
            {
              if ( !v24 )
                break;
              list = v24;
            }
            else if ( v38 )
            {
              list = v86;
              if ( !v86 )
                break;
            }
            else
            {
              if ( !v27 )
                break;
              list = v27;
            }
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
          }
        }
      }
      if ( ++v32 >= Count )
        goto LABEL_24;
    }
LABEL_45:
    sub_B0D97C(list);
  }
LABEL_24:
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( (BYTE3(ServantVoiceRelationMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
    list = ServantVoiceRelationMaster___c_TypeInfo;
  }
  static_fields = (struct ServantVoiceRelationMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    }
    v41 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_ServantVoiceRelationEntity__TypeInfo,
                                                                          v30,
                                                                          v31);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v41,
      Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_ServantVoiceRelationEntity___ctor__);
    v42 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v42->__9__4_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)_9__4_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v42->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  if ( !v24 )
    goto LABEL_45;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v24,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v49 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                              (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *beforeRelationList = v49;
  sub_B0D840(
    (BattleServantConfConponent_o *)beforeRelationList,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  if ( !v27 )
    goto LABEL_45;
  v56 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                              (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *sameRelationList = v56;
  sub_B0D840((BattleServantConfConponent_o *)sameRelationList, (System_Int32_array **)v56, v57, v58, v59, v60, v61, v62);
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( (BYTE3(ServantVoiceRelationMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v65 = v86;
    if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
  }
  else
  {
    v65 = v86;
  }
  v66 = (struct ServantVoiceRelationMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v66->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      v66 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    }
    v68 = (Il2CppObject *)v66->__9;
    _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_ServantVoiceRelationEntity__TypeInfo,
                                                                          v63,
                                                                          v64);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_1,
      v68,
      Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_ServantVoiceRelationEntity___ctor__);
    v69 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v69->__9__4_1 = (struct System_Comparison_ServantVoiceRelationEntity__o *)_9__4_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v69->__9__4_1,
      (System_Int32_array **)_9__4_1,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
  }
  if ( !v65 )
    goto LABEL_45;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v65,
    (System_Comparison_T__o *)_9__4_1,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v76 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v65,
                                              (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *afterRelationList = v76;
  sub_B0D840(
    (BattleServantConfConponent_o *)afterRelationList,
    (System_Int32_array **)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
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
  __int64 v14; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x9
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x24
  int32_t v18; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_42177C4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isVoiceList);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&ServantVoiceRelationEntity_TypeInfo, v9);
    byte_42177C4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v13,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v14 = *(&ServantVoiceRelationEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v14
        || (ServantVoiceRelationEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] != ServantVoiceRelationEntity_TypeInfo )
      {
        break;
      }
      if ( (ServantVoiceRelationEntity_c *)list->klass->_2.typeHierarchy[*(&ServantVoiceRelationEntity_TypeInfo->_2.bitflags2
                                                                         + 1)
                                                                       - 1] == ServantVoiceRelationEntity_TypeInfo )
        v15 = list;
      else
        v15 = 0LL;
      klass = v15[1].klass;
      monitor = v15[1].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v19.fields.currentCryptoKey = klass;
      *(_QWORD *)&v19.fields.fakeValue = monitor;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                                           v19,
                                                                                           0LL);
      if ( (int)list >= 1 )
      {
        if ( !isVoiceList )
          break;
        v18 = (int)list;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                isVoiceList,
                (int32_t)list,
                (const MethodInfo_2E62194 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v18,
            1,
            (const MethodInfo_2E61EF4 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( ++v13 >= v12 )
        return;
    }
LABEL_22:
    sub_B0D97C(list);
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

  if ( (byte_42177C0 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__,
      entity);
    byte_42177C0 = 1;
  }
  PK = ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
}


void __fastcall ServantVoiceRelationMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0

  if ( (byte_421227C & 1) == 0 )
  {
    sub_B0D8A4(&ServantVoiceRelationMaster___c_TypeInfo, v1);
    byte_421227C = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantVoiceRelationMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantVoiceRelationMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_0(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_1(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}