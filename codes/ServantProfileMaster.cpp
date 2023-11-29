void __fastcall ServantProfileMaster___ctor(ServantProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FBB86 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__, method);
    byte_40FBB86 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    3,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__);
}


ServantCommentEntity_o *__fastcall ServantProfileMaster__GetChapterProgressEntity(
        ServantProfileMaster_o *this,
        System_Int32_array *clearWarIdList,
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantCommentMaster_o *v22; // x19
  int32_t Count; // w0
  int32_t v24; // w23
  int v25; // w19
  int32_t v26; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t *Item; // x0
  const MethodInfo *v29; // x3
  int32_t *v30; // x25
  __int64 v31; // x10
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Collections_Generic_List_ServantProfileEntity__o *SvtProfile; // x26
  ServantProfileMaster___c_c *v37; // x8
  struct ServantProfileMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x27
  Il2CppObject *v40; // x28
  struct ServantProfileMaster___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  _BOOL8 v48; // x0
  const MethodInfo *v49; // x3
  Il2CppObject *current; // x26
  int v51; // w27
  int v52; // w8
  ServantCommentEntity_o *result; // x0
  ServantCommentMaster_o *v54; // [xsp+8h] [xbp-A8h]
  int32_t v55; // [xsp+14h] [xbp-9Ch]
  _BYTE v56[32]; // [xsp+18h] [xbp-98h] BYREF
  int v57; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_40FBB89 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, clearWarIdList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_ServantProfileEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_ServantProfileEntity__TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentMaster___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v15);
    sub_B16FFC(&ServantProfileEntity_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__, v18);
    sub_B16FFC(&ServantProfileMaster___c_TypeInfo, v19);
    byte_40FBB89 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v57 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_36;
  v22 = (ServantCommentMaster_o *)MasterData_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v54 = v22;
    v24 = Count;
    v25 = 0;
    v26 = 0;
    v55 = svtId;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          list,
                          v26,
                          (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v30 = Item;
      v31 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) < (unsigned int)v31
        || *(ServantProfileEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v31 - 8) != ServantProfileEntity_TypeInfo )
      {
        break;
      }
      SvtProfile = ServantProfileMaster__GetSvtProfile(this, Item[4], v26, v29);
      v37 = ServantProfileMaster___c_TypeInfo;
      if ( (BYTE3(ServantProfileMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v37 = ServantProfileMaster___c_TypeInfo;
      }
      static_fields = v37->static_fields;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        }
        v40 = (Il2CppObject *)static_fields->__9;
        _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                              System_Comparison_ServantProfileEntity__TypeInfo,
                                                                              v32,
                                                                              v33,
                                                                              v34,
                                                                              v35);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__5_0,
          v40,
          Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__,
          (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantProfileEntity___ctor__);
        v41 = ServantProfileMaster___c_TypeInfo->static_fields;
        v41->__9__5_0 = (struct System_Comparison_ServantProfileEntity__o *)_9__5_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v41->__9__5_0,
          (System_Int32_array **)_9__5_0,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
        svtId = v55;
      }
      if ( !SvtProfile )
        break;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)SvtProfile,
        (System_Comparison_T__o *)_9__5_0,
        (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v56,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SvtProfile,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v58 = *(System_Collections_Generic_List_Enumerator_T__o *)v56;
      while ( 1 )
      {
        v48 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v58,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v48 )
          break;
        current = v58.fields.current;
        if ( ServantProfileMaster__IsEnableCond(
               (ServantProfileMaster_o *)v48,
               (ServantProfileEntity_o *)v58.fields.current,
               clearWarIdList,
               v49) )
        {
          v51 = 1;
          goto LABEL_25;
        }
      }
      v51 = 0;
      current = (Il2CppObject *)v30;
LABEL_25:
      *(_DWORD *)&v56[4 * v25 + 24] = 163;
      v25 = ++v57;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v58,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( v25 )
      {
        v52 = v25 - 1;
        if ( *(_DWORD *)&v56[4 * v25 + 20] == 163 )
        {
          --v25;
          v57 = v52;
        }
      }
      if ( v51 )
      {
        if ( !current )
          break;
        if ( LODWORD(current[1].klass) == svtId )
        {
          if ( !v54 )
            break;
          result = ServantCommentMaster__GetEntity(
                     v54,
                     svtId,
                     HIDWORD(current[1].klass),
                     (int32_t)current[1].monitor,
                     0LL);
          if ( result )
            return result;
        }
      }
      if ( ++v26 >= v24 )
        return 0LL;
    }
LABEL_36:
    sub_B170D4();
  }
  return 0LL;
}


ServantCommentEntity_array *__fastcall ServantProfileMaster__GetChapterProgressEntityList(
        ServantProfileMaster_o *this,
        System_Int32_array *clearWarIdList,
        const MethodInfo *method)
{
  __int64 v5; // x1
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  __int64 v36; // x1
  __int64 v37; // x2
  const MethodInfo *v38; // x3
  __int64 v39; // x4
  int v40; // w23
  int32_t v41; // w24
  __int64 v42; // x26
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v43; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x10
  System_Int32_array **v52; // x1
  BattleServantConfConponent_o *v53; // x25
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v58; // x27
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  System_Collections_Generic_List_ServantProfileEntity__o *SvtProfile; // x26
  ServantProfileMaster___c_c *v64; // x8
  struct ServantProfileMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_1; // x27
  Il2CppObject *v67; // x28
  struct ServantProfileMaster___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  _BOOL8 v75; // x0
  const MethodInfo *v76; // x3
  System_Int32_array **current; // x26
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  int v84; // w27
  int v85; // w20
  int v86; // w8
  ServantCommentEntity_o *Entity; // x0
  int32_t v88; // w25
  ServantProfileMaster_o *v90; // [xsp+0h] [xbp-B0h]
  ServantCommentMaster_o *v91; // [xsp+8h] [xbp-A8h]
  int32_t v92; // [xsp+14h] [xbp-9Ch]
  _BYTE v93[32]; // [xsp+18h] [xbp-98h] BYREF
  int v94; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v95; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_40FBB88 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, clearWarIdList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Comparison_ServantProfileEntity___ctor__, v6);
    sub_B16FFC(&System_Comparison_ServantProfileEntity__TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentMaster___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__Find__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v17);
    sub_B16FFC(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v18);
    sub_B16FFC(&Method_System_Predicate_ServantCommentEntity___ctor__, v19);
    sub_B16FFC(&System_Predicate_ServantCommentEntity__TypeInfo, v20);
    sub_B16FFC(&ServantProfileEntity_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__, v23);
    sub_B16FFC(&Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__, v24);
    sub_B16FFC(&ServantProfileMaster___c__DisplayClass4_0_TypeInfo, v25);
    sub_B16FFC(&ServantProfileMaster___c_TypeInfo, v26);
    byte_40FBB88 = 1;
  }
  memset(&v95, 0, sizeof(v95));
  v94 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31,
                                                                                                  v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_47;
  v91 = (ServantCommentMaster_o *)MasterData_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !clearWarIdList )
    goto LABEL_47;
  if ( Count >= 1 )
  {
    v40 = 0;
    v41 = 0;
    v90 = this;
    v92 = Count;
    while ( 1 )
    {
      v42 = sub_B170CC(ServantProfileMaster___c__DisplayClass4_0_TypeInfo, v36, v37, v38, v39);
      ServantProfileMaster___c__DisplayClass4_0___ctor((ServantProfileMaster___c__DisplayClass4_0_o *)v42, 0LL);
      v43 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v43 )
        goto LABEL_47;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v43,
               v41,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v42 )
        goto LABEL_47;
      if ( Item
        && (v51 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v51) )
      {
        v52 = (ServantProfileEntity_c *)Item->klass->_2.typeHierarchy[v51 - 1] == ServantProfileEntity_TypeInfo
            ? (System_Int32_array **)Item
            : 0LL;
      }
      else
      {
        v52 = 0LL;
      }
      *(_QWORD *)(v42 + 16) = v52;
      v53 = (BattleServantConfConponent_o *)(v42 + 16);
      sub_B16F98((BattleServantConfConponent_o *)(v42 + 16), v52, v45, v46, v47, v48, v49, v50);
      v58 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                       System_Predicate_ServantCommentEntity__TypeInfo,
                                                                       v54,
                                                                       v55,
                                                                       v56,
                                                                       v57);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v58,
        (Il2CppObject *)v42,
        Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantCommentEntity___ctor__);
      if ( !v33 )
        goto LABEL_47;
      if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
             (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v33,
             (System_Predicate_T__o *)v58,
             (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ServantCommentEntity__Find__) )
      {
        goto LABEL_43;
      }
      if ( !v53->klass )
        goto LABEL_47;
      SvtProfile = ServantProfileMaster__GetSvtProfile(this, (int32_t)v53->klass->_1.name, v41, v38);
      v64 = ServantProfileMaster___c_TypeInfo;
      if ( (BYTE3(ServantProfileMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v64 = ServantProfileMaster___c_TypeInfo;
      }
      static_fields = v64->static_fields;
      _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_1;
      if ( !_9__4_1 )
      {
        if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v64);
          static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        }
        v67 = (Il2CppObject *)static_fields->__9;
        _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                              System_Comparison_ServantProfileEntity__TypeInfo,
                                                                              v59,
                                                                              v60,
                                                                              v61,
                                                                              v62);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__4_1,
          v67,
          Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__,
          (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantProfileEntity___ctor__);
        v68 = ServantProfileMaster___c_TypeInfo->static_fields;
        v68->__9__4_1 = (struct System_Comparison_ServantProfileEntity__o *)_9__4_1;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v68->__9__4_1,
          (System_Int32_array **)_9__4_1,
          v69,
          v70,
          v71,
          v72,
          v73,
          v74);
        this = v90;
      }
      if ( !SvtProfile )
        goto LABEL_47;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)SvtProfile,
        (System_Comparison_T__o *)_9__4_1,
        (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v93,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SvtProfile,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v95 = *(System_Collections_Generic_List_Enumerator_T__o *)v93;
      while ( 1 )
      {
        v75 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v95,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v75 )
          break;
        current = (System_Int32_array **)v95.fields.current;
        if ( ServantProfileMaster__IsEnableCond(
               (ServantProfileMaster_o *)v75,
               (ServantProfileEntity_o *)v95.fields.current,
               clearWarIdList,
               v76) )
        {
          v53->klass = (BattleServantConfConponent_c *)current;
          sub_B16F98(v53, current, v78, v79, v80, v81, v82, v83);
          v84 = 1;
          goto LABEL_33;
        }
      }
      v84 = 0;
LABEL_33:
      *(_DWORD *)&v93[4 * v40 + 24] = 222;
      v85 = ++v94;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v95,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( v85 )
      {
        v86 = v85 - 1;
        if ( *(_DWORD *)&v93[4 * v85 + 20] == 222 )
        {
          --v85;
          v94 = v86;
        }
      }
      if ( !v84 )
        break;
      if ( !v53->klass || !v91 )
        goto LABEL_47;
      Entity = ServantCommentMaster__GetEntity(
                 v91,
                 (int32_t)v53->klass->_1.name,
                 HIDWORD(v53->klass->_1.name),
                 (int32_t)v53->klass->_1.namespaze,
                 0LL);
      v88 = v92;
      if ( Entity )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v33,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      v40 = v85;
LABEL_44:
      if ( ++v41 >= v88 )
        goto LABEL_45;
    }
    v40 = v85;
LABEL_43:
    v88 = v92;
    goto LABEL_44;
  }
LABEL_45:
  if ( !v33 )
LABEL_47:
    sub_B170D4();
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33,
                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantProfileEntity_o *__fastcall ServantProfileMaster__GetEntity(
        ServantProfileMaster_o *this,
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FBB84 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_40FBB84 = 1;
  }
  PK = ServantProfileEntity__CreatePK(
         svtId,
         svtCommentId,
         svtCommentPriority,
         priority,
         *(const MethodInfo **)&priority);
  return (ServantProfileEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_266F7D8 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantProfileEntity_array *__fastcall ServantProfileMaster__GetServantProfileEntities(
        ServantProfileMaster_o *this,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x0
  __int64 v27; // x11
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0

  if ( (byte_40FBB8C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&condType);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v13);
    sub_B16FFC(&ServantProfileEntity_TypeInfo, v14);
    byte_40FBB8C = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantProfileEntity__TypeInfo,
                                                                                                  *(_QWORD *)&condType,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v25 + 8));
    if ( !v26
      || (v27 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1), *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27)
      || (ServantProfileEntity_c *)v26->klass->_2.typeHierarchy[v27 - 1] != ServantProfileEntity_TypeInfo )
    {
      sub_B170D4();
    }
    if ( v26->fields.addCount == condType )
    {
      if ( !v15 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        v26,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantProfileEntity__Add__);
    }
  }
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_28:
    v31 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  if ( !v15 )
LABEL_34:
    sub_B170D4();
  return (ServantProfileEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantProfileEntity__o *__fastcall ServantProfileMaster__GetSvtProfile(
        ServantProfileMaster_o *this,
        int32_t svtId,
        int32_t startIdx,
        const MethodInfo *method)
{
  __int64 v4; // x4
  int32_t v5; // w19
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v17; // x10

  v5 = startIdx;
  if ( (byte_40FBB8A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v11);
    sub_B16FFC(&ServantProfileEntity_TypeInfo, v12);
    byte_40FBB8A = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantProfileEntity__TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&startIdx,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_B170D4();
  while ( v5 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v15 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( v15 )
    {
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v15,
                                                                      v5,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v17 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (ServantProfileEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] == ServantProfileEntity_TypeInfo )
        {
          if ( Item->fields.missionTargetId == svtId )
          {
            if ( !v13 )
              goto LABEL_13;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v13,
              Item,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantProfileEntity__Add__);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v5;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_13;
  }
  return (System_Collections_Generic_List_ServantProfileEntity__o *)v13;
}


bool __fastcall ServantProfileMaster__IsEnableCond(
        ServantProfileMaster_o *this,
        ServantProfileEntity_o *entity,
        System_Int32_array *clearWarIdList,
        const MethodInfo *method)
{
  int32_t condType; // w8
  signed int max_length; // w8
  __int64 v8; // x9
  int32_t svtId; // w20
  int32_t LimitCount; // w0
  int32_t v11; // w8

  if ( (byte_40FBB8B & 1) == 0 )
  {
    sub_B16FFC(&ServantProfileLimitCountManager_TypeInfo, entity);
    byte_40FBB8B = 1;
  }
  if ( !clearWarIdList || !entity )
    sub_B170D4();
  condType = entity->fields.condType;
  if ( condType <= 7 )
  {
    if ( !condType )
      return 1;
    if ( condType != 7 )
      return 0;
  }
  else if ( condType != 103 )
  {
    if ( condType != 21 )
    {
      if ( condType == 16 )
      {
        max_length = clearWarIdList->max_length;
        if ( max_length >= 1 )
        {
          v8 = 0LL;
          while ( entity->fields.condValue != clearWarIdList->m_Items[v8 + 1] )
          {
            if ( (int)++v8 >= max_length )
              return 0;
          }
          return 1;
        }
      }
      return 0;
    }
    return 1;
  }
  svtId = entity->fields.svtId;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  LimitCount = ServantProfileLimitCountManager__GetLimitCount(svtId, (const MethodInfo *)entity);
  v11 = entity->fields.condType;
  if ( v11 != 7 )
  {
    if ( v11 == 103 )
      return LimitCount == entity->fields.condValue;
    return 0;
  }
  return LimitCount >= entity->fields.condValue;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantProfileMaster__TryGetEntity(
        ServantProfileMaster_o *this,
        ServantProfileEntity_o **entity,
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FBB85 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__, entity);
    byte_40FBB85 = 1;
  }
  PK = ServantProfileEntity__CreatePK(
         svtId,
         svtCommentId,
         svtCommentPriority,
         priority,
         *(const MethodInfo **)&svtCommentPriority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__);
}


int32_t __fastcall ServantProfileMaster__getSum(ServantProfileMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_40FBB87 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    byte_40FBB87 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  return System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}


void __fastcall ServantProfileMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7643 & 1) == 0 )
  {
    sub_B16FFC(&ServantProfileMaster___c_TypeInfo, v1);
    byte_40F7643 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantProfileMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantProfileMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ServantProfileMaster___c___ctor(ServantProfileMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantProfileMaster___c___GetChapterProgressEntityList_b__4_1(
        ServantProfileMaster___c_o *this,
        ServantProfileEntity_o *x,
        ServantProfileEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_B170D4();
  return y->fields.priority - x->fields.priority;
}


int32_t __fastcall ServantProfileMaster___c___GetChapterProgressEntity_b__5_0(
        ServantProfileMaster___c_o *this,
        ServantProfileEntity_o *x,
        ServantProfileEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_B170D4();
  return y->fields.priority - x->fields.priority;
}


void __fastcall ServantProfileMaster___c__DisplayClass4_0___ctor(
        ServantProfileMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantProfileMaster___c__DisplayClass4_0___GetChapterProgressEntityList_b__0(
        ServantProfileMaster___c__DisplayClass4_0_o *this,
        ServantCommentEntity_o *e,
        const MethodInfo *method)
{
  struct ServantProfileEntity_o *entity; // x8

  if ( !e || (entity = this->fields.entity) == 0LL )
    sub_B170D4();
  return e->fields.svtId == entity->fields.svtId;
}