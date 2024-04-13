void __fastcall ServantCostumeReleaseMaster___ctor(ServantCostumeReleaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB925 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EB925 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    206,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__);
}


System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *__fastcall ServantCostumeReleaseMaster__GetCostumeCondGroupEntityList(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
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
  ServantCostumeReleaseEntity_array *EntityList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x19
  ServantCostumeReleaseMaster___c_c *v46; // x0
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x22
  Il2CppObject *v49; // x23
  struct ServantCostumeReleaseMaster___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x25
  ServantCostumeReleaseEntity_o *v60; // x8
  int32_t condGroup; // w23
  il2cpp_array_size_t v62; // w26
  ServantCostumeReleaseEntity_o *v63; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v64; // x23
  __int64 v65; // x0
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v66; // x21

  if ( (byte_42EB928 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_ServantCostumeReleaseEntity___, svtId, costumeId, method);
    sub_B5D5C4(&Method_System_Comparison_ServantCostumeReleaseEntity___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Clear__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___68747176, v28, v29, v30);
    sub_B5D5C4(&System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo, v31, v32, v33);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__, v37, v38, v39);
    sub_B5D5C4(&ServantCostumeReleaseMaster___c_TypeInfo, v40, v41, v42);
    byte_42EB928 = 1;
  }
  EntityList = ServantCostumeReleaseMaster__GetEntityList(this, svtId, costumeId, method);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__);
  v46 = ServantCostumeReleaseMaster___c_TypeInfo;
  if ( (BYTE3(ServantCostumeReleaseMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo);
    v46 = ServantCostumeReleaseMaster___c_TypeInfo;
  }
  static_fields = v46->static_fields;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v49,
      Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ServantCostumeReleaseEntity___ctor__);
    v50 = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    v50->__9__5_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)_9__5_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v50->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)EntityList,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_1AC8530 *)Method_System_Array_Sort_ServantCostumeReleaseEntity___);
  if ( !EntityList )
    goto LABEL_30;
  v59 = *(_QWORD *)&EntityList->max_length;
  if ( !(_DWORD)v59 )
  {
LABEL_27:
    v65 = sub_B5D6C8(v57);
    sub_B5D668(v65, 0LL);
  }
  v60 = EntityList->m_Items[0];
  if ( !v60 )
LABEL_30:
    sub_B5D69C(v57, v58);
  if ( (int)v59 >= 1 )
  {
    condGroup = v60->fields.condGroup;
    v62 = 0;
    while ( 1 )
    {
      v63 = EntityList->m_Items[v62];
      if ( !v63 )
        goto LABEL_30;
      if ( v63->fields.releaseType == 1 )
      {
        if ( condGroup == v63->fields.condGroup )
        {
          if ( !v44 )
            goto LABEL_30;
        }
        else
        {
          v64 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
          System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
            v64,
            (System_Collections_Generic_IEnumerable_T__o *)v44,
            (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___68747176);
          if ( !v45 )
            goto LABEL_30;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v45,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__);
          if ( !v44 )
            goto LABEL_30;
          condGroup = v63->fields.condGroup;
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)v44,
            (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Clear__);
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v44,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__);
      }
      if ( (int)++v62 >= (int)v59 )
        break;
      if ( v62 >= EntityList->max_length )
        goto LABEL_27;
    }
  }
  v66 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v66,
    (System_Collections_Generic_IEnumerable_T__o *)v44,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___68747176);
  if ( !v45 )
    goto LABEL_30;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v45,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v66,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__);
  return (System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *)v45;
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeReleaseEntity_o *__fastcall ServantCostumeReleaseMaster__GetEntity(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t releaseType,
        int32_t costumeId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EB923 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__,
      svtId,
      releaseType,
      *(_QWORD *)&costumeId);
    byte_42EB923 = 1;
  }
  PK = ServantCostumeReleaseEntity__CreatePK(
         svtId,
         releaseType,
         costumeId,
         condType,
         condTargetId,
         *(const MethodInfo **)&condTargetId);
  return (ServantCostumeReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__);
}


ServantCostumeReleaseEntity_array *__fastcall ServantCostumeReleaseMaster__GetEntityList(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x19
  void *v41; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v44; // w23
  int32_t v45; // w24
  __int64 v46; // x10
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v49; // x21
  struct ServantCostumeReleaseMaster___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_42EB927 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, svtId, costumeId, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_ServantCostumeReleaseEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&ServantCostumeReleaseEntity_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__, v34, v35, v36);
    sub_B5D5C4(&ServantCostumeReleaseMaster___c_TypeInfo, v37, v38, v39);
    byte_42EB927 = 1;
  }
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v44 = Count;
    v45 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v45,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v41 = list;
      v46 = *(&ServantCostumeReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v46
        || *(ServantCostumeReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v46 - 8) != ServantCostumeReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == svtId && *((_DWORD *)list + 5) == costumeId )
      {
        if ( !v40 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v40,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__);
      }
      if ( ++v45 >= v44 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B5D69C(list, v41);
  }
LABEL_15:
  list = ServantCostumeReleaseMaster___c_TypeInfo;
  if ( (BYTE3(ServantCostumeReleaseMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo);
    list = ServantCostumeReleaseMaster___c_TypeInfo;
  }
  static_fields = (struct ServantCostumeReleaseMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v49,
      Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ServantCostumeReleaseEntity___ctor__);
    v50 = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    v50->__9__4_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v50->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  if ( !v40 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v40,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__);
  return (ServantCostumeReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v40,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__);
}


bool __fastcall ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeEntity_o *targetEntity,
        int32_t svtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  bool IsCostumeReleaseCondClear; // w8
  bool result; // w0
  int64_t Instance; // x0
  __int64 v21; // x1
  signed int max_length; // w20
  __int64 v23; // x22
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int32_t num; // w8
  __int64 v26; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t qp; // [xsp+14h] [xbp-4Ch] BYREF
  System_Int32_array *itemNums; // [xsp+18h] [xbp-48h] BYREF
  System_Int32_array *itemIds; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_42EB92A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineCostumeMaster___, (_DWORD)targetEntity, svtId, userSvtId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42EB92A = 1;
  }
  itemIds = 0LL;
  itemNums = 0LL;
  qp = 0;
  entity = 0LL;
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
                                this,
                                targetEntity,
                                svtId,
                                userSvtId,
                                method);
  result = 0;
  if ( !IsCostumeReleaseCondClear )
    return result;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineCostumeMaster___),
        !targetEntity)
    || !Instance )
  {
LABEL_30:
    sub_B5D69C(Instance, v21);
  }
  CombineCostumeMaster__CheckNeedCombineInfo(
    (CombineCostumeMaster_o *)Instance,
    svtId,
    targetEntity->fields.id,
    &itemIds,
    &itemNums,
    &qp,
    0LL);
  if ( !itemIds )
    return 1;
  max_length = itemIds->max_length;
  if ( max_length < 1 )
  {
LABEL_25:
    Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
    if ( Instance )
      return qp <= *(_DWORD *)(Instance + 96);
    goto LABEL_30;
  }
  v23 = 8LL;
  while ( 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !itemIds )
      goto LABEL_30;
    if ( (unsigned int)(v23 - 8) >= itemIds->max_length )
      goto LABEL_31;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_30;
    Instance = UserItemMaster__TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &entity,
                 Instance,
                 *((_DWORD *)&itemIds->obj.klass + v23),
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      num = entity->fields.num;
    }
    else
    {
      num = 0;
    }
    if ( !itemNums )
      goto LABEL_30;
    if ( (unsigned int)(v23 - 8) >= itemNums->max_length )
    {
LABEL_31:
      v26 = sub_B5D6C8(Instance);
      sub_B5D668(v26, 0LL);
    }
    if ( *((_DWORD *)&itemNums->obj.klass + v23) > num )
      return 0;
    if ( (int)++v23 - 8 >= max_length )
      goto LABEL_25;
  }
}


bool __fastcall ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeEntity_o *targetEntity,
        int32_t svtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  EventCombineCostumeEntity_o *v24; // x24
  bool IsShortEventItem; // w23
  EventEntity_o *v26; // x24
  int64_t startedAt; // x25
  const MethodInfo *v28; // x4

  if ( (byte_42EB92C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, (_DWORD)targetEntity, svtId, userSvtId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42EB92C = 1;
  }
  if ( ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(this, targetEntity, svtId, userSvtId, method) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    if ( !targetEntity || !Instance )
      goto LABEL_22;
    ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                (EventCombineCostumeMaster_o *)Instance,
                                svtId,
                                targetEntity->fields.id,
                                0LL);
    if ( !ListBySvtIdAndCostumeId )
      return (char)ListBySvtIdAndCostumeId;
    v24 = ListBySvtIdAndCostumeId;
    IsShortEventItem = EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
      || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        v24->fields.eventId,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
    {
LABEL_22:
      sub_B5D69C(Instance, v22);
    }
    v26 = (EventEntity_o *)Instance;
    if ( !(IsShortEventItem | !EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL)) )
      goto LABEL_20;
    startedAt = v26->fields.startedAt;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( startedAt <= NetworkManager__getTime(0LL)
      && !EventEntity__IsOpen(v26, 0, 0LL)
      && (!IsShortEventItem
       || ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(this, targetEntity, svtId, userSvtId, v28)) )
    {
LABEL_20:
      LOBYTE(ListBySvtIdAndCostumeId) = 1;
      return (char)ListBySvtIdAndCostumeId;
    }
  }
  LOBYTE(ListBySvtIdAndCostumeId) = 0;
  return (char)ListBySvtIdAndCostumeId;
}


bool __fastcall ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeEntity_o *targetEntity,
        int32_t svtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  void *list; // x0
  int32_t Count; // w0
  int32_t v20; // w23
  int32_t v21; // w24
  __int64 v22; // x10
  int32_t v23; // w25
  int32_t v24; // w26

  if ( (byte_42EB92B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)targetEntity,
      svtId,
      userSvtId);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&CondType_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ServantCostumeReleaseEntity_TypeInfo, v15, v16, v17);
    byte_42EB92B = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_27:
    sub_B5D69C(list, targetEntity);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v20 = Count;
  v21 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_27;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v21,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_27;
    v22 = *(&ServantCostumeReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v22
      || *(ServantCostumeReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v22 - 8) != ServantCostumeReleaseEntity_TypeInfo )
    {
      goto LABEL_27;
    }
    if ( *((_DWORD *)list + 4) == svtId )
    {
      if ( !targetEntity )
        goto LABEL_27;
      if ( *((_DWORD *)list + 5) == targetEntity->fields.id && *((_DWORD *)list + 6) == 2 )
      {
        v23 = *((_DWORD *)list + 7);
        if ( (v23 & 0xFFFFFFFE) != 6 )
        {
          if ( v23 == 12 )
          {
            if ( !ServantCostumeEntity__CheckEnableReleaseTime(targetEntity, (const MethodInfo *)targetEntity) )
              return 0;
          }
          else if ( !ServantCostumeReleaseEntity__IsAvailable(
                       (ServantCostumeReleaseEntity_o *)list,
                       (const MethodInfo *)targetEntity) )
          {
            return 0;
          }
          goto LABEL_24;
        }
        v24 = *((_DWORD *)list + 9);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsOpenForUsrSvt(v23, v24, userSvtId, 0LL) )
          return 0;
      }
    }
LABEL_24:
    if ( ++v21 >= v20 )
      return 1;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeReleaseMaster__TryGetEntity(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeReleaseEntity_o **entity,
        int32_t svtId,
        int32_t releaseType,
        int32_t costumeId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EB924 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&releaseType);
    byte_42EB924 = 1;
  }
  PK = ServantCostumeReleaseEntity__CreatePK(
         svtId,
         releaseType,
         costumeId,
         condType,
         condTargetId,
         *(const MethodInfo **)&condType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__);
}


bool __fastcall ServantCostumeReleaseMaster__checkItemHaving(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
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
  System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *CostumeCondGroupEntityList; // x0
  const MethodInfo *v17; // x1
  int size; // w20
  System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *v19; // x19
  unsigned int v20; // w21
  unsigned int i; // w8
  __int64 v22; // x23
  System_Collections_Generic_List_ServantCostumeReleaseEntity__o *v23; // x25
  System_Collections_Generic_List_ServantCostumeReleaseEntity__o *v24; // x8
  int v25; // w22

  if ( (byte_42EB929 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Count__,
      svtId,
      costumeId,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Item__, v13, v14, v15);
    byte_42EB929 = 1;
  }
  CostumeCondGroupEntityList = ServantCostumeReleaseMaster__GetCostumeCondGroupEntityList(
                                 this,
                                 svtId,
                                 costumeId,
                                 method);
  if ( !CostumeCondGroupEntityList )
    return 1;
  size = CostumeCondGroupEntityList->fields._size;
  v19 = CostumeCondGroupEntityList;
  if ( !size )
    return 1;
  if ( size >= 1 )
  {
    v20 = 0;
    for ( i = CostumeCondGroupEntityList->fields._size; ; i = v19->fields._size )
    {
      if ( i <= v20 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v24 = v19->fields._items->m_Items[v20];
      if ( !v24 )
LABEL_25:
        sub_B5D69C(CostumeCondGroupEntityList, v17);
      v25 = v24->fields._size;
      if ( v25 < 1 )
        break;
      v22 = 0LL;
      while ( 1 )
      {
        if ( v19->fields._size <= v20 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v23 = v19->fields._items->m_Items[v20];
        if ( !v23 )
          goto LABEL_25;
        if ( v23->fields._size <= (unsigned int)v22 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        CostumeCondGroupEntityList = (System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *)v23->fields._items->m_Items[v22];
        if ( !CostumeCondGroupEntityList )
          goto LABEL_25;
        CostumeCondGroupEntityList = (System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *)ServantCostumeReleaseEntity__IsAvailable((ServantCostumeReleaseEntity_o *)CostumeCondGroupEntityList, v17);
        if ( ((unsigned __int8)CostumeCondGroupEntityList & 1) == 0 )
          break;
        if ( (int)++v22 >= v25 )
          return 1;
      }
      if ( (int)++v20 >= size )
        return 0;
    }
    return 1;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeReleaseMaster__isEnableMountCostume(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t lv,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v19; // w24
  int32_t v20; // w25
  __int64 v21; // x10
  int syncRoot_high; // w8

  if ( (byte_42EB926 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, svtId, id, *(_QWORD *)&lv);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12, v13);
    sub_B5D5C4(&ServantCostumeReleaseEntity_TypeInfo, v14, v15, v16);
    byte_42EB926 = 1;
  }
  if ( id < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v20,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v21 = *(&ServantCostumeReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v21
        || (ServantCostumeReleaseEntity_c *)list->klass->_2.typeHierarchy[v21 - 1] != ServantCostumeReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == svtId && HIDWORD(list->fields.items) == id )
      {
        syncRoot_high = HIDWORD(list->fields._syncRoot);
        if ( syncRoot_high == 7 )
        {
          if ( SHIDWORD(list[1].klass) > limitCount )
            return 0;
        }
        else if ( syncRoot_high == 6 && SHIDWORD(list[1].klass) > lv )
        {
          return 0;
        }
      }
      if ( ++v20 >= v19 )
        return 1;
    }
LABEL_21:
    sub_B5D69C(list, *(_QWORD *)&svtId);
  }
  return 1;
}


void __fastcall ServantCostumeReleaseMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D4F & 1) == 0 )
  {
    sub_B5D5C4(&ServantCostumeReleaseMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5D4F = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantCostumeReleaseMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCostumeReleaseMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall ServantCostumeReleaseMaster___c___ctor(
        ServantCostumeReleaseMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantCostumeReleaseMaster___c___GetCostumeCondGroupEntityList_b__5_0(
        ServantCostumeReleaseMaster___c_o *this,
        ServantCostumeReleaseEntity_o *a,
        ServantCostumeReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.condGroup - b->fields.condGroup;
}


int32_t __fastcall ServantCostumeReleaseMaster___c___GetEntityList_b__4_0(
        ServantCostumeReleaseMaster___c_o *this,
        ServantCostumeReleaseEntity_o *a,
        ServantCostumeReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.priority - b->fields.priority;
}