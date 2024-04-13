void __fastcall ServantVoiceRelationMaster___ctor(ServantVoiceRelationMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBF81 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EBF81 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    176,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceRelationEntity_o *__fastcall ServantVoiceRelationMaster__GetEntity(
        ServantVoiceRelationMaster_o *this,
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EBF7F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__,
      svtId,
      relationSvtId,
      method);
    byte_42EBF7F = 1;
  }
  PK = ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&relationSvtId);
  return (ServantVoiceRelationEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__GetEntity__);
}


void __fastcall ServantVoiceRelationMaster__GetRelationList(
        ServantVoiceRelationMaster_o *this,
        ServantVoiceRelationEntity_array **relationList,
        int32_t svtId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  void *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x20
  int32_t v45; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x25
  __int64 v48; // x10
  void *monitor; // x26
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x27
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x21
  Il2CppObject *v53; // x22
  struct ServantVoiceRelationMaster___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  ServantVoiceRelationEntity_array *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_42EBF82 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)relationList,
      svtId,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_ServantVoiceRelationEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_ServantVoiceRelationEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&ServantVoiceRelationEntity_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__, v36, v37, v38);
    sub_B5D5C4(&ServantVoiceRelationMaster___c_TypeInfo, v39, v40, v41);
    byte_42EBF82 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v45,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v48 = *(&ServantVoiceRelationEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v48
          && (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[v48 - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          klass = Item[1].klass;
          monitor = Item[1].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v69.fields.currentCryptoKey = klass;
          *(_QWORD *)&v69.fields.fakeValue = monitor;
          list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v69, 0LL);
          if ( (_DWORD)list == svtId )
          {
            if ( !v44 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v44,
              v47,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
          }
        }
      }
      if ( ++v45 >= Count )
        goto LABEL_17;
    }
LABEL_27:
    sub_B5D69C(list, relationList);
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
    v53 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v53,
      Method_ServantVoiceRelationMaster___c__GetRelationList_b__3_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ServantVoiceRelationEntity___ctor__);
    v54 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v54->__9__3_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v54->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  if ( !v44 )
    goto LABEL_27;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v44,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v61 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v44,
                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *relationList = v61;
  sub_B5D560((BattleServantConfConponent_o *)relationList, (System_Int32_array **)v61, v62, v63, v64, v65, v66, v67);
}


void __fastcall ServantVoiceRelationMaster__GetRelationList_31450032(
        ServantVoiceRelationMaster_o *this,
        ServantVoiceRelationEntity_array **beforeRelationList,
        ServantVoiceRelationEntity_array **sameRelationList,
        ServantVoiceRelationEntity_array **afterRelationList,
        int32_t svtId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  void *list; // x0
  int32_t Count; // w27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x24
  int32_t v50; // w28
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v52; // x19
  __int64 v53; // x10
  void *monitor; // x20
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x21
  int v56; // w8
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x19
  Il2CppObject *v59; // x20
  struct ServantVoiceRelationMaster___c_StaticFields *v60; // x0
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
  ServantVoiceRelationEntity_array *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v81; // x22
  struct ServantVoiceRelationMaster___c_StaticFields *v82; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_1; // x19
  Il2CppObject *v84; // x20
  struct ServantVoiceRelationMaster___c_StaticFields *v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  ServantVoiceRelationEntity_array *v92; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v102; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  if ( (byte_42EBF83 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)beforeRelationList,
      (_DWORD)sameRelationList,
      afterRelationList);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_ServantVoiceRelationEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_ServantVoiceRelationEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&ServantVoiceRelationEntity_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__, v37, v38, v39);
    sub_B5D5C4(&Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__, v40, v41, v42);
    sub_B5D5C4(&ServantVoiceRelationMaster___c_TypeInfo, v43, v44, v45);
    byte_42EBF83 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  v102 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceRelationEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v102,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity___ctor__);
  if ( Count >= 1 )
  {
    v50 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v50,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v52 = Item;
        v53 = *(&ServantVoiceRelationEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v53
          && (ServantVoiceRelationEntity_c *)Item->klass->_2.typeHierarchy[v53 - 1] == ServantVoiceRelationEntity_TypeInfo )
        {
          klass = Item[1].klass;
          monitor = Item[1].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v104.fields.currentCryptoKey = klass;
          *(_QWORD *)&v104.fields.fakeValue = monitor;
          list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v104, 0LL);
          if ( (_DWORD)list == svtId )
          {
            v56 = (int)v52[3].klass;
            if ( (v56 & 0x80000000) != 0 )
            {
              if ( !v48 )
                break;
              list = v48;
            }
            else if ( v56 )
            {
              list = v102;
              if ( !v102 )
                break;
            }
            else
            {
              if ( !v49 )
                break;
              list = v49;
            }
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Add__);
          }
        }
      }
      if ( ++v50 >= Count )
        goto LABEL_24;
    }
LABEL_45:
    sub_B5D69C(list, beforeRelationList);
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
    v59 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v59,
      Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ServantVoiceRelationEntity___ctor__);
    v60 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v60->__9__4_0 = (struct System_Comparison_ServantVoiceRelationEntity__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v60->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
  if ( !v48 )
    goto LABEL_45;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v48,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v67 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v48,
                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *beforeRelationList = v67;
  sub_B5D560(
    (BattleServantConfConponent_o *)beforeRelationList,
    (System_Int32_array **)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  if ( !v49 )
    goto LABEL_45;
  v74 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v49,
                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *sameRelationList = v74;
  sub_B5D560((BattleServantConfConponent_o *)sameRelationList, (System_Int32_array **)v74, v75, v76, v77, v78, v79, v80);
  list = ServantVoiceRelationMaster___c_TypeInfo;
  if ( (BYTE3(ServantVoiceRelationMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v81 = v102;
    if ( !ServantVoiceRelationMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantVoiceRelationMaster___c_TypeInfo);
      list = ServantVoiceRelationMaster___c_TypeInfo;
    }
  }
  else
  {
    v81 = v102;
  }
  v82 = (struct ServantVoiceRelationMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v82->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      v82 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    }
    v84 = (Il2CppObject *)v82->__9;
    _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantVoiceRelationEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_1,
      v84,
      Method_ServantVoiceRelationMaster___c__GetRelationList_b__4_1__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ServantVoiceRelationEntity___ctor__);
    v85 = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
    v85->__9__4_1 = (struct System_Comparison_ServantVoiceRelationEntity__o *)_9__4_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v85->__9__4_1,
      (System_Int32_array **)_9__4_1,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
  }
  if ( !v81 )
    goto LABEL_45;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v81,
    (System_Comparison_T__o *)_9__4_1,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__Sort__);
  v92 = (ServantVoiceRelationEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v81,
                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantVoiceRelationEntity__ToArray__);
  *afterRelationList = v92;
  sub_B5D560(
    (BattleServantConfConponent_o *)afterRelationList,
    (System_Int32_array **)v92,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
}


void __fastcall ServantVoiceRelationMaster__MargeServantVoiceId(
        ServantVoiceRelationMaster_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *isVoiceList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v23; // w21
  int32_t v24; // w22
  __int64 v25; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v26; // x9
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x24
  int32_t v29; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_42EBF84 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)isVoiceList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ServantVoiceRelationEntity_TypeInfo, v18, v19, v20);
    byte_42EBF84 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v24,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v25 = *(&ServantVoiceRelationEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v25
        || (ServantVoiceRelationEntity_c *)list->klass->_2.typeHierarchy[v25 - 1] != ServantVoiceRelationEntity_TypeInfo )
      {
        break;
      }
      if ( (ServantVoiceRelationEntity_c *)list->klass->_2.typeHierarchy[*(&ServantVoiceRelationEntity_TypeInfo->_2.bitflags2
                                                                         + 1)
                                                                       - 1] == ServantVoiceRelationEntity_TypeInfo )
        v26 = list;
      else
        v26 = 0LL;
      klass = v26[1].klass;
      monitor = v26[1].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v30.fields.currentCryptoKey = klass;
      *(_QWORD *)&v30.fields.fakeValue = monitor;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                           v30,
                                                                                           0LL);
      if ( (int)list >= 1 )
      {
        if ( !isVoiceList )
          break;
        v29 = (int)list;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                isVoiceList,
                (int32_t)list,
                (const MethodInfo_2F03798 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v29,
            1,
            (const MethodInfo_2F034F8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( ++v24 >= v23 )
        return;
    }
LABEL_22:
    sub_B5D69C(list, isVoiceList);
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

  if ( (byte_42EBF80 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&relationSvtId);
    byte_42EBF80 = 1;
  }
  PK = ServantVoiceRelationEntity__CreatePK(svtId, relationSvtId, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantVoiceRelationMaster__ServantVoiceRelationEntity__string__TryGetEntity__);
}


void __fastcall ServantVoiceRelationMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantVoiceRelationMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DAE & 1) == 0 )
  {
    sub_B5D5C4(&ServantVoiceRelationMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5DAE = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantVoiceRelationMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantVoiceRelationMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantVoiceRelationMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_0(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}


int32_t __fastcall ServantVoiceRelationMaster___c___GetRelationList_b__4_1(
        ServantVoiceRelationMaster___c_o *this,
        ServantVoiceRelationEntity_o *a,
        ServantVoiceRelationEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.ascendOrder - b->fields.ascendOrder;
}