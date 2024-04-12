void __fastcall ServantVoiceRelationMaster___ctor(ServantVoiceRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B335F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
    byte_42B335F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    176,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceRelationEntity_o *__fastcall ServantVoiceRelationMaster__GetEntity(
        ServantVoiceRelationMaster_o *this,
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B335D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
    byte_42B335D = 1;
  }
  PK = ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&relationSvtId);
  return (ServantVoiceRelationEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
}


void __fastcall ServantVoiceRelationMaster__GetRelationList(
        ServantVoiceRelationMaster_o *this,
        ServantVoiceRelationEntity_array **relationList,
        int32_t svtId,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  int32_t v9; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x25
  __int64 v12; // x10
  void *monitor; // x26
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x27
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x21
  Il2CppObject *v17; // x22
  struct ServantVoiceRelationMaster___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  ServantVoiceRelationEntity_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_42B3360 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_ServantVoiceRelationEntity___ctor__);
    sub_B52984(&System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantVoiceRelationEntity_TypeInfo);
    sub_B52984(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__);
    sub_B52984(&ServantVoiceRelationMaster___c_TypeInfo);
    byte_42B3360 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v9,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v12 = *(&ServantVoiceRelationEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[v12 - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          klass = Item[1].klass;
          monitor = Item[1].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v33.fields.currentCryptoKey = klass;
          *(_QWORD *)&v33.fields.fakeValue = monitor;
          list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v33, 0LL);
          if ( (_DWORD)list == svtId )
          {
            if ( !v8 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v8,
              v11,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
          }
        }
      }
      if ( ++v9 >= Count )
        goto LABEL_17;
    }
LABEL_27:
    sub_B52A5C(list, relationList);
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
    v17 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v17,
      Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ServantVoiceRelationEntity___ctor__);
    v18 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v18->__9__3_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)_9__3_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v18->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !v8 )
    goto LABEL_27;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v8,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v25 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                              (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *relationList = v25;
  sub_B52920((BattleServantConfConponent_o *)relationList, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
}


void __fastcall ServantVoiceRelationMaster__GetRelationList_30950568(
        ServantVoiceRelationMaster_o *this,
        ServantVoiceRelationEntity_array **beforeRelationList,
        ServantVoiceRelationEntity_array **sameRelationList,
        ServantVoiceRelationEntity_array **afterRelationList,
        int32_t svtId,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x24
  int32_t v11; // w28
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v13; // x19
  __int64 v14; // x10
  void *monitor; // x20
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x21
  int v17; // w8
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x19
  Il2CppObject *v20; // x20
  struct ServantVoiceRelationMaster___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  ServantVoiceRelationEntity_array *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  ServantVoiceRelationEntity_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v42; // x22
  struct ServantVoiceRelationMaster___c_StaticFields *v43; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_1; // x19
  Il2CppObject *v45; // x20
  struct ServantVoiceRelationMaster___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  ServantVoiceRelationEntity_array *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v63; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_42B3361 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_ServantVoiceRelationEntity___ctor__);
    sub_B52984(&System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantVoiceRelationEntity_TypeInfo);
    sub_B52984(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__);
    sub_B52984(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__);
    sub_B52984(&ServantVoiceRelationMaster___c_TypeInfo);
    byte_42B3361 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v63 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v63,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v11,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v13 = Item;
        v14 = *(&ServantVoiceRelationEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          klass = Item[1].klass;
          monitor = Item[1].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v65.fields.currentCryptoKey = klass;
          *(_QWORD *)&v65.fields.fakeValue = monitor;
          list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v65, 0LL);
          if ( (_DWORD)list == svtId )
          {
            v17 = (int)v13[3].klass;
            if ( (v17 & 0x80000000) != 0 )
            {
              if ( !v9 )
                break;
              list = v9;
            }
            else if ( v17 )
            {
              list = v63;
              if ( !v63 )
                break;
            }
            else
            {
              if ( !v10 )
                break;
              list = v10;
            }
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
          }
        }
      }
      if ( ++v11 >= Count )
        goto LABEL_24;
    }
LABEL_45:
    sub_B52A5C(list, beforeRelationList);
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
    v20 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v20,
      Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ServantVoiceRelationEntity___ctor__);
    v21 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v21->__9__4_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)_9__4_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v21->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( !v9 )
    goto LABEL_45;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v9,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v28 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                              (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *beforeRelationList = v28;
  sub_B52920(
    (BattleServantConfConponent_o *)beforeRelationList,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( !v10 )
    goto LABEL_45;
  v35 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                              (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *sameRelationList = v35;
  sub_B52920((BattleServantConfConponent_o *)sameRelationList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( (BYTE3(ServantVoiceRelationMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v42 = v63;
    if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
  }
  else
  {
    v42 = v63;
  }
  v43 = (struct ServantVoiceRelationMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v43->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      v43 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)v43->__9;
    _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_1,
      v45,
      Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ServantVoiceRelationEntity___ctor__);
    v46 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v46->__9__4_1 = (struct System_Comparison_ServantVoiceRelationEntity__o *)_9__4_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v46->__9__4_1,
      (System_Int32_array **)_9__4_1,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  if ( !v42 )
    goto LABEL_45;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v42,
    (System_Comparison_T__o *)_9__4_1,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v53 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v42,
                                              (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *afterRelationList = v53;
  sub_B52920(
    (BattleServantConfConponent_o *)afterRelationList,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
}


void __fastcall ServantVoiceRelationMaster__MargeServantVoiceId(
        ServantVoiceRelationMaster_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *isVoiceList,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 v9; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v10; // x9
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x24
  int32_t v13; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42B3362 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantVoiceRelationEntity_TypeInfo);
    byte_42B3362 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v9 = *(&ServantVoiceRelationEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v9
        || (ServantVoiceRelationEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] != ServantVoiceRelationEntity_TypeInfo )
      {
        break;
      }
      if ( (ServantVoiceRelationEntity_c *)list->klass->_2.typeHierarchy[*(&ServantVoiceRelationEntity_TypeInfo->_2.bitflags2
                                                                         + 1)
                                                                       - 1] == ServantVoiceRelationEntity_TypeInfo )
        v10 = list;
      else
        v10 = 0LL;
      klass = v10[1].klass;
      monitor = v10[1].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v14.fields.currentCryptoKey = klass;
      *(_QWORD *)&v14.fields.fakeValue = monitor;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                                           v14,
                                                                                           0LL);
      if ( (int)list >= 1 )
      {
        if ( !isVoiceList )
          break;
        v13 = (int)list;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                isVoiceList,
                (int32_t)list,
                (const MethodInfo_2EF83DC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v13,
            1,
            (const MethodInfo_2EF813C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( ++v8 >= v7 )
        return;
    }
LABEL_22:
    sub_B52A5C(list, isVoiceList);
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

  if ( (byte_42B335E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
    byte_42B335E = 1;
  }
  PK = ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
}


void __fastcall ServantVoiceRelationMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD396 & 1) == 0 )
  {
    sub_B52984(&ServantVoiceRelationMaster___c_TypeInfo);
    byte_42AD396 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantVoiceRelationMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantVoiceRelationMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_0(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_1(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}