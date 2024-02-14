void __fastcall ServantAssetLoadManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v6; // x19
  struct ServantAssetLoadManager_StaticFields *static_fields; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct ServantAssetLoadManager_StaticFields *v14; // x0
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42158E3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__, v1);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo, v3);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_42158E3 = 1;
  }
  ServantAssetLoadManager_TypeInfo->static_fields->KeepAssetPlayerServantCount = 3;
  v6 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                       System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo,
                                                                                       v1,
                                                                                       v2);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v6,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__);
  static_fields = ServantAssetLoadManager_TypeInfo->static_fields;
  static_fields->unloadIgnoredAssetArgs = (struct System_Collections_Generic_Dictionary_string__ServantAssetArgs__o *)v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->unloadIgnoredAssetArgs,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = ServantAssetLoadManager_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_1/*""*/;
  v14->wkSpace = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&v14->wkSpace, v15, v16, v17, v18, v19, v20, v21);
}


void __fastcall ServantAssetLoadManager___ctor(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v50; // x20
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x1
  __int64 v58; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x20
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x1
  __int64 v67; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x20
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x1
  __int64 v76; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v77; // x20
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7

  if ( (byte_42158E2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__string___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__Object___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__string__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__Object__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AssetData___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_Generic_List_AssetData__TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__, v13);
    byte_42158E2 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedList = (struct System_Collections_Generic_List_string__o *)v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.loadedList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadlist = (struct System_Collections_Generic_List_string__o *)v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.loadlist,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v30,
                                                                                                  v31);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.downloadlist = (struct System_Collections_Generic_List_string__o *)v32;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.downloadlist,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v41 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo,
                                                                                                   v39,
                                                                                                   v40);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v41,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__);
  this->fields.ActorVoice = (struct System_Collections_Generic_Dictionary_int__SePlayer__o *)v41;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.ActorVoice,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v50 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__string__TypeInfo,
                                                                                                   v48,
                                                                                                   v49);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v50,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  this->fields.LastActorVoice = (struct System_Collections_Generic_Dictionary_int__string__o *)v50;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.LastActorVoice,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_AssetData__TypeInfo,
                                                                                                  v57,
                                                                                                  v58);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v59,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v59;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bgAssetDataList,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v68 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v66,
                                                                                                  v67);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v68,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.nobleEffectList = (struct System_Collections_Generic_List_string__o *)v68;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.nobleEffectList,
    (System_Int32_array **)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  this->fields.InitPoint.fields.z = 0.0;
  *(_QWORD *)&this->fields.InitPoint.fields.x = 0x3D4CCCCD00000000LL;
  v77 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__Object__TypeInfo,
                                                                                        v75,
                                                                                        v76);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v77,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__Object___ctor__);
  this->fields._releaseAssets = (struct System_Collections_Generic_Dictionary_string__Object__o *)v77;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._releaseAssets,
    (System_Int32_array **)v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__);
}


bool __fastcall ServantAssetLoadManager__CheckLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadlist; // x0

  if ( (byte_42158DC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, path);
    byte_42158DC = 1;
  }
  loadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadlist;
  if ( !loadlist )
    sub_B0D97C(0LL);
  return System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           loadlist,
           (WarBoardManager_TaskList_o *)path,
           (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__);
}


void __fastcall ServantAssetLoadManager__DebugPrint(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int svtmaster; // w8
  int i; // w9
  __int64 v5; // x0

  if ( !data || (this = (ServantAssetLoadManager_o *)AssetData__GetObjectNameList(data, 0LL)) == 0LL )
    sub_B0D97C(this);
  svtmaster = (int)this->fields.svtmaster;
  if ( svtmaster >= 1 )
  {
    for ( i = 0; i < svtmaster; ++i )
    {
      if ( i >= (unsigned int)svtmaster )
      {
        v5 = sub_B0D9A8(this);
        sub_B0D948(v5, 0LL);
      }
    }
  }
}


void __fastcall ServantAssetLoadManager__DownLoadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4215877 & 1) == 0 )
  {
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, method);
    byte_4215877 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__PreloadAssetsByArgs(args, 1, v2);
}


void __fastcall ServantAssetLoadManager__DownloadSkillCutInLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *v4; // x0
  const MethodInfo *v5; // x2
  System_String_o *SkillCutInPath; // x1
  const MethodInfo *v7; // x3

  if ( skillInfo )
  {
    v4 = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))skillInfo->klass->vtable._7_getCutInId.method)(
                                        skillInfo,
                                        skillInfo->klass->vtable._8_PreLoad.methodPtr,
                                        method);
    if ( (int)v4 >= 1 )
    {
      SkillCutInPath = ServantAssetLoadManager__getSkillCutInPath(v4, (int32_t)v4, v5);
      ServantAssetLoadManager__setLoadList(this, SkillCutInPath, 1, v7);
    }
  }
}


void __fastcall ServantAssetLoadManager__EndPlaySe(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ServantAssetLoadManager__EndRetryTransition(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *Instance; // x0
  ServantAssetLoadManager_c *v11; // x0
  ServantAssetArgs_o *currentValue; // x19
  int32_t v13; // w22
  const MethodInfo *v14; // x1
  _BOOL8 v15; // x0
  ServantAssetLoadManager_c *v16; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42158DB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__, v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__,
      v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__get_Current__,
      v6);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v8);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__,
      v9);
    byte_42158DB = 1;
  }
  memset(&v18, 0, sizeof(v18));
  this->fields._IsRetryTransition_k__BackingField = 0;
  Instance = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  LODWORD(Instance[1].fields.values) = 3;
  v11 = ServantAssetLoadManager_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v11 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)v11->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
    goto LABEL_24;
  Instance = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                          Instance,
                                                                                          (const MethodInfo_2E4AA0C *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__);
  if ( !Instance )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_22D9A80 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v15 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v18,
            (const MethodInfo_26CA940 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__);
    if ( !v15 )
      break;
    currentValue = (ServantAssetArgs_o *)v18.fields.currentValue;
    if ( !v18.fields.currentValue )
      sub_B0D97C(v15);
    if ( SLODWORD(v18.fields.currentValue[5].monitor) >= 1 )
    {
      v13 = 0;
      do
      {
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        ServantAssetLoadManager__UnloadAssetsByArgs(currentValue, v14);
        ++v13;
      }
      while ( v13 < currentValue->fields._UnloadCount_k__BackingField );
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v18,
    (const MethodInfo_26CA93C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__);
  v16 = ServantAssetLoadManager_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v16 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)v16->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
LABEL_24:
    sub_B0D97C(Instance);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Instance,
    (const MethodInfo_2E4AE44 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__ExistPreloadBattleActor(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        bool isForce,
        const MethodInfo *method)
{
  System_String_o *PreloadBattleActorFolderName; // x19

  if ( (byte_421588F & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    byte_421588F = 1;
  }
  PreloadBattleActorFolderName = ServantAssetLoadManager__GetPreloadBattleActorFolderName(
                                   this,
                                   svtId,
                                   limitCount,
                                   appearanceId,
                                   isForce,
                                   method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__isExistAssetStorage(PreloadBattleActorFolderName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__ExistsBattleVoice(
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        int32_t type,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_42158BC & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_42158BC = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__ExistsBattleVoiceLocal(Instance, svtId, limit, overwriteSvtVoiceId, type, v10);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__ExistsBattleVoiceLocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t VoicePrefix; // w24
  const MethodInfo *v16; // x3
  int32_t VoiceId; // w0
  int32_t v18; // w9
  Il2CppObject *v19; // x20
  Il2CppObject *FileName; // x0
  System_String_o *v21; // x19
  SoundManager_o *Instance; // x20
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  int32_t v26; // [xsp+8h] [xbp-38h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42158BD & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
    sub_B0D8A4(&Voice_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_23577/*"{0:D0}_{1}"*/, v13);
    sub_B0D8A4(&StringLiteral_12783/*"Servants_"*/, v14);
    byte_42158BD = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, *(const MethodInfo **)&overwriteSvtVoiceId);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v16);
  if ( overwriteSvtVoiceId )
    v18 = overwriteSvtVoiceId;
  else
    v18 = VoiceId;
  v26 = VoicePrefix;
  v27 = v18;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = (Il2CppObject *)Voice__getFileName(type, 0LL);
  v21 = System_String__Format_43845440((System_String_o *)StringLiteral_23577/*"{0:D0}_{1}"*/, v19, FileName, 0LL);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v23 = System_Int32__ToString((int32_t)&v27, 0LL);
  v24 = System_String__Concat_43849904((System_String_o *)StringLiteral_12783/*"Servants_"*/, v23, 0LL);
  if ( !Instance )
    sub_B0D97C(v24);
  return SoundManager__IsExistsSound(Instance, v24, v21, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ServantAssetLoadManager__GetAheadBg(
        ServantAssetLoadManager_o *this,
        WellFired_USFGOChangeBgEvent_array *bgList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42158C7 & 1) == 0 )
  {
    sub_B0D8A4(&ServantAssetLoadManager__GetAheadBg_d__154_TypeInfo, bgList);
    byte_42158C7 = 1;
  }
  v7 = sub_B0D974(ServantAssetLoadManager__GetAheadBg_d__154_TypeInfo, bgList, callback);
  ServantAssetLoadManager__GetAheadBg_d__154___ctor((ServantAssetLoadManager__GetAheadBg_d__154_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 40) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v7 + 32) = bgList;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)bgList, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v7 + 48) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v7;
}


System_String_o *__fastcall ServantAssetLoadManager__GetCommandCodeFolderName(
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42158D9 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_4180/*"CommandCodes/Texture/"*/, v3);
    byte_42158D9 = 1;
  }
  v6 = commandCodeId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_4180/*"CommandCodes/Texture/"*/, v4, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__GetLastVoiceType(int32_t uniqueId, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_42158C0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_42158C0 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__GetLastVoiceTypeLocal(Instance, uniqueId, v4);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__GetLastVoiceTypeLocal(
        ServantAssetLoadManager_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_int__string__o *LastActorVoice; // x0
  ServantAssetLoadManager_c *v9; // x0

  if ( (byte_42158C1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__, *(_QWORD *)&uniqueId);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__string__get_Item__, v5);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v6);
    byte_42158C1 = 1;
  }
  LastActorVoice = this->fields.LastActorVoice;
  if ( !LastActorVoice )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)LastActorVoice,
         uniqueId,
         (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__) )
  {
    LastActorVoice = this->fields.LastActorVoice;
    if ( LastActorVoice )
      return (System_String_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)LastActorVoice,
                                  uniqueId,
                                  (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__string__get_Item__);
LABEL_11:
    sub_B0D97C(LastActorVoice);
  }
  v9 = ServantAssetLoadManager_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v9 = ServantAssetLoadManager_TypeInfo;
  }
  return v9->static_fields->wkSpace;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantAssetLoadManager__GetLimitImageIndex(
        int32_t svtId,
        int32_t limitCount,
        int32_t limitDiff,
        const MethodInfo *method)
{
  int v5; // w19

  v5 = limitCount;
  if ( (byte_421585A & 1) == 0 )
  {
    sub_B0D8A4(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    byte_421585A = 1;
  }
  if ( v5 <= 10 )
  {
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    return ImageLimitCount__GetImageLimitCount(svtId, v5, 0LL) + limitDiff;
  }
  return v5;
}


int32_t __fastcall ServantAssetLoadManager__GetNPSeqIdFromCachedAssetName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  WebViewManager_c *klass; // x8
  System_String_o *namespaze; // x19
  System_String_o *FileNameWithoutExtension; // x0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( (byte_42158DD & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_Path_TypeInfo, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v2);
    byte_42158DD = 1;
  }
  result = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  klass = Instance[1].klass;
  if ( !klass )
    return 0;
  result = 0;
  namespaze = (System_String_o *)klass->_1.namespaze;
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(namespaze, 0LL);
  if ( System_Int32__TryParse(FileNameWithoutExtension, &result, 0LL) )
    return result;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__GetPrefixVoiceId(
        ServantAssetLoadManager_o *this,
        int32_t servantId,
        int32_t limitCount,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *v10; // x0
  int32_t VoicePrefix; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42158B9 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&servantId);
    sub_B0D8A4(&StringLiteral_23577/*"{0:D0}_{1}"*/, v9);
    byte_42158B9 = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, servantId, limitCount, (const MethodInfo *)voiceId);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &VoicePrefix);
  return System_String__Format_43845440((System_String_o *)StringLiteral_23577/*"{0:D0}_{1}"*/, v10, (Il2CppObject *)voiceId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__GetPreloadBattleActorFolderName(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        bool isForce,
        const MethodInfo *method)
{
  int32_t v10; // w0
  int32_t v12; // w0

  if ( (byte_421588E & 1) == 0 )
  {
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_421588E = 1;
  }
  if ( appearanceId < 1 )
  {
    if ( isForce )
    {
      if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      v10 = svtId;
      return ServantAssetLoadManager__getActorFolderName_26488676(v10, *(const MethodInfo **)&svtId);
    }
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    v12 = svtId;
  }
  else
  {
    if ( isForce )
    {
      if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      v10 = appearanceId;
      return ServantAssetLoadManager__getActorFolderName_26488676(v10, *(const MethodInfo **)&svtId);
    }
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    v12 = appearanceId;
  }
  return ServantAssetLoadManager__getActorFolderName(v12, limitCount, *(const MethodInfo **)&limitCount);
}


System_Func_Shader__Shader__Shader__o *__fastcall ServantAssetLoadManager__GetReplaceChocoShaderFunc(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ServantAssetLoadManager___c_c *v10; // x0
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__95_0; // x20
  Il2CppObject *v13; // x21
  struct ServantAssetLoadManager___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  changeVColor_array *v21; // x0
  __int64 v22; // x8
  Il2CppObject *v23; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v27; // x0

  if ( (byte_4215895 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleServantDeadComponent_getReplaceChocoShader__, method);
    sub_B0D8A4(&Method_System_Func_Shader__Shader__Shader___ctor__, v4);
    sub_B0D8A4(&System_Func_Shader__Shader__Shader__TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__95_0__, v8);
    sub_B0D8A4(&ServantAssetLoadManager___c_TypeInfo, v9);
    byte_4215895 = 1;
  }
  v10 = ServantAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo);
    v10 = ServantAssetLoadManager___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__95_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__95_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B0D974(System_Func_Shader__Shader__Shader__TypeInfo, method, v2);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__95_0,
      v13,
      Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__95_0__,
      (const MethodInfo_2623AB8 *)Method_System_Func_Shader__Shader__Shader___ctor__);
    v14 = ServantAssetLoadManager___c_TypeInfo->static_fields;
    v14->__9__95_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__95_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__95_0,
      (System_Int32_array **)_9__95_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !obj )
    sub_B0D97C(v10);
  v21 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
          obj,
          (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( v21 && (v22 = *(_QWORD *)&v21->max_length) != 0 )
  {
    if ( !(_DWORD)v22 )
    {
      v27 = sub_B0D9A8(v21);
      sub_B0D948(v27, 0LL);
    }
    v23 = (Il2CppObject *)v21->m_Items[0];
  }
  else
  {
    v23 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
  {
    _9__95_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B0D974(System_Func_Shader__Shader__Shader__TypeInfo, v24, v25);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__95_0,
      v23,
      Method_BattleServantDeadComponent_getReplaceChocoShader__,
      (const MethodInfo_2623AB8 *)Method_System_Func_Shader__Shader__Shader___ctor__);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__95_0;
}


System_Func_Shader__Shader__Shader__o *__fastcall ServantAssetLoadManager__GetReplaceDeadShaderFunc(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ServantAssetLoadManager___c_c *v10; // x0
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__94_0; // x20
  Il2CppObject *v13; // x21
  struct ServantAssetLoadManager___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  changeVColor_array *v21; // x0
  __int64 v22; // x8
  Il2CppObject *v23; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v27; // x0

  if ( (byte_4215894 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleServantDeadComponent_getReplaceDeadShader__, method);
    sub_B0D8A4(&Method_System_Func_Shader__Shader__Shader___ctor__, v4);
    sub_B0D8A4(&System_Func_Shader__Shader__Shader__TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__94_0__, v8);
    sub_B0D8A4(&ServantAssetLoadManager___c_TypeInfo, v9);
    byte_4215894 = 1;
  }
  v10 = ServantAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo);
    v10 = ServantAssetLoadManager___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__94_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)static_fields->__9__94_0;
  if ( !_9__94_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__94_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B0D974(System_Func_Shader__Shader__Shader__TypeInfo, method, v2);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__94_0,
      v13,
      Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__94_0__,
      (const MethodInfo_2623AB8 *)Method_System_Func_Shader__Shader__Shader___ctor__);
    v14 = ServantAssetLoadManager___c_TypeInfo->static_fields;
    v14->__9__94_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__94_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__94_0,
      (System_Int32_array **)_9__94_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !obj )
    sub_B0D97C(v10);
  v21 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
          obj,
          (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( v21 && (v22 = *(_QWORD *)&v21->max_length) != 0 )
  {
    if ( !(_DWORD)v22 )
    {
      v27 = sub_B0D9A8(v21);
      sub_B0D948(v27, 0LL);
    }
    v23 = (Il2CppObject *)v21->m_Items[0];
  }
  else
  {
    v23 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
  {
    _9__94_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B0D974(System_Func_Shader__Shader__Shader__TypeInfo, v24, v25);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__94_0,
      v23,
      Method_BattleServantDeadComponent_getReplaceDeadShader__,
      (const MethodInfo_2623AB8 *)Method_System_Func_Shader__Shader__Shader___ctor__);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__94_0;
}


bool __fastcall ServantAssetLoadManager__IsIgnoreUnloadServant(BattleServantData_o *data, const MethodInfo *method)
{
  BattleServantData_o *v2; // x19
  int32_t uniqueId; // w19
  ServantAssetLoadManager_c *v5; // x0

  v2 = data;
  if ( (byte_421587C & 1) == 0 )
  {
    data = (BattleServantData_o *)sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, method);
    byte_421587C = 1;
  }
  if ( !v2 )
    sub_B0D97C(data);
  if ( v2->fields.isEnemy )
    return 1;
  if ( v2->fields.followerType )
    return 0;
  uniqueId = v2->fields.uniqueId;
  v5 = ServantAssetLoadManager_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v5 = ServantAssetLoadManager_TypeInfo;
  }
  return uniqueId <= v5->static_fields->KeepAssetPlayerServantCount;
}


bool __fastcall ServantAssetLoadManager__IsKeepAssetAvailable(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  struct UIPanel_o *basePanel; // x8
  __int64 v8; // x11
  UnityEngine_Object_o *v9; // x19
  _BYTE *monitor; // x8

  if ( (byte_42158DA & 1) == 0 )
  {
    sub_B0D8A4(&BattleRootComponent_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v2);
    sub_B0D8A4(&OptionManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_B0D8A4(&StringLiteral_6377/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, v5);
    byte_42158DA = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6377/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, 0LL) > 0 )
    return 0;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  basePanel = Instance->fields.basePanel;
  if ( basePanel
    && (v8 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
        *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
  {
    if ( (BattleRootComponent_c *)basePanel->klass->_2.typeHierarchy[v8 - 1] == BattleRootComponent_TypeInfo )
      v9 = (UnityEngine_Object_o *)Instance->fields.basePanel;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (WebViewManager_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    return 0;
  if ( !v9 || (monitor = v9[2].monitor) == 0LL )
LABEL_23:
    sub_B0D97C(Instance);
  return monitor[700];
}


bool __fastcall ServantAssetLoadManager__IsStop(int32_t uniqueId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *Instance; // x0

  if ( (byte_42158C4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4);
    byte_42158C4 = 1;
  }
  Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance->fields._syncRoot;
  if ( !Instance )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Instance,
         uniqueId,
         (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance->fields._syncRoot;
      if ( Instance )
      {
        Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(Instance, uniqueId, (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        if ( Instance )
          return LOBYTE(Instance->fields.freeList) != 0;
      }
    }
LABEL_11:
    sub_B0D97C(Instance);
  }
  return 1;
}


void __fastcall ServantAssetLoadManager__LoadBg(
        ServantAssetLoadManager_o *this,
        WellFired_USFGOChangeBgEvent_array *bgList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *AheadBg; // x1

  AheadBg = ServantAssetLoadManager__GetAheadBg(this, bgList, callback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, AheadBg, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__LoadNoblePhantasm(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t treasureDvcId,
        int32_t treasureDvcLv,
        int32_t npChargeStage,
        ServantAssetLoadManager_onGameObjectLoadComplete_o *callback,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  UnityEngine_MonoBehaviour_o *v16; // x26
  System_Collections_IEnumerator_o *Manager__loadNoblePhantasmCoroutine; // x1
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]

  if ( (byte_42158C5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_42158C5 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  v16 = (UnityEngine_MonoBehaviour_o *)Instance;
  Manager__loadNoblePhantasmCoroutine = ServantAssetLoadManager__loadNoblePhantasmCoroutine(
                                          Instance,
                                          parent,
                                          svtId,
                                          limitCount,
                                          treasureDvcId,
                                          treasureDvcLv,
                                          npChargeStage,
                                          callback,
                                          v18);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128(v16, Manager__loadNoblePhantasmCoroutine, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__PreloadAssetsByArgs(
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  int Weapon_k__BackingField; // w21
  int WeaponEffectId_k__BackingField; // w21
  int32_t EffectFolder_k__BackingField; // w22
  int32_t CameraId_k__BackingField; // w21
  const MethodInfo *v14; // x2
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillList_k__BackingField; // x20
  __int64 size; // x8
  __int64 v17; // x21
  __int64 v18; // x0
  __int64 v19; // x9

  if ( (byte_4215876 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, dlOnly);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v5);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v6);
    byte_4215876 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__preloadServant(args, dlOnly, method);
  if ( !args )
    sub_B0D97C(v7);
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__preloadActorMotion(Weapon_k__BackingField, dlOnly, v8);
  }
  WeaponEffectId_k__BackingField = args->fields._WeaponEffectId_k__BackingField;
  if ( WeaponEffectId_k__BackingField >= 1 )
  {
    EffectFolder_k__BackingField = args->fields._EffectFolder_k__BackingField;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__preloadWeaponEffect(
      WeaponEffectId_k__BackingField,
      EffectFolder_k__BackingField,
      dlOnly,
      v9);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__preloadCameraAction(CameraId_k__BackingField, dlOnly, v8);
  ServantAssetLoadManager__preloadFromDeckServant(args->fields._deckSvt_k__BackingField, dlOnly, v14);
  skillList_k__BackingField = args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField )
  {
    LODWORD(size) = skillList_k__BackingField->fields._size;
    if ( (int)size >= 1 )
    {
      v17 = 4LL;
      do
      {
        if ( v17 - 4 >= (unsigned __int64)(unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v18 = *((_QWORD *)&skillList_k__BackingField->fields._items->obj.klass + v17);
        if ( v18 )
        {
          if ( v17 - 4 >= (unsigned __int64)(unsigned int)skillList_k__BackingField->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)v18 + 440LL))(
            v18,
            dlOnly,
            *(_QWORD *)(*(_QWORD *)v18 + 448LL));
        }
        size = skillList_k__BackingField->fields._size;
        v19 = v17 - 3;
        ++v17;
      }
      while ( v19 < size );
    }
  }
}


void __fastcall ServantAssetLoadManager__ShowAssetNotFoundError(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantAssetLoadManager__StopVoice(int32_t uniqueId, float fadeoutTime, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v6; // x2

  if ( (byte_42158C2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_42158C2 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__localStopVoice(Instance, uniqueId, fadeoutTime, v6);
}


bool __fastcall ServantAssetLoadManager__TryRegisterUnloadIgnoredArgs(
        ServantAssetArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Xml_XmlQualifiedName_o *Instance; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *monitor; // x20
  const MethodInfo *v11; // x1
  ServantAssetLoadManager_c *v12; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *unloadIgnoredAssetArgs; // x20
  ServantAssetLoadManager_c *v14; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v15; // x20

  if ( (byte_4215879 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__, v4);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    byte_4215879 = 1;
  }
  Instance = (System_Xml_XmlQualifiedName_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  if ( ServantAssetLoadManager__IsKeepAssetAvailable((ServantAssetLoadManager_o *)Instance, v8) )
  {
    Instance = (System_Xml_XmlQualifiedName_o *)ServantAssetLoadManager_TypeInfo;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Instance = (System_Xml_XmlQualifiedName_o *)ServantAssetLoadManager_TypeInfo;
    }
    if ( args )
    {
      monitor = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Instance[4].fields.ns->monitor;
      Instance = (System_Xml_XmlQualifiedName_o *)ServantAssetArgs__get_UniqueKey(args, v9);
      if ( monitor )
      {
        if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                monitor,
                Instance,
                (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__) )
        {
          v12 = ServantAssetLoadManager_TypeInfo;
          if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            v12 = ServantAssetLoadManager_TypeInfo;
          }
          unloadIgnoredAssetArgs = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v12->static_fields->unloadIgnoredAssetArgs;
          Instance = (System_Xml_XmlQualifiedName_o *)ServantAssetArgs__get_UniqueKey(args, v11);
          if ( !unloadIgnoredAssetArgs )
            goto LABEL_23;
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            unloadIgnoredAssetArgs,
            Instance,
            (System_Xml_Schema_XmlSchemaObject_o *)args,
            (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__);
        }
        v14 = ServantAssetLoadManager_TypeInfo;
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          v14 = ServantAssetLoadManager_TypeInfo;
        }
        v15 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v14->static_fields->unloadIgnoredAssetArgs;
        Instance = (System_Xml_XmlQualifiedName_o *)ServantAssetArgs__get_UniqueKey(args, v11);
        if ( v15 )
        {
          Instance = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                        v15,
                                                        (System_Type_o *)Instance,
                                                        (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__);
          if ( Instance )
          {
            ++LODWORD(Instance[2].monitor);
            return 1;
          }
        }
      }
    }
LABEL_23:
    sub_B0D97C(Instance);
  }
  return 0;
}


void __fastcall ServantAssetLoadManager__UnloadAllAsset(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42158C9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__Object__get_Value__, v6);
    byte_42158C9 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  releaseAssets = this->fields._releaseAssets;
  if ( !releaseAssets )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    &v8,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)releaseAssets,
    (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v8,
            (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__) )
    UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)v8.fields.current.fields.value, 0LL);
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v8,
    (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__);
}


void __fastcall ServantAssetLoadManager__UnloadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int Weapon_k__BackingField; // w20
  int WeaponEffectId_k__BackingField; // w20
  int32_t EffectFolder_k__BackingField; // w21
  int32_t CameraId_k__BackingField; // w20
  const MethodInfo *v12; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillList_k__BackingField; // x19
  __int64 size; // x8
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x9

  if ( (byte_4215878 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v3);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v4);
    byte_4215878 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__unloadServant(args, method);
  if ( !args )
    sub_B0D97C(v5);
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__unloadActorMotion(Weapon_k__BackingField, v6);
  }
  WeaponEffectId_k__BackingField = args->fields._WeaponEffectId_k__BackingField;
  if ( WeaponEffectId_k__BackingField >= 1 )
  {
    EffectFolder_k__BackingField = args->fields._EffectFolder_k__BackingField;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__unloadWeaponGroupEffect(WeaponEffectId_k__BackingField, EffectFolder_k__BackingField, v7);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__unloadCameraAction(CameraId_k__BackingField, v6);
  ServantAssetLoadManager__unloadFromDeckServant(args->fields._deckSvt_k__BackingField, v12);
  skillList_k__BackingField = args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField )
  {
    LODWORD(size) = skillList_k__BackingField->fields._size;
    if ( (int)size >= 1 )
    {
      v15 = 4LL;
      do
      {
        if ( v15 - 4 >= (unsigned __int64)(unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v16 = *((_QWORD *)&skillList_k__BackingField->fields._items->obj.klass + v15);
        if ( v16 )
        {
          if ( v15 - 4 >= (unsigned __int64)(unsigned int)skillList_k__BackingField->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 456LL))(v16, *(_QWORD *)(*(_QWORD *)v16 + 464LL));
        }
        size = skillList_k__BackingField->fields._size;
        v17 = v15 - 3;
        ++v15;
      }
      while ( v17 < size );
    }
  }
}


void __fastcall ServantAssetLoadManager__UnloadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        System_Int32_array *commandCodeIds,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *v4; // x20
  __int64 v5; // x8
  unsigned __int64 v6; // x22
  int32_t v7; // w21
  System_String_o *CommandCodeFolderName; // x0
  const MethodInfo *v9; // x2
  __int64 v10; // x0

  v4 = this;
  if ( (byte_42158D8 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, commandCodeIds);
    byte_42158D8 = 1;
  }
  if ( commandCodeIds )
  {
    v5 = *(_QWORD *)&commandCodeIds->max_length;
    if ( (int)v5 >= 1 )
    {
      v6 = 0LL;
      do
      {
        if ( v6 >= (unsigned int)v5 )
        {
          v10 = sub_B0D9A8(this);
          sub_B0D948(v10, 0LL);
        }
        v7 = commandCodeIds->m_Items[v6 + 1];
        if ( v7 >= 1 )
        {
          if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          }
          CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(
                                    v7,
                                    (const MethodInfo *)commandCodeIds);
          ServantAssetLoadManager__unloadTargetPathAssetLocal(v4, CommandCodeFolderName, v9);
          LODWORD(v5) = commandCodeIds->max_length;
        }
        ++v6;
      }
      while ( (__int64)v6 < (int)v5 );
    }
  }
}


void __fastcall ServantAssetLoadManager___GetAheadBg_b__154_0(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_AssetData__o *bgAssetDataList; // x0

  if ( (byte_42158E4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_AssetData__Add__, data);
    byte_42158E4 = 1;
  }
  bgAssetDataList = this->fields.bgAssetDataList;
  if ( !bgAssetDataList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bgAssetDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_AssetData__Add__);
}


void __fastcall ServantAssetLoadManager___preloadCommandSpellAnyVoiceLocal_b__80_0(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


void __fastcall ServantAssetLoadManager___preloadServantVoicelocal_b__72_0(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


void __fastcall ServantAssetLoadManager___preloadServantVoicelocal_b__72_1(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


void __fastcall ServantAssetLoadManager___preloadSkillAnyVoiceLocal_b__76_0(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


void __fastcall ServantAssetLoadManager___preloadSkillAnyVoiceLocal_b__76_1(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__changeChocoDeadShader(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v21; // s4
  float v22; // s5
  float v23; // s6
  float v24; // s7
  UnityEngine_Material_o *material; // x0
  UnityEngine_Material_c *klass; // x8
  UnityEngine_Material_o *v27; // x24
  unsigned __int64 v28; // x19
  UnityEngine_Object_o *v29; // x20
  UnityEngine_Shader_o *v30; // x20
  UnityEngine_Texture_o *UIAtlas; // x21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v33; // x1
  UnityEngine_Transform_o *NodeFromName; // x22
  UnityEngine_Material_c *v35; // x8
  System_Func_string__BacktraceData__BacktraceResult__o *v36; // x23
  unsigned __int64 v37; // x27
  UnityEngine_Object_o *v38; // x24
  int v39; // w8
  UnityEngine_Material_o *v40; // x25
  unsigned int v41; // w28
  UnityEngine_Material_c **v42; // x8
  UnityEngine_Material_o *v43; // x26
  UnityEngine_Shader_o *v44; // x0
  int v45; // s0
  float x; // s13
  float y; // s14
  float z; // s15
  float v51; // s13
  float v52; // s14
  float v53; // s15
  float v54; // s13
  float v55; // s14
  float v56; // s15
  float v57; // s13
  __int64 v58; // x0
  UnityEngine_Material_o *v59; // [xsp+8h] [xbp-118h]
  UnityEngine_Bounds_o v60; // [xsp+10h] [xbp-110h] BYREF
  UnityEngine_Bounds_o v61; // [xsp+28h] [xbp-F8h] BYREF
  UnityEngine_Bounds_o v62; // [xsp+40h] [xbp-E0h] BYREF
  UnityEngine_Bounds_o v63; // [xsp+60h] [xbp-C0h] BYREF
  MethodInfo methoda; // [xsp+78h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4215897 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_Shader__Shader__Shader__Invoke__, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_15998/*"_ClipSharpnessY"*/, v7);
    sub_B0D8A4(&StringLiteral_16002/*"_Color"*/, v8);
    sub_B0D8A4(&StringLiteral_20133/*"joint_all_Base"*/, v9);
    sub_B0D8A4(&StringLiteral_15986/*"_ChocoTex"*/, v10);
    sub_B0D8A4(&StringLiteral_23334/*"weapon"*/, v11);
    sub_B0D8A4(&StringLiteral_12873/*"Shaders/ChocoMap"*/, v12);
    sub_B0D8A4(&StringLiteral_16143/*"_Use_alphawidth"*/, v13);
    sub_B0D8A4(&StringLiteral_4533/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, v14);
    sub_B0D8A4(&StringLiteral_16929/*"body"*/, v15);
    sub_B0D8A4(&StringLiteral_15963/*"_AddColor"*/, v16);
    byte_4215897 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  memset(&v63, 0, sizeof(v63));
  memset(&v62, 0, sizeof(v62));
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  white.fields.r = 0.0;
  white.fields.g = 0.0;
  white.fields.b = 0.0;
  white.fields.a = 0.0;
  UnityEngine_Color___ctor(white, v21, v22, v23, v24, &methoda);
  if ( !obj )
    goto LABEL_55;
  material = (UnityEngine_Material_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                         obj,
                                         (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !material )
    goto LABEL_55;
  klass = material[1].klass;
  v27 = material;
  if ( (int)klass >= 1 )
  {
    v28 = 0LL;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)klass )
        goto LABEL_56;
      v29 = (UnityEngine_Object_o *)*((_QWORD *)&v27[1].monitor + v28);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
        break;
      LODWORD(klass) = v27[1].klass;
      if ( (__int64)++v28 >= (int)klass )
        goto LABEL_23;
    }
    if ( !v29 )
      goto LABEL_55;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v29, 0LL);
    if ( !material )
      goto LABEL_55;
    if ( UnityEngine_Material__HasProperty_40813076(material, (System_String_o *)StringLiteral_16002/*"_Color"*/, 0LL) )
    {
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v29, 0LL);
      if ( !material )
        goto LABEL_55;
      Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16002/*"_Color"*/, 0LL);
      r = Color.fields.r;
      g = Color.fields.g;
      b = Color.fields.b;
      a = Color.fields.a;
    }
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v29, 0LL);
    if ( !material )
LABEL_55:
      sub_B0D97C(material);
    if ( UnityEngine_Material__HasProperty_40813076(material, (System_String_o *)StringLiteral_15963/*"_AddColor"*/, 0LL) )
    {
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v29, 0LL);
      if ( material )
      {
        v74 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_15963/*"_AddColor"*/, 0LL);
        methoda.methodPointer = *(Il2CppMethodPointer *)&v74.fields.r;
        methoda.invoker_method = *(void **)&v74.fields.b;
        goto LABEL_23;
      }
      goto LABEL_55;
    }
  }
LABEL_23:
  v30 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4533/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, 0LL);
  UIAtlas = (UnityEngine_Texture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                       (System_String_o *)StringLiteral_12873/*"Shaders/ChocoMap"*/,
                                       (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_Texture2D___);
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_20133/*"joint_all_Base"*/, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  material = (UnityEngine_Material_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(obj, v33);
  v35 = v27[1].klass;
  if ( (int)v35 >= 1 )
  {
    v36 = (System_Func_string__BacktraceData__BacktraceResult__o *)material;
    v37 = 0LL;
    v59 = v27;
    while ( 1 )
    {
      if ( v37 >= (unsigned int)v35 )
        goto LABEL_56;
      v38 = (UnityEngine_Object_o *)*((_QWORD *)&v27[1].monitor + v37);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v38, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
      {
        if ( !v38 )
          goto LABEL_55;
        material = (UnityEngine_Material_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v38, 0LL);
        if ( !material )
          goto LABEL_55;
        v39 = (int)material[1].klass;
        v40 = material;
        if ( v39 >= 1 )
          break;
      }
LABEL_53:
      v27 = v59;
      ++v37;
      LODWORD(v35) = v59[1].klass;
      if ( (__int64)v37 >= (int)v35 )
        return;
    }
    v41 = 0;
    while ( v41 < v39 )
    {
      v42 = &v40->klass + (int)v41;
      v43 = (UnityEngine_Material_o *)v42[4];
      if ( !v43 )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v42[4], 0LL);
      if ( !v36 )
        goto LABEL_55;
      v44 = (UnityEngine_Shader_o *)System_Func_string__BacktraceData__BacktraceResult___Invoke(
                                      v36,
                                      (System_String_o *)material,
                                      (Backtrace_Unity_Model_BacktraceData_o *)v30,
                                      (const MethodInfo_2623ACC *)Method_System_Func_Shader__Shader__Shader__Invoke__);
      UnityEngine_Material__set_shader(v43, v44, 0LL);
      v75.fields.r = r;
      v75.fields.g = g;
      v75.fields.b = b;
      v75.fields.a = a;
      UnityEngine_Material__SetColor(v43, (System_String_o *)StringLiteral_16002/*"_Color"*/, v75, 0LL);
      *(_QWORD *)&v76.fields.r = methoda.methodPointer;
      *(_QWORD *)&v76.fields.b = methoda.invoker_method;
      UnityEngine_Material__SetColor(v43, (System_String_o *)StringLiteral_15963/*"_AddColor"*/, v76, 0LL);
      UnityEngine_Material__SetTexture(v43, (System_String_o *)StringLiteral_15986/*"_ChocoTex"*/, UIAtlas, 0LL);
      material = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v38, 0LL);
      if ( !material )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
      if ( !material )
        goto LABEL_55;
      if ( System_String__StartsWith((System_String_o *)material, (System_String_o *)StringLiteral_16929/*"body"*/, 0LL) )
        goto LABEL_46;
      material = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v38, 0LL);
      if ( !material )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
      if ( !material )
        goto LABEL_55;
      if ( System_String__StartsWith((System_String_o *)material, (System_String_o *)StringLiteral_23334/*"weapon"*/, 0LL) )
      {
LABEL_46:
        material = (UnityEngine_Material_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                               (UnityEngine_SkinnedMeshRenderer_o *)v38,
                                               0LL);
        if ( !material )
          goto LABEL_55;
        *(UnityEngine_Vector3_o *)&v45 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)material, 0LL);
        if ( !NodeFromName )
          goto LABEL_55;
        v65 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, *(UnityEngine_Vector3_o *)&v45, 0LL);
        x = v65.fields.x;
        y = v65.fields.y;
        z = v65.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0LL);
        v51 = x - localPosition.fields.x;
        v52 = y - localPosition.fields.y;
        v53 = z - localPosition.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v61, (UnityEngine_SkinnedMeshRenderer_o *)v38, 0LL);
        v62 = v61;
        center = UnityEngine_Bounds__get_center(&v62, 0LL);
        v54 = v51 + center.fields.x;
        v55 = v52 + center.fields.y;
        v56 = v53 + center.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v61, (UnityEngine_SkinnedMeshRenderer_o *)v38, 0LL);
        v62 = v61;
        size = UnityEngine_Bounds__get_size(&v62, 0LL);
        v68.fields.x = v54;
        v68.fields.y = v55;
        v68.fields.z = v56;
        UnityEngine_Bounds___ctor(&v63, v68, size, 0LL);
        v60 = v63;
        UnityEngine_SkinnedMeshRenderer__set_localBounds((UnityEngine_SkinnedMeshRenderer_o *)v38, &v60, 0LL);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v38, NodeFromName, 0LL);
      }
      else
      {
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v61, (UnityEngine_SkinnedMeshRenderer_o *)v38, 0LL);
        v62 = v61;
        v69 = UnityEngine_Bounds__get_center(&v62, 0LL);
        v57 = v69.fields.y;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v61, (UnityEngine_SkinnedMeshRenderer_o *)v38, 0LL);
        v62 = v61;
        extents = UnityEngine_Bounds__get_extents(&v62, 0LL);
        UnityEngine_Material__SetFloat(v43, (System_String_o *)StringLiteral_15998/*"_ClipSharpnessY"*/, v57 - extents.fields.y, 0LL);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Material__HasProperty_40813076(
                                             v43,
                                             (System_String_o *)StringLiteral_16143/*"_Use_alphawidth"*/,
                                             0LL);
      if ( ((unsigned __int8)material & 1) != 0 )
        UnityEngine_Material__SetFloat(v43, (System_String_o *)StringLiteral_16143/*"_Use_alphawidth"*/, 1.0, 0LL);
      v39 = (int)v40[1].klass;
      if ( (int)++v41 >= v39 )
        goto LABEL_53;
    }
LABEL_56:
    v58 = sub_B0D9A8(material);
    sub_B0D948(v58, 0LL);
  }
}


void __fastcall ServantAssetLoadManager__changeChocoSahder(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v17; // s4
  float v18; // s5
  float v19; // s6
  float v20; // s7
  UnityEngine_Material_o *material; // x0
  UnityEngine_Material_c *klass; // x8
  UnityEngine_Material_o *v23; // x21
  unsigned __int64 v24; // x23
  UnityEngine_Object_o *v25; // x20
  UnityEngine_Shader_o *v26; // x20
  const MethodInfo *v27; // x1
  UnityEngine_Texture_o *UIAtlas; // x21
  System_Func_Shader__Shader__Shader__o *ReplaceChocoShaderFunc; // x22
  UnityEngine_Material_c *v30; // x8
  Il2CppClass *v31; // x9
  unsigned __int64 v32; // x25
  UnityEngine_Object_o *v33; // x23
  int v34; // w8
  UnityEngine_Material_o *v35; // x23
  unsigned int v36; // w28
  UnityEngine_Material_c **v37; // x8
  UnityEngine_Material_o *v38; // x24
  UnityEngine_Shader_o *v39; // x0
  __int64 v40; // x0
  MethodInfo v41; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4215898 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_Shader__Shader__Shader__Invoke__, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_16002/*"_Color"*/, v7);
    sub_B0D8A4(&StringLiteral_15986/*"_ChocoTex"*/, v8);
    sub_B0D8A4(&StringLiteral_4532/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v9);
    sub_B0D8A4(&StringLiteral_12873/*"Shaders/ChocoMap"*/, v10);
    sub_B0D8A4(&StringLiteral_16143/*"_Use_alphawidth"*/, v11);
    sub_B0D8A4(&StringLiteral_15963/*"_AddColor"*/, v12);
    byte_4215898 = 1;
  }
  v41.methodPointer = 0LL;
  v41.invoker_method = 0LL;
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  white.fields.r = 0.0;
  white.fields.g = 0.0;
  white.fields.b = 0.0;
  white.fields.a = 0.0;
  UnityEngine_Color___ctor(white, v17, v18, v19, v20, &v41);
  if ( !obj )
    goto LABEL_46;
  material = (UnityEngine_Material_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                         obj,
                                         (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !material )
    goto LABEL_46;
  klass = material[1].klass;
  v23 = material;
  if ( (int)klass < 1 )
    goto LABEL_23;
  v24 = 0LL;
  while ( 1 )
  {
    if ( v24 >= (unsigned int)klass )
      goto LABEL_47;
    v25 = (UnityEngine_Object_o *)*((_QWORD *)&v23[1].monitor + v24);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
    if ( ((unsigned __int8)material & 1) == 0 )
      break;
    LODWORD(klass) = v23[1].klass;
    if ( (__int64)++v24 >= (int)klass )
      goto LABEL_23;
  }
  if ( !v25 )
    goto LABEL_46;
  material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v25, 0LL);
  if ( !material )
    goto LABEL_46;
  if ( UnityEngine_Material__HasProperty_40813076(material, (System_String_o *)StringLiteral_16002/*"_Color"*/, 0LL) )
  {
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v25, 0LL);
    if ( !material )
      goto LABEL_46;
    Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16002/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v25, 0LL);
  if ( !material )
LABEL_46:
    sub_B0D97C(material);
  if ( UnityEngine_Material__HasProperty_40813076(material, (System_String_o *)StringLiteral_15963/*"_AddColor"*/, 0LL) )
  {
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v25, 0LL);
    if ( !material )
      goto LABEL_46;
    v44 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_15963/*"_AddColor"*/, 0LL);
    v41.methodPointer = *(Il2CppMethodPointer *)&v44.fields.r;
    v41.invoker_method = *(void **)&v44.fields.b;
  }
LABEL_23:
  v26 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4532/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
  UIAtlas = (UnityEngine_Texture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                       (System_String_o *)StringLiteral_12873/*"Shaders/ChocoMap"*/,
                                       (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_Texture2D___);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ReplaceChocoShaderFunc = ServantAssetLoadManager__GetReplaceChocoShaderFunc(obj, v27);
  material = (UnityEngine_Material_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                         obj,
                                         (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !material )
    goto LABEL_46;
  v30 = material[1].klass;
  v31 = (Il2CppClass *)material;
  if ( (int)v30 >= 1 )
  {
    v32 = 0LL;
    v41.klass = (Il2CppClass *)material;
    while ( 1 )
    {
      if ( v32 >= (unsigned int)v30 )
        goto LABEL_47;
      v33 = (UnityEngine_Object_o *)*((_QWORD *)&v31->_1.byval_arg.data + v32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v33, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
      {
        if ( !v33 )
          goto LABEL_46;
        material = (UnityEngine_Material_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v33, 0LL);
        if ( !material )
          goto LABEL_46;
        v34 = (int)material[1].klass;
        v35 = material;
        if ( v34 >= 1 )
          break;
      }
LABEL_44:
      v31 = v41.klass;
      ++v32;
      LODWORD(v30) = v41.klass->_1.namespaze;
      if ( (__int64)v32 >= (int)v30 )
        return;
    }
    v36 = 0;
    while ( v36 < v34 )
    {
      v37 = &v35->klass + (int)v36;
      v38 = (UnityEngine_Material_o *)v37[4];
      if ( !v38 )
        goto LABEL_46;
      material = (UnityEngine_Material_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v37[4], 0LL);
      if ( !ReplaceChocoShaderFunc )
        goto LABEL_46;
      v39 = (UnityEngine_Shader_o *)System_Func_string__BacktraceData__BacktraceResult___Invoke(
                                      (System_Func_string__BacktraceData__BacktraceResult__o *)ReplaceChocoShaderFunc,
                                      (System_String_o *)material,
                                      (Backtrace_Unity_Model_BacktraceData_o *)v26,
                                      (const MethodInfo_2623ACC *)Method_System_Func_Shader__Shader__Shader__Invoke__);
      UnityEngine_Material__set_shader(v38, v39, 0LL);
      v45.fields.r = r;
      v45.fields.g = g;
      v45.fields.b = b;
      v45.fields.a = a;
      UnityEngine_Material__SetColor(v38, (System_String_o *)StringLiteral_16002/*"_Color"*/, v45, 0LL);
      *(_QWORD *)&v46.fields.r = v41.methodPointer;
      *(_QWORD *)&v46.fields.b = v41.invoker_method;
      UnityEngine_Material__SetColor(v38, (System_String_o *)StringLiteral_15963/*"_AddColor"*/, v46, 0LL);
      UnityEngine_Material__SetTexture(v38, (System_String_o *)StringLiteral_15986/*"_ChocoTex"*/, UIAtlas, 0LL);
      material = (UnityEngine_Material_o *)UnityEngine_Material__HasProperty_40813076(
                                             v38,
                                             (System_String_o *)StringLiteral_16143/*"_Use_alphawidth"*/,
                                             0LL);
      if ( ((unsigned __int8)material & 1) != 0 )
        UnityEngine_Material__SetFloat(v38, (System_String_o *)StringLiteral_16143/*"_Use_alphawidth"*/, 1.0, 0LL);
      v34 = (int)v35[1].klass;
      if ( (int)++v36 >= v34 )
        goto LABEL_44;
    }
LABEL_47:
    v40 = sub_B0D9A8(material);
    sub_B0D948(v40, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__changeDeadShader(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v18; // s4
  float v19; // s5
  float v20; // s6
  float v21; // s7
  UnityEngine_Material_o *material; // x0
  UnityEngine_Material_c *klass; // x8
  UnityEngine_Material_o *v24; // x24
  unsigned __int64 v25; // x19
  UnityEngine_Object_o *v26; // x20
  UnityEngine_Shader_o *v27; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v29; // x1
  UnityEngine_Transform_o *NodeFromName; // x21
  UnityEngine_Material_c *v31; // x8
  System_Func_string__BacktraceData__BacktraceResult__o *v32; // x22
  unsigned __int64 v33; // x26
  UnityEngine_Object_o *v34; // x23
  int v35; // w8
  UnityEngine_Material_o *v36; // x24
  unsigned int v37; // w19
  UnityEngine_Material_c **v38; // x8
  UnityEngine_Material_o *v39; // x25
  UnityEngine_Shader_o *v40; // x0
  int v41; // s0
  float x; // s13
  float y; // s14
  float z; // s15
  float v47; // s13
  float v48; // s14
  float v49; // s15
  float v50; // s13
  float v51; // s14
  float v52; // s15
  float v53; // s13
  __int64 v54; // x0
  UnityEngine_Material_o *v55; // [xsp+8h] [xbp-118h]
  UnityEngine_Bounds_o v56; // [xsp+10h] [xbp-110h] BYREF
  UnityEngine_Bounds_o v57; // [xsp+28h] [xbp-F8h] BYREF
  UnityEngine_Bounds_o v58; // [xsp+40h] [xbp-E0h] BYREF
  UnityEngine_Bounds_o v59; // [xsp+60h] [xbp-C0h] BYREF
  MethodInfo methoda; // [xsp+78h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4215896 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_Shader__Shader__Shader__Invoke__, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_15998/*"_ClipSharpnessY"*/, v6);
    sub_B0D8A4(&StringLiteral_4531/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, v7);
    sub_B0D8A4(&StringLiteral_16002/*"_Color"*/, v8);
    sub_B0D8A4(&StringLiteral_20133/*"joint_all_Base"*/, v9);
    sub_B0D8A4(&StringLiteral_23334/*"weapon"*/, v10);
    sub_B0D8A4(&StringLiteral_16143/*"_Use_alphawidth"*/, v11);
    sub_B0D8A4(&StringLiteral_16929/*"body"*/, v12);
    sub_B0D8A4(&StringLiteral_15963/*"_AddColor"*/, v13);
    byte_4215896 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  memset(&v59, 0, sizeof(v59));
  memset(&v58, 0, sizeof(v58));
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  white.fields.r = 0.0;
  white.fields.g = 0.0;
  white.fields.b = 0.0;
  white.fields.a = 0.0;
  UnityEngine_Color___ctor(white, v18, v19, v20, v21, &methoda);
  if ( !obj )
    goto LABEL_55;
  material = (UnityEngine_Material_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                         obj,
                                         (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !material )
    goto LABEL_55;
  klass = material[1].klass;
  v24 = material;
  if ( (int)klass >= 1 )
  {
    v25 = 0LL;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)klass )
        goto LABEL_56;
      v26 = (UnityEngine_Object_o *)*((_QWORD *)&v24[1].monitor + v25);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v26, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
        break;
      LODWORD(klass) = v24[1].klass;
      if ( (__int64)++v25 >= (int)klass )
        goto LABEL_23;
    }
    if ( !v26 )
      goto LABEL_55;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v26, 0LL);
    if ( !material )
      goto LABEL_55;
    if ( UnityEngine_Material__HasProperty_40813076(material, (System_String_o *)StringLiteral_16002/*"_Color"*/, 0LL) )
    {
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v26, 0LL);
      if ( !material )
        goto LABEL_55;
      Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16002/*"_Color"*/, 0LL);
      r = Color.fields.r;
      g = Color.fields.g;
      b = Color.fields.b;
      a = Color.fields.a;
    }
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v26, 0LL);
    if ( !material )
LABEL_55:
      sub_B0D97C(material);
    if ( UnityEngine_Material__HasProperty_40813076(material, (System_String_o *)StringLiteral_15963/*"_AddColor"*/, 0LL) )
    {
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v26, 0LL);
      if ( material )
      {
        v70 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_15963/*"_AddColor"*/, 0LL);
        methoda.methodPointer = *(Il2CppMethodPointer *)&v70.fields.r;
        methoda.invoker_method = *(void **)&v70.fields.b;
        goto LABEL_23;
      }
      goto LABEL_55;
    }
  }
LABEL_23:
  v27 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4531/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, 0LL);
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_20133/*"joint_all_Base"*/, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  material = (UnityEngine_Material_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(obj, v29);
  v31 = v24[1].klass;
  if ( (int)v31 >= 1 )
  {
    v32 = (System_Func_string__BacktraceData__BacktraceResult__o *)material;
    v33 = 0LL;
    v55 = v24;
    while ( 1 )
    {
      if ( v33 >= (unsigned int)v31 )
        goto LABEL_56;
      v34 = (UnityEngine_Object_o *)*((_QWORD *)&v24[1].monitor + v33);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v34, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
      {
        if ( !v34 )
          goto LABEL_55;
        material = (UnityEngine_Material_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v34, 0LL);
        if ( !material )
          goto LABEL_55;
        v35 = (int)material[1].klass;
        v36 = material;
        if ( v35 >= 1 )
          break;
      }
LABEL_53:
      v24 = v55;
      ++v33;
      LODWORD(v31) = v55[1].klass;
      if ( (__int64)v33 >= (int)v31 )
        return;
    }
    v37 = 0;
    while ( v37 < v35 )
    {
      v38 = &v36->klass + (int)v37;
      v39 = (UnityEngine_Material_o *)v38[4];
      if ( !v39 )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v38[4], 0LL);
      if ( !v32 )
        goto LABEL_55;
      v40 = (UnityEngine_Shader_o *)System_Func_string__BacktraceData__BacktraceResult___Invoke(
                                      v32,
                                      (System_String_o *)material,
                                      (Backtrace_Unity_Model_BacktraceData_o *)v27,
                                      (const MethodInfo_2623ACC *)Method_System_Func_Shader__Shader__Shader__Invoke__);
      UnityEngine_Material__set_shader(v39, v40, 0LL);
      v71.fields.r = r;
      v71.fields.g = g;
      v71.fields.b = b;
      v71.fields.a = a;
      UnityEngine_Material__SetColor(v39, (System_String_o *)StringLiteral_16002/*"_Color"*/, v71, 0LL);
      *(_QWORD *)&v72.fields.r = methoda.methodPointer;
      *(_QWORD *)&v72.fields.b = methoda.invoker_method;
      UnityEngine_Material__SetColor(v39, (System_String_o *)StringLiteral_15963/*"_AddColor"*/, v72, 0LL);
      material = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v34, 0LL);
      if ( !material )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
      if ( !material )
        goto LABEL_55;
      if ( System_String__StartsWith((System_String_o *)material, (System_String_o *)StringLiteral_16929/*"body"*/, 0LL) )
        goto LABEL_46;
      material = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v34, 0LL);
      if ( !material )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
      if ( !material )
        goto LABEL_55;
      if ( System_String__StartsWith((System_String_o *)material, (System_String_o *)StringLiteral_23334/*"weapon"*/, 0LL) )
      {
LABEL_46:
        material = (UnityEngine_Material_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                               (UnityEngine_SkinnedMeshRenderer_o *)v34,
                                               0LL);
        if ( !material )
          goto LABEL_55;
        *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)material, 0LL);
        if ( !NodeFromName )
          goto LABEL_55;
        v61 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, *(UnityEngine_Vector3_o *)&v41, 0LL);
        x = v61.fields.x;
        y = v61.fields.y;
        z = v61.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0LL);
        v47 = x - localPosition.fields.x;
        v48 = y - localPosition.fields.y;
        v49 = z - localPosition.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v57, (UnityEngine_SkinnedMeshRenderer_o *)v34, 0LL);
        v58 = v57;
        center = UnityEngine_Bounds__get_center(&v58, 0LL);
        v50 = v47 + center.fields.x;
        v51 = v48 + center.fields.y;
        v52 = v49 + center.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v57, (UnityEngine_SkinnedMeshRenderer_o *)v34, 0LL);
        v58 = v57;
        size = UnityEngine_Bounds__get_size(&v58, 0LL);
        v64.fields.x = v50;
        v64.fields.y = v51;
        v64.fields.z = v52;
        UnityEngine_Bounds___ctor(&v59, v64, size, 0LL);
        v56 = v59;
        UnityEngine_SkinnedMeshRenderer__set_localBounds((UnityEngine_SkinnedMeshRenderer_o *)v34, &v56, 0LL);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v34, NodeFromName, 0LL);
      }
      else
      {
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v57, (UnityEngine_SkinnedMeshRenderer_o *)v34, 0LL);
        v58 = v57;
        v65 = UnityEngine_Bounds__get_center(&v58, 0LL);
        v53 = v65.fields.y;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v57, (UnityEngine_SkinnedMeshRenderer_o *)v34, 0LL);
        v58 = v57;
        extents = UnityEngine_Bounds__get_extents(&v58, 0LL);
        UnityEngine_Material__SetFloat(v39, (System_String_o *)StringLiteral_15998/*"_ClipSharpnessY"*/, v53 - extents.fields.y, 0LL);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Material__HasProperty_40813076(
                                             v39,
                                             (System_String_o *)StringLiteral_16143/*"_Use_alphawidth"*/,
                                             0LL);
      if ( ((unsigned __int8)material & 1) != 0 )
        UnityEngine_Material__SetFloat(v39, (System_String_o *)StringLiteral_16143/*"_Use_alphawidth"*/, 1.0, 0LL);
      v35 = (int)v36[1].klass;
      if ( (int)++v37 >= v35 )
        goto LABEL_53;
    }
LABEL_56:
    v54 = sub_B0D9A8(material);
    sub_B0D948(v54, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__checkBattleVoice(
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *voiceTypeId,
        bool isNp,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v12; // x6

  if ( (byte_42158BE & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_42158BE = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__checkBattleVoicelocal(
           Instance,
           svtId,
           limit,
           overwriteSvtVoiceId,
           voiceTypeId,
           isNp,
           v12);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__checkBattleVoicelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *voiceTypeId,
        bool isNp,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  ServantEntity_o *SvtEntity; // x25
  const MethodInfo *v18; // x3
  int32_t VoicePrefix; // w26
  const MethodInfo *v20; // x3
  int32_t VoiceId; // w0
  int32_t v22; // w9
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  __int64 *v25; // x8
  System_String_o *v26; // x20
  System_String_o *v27; // x19
  System_String_o *v28; // x0
  System_String_o *v29; // x19
  int32_t v32; // [xsp+8h] [xbp-48h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42158BF & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&SoundManager_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_9622/*"NoblePhantasm_"*/, v14);
    sub_B0D8A4(&StringLiteral_23577/*"{0:D0}_{1}"*/, v15);
    sub_B0D8A4(&StringLiteral_12783/*"Servants_"*/, v16);
    byte_42158BF = 1;
  }
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&limit);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v18);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v20);
  if ( overwriteSvtVoiceId )
    v22 = overwriteSvtVoiceId;
  else
    v22 = VoiceId;
  v32 = VoicePrefix;
  v33 = v22;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v24 = System_String__Format_43845440((System_String_o *)StringLiteral_23577/*"{0:D0}_{1}"*/, v23, (Il2CppObject *)voiceTypeId, 0LL);
  if ( SvtEntity )
  {
    v25 = &StringLiteral_9622/*"NoblePhantasm_"*/;
    v26 = v24;
    if ( !isNp )
      v25 = &StringLiteral_12783/*"Servants_"*/;
    v27 = (System_String_o *)*v25;
    v28 = System_Int32__ToString((int32_t)&v33, 0LL);
    v29 = System_String__Concat_43849904(v27, v28, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    return SoundManager__checkServantVoice(v29, v26, 0, 0LL);
  }
  else
  {
    return 0;
  }
}


bool __fastcall ServantAssetLoadManager__checkLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4215871 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_4215871 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__checkLoadlocal(Instance, v3);
}


bool __fastcall ServantAssetLoadManager__checkLoadlocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  ServantAssetLoadManager_o *v2; // x19
  struct System_Collections_Generic_List_string__o *loadlist; // x8
  struct System_Collections_Generic_List_string__o *downloadlist; // x8

  v2 = this;
  if ( (byte_4215872 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, method);
    byte_4215872 = 1;
  }
  loadlist = v2->fields.loadlist;
  if ( !loadlist )
    goto LABEL_9;
  if ( loadlist->fields._size > 0 )
    return 1;
  downloadlist = v2->fields.downloadlist;
  if ( !downloadlist )
LABEL_9:
    sub_B0D97C(this);
  if ( downloadlist->fields._size > 0 )
    return 1;
  return v2->fields.soundCount > 0;
}


void __fastcall ServantAssetLoadManager__checkMaster(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  struct ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct ServantLimitMaster_o *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleServantConfConponent_o *p_svtlimitaddmaster; // x19
  struct ServantLimitAddMaster_o *svtlimitaddmaster; // t1
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_421585B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421585B = 1;
  }
  if ( !this->fields.svtmaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_WarQuestSelectionMaster = (struct ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    this->fields.svtmaster = MasterData_WarQuestSelectionMaster;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.svtmaster,
      (System_Int32_array **)MasterData_WarQuestSelectionMaster,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( !this->fields.svtlimitmaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    v14 = (struct ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    this->fields.svtlimitmaster = v14;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.svtlimitmaster,
      (System_Int32_array **)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  p_svtlimitaddmaster = (BattleServantConfConponent_o *)&this->fields.svtlimitaddmaster;
  if ( svtlimitaddmaster )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_B0D97C(Instance);
  v23 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  p_svtlimitaddmaster->klass = (BattleServantConfConponent_c *)v23;
  sub_B0D840(p_svtlimitaddmaster, v23, v24, v25, v26, v27, v28, v29);
}


void __fastcall ServantAssetLoadManager__clearServantlist(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_421586F & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_421586F = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__clearServantlistlocal(Instance, v3);
}


void __fastcall ServantAssetLoadManager__clearServantlistlocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadlist; // x0

  if ( (byte_4215870 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Clear__, method);
    byte_4215870 = 1;
  }
  loadlist = this->fields.loadlist;
  if ( !loadlist
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadlist,
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__),
        (loadlist = this->fields.downloadlist) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadlist,
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__),
        (loadlist = this->fields.loadedList) == 0LL) )
  {
    sub_B0D97C(loadlist);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadlist,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__);
  this->fields.soundCount = 0;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__createShadowEffect(
        ServantAssetLoadManager_o *this,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x0
  System_Xml_Schema_XmlSchemaObject_o *UIAtlas; // x0
  System_String_o *v14; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v16; // x19
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x8
  int v19; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42158CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__, *(_QWORD *)&tp);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__Object__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__Object__set_Item__, v6);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_GameObject___, v10);
    sub_B0D8A4(&StringLiteral_18314/*"effect/ef_shadow0"*/, v11);
    byte_42158CA = 1;
  }
  v19 = tp + 1;
  v12 = System_Int32__ToString((int32_t)&v19, 0LL);
  UIAtlas = (System_Xml_Schema_XmlSchemaObject_o *)System_String__Concat_43849904(
                                                     (System_String_o *)StringLiteral_18314/*"effect/ef_shadow0"*/,
                                                     v12,
                                                     0LL);
  if ( !this->fields._releaseAssets )
    goto LABEL_17;
  v14 = (System_String_o *)UIAtlas;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields._releaseAssets,
          (System_Xml_XmlQualifiedName_o *)UIAtlas,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__) )
  {
    UIAtlas = (System_Xml_Schema_XmlSchemaObject_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                       v14,
                                                       (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_GameObject___);
    releaseAssets = this->fields._releaseAssets;
    if ( releaseAssets )
    {
      v16 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UIAtlas;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)releaseAssets,
        (System_Xml_XmlQualifiedName_o *)v14,
        UIAtlas,
        (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__Object__set_Item__);
      goto LABEL_13;
    }
LABEL_17:
    sub_B0D97C(UIAtlas);
  }
  UIAtlas = (System_Xml_Schema_XmlSchemaObject_o *)this->fields._releaseAssets;
  if ( !UIAtlas )
    goto LABEL_17;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)UIAtlas,
           (System_Type_o *)v14,
           (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__Object__get_Item__);
  if ( Item )
  {
    if ( (UnityEngine_GameObject_c *)Item->klass == UnityEngine_GameObject_TypeInfo )
      v16 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Item;
    else
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
LABEL_13:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       v16,
                                       (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


void __fastcall ServantAssetLoadManager__endloadList(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadlist; // x0
  struct System_String_o *name; // x20

  if ( (byte_4215875 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, data);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Remove__, v5);
    byte_4215875 = 1;
  }
  if ( data )
  {
    loadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadlist;
    if ( !loadlist )
      goto LABEL_13;
    name = data->fields.name;
    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           loadlist,
           (WarBoardManager_TaskList_o *)name,
           (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadlist;
      if ( !loadlist )
        goto LABEL_13;
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadlist,
        (WarBoardManager_TaskList_o *)name,
        (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_string__Remove__);
    }
    loadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.downloadlist;
    if ( !loadlist )
LABEL_13:
      sub_B0D97C(loadlist);
    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           loadlist,
           (WarBoardManager_TaskList_o *)name,
           (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.downloadlist;
      if ( loadlist )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          loadlist,
          (WarBoardManager_TaskList_o *)name,
          (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_string__Remove__);
        return;
      }
      goto LABEL_13;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getActorFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v7; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_421588A & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    sub_B0D8A4(&StringLiteral_12776/*"Servants/"*/, v5);
    byte_421588A = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  BattleChrId = ServantAssetLoadManager__getBattleChrId(Instance, svtId, limitCount, v7);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_12776/*"Servants/"*/, BattleChrId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getActorFolderNameFromDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ServantAssetLoadManager_o *Instance; // x21
  __int64 LimitCountByImageLimitCostumeIn; // x0
  const MethodInfo *v9; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_4215889 & 1) == 0 )
  {
    sub_B0D8A4(&ImageLimitCount_TypeInfo, *(_QWORD *)&displimitCount);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_12776/*"Servants/"*/, v6);
    byte_4215889 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(displimitCount, 0LL);
  if ( !Instance )
    sub_B0D97C(LimitCountByImageLimitCostumeIn);
  BattleChrId = ServantAssetLoadManager__getBattleChrId(Instance, svtId, LimitCountByImageLimitCostumeIn, v9);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_12776/*"Servants/"*/, BattleChrId, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getActorFolderName_26488676(
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421588B & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_12776/*"Servants/"*/, v3);
    byte_421588B = 1;
  }
  v6 = svtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_12776/*"Servants/"*/, v4, 0LL);
}


UnityEngine_Texture2D_o *__fastcall ServantAssetLoadManager__getAssetObject_Texture2D_(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *file,
        const MethodInfo_204EA78 *method)
{
  UnityEngine_Texture2D_o *result; // x0

  if ( (byte_4219F52 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, path);
    byte_4219F52 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  result = (UnityEngine_Texture2D_o *)AssetManager__getAssetStorage(path, 0LL);
  if ( result )
    return (UnityEngine_Texture2D_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, System_String_o *))method->rgctx_data->_0_AssetData_GetObject_T_->methodPointer)(
                                        result,
                                        file);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getBattleChrId(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantLimitAddMaster_o *svtlimitaddmaster; // x0

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  if ( !svtlimitaddmaster )
    sub_B0D97C(0LL);
  return ServantLimitAddMaster__getBattleChrId(svtlimitaddmaster, svtId, limitCount, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getCameraActionPath(int32_t cameraId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = cameraId;
  if ( (byte_42158CD & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12777/*"Servants/Camera/"*/, method);
    byte_42158CD = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_12777/*"Servants/Camera/"*/, v2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getCommandCardLoadFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421585E & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&limitCount);
    sub_B0D8A4(&StringLiteral_12779/*"Servants/Commands/"*/, v4);
    byte_421585E = 1;
  }
  v7 = svtId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12779/*"Servants/Commands/"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421585D & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&displimitCount);
    sub_B0D8A4(&StringLiteral_12779/*"Servants/Commands/"*/, v4);
    byte_421585D = 1;
  }
  v7 = svtId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12779/*"Servants/Commands/"*/, v5, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getNameEffectPath(
        int32_t enemyNameEffectId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = enemyNameEffectId;
  if ( (byte_42158E1 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5829/*"Effect/BattleCommon/NameEffect/"*/, method);
    byte_42158E1 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_5829/*"Effect/BattleCommon/NameEffect/"*/, v2, 0LL);
}


int32_t __fastcall ServantAssetLoadManager__getSkillCutInId(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  if ( skillInfo )
    return ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._7_getCutInId.method)(
             skillInfo,
             skillInfo->klass->vtable._8_PreLoad.methodPtr);
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getSkillCutInPath(
        ServantAssetLoadManager_o *this,
        int32_t cutInId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42158AE & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&cutInId);
    sub_B0D8A4(&StringLiteral_5852/*"Effect/CutIn/Skill/{0}"*/, v4);
    byte_42158AE = 1;
  }
  v7 = cutInId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Format((System_String_o *)StringLiteral_5852/*"Effect/CutIn/Skill/{0}"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getStatusImageFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4215866 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&limitCount);
    sub_B0D8A4(&StringLiteral_12782/*"Servants/Status/"*/, v4);
    byte_4215866 = 1;
  }
  v7 = svtId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12782/*"Servants/Status/"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getStatusImageFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4215865 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&displimitCount);
    sub_B0D8A4(&StringLiteral_12782/*"Servants/Status/"*/, v4);
    byte_4215865 = 1;
  }
  v7 = svtId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12782/*"Servants/Status/"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *__fastcall ServantAssetLoadManager__getSvtEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct ServantMaster_o *svtmaster; // x0

  if ( (byte_421585C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, *(_QWORD *)&svtId);
    byte_421585C = 1;
  }
  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtmaster = this->fields.svtmaster;
  if ( !svtmaster )
    sub_B0D97C(0LL);
  return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)svtmaster,
                              svtId,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitAddEntity_o *__fastcall ServantAssetLoadManager__getSvtLimitAddEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  ServantLimitAddMaster_o *svtlimitaddmaster; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  if ( !svtlimitaddmaster )
    sub_B0D97C(0LL);
  if ( ServantLimitAddMaster__TryGetEntity(svtlimitaddmaster, &entity, svtId, limitCnt, 0LL) )
    return entity;
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ServantLimitEntity_o *__fastcall ServantAssetLoadManager__getSvtLimitEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  ServantLimitMaster_o *svtlimitmaster; // x0

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtlimitmaster = this->fields.svtlimitmaster;
  if ( !svtlimitmaster )
    sub_B0D97C(0LL);
  return ServantLimitMaster__GetEntity(svtlimitmaster, svtId, limitCnt, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantAssetLoadManager__getVoiceId(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 SvtVoiceId; // x0

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, 0LL);
  if ( !this->fields.svtlimitaddmaster )
    sub_B0D97C(SvtVoiceId);
  return ServantLimitAddMaster__getVoiceId(this->fields.svtlimitaddmaster, SvtVoiceId, limitCount, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantAssetLoadManager__getVoicePrefix(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 SvtVoiceId; // x0

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, 0LL);
  if ( !this->fields.svtlimitaddmaster )
    sub_B0D97C(SvtVoiceId);
  return ServantLimitAddMaster__getVoicePrefix(this->fields.svtlimitaddmaster, SvtVoiceId, limitCount, 0LL);
}


bool __fastcall ServantAssetLoadManager__get_IsRetryTransition(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  return this->fields._IsRetryTransition_k__BackingField;
}


int32_t __fastcall ServantAssetLoadManager__get_retryStatus(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  return this->fields._retryStatus_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadActorEffectFromActor(
        int32_t svtId,
        int32_t limitCount,
        int32_t weapongroup,
        System_String_o *name,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  int32_t v9; // w3
  const MethodInfo *v10; // x5

  if ( (byte_421589D & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_421589D = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__loadActorEffectlocalFromActor(Instance, svtId, limitCount, v9, name, v10);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadActorEffectlocalFromActor(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t weapongroup,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v10; // x1
  System_String_o *BattleChrId; // x0
  System_String_o *v12; // x1

  if ( (byte_421589E & 1) == 0 )
  {
    sub_B0D8A4(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, *(_QWORD *)&svtId);
    sub_B0D8A4(&StringLiteral_12776/*"Servants/"*/, v10);
    byte_421589E = 1;
  }
  BattleChrId = ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, *(const MethodInfo **)&weapongroup);
  v12 = System_String__Concat_43849904((System_String_o *)StringLiteral_12776/*"Servants/"*/, BattleChrId, 0LL);
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                       this,
                                       v12,
                                       name,
                                       (const MethodInfo_204EA78 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadActorMotion(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t weapongroup,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x4

  if ( (byte_42158B3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_42158B3 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__loadActorMotionlocal(Instance, parent, v7, weapongroup, v8);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadActorMotionlocal(
        ServantAssetLoadManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t weapongroup,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  UnityEngine_Texture2D_o *AssetObject_Texture2D; // x19
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v15; // x19
  UnityEngine_Transform_o *v16; // x21
  UnityEngine_Transform_o *v17; // x20
  int v18; // s0
  UnityEngine_Transform_o *v21; // x20
  int v22; // s0
  UnityEngine_Transform_o *v25; // x20
  int v26; // s0
  int32_t v30; // [xsp+Ch] [xbp-14h] BYREF

  v30 = weapongroup;
  if ( (byte_42158B4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, parent);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v8);
    sub_B0D8A4(&StringLiteral_20637/*"motion"*/, v9);
    sub_B0D8A4(&StringLiteral_12780/*"Servants/Motion/"*/, v10);
    byte_42158B4 = 1;
  }
  v11 = System_Int32__ToString((int32_t)&v30, 0LL);
  v12 = System_String__Concat_43849904((System_String_o *)StringLiteral_12780/*"Servants/Motion/"*/, v11, 0LL);
  AssetObject_Texture2D = ServantAssetLoadManager__getAssetObject_Texture2D_(
                            this,
                            v12,
                            (System_String_o *)StringLiteral_20637/*"motion"*/,
                            (const MethodInfo_204EA78 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                            (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_13;
  v15 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !parent )
    goto LABEL_13;
  v16 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v16 )
    goto LABEL_13;
  UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)transform, 0LL);
  v17 = UnityEngine_GameObject__get_transform(v15, 0LL);
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v17
    || (UnityEngine_Transform__set_localPosition(v17, *(UnityEngine_Vector3_o *)&v18, 0LL),
        v21 = UnityEngine_GameObject__get_transform(v15, 0LL),
        *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_up(0LL),
        !v21)
    || (UnityEngine_Transform__set_eulerAngles(v21, *(UnityEngine_Vector3_o *)&v22, 0LL),
        v25 = UnityEngine_GameObject__get_transform(v15, 0LL),
        *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_one(0LL),
        !v25) )
  {
LABEL_13:
    sub_B0D97C(transform);
  }
  UnityEngine_Transform__set_localScale(v25, *(UnityEngine_Vector3_o *)&v26, 0LL);
  return v15;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_TextAsset_o *__fastcall ServantAssetLoadManager__loadAnimEvents(
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v8; // x4

  if ( (byte_4215899 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4215899 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__loadAnimEventslocal(Instance, svtId, limitCount, isForce, v8);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_TextAsset_o *__fastcall ServantAssetLoadManager__loadAnimEventslocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *ActorFolderName_26488676; // x0

  if ( (byte_421589A & 1) == 0 )
  {
    sub_B0D8A4(&Method_ServantAssetLoadManager_getAssetObject_TextAsset___, *(_QWORD *)&svtId);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_18749/*"fbxevent"*/, v10);
    byte_421589A = 1;
  }
  if ( isForce )
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ActorFolderName_26488676 = ServantAssetLoadManager__getActorFolderName_26488676(svtId, *(const MethodInfo **)&svtId);
  }
  else
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ActorFolderName_26488676 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  }
  if ( !this )
    sub_B0D97C(ActorFolderName_26488676);
  return (UnityEngine_TextAsset_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                      this,
                                      ActorFolderName_26488676,
                                      (System_String_o *)StringLiteral_18749/*"fbxevent"*/,
                                      (const MethodInfo_204EA78 *)Method_ServantAssetLoadManager_getAssetObject_TextAsset___);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleActor(
        System_String_o **assetPath,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v12; // x6

  if ( (byte_4215890 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, parent);
    byte_4215890 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__loadBattleActorlocal(Instance, assetPath, parent, svtId, limitCount, isForce, v12);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleActorlocal(
        ServantAssetLoadManager_o *this,
        System_String_o **assetPath,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o *ActorFolderName_26488676; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Texture2D_o *AssetObject_Texture2D; // x21
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v26; // x21
  UnityEngine_Transform_o *v27; // x22
  UnityEngine_Transform_o *v28; // x19
  int v29; // s0
  UnityEngine_Transform_o *v32; // x19
  int v33; // s0

  if ( (byte_4215891 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, assetPath);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v14);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_17476/*"chr"*/, v16);
    byte_4215891 = 1;
  }
  if ( isForce )
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ActorFolderName_26488676 = ServantAssetLoadManager__getActorFolderName_26488676(
                                 svtId,
                                 (const MethodInfo *)assetPath);
  }
  else
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ActorFolderName_26488676 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 (const MethodInfo *)parent);
  }
  *assetPath = ActorFolderName_26488676;
  sub_B0D840(
    (BattleServantConfConponent_o *)assetPath,
    (System_Int32_array **)ActorFolderName_26488676,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  AssetObject_Texture2D = ServantAssetLoadManager__getAssetObject_Texture2D_(
                            this,
                            *assetPath,
                            (System_String_o *)StringLiteral_17476/*"chr"*/,
                            (const MethodInfo_204EA78 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                            (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_22;
  v26 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !parent )
    goto LABEL_22;
  v27 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v27 )
    goto LABEL_22;
  UnityEngine_Transform__set_parent(v27, (UnityEngine_Transform_o *)transform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v26, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0LL),
        v28 = UnityEngine_GameObject__get_transform(v26, 0LL),
        *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_up(0LL),
        !v28)
    || (UnityEngine_Transform__set_eulerAngles(v28, *(UnityEngine_Vector3_o *)&v29, 0LL),
        v32 = UnityEngine_GameObject__get_transform(v26, 0LL),
        *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_one(0LL),
        !v32) )
  {
LABEL_22:
    sub_B0D97C(transform);
  }
  UnityEngine_Transform__set_localScale(v32, *(UnityEngine_Vector3_o *)&v33, 0LL);
  return v26;
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleCommonEffect(
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_42158AA & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, name);
    byte_42158AA = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__loadBattleCommonEffectLocal(Instance, path, name, v6);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleCommonEffectLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *AssetStorage; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x19

  if ( (byte_42158AB & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, path);
    sub_B0D8A4(&AssetManager_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_42158AB = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   name,
                                                                   (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  else
    Object_WarBoardWaitTimeSetting = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    return Object_WarBoardWaitTimeSetting;
  else
    return 0LL;
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCameraAction(
        int32_t cameraId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_42158CF & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, parent);
    byte_42158CF = 1;
  }
  if ( !cameraId )
    return 0LL;
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__loadCameraActionlocal(Instance, cameraId, parent, v6);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCameraActionlocal(
        ServantAssetLoadManager_o *this,
        int32_t cameraId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *CameraActionPath; // x0
  UnityEngine_Texture2D_o *AssetObject_Texture2D; // x22
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *v15; // x22
  UnityEngine_Transform_o *v16; // x19
  int v17; // s0
  UnityEngine_Transform_o *v20; // x19
  int v21; // s0

  if ( (byte_42158D0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, *(_QWORD *)&cameraId);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v8);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_17233/*"cameraAction"*/, v10);
    byte_42158D0 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, *(const MethodInfo **)&cameraId);
  AssetObject_Texture2D = ServantAssetLoadManager__getAssetObject_Texture2D_(
                            this,
                            CameraActionPath,
                            (System_String_o *)StringLiteral_17233/*"cameraAction"*/,
                            (const MethodInfo_204EA78 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AssetObject_Texture2D, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                              (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_21;
    v13 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !parent )
      goto LABEL_21;
    v15 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0LL);
    if ( !v15 )
      goto LABEL_21;
    UnityEngine_Transform__set_parent(v15, (UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0LL),
          v16 = UnityEngine_GameObject__get_transform(v13, 0LL),
          *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_up(0LL),
          !v16)
      || (UnityEngine_Transform__set_eulerAngles(v16, *(UnityEngine_Vector3_o *)&v17, 0LL),
          v20 = UnityEngine_GameObject__get_transform(v13, 0LL),
          *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_one(0LL),
          !v20) )
    {
LABEL_21:
      sub_B0D97C(transform);
    }
    UnityEngine_Transform__set_localScale(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCard(
        UITexture_o *tex,
        int32_t svtId,
        int32_t limit,
        int32_t commandLimit,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  int32_t v9; // w3
  const MethodInfo *v10; // x5

  if ( (byte_4215861 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4215861 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__loadCommandCardlocal(Instance, tex, svtId, v9, commandLimit, v10);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCardlocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t svtId,
        int32_t limit,
        int32_t commandLimit,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x2
  System_String_o *CommandCardLoadFolderName; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  UnityEngine_Object_o *AssetObject_Texture2D; // x20
  bool v20; // w8
  UITexture_o *result; // x0
  _BOOL8 v22; // x0
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4215862 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, tex);
    sub_B0D8A4(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v10);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_17299/*"card_servant_"*/, v12);
    byte_4215862 = 1;
  }
  LimitImageIndex = 0;
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, commandLimit, 1, v13);
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v14, v15);
  v17 = System_Int32__ToString((int32_t)&LimitImageIndex, 0LL);
  v18 = System_String__Concat_43849904((System_String_o *)StringLiteral_17299/*"card_servant_"*/, v17, 0LL);
  AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                    this,
                                                    CommandCardLoadFolderName,
                                                    v18,
                                                    (const MethodInfo_204EA78 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v20 = UnityEngine_Object__op_Equality(AssetObject_Texture2D, 0LL, 0LL);
  result = 0LL;
  if ( !v20 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v22 )
    {
      if ( !tex )
        sub_B0D97C(v22);
      ((void (__fastcall *)(UITexture_o *, UnityEngine_Object_o *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_Texture2D,
        tex->klass->vtable._28_get_shader.methodPtr);
    }
    return tex;
  }
  return result;
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTexture(
        UITexture_o *tex,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_42158D3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, userCommandCodeId);
    byte_42158D3 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal_26507856(Instance, tex, userCommandCodeId, v6);
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *CommandCodeFolderName; // x22
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  UnityEngine_Object_o *AssetObject_Texture2D; // x20
  bool v15; // w8
  UITexture_o *result; // x0
  _BOOL8 v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42158D5 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, tex);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v8);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_17220/*"c_{0:D7}"*/, v10);
    byte_42158D5 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(commandCodeId, (const MethodInfo *)tex);
  v18 = commandCodeId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v13 = System_String__Format((System_String_o *)StringLiteral_17220/*"c_{0:D7}"*/, v12, 0LL);
  AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                    this,
                                                    CommandCodeFolderName,
                                                    v13,
                                                    (const MethodInfo_204EA78 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = UnityEngine_Object__op_Equality(AssetObject_Texture2D, 0LL, 0LL);
  result = 0LL;
  if ( !v15 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v17 )
    {
      if ( !tex )
        sub_B0D97C(v17);
      ((void (__fastcall *)(UITexture_o *, UnityEngine_Object_o *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_Texture2D,
        tex->klass->vtable._28_get_shader.methodPtr);
    }
    return tex;
  }
  return result;
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTextureLocal_26507856(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w0
  const MethodInfo *v14; // x3
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_42158D6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, tex);
    sub_B0D8A4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_42158D6 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  entity = 0LL;
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userCommandCodeId,
                                (const MethodInfo_2669E58 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
LABEL_13:
    sub_B0D97C(Instance);
  v12 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v17, 0LL);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(this, tex, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTexture_26508140(
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_42158D4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&commandCodeId);
    byte_42158D4 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(Instance, tex, commandCodeId, v6);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCommonEffect(
        System_String_o *name,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_42158A1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_42158A1 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__loadCommonEffectlocal(Instance, name, v4);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCommonEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x0
  UnityEngine_Object_o *v8; // x0
  UnityEngine_Object_o *v9; // x19
  bool v10; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_42158A2 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, name);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_18280/*"effect/"*/, v6);
    byte_42158A2 = 1;
  }
  v7 = System_String__Concat_43849904((System_String_o *)StringLiteral_18280/*"effect/"*/, name, 0LL);
  v8 = UnityEngine_Resources__Load(v7, 0LL);
  if ( v8 )
  {
    if ( (UnityEngine_GameObject_c *)v8->klass == UnityEngine_GameObject_TypeInfo )
      v9 = v8;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  result = 0LL;
  if ( v10 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)v9,
                                         (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadEffect(
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v8; // x4

  if ( (byte_421589F & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&weapongroup);
    byte_421589F = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__loadEffectlocal(Instance, name, weapongroup, effectFolder, v8);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Manager__loadCommonEffectlocal; // x22
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x4

  if ( (byte_42158A0 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, name);
    byte_42158A0 = 1;
  }
  Manager__loadCommonEffectlocal = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommonEffectlocal(
                                                             this,
                                                             name,
                                                             *(const MethodInfo **)&weapongroup);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Manager__loadCommonEffectlocal, 0LL, 0LL);
  if ( v9 )
    return ServantAssetLoadManager__loadWeaponGroupEffectlocal(
             (ServantAssetLoadManager_o *)v9,
             name,
             weapongroup,
             effectFolder,
             v10);
  else
    return (UnityEngine_GameObject_o *)Manager__loadCommonEffectlocal;
}


UIStandFigureR_o *__fastcall ServantAssetLoadManager__loadFigureObject(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t faceType,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  return StandFigureManager__CreateRenderPrefab_25972252(
           parent,
           svtId,
           limitCount,
           2,
           faceType,
           50,
           callbackFunc,
           0,
           -1,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__loadNobleName(
        UITexture_o *tex,
        int32_t svtId,
        int32_t limit,
        int32_t treasureDvcId,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_421586D & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_421586D = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__loadNobleNamelocal(Instance, tex, svtId, limit, treasureDvcId, v10);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__loadNobleNamelocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t svtId,
        int32_t limit,
        int32_t treasureDvcId,
        const MethodInfo *method)
{
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
  ServantTreasureDvcEntity_o *EntityFromIDID; // x23
  DataManager_o *Instance; // x0
  ServantEntity_o *Entity; // x25
  ServantLimitAddMaster_o *v27; // x26
  int32_t v28; // w1
  const MethodInfo *v29; // x2
  System_String_o *v30; // x21
  System_String_o *OverwriteTDFileName; // x0
  UnityEngine_Object_o *AssetObject_Texture2D; // x20
  int imageIndex; // w22
  __int64 v34; // x25
  System_String_o *v35; // x24
  __int64 v36; // x25
  System_String_o *NpNameFileSuffix; // x22
  int32_t v38; // w1
  const MethodInfo *v39; // x2
  System_String_o *v40; // x21
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  System_String_o *v43; // x2
  ServantAssetLoadManager_o *v44; // x0
  System_String_o *CommandCardLoadFolderName; // x1
  float v47; // s4
  float v48; // s5
  float v49; // s6
  float v50; // s7
  float v51; // s1
  float v52; // s2
  int v53; // s0
  float v54; // s3
  MethodInfo methoda; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Rect_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421586E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, tex);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v12);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v14);
    sub_B0D8A4(&int_TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v17);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v21);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v22);
    sub_B0D8A4(&StringLiteral_17300/*"card_servant_np"*/, v23);
    byte_421586E = 1;
  }
  methoda.name = 0LL;
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(svtId, treasureDvcId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_54;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  methoda.name = 0LL;
  if ( !Entity )
    goto LABEL_54;
  v27 = (ServantLimitAddMaster_o *)Instance;
  Instance = (DataManager_o *)ServantEntity__IsNameTrueFromBattleSvt(Entity, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_17;
  if ( !v27 )
    goto LABEL_54;
  if ( !ServantLimitAddMaster__TryGetEntity(v27, (ServantLimitAddEntity_o **)&methoda.name, svtId, limit, 0LL) )
    goto LABEL_17;
  Instance = (DataManager_o *)methoda.name;
  if ( !methoda.name )
    goto LABEL_54;
  if ( ServantLimitAddEntity__ExistOverwriteTDInfo((ServantLimitAddEntity_o *)methoda.name, 0LL) )
  {
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    Instance = (DataManager_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v28, v29);
    if ( !methoda.name )
      goto LABEL_54;
    v30 = (System_String_o *)Instance;
    OverwriteTDFileName = ServantLimitAddEntity__GetOverwriteTDFileName((ServantLimitAddEntity_o *)methoda.name, 0LL);
    AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                      this,
                                                      v30,
                                                      OverwriteTDFileName,
                                                      (const MethodInfo_204EA78 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    LOBYTE(imageIndex) = 0;
  }
  else
  {
LABEL_17:
    if ( EntityFromIDID )
    {
      v34 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      v35 = (System_String_o *)StringLiteral_17300/*"card_servant_np"*/;
      if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
        sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v36 = **(_QWORD **)(v34 + 192);
      if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
        sub_AA65A4(v36);
      Instance = **(DataManager_o ***)(v36 + 184);
      if ( !Instance )
        goto LABEL_54;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Instance )
        goto LABEL_54;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    treasureDvcId,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_54;
      NpNameFileSuffix = TreasureDvcEntity__GetNpNameFileSuffix((TreasureDvcEntity_o *)Instance, 0LL);
      if ( !System_String__IsNullOrEmpty(NpNameFileSuffix, 0LL) )
        v35 = System_String__Concat_43852188(v35, (System_String_o *)StringLiteral_15952/*"_"*/, NpNameFileSuffix, 0LL);
      imageIndex = EntityFromIDID->fields.imageIndex;
      if ( imageIndex <= 1 )
      {
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v38, v39);
        v44 = this;
        v43 = v35;
      }
      else
      {
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        v40 = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v38, v39);
        LODWORD(methoda.methodPointer) = (unsigned int)imageIndex >> 1;
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
        v42 = System_String__Format((System_String_o *)StringLiteral_23617/*"{0}"*/, v41, 0LL);
        v43 = System_String__Concat_43849904(v35, v42, 0LL);
        v44 = this;
        CommandCardLoadFolderName = v40;
      }
      AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                        v44,
                                                        CommandCardLoadFolderName,
                                                        v43,
                                                        (const MethodInfo_204EA78 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    }
    else
    {
      LOBYTE(imageIndex) = 0;
      AssetObject_Texture2D = 0LL;
    }
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(AssetObject_Texture2D, 0LL, 0LL) )
    return 0;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( tex )
    {
      ((void (__fastcall *)(UITexture_o *, UnityEngine_Object_o *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_Texture2D,
        tex->klass->vtable._28_get_shader.methodPtr);
      if ( (imageIndex & 1) != 0 )
      {
        v52 = 1.0;
        v54 = 0.5;
        v53 = 0;
        v51 = 0.0;
        methoda.methodPointer = 0LL;
        methoda.invoker_method = 0LL;
      }
      else
      {
        v51 = 0.5;
        methoda.methodPointer = 0LL;
        methoda.invoker_method = 0LL;
        v52 = 1.0;
        v53 = 0;
        v54 = 0.5;
      }
      UnityEngine_Rect___ctor(*(UnityEngine_Rect_o *)&v53, v47, v48, v49, v50, &methoda);
      *(_QWORD *)&v56.fields.m_XMin = methoda.methodPointer;
      *(_QWORD *)&v56.fields.m_Width = methoda.invoker_method;
      UITexture__set_uvRect(tex, v56, 0LL);
      return 1;
    }
LABEL_54:
    sub_B0D97C(Instance);
  }
  return 1;
}


void __fastcall ServantAssetLoadManager__loadNoblePhantasm(
        ServantAssetLoadManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t treasureDvcId,
        int32_t treasureDvcLv,
        int32_t npChargeStage,
        ServantAssetLoadManager_onGameObjectLoadComplete_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *Manager__loadNoblePhantasmCoroutine; // x1
  const MethodInfo *v11; // [xsp+0h] [xbp-20h]

  Manager__loadNoblePhantasmCoroutine = ServantAssetLoadManager__loadNoblePhantasmCoroutine(
                                          this,
                                          parent,
                                          svtId,
                                          limitCount,
                                          treasureDvcId,
                                          treasureDvcLv,
                                          npChargeStage,
                                          callback,
                                          v11);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128(
    (UnityEngine_MonoBehaviour_o *)this,
    Manager__loadNoblePhantasmCoroutine,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine(
        ServantAssetLoadManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t treasureDvcId,
        int32_t treasureDvcLv,
        int32_t npChargeStage,
        ServantAssetLoadManager_onGameObjectLoadComplete_o *callback,
        const MethodInfo *method)
{
  __int64 v17; // x26
  __int64 v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_42158C6 & 1) == 0 )
  {
    sub_B0D8A4(&ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_TypeInfo, parent);
    byte_42158C6 = 1;
  }
  v17 = sub_B0D974(ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_TypeInfo, parent, *(_QWORD *)&svtId);
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152___ctor(
    (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)v17,
    0,
    0LL);
  if ( !v17 )
    sub_B0D97C(v18);
  *(_QWORD *)(v17 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 32), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v17 + 40) = parent;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 40), (System_Int32_array **)parent, v25, v26, v27, v28, v29, v30);
  *(_DWORD *)(v17 + 56) = npChargeStage;
  *(_DWORD *)(v17 + 60) = svtId;
  *(_DWORD *)(v17 + 48) = treasureDvcId;
  *(_DWORD *)(v17 + 52) = limitCount;
  *(_DWORD *)(v17 + 72) = treasureDvcLv;
  *(_QWORD *)(v17 + 80) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 80), (System_Int32_array **)callback, v31, v32, v33, v34, v35, v36);
  return (System_Collections_IEnumerator_o *)v17;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadNoblePhantasmEffect(
        int32_t treasureDeviceId,
        int32_t limit,
        System_String_o *name,
        int32_t seqIdFromMstTDSeqWeight,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_421589B & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_421589B = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__loadNoblePhantasmEffectlocal(
           Instance,
           treasureDeviceId,
           limit,
           name,
           seqIdFromMstTDSeqWeight,
           v10);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadNoblePhantasmEffectlocal(
        ServantAssetLoadManager_o *this,
        int32_t treasureDeviceId,
        int32_t limit,
        System_String_o *name,
        int32_t seqIdFromMstTDSeqWeight,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  int32_t eventId; // w0
  System_String_o *v18; // x0
  System_String_o *v19; // x21
  System_String_o *v20; // x0
  int v22; // [xsp+Ch] [xbp-44h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  int32_t v24; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_421589C & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&treasureDeviceId);
    sub_B0D8A4(&Method_DataManager_GetMaster_TreasureDvcMaster___, v11);
    sub_B0D8A4(&DataManager_TypeInfo, v12);
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v13);
    sub_B0D8A4(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v14);
    sub_B0D8A4(&StringLiteral_9619/*"NoblePhantasm/"*/, v15);
    byte_421589C = 1;
  }
  v24 = 0;
  entity = 0LL;
  v22 = 0;
  if ( seqIdFromMstTDSeqWeight < 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_23;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            Master_WarQuestSelectionMaster,
            &entity,
            treasureDeviceId,
            (const MethodInfo_2669C30 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
    {
      v24 = treasureDeviceId;
      goto LABEL_17;
    }
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
    if ( !entity
      || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)TreasureDvcEntity__IsRandomTD(
                                                                                            (TreasureDvcEntity_o *)entity,
                                                                                            0LL),
          !entity) )
    {
LABEL_23:
      sub_B0D97C(Master_WarQuestSelectionMaster);
    }
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      eventId = entity->fields.eventId;
    else
      eventId = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)entity, limit, 0LL);
    v24 = eventId;
  }
  else
  {
    v24 = seqIdFromMstTDSeqWeight;
  }
LABEL_17:
  v18 = System_Int32__ToString((int32_t)&v24, 0LL);
  v19 = System_String__Concat_43849904((System_String_o *)StringLiteral_9619/*"NoblePhantasm/"*/, v18, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v19, 0LL) )
  {
    v22 = 10 * (v24 / 10);
    v20 = System_Int32__ToString((int32_t)&v22, 0LL);
    v19 = System_String__Concat_43849904((System_String_o *)StringLiteral_9619/*"NoblePhantasm/"*/, v20, 0LL);
  }
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                       this,
                                       v19,
                                       name,
                                       (const MethodInfo_204EA78 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


void __fastcall ServantAssetLoadManager__loadSkillCutIn(
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_42158AF & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, callback);
    byte_42158AF = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__loadSkillCutInLocal(Instance, skillInfo, callback, v6);
}


void __fastcall ServantAssetLoadManager__loadSkillCutInLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w1
  System_String_o *SkillCutInPath; // x20

  if ( (byte_42158B0 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B0D8A4(&AssetManager_TypeInfo, skillInfo);
    byte_42158B0 = 1;
  }
  if ( skillInfo )
  {
    this = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, AssetLoader_LoadEndDataHandler_o *, const MethodInfo *))skillInfo->klass->vtable._7_getCutInId.method)(
                                          skillInfo,
                                          skillInfo->klass->vtable._8_PreLoad.methodPtr,
                                          callback,
                                          method);
    v6 = (int)this;
  }
  else
  {
    v6 = 0;
  }
  SkillCutInPath = ServantAssetLoadManager__getSkillCutInPath(this, v6, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(SkillCutInPath, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadStatusFace(
        UITexture_o *tex,
        int32_t svtID,
        int32_t limit,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v8; // x4

  if ( (byte_4215869 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtID);
    byte_4215869 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__loadStatusFacelocal(Instance, tex, svtID, limit, v8);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadStatusFacelocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t svtID,
        int32_t limit,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  const MethodInfo *v14; // x2
  System_String_o *StatusImageFolderName; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  UnityEngine_Object_o *AssetObject_Texture2D; // x20
  bool v19; // w8
  UITexture_o *result; // x0
  _BOOL8 v21; // x0
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_421586A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, tex);
    sub_B0D8A4(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v9);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_22389/*"status_servant_"*/, v11);
    byte_421586A = 1;
  }
  LimitImageIndex = 0;
  ServantAssetLoadManager__getSvtEntity(this, svtID, *(const MethodInfo **)&svtID);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtID, limit, 1, v12);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(svtID, v13, v14);
  v16 = System_Int32__ToString((int32_t)&LimitImageIndex, 0LL);
  v17 = System_String__Concat_43849904((System_String_o *)StringLiteral_22389/*"status_servant_"*/, v16, 0LL);
  AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                    this,
                                                    StatusImageFolderName,
                                                    v17,
                                                    (const MethodInfo_204EA78 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v19 = UnityEngine_Object__op_Equality(AssetObject_Texture2D, 0LL, 0LL);
  result = 0LL;
  if ( !v19 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v21 )
    {
      if ( !tex )
        sub_B0D97C(v21);
      ((void (__fastcall *)(UITexture_o *, UnityEngine_Object_o *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_Texture2D,
        tex->klass->vtable._28_get_shader.methodPtr);
    }
    return tex;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadWeaponGroupEffect(
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v8; // x4

  if ( (byte_42158A4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&weapongroup);
    byte_42158A4 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__loadWeaponGroupEffectlocal(Instance, name, weapongroup, effectFolder, v8);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadWeaponGroupEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x0
  System_String_o *v12; // x21
  System_String_o *v13; // x0
  AssetData_o *AssetStorage; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x19
  int32_t v17; // [xsp+8h] [xbp-18h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-14h] BYREF

  v17 = effectFolder;
  v18 = weapongroup;
  if ( (byte_42158A5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, name);
    sub_B0D8A4(&AssetManager_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_5879/*"Effect/weapon/"*/, v9);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v10);
    byte_42158A5 = 1;
  }
  v11 = System_Int32__ToString((int32_t)&v18, 0LL);
  v12 = System_String__Concat_43849904((System_String_o *)StringLiteral_5879/*"Effect/weapon/"*/, v11, 0LL);
  if ( effectFolder )
  {
    v13 = System_Int32__ToString((int32_t)&v17, 0LL);
    v12 = System_String__Concat_43852188(v12, (System_String_o *)StringLiteral_879/*"/"*/, v13, 0LL);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v12, 0LL);
  if ( AssetStorage )
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   name,
                                                                   (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  else
    Object_WarBoardWaitTimeSetting = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    return Object_WarBoardWaitTimeSetting;
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__localStopVoice(
        ServantAssetLoadManager_o *this,
        int32_t uniqueId,
        float fadeoutTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *ActorVoice; // x0

  if ( (byte_42158C3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, *(_QWORD *)&uniqueId);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v7);
    byte_42158C3 = 1;
  }
  ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
  if ( !ActorVoice )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)ActorVoice,
         uniqueId,
         (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
    if ( ActorVoice )
    {
      ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(ActorVoice, uniqueId, (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
      if ( ActorVoice )
      {
        SePlayer__StopSe((SePlayer_o *)ActorVoice, fadeoutTime, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B0D97C(ActorVoice);
  }
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *__fastcall ServantAssetLoadManager__playBattleVoice(
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *voiceTypeId,
        float volume,
        System_Action_o *callback,
        int32_t uniqueId,
        bool isNp,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v19; // [xsp+8h] [xbp-58h]

  if ( (byte_42158B7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_42158B7 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__playBattleVoicelocal(
           Instance,
           svtId,
           limit,
           overwriteSvtVoiceId,
           voiceTypeId,
           volume,
           callback,
           uniqueId,
           0LL,
           isNp,
           v19);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *__fastcall ServantAssetLoadManager__playBattleVoiceSe(
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *fileName,
        float volume,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v12; // x5

  if ( (byte_42158BA & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_42158BA = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__playBattleVoiceSelocal(
           Instance,
           svtId,
           limit,
           overwriteSvtVoiceId,
           fileName,
           volume,
           v12);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *__fastcall ServantAssetLoadManager__playBattleVoiceSelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *targetFileName,
        float volume,
        const MethodInfo *method)
{
  __int64 v13; // x1
  SePlayer_o *result; // x0
  const MethodInfo *v15; // x3
  int32_t VoiceId; // w0
  int32_t v17; // w8
  System_String_o *v18; // x0
  System_String_o *v19; // x20
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42158BB & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&StringLiteral_12776/*"Servants/"*/, v13);
    byte_42158BB = 1;
  }
  v20 = 0;
  result = (SePlayer_o *)ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&limit);
  if ( result )
  {
    VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v15);
    if ( overwriteSvtVoiceId )
      v17 = overwriteSvtVoiceId;
    else
      v17 = VoiceId;
    v20 = v17;
    v18 = System_Int32__ToString((int32_t)&v20, 0LL);
    v19 = System_String__Concat_43849904((System_String_o *)StringLiteral_12776/*"Servants/"*/, v18, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    return SoundManager__playSe_25001032(v19, targetFileName, volume, 0LL, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *__fastcall ServantAssetLoadManager__playBattleVoicelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *voiceTypeId,
        float volume,
        System_Action_o *callback,
        int32_t uniqueId,
        System_String_o *targetFileName,
        bool isNp,
        const MethodInfo *method)
{
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x23
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *ActorVoice; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  SePlayer_o **v39; // x28
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x2
  ServantEntity_o *SvtEntity; // x27
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x3
  int32_t VoicePrefix; // w0
  __int64 *v51; // x8
  System_String_o *v52; // x22
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  struct System_Collections_Generic_Dictionary_int__SePlayer__o *v55; // x22
  System_String_o *v56; // x24
  __int64 v57; // x1
  __int64 v58; // x2
  System_Action_o *v59; // x25
  SePlayer_o *result; // x0
  Il2CppObject *v61; // x0
  int32_t v62; // [xsp+8h] [xbp-58h] BYREF
  int32_t VoiceId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42158B8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__string__set_Item__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__, v23);
    sub_B0D8A4(&int_TypeInfo, v24);
    sub_B0D8A4(&SoundManager_TypeInfo, v25);
    sub_B0D8A4(&Method_ServantAssetLoadManager___c__DisplayClass134_0__playBattleVoicelocal_b__0__, v26);
    sub_B0D8A4(&ServantAssetLoadManager___c__DisplayClass134_0_TypeInfo, v27);
    sub_B0D8A4(&StringLiteral_23577/*"{0:D0}_{1}"*/, v28);
    sub_B0D8A4(&StringLiteral_12776/*"Servants/"*/, v29);
    sub_B0D8A4(&StringLiteral_9619/*"NoblePhantasm/"*/, v30);
    byte_42158B8 = 1;
  }
  VoiceId = 0;
  v31 = sub_B0D974(ServantAssetLoadManager___c__DisplayClass134_0_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limit);
  ServantAssetLoadManager___c__DisplayClass134_0___ctor((ServantAssetLoadManager___c__DisplayClass134_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_29;
  *(_QWORD *)(v31 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)this, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v31 + 24) = callback;
  v39 = (SePlayer_o **)(v31 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v31 + 24), (System_Int32_array **)callback, v40, v41, v42, v43, v44, v45);
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, v46);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v48);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v49);
  if ( overwriteSvtVoiceId )
    VoiceId = overwriteSvtVoiceId;
  if ( targetFileName )
  {
    if ( SvtEntity )
    {
LABEL_8:
      if ( uniqueId != -1 )
      {
        ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
        if ( !ActorVoice )
          goto LABEL_29;
        if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
               (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)ActorVoice,
               uniqueId,
               (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
        {
          ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
          if ( !ActorVoice )
            goto LABEL_29;
          if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 ActorVoice,
                 uniqueId,
                 (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__) )
          {
            ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
            if ( !ActorVoice )
              goto LABEL_29;
            ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(ActorVoice, uniqueId, (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
            if ( !ActorVoice )
              goto LABEL_29;
            SePlayer__StopSe((SePlayer_o *)ActorVoice, 0.0, 0LL);
          }
        }
      }
      ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.LastActorVoice;
      if ( ActorVoice )
      {
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)ActorVoice,
          uniqueId,
          (WarBoardAIRoute_RouteData_o *)voiceTypeId,
          (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
        v51 = &StringLiteral_9619/*"NoblePhantasm/"*/;
        if ( !isNp )
          v51 = &StringLiteral_12776/*"Servants/"*/;
        v52 = (System_String_o *)*v51;
        v53 = System_Int32__ToString((int32_t)&VoiceId, 0LL);
        v54 = System_String__Concat_43849904(v52, v53, 0LL);
        v55 = this->fields.ActorVoice;
        v56 = v54;
        v59 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v57, v58);
        System_Action___ctor(
          v59,
          (Il2CppObject *)v31,
          Method_ServantAssetLoadManager___c__DisplayClass134_0__playBattleVoicelocal_b__0__,
          0LL);
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SoundManager__playVoice_24977528(v56, targetFileName, volume, v59, 0LL);
        if ( v55 )
        {
          System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v55,
            uniqueId,
            (WarBoardAIRoute_RouteData_o *)ActorVoice,
            (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__);
          ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
          if ( ActorVoice )
            return (SePlayer_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                   ActorVoice,
                                   uniqueId,
                                   (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        }
      }
LABEL_29:
      sub_B0D97C(ActorVoice);
    }
  }
  else
  {
    v62 = VoicePrefix;
    v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
    targetFileName = System_String__Format_43845440(
                       (System_String_o *)StringLiteral_23577/*"{0:D0}_{1}"*/,
                       v61,
                       (Il2CppObject *)voiceTypeId,
                       0LL);
    if ( SvtEntity )
      goto LABEL_8;
  }
  result = *v39;
  if ( *v39 )
  {
    System_Action__Invoke((System_Action_o *)result, 0LL);
    return 0LL;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadActorMotion(int32_t weapongroup, bool dlOnly, const MethodInfo *method)
{
  __int64 v4; // x1
  ServantAssetLoadManager_o *Instance; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = weapongroup;
  if ( (byte_42158B2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly);
    sub_B0D8A4(&StringLiteral_12780/*"Servants/Motion/"*/, v4);
    byte_42158B2 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_43849904((System_String_o *)StringLiteral_12780/*"Servants/Motion/"*/, v6, 0LL);
  if ( !Instance )
    sub_B0D97C(v7);
  ServantAssetLoadManager__setLoadList(Instance, v7, dlOnly, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadBattleActor(
        ServantAssetArgs_o *args,
        bool isForce,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v6; // x6

  if ( (byte_421588C & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, isForce);
    byte_421588C = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_B0D97C(Instance);
  ServantAssetLoadManager__preloadBattleActorlocal(
    Instance,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    isForce,
    0,
    v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadBattleActorlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        bool isForce,
        bool dlOnly,
        const MethodInfo *method)
{
  int32_t v13; // w0
  System_String_o *ActorFolderName_26488676; // x0
  const MethodInfo *v15; // x3
  int32_t v16; // w0

  if ( (byte_421588D & 1) == 0 )
  {
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_421588D = 1;
  }
  if ( appearanceId < 1 )
  {
    if ( isForce )
    {
      if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      v13 = svtId;
      goto LABEL_14;
    }
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    v16 = svtId;
  }
  else
  {
    if ( isForce )
    {
      if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      v13 = appearanceId;
LABEL_14:
      ActorFolderName_26488676 = ServantAssetLoadManager__getActorFolderName_26488676(v13, *(const MethodInfo **)&svtId);
      goto LABEL_24;
    }
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    v16 = appearanceId;
  }
  ActorFolderName_26488676 = ServantAssetLoadManager__getActorFolderName(
                               v16,
                               limitCount,
                               *(const MethodInfo **)&limitCount);
LABEL_24:
  if ( !this )
    sub_B0D97C(ActorFolderName_26488676);
  ServantAssetLoadManager__setLoadList(this, ActorFolderName_26488676, dlOnly, v15);
}


System_String_array *__fastcall ServantAssetLoadManager__preloadBattleCommonEffect(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_42158A8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_42158A8 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return ServantAssetLoadManager__preloadBattleCommonEffectLocal(Instance, effectIdList, v4);
}


System_String_array *__fastcall ServantAssetLoadManager__preloadBattleCommonEffectLocal(
        ServantAssetLoadManager_o *this,
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  System_String_array *BattleCommonEffectPathList; // x0
  const MethodInfo *v6; // x3
  __int64 v7; // x8
  System_String_array *v8; // x20
  unsigned __int64 v9; // x21
  __int64 v11; // x0

  if ( (byte_42158A9 & 1) == 0 )
  {
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, effectIdList);
    byte_42158A9 = 1;
  }
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  BattleCommonEffectPathList = BattleEffectUtility__GetBattleCommonEffectPathList(effectIdList, 0LL);
  if ( !BattleCommonEffectPathList )
    sub_B0D97C(0LL);
  v7 = *(_QWORD *)&BattleCommonEffectPathList->max_length;
  v8 = BattleCommonEffectPathList;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v7 )
      {
        v11 = sub_B0D9A8(BattleCommonEffectPathList);
        sub_B0D948(v11, 0LL);
      }
      ServantAssetLoadManager__setLoadList(this, v8->m_Items[v9], 0, v6);
      LODWORD(v7) = v8->max_length;
      ++v9;
    }
    while ( (__int64)v9 < (int)v7 );
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadCameraAction(int32_t cameraId, bool dlOnly, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  ServantAssetLoadManager_o *Instance; // x21
  System_String_o *CameraActionPath; // x0
  const MethodInfo *v9; // x3

  if ( (byte_42158CE & 1) == 0 )
  {
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, dlOnly);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    byte_42158CE = 1;
  }
  if ( cameraId )
  {
    Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, v6);
    if ( !Instance )
      sub_B0D97C(CameraActionPath);
    ServantAssetLoadManager__setLoadList(Instance, CameraActionPath, dlOnly, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadCommandCard(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x4

  if ( (byte_421585F & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_421585F = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__preloadCommandCardlocal(Instance, svtId, v5, 0, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadCommandCardlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool dlOnly,
        const MethodInfo *method)
{
  System_String_o *CommandCardLoadFolderName; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4215860 & 1) == 0 )
  {
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4215860 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(
                                svtId,
                                svtId,
                                *(const MethodInfo **)&limitCount);
  ServantAssetLoadManager__tryLoadList(this, CommandCardLoadFolderName, dlOnly, v9);
}


void __fastcall ServantAssetLoadManager__preloadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        System_Int32_array *commandCodeIds,
        bool dlOnly,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *v6; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x23
  bool v9; // w21
  int32_t v10; // w22
  System_String_o *CommandCodeFolderName; // x0
  const MethodInfo *v12; // x3
  __int64 v13; // x0

  v6 = this;
  if ( (byte_42158D7 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, commandCodeIds);
    byte_42158D7 = 1;
  }
  if ( commandCodeIds )
  {
    v7 = *(_QWORD *)&commandCodeIds->max_length;
    if ( (int)v7 >= 1 )
    {
      v8 = 0LL;
      v9 = dlOnly;
      do
      {
        if ( v8 >= (unsigned int)v7 )
        {
          v13 = sub_B0D9A8(this);
          sub_B0D948(v13, 0LL);
        }
        v10 = commandCodeIds->m_Items[v8 + 1];
        if ( v10 >= 1 )
        {
          if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          }
          CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(
                                    v10,
                                    (const MethodInfo *)commandCodeIds);
          ServantAssetLoadManager__tryLoadList(v6, CommandCodeFolderName, v9, v12);
          LODWORD(v7) = commandCodeIds->max_length;
        }
        ++v8;
      }
      while ( (__int64)v8 < (int)v7 );
    }
  }
}


void __fastcall ServantAssetLoadManager__preloadCommandSpellAnyVoice(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4215885 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_4215885 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal(Instance, v3);
}


void __fastcall ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v10; // x20
  unsigned __int64 v11; // x24
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o **p_lookup; // x25
  SoundManager_o *v13; // x21
  System_String_o *VoiceAssetName; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x23
  __int64 v18; // x0

  if ( (byte_4215886 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandSpellMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_getEntitys_CommandSpellEntity___, v4);
    sub_B0D8A4(&Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v7);
    byte_4215886 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                      (DataMasterBase_o *)Instance,
                                      (const MethodInfo_1714E7C *)Method_DataMasterBase_getEntitys_CommandSpellEntity___)) == 0LL )
  {
LABEL_21:
    sub_B0D97C(Instance);
  }
  datalist = Instance->fields.datalist;
  v10 = Instance;
  if ( (int)datalist >= 1 )
  {
    v11 = 0LL;
    p_lookup = &Instance->fields.lookup;
    do
    {
      if ( v11 >= (unsigned int)datalist )
      {
LABEL_20:
        v18 = sub_B0D9A8(Instance);
        sub_B0D948(v18, 0LL);
      }
      Instance = (DataManager_o *)p_lookup[v11];
      if ( Instance )
      {
        Instance = (DataManager_o *)CommandSpellEntity__isUseBattle((CommandSpellEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v11 >= LODWORD(v10->fields.datalist) )
            goto LABEL_20;
          Instance = (DataManager_o *)p_lookup[v11];
          if ( !Instance )
            goto LABEL_21;
          Instance = (DataManager_o *)CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
          if ( Instance )
          {
            ++this->fields.soundCount;
            Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
            if ( v11 >= LODWORD(v10->fields.datalist) )
              goto LABEL_20;
            v13 = (SoundManager_o *)Instance;
            Instance = (DataManager_o *)p_lookup[v11];
            if ( !Instance )
              goto LABEL_21;
            VoiceAssetName = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
            v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
            System_Action___ctor(
              v17,
              (Il2CppObject *)this,
              Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__,
              0LL);
            if ( !v13 )
              goto LABEL_21;
            SoundManager__LoadAudioAssetStorage(v13, VoiceAssetName, v17, 1, 0LL);
          }
        }
      }
      LODWORD(datalist) = v10->fields.datalist;
      ++v11;
    }
    while ( (__int64)v11 < (int)datalist );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadFromDeckServant(
        BattleDeckServantData_o *deckSvt,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t EnemyNameEffect; // w0
  const MethodInfo *v7; // x1
  int32_t v8; // w20
  System_String_o *NameEffectPath; // x20
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v11; // x3

  if ( (byte_42158DE & 1) == 0 )
  {
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, dlOnly);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    byte_42158DE = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0LL);
    if ( EnemyNameEffect )
    {
      v8 = EnemyNameEffect;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v8, v7);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        sub_B0D97C(0LL);
      ServantAssetLoadManager__setLoadList(Instance, NameEffectPath, dlOnly, v11);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadServant(
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_421587A & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly);
    byte_421587A = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__preloadServantlocal(Instance, args, dlOnly, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadServantVoice(
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v8; // x5

  if ( (byte_421587D & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_421587D = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__preloadServantVoicelocal(Instance, svtId, limitCount, overwriteSvtVoiceId, 0, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadServantVoicelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t VoiceId; // w0
  int32_t v16; // w8
  SoundManager_o *Instance; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x0
  System_Action_o *v23; // x23
  __int64 v24; // x0
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_421587E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__, v11);
    sub_B0D8A4(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v13);
    sub_B0D8A4(&StringLiteral_12783/*"Servants_"*/, v14);
    byte_421587E = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v16 = overwriteSvtVoiceId;
  else
    v16 = VoiceId;
  v25 = v16;
  if ( v16 )
  {
    ++this->fields.soundCount;
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v18 = System_Int32__ToString((int32_t)&v25, 0LL);
    v19 = System_String__Concat_43849904((System_String_o *)StringLiteral_12783/*"Servants_"*/, v18, 0LL);
    v22 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v20, v21);
    v23 = v22;
    if ( dlOnly )
    {
      System_Action___ctor(
        v22,
        (Il2CppObject *)this,
        Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__,
        0LL);
      if ( Instance )
      {
        SoundManager__DownloadAudioAssetStorage(Instance, v19, v23, 1, 0LL);
        return;
      }
LABEL_13:
      sub_B0D97C(v24);
    }
    System_Action___ctor(
      v22,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__,
      0LL);
    if ( !Instance )
      goto LABEL_13;
    SoundManager__LoadAudioAssetStorage(Instance, v19, v23, 1, 0LL);
  }
}


void __fastcall ServantAssetLoadManager__preloadServantlocal(
        ServantAssetLoadManager_o *this,
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  bool v6; // w21
  int32_t v8; // w2
  const MethodInfo *v9; // x4
  int32_t v10; // w2
  const MethodInfo *v11; // x4
  const MethodInfo *v12; // x5
  const MethodInfo *v13; // x3

  if ( !args )
    sub_B0D97C(this);
  v6 = dlOnly;
  ServantAssetLoadManager__preloadBattleActorlocal(
    this,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    0,
    dlOnly,
    v4);
  ServantAssetLoadManager__preloadCommandCardlocal(this, args->fields._CommandImageSvtId_k__BackingField, v8, v6, v9);
  ServantAssetLoadManager__preloadStatusFacelocal(this, args->fields._DispImageSvtId_k__BackingField, v10, v6, v11);
  ServantAssetLoadManager__preloadServantVoicelocal(
    this,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._OverwriteSvtVoiceId_k__BackingField,
    v6,
    v12);
  ServantAssetLoadManager__preloadCommandCodeTextureLocal(this, args->fields._CommandCodeIds_k__BackingField, v6, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadSkillAnyVoice(
        BattleSkillInfoData_o *skillInfo,
        bool dlOnly,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4215881 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly);
    byte_4215881 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__preloadSkillAnyVoiceLocal(Instance, skillInfo, dlOnly, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadSkillAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x22
  __int64 v14; // x22
  DataManager_o *v15; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x22
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v18; // x21
  System_String_o *VoiceAssetName; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x21
  SoundManager_o *Instance; // x20
  System_String_o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_o *v27; // x22

  if ( (byte_4215882 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, skillInfo);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_B0D8A4(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__, v8);
    sub_B0D8A4(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
    sub_B0D8A4(&SoundManager_TypeInfo, v12);
    byte_4215882 = 1;
  }
  if ( skillInfo
    && ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, bool, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
         skillInfo,
         skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
         dlOnly,
         method)
    && skillInfo->fields.skilllv )
  {
    v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v14 = **(_QWORD **)(v13 + 192);
    if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
      sub_AA65A4(v14);
    v15 = **(DataManager_o ***)(v14 + 184);
    if ( v15 )
    {
      MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                v15,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      v15 = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_WarQuestSelectionMaster )
      {
        Entity = SkillLvMaster__GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int32_t)v15,
                   skillInfo->fields.skilllv,
                   0LL);
        if ( !Entity )
          return;
        v18 = Entity;
        if ( !SkillLvEntity__getVoiceAssetName(Entity, 0LL) )
          return;
        ++this->fields.soundCount;
        if ( dlOnly )
        {
          VoiceAssetName = SkillLvEntity__getVoiceAssetName(v18, 0LL);
          v22 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v20, v21);
          System_Action___ctor(
            v22,
            (Il2CppObject *)this,
            Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__,
            0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__downloadAudioAssetStorage(VoiceAssetName, v22, 1, 0LL);
          return;
        }
        Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        v24 = SkillLvEntity__getVoiceAssetName(v18, 0LL);
        v27 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v25, v26);
        System_Action___ctor(
          v27,
          (Il2CppObject *)this,
          Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__,
          0LL);
        if ( Instance )
        {
          SoundManager__LoadAudioAssetStorage(Instance, v24, v27, 1, 0LL);
          return;
        }
      }
    }
    sub_B0D97C(v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x4

  if ( (byte_4215867 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4215867 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__preloadCommandCardlocal(Instance, svtId, v5, 0, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadStatusFacelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool dlOnly,
        const MethodInfo *method)
{
  System_String_o *StatusImageFolderName; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4215868 & 1) == 0 )
  {
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4215868 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(
                            svtId,
                            svtId,
                            *(const MethodInfo **)&limitCount);
  ServantAssetLoadManager__tryLoadList(this, StatusImageFolderName, dlOnly, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadWeaponEffect(
        int32_t weapongroup,
        int32_t effectFolder,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  ServantAssetLoadManager_o *Instance; // x20
  System_String_o *v9; // x0
  System_String_o *v10; // x22
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x3
  int32_t v14; // [xsp+8h] [xbp-28h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v14 = effectFolder;
  v15 = weapongroup;
  if ( (byte_42158A3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&effectFolder);
    sub_B0D8A4(&StringLiteral_5879/*"Effect/weapon/"*/, v6);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v7);
    byte_42158A3 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v9 = System_Int32__ToString((int32_t)&v15, 0LL);
  v10 = v9;
  if ( !effectFolder )
  {
    v12 = System_String__Concat_43849904((System_String_o *)StringLiteral_5879/*"Effect/weapon/"*/, v9, 0LL);
    if ( Instance )
      goto LABEL_5;
LABEL_7:
    sub_B0D97C(v12);
  }
  v11 = System_Int32__ToString((int32_t)&v14, 0LL);
  v12 = System_String__Concat_43853316(
          (System_String_o *)StringLiteral_5879/*"Effect/weapon/"*/,
          v10,
          (System_String_o *)StringLiteral_879/*"/"*/,
          v11,
          0LL);
  if ( !Instance )
    goto LABEL_7;
LABEL_5:
  ServantAssetLoadManager__setLoadList(Instance, v12, dlOnly, v13);
}


void __fastcall ServantAssetLoadManager__releaseNoblePhantasm(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AssetData_o *nobleAssetData; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  AssetData_o *nobleSequenceData; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_AssetData__o *bgAssetDataList; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *nobleEffectList; // x0
  System_String_array *v36; // x0
  const MethodInfo *v37; // x2
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42158C8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AssetData___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_AssetData__TypeInfo, v10);
    byte_42158C8 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  nobleAssetData = this->fields.nobleAssetData;
  if ( nobleAssetData )
  {
    AssetData__RemoveEntry(nobleAssetData, 0LL);
    this->fields.nobleAssetData = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.nobleAssetData, 0LL, v12, v13, v14, v15, v16, v17);
  }
  nobleSequenceData = this->fields.nobleSequenceData;
  if ( nobleSequenceData )
  {
    AssetData__RemoveEntry(nobleSequenceData, 0LL);
    this->fields.nobleSequenceData = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.nobleSequenceData, 0LL, v19, v20, v21, v22, v23, v24);
  }
  bgAssetDataList = this->fields.bgAssetDataList;
  if ( bgAssetDataList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v38,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bgAssetDataList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v38,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      if ( !v38.fields.current )
        sub_B0D97C(0LL);
      AssetData__RemoveEntry((AssetData_o *)v38.fields.current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v38,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_AssetData__TypeInfo,
                                                                                                    v26,
                                                                                                    v27);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v28,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v28;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.bgAssetDataList,
      (System_Int32_array **)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  nobleEffectList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.nobleEffectList;
  if ( !nobleEffectList )
    goto LABEL_19;
  if ( nobleEffectList->fields._size < 1 )
    return;
  v36 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 nobleEffectList,
                                 (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal(this, v36, v37);
  nobleEffectList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.nobleEffectList;
  if ( !nobleEffectList )
LABEL_19:
    sub_B0D97C(nobleEffectList);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)nobleEffectList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall ServantAssetLoadManager__setLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_string__o *downloadlist; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  AssetLoader_LoadEndDataHandler_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_4215873 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, path);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Remove__, v8);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B0D8A4(&Method_ServantAssetLoadManager_endloadList__, v10);
    byte_4215873 = 1;
  }
  if ( dlOnly )
  {
    downloadlist = this->fields.downloadlist;
    if ( downloadlist )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)downloadlist,
        (EventMissionProgressRequest_Argument_ProgressData_o *)path,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
      v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v12, v13);
      AssetLoader_LoadEndDataHandler___ctor(
        v14,
        (Il2CppObject *)this,
        Method_ServantAssetLoadManager_endloadList__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__downloadAssetStorage(path, v14, 20, 0LL) )
        return;
      downloadlist = this->fields.downloadlist;
      if ( downloadlist )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)downloadlist,
          (WarBoardManager_TaskList_o *)path,
          (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_string__Remove__);
        return;
      }
    }
LABEL_18:
    sub_B0D97C(downloadlist);
  }
  downloadlist = this->fields.loadedList;
  if ( !downloadlist )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)downloadlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)path,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  downloadlist = this->fields.loadlist;
  if ( !downloadlist )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)downloadlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)path,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v15, v16);
  AssetLoader_LoadEndDataHandler___ctor(v17, (Il2CppObject *)this, Method_ServantAssetLoadManager_endloadList__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_29522712(path, 20, v17, 0LL);
}


void __fastcall ServantAssetLoadManager__set_IsRetryTransition(
        ServantAssetLoadManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsRetryTransition_k__BackingField = value;
}


void __fastcall ServantAssetLoadManager__set_retryStatus(
        ServantAssetLoadManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._retryStatus_k__BackingField = value;
}


void __fastcall ServantAssetLoadManager__tryLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        bool dlOnly,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3

  if ( (byte_4215874 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, path);
    byte_4215874 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(path, 0LL) )
    ServantAssetLoadManager__setLoadList(this, path, dlOnly, v7);
}


void __fastcall ServantAssetLoadManager__unloadActorMotion(int32_t weapongroup, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_42158B5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_42158B5 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__unloadActorMotionlocal(Instance, weapongroup, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadActorMotionlocal(
        ServantAssetLoadManager_o *this,
        int32_t weapongroup,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadedList; // x0
  WarBoardManager_TaskList_o *v9; // x20
  AssetData_o *AssetStorage; // x0
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = weapongroup;
  if ( (byte_42158B6 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&weapongroup);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Remove__, v5);
    sub_B0D8A4(&StringLiteral_12780/*"Servants/Motion/"*/, v6);
    byte_42158B6 = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v11, 0LL);
  loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_String__Concat_43849904(
                                                                                (System_String_o *)StringLiteral_12780/*"Servants/Motion/"*/,
                                                                                v7,
                                                                                0LL);
  if ( !this->fields.loadedList )
    goto LABEL_11;
  v9 = (WarBoardManager_TaskList_o *)loadedList;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)loadedList,
         (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( loadedList )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadedList,
        v9,
        (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_7;
    }
LABEL_11:
    sub_B0D97C(loadedList);
  }
LABEL_7:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v9, 0LL);
  AssetManager__releaseAsset_29516400(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadAssets(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_42158CB & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_42158CB = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__unloadAssetsLocal(Instance, v3);
}


void __fastcall ServantAssetLoadManager__unloadAssetsLocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  Il2CppObject *current; // x20
  AssetData_o *AssetStorage; // x20
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42158CC & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_42158CC = 1;
  }
  memset(&v11, 0, sizeof(v11));
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)loadedList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v11.fields.current;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0LL);
    if ( AssetStorage )
    {
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAsset_29516400(AssetStorage, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  loadedList = this->fields.loadedList;
  if ( !loadedList )
LABEL_16:
    sub_B0D97C(loadedList);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadedList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall ServantAssetLoadManager__unloadBattleActor(ServantAssetArgs_o *args, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x4

  if ( (byte_4215892 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4215892 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_B0D97C(Instance);
  ServantAssetLoadManager__unloadBattleActorlocal(
    Instance,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadBattleActorlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *ActorFolderName; // x0
  WarBoardManager_TaskList_o *v13; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4215893 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Remove__, v10);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v11);
    byte_4215893 = 1;
  }
  if ( appearanceId < 1 )
    appearanceId = svtId;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ActorFolderName = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)ServantAssetLoadManager__getActorFolderName(
                                                                                     appearanceId,
                                                                                     limitCount,
                                                                                     *(const MethodInfo **)&limitCount);
  if ( !this->fields.loadedList )
    goto LABEL_16;
  v13 = (WarBoardManager_TaskList_o *)ActorFolderName;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)ActorFolderName,
         (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    ActorFolderName = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( ActorFolderName )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        ActorFolderName,
        v13,
        (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_12;
    }
LABEL_16:
    sub_B0D97C(ActorFolderName);
  }
LABEL_12:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v13, 0LL);
  AssetManager__releaseAsset_29516400(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadCameraAction(int32_t cameraId, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_42158D1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_42158D1 = 1;
  }
  if ( cameraId )
  {
    Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    ServantAssetLoadManager__unloadCameraActionlocal(Instance, cameraId, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadCameraActionlocal(
        ServantAssetLoadManager_o *this,
        int32_t cameraId,
        const MethodInfo *method)
{
  System_String_o *CameraActionPath; // x1
  const MethodInfo *v6; // x2

  if ( (byte_42158D2 & 1) == 0 )
  {
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&cameraId);
    byte_42158D2 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, *(const MethodInfo **)&cameraId);
  ServantAssetLoadManager__unloadTargetPathAssetLocal(this, CameraActionPath, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadCommandCard(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4215863 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4215863 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__unloadCommandCardlocal(Instance, svtId, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadCommandCardlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *CommandCardLoadFolderName; // x0
  WarBoardManager_TaskList_o *v10; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4215864 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Remove__, v7);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v8);
    byte_4215864 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CommandCardLoadFolderName = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)ServantAssetLoadManager__getCommandCardLoadFolderName(
                                                                                               svtId,
                                                                                               svtId,
                                                                                               *(const MethodInfo **)&limitCount);
  if ( !this->fields.loadedList )
    goto LABEL_14;
  v10 = (WarBoardManager_TaskList_o *)CommandCardLoadFolderName;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)CommandCardLoadFolderName,
         (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    CommandCardLoadFolderName = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( CommandCardLoadFolderName )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        CommandCardLoadFolderName,
        v10,
        (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_10;
    }
LABEL_14:
    sub_B0D97C(CommandCardLoadFolderName);
  }
LABEL_10:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v10, 0LL);
  AssetManager__releaseAsset_29516400(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadCommandSpellAnyVoice(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4215887 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_4215887 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal(Instance, v3);
}


void __fastcall ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  void *Instance; // x0
  int v6; // w8
  _DWORD *v7; // x19
  unsigned int i; // w21
  char *v9; // x23
  CommandSpellEntity_o *v10; // x0
  void **v11; // x23
  CommandSpellEntity_o *v12; // t1
  SoundManager_o *v13; // x20
  __int64 v14; // x0

  if ( (byte_4215888 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandSpellMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_getEntitys_CommandSpellEntity___, v2);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v4);
    byte_4215888 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL
    || (Instance = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                     (DataMasterBase_o *)Instance,
                     (const MethodInfo_1714E7C *)Method_DataMasterBase_getEntitys_CommandSpellEntity___)) == 0LL )
  {
LABEL_21:
    sub_B0D97C(Instance);
  }
  v6 = *((_DWORD *)Instance + 6);
  v7 = Instance;
  if ( v6 >= 1 )
  {
    for ( i = 0; (int)i < v6; ++i )
    {
      if ( i >= v6 )
      {
LABEL_20:
        v14 = sub_B0D9A8(Instance);
        sub_B0D948(v14, 0LL);
      }
      v9 = (char *)&v7[2 * i];
      v12 = (CommandSpellEntity_o *)*((_QWORD *)v9 + 4);
      v11 = (void **)(v9 + 32);
      v10 = v12;
      if ( !v12 )
        return;
      Instance = (void *)CommandSpellEntity__isUseBattle(v10, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( i >= v7[6] )
          goto LABEL_20;
        Instance = *v11;
        if ( !*v11 )
          goto LABEL_21;
        Instance = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
        if ( Instance )
        {
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
          if ( i >= v7[6] )
            goto LABEL_20;
          v13 = (SoundManager_o *)Instance;
          Instance = *v11;
          if ( !*v11 )
            goto LABEL_21;
          Instance = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
          if ( !v13 )
            goto LABEL_21;
          SoundManager__ReleaseAudioAssetStorage(v13, (System_String_o *)Instance, 0LL);
        }
      }
      v6 = v7[6];
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadFromDeckServant(
        BattleDeckServantData_o *deckSvt,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_42158DF & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_42158DF = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__unloadFromDeckServantlocal(Instance, deckSvt, v4);
}


void __fastcall ServantAssetLoadManager__unloadFromDeckServantlocal(
        ServantAssetLoadManager_o *this,
        BattleDeckServantData_o *deckSvt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t EnemyNameEffect; // w0
  const MethodInfo *v9; // x1
  int32_t v10; // w20
  WarBoardManager_TaskList_o *NameEffectPath; // x0
  System_String_o *v12; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_42158E0 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, deckSvt);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Remove__, v6);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v7);
    byte_42158E0 = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0LL);
    if ( EnemyNameEffect )
    {
      v10 = EnemyNameEffect;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      NameEffectPath = (WarBoardManager_TaskList_o *)ServantAssetLoadManager__getNameEffectPath(v10, v9);
      if ( this->fields.loadedList )
      {
        v12 = (System_String_o *)NameEffectPath;
        if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
                NameEffectPath,
                (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
LABEL_12:
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          AssetStorage = AssetManager__getAssetStorage(v12, 0LL);
          AssetManager__releaseAsset_29516400(AssetStorage, 0LL);
          return;
        }
        NameEffectPath = (WarBoardManager_TaskList_o *)this->fields.loadedList;
        if ( NameEffectPath )
        {
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)NameEffectPath,
            (WarBoardManager_TaskList_o *)v12,
            (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_string__Remove__);
          goto LABEL_12;
        }
      }
      sub_B0D97C(NameEffectPath);
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadServant(ServantAssetArgs_o *args, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_421587B & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_421587B = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__unloadServantlocal(Instance, args, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadServantVoice(
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v8; // x4

  if ( (byte_421587F & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_421587F = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__unloadServantVoicelocal(Instance, svtId, limitCount, overwriteSvtVoiceId, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadServantVoicelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  int32_t VoiceId; // w0
  int32_t v11; // w8
  SoundManager_o *Instance; // x19
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4215880 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, *(_QWORD *)&svtId);
    sub_B0D8A4(&StringLiteral_12783/*"Servants_"*/, v9);
    byte_4215880 = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v11 = overwriteSvtVoiceId;
  else
    v11 = VoiceId;
  v15 = v11;
  if ( v11 )
  {
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v13 = System_Int32__ToString((int32_t)&v15, 0LL);
    v14 = System_String__Concat_43849904((System_String_o *)StringLiteral_12783/*"Servants_"*/, v13, 0LL);
    if ( !Instance )
      sub_B0D97C(v14);
    SoundManager__ReleaseAudioAssetStorage(Instance, v14, 0LL);
  }
}


void __fastcall ServantAssetLoadManager__unloadServantlocal(
        ServantAssetLoadManager_o *this,
        ServantAssetArgs_o *args,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4
  const MethodInfo *v10; // x2

  if ( !args )
    sub_B0D97C(this);
  ServantAssetLoadManager__unloadBattleActorlocal(
    this,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    v3);
  ServantAssetLoadManager__unloadStatusFacelocal(
    this,
    args->fields._DispImageSvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    v6);
  ServantAssetLoadManager__unloadCommandCardlocal(this, args->fields._CommandImageSvtId_k__BackingField, v7, v8);
  ServantAssetLoadManager__unloadServantVoicelocal(
    this,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._OverwriteSvtVoiceId_k__BackingField,
    v9);
  ServantAssetLoadManager__UnloadCommandCodeTextureLocal(this, args->fields._CommandCodeIds_k__BackingField, v10);
}


void __fastcall ServantAssetLoadManager__unloadSkillAnyVoice(
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4215883 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4215883 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__unloadSkillAnyVoiceLocal(Instance, skillInfo, v4);
}


void __fastcall ServantAssetLoadManager__unloadSkillAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x20
  __int64 v7; // x20
  System_String_o *VoiceAssetName; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v11; // x19
  SoundManager_o *Instance; // x20

  if ( (byte_4215884 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v5);
    byte_4215884 = 1;
  }
  if ( skillInfo
    && ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
         skillInfo,
         skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
         method)
    && skillInfo->fields.skilllv )
  {
    v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v7 = **(_QWORD **)(v6 + 192);
    if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
      sub_AA65A4(v7);
    VoiceAssetName = **(System_String_o ***)(v7 + 184);
    if ( !VoiceAssetName )
      goto LABEL_17;
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)VoiceAssetName,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    VoiceAssetName = (System_String_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                          skillInfo,
                                          skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_17;
    Entity = SkillLvMaster__GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int32_t)VoiceAssetName,
               skillInfo->fields.skilllv,
               0LL);
    if ( Entity )
    {
      v11 = Entity;
      if ( SkillLvEntity__getVoiceAssetName(Entity, 0LL) )
      {
        Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        VoiceAssetName = SkillLvEntity__getVoiceAssetName(v11, 0LL);
        if ( Instance )
        {
          SoundManager__ReleaseAudioAssetStorage(Instance, VoiceAssetName, 0LL);
          return;
        }
LABEL_17:
        sub_B0D97C(VoiceAssetName);
      }
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadSkillCutIn(BattleSkillInfoData_o *skillInfo, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_42158B1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_42158B1 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__unloadSkillCutInLocal(Instance, skillInfo, v4);
}


void __fastcall ServantAssetLoadManager__unloadSkillCutInLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *v4; // x0
  const MethodInfo *v5; // x2
  System_String_o *SkillCutInPath; // x1
  const MethodInfo *v7; // x2

  if ( skillInfo )
  {
    v4 = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))skillInfo->klass->vtable._7_getCutInId.method)(
                                        skillInfo,
                                        skillInfo->klass->vtable._8_PreLoad.methodPtr,
                                        method);
    if ( (int)v4 >= 1 )
    {
      SkillCutInPath = ServantAssetLoadManager__getSkillCutInPath(v4, (int32_t)v4, v5);
      ServantAssetLoadManager__unloadTargetPathAssetLocal(this, SkillCutInPath, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_421586B & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_421586B = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__unloadStatusFacelocal(Instance, svtId, limitCount, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadStatusFacelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_WarBoardManager_TaskList__o *StatusImageFolderName; // x0
  WarBoardManager_TaskList_o *v13; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_421586C & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Remove__, v8);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v9);
    byte_421586C = 1;
  }
  ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, method);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  StatusImageFolderName = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)ServantAssetLoadManager__getStatusImageFolderName(
                                                                                           svtId,
                                                                                           v10,
                                                                                           v11);
  if ( !this->fields.loadedList )
    goto LABEL_14;
  v13 = (WarBoardManager_TaskList_o *)StatusImageFolderName;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)StatusImageFolderName,
         (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    StatusImageFolderName = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( StatusImageFolderName )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        StatusImageFolderName,
        v13,
        (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_10;
    }
LABEL_14:
    sub_B0D97C(StatusImageFolderName);
  }
LABEL_10:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v13, 0LL);
  AssetManager__releaseAsset_29516400(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssetLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  AssetData_o *v9; // x19

  if ( (byte_42158AD & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, path);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Remove__, v6);
    byte_42158AD = 1;
  }
  loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_16;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         loadedList,
         (WarBoardManager_TaskList_o *)path,
         (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( loadedList )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadedList,
        (WarBoardManager_TaskList_o *)path,
        (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_7;
    }
LABEL_16:
    sub_B0D97C(loadedList);
  }
LABEL_7:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
  {
    v9 = AssetStorage;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29516400(v9, 0LL);
  }
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssets(
        System_String_array *pathList,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_42158AC & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_42158AC = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal(Instance, pathList, v4);
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssetsLocal(
        ServantAssetLoadManager_o *this,
        System_String_array *pathList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21
  __int64 v7; // x0

  if ( !pathList )
    sub_B0D97C(this);
  v3 = *(_QWORD *)&pathList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
      {
        v7 = sub_B0D9A8(this);
        sub_B0D948(v7, 0LL);
      }
      ServantAssetLoadManager__unloadTargetPathAssetLocal(this, pathList->m_Items[v6], method);
      LODWORD(v3) = pathList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v3 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadWeaponGroupEffect(
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_42158A6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&effectFolder);
    byte_42158A6 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__unloadWeaponGroupEffectlocal(Instance, weapongroup, effectFolder, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadWeaponGroupEffectlocal(
        ServantAssetLoadManager_o *this,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x0
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  int32_t v15; // [xsp+8h] [xbp-18h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  v15 = effectFolder;
  v16 = weapongroup;
  if ( (byte_42158A7 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&weapongroup);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Remove__, v7);
    sub_B0D8A4(&StringLiteral_5879/*"Effect/weapon/"*/, v8);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v9);
    byte_42158A7 = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v16, 0LL);
  v11 = System_String__Concat_43849904((System_String_o *)StringLiteral_5879/*"Effect/weapon/"*/, v10, 0LL);
  if ( effectFolder )
  {
    v12 = System_Int32__ToString((int32_t)&v15, 0LL);
    v11 = System_String__Concat_43852188(v11, (System_String_o *)StringLiteral_879/*"/"*/, v12, 0LL);
  }
  loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_13;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         loadedList,
         (WarBoardManager_TaskList_o *)v11,
         (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( loadedList )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadedList,
        (WarBoardManager_TaskList_o *)v11,
        (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_9;
    }
LABEL_13:
    sub_B0D97C(loadedList);
  }
LABEL_9:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v11, 0LL);
  AssetManager__releaseAsset_29516400(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__GetAheadBg_d__154___ctor(
        ServantAssetLoadManager__GetAheadBg_d__154_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ServantAssetLoadManager__GetAheadBg_d__154__MoveNext(
        ServantAssetLoadManager__GetAheadBg_d__154_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantAssetLoadManager__GetAheadBg_d__154_o *v3; // x19
  __int64 v4; // x1
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
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  struct WellFired_USFGOChangeBgEvent_array *bgList; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x22
  ServantAssetLoadManager__GetAheadBg_d__154_o **p_bgAheadList_5__2; // x21
  struct WellFired_USFGOChangeBgEvent_array *v22; // x22
  int max_length; // w8
  unsigned int v24; // w23
  WellFired_USFGOChangeBgEvent_o *v25; // x1
  System_String_o *v26; // x1
  System_String_o *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  AssetLoader_LoadEndDataHandler_o *v30; // x23
  Il2CppClass *klass; // x9
  bool result; // w0
  __int64 v33; // x0
  UnityEngine_WaitForEndOfFrame_o *v34; // x20
  Il2CppObject **p__2__current; // x19
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-70h] BYREF

  v3 = this;
  if ( (byte_421220A & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AssetData__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__get_Count__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo, v12);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
    sub_B0D8A4(&Method_ServantAssetLoadManager__GetAheadBg_b__154_0__, v14);
    sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v15);
    this = (ServantAssetLoadManager__GetAheadBg_d__154_o *)sub_B0D8A4(&StringLiteral_2814/*"Bg/"*/, v16);
    byte_421220A = 1;
  }
  memset(&v37, 0, sizeof(v37));
  _1__state = v3->fields.__1__state;
  _4__this = (Il2CppObject *)v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_bgAheadList_5__2 = (ServantAssetLoadManager__GetAheadBg_d__154_o **)&v3->fields._bgAheadList_5__2;
    v3->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    bgList = v3->fields.bgList;
    v3->fields.__1__state = -1;
    if ( !bgList )
    {
LABEL_30:
      this = (ServantAssetLoadManager__GetAheadBg_d__154_o *)v3->fields.callback;
      if ( !this )
        goto LABEL_33;
      System_Action__Invoke((System_Action_o *)this, 0LL);
      return 0;
    }
    v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo,
                                                                                                    method,
                                                                                                    v2);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v20,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__);
    v3->fields._bgAheadList_5__2 = (struct System_Collections_Generic_List_USFGOChangeBgEvent__o *)v20;
    p_bgAheadList_5__2 = (ServantAssetLoadManager__GetAheadBg_d__154_o **)&v3->fields._bgAheadList_5__2;
    sub_B0D840(&v3->fields._bgAheadList_5__2, v20);
    v22 = v3->fields.bgList;
    if ( !v22 )
      goto LABEL_33;
    max_length = v22->max_length;
    if ( max_length >= 1 )
    {
      v24 = 0;
      while ( 1 )
      {
        if ( v24 >= max_length )
        {
          v33 = sub_B0D9A8(this);
          sub_B0D948(v33, 0LL);
        }
        v25 = v22->m_Items[v24];
        if ( !v25 )
          break;
        if ( BYTE1(v25->fields.bgName) )
        {
          this = *p_bgAheadList_5__2;
          if ( !*p_bgAheadList_5__2 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__);
        }
        max_length = v22->max_length;
        if ( (int)++v24 >= max_length )
          goto LABEL_15;
      }
LABEL_33:
      sub_B0D97C(this);
    }
LABEL_15:
    this = *p_bgAheadList_5__2;
    if ( !*p_bgAheadList_5__2 )
      goto LABEL_33;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v36,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__);
    v37 = v36;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__) )
    {
      if ( !v37.fields.current )
        sub_B0D97C(0LL);
      v26 = (System_String_o *)((__int64 (*)(void))v37.fields.current->klass->vtable[16].method)();
      v27 = System_String__Concat_43849904((System_String_o *)StringLiteral_2814/*"Bg/"*/, v26, 0LL);
      v30 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v28, v29);
      AssetLoader_LoadEndDataHandler___ctor(v30, _4__this, Method_ServantAssetLoadManager__GetAheadBg_b__154_0__, 0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__loadAssetStorage(v27, v30, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__);
  }
  if ( !*p_bgAheadList_5__2 )
    goto LABEL_33;
  if ( !_4__this )
    goto LABEL_33;
  klass = _4__this[7].klass;
  if ( !klass )
    goto LABEL_33;
  if ( LODWORD((*p_bgAheadList_5__2)->fields.__2__current) == LODWORD(klass->_1.namespaze) )
  {
    *p_bgAheadList_5__2 = 0LL;
    sub_B0D840(p_bgAheadList_5__2, 0LL);
    goto LABEL_30;
  }
  v34 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
  UnityEngine_WaitForEndOfFrame___ctor(v34, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v34;
  p__2__current = &v3->fields.__2__current;
  sub_B0D840(p__2__current, v34);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall ServantAssetLoadManager__GetAheadBg_d__154__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantAssetLoadManager__GetAheadBg_d__154_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantAssetLoadManager__GetAheadBg_d__154__System_Collections_IEnumerator_Reset(
        ServantAssetLoadManager__GetAheadBg_d__154_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_ServantAssetLoadManager__GetAheadBg_d__154_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall ServantAssetLoadManager__GetAheadBg_d__154__System_Collections_IEnumerator_get_Current(
        ServantAssetLoadManager__GetAheadBg_d__154_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ServantAssetLoadManager__GetAheadBg_d__154__System_IDisposable_Dispose(
        ServantAssetLoadManager__GetAheadBg_d__154_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantAssetLoadManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x0

  if ( (byte_4212208 & 1) == 0 )
  {
    sub_B0D8A4(&ServantAssetLoadManager___c_TypeInfo, v1);
    byte_4212208 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantAssetLoadManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantAssetLoadManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall ServantAssetLoadManager___c___ctor(ServantAssetLoadManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Shader_o *__fastcall ServantAssetLoadManager___c___GetReplaceChocoShaderFunc_b__95_0(
        ServantAssetLoadManager___c_o *this,
        UnityEngine_Shader_o *targetShader,
        UnityEngine_Shader_o *defaultShader,
        const MethodInfo *method)
{
  return defaultShader;
}


UnityEngine_Shader_o *__fastcall ServantAssetLoadManager___c___GetReplaceDeadShaderFunc_b__94_0(
        ServantAssetLoadManager___c_o *this,
        UnityEngine_Shader_o *targetShader,
        UnityEngine_Shader_o *defaultShader,
        const MethodInfo *method)
{
  return defaultShader;
}


void __fastcall ServantAssetLoadManager___c__DisplayClass134_0___ctor(
        ServantAssetLoadManager___c__DisplayClass134_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantAssetLoadManager___c__DisplayClass134_0___playBattleVoicelocal_b__0(
        ServantAssetLoadManager___c__DisplayClass134_0_o *this,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *_4__this; // x0
  System_Action_o *callback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  ServantAssetLoadManager__EndPlaySe(_4__this, 0LL);
  callback = this->fields.callback;
  if ( callback )
    System_Action__Invoke(callback, 0LL);
}


void __fastcall ServantAssetLoadManager___c__DisplayClass152_0___ctor(
        ServantAssetLoadManager___c__DisplayClass152_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantAssetLoadManager___c__DisplayClass152_0___loadNoblePhantasmCoroutine_b__0(
        ServantAssetLoadManager___c__DisplayClass152_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct ServantAssetLoadManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  _4__this->fields.nobleSequenceData = data;
  sub_B0D840(&_4__this->fields.nobleSequenceData, data);
  this->fields.isNext = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager___c__DisplayClass152_0___loadNoblePhantasmCoroutine_b__1(
        ServantAssetLoadManager___c__DisplayClass152_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ServantAssetLoadManager_o *_4__this; // x0
  UnityEngine_Texture2D_o *AssetObject_Texture2D; // x20
  struct UnityEngine_GameObject_o *v13; // x0
  struct UnityEngine_GameObject_o **p_sequence; // x20
  UnityEngine_Transform_o *v15; // x21
  UnityEngine_Transform_o *transform; // x21
  int v17; // s0
  UnityEngine_Transform_o *v20; // x21
  int v21; // s0
  UnityEngine_Transform_o *v24; // x21
  int v25; // s0
  __int64 v28; // x1
  __int64 v29; // x2
  System_Action_o *_9__2; // x22
  WellFired_USFGOChangeBgEvent_array *v31; // x20
  ServantAssetLoadManager_o *v32; // x21

  if ( (byte_4212209 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, assetData);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___, v5);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v8);
    sub_B0D8A4(&Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__2__, v9);
    sub_B0D8A4(&StringLiteral_3974/*"ChrSequence1"*/, v10);
    byte_4212209 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  _4__this->fields.nobleAssetData = assetData;
  sub_B0D840(&_4__this->fields.nobleAssetData, assetData);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  AssetObject_Texture2D = ServantAssetLoadManager__getAssetObject_Texture2D_(
                            _4__this,
                            this->fields.sequencePath,
                            (System_String_o *)StringLiteral_3974/*"ChrSequence1"*/,
                            (const MethodInfo_204EA78 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                             (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.sequence = v13;
  p_sequence = &this->fields.sequence;
  sub_B0D840(&this->fields.sequence, v13);
  _4__this = (ServantAssetLoadManager_o *)this->fields.sequence;
  if ( !_4__this )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  _4__this = (ServantAssetLoadManager_o *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_23;
  _4__this = (ServantAssetLoadManager_o *)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)_4__this,
                                            0LL);
  if ( !this->fields.parent )
    goto LABEL_23;
  v15 = (UnityEngine_Transform_o *)_4__this;
  _4__this = (ServantAssetLoadManager_o *)UnityEngine_GameObject__get_transform(this->fields.parent, 0LL);
  if ( !v15 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent(v15, (UnityEngine_Transform_o *)_4__this, 0LL);
  _4__this = (ServantAssetLoadManager_o *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_23;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
  _4__this = (ServantAssetLoadManager_o *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_23;
  v20 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_up(0LL);
  if ( !v20 )
    goto LABEL_23;
  UnityEngine_Transform__set_eulerAngles(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
  _4__this = (ServantAssetLoadManager_o *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_23;
  v24 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_one(0LL);
  if ( !v24 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&v25, 0LL);
  _4__this = (ServantAssetLoadManager_o *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_23;
  _4__this = (ServantAssetLoadManager_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                            (UnityEngine_GameObject_o *)_4__this,
                                            (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___);
  _9__2 = this->fields.__9__2;
  v31 = (WellFired_USFGOChangeBgEvent_array *)_4__this;
  v32 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v28, v29);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B0D840(&this->fields.__9__2, _9__2);
  }
  if ( !v32 )
LABEL_23:
    sub_B0D97C(_4__this);
  ServantAssetLoadManager__LoadBg(v32, v31, _9__2, 0LL);
}


void __fastcall ServantAssetLoadManager___c__DisplayClass152_0___loadNoblePhantasmCoroutine_b__2(
        ServantAssetLoadManager___c__DisplayClass152_0_o *this,
        const MethodInfo *method)
{
  this->fields.isNext = 1;
}


void __fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152___ctor(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152__MoveNext(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *v3; // x19
  __int64 v4; // x1
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
  __int64 v27; // x1
  __int64 v28; // x1
  struct ServantAssetLoadManager_o *_4__this; // x21
  Il2CppObject *v30; // x22
  Il2CppObject **p__8__1; // x20
  struct ServantAssetLoadManager_o *v32; // x1
  struct UnityEngine_GameObject_o *parent; // x1
  TreasureDeviceSequenceWeightEntity_o *EntityWithCommonPattern; // x0
  int32_t _1__state; // w8
  int v36; // w9
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v37; // x8
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o **v38; // x24
  System_String_o *v39; // x20
  Il2CppObject *v40; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  AssetLoader_LoadEndDataHandler_o *v43; // x22
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *v44; // x8
  UnityEngine_Object_o *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  System_Collections_Generic_List_int__o *v48; // x20
  System_Int32_array *funcId; // x20
  int v50; // w20
  int _2__current; // w8
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *v52; // x20
  __int64 v53; // x22
  Il2CppObject **p__2__current; // x19
  int v55; // w8
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v56; // x8
  UnityEngine_GameObject_o *sequence; // x21
  ServantAssetLoadManager_onGameObjectLoadComplete_o *callback; // x20
  int32_t seqIdFromMstTDSeqWeight_5__2; // w22
  int32_t groupSeqIdFromMstTDSeqWeight_5__3; // w23
  System_Tuple_int__int__o *v61; // x19
  const MethodInfo *v62; // x3
  bool result; // w0
  int32_t limitCount; // w1
  int32_t RandomSeqIdEachLimit; // w0
  Il2CppObject *v66; // x21
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  System_String_o *v69; // x0
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *_8__1; // x8
  System_String_o *sequencePath; // x22
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v72; // x22
  System_String_o *v73; // x0
  System_String_o *nobleDataPath_5__4; // x22
  __int64 v75; // x1
  __int64 v76; // x2
  System_String_o *v77; // x0
  System_String_o *v78; // x0
  Il2CppObject *v79; // x23
  System_String_o *monitor; // x21
  AssetLoader_LoadEndDataHandler_o *v81; // x22
  int monitor_low; // w20
  __int64 v83; // x0
  TreasureDvcLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_int__o *effectIdList; // [xsp+10h] [xbp-50h] BYREF
  WarEntity_o *v86; // [xsp+18h] [xbp-48h] BYREF
  int32_t v87; // [xsp+2Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_421220B & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_TreasureDvcMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___, v10);
    sub_B0D8A4(&int___TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__AddRange__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v16);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v17);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B0D8A4(&Method_System_Tuple_int__int___ctor__, v20);
    sub_B0D8A4(&Method_System_Tuple_int__int__get_Item1__, v21);
    sub_B0D8A4(&Method_System_Tuple_int__int__get_Item2__, v22);
    sub_B0D8A4(&System_Tuple_int__int__TypeInfo, v23);
    sub_B0D8A4(&Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__0__, v24);
    sub_B0D8A4(&Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__1__, v25);
    sub_B0D8A4(&ServantAssetLoadManager___c__DisplayClass152_0_TypeInfo, v26);
    sub_B0D8A4(&StringLiteral_9619/*"NoblePhantasm/"*/, v27);
    this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)sub_B0D8A4(&StringLiteral_9621/*"NoblePhantasm/Sequence/"*/, v28);
    byte_421220B = 1;
  }
  v87 = 0;
  effectIdList = 0LL;
  v86 = 0LL;
  entity = 0LL;
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      v30 = (Il2CppObject *)sub_B0D974(ServantAssetLoadManager___c__DisplayClass152_0_TypeInfo, method, v2);
      System_Object___ctor(v30, 0LL);
      p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
      v3->fields.__8__1 = (struct ServantAssetLoadManager___c__DisplayClass152_0_o *)v30;
      sub_B0D840(&v3->fields.__8__1, v30);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)v3->fields.__8__1;
      if ( !this )
        goto LABEL_108;
      v32 = v3->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v32;
      sub_B0D840(&this->fields, v32);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)v3->fields.__8__1;
      if ( !this )
        goto LABEL_108;
      parent = v3->fields.parent;
      *(_QWORD *)&this->fields.treasureDvcId = parent;
      sub_B0D840(&this->fields.treasureDvcId, parent);
      if ( !*p__8__1 )
        goto LABEL_108;
      LOBYTE((*p__8__1)[1].monitor) = 0;
      if ( !_4__this )
        goto LABEL_108;
      ServantAssetLoadManager__releaseNoblePhantasm(_4__this, 0LL);
      *(_QWORD *)&v3->fields._seqIdFromMstTDSeqWeight_5__2 = 0LL;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___);
      if ( !this )
        goto LABEL_108;
      EntityWithCommonPattern = TreasureDeviceSequenceWeightMaster__GetEntityWithCommonPattern(
                                  (TreasureDeviceSequenceWeightMaster_o *)this,
                                  v3->fields.treasureDvcId,
                                  v3->fields.limitCount,
                                  v3->fields.npChargeStage,
                                  0LL);
      if ( !EntityWithCommonPattern )
        goto LABEL_70;
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)TreasureDeviceSequenceWeightEntity__GetSeqIdAndGroupSeqId(
                                                                               EntityWithCommonPattern,
                                                                               0LL);
      if ( !this )
        goto LABEL_108;
      _1__state = this->fields.__1__state;
      if ( _1__state >= 1 )
      {
        v3->fields._seqIdFromMstTDSeqWeight_5__2 = _1__state;
        v36 = *(&this->fields.__1__state + 1);
        if ( v36 >= 1 )
          v3->fields._groupSeqIdFromMstTDSeqWeight_5__3 = v36;
        goto LABEL_80;
      }
      _1__state = v3->fields._seqIdFromMstTDSeqWeight_5__2;
      if ( _1__state >= 1 )
        goto LABEL_80;
LABEL_70:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
      if ( !this )
        goto LABEL_108;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
              &v86,
              v3->fields.treasureDvcId,
              (const MethodInfo_2669C30 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
      {
        _1__state = v3->fields.treasureDvcId;
LABEL_80:
        v87 = _1__state;
        goto LABEL_83;
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)v86;
      if ( !v86 )
        goto LABEL_108;
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)TreasureDvcEntity__IsRandomTD(
                                                                               (TreasureDvcEntity_o *)v86,
                                                                               0LL);
      if ( !v86 )
        goto LABEL_108;
      limitCount = v3->fields.limitCount;
      if ( ((unsigned __int8)this & 1) != 0 )
        RandomSeqIdEachLimit = TreasureDvcEntity__getRandomSeqIdEachLimit(
                                 (TreasureDvcEntity_o *)v86,
                                 limitCount,
                                 0,
                                 0LL);
      else
        RandomSeqIdEachLimit = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)v86, limitCount, 0LL);
      v87 = RandomSeqIdEachLimit;
LABEL_83:
      v66 = *p__8__1;
      v67 = System_Int32__ToString((int32_t)&v87, 0LL);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)System_String__Concat_43849904(
                                                                               (System_String_o *)StringLiteral_9621/*"NoblePhantasm/Sequence/"*/,
                                                                               v67,
                                                                               0LL);
      if ( !v66 )
        goto LABEL_108;
      v66[2].monitor = this;
      sub_B0D840(&v66[2].monitor, this);
      v68 = System_Int32__ToString((int32_t)&v87, 0LL);
      v69 = System_String__Concat_43849904((System_String_o *)StringLiteral_9619/*"NoblePhantasm/"*/, v68, 0LL);
      v3->fields._nobleDataPath_5__4 = v69;
      sub_B0D840(&v3->fields._nobleDataPath_5__4, v69);
      _8__1 = v3->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_108;
      sequencePath = _8__1->fields.sequencePath;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( !AssetManager__isExistAssetStorage(sequencePath, 0LL) )
      {
        v72 = v3->fields.__8__1;
        v73 = System_Int32__ToString((int)v3 + 60, 0LL);
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)System_String__Concat_43849904(
                                                                                 (System_String_o *)StringLiteral_9621/*"NoblePhantasm/Sequence/"*/,
                                                                                 v73,
                                                                                 0LL);
        if ( !v72 )
          goto LABEL_108;
        v72->fields.sequencePath = (struct System_String_o *)this;
        sub_B0D840(&v72->fields.sequencePath, this);
      }
      nobleDataPath_5__4 = v3->fields._nobleDataPath_5__4;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)AssetManager__isExistAssetStorage(
                                                                               nobleDataPath_5__4,
                                                                               0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v77 = System_Int32__ToString((int)v3 + 60, 0LL);
        v78 = System_String__Concat_43849904((System_String_o *)StringLiteral_9619/*"NoblePhantasm/"*/, v77, 0LL);
        v3->fields._nobleDataPath_5__4 = v78;
        sub_B0D840(&v3->fields._nobleDataPath_5__4, v78);
      }
      if ( !*p__8__1 )
        goto LABEL_108;
      LOBYTE((*p__8__1)[1].monitor) = 0;
      v79 = *p__8__1;
      if ( !*p__8__1 )
        goto LABEL_108;
      monitor = (System_String_o *)v79[2].monitor;
      v81 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v75, v76);
      AssetLoader_LoadEndDataHandler___ctor(
        v81,
        v79,
        Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__0__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)AssetManager__loadAssetStorage(
                                                                               monitor,
                                                                               v81,
                                                                               1,
                                                                               0LL);
LABEL_102:
      if ( !*p__8__1 )
        goto LABEL_108;
      monitor_low = LOBYTE((*p__8__1)[1].monitor);
      v3->fields.__2__current = 0LL;
      sub_B0D840(&v3->fields.__2__current, 0LL);
      if ( !monitor_low )
      {
        result = 1;
        v3->fields.__1__state = 1;
        return result;
      }
      v3->fields.__1__state = 2;
      return 1;
    case 1:
      p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
      v3->fields.__1__state = -1;
      goto LABEL_102;
    case 2:
      v38 = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o **)&v3->fields.__8__1;
      v37 = v3->fields.__8__1;
      v3->fields.__1__state = -1;
      if ( !v37 )
        goto LABEL_108;
      v37->fields.isNext = 0;
      this = *v38;
      if ( !*v38 )
        goto LABEL_108;
      this->fields.__4__this = 0LL;
      sub_B0D840(&this->fields.__4__this, 0LL);
      v39 = v3->fields._nobleDataPath_5__4;
      v40 = (Il2CppObject *)v3->fields.__8__1;
      v43 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v41, v42);
      AssetLoader_LoadEndDataHandler___ctor(
        v43,
        v40,
        Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__1__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)AssetManager__loadAssetStorage(
                                                                               v39,
                                                                               v43,
                                                                               1,
                                                                               0LL);
LABEL_25:
      v44 = *v38;
      if ( !*v38 )
        goto LABEL_108;
      if ( LOBYTE(v44->fields.__2__current) )
      {
        v45 = (UnityEngine_Object_o *)v44->fields.__4__this;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
          goto LABEL_61;
        v48 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v46,
                                                          v47);
        System_Collections_Generic_List_int____ctor(
          v48,
          (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
        effectIdList = v48;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_108;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)this,
                                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
        if ( !this )
          goto LABEL_108;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)TreasureDvcLvMaster__TryGetEntity(
                                                                                 (TreasureDvcLvMaster_o *)this,
                                                                                 &entity,
                                                                                 v3->fields.treasureDvcId,
                                                                                 v3->fields.treasureDvcLv,
                                                                                 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_108;
          funcId = entity->fields.funcId;
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          }
          BattleEffectUtility__AddRelatedFunctionEffectIdList(funcId, &effectIdList, 0LL);
          this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)entity;
          if ( !entity )
LABEL_108:
            sub_B0D97C(this);
          this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
                                                                                   entity,
                                                                                   0LL);
          if ( (int)this >= 1 )
          {
            v50 = (int)this;
            this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)sub_B0D8BC(int___TypeInfo, 1LL);
            if ( !this )
              goto LABEL_108;
            if ( !LODWORD(this->fields.__2__current) )
            {
LABEL_109:
              v83 = sub_B0D9A8(this);
              sub_B0D948(v83, 0LL);
            }
            LODWORD(this->fields.__4__this) = v50;
            if ( !_4__this )
              goto LABEL_108;
            this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                                                                     _4__this,
                                                                                     (System_Int32_array *)this,
                                                                                     0LL);
          }
        }
        if ( !*v38 )
          goto LABEL_108;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)(*v38)->fields.__4__this;
        if ( !this )
          goto LABEL_108;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                                                                 (UnityEngine_GameObject_o *)this,
                                                                                 (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
        if ( this )
        {
          _2__current = (int)this->fields.__2__current;
          v52 = this;
          if ( _2__current >= 1 )
          {
            v53 = 0LL;
            while ( (unsigned int)v53 < _2__current )
            {
              this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)*((_QWORD *)&v52->fields.__4__this
                                                                                     + v53);
              if ( !this )
                goto LABEL_108;
              WellFired_USFGOActorBattleActionEvent__AddHasAllEffectIds(
                (WellFired_USFGOActorBattleActionEvent_o *)this,
                &effectIdList,
                0LL);
              _2__current = (int)v52->fields.__2__current;
              if ( (int)++v53 >= _2__current )
                goto LABEL_52;
            }
            goto LABEL_109;
          }
        }
LABEL_52:
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)effectIdList;
        if ( !effectIdList )
          goto LABEL_108;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)System_Collections_Generic_List_int___ToArray(
                                                                                 effectIdList,
                                                                                 (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !_4__this )
          goto LABEL_108;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                                                                 _4__this,
                                                                                 (System_Int32_array *)this,
                                                                                 0LL);
        if ( !_4__this->fields.nobleEffectList )
          goto LABEL_108;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)_4__this->fields.nobleEffectList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_string__AddRange__);
LABEL_56:
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        if ( ServantAssetLoadManager__checkLoad(0LL) )
        {
          v3->fields.__2__current = 0LL;
          p__2__current = &v3->fields.__2__current;
          sub_B0D840(p__2__current, 0LL);
          v55 = 4;
        }
        else
        {
LABEL_61:
          v3->fields.__2__current = 0LL;
          p__2__current = &v3->fields.__2__current;
          sub_B0D840(p__2__current, 0LL);
          v55 = 5;
        }
      }
      else
      {
        v3->fields.__2__current = 0LL;
        p__2__current = &v3->fields.__2__current;
        sub_B0D840(p__2__current, 0LL);
        v55 = 3;
      }
      *((_DWORD *)p__2__current - 2) = v55;
      return 1;
    case 3:
      v38 = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o **)&v3->fields.__8__1;
      v3->fields.__1__state = -1;
      goto LABEL_25;
    case 4:
      v3->fields.__1__state = -1;
      goto LABEL_56;
    case 5:
      v56 = v3->fields.__8__1;
      v3->fields.__1__state = -1;
      if ( !v56 )
        goto LABEL_108;
      sequence = v56->fields.sequence;
      callback = v3->fields.callback;
      seqIdFromMstTDSeqWeight_5__2 = v3->fields._seqIdFromMstTDSeqWeight_5__2;
      groupSeqIdFromMstTDSeqWeight_5__3 = v3->fields._groupSeqIdFromMstTDSeqWeight_5__3;
      v61 = (System_Tuple_int__int__o *)sub_B0D974(System_Tuple_int__int__TypeInfo, method, v2);
      System_Tuple_int__int____ctor(
        v61,
        seqIdFromMstTDSeqWeight_5__2,
        groupSeqIdFromMstTDSeqWeight_5__3,
        (const MethodInfo_2695230 *)Method_System_Tuple_int__int___ctor__);
      if ( !callback )
        goto LABEL_108;
      ServantAssetLoadManager_onGameObjectLoadComplete__Invoke(callback, sequence, v61, v62);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152__System_Collections_IEnumerator_Reset(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152__System_Collections_IEnumerator_get_Current(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152__System_IDisposable_Dispose(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


System_IAsyncResult_o *__fastcall ServantAssetLoadManager_onGameObjectLoadComplete__BeginInvoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        System_Tuple_int__int__o *paramsFromMstTDSeqWeight,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v7[3]; // [xsp+8h] [xbp-18h] BYREF

  v7[1] = (__int64)paramsFromMstTDSeqWeight;
  v7[2] = 0LL;
  v7[0] = (__int64)obj;
  return (System_IAsyncResult_o *)sub_B0D848(this, v7, callback, object);
}


void __fastcall ServantAssetLoadManager_onGameObjectLoadComplete__EndInvoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall ServantAssetLoadManager_onGameObjectLoadComplete__Invoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        System_Tuple_int__int__o *paramsFromMstTDSeqWeight,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  ServantAssetLoadManager_onGameObjectLoadComplete_o **v9; // x26
  __int64 i; // x27
  unsigned int v11; // w23
  __int64 class_0; // x0
  UnityEngine_GameObject_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w24
  __int64 v19; // x0
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD); // x0
  ServantAssetLoadManager_onGameObjectLoadComplete_o *v29; // x8
  __int64 v30; // x22
  __int64 *v31; // x23
  void (__fastcall *v32)(UnityEngine_GameObject_o *, System_Tuple_int__int__o *, __int64); // x24
  char v33; // w0
  int v34; // w8
  char v35; // w24
  char v36; // w0
  __int64 v37; // x8
  __int64 v38; // x1
  __int64 v39; // x2
  unsigned __int64 v40; // x10
  _DWORD *v41; // x11
  char v42; // w23
  char v43; // w0
  UnityEngine_GameObject_c *klass; // x8
  __int64 v45; // x1
  __int64 v46; // x2
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  ServantAssetLoadManager_onGameObjectLoadComplete_o *v49; // [xsp+8h] [xbp-48h] BYREF

  v49 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v49;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (ServantAssetLoadManager_onGameObjectLoadComplete_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v8; ++i )
    {
      v29 = v9[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(UnityEngine_GameObject_o *, System_Tuple_int__int__o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v29->fields.extra_arg, obj, paramsFromMstTDSeqWeight, method);
      v33 = sub_B0D8D4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 2 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 2 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v42 = sub_B0D8CC(v30);
            v43 = sub_B0DCD0(v30);
            if ( (v42 & 1) != 0 )
            {
              if ( (v43 & 1) != 0 )
              {
                klass = obj->klass;
                v45 = *(_QWORD *)(v30 + 24);
                v46 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&obj->klass->_2.bitflags1 )
                {
                  v47 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v45 )
                  {
                    ++v47;
                    p_offset += 4;
                    if ( v47 >= *(unsigned __int16 *)&obj->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v46);
                }
                else
                {
LABEL_57:
                  v25 = sub_AA67A0(obj, v45, v46);
                }
                v17 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&obj->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))sub_B0D954(v17, v30);
              (*v26)(obj, paramsFromMstTDSeqWeight, v26);
            }
            else
            {
              v11 = *(unsigned __int16 *)(v30 + 72);
              if ( (v43 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
                v13 = obj->klass;
                if ( *(_WORD *)&obj->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&obj->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v11));
                }
                else
                {
LABEL_11:
                  v16 = sub_AA67A0(obj, class_0, v11);
                }
                (*(void (__fastcall **)(UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))v16)(
                  obj,
                  paramsFromMstTDSeqWeight,
                  *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))&obj->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  obj,
                  paramsFromMstTDSeqWeight,
                  *((_QWORD *)&obj->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(obj, paramsFromMstTDSeqWeight, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B0D8CC(v30);
          v36 = sub_B0DCD0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v37 = *v31;
              v38 = *(_QWORD *)(v30 + 24);
              v39 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v40 = 0LL;
                v41 = (_DWORD *)(*(_QWORD *)(v37 + 176) + 8LL);
                while ( *((_QWORD *)v41 - 1) != v38 )
                {
                  ++v40;
                  v41 += 4;
                  if ( v40 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v37 + 16LL * (*v41 + (int)v39) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AA67A0(v31, v38, v39);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))sub_B0D954(v24, v30);
            (*v28)(v31, obj, paramsFromMstTDSeqWeight, v28);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v19 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v18) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AA67A0(v31, v19, v18);
              }
              (*(void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))v23)(
                v31,
                obj,
                paramsFromMstTDSeqWeight,
                *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 312))(
                v31,
                obj,
                paramsFromMstTDSeqWeight,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, UnityEngine_GameObject_o *, System_Tuple_int__int__o *, __int64))v32)(
        v31,
        obj,
        paramsFromMstTDSeqWeight,
        v30);
    }
  }
}