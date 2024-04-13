void __fastcall ServantProfileMaster___ctor(ServantProfileMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAA3C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EAA3C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    3,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__);
}


ServantCommentEntity_o *__fastcall ServantProfileMaster__GetChapterProgressEntity(
        ServantProfileMaster_o *this,
        System_Int32_array *clearWarIdList,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v4; // w28
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
  DataManager_o *Instance; // x0
  __int64 v47; // x1
  DataManager_o *v48; // x19
  int32_t Count; // w0
  int32_t v50; // w23
  int v51; // w19
  int32_t v52; // w24
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x25
  __int64 v55; // x10
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v56; // x26
  ServantProfileMaster___c_c *v57; // x8
  struct ServantProfileMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x27
  Il2CppObject *v60; // x28
  struct ServantProfileMaster___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  _BOOL8 v68; // x0
  const MethodInfo *v69; // x3
  Il2CppObject *current; // x26
  int v71; // w27
  int v72; // w8
  ServantCommentEntity_o *result; // x0
  ServantCommentMaster_o *v74; // [xsp+8h] [xbp-A8h]
  int32_t v75; // [xsp+14h] [xbp-9Ch]
  _BYTE v76[32]; // [xsp+18h] [xbp-98h] BYREF
  int v77; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+40h] [xbp-70h] BYREF

  v4 = svtId;
  if ( (byte_42EAA3F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)clearWarIdList,
      svtId,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_ServantProfileEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_ServantProfileEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCommentMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v31, v32, v33);
    sub_B5D5C4(&ServantProfileEntity_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    sub_B5D5C4(&Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__, v40, v41, v42);
    sub_B5D5C4(&ServantProfileMaster___c_TypeInfo, v43, v44, v45);
    byte_42EAA3F = 1;
  }
  memset(&v78, 0, sizeof(v78));
  v77 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_36;
  v48 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v74 = (ServantCommentMaster_o *)v48;
    v50 = Count;
    v51 = 0;
    v52 = 0;
    v75 = v4;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v52,
                                    (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v54 = (Il2CppObject *)Instance;
      v55 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v55
        || (ServantProfileEntity_c *)Instance->klass->_2.typeHierarchy[v55 - 1] != ServantProfileEntity_TypeInfo )
      {
        break;
      }
      Instance = (DataManager_o *)ServantProfileMaster__GetSvtProfile(this, Instance->fields.m_CachedPtr, v52, v53);
      v56 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
      v57 = ServantProfileMaster___c_TypeInfo;
      if ( (BYTE3(ServantProfileMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v57 = ServantProfileMaster___c_TypeInfo;
      }
      static_fields = v57->static_fields;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 && !v57->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v57);
          static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        }
        v60 = (Il2CppObject *)static_fields->__9;
        _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantProfileEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__5_0,
          v60,
          Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__,
          (const MethodInfo_249B1FC *)Method_System_Comparison_ServantProfileEntity___ctor__);
        v61 = ServantProfileMaster___c_TypeInfo->static_fields;
        v61->__9__5_0 = (struct System_Comparison_ServantProfileEntity__o *)_9__5_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v61->__9__5_0,
          (System_Int32_array **)_9__5_0,
          v62,
          v63,
          v64,
          v65,
          v66,
          v67);
        v4 = v75;
      }
      if ( !v56 )
        break;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v56,
        (System_Comparison_T__o *)_9__5_0,
        (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v76,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v56,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v78 = *(System_Collections_Generic_List_Enumerator_T__o *)v76;
      while ( 1 )
      {
        v68 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v78,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v68 )
          break;
        current = v78.fields.current;
        if ( ServantProfileMaster__IsEnableCond(
               (ServantProfileMaster_o *)v68,
               (ServantProfileEntity_o *)v78.fields.current,
               clearWarIdList,
               v69) )
        {
          v71 = 1;
          goto LABEL_25;
        }
      }
      v71 = 0;
      current = v54;
LABEL_25:
      *(_DWORD *)&v76[4 * v51 + 24] = 163;
      v51 = ++v77;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v78,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( v51 )
      {
        v72 = v51 - 1;
        if ( *(_DWORD *)&v76[4 * v51 + 20] == 163 )
        {
          --v51;
          v77 = v72;
        }
      }
      if ( v71 )
      {
        if ( !current )
          break;
        if ( LODWORD(current[1].klass) == v4 )
        {
          Instance = (DataManager_o *)v74;
          if ( !v74 )
            break;
          result = ServantCommentMaster__GetEntity(v74, v4, HIDWORD(current[1].klass), (int32_t)current[1].monitor, 0LL);
          if ( result )
            return result;
        }
      }
      if ( ++v52 >= v50 )
        return 0LL;
    }
LABEL_36:
    sub_B5D69C(Instance, v47);
  }
  return 0LL;
}


ServantCommentEntity_array *__fastcall ServantProfileMaster__GetChapterProgressEntityList(
        ServantProfileMaster_o *this,
        System_Int32_array *clearWarIdList,
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
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  DataManager_o *Instance; // x0
  __int64 v73; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // x21
  int v76; // w23
  int32_t v77; // w24
  __int64 v78; // x26
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  __int64 v85; // x10
  System_Int32_array **v86; // x1
  BattleServantConfConponent_o *v87; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v88; // x27
  const MethodInfo *v89; // x3
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v90; // x26
  ServantProfileMaster___c_c *v91; // x8
  struct ServantProfileMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_1; // x27
  Il2CppObject *v94; // x28
  struct ServantProfileMaster___c_StaticFields *v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  _BOOL8 v102; // x0
  const MethodInfo *v103; // x3
  System_Int32_array **current; // x26
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  int v111; // w27
  int v112; // w20
  int v113; // w8
  int32_t v114; // w25
  ServantProfileMaster_o *v116; // [xsp+0h] [xbp-B0h]
  ServantCommentMaster_o *v117; // [xsp+8h] [xbp-A8h]
  int32_t v118; // [xsp+14h] [xbp-9Ch]
  _BYTE v119[32]; // [xsp+18h] [xbp-98h] BYREF
  int v120; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v121; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42EAA3E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)clearWarIdList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_ServantProfileEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_ServantProfileEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCommentMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__Find__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v42, v43, v44);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_System_Predicate_ServantCommentEntity___ctor__, v48, v49, v50);
    sub_B5D5C4(&System_Predicate_ServantCommentEntity__TypeInfo, v51, v52, v53);
    sub_B5D5C4(&ServantProfileEntity_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v57, v58, v59);
    sub_B5D5C4(&Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__, v60, v61, v62);
    sub_B5D5C4(&Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__, v63, v64, v65);
    sub_B5D5C4(&ServantProfileMaster___c__DisplayClass4_0_TypeInfo, v66, v67, v68);
    sub_B5D5C4(&ServantProfileMaster___c_TypeInfo, v69, v70, v71);
    byte_42EAA3E = 1;
  }
  memset(&v121, 0, sizeof(v121));
  v120 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v75 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v75,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_47;
  v117 = (ServantCommentMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !clearWarIdList )
    goto LABEL_47;
  if ( (int)Instance >= 1 )
  {
    v76 = 0;
    v77 = 0;
    v116 = this;
    v118 = (int)Instance;
    while ( 1 )
    {
      v78 = sub_B5D694(ServantProfileMaster___c__DisplayClass4_0_TypeInfo);
      ServantProfileMaster___c__DisplayClass4_0___ctor((ServantProfileMaster___c__DisplayClass4_0_o *)v78, 0LL);
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v77,
                                    (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v78 )
        goto LABEL_47;
      if ( Instance
        && (v85 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v85) )
      {
        v86 = (ServantProfileEntity_c *)Instance->klass->_2.typeHierarchy[v85 - 1] == ServantProfileEntity_TypeInfo
            ? (System_Int32_array **)Instance
            : 0LL;
      }
      else
      {
        v86 = 0LL;
      }
      *(_QWORD *)(v78 + 16) = v86;
      v87 = (BattleServantConfConponent_o *)(v78 + 16);
      sub_B5D560((BattleServantConfConponent_o *)(v78 + 16), v86, v79, v80, v81, v82, v83, v84);
      v88 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantCommentEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v88,
        (Il2CppObject *)v78,
        Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_ServantCommentEntity___ctor__);
      if ( !v75 )
        goto LABEL_47;
      Instance = (DataManager_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v75,
                                    (System_Predicate_T__o *)v88,
                                    (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantCommentEntity__Find__);
      if ( Instance )
        goto LABEL_43;
      if ( !v87->klass )
        goto LABEL_47;
      Instance = (DataManager_o *)ServantProfileMaster__GetSvtProfile(this, (int32_t)v87->klass->_1.name, v77, v89);
      v90 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
      v91 = ServantProfileMaster___c_TypeInfo;
      if ( (BYTE3(ServantProfileMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v91 = ServantProfileMaster___c_TypeInfo;
      }
      static_fields = v91->static_fields;
      _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_1;
      if ( !_9__4_1 )
      {
        if ( (BYTE3(v91->vtable._0_Equals.methodPtr) & 4) != 0 && !v91->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v91);
          static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        }
        v94 = (Il2CppObject *)static_fields->__9;
        _9__4_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantProfileEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__4_1,
          v94,
          Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__,
          (const MethodInfo_249B1FC *)Method_System_Comparison_ServantProfileEntity___ctor__);
        v95 = ServantProfileMaster___c_TypeInfo->static_fields;
        v95->__9__4_1 = (struct System_Comparison_ServantProfileEntity__o *)_9__4_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v95->__9__4_1,
          (System_Int32_array **)_9__4_1,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101);
        this = v116;
      }
      if ( !v90 )
        goto LABEL_47;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v90,
        (System_Comparison_T__o *)_9__4_1,
        (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v119,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v90,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v121 = *(System_Collections_Generic_List_Enumerator_T__o *)v119;
      while ( 1 )
      {
        v102 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v121,
                 (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v102 )
          break;
        current = (System_Int32_array **)v121.fields.current;
        if ( ServantProfileMaster__IsEnableCond(
               (ServantProfileMaster_o *)v102,
               (ServantProfileEntity_o *)v121.fields.current,
               clearWarIdList,
               v103) )
        {
          v87->klass = (BattleServantConfConponent_c *)current;
          sub_B5D560(v87, current, v105, v106, v107, v108, v109, v110);
          v111 = 1;
          goto LABEL_33;
        }
      }
      v111 = 0;
LABEL_33:
      *(_DWORD *)&v119[4 * v76 + 24] = 222;
      v112 = ++v120;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v121,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( v112 )
      {
        v113 = v112 - 1;
        if ( *(_DWORD *)&v119[4 * v112 + 20] == 222 )
        {
          --v112;
          v120 = v113;
        }
      }
      if ( !v111 )
        break;
      if ( !v87->klass )
        goto LABEL_47;
      Instance = (DataManager_o *)v117;
      if ( !v117 )
        goto LABEL_47;
      Instance = (DataManager_o *)ServantCommentMaster__GetEntity(
                                    v117,
                                    (int32_t)v87->klass->_1.name,
                                    HIDWORD(v87->klass->_1.name),
                                    (int32_t)v87->klass->_1.namespaze,
                                    0LL);
      v114 = v118;
      if ( Instance )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v75,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
      v76 = v112;
LABEL_44:
      if ( ++v77 >= v114 )
        goto LABEL_45;
    }
    v76 = v112;
LABEL_43:
    v114 = v118;
    goto LABEL_44;
  }
LABEL_45:
  if ( !v75 )
LABEL_47:
    sub_B5D69C(Instance, v73);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v75,
                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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

  if ( (byte_42EAA3A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__,
      svtId,
      svtCommentId,
      *(_QWORD *)&svtCommentPriority);
    byte_42EAA3A = 1;
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
                                     (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__);
}


ServantProfileEntity_array *__fastcall ServantProfileMaster__GetServantProfileEntities(
        ServantProfileMaster_o *this,
        int32_t condType,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19
  __int64 v31; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v33; // x1
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v40; // x3
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x11
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0

  if ( (byte_42EAA42 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      condType,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&ServantProfileEntity_TypeInfo, v27, v28, v29);
    byte_42EAA42 = 1;
  }
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v33);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v37;
        p_offset += 4;
        if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v34);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_16:
      v44 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v40);
    }
    v45 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v44 + 8));
    if ( !v45
      || (v47 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1), *(&v45->klass->_2.bitflags2 + 1) < (unsigned int)v47)
      || (ServantProfileEntity_c *)v45->klass->_2.typeHierarchy[v47 - 1] != ServantProfileEntity_TypeInfo )
    {
      sub_B5D69C(v45, v46);
    }
    if ( v45->fields.addCount == condType )
    {
      if ( !v30 )
        sub_B5D69C(v45, v46);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v30,
        v45,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantProfileEntity__Add__);
    }
  }
  v48 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      ++v49;
      v50 += 4;
      if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_28:
    v51 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v40);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v51 + 8));
  if ( !v30 )
LABEL_34:
    sub_B5D69C(list, v31);
  return (ServantProfileEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__);
}


System_Collections_Generic_List_ServantProfileEntity__o *__fastcall ServantProfileMaster__GetSvtProfile(
        ServantProfileMaster_o *this,
        int32_t svtId,
        int32_t startIdx,
        const MethodInfo *method)
{
  int32_t v4; // w19
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v23; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v25; // x10

  v4 = startIdx;
  if ( (byte_42EAA40 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, svtId, startIdx, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&ServantProfileEntity_TypeInfo, v19, v20, v21);
    byte_42EAA40 = 1;
  }
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_B5D69C(list, v23);
  while ( v4 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v4,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v23 = list;
        v25 = *(&ServantProfileEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v25
          && (ServantProfileEntity_c *)list->klass->_2.typeHierarchy[v25 - 1] == ServantProfileEntity_TypeInfo )
        {
          if ( LODWORD(list->fields.items) == svtId )
          {
            if ( !v22 )
              goto LABEL_13;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v22,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantProfileEntity__Add__);
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
  return (System_Collections_Generic_List_ServantProfileEntity__o *)v22;
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

  if ( (byte_42EAA41 & 1) == 0 )
  {
    this = (ServantProfileMaster_o *)sub_B5D5C4(
                                       &ServantProfileLimitCountManager_TypeInfo,
                                       (_DWORD)entity,
                                       (_DWORD)clearWarIdList,
                                       method);
    byte_42EAA41 = 1;
  }
  if ( !clearWarIdList || !entity )
    sub_B5D69C(this, entity);
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

  if ( (byte_42EAA3B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&svtCommentId);
    byte_42EAA3B = 1;
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
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__);
}


int32_t __fastcall ServantProfileMaster__getSum(ServantProfileMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_42EAA3D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    byte_42EAA3D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, method);
  return System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}


void __fastcall ServantProfileMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantProfileMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D78 & 1) == 0 )
  {
    sub_B5D5C4(&ServantProfileMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5D78 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantProfileMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantProfileMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, x);
  return y->fields.priority - x->fields.priority;
}


int32_t __fastcall ServantProfileMaster___c___GetChapterProgressEntity_b__5_0(
        ServantProfileMaster___c_o *this,
        ServantProfileEntity_o *x,
        ServantProfileEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, e);
  return e->fields.svtId == entity->fields.svtId;
}