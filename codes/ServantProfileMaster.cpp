void __fastcall ServantProfileMaster___ctor(ServantProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B20DD & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__);
    byte_42B20DD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    3,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__);
}


ServantCommentEntity_o *__fastcall ServantProfileMaster__GetChapterProgressEntity(
        ServantProfileMaster_o *this,
        System_Int32_array *clearWarIdList,
        int32_t svtId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataManager_o *v9; // x19
  int32_t Count; // w0
  int32_t v11; // w23
  int v12; // w19
  int32_t v13; // w24
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x25
  __int64 v16; // x10
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v17; // x26
  ServantProfileMaster___c_c *v18; // x8
  struct ServantProfileMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x27
  Il2CppObject *v21; // x28
  struct ServantProfileMaster___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  _BOOL8 v29; // x0
  const MethodInfo *v30; // x3
  Il2CppObject *current; // x26
  int v32; // w27
  int v33; // w8
  ServantCommentEntity_o *result; // x0
  ServantCommentMaster_o *v35; // [xsp+8h] [xbp-A8h]
  int32_t v36; // [xsp+14h] [xbp-9Ch]
  _BYTE v37[32]; // [xsp+18h] [xbp-98h] BYREF
  int v38; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42B20E0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_ServantProfileEntity___ctor__);
    sub_B52984(&System_Comparison_ServantProfileEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
    sub_B52984(&ServantProfileEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__);
    sub_B52984(&ServantProfileMaster___c_TypeInfo);
    byte_42B20E0 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v38 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_36;
  v9 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v35 = (ServantCommentMaster_o *)v9;
    v11 = Count;
    v12 = 0;
    v13 = 0;
    v36 = svtId;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v13,
                                    (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v15 = (Il2CppObject *)Instance;
      v16 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (ServantProfileEntity_c *)Instance->klass->_2.typeHierarchy[v16 - 1] != ServantProfileEntity_TypeInfo )
      {
        break;
      }
      Instance = (DataManager_o *)ServantProfileMaster__GetSvtProfile(this, Instance->fields.m_CachedPtr, v13, v14);
      v17 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
      v18 = ServantProfileMaster___c_TypeInfo;
      if ( (BYTE3(ServantProfileMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v18 = ServantProfileMaster___c_TypeInfo;
      }
      static_fields = v18->static_fields;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        }
        v21 = (Il2CppObject *)static_fields->__9;
        _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantProfileEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__5_0,
          v21,
          Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__,
          (const MethodInfo_2483370 *)Method_System_Comparison_ServantProfileEntity___ctor__);
        v22 = ServantProfileMaster___c_TypeInfo->static_fields;
        v22->__9__5_0 = (struct System_Comparison_ServantProfileEntity__o *)_9__5_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v22->__9__5_0,
          (System_Int32_array **)_9__5_0,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        svtId = v36;
      }
      if ( !v17 )
        break;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v17,
        (System_Comparison_T__o *)_9__5_0,
        (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v37,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v17,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v39 = *(System_Collections_Generic_List_Enumerator_T__o *)v37;
      while ( 1 )
      {
        v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v39,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v29 )
          break;
        current = v39.fields.current;
        if ( ServantProfileMaster__IsEnableCond(
               (ServantProfileMaster_o *)v29,
               (ServantProfileEntity_o *)v39.fields.current,
               clearWarIdList,
               v30) )
        {
          v32 = 1;
          goto LABEL_25;
        }
      }
      v32 = 0;
      current = v15;
LABEL_25:
      *(_DWORD *)&v37[4 * v12 + 24] = 163;
      v12 = ++v38;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v39,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( v12 )
      {
        v33 = v12 - 1;
        if ( *(_DWORD *)&v37[4 * v12 + 20] == 163 )
        {
          --v12;
          v38 = v33;
        }
      }
      if ( v32 )
      {
        if ( !current )
          break;
        if ( LODWORD(current[1].klass) == svtId )
        {
          Instance = (DataManager_o *)v35;
          if ( !v35 )
            break;
          result = ServantCommentMaster__GetEntity(
                     v35,
                     svtId,
                     HIDWORD(current[1].klass),
                     (int32_t)current[1].monitor,
                     0LL);
          if ( result )
            return result;
        }
      }
      if ( ++v13 >= v11 )
        return 0LL;
    }
LABEL_36:
    sub_B52A5C(Instance, v8);
  }
  return 0LL;
}


ServantCommentEntity_array *__fastcall ServantProfileMaster__GetChapterProgressEntityList(
        ServantProfileMaster_o *this,
        System_Int32_array *clearWarIdList,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  int v9; // w23
  int32_t v10; // w24
  __int64 v11; // x26
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x10
  System_Int32_array **v19; // x1
  BattleServantConfConponent_o *v20; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x27
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v23; // x26
  ServantProfileMaster___c_c *v24; // x8
  struct ServantProfileMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_1; // x27
  Il2CppObject *v27; // x28
  struct ServantProfileMaster___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  _BOOL8 v35; // x0
  const MethodInfo *v36; // x3
  System_Int32_array **current; // x26
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int v44; // w27
  int v45; // w20
  int v46; // w8
  int32_t v47; // w25
  ServantProfileMaster_o *v49; // [xsp+0h] [xbp-B0h]
  ServantCommentMaster_o *v50; // [xsp+8h] [xbp-A8h]
  int32_t v51; // [xsp+14h] [xbp-9Ch]
  _BYTE v52[32]; // [xsp+18h] [xbp-98h] BYREF
  int v53; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42B20DF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_ServantProfileEntity___ctor__);
    sub_B52984(&System_Comparison_ServantProfileEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCommentEntity__Find__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_B52984(&Method_System_Predicate_ServantCommentEntity___ctor__);
    sub_B52984(&System_Predicate_ServantCommentEntity__TypeInfo);
    sub_B52984(&ServantProfileEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__);
    sub_B52984(&Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__);
    sub_B52984(&ServantProfileMaster___c__DisplayClass4_0_TypeInfo);
    sub_B52984(&ServantProfileMaster___c_TypeInfo);
    byte_42B20DF = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v53 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_47;
  v50 = (ServantCommentMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !clearWarIdList )
    goto LABEL_47;
  if ( (int)Instance >= 1 )
  {
    v9 = 0;
    v10 = 0;
    v49 = this;
    v51 = (int)Instance;
    while ( 1 )
    {
      v11 = sub_B52A54(ServantProfileMaster___c__DisplayClass4_0_TypeInfo);
      ServantProfileMaster___c__DisplayClass4_0___ctor((ServantProfileMaster___c__DisplayClass4_0_o *)v11, 0LL);
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v10,
                                    (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v11 )
        goto LABEL_47;
      if ( Instance
        && (v18 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v18) )
      {
        v19 = (ServantProfileEntity_c *)Instance->klass->_2.typeHierarchy[v18 - 1] == ServantProfileEntity_TypeInfo
            ? (System_Int32_array **)Instance
            : 0LL;
      }
      else
      {
        v19 = 0LL;
      }
      *(_QWORD *)(v11 + 16) = v19;
      v20 = (BattleServantConfConponent_o *)(v11 + 16);
      sub_B52920((BattleServantConfConponent_o *)(v11 + 16), v19, v12, v13, v14, v15, v16, v17);
      v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_ServantCommentEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v21,
        (Il2CppObject *)v11,
        Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__,
        (const MethodInfo_28D2DBC *)Method_System_Predicate_ServantCommentEntity___ctor__);
      if ( !v8 )
        goto LABEL_47;
      Instance = (DataManager_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v8,
                                    (System_Predicate_T__o *)v21,
                                    (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_ServantCommentEntity__Find__);
      if ( Instance )
        goto LABEL_43;
      if ( !v20->klass )
        goto LABEL_47;
      Instance = (DataManager_o *)ServantProfileMaster__GetSvtProfile(this, (int32_t)v20->klass->_1.name, v10, v22);
      v23 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
      v24 = ServantProfileMaster___c_TypeInfo;
      if ( (BYTE3(ServantProfileMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v24 = ServantProfileMaster___c_TypeInfo;
      }
      static_fields = v24->static_fields;
      _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_1;
      if ( !_9__4_1 )
      {
        if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        }
        v27 = (Il2CppObject *)static_fields->__9;
        _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantProfileEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__4_1,
          v27,
          Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__,
          (const MethodInfo_2483370 *)Method_System_Comparison_ServantProfileEntity___ctor__);
        v28 = ServantProfileMaster___c_TypeInfo->static_fields;
        v28->__9__4_1 = (struct System_Comparison_ServantProfileEntity__o *)_9__4_1;
        sub_B52920(
          (BattleServantConfConponent_o *)&v28->__9__4_1,
          (System_Int32_array **)_9__4_1,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        this = v49;
      }
      if ( !v23 )
        goto LABEL_47;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v23,
        (System_Comparison_T__o *)_9__4_1,
        (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v52,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v23,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v54 = *(System_Collections_Generic_List_Enumerator_T__o *)v52;
      while ( 1 )
      {
        v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v54,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v35 )
          break;
        current = (System_Int32_array **)v54.fields.current;
        if ( ServantProfileMaster__IsEnableCond(
               (ServantProfileMaster_o *)v35,
               (ServantProfileEntity_o *)v54.fields.current,
               clearWarIdList,
               v36) )
        {
          v20->klass = (BattleServantConfConponent_c *)current;
          sub_B52920(v20, current, v38, v39, v40, v41, v42, v43);
          v44 = 1;
          goto LABEL_33;
        }
      }
      v44 = 0;
LABEL_33:
      *(_DWORD *)&v52[4 * v9 + 24] = 222;
      v45 = ++v53;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v54,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( v45 )
      {
        v46 = v45 - 1;
        if ( *(_DWORD *)&v52[4 * v45 + 20] == 222 )
        {
          --v45;
          v53 = v46;
        }
      }
      if ( !v44 )
        break;
      if ( !v20->klass )
        goto LABEL_47;
      Instance = (DataManager_o *)v50;
      if ( !v50 )
        goto LABEL_47;
      Instance = (DataManager_o *)ServantCommentMaster__GetEntity(
                                    v50,
                                    (int32_t)v20->klass->_1.name,
                                    HIDWORD(v20->klass->_1.name),
                                    (int32_t)v20->klass->_1.namespaze,
                                    0LL);
      v47 = v51;
      if ( Instance )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      v9 = v45;
LABEL_44:
      if ( ++v10 >= v47 )
        goto LABEL_45;
    }
    v9 = v45;
LABEL_43:
    v47 = v51;
    goto LABEL_44;
  }
LABEL_45:
  if ( !v8 )
LABEL_47:
    sub_B52A5C(Instance, v6);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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

  if ( (byte_42B20DB & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__);
    byte_42B20DB = 1;
  }
  PK = ServantProfileEntity__CreatePK(
         svtId,
         svtCommentId,
         svtCommentPriority,
         priority,
         *(const MethodInfo **)&priority);
  return (ServantProfileEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__);
}


ServantProfileEntity_array *__fastcall ServantProfileMaster__GetServantProfileEntities(
        ServantProfileMaster_o *this,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x11
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0

  if ( (byte_42B20E3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
    sub_B52984(&ServantProfileEntity_TypeInfo);
    byte_42B20E3 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    if ( !v20
      || (v22 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1), *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22)
      || (ServantProfileEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] != ServantProfileEntity_TypeInfo )
    {
      sub_B52A5C(v20, v21);
    }
    if ( v20->fields.addCount == condType )
    {
      if ( !v5 )
        sub_B52A5C(v20, v21);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v20,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantProfileEntity__Add__);
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_28:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v26 + 8));
  if ( !v5 )
LABEL_34:
    sub_B52A5C(list, v6);
  return (ServantProfileEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__);
}


System_Collections_Generic_List_ServantProfileEntity__o *__fastcall ServantProfileMaster__GetSvtProfile(
        ServantProfileMaster_o *this,
        int32_t svtId,
        int32_t startIdx,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x10

  if ( (byte_42B20E1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
    sub_B52984(&ServantProfileEntity_TypeInfo);
    byte_42B20E1 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_B52A5C(list, v8);
  while ( startIdx < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                       list,
                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           startIdx,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = list;
        v10 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (ServantProfileEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == ServantProfileEntity_TypeInfo )
        {
          if ( LODWORD(list->fields.items) == svtId )
          {
            if ( !v7 )
              goto LABEL_13;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v7,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantProfileEntity__Add__);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++startIdx;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_13;
  }
  return (System_Collections_Generic_List_ServantProfileEntity__o *)v7;
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

  if ( (byte_42B20E2 & 1) == 0 )
  {
    this = (ServantProfileMaster_o *)sub_B52984(&ServantProfileLimitCountManager_TypeInfo);
    byte_42B20E2 = 1;
  }
  if ( !clearWarIdList || !entity )
    sub_B52A5C(this, entity);
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

  if ( (byte_42B20DC & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__);
    byte_42B20DC = 1;
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
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__);
}


int32_t __fastcall ServantProfileMaster__getSum(ServantProfileMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_42B20DE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    byte_42B20DE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, method);
  return System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}


void __fastcall ServantProfileMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantProfileMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD360 & 1) == 0 )
  {
    sub_B52984(&ServantProfileMaster___c_TypeInfo);
    byte_42AD360 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantProfileMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantProfileMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, x);
  return y->fields.priority - x->fields.priority;
}


int32_t __fastcall ServantProfileMaster___c___GetChapterProgressEntity_b__5_0(
        ServantProfileMaster___c_o *this,
        ServantProfileEntity_o *x,
        ServantProfileEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, e);
  return e->fields.svtId == entity->fields.svtId;
}