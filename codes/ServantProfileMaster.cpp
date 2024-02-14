void __fastcall ServantProfileMaster___ctor(ServantProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216A1C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__, method);
    byte_4216A1C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    3,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__);
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
  DataManager_o *Instance; // x0
  DataManager_o *v21; // x19
  int32_t Count; // w0
  int32_t v23; // w23
  int v24; // w19
  int32_t v25; // w24
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x25
  __int64 v28; // x10
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v31; // x26
  ServantProfileMaster___c_c *v32; // x8
  struct ServantProfileMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x27
  Il2CppObject *v35; // x28
  struct ServantProfileMaster___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  _BOOL8 v43; // x0
  const MethodInfo *v44; // x3
  Il2CppObject *current; // x26
  int v46; // w27
  int v47; // w8
  ServantCommentEntity_o *result; // x0
  ServantCommentMaster_o *v49; // [xsp+8h] [xbp-A8h]
  int32_t v50; // [xsp+14h] [xbp-9Ch]
  _BYTE v51[32]; // [xsp+18h] [xbp-98h] BYREF
  int v52; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4216A1F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, clearWarIdList);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_System_Comparison_ServantProfileEntity___ctor__, v8);
    sub_B0D8A4(&System_Comparison_ServantProfileEntity__TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCommentMaster___, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v15);
    sub_B0D8A4(&ServantProfileEntity_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__, v18);
    sub_B0D8A4(&ServantProfileMaster___c_TypeInfo, v19);
    byte_4216A1F = 1;
  }
  memset(&v53, 0, sizeof(v53));
  v52 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_36;
  v21 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v49 = (ServantCommentMaster_o *)v21;
    v23 = Count;
    v24 = 0;
    v25 = 0;
    v50 = svtId;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v25,
                                    (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v27 = (Il2CppObject *)Instance;
      v28 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (ServantProfileEntity_c *)Instance->klass->_2.typeHierarchy[v28 - 1] != ServantProfileEntity_TypeInfo )
      {
        break;
      }
      Instance = (DataManager_o *)ServantProfileMaster__GetSvtProfile(this, Instance->fields.m_CachedPtr, v25, v26);
      v31 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
      v32 = ServantProfileMaster___c_TypeInfo;
      if ( (BYTE3(ServantProfileMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v32 = ServantProfileMaster___c_TypeInfo;
      }
      static_fields = v32->static_fields;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v32);
          static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        }
        v35 = (Il2CppObject *)static_fields->__9;
        _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                              System_Comparison_ServantProfileEntity__TypeInfo,
                                                                              v29,
                                                                              v30);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__5_0,
          v35,
          Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__,
          (const MethodInfo_2412E90 *)Method_System_Comparison_ServantProfileEntity___ctor__);
        v36 = ServantProfileMaster___c_TypeInfo->static_fields;
        v36->__9__5_0 = (struct System_Comparison_ServantProfileEntity__o *)_9__5_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v36->__9__5_0,
          (System_Int32_array **)_9__5_0,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
        svtId = v50;
      }
      if ( !v31 )
        break;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v31,
        (System_Comparison_T__o *)_9__5_0,
        (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v51,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v31,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v53 = *(System_Collections_Generic_List_Enumerator_T__o *)v51;
      while ( 1 )
      {
        v43 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v53,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v43 )
          break;
        current = v53.fields.current;
        if ( ServantProfileMaster__IsEnableCond(
               (ServantProfileMaster_o *)v43,
               (ServantProfileEntity_o *)v53.fields.current,
               clearWarIdList,
               v44) )
        {
          v46 = 1;
          goto LABEL_25;
        }
      }
      v46 = 0;
      current = v27;
LABEL_25:
      *(_DWORD *)&v51[4 * v24 + 24] = 163;
      v24 = ++v52;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v53,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( v24 )
      {
        v47 = v24 - 1;
        if ( *(_DWORD *)&v51[4 * v24 + 20] == 163 )
        {
          --v24;
          v52 = v47;
        }
      }
      if ( v46 )
      {
        if ( !current )
          break;
        if ( LODWORD(current[1].klass) == svtId )
        {
          Instance = (DataManager_o *)v49;
          if ( !v49 )
            break;
          result = ServantCommentMaster__GetEntity(
                     v49,
                     svtId,
                     HIDWORD(current[1].klass),
                     (int32_t)current[1].monitor,
                     0LL);
          if ( result )
            return result;
        }
      }
      if ( ++v25 >= v23 )
        return 0LL;
    }
LABEL_36:
    sub_B0D97C(Instance);
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
  DataManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  int v34; // w23
  int32_t v35; // w24
  __int64 v36; // x26
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x10
  System_Int32_array **v44; // x1
  BattleServantConfConponent_o *v45; // x25
  __int64 v46; // x1
  __int64 v47; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v48; // x27
  const MethodInfo *v49; // x3
  __int64 v50; // x1
  __int64 v51; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v52; // x26
  ServantProfileMaster___c_c *v53; // x8
  struct ServantProfileMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_1; // x27
  Il2CppObject *v56; // x28
  struct ServantProfileMaster___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  _BOOL8 v64; // x0
  const MethodInfo *v65; // x3
  System_Int32_array **current; // x26
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  int v73; // w27
  int v74; // w20
  int v75; // w8
  int32_t v76; // w25
  ServantProfileMaster_o *v78; // [xsp+0h] [xbp-B0h]
  ServantCommentMaster_o *v79; // [xsp+8h] [xbp-A8h]
  int32_t v80; // [xsp+14h] [xbp-9Ch]
  _BYTE v81[32]; // [xsp+18h] [xbp-98h] BYREF
  int v82; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v83; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4216A1E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, clearWarIdList);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Comparison_ServantProfileEntity___ctor__, v6);
    sub_B0D8A4(&System_Comparison_ServantProfileEntity__TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCommentMaster___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity__Find__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v17);
    sub_B0D8A4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v18);
    sub_B0D8A4(&Method_System_Predicate_ServantCommentEntity___ctor__, v19);
    sub_B0D8A4(&System_Predicate_ServantCommentEntity__TypeInfo, v20);
    sub_B0D8A4(&ServantProfileEntity_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B0D8A4(&Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__, v23);
    sub_B0D8A4(&Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__, v24);
    sub_B0D8A4(&ServantProfileMaster___c__DisplayClass4_0_TypeInfo, v25);
    sub_B0D8A4(&ServantProfileMaster___c_TypeInfo, v26);
    byte_4216A1E = 1;
  }
  memset(&v83, 0, sizeof(v83));
  v82 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                                                                  v29,
                                                                                                  v30);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_47;
  v79 = (ServantCommentMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !clearWarIdList )
    goto LABEL_47;
  if ( (int)Instance >= 1 )
  {
    v34 = 0;
    v35 = 0;
    v78 = this;
    v80 = (int)Instance;
    while ( 1 )
    {
      v36 = sub_B0D974(ServantProfileMaster___c__DisplayClass4_0_TypeInfo, v32, v33);
      ServantProfileMaster___c__DisplayClass4_0___ctor((ServantProfileMaster___c__DisplayClass4_0_o *)v36, 0LL);
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v35,
                                    (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v36 )
        goto LABEL_47;
      if ( Instance
        && (v43 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v43) )
      {
        v44 = (ServantProfileEntity_c *)Instance->klass->_2.typeHierarchy[v43 - 1] == ServantProfileEntity_TypeInfo
            ? (System_Int32_array **)Instance
            : 0LL;
      }
      else
      {
        v44 = 0LL;
      }
      *(_QWORD *)(v36 + 16) = v44;
      v45 = (BattleServantConfConponent_o *)(v36 + 16);
      sub_B0D840((BattleServantConfConponent_o *)(v36 + 16), v44, v37, v38, v39, v40, v41, v42);
      v48 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                       System_Predicate_ServantCommentEntity__TypeInfo,
                                                                       v46,
                                                                       v47);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v48,
        (Il2CppObject *)v36,
        Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_ServantCommentEntity___ctor__);
      if ( !v31 )
        goto LABEL_47;
      Instance = (DataManager_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v31,
                                    (System_Predicate_T__o *)v48,
                                    (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ServantCommentEntity__Find__);
      if ( Instance )
        goto LABEL_43;
      if ( !v45->klass )
        goto LABEL_47;
      Instance = (DataManager_o *)ServantProfileMaster__GetSvtProfile(this, (int32_t)v45->klass->_1.name, v35, v49);
      v52 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
      v53 = ServantProfileMaster___c_TypeInfo;
      if ( (BYTE3(ServantProfileMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v53 = ServantProfileMaster___c_TypeInfo;
      }
      static_fields = v53->static_fields;
      _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_1;
      if ( !_9__4_1 )
      {
        if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v53);
          static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        }
        v56 = (Il2CppObject *)static_fields->__9;
        _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                              System_Comparison_ServantProfileEntity__TypeInfo,
                                                                              v50,
                                                                              v51);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__4_1,
          v56,
          Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__,
          (const MethodInfo_2412E90 *)Method_System_Comparison_ServantProfileEntity___ctor__);
        v57 = ServantProfileMaster___c_TypeInfo->static_fields;
        v57->__9__4_1 = (struct System_Comparison_ServantProfileEntity__o *)_9__4_1;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v57->__9__4_1,
          (System_Int32_array **)_9__4_1,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63);
        this = v78;
      }
      if ( !v52 )
        goto LABEL_47;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v52,
        (System_Comparison_T__o *)_9__4_1,
        (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v81,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v52,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v83 = *(System_Collections_Generic_List_Enumerator_T__o *)v81;
      while ( 1 )
      {
        v64 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v83,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v64 )
          break;
        current = (System_Int32_array **)v83.fields.current;
        if ( ServantProfileMaster__IsEnableCond(
               (ServantProfileMaster_o *)v64,
               (ServantProfileEntity_o *)v83.fields.current,
               clearWarIdList,
               v65) )
        {
          v45->klass = (BattleServantConfConponent_c *)current;
          sub_B0D840(v45, current, v67, v68, v69, v70, v71, v72);
          v73 = 1;
          goto LABEL_33;
        }
      }
      v73 = 0;
LABEL_33:
      *(_DWORD *)&v81[4 * v34 + 24] = 222;
      v74 = ++v82;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v83,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( v74 )
      {
        v75 = v74 - 1;
        if ( *(_DWORD *)&v81[4 * v74 + 20] == 222 )
        {
          --v74;
          v82 = v75;
        }
      }
      if ( !v73 )
        break;
      if ( !v45->klass )
        goto LABEL_47;
      Instance = (DataManager_o *)v79;
      if ( !v79 )
        goto LABEL_47;
      Instance = (DataManager_o *)ServantCommentMaster__GetEntity(
                                    v79,
                                    (int32_t)v45->klass->_1.name,
                                    HIDWORD(v45->klass->_1.name),
                                    (int32_t)v45->klass->_1.namespaze,
                                    0LL);
      v76 = v80;
      if ( Instance )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v31,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      v34 = v74;
LABEL_44:
      if ( ++v35 >= v76 )
        goto LABEL_45;
    }
    v34 = v74;
LABEL_43:
    v76 = v80;
    goto LABEL_44;
  }
LABEL_45:
  if ( !v31 )
LABEL_47:
    sub_B0D97C(Instance);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v31,
                                         (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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

  if ( (byte_4216A1A & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4216A1A = 1;
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
                                     (const MethodInfo_266A024 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantProfileEntity_array *__fastcall ServantProfileMaster__GetServantProfileEntities(
        ServantProfileMaster_o *this,
        int32_t condType,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x0
  __int64 v25; // x11
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0

  if ( (byte_4216A22 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&condType);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v11);
    sub_B0D8A4(&ServantProfileEntity_TypeInfo, v12);
    byte_4216A22 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantProfileEntity__TypeInfo,
                                                                                                  *(_QWORD *)&condType,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v23 + 8));
    if ( !v24
      || (v25 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1), *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v25)
      || (ServantProfileEntity_c *)v24->klass->_2.typeHierarchy[v25 - 1] != ServantProfileEntity_TypeInfo )
    {
      sub_B0D97C(v24);
    }
    if ( v24->fields.addCount == condType )
    {
      if ( !v13 )
        sub_B0D97C(v24);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v13,
        v24,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantProfileEntity__Add__);
    }
  }
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_28:
    v29 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v29 + 8));
  if ( !v13 )
LABEL_34:
    sub_B0D97C(list);
  return (ServantProfileEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                         (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantProfileEntity__o *__fastcall ServantProfileMaster__GetSvtProfile(
        ServantProfileMaster_o *this,
        int32_t svtId,
        int32_t startIdx,
        const MethodInfo *method)
{
  int32_t v4; // w19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v14; // x10

  v4 = startIdx;
  if ( (byte_4216A20 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v10);
    sub_B0D8A4(&ServantProfileEntity_TypeInfo, v11);
    byte_4216A20 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantProfileEntity__TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&startIdx);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_B0D97C(list);
  while ( v4 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v4,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v14 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (ServantProfileEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] == ServantProfileEntity_TypeInfo )
        {
          if ( LODWORD(list->fields.items) == svtId )
          {
            if ( !v12 )
              goto LABEL_13;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantProfileEntity__Add__);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v4;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_13;
  }
  return (System_Collections_Generic_List_ServantProfileEntity__o *)v12;
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

  if ( (byte_4216A21 & 1) == 0 )
  {
    this = (ServantProfileMaster_o *)sub_B0D8A4(&ServantProfileLimitCountManager_TypeInfo, entity);
    byte_4216A21 = 1;
  }
  if ( !clearWarIdList || !entity )
    sub_B0D97C(this);
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

  if ( (byte_4216A1B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__, entity);
    byte_4216A1B = 1;
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
           (const MethodInfo_266A07C *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__);
}


int32_t __fastcall ServantProfileMaster__getSum(ServantProfileMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_4216A1D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    byte_4216A1D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B0D97C(0LL);
  return System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}


void __fastcall ServantProfileMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantProfileMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4212246 & 1) == 0 )
  {
    sub_B0D8A4(&ServantProfileMaster___c_TypeInfo, v1);
    byte_4212246 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantProfileMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantProfileMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return y->fields.priority - x->fields.priority;
}


int32_t __fastcall ServantProfileMaster___c___GetChapterProgressEntity_b__5_0(
        ServantProfileMaster___c_o *this,
        ServantProfileEntity_o *x,
        ServantProfileEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return e->fields.svtId == entity->fields.svtId;
}