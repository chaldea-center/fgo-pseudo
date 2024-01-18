void __fastcall ServantVoiceRelationMaster___ctor(ServantVoiceRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418B124 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__, method);
    byte_418B124 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    175,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceRelationEntity_o *__fastcall ServantVoiceRelationMaster__GetEntity(
        ServantVoiceRelationMaster_o *this,
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418B122 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_418B122 = 1;
  }
  PK = ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&relationSvtId);
  return (ServantVoiceRelationEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  int32_t v21; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x25
  __int64 v24; // x10
  void *monitor; // x26
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x27
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x21
  Il2CppObject *v29; // x22
  struct ServantVoiceRelationMaster___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  ServantVoiceRelationEntity_array *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_418B125 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, relationList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B2C35C(&Method_System_Comparison_ServantVoiceRelationEntity___ctor__, v7);
    sub_B2C35C(&System_Comparison_ServantVoiceRelationEntity__TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&ServantVoiceRelationEntity_TypeInfo, v15);
    sub_B2C35C(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__, v16);
    sub_B2C35C(&ServantVoiceRelationMaster___c_TypeInfo, v17);
    byte_418B125 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v21,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v24 = *(&ServantVoiceRelationEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v24
          && (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[v24 - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          klass = Item[1].klass;
          monitor = Item[1].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v45.fields.currentCryptoKey = klass;
          *(_QWORD *)&v45.fields.fakeValue = monitor;
          list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v45, 0LL);
          if ( (_DWORD)list == svtId )
          {
            if ( !v20 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v20,
              v23,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
          }
        }
      }
      if ( ++v21 >= Count )
        goto LABEL_17;
    }
LABEL_27:
    sub_B2C434(list, relationList);
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
    v29 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v29,
      Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantVoiceRelationEntity___ctor__);
    v30 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v30->__9__3_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v30->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  if ( !v20 )
    goto LABEL_27;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v20,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v37 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *relationList = v37;
  sub_B2C2F8((BattleServantConfConponent_o *)relationList, (System_Int32_array **)v37, v38, v39, v40, v41, v42, v43);
}


void __fastcall ServantVoiceRelationMaster__GetRelationList_31382592(
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x24
  int32_t v24; // w28
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v26; // x19
  __int64 v27; // x10
  void *monitor; // x20
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x21
  int v30; // w8
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x19
  Il2CppObject *v33; // x20
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
  ServantVoiceRelationEntity_array *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v55; // x22
  struct ServantVoiceRelationMaster___c_StaticFields *v56; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_1; // x19
  Il2CppObject *v58; // x20
  struct ServantVoiceRelationMaster___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  ServantVoiceRelationEntity_array *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v76; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_418B126 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, beforeRelationList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Comparison_ServantVoiceRelationEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_ServantVoiceRelationEntity__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B2C35C(&ServantVoiceRelationEntity_TypeInfo, v16);
    sub_B2C35C(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__, v17);
    sub_B2C35C(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__, v18);
    sub_B2C35C(&ServantVoiceRelationMaster___c_TypeInfo, v19);
    byte_418B126 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v76 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v76,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v24,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v26 = Item;
        v27 = *(&ServantVoiceRelationEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v27
          && (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[v27 - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          klass = Item[1].klass;
          monitor = Item[1].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v78.fields.currentCryptoKey = klass;
          *(_QWORD *)&v78.fields.fakeValue = monitor;
          list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v78, 0LL);
          if ( (_DWORD)list == svtId )
          {
            v30 = (int)v26[3].klass;
            if ( (v30 & 0x80000000) != 0 )
            {
              if ( !v22 )
                break;
              list = v22;
            }
            else if ( v30 )
            {
              list = v76;
              if ( !v76 )
                break;
            }
            else
            {
              if ( !v23 )
                break;
              list = v23;
            }
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
          }
        }
      }
      if ( ++v24 >= Count )
        goto LABEL_24;
    }
LABEL_45:
    sub_B2C434(list, beforeRelationList);
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
    v33 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v33,
      Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantVoiceRelationEntity___ctor__);
    v34 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v34->__9__4_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)_9__4_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v34->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !v22 )
    goto LABEL_45;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v41 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *beforeRelationList = v41;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)beforeRelationList,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  if ( !v23 )
    goto LABEL_45;
  v48 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *sameRelationList = v48;
  sub_B2C2F8((BattleServantConfConponent_o *)sameRelationList, (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( (BYTE3(ServantVoiceRelationMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v55 = v76;
    if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
  }
  else
  {
    v55 = v76;
  }
  v56 = (struct ServantVoiceRelationMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v56->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      v56 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    }
    v58 = (Il2CppObject *)v56->__9;
    _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_1,
      v58,
      Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantVoiceRelationEntity___ctor__);
    v59 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v59->__9__4_1 = (struct System_Comparison_ServantVoiceRelationEntity__o *)_9__4_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v59->__9__4_1,
      (System_Int32_array **)_9__4_1,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
  }
  if ( !v55 )
    goto LABEL_45;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v55,
    (System_Comparison_T__o *)_9__4_1,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v66 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v55,
                                              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *afterRelationList = v66;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)afterRelationList,
    (System_Int32_array **)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
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

  if ( (byte_418B127 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isVoiceList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&ServantVoiceRelationEntity_TypeInfo, v9);
    byte_418B127 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
                (const MethodInfo_2E1CE80 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v18,
            1,
            (const MethodInfo_2E1CBE0 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( ++v13 >= v12 )
        return;
    }
LABEL_22:
    sub_B2C434(list, isVoiceList);
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

  if ( (byte_418B123 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__,
      entity);
    byte_418B123 = 1;
  }
  PK = ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
}


void __fastcall ServantVoiceRelationMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4185433 & 1) == 0 )
  {
    sub_B2C35C(&ServantVoiceRelationMaster___c_TypeInfo, v1);
    byte_4185433 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantVoiceRelationMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantVoiceRelationMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_0(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_1(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}