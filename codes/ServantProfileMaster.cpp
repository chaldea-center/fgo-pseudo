void __fastcall ServantProfileMaster___ctor(ServantProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189BCA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__, method);
    byte_4189BCA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    3,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__);
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
  __int64 v21; // x1
  DataManager_o *v22; // x19
  int32_t Count; // w0
  int32_t v24; // w23
  int v25; // w19
  int32_t v26; // w24
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x25
  __int64 v29; // x10
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v30; // x26
  ServantProfileMaster___c_c *v31; // x8
  struct ServantProfileMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x27
  Il2CppObject *v34; // x28
  struct ServantProfileMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  _BOOL8 v42; // x0
  const MethodInfo *v43; // x3
  Il2CppObject *current; // x26
  int v45; // w27
  int v46; // w8
  ServantCommentEntity_o *result; // x0
  ServantCommentMaster_o *v48; // [xsp+8h] [xbp-A8h]
  int32_t v49; // [xsp+14h] [xbp-9Ch]
  _BYTE v50[32]; // [xsp+18h] [xbp-98h] BYREF
  int v51; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4189BCD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, clearWarIdList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Comparison_ServantProfileEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_ServantProfileEntity__TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentMaster___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v15);
    sub_B2C35C(&ServantProfileEntity_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__, v18);
    sub_B2C35C(&ServantProfileMaster___c_TypeInfo, v19);
    byte_4189BCD = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v51 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_36;
  v22 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v48 = (ServantCommentMaster_o *)v22;
    v24 = Count;
    v25 = 0;
    v26 = 0;
    v49 = svtId;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v26,
                                    (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v28 = (Il2CppObject *)Instance;
      v29 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (ServantProfileEntity_c *)Instance->klass->_2.typeHierarchy[v29 - 1] != ServantProfileEntity_TypeInfo )
      {
        break;
      }
      Instance = (DataManager_o *)ServantProfileMaster__GetSvtProfile(this, Instance->fields.m_CachedPtr, v26, v27);
      v30 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
      v31 = ServantProfileMaster___c_TypeInfo;
      if ( (BYTE3(ServantProfileMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v31 = ServantProfileMaster___c_TypeInfo;
      }
      static_fields = v31->static_fields;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        }
        v34 = (Il2CppObject *)static_fields->__9;
        _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantProfileEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__5_0,
          v34,
          Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__,
          (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantProfileEntity___ctor__);
        v35 = ServantProfileMaster___c_TypeInfo->static_fields;
        v35->__9__5_0 = (struct System_Comparison_ServantProfileEntity__o *)_9__5_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v35->__9__5_0,
          (System_Int32_array **)_9__5_0,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
        svtId = v49;
      }
      if ( !v30 )
        break;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v30,
        (System_Comparison_T__o *)_9__5_0,
        (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v50,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v30,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v52 = *(System_Collections_Generic_List_Enumerator_T__o *)v50;
      while ( 1 )
      {
        v42 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v52,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v42 )
          break;
        current = v52.fields.current;
        if ( ServantProfileMaster__IsEnableCond(
               (ServantProfileMaster_o *)v42,
               (ServantProfileEntity_o *)v52.fields.current,
               clearWarIdList,
               v43) )
        {
          v45 = 1;
          goto LABEL_25;
        }
      }
      v45 = 0;
      current = v28;
LABEL_25:
      *(_DWORD *)&v50[4 * v25 + 24] = 163;
      v25 = ++v51;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v52,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( v25 )
      {
        v46 = v25 - 1;
        if ( *(_DWORD *)&v50[4 * v25 + 20] == 163 )
        {
          --v25;
          v51 = v46;
        }
      }
      if ( v45 )
      {
        if ( !current )
          break;
        if ( LODWORD(current[1].klass) == svtId )
        {
          Instance = (DataManager_o *)v48;
          if ( !v48 )
            break;
          result = ServantCommentMaster__GetEntity(
                     v48,
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
    sub_B2C434(Instance, v21);
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
  __int64 v28; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x21
  int v31; // w23
  int32_t v32; // w24
  __int64 v33; // x26
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x10
  System_Int32_array **v41; // x1
  BattleServantConfConponent_o *v42; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v43; // x27
  const MethodInfo *v44; // x3
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v45; // x26
  ServantProfileMaster___c_c *v46; // x8
  struct ServantProfileMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_1; // x27
  Il2CppObject *v49; // x28
  struct ServantProfileMaster___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  _BOOL8 v57; // x0
  const MethodInfo *v58; // x3
  System_Int32_array **current; // x26
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  int v66; // w27
  int v67; // w20
  int v68; // w8
  int32_t v69; // w25
  ServantProfileMaster_o *v71; // [xsp+0h] [xbp-B0h]
  ServantCommentMaster_o *v72; // [xsp+8h] [xbp-A8h]
  int32_t v73; // [xsp+14h] [xbp-9Ch]
  _BYTE v74[32]; // [xsp+18h] [xbp-98h] BYREF
  int v75; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4189BCC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, clearWarIdList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_ServantProfileEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_ServantProfileEntity__TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentMaster___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__Find__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v17);
    sub_B2C35C(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v18);
    sub_B2C35C(&Method_System_Predicate_ServantCommentEntity___ctor__, v19);
    sub_B2C35C(&System_Predicate_ServantCommentEntity__TypeInfo, v20);
    sub_B2C35C(&ServantProfileEntity_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B2C35C(&Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__, v23);
    sub_B2C35C(&Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__, v24);
    sub_B2C35C(&ServantProfileMaster___c__DisplayClass4_0_TypeInfo, v25);
    sub_B2C35C(&ServantProfileMaster___c_TypeInfo, v26);
    byte_4189BCC = 1;
  }
  memset(&v76, 0, sizeof(v76));
  v75 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_47;
  v72 = (ServantCommentMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !clearWarIdList )
    goto LABEL_47;
  if ( (int)Instance >= 1 )
  {
    v31 = 0;
    v32 = 0;
    v71 = this;
    v73 = (int)Instance;
    while ( 1 )
    {
      v33 = sub_B2C42C(ServantProfileMaster___c__DisplayClass4_0_TypeInfo);
      ServantProfileMaster___c__DisplayClass4_0___ctor((ServantProfileMaster___c__DisplayClass4_0_o *)v33, 0LL);
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v32,
                                    (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v33 )
        goto LABEL_47;
      if ( Instance
        && (v40 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v40) )
      {
        v41 = (ServantProfileEntity_c *)Instance->klass->_2.typeHierarchy[v40 - 1] == ServantProfileEntity_TypeInfo
            ? (System_Int32_array **)Instance
            : 0LL;
      }
      else
      {
        v41 = 0LL;
      }
      *(_QWORD *)(v33 + 16) = v41;
      v42 = (BattleServantConfConponent_o *)(v33 + 16);
      sub_B2C2F8((BattleServantConfConponent_o *)(v33 + 16), v41, v34, v35, v36, v37, v38, v39);
      v43 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantCommentEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v43,
        (Il2CppObject *)v33,
        Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantCommentEntity___ctor__);
      if ( !v30 )
        goto LABEL_47;
      Instance = (DataManager_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v30,
                                    (System_Predicate_T__o *)v43,
                                    (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantCommentEntity__Find__);
      if ( Instance )
        goto LABEL_43;
      if ( !v42->klass )
        goto LABEL_47;
      Instance = (DataManager_o *)ServantProfileMaster__GetSvtProfile(this, (int32_t)v42->klass->_1.name, v32, v44);
      v45 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
      v46 = ServantProfileMaster___c_TypeInfo;
      if ( (BYTE3(ServantProfileMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v46 = ServantProfileMaster___c_TypeInfo;
      }
      static_fields = v46->static_fields;
      _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_1;
      if ( !_9__4_1 )
      {
        if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v46);
          static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        }
        v49 = (Il2CppObject *)static_fields->__9;
        _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantProfileEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__4_1,
          v49,
          Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__,
          (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantProfileEntity___ctor__);
        v50 = ServantProfileMaster___c_TypeInfo->static_fields;
        v50->__9__4_1 = (struct System_Comparison_ServantProfileEntity__o *)_9__4_1;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v50->__9__4_1,
          (System_Int32_array **)_9__4_1,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
        this = v71;
      }
      if ( !v45 )
        goto LABEL_47;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v45,
        (System_Comparison_T__o *)_9__4_1,
        (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v74,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v45,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v76 = *(System_Collections_Generic_List_Enumerator_T__o *)v74;
      while ( 1 )
      {
        v57 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v76,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v57 )
          break;
        current = (System_Int32_array **)v76.fields.current;
        if ( ServantProfileMaster__IsEnableCond(
               (ServantProfileMaster_o *)v57,
               (ServantProfileEntity_o *)v76.fields.current,
               clearWarIdList,
               v58) )
        {
          v42->klass = (BattleServantConfConponent_c *)current;
          sub_B2C2F8(v42, current, v60, v61, v62, v63, v64, v65);
          v66 = 1;
          goto LABEL_33;
        }
      }
      v66 = 0;
LABEL_33:
      *(_DWORD *)&v74[4 * v31 + 24] = 222;
      v67 = ++v75;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v76,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( v67 )
      {
        v68 = v67 - 1;
        if ( *(_DWORD *)&v74[4 * v67 + 20] == 222 )
        {
          --v67;
          v75 = v68;
        }
      }
      if ( !v66 )
        break;
      if ( !v42->klass )
        goto LABEL_47;
      Instance = (DataManager_o *)v72;
      if ( !v72 )
        goto LABEL_47;
      Instance = (DataManager_o *)ServantCommentMaster__GetEntity(
                                    v72,
                                    (int32_t)v42->klass->_1.name,
                                    HIDWORD(v42->klass->_1.name),
                                    (int32_t)v42->klass->_1.namespaze,
                                    0LL);
      v69 = v73;
      if ( Instance )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v30,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      v31 = v67;
LABEL_44:
      if ( ++v32 >= v69 )
        goto LABEL_45;
    }
    v31 = v67;
LABEL_43:
    v69 = v73;
    goto LABEL_44;
  }
LABEL_45:
  if ( !v30 )
LABEL_47:
    sub_B2C434(Instance, v28);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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

  if ( (byte_4189BC8 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4189BC8 = 1;
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
                                     (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__);
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
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v16; // x1
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x11
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_4189BD0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&condType);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v11);
    sub_B2C35C(&ServantProfileEntity_TypeInfo, v12);
    byte_4189BD0 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v17);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_16:
      v27 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
    }
    v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v27 + 8));
    if ( !v28
      || (v30 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1), *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v30)
      || (ServantProfileEntity_c *)v28->klass->_2.typeHierarchy[v30 - 1] != ServantProfileEntity_TypeInfo )
    {
      sub_B2C434(v28, v29);
    }
    if ( v28->fields.addCount == condType )
    {
      if ( !v13 )
        sub_B2C434(v28, v29);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v13,
        v28,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantProfileEntity__Add__);
    }
  }
  v31 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_28:
    v34 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v34 + 8));
  if ( !v13 )
LABEL_34:
    sub_B2C434(list, v14);
  return (ServantProfileEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantProfileEntity__o *__fastcall ServantProfileMaster__GetSvtProfile(
        ServantProfileMaster_o *this,
        int32_t svtId,
        int32_t startIdx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v15; // x10

  if ( (byte_4189BCE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v10);
    sub_B2C35C(&ServantProfileEntity_TypeInfo, v11);
    byte_4189BCE = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_B2C434(list, v13);
  while ( startIdx < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                       list,
                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           startIdx,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v13 = list;
        v15 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (ServantProfileEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == ServantProfileEntity_TypeInfo )
        {
          if ( LODWORD(list->fields.items) == svtId )
          {
            if ( !v12 )
              goto LABEL_13;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantProfileEntity__Add__);
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

  if ( (byte_4189BCF & 1) == 0 )
  {
    this = (ServantProfileMaster_o *)sub_B2C35C(&ServantProfileLimitCountManager_TypeInfo, entity);
    byte_4189BCF = 1;
  }
  if ( !clearWarIdList || !entity )
    sub_B2C434(this, entity);
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

  if ( (byte_4189BC9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__, entity);
    byte_4189BC9 = 1;
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
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__);
}


int32_t __fastcall ServantProfileMaster__getSum(ServantProfileMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_4189BCB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    byte_4189BCB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, method);
  return System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}


void __fastcall ServantProfileMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantProfileMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41853FF & 1) == 0 )
  {
    sub_B2C35C(&ServantProfileMaster___c_TypeInfo, v1);
    byte_41853FF = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantProfileMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantProfileMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, x);
  return y->fields.priority - x->fields.priority;
}


int32_t __fastcall ServantProfileMaster___c___GetChapterProgressEntity_b__5_0(
        ServantProfileMaster___c_o *this,
        ServantProfileEntity_o *x,
        ServantProfileEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_B2C434(this, x);
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
    sub_B2C434(this, e);
  return e->fields.svtId == entity->fields.svtId;
}