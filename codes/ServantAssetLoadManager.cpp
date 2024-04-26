void __fastcall ServantAssetLoadManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v1; // x19
  struct ServantAssetLoadManager_StaticFields *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  struct ServantAssetLoadManager_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4352CCC & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352CCC = 1;
  }
  ServantAssetLoadManager_TypeInfo->static_fields->KeepAssetPlayerServantCount = 3;
  v1 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v1,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__);
  static_fields = ServantAssetLoadManager_TypeInfo->static_fields;
  static_fields->unloadIgnoredAssetArgs = (struct System_Collections_Generic_Dictionary_string__ServantAssetArgs__o *)v1;
  sub_B70630(
    (BattleServantConfConponent_o *)&static_fields->unloadIgnoredAssetArgs,
    (System_Int32_array **)v1,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
  v9 = ServantAssetLoadManager_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  v9->wkSpace = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->wkSpace, v10, v11, v12, v13, v14, v15, v16);
}


void __fastcall ServantAssetLoadManager___ctor(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v52; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7

  if ( (byte_4352CCB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__string___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__Object___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__string__TypeInfo);
    sub_B70694(&System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo);
    sub_B70694(&System_Collections_Generic_Dictionary_string__Object__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__);
    byte_4352CCB = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.loadedList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadlist = (struct System_Collections_Generic_List_string__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.loadlist,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.downloadlist = (struct System_Collections_Generic_List_string__o *)v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.downloadlist,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v24,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__);
  this->fields.ActorVoice = (struct System_Collections_Generic_Dictionary_int__SePlayer__o *)v24;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.ActorVoice,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__string__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v31,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  this->fields.LastActorVoice = (struct System_Collections_Generic_Dictionary_int__string__o *)v31;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.LastActorVoice,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v38;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.bgAssetDataList,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.nobleEffectList = (struct System_Collections_Generic_List_string__o *)v45;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.nobleEffectList,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.InitPoint.fields.z = 0.0;
  *(_QWORD *)&this->fields.InitPoint.fields.x = 0x3D4CCCCD00000000LL;
  v52 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__Object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v52,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__Object___ctor__);
  this->fields._releaseAssets = (struct System_Collections_Generic_Dictionary_string__Object__o *)v52;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._releaseAssets,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2CE9C98 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__);
}


bool __fastcall ServantAssetLoadManager__CheckLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadlist; // x0

  if ( (byte_4352CC5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4352CC5 = 1;
  }
  loadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadlist;
  if ( !loadlist )
    sub_B7076C(0LL, path);
  return System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           loadlist,
           (WarBoardManager_TaskList_o *)path,
           (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__);
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
    sub_B7076C(this, data);
  svtmaster = (int)this->fields.svtmaster;
  if ( svtmaster >= 1 )
  {
    for ( i = 0; i < svtmaster; ++i )
    {
      if ( i >= (unsigned int)svtmaster )
      {
        v5 = sub_B70798(this);
        sub_B70738(v5, 0LL);
      }
    }
  }
}


void __fastcall ServantAssetLoadManager__DownLoadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4352C60 & 1) == 0 )
  {
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_4352C60 = 1;
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *Instance; // x0
  __int64 v4; // x1
  ServantAssetLoadManager_c *v5; // x0
  ServantAssetArgs_o *currentValue; // x19
  int32_t v7; // w22
  const MethodInfo *v8; // x1
  _BOOL8 v9; // x0
  ServantAssetLoadManager_c *v10; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v11; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v12; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4352CC4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__get_Current__);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__);
    byte_4352CC4 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  this->fields._IsRetryTransition_k__BackingField = 0;
  Instance = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  LODWORD(Instance[1].fields.values) = 3;
  v5 = ServantAssetLoadManager_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v5 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)v5->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
    goto LABEL_24;
  Instance = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                          Instance,
                                                                                          (const MethodInfo_2F4F78C *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__);
  if ( !Instance )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v11,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_26682B0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
           &v12,
           (const MethodInfo_277CB58 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__);
    if ( !v9 )
      break;
    currentValue = (ServantAssetArgs_o *)v12.fields.currentValue;
    if ( !v12.fields.currentValue )
      sub_B7076C(v9, v8);
    if ( SLODWORD(v12.fields.currentValue[5].monitor) >= 1 )
    {
      v7 = 0;
      do
      {
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        ServantAssetLoadManager__UnloadAssetsByArgs(currentValue, v8);
        ++v7;
      }
      while ( v7 < currentValue->fields._UnloadCount_k__BackingField );
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v12,
    (const MethodInfo_277CB54 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__);
  v10 = ServantAssetLoadManager_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v10 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)v10->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
LABEL_24:
    sub_B7076C(Instance, v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Instance,
    (const MethodInfo_2F4FBC4 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__);
}


bool __fastcall ServantAssetLoadManager__ExistPreloadBattleActor(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        bool isForce,
        const MethodInfo *method)
{
  System_String_o *PreloadBattleActorFolderName; // x19

  if ( (byte_4352C78 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B70694(&AssetManager_TypeInfo);
    byte_4352C78 = 1;
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


bool __fastcall ServantAssetLoadManager__ExistsBattleVoice(
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        int32_t type,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4352CA5 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352CA5 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v10);
  return ServantAssetLoadManager__ExistsBattleVoiceLocal(Instance, svtId, limit, overwriteSvtVoiceId, type, v11);
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
  int32_t VoicePrefix; // w24
  const MethodInfo *v12; // x3
  int32_t VoiceId; // w0
  __int64 v14; // x2
  int32_t v15; // w9
  Il2CppObject *v16; // x20
  Il2CppObject *FileName; // x0
  System_String_o *v18; // x19
  SoundManager_o *Instance; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  __int64 v22; // x1
  int32_t v24; // [xsp+8h] [xbp-38h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4352CA6 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_B70694(&Voice_TypeInfo);
    sub_B70694(&StringLiteral_23882/*"{0:D0}_{1}"*/);
    sub_B70694(&StringLiteral_12916/*"Servants_"*/);
    byte_4352CA6 = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, *(const MethodInfo **)&overwriteSvtVoiceId);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v12);
  if ( overwriteSvtVoiceId )
    v15 = overwriteSvtVoiceId;
  else
    v15 = VoiceId;
  v24 = VoicePrefix;
  v25 = v15;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v14);
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = (Il2CppObject *)Voice__getFileName(type, 0LL);
  v18 = System_String__Format_44753704((System_String_o *)StringLiteral_23882/*"{0:D0}_{1}"*/, v16, FileName, 0LL);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v20 = System_Int32__ToString((int32_t)&v25, 0LL);
  v21 = System_String__Concat_44758168((System_String_o *)StringLiteral_12916/*"Servants_"*/, v20, 0LL);
  if ( !Instance )
    sub_B7076C(v21, v22);
  return SoundManager__IsExistsSound(Instance, v21, v18, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ServantAssetLoadManager__GetAheadBg(
        ServantAssetLoadManager_o *this,
        WellFired_USFGOChangeBgEvent_array *bgList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4352CB0 & 1) == 0 )
  {
    sub_B70694(&ServantAssetLoadManager__GetAheadBg_d__154_TypeInfo);
    byte_4352CB0 = 1;
  }
  v7 = sub_B70764(ServantAssetLoadManager__GetAheadBg_d__154_TypeInfo);
  ServantAssetLoadManager__GetAheadBg_d__154___ctor((ServantAssetLoadManager__GetAheadBg_d__154_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = bgList;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)bgList, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


System_String_o *__fastcall ServantAssetLoadManager__GetCommandCodeFolderName(
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4352CC2 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_4245/*"CommandCodes/Texture/"*/);
    byte_4352CC2 = 1;
  }
  v6 = commandCodeId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6, v2);
  return System_String__Concat((Il2CppObject *)StringLiteral_4245/*"CommandCodes/Texture/"*/, v4, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__GetLastVoiceType(int32_t uniqueId, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4352CA9 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352CA9 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  return ServantAssetLoadManager__GetLastVoiceTypeLocal(Instance, uniqueId, v5);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__GetLastVoiceTypeLocal(
        ServantAssetLoadManager_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__string__o *LastActorVoice; // x0
  ServantAssetLoadManager_c *v7; // x0

  if ( (byte_4352CAA & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__string__get_Item__);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_4352CAA = 1;
  }
  LastActorVoice = this->fields.LastActorVoice;
  if ( !LastActorVoice )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)LastActorVoice,
         uniqueId,
         (const MethodInfo_2FC67DC *)Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__) )
  {
    LastActorVoice = this->fields.LastActorVoice;
    if ( LastActorVoice )
      return (System_String_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)LastActorVoice,
                                  uniqueId,
                                  (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__string__get_Item__);
LABEL_11:
    sub_B7076C(LastActorVoice, *(_QWORD *)&uniqueId);
  }
  v7 = ServantAssetLoadManager_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v7 = ServantAssetLoadManager_TypeInfo;
  }
  return v7->static_fields->wkSpace;
}


int32_t __fastcall ServantAssetLoadManager__GetLimitImageIndex(
        int32_t svtId,
        int32_t limitCount,
        int32_t limitDiff,
        const MethodInfo *method)
{
  if ( (byte_4352C43 & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    byte_4352C43 = 1;
  }
  if ( limitCount <= 10 )
  {
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    return ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL) + limitDiff;
  }
  return limitCount;
}


int32_t __fastcall ServantAssetLoadManager__GetNPSeqIdFromCachedAssetName(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1
  WebViewManager_c *klass; // x8
  System_String_o *namespaze; // x19
  System_String_o *FileNameWithoutExtension; // x0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( (byte_4352CC6 & 1) == 0 )
  {
    sub_B70694(&System_IO_Path_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352CC6 = 1;
  }
  result = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v2);
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


System_String_o *__fastcall ServantAssetLoadManager__GetPrefixVoiceId(
        ServantAssetLoadManager_o *this,
        int32_t servantId,
        int32_t limitCount,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  __int64 v9; // x2
  Il2CppObject *v10; // x0
  int32_t VoicePrefix; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4352CA2 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_23882/*"{0:D0}_{1}"*/);
    byte_4352CA2 = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, servantId, limitCount, (const MethodInfo *)voiceId);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &VoicePrefix, v9);
  return System_String__Format_44753704((System_String_o *)StringLiteral_23882/*"{0:D0}_{1}"*/, v10, (Il2CppObject *)voiceId, 0LL);
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

  if ( (byte_4352C77 & 1) == 0 )
  {
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_4352C77 = 1;
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
      return ServantAssetLoadManager__getActorFolderName_26978256(v10, *(const MethodInfo **)&svtId);
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
      return ServantAssetLoadManager__getActorFolderName_26978256(v10, *(const MethodInfo **)&svtId);
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
  ServantAssetLoadManager___c_c *v3; // x0
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__95_0; // x20
  Il2CppObject *v6; // x21
  struct ServantAssetLoadManager___c_StaticFields *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  changeVColor_array *v14; // x0
  __int64 v15; // x8
  Il2CppObject *v16; // x19
  __int64 v18; // x0

  if ( (byte_4352C7E & 1) == 0 )
  {
    sub_B70694(&Method_BattleServantDeadComponent_getReplaceChocoShader__);
    sub_B70694(&Method_System_Func_Shader__Shader__Shader___ctor__);
    sub_B70694(&System_Func_Shader__Shader__Shader__TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__95_0__);
    sub_B70694(&ServantAssetLoadManager___c_TypeInfo);
    byte_4352C7E = 1;
  }
  v3 = ServantAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo);
    v3 = ServantAssetLoadManager___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__95_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__95_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B70764(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__95_0,
      v6,
      Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__95_0__,
      (const MethodInfo_29B7F40 *)Method_System_Func_Shader__Shader__Shader___ctor__);
    v7 = ServantAssetLoadManager___c_TypeInfo->static_fields;
    v7->__9__95_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__95_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v7->__9__95_0,
      (System_Int32_array **)_9__95_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( !obj )
    sub_B7076C(v3, method);
  v14 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
          obj,
          (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( v14 && (v15 = *(_QWORD *)&v14->max_length) != 0 )
  {
    if ( !(_DWORD)v15 )
    {
      v18 = sub_B70798(v14);
      sub_B70738(v18, 0LL);
    }
    v16 = (Il2CppObject *)v14->m_Items[0];
  }
  else
  {
    v16 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
  {
    _9__95_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B70764(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__95_0,
      v16,
      Method_BattleServantDeadComponent_getReplaceChocoShader__,
      (const MethodInfo_29B7F40 *)Method_System_Func_Shader__Shader__Shader___ctor__);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__95_0;
}


System_Func_Shader__Shader__Shader__o *__fastcall ServantAssetLoadManager__GetReplaceDeadShaderFunc(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  ServantAssetLoadManager___c_c *v3; // x0
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__94_0; // x20
  Il2CppObject *v6; // x21
  struct ServantAssetLoadManager___c_StaticFields *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  changeVColor_array *v14; // x0
  __int64 v15; // x8
  Il2CppObject *v16; // x19
  __int64 v18; // x0

  if ( (byte_4352C7D & 1) == 0 )
  {
    sub_B70694(&Method_BattleServantDeadComponent_getReplaceDeadShader__);
    sub_B70694(&Method_System_Func_Shader__Shader__Shader___ctor__);
    sub_B70694(&System_Func_Shader__Shader__Shader__TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__94_0__);
    sub_B70694(&ServantAssetLoadManager___c_TypeInfo);
    byte_4352C7D = 1;
  }
  v3 = ServantAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo);
    v3 = ServantAssetLoadManager___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__94_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)static_fields->__9__94_0;
  if ( !_9__94_0 )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__94_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B70764(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__94_0,
      v6,
      Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__94_0__,
      (const MethodInfo_29B7F40 *)Method_System_Func_Shader__Shader__Shader___ctor__);
    v7 = ServantAssetLoadManager___c_TypeInfo->static_fields;
    v7->__9__94_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__94_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v7->__9__94_0,
      (System_Int32_array **)_9__94_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( !obj )
    sub_B7076C(v3, method);
  v14 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
          obj,
          (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( v14 && (v15 = *(_QWORD *)&v14->max_length) != 0 )
  {
    if ( !(_DWORD)v15 )
    {
      v18 = sub_B70798(v14);
      sub_B70738(v18, 0LL);
    }
    v16 = (Il2CppObject *)v14->m_Items[0];
  }
  else
  {
    v16 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
  {
    _9__94_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B70764(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__94_0,
      v16,
      Method_BattleServantDeadComponent_getReplaceDeadShader__,
      (const MethodInfo_29B7F40 *)Method_System_Func_Shader__Shader__Shader___ctor__);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__94_0;
}


bool __fastcall ServantAssetLoadManager__IsIgnoreUnloadServant(BattleServantData_o *data, const MethodInfo *method)
{
  BattleServantData_o *v2; // x19
  int32_t uniqueId; // w19
  ServantAssetLoadManager_c *v5; // x0

  v2 = data;
  if ( (byte_4352C65 & 1) == 0 )
  {
    data = (BattleServantData_o *)sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_4352C65 = 1;
  }
  if ( !v2 )
    sub_B7076C(data, method);
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
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1
  struct UIPanel_o *basePanel; // x8
  __int64 v5; // x11
  UnityEngine_Object_o *v6; // x19
  _BYTE *monitor; // x8

  if ( (byte_4352CC3 & 1) == 0 )
  {
    sub_B70694(&BattleRootComponent_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&StringLiteral_6452/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/);
    byte_4352CC3 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6452/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, 0LL) > 0 )
    return 0;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  basePanel = Instance->fields.basePanel;
  if ( basePanel
    && (v5 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
        *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
  {
    if ( (BattleRootComponent_c *)basePanel->klass->_2.typeHierarchy[v5 - 1] == BattleRootComponent_TypeInfo )
      v6 = (UnityEngine_Object_o *)Instance->fields.basePanel;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (WebViewManager_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    return 0;
  if ( !v6 || (monitor = v6[2].monitor) == 0LL )
LABEL_23:
    sub_B7076C(Instance, v3);
  return monitor[700];
}


bool __fastcall ServantAssetLoadManager__IsStop(int32_t uniqueId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4352CAD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352CAD = 1;
  }
  Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance->fields._syncRoot;
  if ( !Instance )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Instance,
         uniqueId,
         (const MethodInfo_2FC67DC *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance->fields._syncRoot;
      if ( Instance )
      {
        Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(Instance, uniqueId, (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        if ( Instance )
          return LOBYTE(Instance->fields.freeList) != 0;
      }
    }
LABEL_11:
    sub_B7076C(Instance, v4);
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
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, AheadBg, 0LL);
}


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
  __int64 v16; // x1
  UnityEngine_MonoBehaviour_o *v17; // x26
  System_Collections_IEnumerator_o *Manager__loadNoblePhantasmCoroutine; // x1
  const MethodInfo *v19; // [xsp+0h] [xbp-50h]

  if ( (byte_4352CAE & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352CAE = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v16);
  v17 = (UnityEngine_MonoBehaviour_o *)Instance;
  Manager__loadNoblePhantasmCoroutine = ServantAssetLoadManager__loadNoblePhantasmCoroutine(
                                          Instance,
                                          parent,
                                          svtId,
                                          limitCount,
                                          treasureDvcId,
                                          treasureDvcLv,
                                          npChargeStage,
                                          callback,
                                          v19);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060(v17, Manager__loadNoblePhantasmCoroutine, 0LL);
}


void __fastcall ServantAssetLoadManager__PreloadAssetsByArgs(
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  int Weapon_k__BackingField; // w21
  int WeaponEffectId_k__BackingField; // w21
  int32_t EffectFolder_k__BackingField; // w22
  int32_t CameraId_k__BackingField; // w21
  const MethodInfo *v13; // x2
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillList_k__BackingField; // x20
  __int64 size; // x8
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x9

  if ( (byte_4352C5F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_4352C5F = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__preloadServant(args, dlOnly, method);
  if ( !args )
    sub_B7076C(v5, v6);
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__preloadActorMotion(Weapon_k__BackingField, dlOnly, v7);
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
      v8);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__preloadCameraAction(CameraId_k__BackingField, dlOnly, v7);
  ServantAssetLoadManager__preloadFromDeckServant(args->fields._deckSvt_k__BackingField, dlOnly, v13);
  skillList_k__BackingField = args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField )
  {
    LODWORD(size) = skillList_k__BackingField->fields._size;
    if ( (int)size >= 1 )
    {
      v16 = 4LL;
      do
      {
        if ( v16 - 4 >= (unsigned __int64)(unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v17 = *((_QWORD *)&skillList_k__BackingField->fields._items->obj.klass + v16);
        if ( v17 )
        {
          if ( v16 - 4 >= (unsigned __int64)(unsigned int)skillList_k__BackingField->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)v17 + 440LL))(
            v17,
            dlOnly,
            *(_QWORD *)(*(_QWORD *)v17 + 448LL));
        }
        size = skillList_k__BackingField->fields._size;
        v18 = v16 - 3;
        ++v16;
      }
      while ( v18 < size );
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
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4352CAB & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352CAB = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v6);
  ServantAssetLoadManager__localStopVoice(Instance, uniqueId, fadeoutTime, v7);
}


bool __fastcall ServantAssetLoadManager__TryRegisterUnloadIgnoredArgs(
        ServantAssetArgs_o *args,
        const MethodInfo *method)
{
  System_Xml_XmlQualifiedName_o *Instance; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *monitor; // x20
  const MethodInfo *v6; // x1
  ServantAssetLoadManager_c *v7; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *unloadIgnoredAssetArgs; // x20
  ServantAssetLoadManager_c *v9; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v10; // x20

  if ( (byte_4352C62 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C62 = 1;
  }
  Instance = (System_Xml_XmlQualifiedName_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  if ( ServantAssetLoadManager__IsKeepAssetAvailable((ServantAssetLoadManager_o *)Instance, v4) )
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
      Instance = (System_Xml_XmlQualifiedName_o *)ServantAssetArgs__get_UniqueKey(args, v4);
      if ( monitor )
      {
        if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                monitor,
                Instance,
                (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__) )
        {
          v7 = ServantAssetLoadManager_TypeInfo;
          if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            v7 = ServantAssetLoadManager_TypeInfo;
          }
          unloadIgnoredAssetArgs = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v7->static_fields->unloadIgnoredAssetArgs;
          Instance = (System_Xml_XmlQualifiedName_o *)ServantAssetArgs__get_UniqueKey(args, v6);
          if ( !unloadIgnoredAssetArgs )
            goto LABEL_23;
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            unloadIgnoredAssetArgs,
            Instance,
            (System_Xml_Schema_XmlSchemaObject_o *)args,
            (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__);
        }
        v9 = ServantAssetLoadManager_TypeInfo;
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          v9 = ServantAssetLoadManager_TypeInfo;
        }
        v10 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v9->static_fields->unloadIgnoredAssetArgs;
        Instance = (System_Xml_XmlQualifiedName_o *)ServantAssetArgs__get_UniqueKey(args, v6);
        if ( v10 )
        {
          Instance = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                        v10,
                                                        (System_Type_o *)Instance,
                                                        (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__);
          if ( Instance )
          {
            ++LODWORD(Instance[2].monitor);
            return 1;
          }
        }
      }
    }
LABEL_23:
    sub_B7076C(Instance, v4);
  }
  return 0;
}


void __fastcall ServantAssetLoadManager__UnloadAllAsset(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v4; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4352CB2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__Object__get_Value__);
    byte_4352CB2 = 1;
  }
  memset(&v4, 0, sizeof(v4));
  releaseAssets = this->fields._releaseAssets;
  if ( !releaseAssets )
    sub_B7076C(0LL, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    &v4,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)releaseAssets,
    (const MethodInfo_2F4FFC4 *)Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v4,
            (const MethodInfo_277B4A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__) )
    UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)v4.fields.current.fields.value, 0LL);
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v4,
    (const MethodInfo_277B608 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__);
}


void __fastcall ServantAssetLoadManager__UnloadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  int Weapon_k__BackingField; // w20
  int WeaponEffectId_k__BackingField; // w20
  int32_t EffectFolder_k__BackingField; // w21
  int32_t CameraId_k__BackingField; // w20
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillList_k__BackingField; // x19
  __int64 size; // x8
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x9

  if ( (byte_4352C61 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_4352C61 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__unloadServant(args, method);
  if ( !args )
    sub_B7076C(v3, v4);
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__unloadActorMotion(Weapon_k__BackingField, v4);
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
    ServantAssetLoadManager__unloadWeaponGroupEffect(WeaponEffectId_k__BackingField, EffectFolder_k__BackingField, v5);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__unloadCameraAction(CameraId_k__BackingField, v4);
  ServantAssetLoadManager__unloadFromDeckServant(args->fields._deckSvt_k__BackingField, v10);
  skillList_k__BackingField = args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField )
  {
    LODWORD(size) = skillList_k__BackingField->fields._size;
    if ( (int)size >= 1 )
    {
      v13 = 4LL;
      do
      {
        if ( v13 - 4 >= (unsigned __int64)(unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v14 = *((_QWORD *)&skillList_k__BackingField->fields._items->obj.klass + v13);
        if ( v14 )
        {
          if ( v13 - 4 >= (unsigned __int64)(unsigned int)skillList_k__BackingField->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 456LL))(v14, *(_QWORD *)(*(_QWORD *)v14 + 464LL));
        }
        size = skillList_k__BackingField->fields._size;
        v15 = v13 - 3;
        ++v13;
      }
      while ( v15 < size );
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
  if ( (byte_4352CC1 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_4352CC1 = 1;
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
          v10 = sub_B70798(this);
          sub_B70738(v10, 0LL);
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

  if ( (byte_4352CCD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_AssetData__Add__);
    byte_4352CCD = 1;
  }
  bgAssetDataList = this->fields.bgAssetDataList;
  if ( !bgAssetDataList )
    sub_B7076C(0LL, data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bgAssetDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_AssetData__Add__);
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
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s7
  UnityEngine_Material_o *material; // x0
  __int64 v12; // x1
  UnityEngine_Material_c *klass; // x8
  UnityEngine_Material_o *v14; // x24
  unsigned __int64 v15; // x19
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Shader_o *v17; // x20
  UnityEngine_Texture_o *UIAtlas; // x21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v20; // x1
  UnityEngine_Transform_o *NodeFromName; // x22
  UnityEngine_Material_c *v22; // x8
  System_Func_string__BacktraceData__BacktraceResult__o *v23; // x23
  unsigned __int64 v24; // x27
  UnityEngine_Object_o *v25; // x24
  int v26; // w8
  UnityEngine_Material_o *v27; // x25
  unsigned int v28; // w28
  UnityEngine_Material_c **v29; // x8
  UnityEngine_Material_o *v30; // x26
  UnityEngine_Shader_o *v31; // x0
  int v32; // s0
  float x; // s13
  float y; // s14
  float z; // s15
  float v38; // s13
  float v39; // s14
  float v40; // s15
  float v41; // s13
  float v42; // s14
  float v43; // s15
  float v44; // s13
  __int64 v45; // x0
  UnityEngine_Material_o *v46; // [xsp+8h] [xbp-118h]
  UnityEngine_Bounds_o v47; // [xsp+10h] [xbp-110h] BYREF
  UnityEngine_Bounds_o v48; // [xsp+28h] [xbp-F8h] BYREF
  UnityEngine_Bounds_o v49; // [xsp+40h] [xbp-E0h] BYREF
  UnityEngine_Bounds_o v50; // [xsp+60h] [xbp-C0h] BYREF
  MethodInfo methoda; // [xsp+78h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4352C80 & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_Shader__Shader__Shader__Invoke__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&StringLiteral_16174/*"_ClipSharpnessY"*/);
    sub_B70694(&StringLiteral_16178/*"_Color"*/);
    sub_B70694(&StringLiteral_20384/*"joint_all_Base"*/);
    sub_B70694(&StringLiteral_16161/*"_ChocoTex"*/);
    sub_B70694(&StringLiteral_23639/*"weapon"*/);
    sub_B70694(&StringLiteral_13008/*"Shaders/ChocoMap"*/);
    sub_B70694(&StringLiteral_16329/*"_Use_alphawidth"*/);
    sub_B70694(&StringLiteral_4599/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/);
    sub_B70694(&StringLiteral_17132/*"body"*/);
    sub_B70694(&StringLiteral_16138/*"_AddColor"*/);
    byte_4352C80 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  memset(&v50, 0, sizeof(v50));
  memset(&v49, 0, sizeof(v49));
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  white.fields.r = 0.0;
  white.fields.g = 0.0;
  white.fields.b = 0.0;
  white.fields.a = 0.0;
  UnityEngine_Color___ctor(white, v7, v8, v9, v10, &methoda);
  if ( !obj )
    goto LABEL_55;
  material = (UnityEngine_Material_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                                         obj,
                                         (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !material )
    goto LABEL_55;
  klass = material[1].klass;
  v14 = material;
  if ( (int)klass >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)klass )
        goto LABEL_56;
      v16 = (UnityEngine_Object_o *)*((_QWORD *)&v14[1].monitor + v15);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
        break;
      LODWORD(klass) = v14[1].klass;
      if ( (__int64)++v15 >= (int)klass )
        goto LABEL_23;
    }
    if ( !v16 )
      goto LABEL_55;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v16, 0LL);
    if ( !material )
      goto LABEL_55;
    if ( UnityEngine_Material__HasProperty_41121140(material, (System_String_o *)StringLiteral_16178/*"_Color"*/, 0LL) )
    {
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v16, 0LL);
      if ( !material )
        goto LABEL_55;
      Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16178/*"_Color"*/, 0LL);
      r = Color.fields.r;
      g = Color.fields.g;
      b = Color.fields.b;
      a = Color.fields.a;
    }
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v16, 0LL);
    if ( !material )
LABEL_55:
      sub_B7076C(material, v12);
    if ( UnityEngine_Material__HasProperty_41121140(material, (System_String_o *)StringLiteral_16138/*"_AddColor"*/, 0LL) )
    {
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v16, 0LL);
      if ( material )
      {
        v61 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16138/*"_AddColor"*/, 0LL);
        methoda.methodPointer = *(Il2CppMethodPointer *)&v61.fields.r;
        methoda.invoker_method = *(void **)&v61.fields.b;
        goto LABEL_23;
      }
      goto LABEL_55;
    }
  }
LABEL_23:
  v17 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4599/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, 0LL);
  UIAtlas = (UnityEngine_Texture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                       (System_String_o *)StringLiteral_13008/*"Shaders/ChocoMap"*/,
                                       (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_Texture2D___);
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_20384/*"joint_all_Base"*/, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  material = (UnityEngine_Material_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(obj, v20);
  v22 = v14[1].klass;
  if ( (int)v22 >= 1 )
  {
    v23 = (System_Func_string__BacktraceData__BacktraceResult__o *)material;
    v24 = 0LL;
    v46 = v14;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)v22 )
        goto LABEL_56;
      v25 = (UnityEngine_Object_o *)*((_QWORD *)&v14[1].monitor + v24);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
      {
        if ( !v25 )
          goto LABEL_55;
        material = (UnityEngine_Material_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v25, 0LL);
        if ( !material )
          goto LABEL_55;
        v26 = (int)material[1].klass;
        v27 = material;
        if ( v26 >= 1 )
          break;
      }
LABEL_53:
      v14 = v46;
      ++v24;
      LODWORD(v22) = v46[1].klass;
      if ( (__int64)v24 >= (int)v22 )
        return;
    }
    v28 = 0;
    while ( v28 < v26 )
    {
      v29 = &v27->klass + (int)v28;
      v30 = (UnityEngine_Material_o *)v29[4];
      if ( !v30 )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v29[4], 0LL);
      if ( !v23 )
        goto LABEL_55;
      v31 = (UnityEngine_Shader_o *)System_Func_string__BacktraceData__BacktraceResult___Invoke(
                                      v23,
                                      (System_String_o *)material,
                                      (Backtrace_Unity_Model_BacktraceData_o *)v17,
                                      (const MethodInfo_29B7F54 *)Method_System_Func_Shader__Shader__Shader__Invoke__);
      UnityEngine_Material__set_shader(v30, v31, 0LL);
      v62.fields.r = r;
      v62.fields.g = g;
      v62.fields.b = b;
      v62.fields.a = a;
      UnityEngine_Material__SetColor(v30, (System_String_o *)StringLiteral_16178/*"_Color"*/, v62, 0LL);
      *(_QWORD *)&v63.fields.r = methoda.methodPointer;
      *(_QWORD *)&v63.fields.b = methoda.invoker_method;
      UnityEngine_Material__SetColor(v30, (System_String_o *)StringLiteral_16138/*"_AddColor"*/, v63, 0LL);
      UnityEngine_Material__SetTexture(v30, (System_String_o *)StringLiteral_16161/*"_ChocoTex"*/, UIAtlas, 0LL);
      material = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0LL);
      if ( !material )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
      if ( !material )
        goto LABEL_55;
      if ( System_String__StartsWith((System_String_o *)material, (System_String_o *)StringLiteral_17132/*"body"*/, 0LL) )
        goto LABEL_46;
      material = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0LL);
      if ( !material )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
      if ( !material )
        goto LABEL_55;
      if ( System_String__StartsWith((System_String_o *)material, (System_String_o *)StringLiteral_23639/*"weapon"*/, 0LL) )
      {
LABEL_46:
        material = (UnityEngine_Material_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                               (UnityEngine_SkinnedMeshRenderer_o *)v25,
                                               0LL);
        if ( !material )
          goto LABEL_55;
        *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)material, 0LL);
        if ( !NodeFromName )
          goto LABEL_55;
        v52 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, *(UnityEngine_Vector3_o *)&v32, 0LL);
        x = v52.fields.x;
        y = v52.fields.y;
        z = v52.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0LL);
        v38 = x - localPosition.fields.x;
        v39 = y - localPosition.fields.y;
        v40 = z - localPosition.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v48, (UnityEngine_SkinnedMeshRenderer_o *)v25, 0LL);
        v49 = v48;
        center = UnityEngine_Bounds__get_center(&v49, 0LL);
        v41 = v38 + center.fields.x;
        v42 = v39 + center.fields.y;
        v43 = v40 + center.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v48, (UnityEngine_SkinnedMeshRenderer_o *)v25, 0LL);
        v49 = v48;
        size = UnityEngine_Bounds__get_size(&v49, 0LL);
        v55.fields.x = v41;
        v55.fields.y = v42;
        v55.fields.z = v43;
        UnityEngine_Bounds___ctor(&v50, v55, size, 0LL);
        v47 = v50;
        UnityEngine_SkinnedMeshRenderer__set_localBounds((UnityEngine_SkinnedMeshRenderer_o *)v25, &v47, 0LL);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v25, NodeFromName, 0LL);
      }
      else
      {
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v48, (UnityEngine_SkinnedMeshRenderer_o *)v25, 0LL);
        v49 = v48;
        v56 = UnityEngine_Bounds__get_center(&v49, 0LL);
        v44 = v56.fields.y;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v48, (UnityEngine_SkinnedMeshRenderer_o *)v25, 0LL);
        v49 = v48;
        extents = UnityEngine_Bounds__get_extents(&v49, 0LL);
        UnityEngine_Material__SetFloat(v30, (System_String_o *)StringLiteral_16174/*"_ClipSharpnessY"*/, v44 - extents.fields.y, 0LL);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Material__HasProperty_41121140(
                                             v30,
                                             (System_String_o *)StringLiteral_16329/*"_Use_alphawidth"*/,
                                             0LL);
      if ( ((unsigned __int8)material & 1) != 0 )
        UnityEngine_Material__SetFloat(v30, (System_String_o *)StringLiteral_16329/*"_Use_alphawidth"*/, 1.0, 0LL);
      v26 = (int)v27[1].klass;
      if ( (int)++v28 >= v26 )
        goto LABEL_53;
    }
LABEL_56:
    v45 = sub_B70798(material);
    sub_B70738(v45, 0LL);
  }
}


void __fastcall ServantAssetLoadManager__changeChocoSahder(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s7
  UnityEngine_Material_o *material; // x0
  __int64 v12; // x1
  UnityEngine_Material_c *klass; // x8
  UnityEngine_Material_o *v14; // x21
  unsigned __int64 v15; // x23
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Shader_o *v17; // x20
  const MethodInfo *v18; // x1
  UnityEngine_Texture_o *UIAtlas; // x21
  System_Func_Shader__Shader__Shader__o *ReplaceChocoShaderFunc; // x22
  UnityEngine_Material_c *v21; // x8
  Il2CppClass *v22; // x9
  unsigned __int64 v23; // x25
  UnityEngine_Object_o *v24; // x23
  int v25; // w8
  UnityEngine_Material_o *v26; // x23
  unsigned int v27; // w28
  UnityEngine_Material_c **v28; // x8
  UnityEngine_Material_o *v29; // x24
  UnityEngine_Shader_o *v30; // x0
  __int64 v31; // x0
  MethodInfo v32; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4352C81 & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_Shader__Shader__Shader__Invoke__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&StringLiteral_16178/*"_Color"*/);
    sub_B70694(&StringLiteral_16161/*"_ChocoTex"*/);
    sub_B70694(&StringLiteral_4598/*"Custom/SoftEdgeUnlitCutZ_Choco"*/);
    sub_B70694(&StringLiteral_13008/*"Shaders/ChocoMap"*/);
    sub_B70694(&StringLiteral_16329/*"_Use_alphawidth"*/);
    sub_B70694(&StringLiteral_16138/*"_AddColor"*/);
    byte_4352C81 = 1;
  }
  v32.methodPointer = 0LL;
  v32.invoker_method = 0LL;
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  white.fields.r = 0.0;
  white.fields.g = 0.0;
  white.fields.b = 0.0;
  white.fields.a = 0.0;
  UnityEngine_Color___ctor(white, v7, v8, v9, v10, &v32);
  if ( !obj )
    goto LABEL_46;
  material = (UnityEngine_Material_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                                         obj,
                                         (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !material )
    goto LABEL_46;
  klass = material[1].klass;
  v14 = material;
  if ( (int)klass < 1 )
    goto LABEL_23;
  v15 = 0LL;
  while ( 1 )
  {
    if ( v15 >= (unsigned int)klass )
      goto LABEL_47;
    v16 = (UnityEngine_Object_o *)*((_QWORD *)&v14[1].monitor + v15);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
    if ( ((unsigned __int8)material & 1) == 0 )
      break;
    LODWORD(klass) = v14[1].klass;
    if ( (__int64)++v15 >= (int)klass )
      goto LABEL_23;
  }
  if ( !v16 )
    goto LABEL_46;
  material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v16, 0LL);
  if ( !material )
    goto LABEL_46;
  if ( UnityEngine_Material__HasProperty_41121140(material, (System_String_o *)StringLiteral_16178/*"_Color"*/, 0LL) )
  {
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v16, 0LL);
    if ( !material )
      goto LABEL_46;
    Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16178/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v16, 0LL);
  if ( !material )
LABEL_46:
    sub_B7076C(material, v12);
  if ( UnityEngine_Material__HasProperty_41121140(material, (System_String_o *)StringLiteral_16138/*"_AddColor"*/, 0LL) )
  {
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v16, 0LL);
    if ( !material )
      goto LABEL_46;
    v35 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16138/*"_AddColor"*/, 0LL);
    v32.methodPointer = *(Il2CppMethodPointer *)&v35.fields.r;
    v32.invoker_method = *(void **)&v35.fields.b;
  }
LABEL_23:
  v17 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4598/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
  UIAtlas = (UnityEngine_Texture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                       (System_String_o *)StringLiteral_13008/*"Shaders/ChocoMap"*/,
                                       (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_Texture2D___);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ReplaceChocoShaderFunc = ServantAssetLoadManager__GetReplaceChocoShaderFunc(obj, v18);
  material = (UnityEngine_Material_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                                         obj,
                                         (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !material )
    goto LABEL_46;
  v21 = material[1].klass;
  v22 = (Il2CppClass *)material;
  if ( (int)v21 >= 1 )
  {
    v23 = 0LL;
    v32.klass = (Il2CppClass *)material;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)v21 )
        goto LABEL_47;
      v24 = (UnityEngine_Object_o *)*((_QWORD *)&v22->_1.byval_arg.data + v23);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
      {
        if ( !v24 )
          goto LABEL_46;
        material = (UnityEngine_Material_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v24, 0LL);
        if ( !material )
          goto LABEL_46;
        v25 = (int)material[1].klass;
        v26 = material;
        if ( v25 >= 1 )
          break;
      }
LABEL_44:
      v22 = v32.klass;
      ++v23;
      LODWORD(v21) = v32.klass->_1.namespaze;
      if ( (__int64)v23 >= (int)v21 )
        return;
    }
    v27 = 0;
    while ( v27 < v25 )
    {
      v28 = &v26->klass + (int)v27;
      v29 = (UnityEngine_Material_o *)v28[4];
      if ( !v29 )
        goto LABEL_46;
      material = (UnityEngine_Material_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v28[4], 0LL);
      if ( !ReplaceChocoShaderFunc )
        goto LABEL_46;
      v30 = (UnityEngine_Shader_o *)System_Func_string__BacktraceData__BacktraceResult___Invoke(
                                      (System_Func_string__BacktraceData__BacktraceResult__o *)ReplaceChocoShaderFunc,
                                      (System_String_o *)material,
                                      (Backtrace_Unity_Model_BacktraceData_o *)v17,
                                      (const MethodInfo_29B7F54 *)Method_System_Func_Shader__Shader__Shader__Invoke__);
      UnityEngine_Material__set_shader(v29, v30, 0LL);
      v36.fields.r = r;
      v36.fields.g = g;
      v36.fields.b = b;
      v36.fields.a = a;
      UnityEngine_Material__SetColor(v29, (System_String_o *)StringLiteral_16178/*"_Color"*/, v36, 0LL);
      *(_QWORD *)&v37.fields.r = v32.methodPointer;
      *(_QWORD *)&v37.fields.b = v32.invoker_method;
      UnityEngine_Material__SetColor(v29, (System_String_o *)StringLiteral_16138/*"_AddColor"*/, v37, 0LL);
      UnityEngine_Material__SetTexture(v29, (System_String_o *)StringLiteral_16161/*"_ChocoTex"*/, UIAtlas, 0LL);
      material = (UnityEngine_Material_o *)UnityEngine_Material__HasProperty_41121140(
                                             v29,
                                             (System_String_o *)StringLiteral_16329/*"_Use_alphawidth"*/,
                                             0LL);
      if ( ((unsigned __int8)material & 1) != 0 )
        UnityEngine_Material__SetFloat(v29, (System_String_o *)StringLiteral_16329/*"_Use_alphawidth"*/, 1.0, 0LL);
      v25 = (int)v26[1].klass;
      if ( (int)++v27 >= v25 )
        goto LABEL_44;
    }
LABEL_47:
    v31 = sub_B70798(material);
    sub_B70738(v31, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__changeDeadShader(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s7
  UnityEngine_Material_o *material; // x0
  __int64 v12; // x1
  UnityEngine_Material_c *klass; // x8
  UnityEngine_Material_o *v14; // x24
  unsigned __int64 v15; // x19
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Shader_o *v17; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v19; // x1
  UnityEngine_Transform_o *NodeFromName; // x21
  UnityEngine_Material_c *v21; // x8
  System_Func_string__BacktraceData__BacktraceResult__o *v22; // x22
  unsigned __int64 v23; // x26
  UnityEngine_Object_o *v24; // x23
  int v25; // w8
  UnityEngine_Material_o *v26; // x24
  unsigned int v27; // w19
  UnityEngine_Material_c **v28; // x8
  UnityEngine_Material_o *v29; // x25
  UnityEngine_Shader_o *v30; // x0
  int v31; // s0
  float x; // s13
  float y; // s14
  float z; // s15
  float v37; // s13
  float v38; // s14
  float v39; // s15
  float v40; // s13
  float v41; // s14
  float v42; // s15
  float v43; // s13
  __int64 v44; // x0
  UnityEngine_Material_o *v45; // [xsp+8h] [xbp-118h]
  UnityEngine_Bounds_o v46; // [xsp+10h] [xbp-110h] BYREF
  UnityEngine_Bounds_o v47; // [xsp+28h] [xbp-F8h] BYREF
  UnityEngine_Bounds_o v48; // [xsp+40h] [xbp-E0h] BYREF
  UnityEngine_Bounds_o v49; // [xsp+60h] [xbp-C0h] BYREF
  MethodInfo methoda; // [xsp+78h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4352C7F & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_Shader__Shader__Shader__Invoke__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&StringLiteral_16174/*"_ClipSharpnessY"*/);
    sub_B70694(&StringLiteral_4597/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/);
    sub_B70694(&StringLiteral_16178/*"_Color"*/);
    sub_B70694(&StringLiteral_20384/*"joint_all_Base"*/);
    sub_B70694(&StringLiteral_23639/*"weapon"*/);
    sub_B70694(&StringLiteral_16329/*"_Use_alphawidth"*/);
    sub_B70694(&StringLiteral_17132/*"body"*/);
    sub_B70694(&StringLiteral_16138/*"_AddColor"*/);
    byte_4352C7F = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  memset(&v49, 0, sizeof(v49));
  memset(&v48, 0, sizeof(v48));
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  white.fields.r = 0.0;
  white.fields.g = 0.0;
  white.fields.b = 0.0;
  white.fields.a = 0.0;
  UnityEngine_Color___ctor(white, v7, v8, v9, v10, &methoda);
  if ( !obj )
    goto LABEL_55;
  material = (UnityEngine_Material_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                                         obj,
                                         (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !material )
    goto LABEL_55;
  klass = material[1].klass;
  v14 = material;
  if ( (int)klass >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)klass )
        goto LABEL_56;
      v16 = (UnityEngine_Object_o *)*((_QWORD *)&v14[1].monitor + v15);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
        break;
      LODWORD(klass) = v14[1].klass;
      if ( (__int64)++v15 >= (int)klass )
        goto LABEL_23;
    }
    if ( !v16 )
      goto LABEL_55;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v16, 0LL);
    if ( !material )
      goto LABEL_55;
    if ( UnityEngine_Material__HasProperty_41121140(material, (System_String_o *)StringLiteral_16178/*"_Color"*/, 0LL) )
    {
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v16, 0LL);
      if ( !material )
        goto LABEL_55;
      Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16178/*"_Color"*/, 0LL);
      r = Color.fields.r;
      g = Color.fields.g;
      b = Color.fields.b;
      a = Color.fields.a;
    }
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v16, 0LL);
    if ( !material )
LABEL_55:
      sub_B7076C(material, v12);
    if ( UnityEngine_Material__HasProperty_41121140(material, (System_String_o *)StringLiteral_16138/*"_AddColor"*/, 0LL) )
    {
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v16, 0LL);
      if ( material )
      {
        v60 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16138/*"_AddColor"*/, 0LL);
        methoda.methodPointer = *(Il2CppMethodPointer *)&v60.fields.r;
        methoda.invoker_method = *(void **)&v60.fields.b;
        goto LABEL_23;
      }
      goto LABEL_55;
    }
  }
LABEL_23:
  v17 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4597/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, 0LL);
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_20384/*"joint_all_Base"*/, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  material = (UnityEngine_Material_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(obj, v19);
  v21 = v14[1].klass;
  if ( (int)v21 >= 1 )
  {
    v22 = (System_Func_string__BacktraceData__BacktraceResult__o *)material;
    v23 = 0LL;
    v45 = v14;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)v21 )
        goto LABEL_56;
      v24 = (UnityEngine_Object_o *)*((_QWORD *)&v14[1].monitor + v23);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
      {
        if ( !v24 )
          goto LABEL_55;
        material = (UnityEngine_Material_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v24, 0LL);
        if ( !material )
          goto LABEL_55;
        v25 = (int)material[1].klass;
        v26 = material;
        if ( v25 >= 1 )
          break;
      }
LABEL_53:
      v14 = v45;
      ++v23;
      LODWORD(v21) = v45[1].klass;
      if ( (__int64)v23 >= (int)v21 )
        return;
    }
    v27 = 0;
    while ( v27 < v25 )
    {
      v28 = &v26->klass + (int)v27;
      v29 = (UnityEngine_Material_o *)v28[4];
      if ( !v29 )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v28[4], 0LL);
      if ( !v22 )
        goto LABEL_55;
      v30 = (UnityEngine_Shader_o *)System_Func_string__BacktraceData__BacktraceResult___Invoke(
                                      v22,
                                      (System_String_o *)material,
                                      (Backtrace_Unity_Model_BacktraceData_o *)v17,
                                      (const MethodInfo_29B7F54 *)Method_System_Func_Shader__Shader__Shader__Invoke__);
      UnityEngine_Material__set_shader(v29, v30, 0LL);
      v61.fields.r = r;
      v61.fields.g = g;
      v61.fields.b = b;
      v61.fields.a = a;
      UnityEngine_Material__SetColor(v29, (System_String_o *)StringLiteral_16178/*"_Color"*/, v61, 0LL);
      *(_QWORD *)&v62.fields.r = methoda.methodPointer;
      *(_QWORD *)&v62.fields.b = methoda.invoker_method;
      UnityEngine_Material__SetColor(v29, (System_String_o *)StringLiteral_16138/*"_AddColor"*/, v62, 0LL);
      material = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL);
      if ( !material )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
      if ( !material )
        goto LABEL_55;
      if ( System_String__StartsWith((System_String_o *)material, (System_String_o *)StringLiteral_17132/*"body"*/, 0LL) )
        goto LABEL_46;
      material = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL);
      if ( !material )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
      if ( !material )
        goto LABEL_55;
      if ( System_String__StartsWith((System_String_o *)material, (System_String_o *)StringLiteral_23639/*"weapon"*/, 0LL) )
      {
LABEL_46:
        material = (UnityEngine_Material_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                               (UnityEngine_SkinnedMeshRenderer_o *)v24,
                                               0LL);
        if ( !material )
          goto LABEL_55;
        *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)material, 0LL);
        if ( !NodeFromName )
          goto LABEL_55;
        v51 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, *(UnityEngine_Vector3_o *)&v31, 0LL);
        x = v51.fields.x;
        y = v51.fields.y;
        z = v51.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0LL);
        v37 = x - localPosition.fields.x;
        v38 = y - localPosition.fields.y;
        v39 = z - localPosition.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v47, (UnityEngine_SkinnedMeshRenderer_o *)v24, 0LL);
        v48 = v47;
        center = UnityEngine_Bounds__get_center(&v48, 0LL);
        v40 = v37 + center.fields.x;
        v41 = v38 + center.fields.y;
        v42 = v39 + center.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v47, (UnityEngine_SkinnedMeshRenderer_o *)v24, 0LL);
        v48 = v47;
        size = UnityEngine_Bounds__get_size(&v48, 0LL);
        v54.fields.x = v40;
        v54.fields.y = v41;
        v54.fields.z = v42;
        UnityEngine_Bounds___ctor(&v49, v54, size, 0LL);
        v46 = v49;
        UnityEngine_SkinnedMeshRenderer__set_localBounds((UnityEngine_SkinnedMeshRenderer_o *)v24, &v46, 0LL);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v24, NodeFromName, 0LL);
      }
      else
      {
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v47, (UnityEngine_SkinnedMeshRenderer_o *)v24, 0LL);
        v48 = v47;
        v55 = UnityEngine_Bounds__get_center(&v48, 0LL);
        v43 = v55.fields.y;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v47, (UnityEngine_SkinnedMeshRenderer_o *)v24, 0LL);
        v48 = v47;
        extents = UnityEngine_Bounds__get_extents(&v48, 0LL);
        UnityEngine_Material__SetFloat(v29, (System_String_o *)StringLiteral_16174/*"_ClipSharpnessY"*/, v43 - extents.fields.y, 0LL);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Material__HasProperty_41121140(
                                             v29,
                                             (System_String_o *)StringLiteral_16329/*"_Use_alphawidth"*/,
                                             0LL);
      if ( ((unsigned __int8)material & 1) != 0 )
        UnityEngine_Material__SetFloat(v29, (System_String_o *)StringLiteral_16329/*"_Use_alphawidth"*/, 1.0, 0LL);
      v25 = (int)v26[1].klass;
      if ( (int)++v27 >= v25 )
        goto LABEL_53;
    }
LABEL_56:
    v44 = sub_B70798(material);
    sub_B70738(v44, 0LL);
  }
}


bool __fastcall ServantAssetLoadManager__checkBattleVoice(
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *voiceTypeId,
        bool isNp,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x6

  if ( (byte_4352CA7 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352CA7 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v12);
  return ServantAssetLoadManager__checkBattleVoicelocal(
           Instance,
           svtId,
           limit,
           overwriteSvtVoiceId,
           voiceTypeId,
           isNp,
           v13);
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
  ServantEntity_o *SvtEntity; // x25
  const MethodInfo *v14; // x3
  int32_t VoicePrefix; // w26
  const MethodInfo *v16; // x3
  int32_t VoiceId; // w0
  __int64 v18; // x2
  int32_t v19; // w9
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  __int64 *v22; // x8
  System_String_o *v23; // x20
  System_String_o *v24; // x19
  System_String_o *v25; // x0
  System_String_o *v26; // x19
  int32_t v29; // [xsp+8h] [xbp-48h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4352CA8 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_9712/*"NoblePhantasm_"*/);
    sub_B70694(&StringLiteral_23882/*"{0:D0}_{1}"*/);
    sub_B70694(&StringLiteral_12916/*"Servants_"*/);
    byte_4352CA8 = 1;
  }
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&limit);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v14);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v16);
  if ( overwriteSvtVoiceId )
    v19 = overwriteSvtVoiceId;
  else
    v19 = VoiceId;
  v29 = VoicePrefix;
  v30 = v19;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v18);
  v21 = System_String__Format_44753704((System_String_o *)StringLiteral_23882/*"{0:D0}_{1}"*/, v20, (Il2CppObject *)voiceTypeId, 0LL);
  if ( SvtEntity )
  {
    v22 = &StringLiteral_9712/*"NoblePhantasm_"*/;
    v23 = v21;
    if ( !isNp )
      v22 = &StringLiteral_12916/*"Servants_"*/;
    v24 = (System_String_o *)*v22;
    v25 = System_Int32__ToString((int32_t)&v30, 0LL);
    v26 = System_String__Concat_44758168(v24, v25, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    return SoundManager__checkServantVoice(v26, v23, 0, 0LL);
  }
  else
  {
    return 0;
  }
}


bool __fastcall ServantAssetLoadManager__checkLoad(const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4352C5A & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C5A = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v2);
  return ServantAssetLoadManager__checkLoadlocal(Instance, v2);
}


bool __fastcall ServantAssetLoadManager__checkLoadlocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  ServantAssetLoadManager_o *v2; // x19
  struct System_Collections_Generic_List_string__o *loadlist; // x8
  struct System_Collections_Generic_List_string__o *downloadlist; // x8

  v2 = this;
  if ( (byte_4352C5B & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B70694(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4352C5B = 1;
  }
  loadlist = v2->fields.loadlist;
  if ( !loadlist )
    goto LABEL_9;
  if ( loadlist->fields._size > 0 )
    return 1;
  downloadlist = v2->fields.downloadlist;
  if ( !downloadlist )
LABEL_9:
    sub_B7076C(this, method);
  if ( downloadlist->fields._size > 0 )
    return 1;
  return v2->fields.soundCount > 0;
}


void __fastcall ServantAssetLoadManager__checkMaster(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  struct ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct ServantLimitMaster_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleServantConfConponent_o *p_svtlimitaddmaster; // x19
  struct ServantLimitAddMaster_o *svtlimitaddmaster; // t1
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4352C44 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352C44 = 1;
  }
  if ( !this->fields.svtmaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_WarQuestSelectionMaster = (struct ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
    this->fields.svtmaster = MasterData_WarQuestSelectionMaster;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.svtmaster,
      (System_Int32_array **)MasterData_WarQuestSelectionMaster,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  if ( !this->fields.svtlimitmaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    v12 = (struct ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    this->fields.svtlimitmaster = v12;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.svtlimitmaster,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  p_svtlimitaddmaster = (BattleServantConfConponent_o *)&this->fields.svtlimitaddmaster;
  if ( svtlimitaddmaster )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_B7076C(Instance, v4);
  v21 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  p_svtlimitaddmaster->klass = (BattleServantConfConponent_c *)v21;
  sub_B70630(p_svtlimitaddmaster, v21, v22, v23, v24, v25, v26, v27);
}


void __fastcall ServantAssetLoadManager__clearServantlist(const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4352C58 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C58 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v2);
  ServantAssetLoadManager__clearServantlistlocal(Instance, v2);
}


void __fastcall ServantAssetLoadManager__clearServantlistlocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadlist; // x0

  if ( (byte_4352C59 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_string__Clear__);
    byte_4352C59 = 1;
  }
  loadlist = this->fields.loadlist;
  if ( !loadlist
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadlist,
          (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_string__Clear__),
        (loadlist = this->fields.downloadlist) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadlist,
          (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_string__Clear__),
        (loadlist = this->fields.loadedList) == 0LL) )
  {
    sub_B7076C(loadlist, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadlist,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_string__Clear__);
  this->fields.soundCount = 0;
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__createShadowEffect(
        ServantAssetLoadManager_o *this,
        int32_t tp,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  System_Xml_Schema_XmlSchemaObject_o *UIAtlas; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v10; // x19
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x8
  int v13; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4352CB3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__Object__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__Object__set_Item__);
    sub_B70694(&UnityEngine_GameObject_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_B70694(&StringLiteral_18534/*"effect/ef_shadow0"*/);
    byte_4352CB3 = 1;
  }
  v13 = tp + 1;
  v5 = System_Int32__ToString((int32_t)&v13, 0LL);
  UIAtlas = (System_Xml_Schema_XmlSchemaObject_o *)System_String__Concat_44758168(
                                                     (System_String_o *)StringLiteral_18534/*"effect/ef_shadow0"*/,
                                                     v5,
                                                     0LL);
  if ( !this->fields._releaseAssets )
    goto LABEL_17;
  v8 = (System_String_o *)UIAtlas;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields._releaseAssets,
          (System_Xml_XmlQualifiedName_o *)UIAtlas,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__) )
  {
    UIAtlas = (System_Xml_Schema_XmlSchemaObject_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                       v8,
                                                       (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_GameObject___);
    releaseAssets = this->fields._releaseAssets;
    if ( releaseAssets )
    {
      v10 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UIAtlas;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)releaseAssets,
        (System_Xml_XmlQualifiedName_o *)v8,
        UIAtlas,
        (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__Object__set_Item__);
      goto LABEL_13;
    }
LABEL_17:
    sub_B7076C(UIAtlas, v7);
  }
  UIAtlas = (System_Xml_Schema_XmlSchemaObject_o *)this->fields._releaseAssets;
  if ( !UIAtlas )
    goto LABEL_17;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)UIAtlas,
           (System_Type_o *)v8,
           (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__Object__get_Item__);
  if ( Item )
  {
    if ( (UnityEngine_GameObject_c *)Item->klass == UnityEngine_GameObject_TypeInfo )
      v10 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Item;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
LABEL_13:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       v10,
                                       (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


void __fastcall ServantAssetLoadManager__endloadList(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadlist; // x0
  struct System_String_o *name; // x20

  if ( (byte_4352C5E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Remove__);
    byte_4352C5E = 1;
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
           (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadlist;
      if ( !loadlist )
        goto LABEL_13;
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadlist,
        (WarBoardManager_TaskList_o *)name,
        (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_string__Remove__);
    }
    loadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.downloadlist;
    if ( !loadlist )
LABEL_13:
      sub_B7076C(loadlist, data);
    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           loadlist,
           (WarBoardManager_TaskList_o *)name,
           (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.downloadlist;
      if ( loadlist )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          loadlist,
          (WarBoardManager_TaskList_o *)name,
          (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_string__Remove__);
        return;
      }
      goto LABEL_13;
    }
  }
}


System_String_o *__fastcall ServantAssetLoadManager__getActorFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_4352C73 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B70694(&StringLiteral_12909/*"Servants/"*/);
    byte_4352C73 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v6);
  BattleChrId = ServantAssetLoadManager__getBattleChrId(Instance, svtId, limitCount, v7);
  return System_String__Concat_44758168((System_String_o *)StringLiteral_12909/*"Servants/"*/, BattleChrId, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getActorFolderNameFromDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x21
  __int64 LimitCountByImageLimitCostumeIn; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_4352C72 & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B70694(&StringLiteral_12909/*"Servants/"*/);
    byte_4352C72 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(displimitCount, 0LL);
  if ( !Instance )
    sub_B7076C(LimitCountByImageLimitCostumeIn, v7);
  BattleChrId = ServantAssetLoadManager__getBattleChrId(Instance, svtId, LimitCountByImageLimitCostumeIn, v8);
  return System_String__Concat_44758168((System_String_o *)StringLiteral_12909/*"Servants/"*/, BattleChrId, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getActorFolderName_26978256(
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4352C74 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_12909/*"Servants/"*/);
    byte_4352C74 = 1;
  }
  v6 = svtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6, v2);
  return System_String__Concat((Il2CppObject *)StringLiteral_12909/*"Servants/"*/, v4, 0LL);
}


UnityEngine_Texture2D_o *__fastcall ServantAssetLoadManager__getAssetObject_Texture2D_(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *file,
        const MethodInfo_1D5C858 *method)
{
  UnityEngine_Texture2D_o *result; // x0

  if ( (byte_4354C5F & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    byte_4354C5F = 1;
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
  __int64 v7; // x1
  ServantLimitAddMaster_o *svtlimitaddmaster; // x0

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  if ( !svtlimitaddmaster )
    sub_B7076C(0LL, v7);
  return ServantLimitAddMaster__getBattleChrId(svtlimitaddmaster, svtId, limitCount, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getCameraActionPath(int32_t cameraId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = cameraId;
  if ( (byte_4352CB6 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12910/*"Servants/Camera/"*/);
    byte_4352CB6 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_44758168((System_String_o *)StringLiteral_12910/*"Servants/Camera/"*/, v2, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getCommandCardLoadFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4352C47 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_12912/*"Servants/Commands/"*/);
    byte_4352C47 = 1;
  }
  v6 = svtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6, method);
  return System_String__Concat((Il2CppObject *)StringLiteral_12912/*"Servants/Commands/"*/, v4, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4352C46 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_12912/*"Servants/Commands/"*/);
    byte_4352C46 = 1;
  }
  v6 = svtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6, method);
  return System_String__Concat((Il2CppObject *)StringLiteral_12912/*"Servants/Commands/"*/, v4, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getNameEffectPath(
        int32_t enemyNameEffectId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = enemyNameEffectId;
  if ( (byte_4352CCA & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5903/*"Effect/BattleCommon/NameEffect/"*/);
    byte_4352CCA = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_44758168((System_String_o *)StringLiteral_5903/*"Effect/BattleCommon/NameEffect/"*/, v2, 0LL);
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


System_String_o *__fastcall ServantAssetLoadManager__getSkillCutInPath(
        ServantAssetLoadManager_o *this,
        int32_t cutInId,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4352C97 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_5926/*"Effect/CutIn/Skill/{0}"*/);
    byte_4352C97 = 1;
  }
  v6 = cutInId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6, method);
  return System_String__Format((System_String_o *)StringLiteral_5926/*"Effect/CutIn/Skill/{0}"*/, v4, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getStatusImageFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4352C4F & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_12915/*"Servants/Status/"*/);
    byte_4352C4F = 1;
  }
  v6 = svtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6, method);
  return System_String__Concat((Il2CppObject *)StringLiteral_12915/*"Servants/Status/"*/, v4, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getStatusImageFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4352C4E & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_12915/*"Servants/Status/"*/);
    byte_4352C4E = 1;
  }
  v6 = svtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6, method);
  return System_String__Concat((Il2CppObject *)StringLiteral_12915/*"Servants/Status/"*/, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *__fastcall ServantAssetLoadManager__getSvtEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ServantMaster_o *svtmaster; // x0

  if ( (byte_4352C45 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_4352C45 = 1;
  }
  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtmaster = this->fields.svtmaster;
  if ( !svtmaster )
    sub_B7076C(0LL, v5);
  return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)svtmaster,
                              svtId,
                              (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitAddEntity_o *__fastcall ServantAssetLoadManager__getSvtLimitAddEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  ServantLimitAddMaster_o *svtlimitaddmaster; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  if ( !svtlimitaddmaster )
    sub_B7076C(0LL, v7);
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
  __int64 v7; // x1
  ServantLimitMaster_o *svtlimitmaster; // x0

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtlimitmaster = this->fields.svtlimitmaster;
  if ( !svtlimitmaster )
    sub_B7076C(0LL, v7);
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
  __int64 v8; // x1

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, 0LL);
  if ( !this->fields.svtlimitaddmaster )
    sub_B7076C(SvtVoiceId, v8);
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
  __int64 v8; // x1

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, 0LL);
  if ( !this->fields.svtlimitaddmaster )
    sub_B7076C(SvtVoiceId, v8);
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


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadActorEffectFromActor(
        int32_t svtId,
        int32_t limitCount,
        int32_t weapongroup,
        System_String_o *name,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w3
  const MethodInfo *v11; // x5

  if ( (byte_4352C86 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C86 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v9);
  return ServantAssetLoadManager__loadActorEffectlocalFromActor(Instance, svtId, limitCount, v10, name, v11);
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
  System_String_o *BattleChrId; // x0
  System_String_o *v11; // x1

  if ( (byte_4352C87 & 1) == 0 )
  {
    sub_B70694(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_B70694(&StringLiteral_12909/*"Servants/"*/);
    byte_4352C87 = 1;
  }
  BattleChrId = ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, *(const MethodInfo **)&weapongroup);
  v11 = System_String__Concat_44758168((System_String_o *)StringLiteral_12909/*"Servants/"*/, BattleChrId, 0LL);
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                       this,
                                       v11,
                                       name,
                                       (const MethodInfo_1D5C858 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadActorMotion(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t weapongroup,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x4

  if ( (byte_4352C9C & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C9C = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v7);
  return ServantAssetLoadManager__loadActorMotionlocal(Instance, parent, v8, weapongroup, v9);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadActorMotionlocal(
        ServantAssetLoadManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t weapongroup,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  UnityEngine_Texture2D_o *AssetObject_Texture2D; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x19
  UnityEngine_Transform_o *v13; // x21
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  UnityEngine_Transform_o *v18; // x20
  int v19; // s0
  UnityEngine_Transform_o *v22; // x20
  int v23; // s0
  int32_t v27; // [xsp+Ch] [xbp-14h] BYREF

  v27 = weapongroup;
  if ( (byte_4352C9D & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_B70694(&StringLiteral_20897/*"motion"*/);
    sub_B70694(&StringLiteral_12913/*"Servants/Motion/"*/);
    byte_4352C9D = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v27, 0LL);
  v8 = System_String__Concat_44758168((System_String_o *)StringLiteral_12913/*"Servants/Motion/"*/, v7, 0LL);
  AssetObject_Texture2D = ServantAssetLoadManager__getAssetObject_Texture2D_(
                            this,
                            v8,
                            (System_String_o *)StringLiteral_20897/*"motion"*/,
                            (const MethodInfo_1D5C858 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                            (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_13;
  v12 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !parent )
    goto LABEL_13;
  v13 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v13 )
    goto LABEL_13;
  UnityEngine_Transform__set_parent(v13, (UnityEngine_Transform_o *)transform, 0LL);
  v14 = UnityEngine_GameObject__get_transform(v12, 0LL);
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v14
    || (UnityEngine_Transform__set_localPosition(v14, *(UnityEngine_Vector3_o *)&v15, 0LL),
        v18 = UnityEngine_GameObject__get_transform(v12, 0LL),
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_up(0LL),
        !v18)
    || (UnityEngine_Transform__set_eulerAngles(v18, *(UnityEngine_Vector3_o *)&v19, 0LL),
        v22 = UnityEngine_GameObject__get_transform(v12, 0LL),
        *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_one(0LL),
        !v22) )
  {
LABEL_13:
    sub_B7076C(transform, v11);
  }
  UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  return v12;
}


UnityEngine_TextAsset_o *__fastcall ServantAssetLoadManager__loadAnimEvents(
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4352C82 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C82 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v8);
  return ServantAssetLoadManager__loadAnimEventslocal(Instance, svtId, limitCount, isForce, v9);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_TextAsset_o *__fastcall ServantAssetLoadManager__loadAnimEventslocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  System_String_o *ActorFolderName_26978256; // x0

  if ( (byte_4352C83 & 1) == 0 )
  {
    sub_B70694(&Method_ServantAssetLoadManager_getAssetObject_TextAsset___);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&StringLiteral_18978/*"fbxevent"*/);
    byte_4352C83 = 1;
  }
  if ( isForce )
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ActorFolderName_26978256 = ServantAssetLoadManager__getActorFolderName_26978256(svtId, *(const MethodInfo **)&svtId);
  }
  else
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ActorFolderName_26978256 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  }
  if ( !this )
    sub_B7076C(ActorFolderName_26978256, ActorFolderName_26978256);
  return (UnityEngine_TextAsset_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                      this,
                                      ActorFolderName_26978256,
                                      (System_String_o *)StringLiteral_18978/*"fbxevent"*/,
                                      (const MethodInfo_1D5C858 *)Method_ServantAssetLoadManager_getAssetObject_TextAsset___);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x6

  if ( (byte_4352C79 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C79 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v12);
  return ServantAssetLoadManager__loadBattleActorlocal(Instance, assetPath, parent, svtId, limitCount, isForce, v13);
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
  System_String_o *ActorFolderName_26978256; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Texture2D_o *AssetObject_Texture2D; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x21
  UnityEngine_Transform_o *v24; // x22
  UnityEngine_Transform_o *v25; // x19
  int v26; // s0
  UnityEngine_Transform_o *v29; // x19
  int v30; // s0

  if ( (byte_4352C7A & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&StringLiteral_17686/*"chr"*/);
    byte_4352C7A = 1;
  }
  if ( isForce )
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ActorFolderName_26978256 = ServantAssetLoadManager__getActorFolderName_26978256(
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
    ActorFolderName_26978256 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 (const MethodInfo *)parent);
  }
  *assetPath = ActorFolderName_26978256;
  sub_B70630(
    (BattleServantConfConponent_o *)assetPath,
    (System_Int32_array **)ActorFolderName_26978256,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  AssetObject_Texture2D = ServantAssetLoadManager__getAssetObject_Texture2D_(
                            this,
                            *assetPath,
                            (System_String_o *)StringLiteral_17686/*"chr"*/,
                            (const MethodInfo_1D5C858 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                            (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_22;
  v23 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !parent )
    goto LABEL_22;
  v24 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v24 )
    goto LABEL_22;
  UnityEngine_Transform__set_parent(v24, (UnityEngine_Transform_o *)transform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0LL),
        v25 = UnityEngine_GameObject__get_transform(v23, 0LL),
        *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_up(0LL),
        !v25)
    || (UnityEngine_Transform__set_eulerAngles(v25, *(UnityEngine_Vector3_o *)&v26, 0LL),
        v29 = UnityEngine_GameObject__get_transform(v23, 0LL),
        *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_one(0LL),
        !v29) )
  {
LABEL_22:
    sub_B7076C(transform, v22);
  }
  UnityEngine_Transform__set_localScale(v29, *(UnityEngine_Vector3_o *)&v30, 0LL);
  return v23;
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleCommonEffect(
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4352C93 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C93 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v6);
  return ServantAssetLoadManager__loadBattleCommonEffectLocal(Instance, path, name, v7);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleCommonEffectLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x19

  if ( (byte_4352C94 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352C94 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   name,
                                                                   (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4352CB8 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352CB8 = 1;
  }
  if ( !cameraId )
    return 0LL;
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v6);
  return ServantAssetLoadManager__loadCameraActionlocal(Instance, cameraId, parent, v7);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCameraActionlocal(
        ServantAssetLoadManager_o *this,
        int32_t cameraId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  System_String_o *CameraActionPath; // x0
  UnityEngine_Texture2D_o *AssetObject_Texture2D; // x22
  UnityEngine_GameObject_o *v9; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_Transform_o *v12; // x22
  UnityEngine_Transform_o *v13; // x19
  int v14; // s0
  UnityEngine_Transform_o *v17; // x19
  int v18; // s0

  if ( (byte_4352CB9 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&StringLiteral_17441/*"cameraAction"*/);
    byte_4352CB9 = 1;
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
                            (System_String_o *)StringLiteral_17441/*"cameraAction"*/,
                            (const MethodInfo_1D5C858 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AssetObject_Texture2D, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                              (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_21;
    v9 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !parent )
      goto LABEL_21;
    v12 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0LL);
    if ( !v12 )
      goto LABEL_21;
    UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0LL),
          v13 = UnityEngine_GameObject__get_transform(v9, 0LL),
          *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_up(0LL),
          !v13)
      || (UnityEngine_Transform__set_eulerAngles(v13, *(UnityEngine_Vector3_o *)&v14, 0LL),
          v17 = UnityEngine_GameObject__get_transform(v9, 0LL),
          *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_one(0LL),
          !v17) )
    {
LABEL_21:
      sub_B7076C(transform, v11);
    }
    UnityEngine_Transform__set_localScale(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
  }
  return v9;
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCard(
        UITexture_o *tex,
        int32_t svtId,
        int32_t limit,
        int32_t commandLimit,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w3
  const MethodInfo *v11; // x5

  if ( (byte_4352C4A & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C4A = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v9);
  return ServantAssetLoadManager__loadCommandCardlocal(Instance, tex, svtId, v10, commandLimit, v11);
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
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  const MethodInfo *v12; // x2
  System_String_o *CommandCardLoadFolderName; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  UnityEngine_Object_o *AssetObject_Texture2D; // x20
  bool v17; // w8
  UITexture_o *result; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4352C4B & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&StringLiteral_17509/*"card_servant_"*/);
    byte_4352C4B = 1;
  }
  LimitImageIndex = 0;
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, commandLimit, 1, v10);
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v11, v12);
  v14 = System_Int32__ToString((int32_t)&LimitImageIndex, 0LL);
  v15 = System_String__Concat_44758168((System_String_o *)StringLiteral_17509/*"card_servant_"*/, v14, 0LL);
  AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                    this,
                                                    CommandCardLoadFolderName,
                                                    v15,
                                                    (const MethodInfo_1D5C858 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = UnityEngine_Object__op_Equality(AssetObject_Texture2D, 0LL, 0LL);
  result = 0LL;
  if ( !v17 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v19 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v19 )
    {
      if ( !tex )
        sub_B7076C(v19, v20);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4352CBC & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352CBC = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v6);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal_26997436(Instance, tex, userCommandCodeId, v7);
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_String_o *CommandCodeFolderName; // x22
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  UnityEngine_Object_o *AssetObject_Texture2D; // x20
  bool v12; // w8
  UITexture_o *result; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4352CBE & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&StringLiteral_17428/*"c_{0:D7}"*/);
    byte_4352CBE = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(commandCodeId, (const MethodInfo *)tex);
  v16 = commandCodeId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v8);
  v10 = System_String__Format((System_String_o *)StringLiteral_17428/*"c_{0:D7}"*/, v9, 0LL);
  AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                    this,
                                                    CommandCodeFolderName,
                                                    v10,
                                                    (const MethodInfo_1D5C858 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Equality(AssetObject_Texture2D, 0LL, 0LL);
  result = 0LL;
  if ( !v12 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v14 )
    {
      if ( !tex )
        sub_B7076C(v14, v15);
      ((void (__fastcall *)(UITexture_o *, UnityEngine_Object_o *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_Texture2D,
        tex->klass->vtable._28_get_shader.methodPtr);
    }
    return tex;
  }
  return result;
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTextureLocal_26997436(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w0
  const MethodInfo *v12; // x3
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4352CBF & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B70694(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352CBF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  entity = 0LL;
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userCommandCodeId,
                                (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
LABEL_13:
    sub_B7076C(Instance, v8);
  v10 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v15, 0LL);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(this, tex, v11, v12);
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTexture_26997720(
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4352CBD & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352CBD = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v6);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(Instance, tex, commandCodeId, v7);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCommonEffect(
        System_String_o *name,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4352C8A & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C8A = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  return ServantAssetLoadManager__loadCommonEffectlocal(Instance, name, v5);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCommonEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  UnityEngine_Object_o *v5; // x0
  UnityEngine_Object_o *v6; // x19
  bool v7; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4352C8B & 1) == 0 )
  {
    sub_B70694(&UnityEngine_GameObject_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_18501/*"effect/"*/);
    byte_4352C8B = 1;
  }
  v4 = System_String__Concat_44758168((System_String_o *)StringLiteral_18501/*"effect/"*/, name, 0LL);
  v5 = UnityEngine_Resources__Load(v4, 0LL);
  if ( v5 )
  {
    if ( (UnityEngine_GameObject_c *)v5->klass == UnityEngine_GameObject_TypeInfo )
      v6 = v5;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  result = 0LL;
  if ( v7 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)v6,
                                         (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return result;
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadEffect(
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4352C88 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C88 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v8);
  return ServantAssetLoadManager__loadEffectlocal(Instance, name, weapongroup, effectFolder, v9);
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

  if ( (byte_4352C89 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352C89 = 1;
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
  return StandFigureManager__CreateRenderPrefab_26399528(
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


bool __fastcall ServantAssetLoadManager__loadNobleName(
        UITexture_o *tex,
        int32_t svtId,
        int32_t limit,
        int32_t treasureDvcId,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4352C56 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C56 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v10);
  return ServantAssetLoadManager__loadNobleNamelocal(Instance, tex, svtId, limit, treasureDvcId, v11);
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
  ServantTreasureDvcEntity_o *EntityFromIDID; // x23
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  ServantEntity_o *Entity; // x25
  ServantLimitAddMaster_o *v15; // x26
  const MethodInfo *v16; // x2
  System_String_o *v17; // x21
  System_String_o *OverwriteTDFileName; // x0
  UnityEngine_Object_o *AssetObject_Texture2D; // x20
  int imageIndex; // w22
  __int64 v21; // x25
  System_String_o *v22; // x24
  __int64 v23; // x25
  System_String_o *NpNameFileSuffix; // x22
  int32_t v25; // w1
  const MethodInfo *v26; // x2
  System_String_o *v27; // x21
  __int64 v28; // x2
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x2
  ServantAssetLoadManager_o *v32; // x0
  System_String_o *CommandCardLoadFolderName; // x1
  float v35; // s4
  float v36; // s5
  float v37; // s6
  float v38; // s7
  float v39; // s1
  float v40; // s2
  int v41; // s0
  float v42; // s3
  MethodInfo methoda; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Rect_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4352C57 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_23922/*"{0}"*/);
    sub_B70694(&StringLiteral_16127/*"_"*/);
    sub_B70694(&StringLiteral_17510/*"card_servant_np"*/);
    byte_4352C57 = 1;
  }
  methoda.name = 0LL;
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(svtId, treasureDvcId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_54;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  methoda.name = 0LL;
  if ( !Entity )
    goto LABEL_54;
  v15 = (ServantLimitAddMaster_o *)Instance;
  Instance = (DataManager_o *)ServantEntity__IsNameTrueFromBattleSvt(Entity, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_17;
  if ( !v15 )
    goto LABEL_54;
  if ( !ServantLimitAddMaster__TryGetEntity(v15, (ServantLimitAddEntity_o **)&methoda.name, svtId, limit, 0LL) )
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
    Instance = (DataManager_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v13, v16);
    if ( !methoda.name )
      goto LABEL_54;
    v17 = (System_String_o *)Instance;
    OverwriteTDFileName = ServantLimitAddEntity__GetOverwriteTDFileName((ServantLimitAddEntity_o *)methoda.name, 0LL);
    AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                      this,
                                                      v17,
                                                      OverwriteTDFileName,
                                                      (const MethodInfo_1D5C858 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    LOBYTE(imageIndex) = 0;
  }
  else
  {
LABEL_17:
    if ( EntityFromIDID )
    {
      v21 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      v22 = (System_String_o *)StringLiteral_17510/*"card_servant_np"*/;
      if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
        sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v23 = **(_QWORD **)(v21 + 192);
      if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
        sub_B08394(v23);
      Instance = **(DataManager_o ***)(v23 + 184);
      if ( !Instance )
        goto LABEL_54;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Instance )
        goto LABEL_54;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    treasureDvcId,
                                    (const MethodInfo_21C0440 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_54;
      NpNameFileSuffix = TreasureDvcEntity__GetNpNameFileSuffix((TreasureDvcEntity_o *)Instance, 0LL);
      if ( !System_String__IsNullOrEmpty(NpNameFileSuffix, 0LL) )
        v22 = System_String__Concat_44760452(v22, (System_String_o *)StringLiteral_16127/*"_"*/, NpNameFileSuffix, 0LL);
      imageIndex = EntityFromIDID->fields.imageIndex;
      if ( imageIndex <= 1 )
      {
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v25, v26);
        v32 = this;
        v31 = v22;
      }
      else
      {
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        v27 = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v25, v26);
        LODWORD(methoda.methodPointer) = (unsigned int)imageIndex >> 1;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda, v28);
        v30 = System_String__Format((System_String_o *)StringLiteral_23922/*"{0}"*/, v29, 0LL);
        v31 = System_String__Concat_44758168(v22, v30, 0LL);
        v32 = this;
        CommandCardLoadFolderName = v27;
      }
      AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                        v32,
                                                        CommandCardLoadFolderName,
                                                        v31,
                                                        (const MethodInfo_1D5C858 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
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
        v40 = 1.0;
        v42 = 0.5;
        v41 = 0;
        v39 = 0.0;
        methoda.methodPointer = 0LL;
        methoda.invoker_method = 0LL;
      }
      else
      {
        v39 = 0.5;
        methoda.methodPointer = 0LL;
        methoda.invoker_method = 0LL;
        v40 = 1.0;
        v41 = 0;
        v42 = 0.5;
      }
      UnityEngine_Rect___ctor(*(UnityEngine_Rect_o *)&v41, v35, v36, v37, v38, &methoda);
      *(_QWORD *)&v44.fields.m_XMin = methoda.methodPointer;
      *(_QWORD *)&v44.fields.m_Width = methoda.invoker_method;
      UITexture__set_uvRect(tex, v44, 0LL);
      return 1;
    }
LABEL_54:
    sub_B7076C(Instance, v13);
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
  UnityEngine_MonoBehaviour__StartCoroutine_36062060(
    (UnityEngine_MonoBehaviour_o *)this,
    Manager__loadNoblePhantasmCoroutine,
    0LL);
}


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
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_4352CAF & 1) == 0 )
  {
    sub_B70694(&ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_TypeInfo);
    byte_4352CAF = 1;
  }
  v17 = sub_B70764(ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_TypeInfo);
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152___ctor(
    (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)v17,
    0,
    0LL);
  if ( !v17 )
    sub_B7076C(v18, v19);
  *(_QWORD *)(v17 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v17 + 32), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 40) = parent;
  sub_B70630((BattleServantConfConponent_o *)(v17 + 40), (System_Int32_array **)parent, v26, v27, v28, v29, v30, v31);
  *(_DWORD *)(v17 + 56) = npChargeStage;
  *(_DWORD *)(v17 + 60) = svtId;
  *(_DWORD *)(v17 + 48) = treasureDvcId;
  *(_DWORD *)(v17 + 52) = limitCount;
  *(_DWORD *)(v17 + 72) = treasureDvcLv;
  *(_QWORD *)(v17 + 80) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v17 + 80), (System_Int32_array **)callback, v32, v33, v34, v35, v36, v37);
  return (System_Collections_IEnumerator_o *)v17;
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadNoblePhantasmEffect(
        int32_t treasureDeviceId,
        int32_t limit,
        System_String_o *name,
        int32_t seqIdFromMstTDSeqWeight,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4352C84 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C84 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v10);
  return ServantAssetLoadManager__loadNoblePhantasmEffectlocal(
           Instance,
           treasureDeviceId,
           limit,
           name,
           seqIdFromMstTDSeqWeight,
           v11);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadNoblePhantasmEffectlocal(
        ServantAssetLoadManager_o *this,
        int32_t treasureDeviceId,
        int32_t limit,
        System_String_o *name,
        int32_t seqIdFromMstTDSeqWeight,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  int32_t eventId; // w0
  System_String_o *v14; // x0
  System_String_o *v15; // x21
  System_String_o *v16; // x0
  int v18; // [xsp+Ch] [xbp-44h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  int32_t v20; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4352C85 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_B70694(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_B70694(&StringLiteral_9709/*"NoblePhantasm/"*/);
    byte_4352C85 = 1;
  }
  v20 = 0;
  entity = 0LL;
  v18 = 0;
  if ( seqIdFromMstTDSeqWeight < 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_23;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            Master_WarQuestSelectionMaster,
            &entity,
            treasureDeviceId,
            (const MethodInfo_21C049C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
    {
      v20 = treasureDeviceId;
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
      sub_B7076C(Master_WarQuestSelectionMaster, v12);
    }
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      eventId = entity->fields.eventId;
    else
      eventId = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)entity, limit, 0LL);
    v20 = eventId;
  }
  else
  {
    v20 = seqIdFromMstTDSeqWeight;
  }
LABEL_17:
  v14 = System_Int32__ToString((int32_t)&v20, 0LL);
  v15 = System_String__Concat_44758168((System_String_o *)StringLiteral_9709/*"NoblePhantasm/"*/, v14, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v15, 0LL) )
  {
    v18 = 10 * (v20 / 10);
    v16 = System_Int32__ToString((int32_t)&v18, 0LL);
    v15 = System_String__Concat_44758168((System_String_o *)StringLiteral_9709/*"NoblePhantasm/"*/, v16, 0LL);
  }
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                       this,
                                       v15,
                                       name,
                                       (const MethodInfo_1D5C858 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


void __fastcall ServantAssetLoadManager__loadSkillCutIn(
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4352C98 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C98 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v6);
  ServantAssetLoadManager__loadSkillCutInLocal(Instance, skillInfo, callback, v7);
}


void __fastcall ServantAssetLoadManager__loadSkillCutInLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w1
  System_String_o *SkillCutInPath; // x20

  if ( (byte_4352C99 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B70694(&AssetManager_TypeInfo);
    byte_4352C99 = 1;
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


UITexture_o *__fastcall ServantAssetLoadManager__loadStatusFace(
        UITexture_o *tex,
        int32_t svtID,
        int32_t limit,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4352C52 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C52 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v8);
  return ServantAssetLoadManager__loadStatusFacelocal(Instance, tex, svtID, limit, v9);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadStatusFacelocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t svtID,
        int32_t limit,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  const MethodInfo *v11; // x2
  System_String_o *StatusImageFolderName; // x21
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  UnityEngine_Object_o *AssetObject_Texture2D; // x20
  bool v16; // w8
  UITexture_o *result; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4352C53 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&StringLiteral_22686/*"status_servant_"*/);
    byte_4352C53 = 1;
  }
  LimitImageIndex = 0;
  ServantAssetLoadManager__getSvtEntity(this, svtID, *(const MethodInfo **)&svtID);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtID, limit, 1, v9);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(svtID, v10, v11);
  v13 = System_Int32__ToString((int32_t)&LimitImageIndex, 0LL);
  v14 = System_String__Concat_44758168((System_String_o *)StringLiteral_22686/*"status_servant_"*/, v13, 0LL);
  AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                    this,
                                                    StatusImageFolderName,
                                                    v14,
                                                    (const MethodInfo_1D5C858 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = UnityEngine_Object__op_Equality(AssetObject_Texture2D, 0LL, 0LL);
  result = 0LL;
  if ( !v16 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v18 )
    {
      if ( !tex )
        sub_B7076C(v18, v19);
      ((void (__fastcall *)(UITexture_o *, UnityEngine_Object_o *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_Texture2D,
        tex->klass->vtable._28_get_shader.methodPtr);
    }
    return tex;
  }
  return result;
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadWeaponGroupEffect(
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4352C8D & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C8D = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v8);
  return ServantAssetLoadManager__loadWeaponGroupEffectlocal(Instance, name, weapongroup, effectFolder, v9);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadWeaponGroupEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  System_String_o *v8; // x21
  System_String_o *v9; // x0
  AssetData_o *AssetStorage; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x19
  int32_t v13; // [xsp+8h] [xbp-18h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v13 = effectFolder;
  v14 = weapongroup;
  if ( (byte_4352C8E & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_5954/*"Effect/weapon/"*/);
    sub_B70694(&StringLiteral_890/*"/"*/);
    byte_4352C8E = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v14, 0LL);
  v8 = System_String__Concat_44758168((System_String_o *)StringLiteral_5954/*"Effect/weapon/"*/, v7, 0LL);
  if ( effectFolder )
  {
    v9 = System_Int32__ToString((int32_t)&v13, 0LL);
    v8 = System_String__Concat_44760452(v8, (System_String_o *)StringLiteral_890/*"/"*/, v9, 0LL);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v8, 0LL);
  if ( AssetStorage )
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   name,
                                                                   (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *ActorVoice; // x0

  if ( (byte_4352CAC & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
    byte_4352CAC = 1;
  }
  ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
  if ( !ActorVoice )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)ActorVoice,
         uniqueId,
         (const MethodInfo_2FC67DC *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
    if ( ActorVoice )
    {
      ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(ActorVoice, uniqueId, (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
      if ( ActorVoice )
      {
        SePlayer__StopSe((SePlayer_o *)ActorVoice, fadeoutTime, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B7076C(ActorVoice, *(_QWORD *)&uniqueId);
  }
}


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
  __int64 v18; // x1
  const MethodInfo *v20; // [xsp+8h] [xbp-58h]

  if ( (byte_4352CA0 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352CA0 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v18);
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
           v20);
}


SePlayer_o *__fastcall ServantAssetLoadManager__playBattleVoiceSe(
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *fileName,
        float volume,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5

  if ( (byte_4352CA3 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352CA3 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v12);
  return ServantAssetLoadManager__playBattleVoiceSelocal(
           Instance,
           svtId,
           limit,
           overwriteSvtVoiceId,
           fileName,
           volume,
           v13);
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
  SePlayer_o *result; // x0
  const MethodInfo *v14; // x3
  int32_t VoiceId; // w0
  int32_t v16; // w8
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4352CA4 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_12909/*"Servants/"*/);
    byte_4352CA4 = 1;
  }
  v19 = 0;
  result = (SePlayer_o *)ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&limit);
  if ( result )
  {
    VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v14);
    if ( overwriteSvtVoiceId )
      v16 = overwriteSvtVoiceId;
    else
      v16 = VoiceId;
    v19 = v16;
    v17 = System_Int32__ToString((int32_t)&v19, 0LL);
    v18 = System_String__Concat_44758168((System_String_o *)StringLiteral_12909/*"Servants/"*/, v17, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    return SoundManager__playSe_23207012(v18, targetFileName, volume, 0LL, 0LL);
  }
  return result;
}


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
  __int64 v20; // x23
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *ActorVoice; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  SePlayer_o **v29; // x28
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x2
  ServantEntity_o *SvtEntity; // x27
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x3
  int32_t VoicePrefix; // w0
  __int64 v41; // x2
  __int64 *v42; // x8
  System_String_o *v43; // x22
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  struct System_Collections_Generic_Dictionary_int__SePlayer__o *v46; // x22
  System_String_o *v47; // x24
  System_Action_o *v48; // x25
  SePlayer_o *result; // x0
  Il2CppObject *v50; // x0
  int32_t v51; // [xsp+8h] [xbp-58h] BYREF
  int32_t VoiceId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4352CA1 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_ServantAssetLoadManager___c__DisplayClass134_0__playBattleVoicelocal_b__0__);
    sub_B70694(&ServantAssetLoadManager___c__DisplayClass134_0_TypeInfo);
    sub_B70694(&StringLiteral_23882/*"{0:D0}_{1}"*/);
    sub_B70694(&StringLiteral_12909/*"Servants/"*/);
    sub_B70694(&StringLiteral_9709/*"NoblePhantasm/"*/);
    byte_4352CA1 = 1;
  }
  VoiceId = 0;
  v20 = sub_B70764(ServantAssetLoadManager___c__DisplayClass134_0_TypeInfo);
  ServantAssetLoadManager___c__DisplayClass134_0___ctor((ServantAssetLoadManager___c__DisplayClass134_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_29;
  *(_QWORD *)(v20 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = callback;
  v29 = (SePlayer_o **)(v20 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v20 + 24), (System_Int32_array **)callback, v30, v31, v32, v33, v34, v35);
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, v36);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v38);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v39);
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
               (const MethodInfo_2FC67DC *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
        {
          ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
          if ( !ActorVoice )
            goto LABEL_29;
          if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 ActorVoice,
                 uniqueId,
                 (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__) )
          {
            ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
            if ( !ActorVoice )
              goto LABEL_29;
            ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(ActorVoice, uniqueId, (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
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
          (const MethodInfo_2FC6540 *)Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
        v42 = &StringLiteral_9709/*"NoblePhantasm/"*/;
        if ( !isNp )
          v42 = &StringLiteral_12909/*"Servants/"*/;
        v43 = (System_String_o *)*v42;
        v44 = System_Int32__ToString((int32_t)&VoiceId, 0LL);
        v45 = System_String__Concat_44758168(v43, v44, 0LL);
        v46 = this->fields.ActorVoice;
        v47 = v45;
        v48 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v48,
          (Il2CppObject *)v20,
          Method_ServantAssetLoadManager___c__DisplayClass134_0__playBattleVoicelocal_b__0__,
          0LL);
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SoundManager__playVoice_23183232(v47, targetFileName, volume, v48, 0LL);
        if ( v46 )
        {
          System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v46,
            uniqueId,
            (WarBoardAIRoute_RouteData_o *)ActorVoice,
            (const MethodInfo_2FC6540 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__);
          ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
          if ( ActorVoice )
            return (SePlayer_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                   ActorVoice,
                                   uniqueId,
                                   (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        }
      }
LABEL_29:
      sub_B7076C(ActorVoice, v22);
    }
  }
  else
  {
    v51 = VoicePrefix;
    v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v41);
    targetFileName = System_String__Format_44753704(
                       (System_String_o *)StringLiteral_23882/*"{0:D0}_{1}"*/,
                       v50,
                       (Il2CppObject *)voiceTypeId,
                       0LL);
    if ( SvtEntity )
      goto LABEL_8;
  }
  result = *v29;
  if ( *v29 )
  {
    System_Action__Invoke((System_Action_o *)result, 0LL);
    return 0LL;
  }
  return result;
}


void __fastcall ServantAssetLoadManager__preloadActorMotion(int32_t weapongroup, bool dlOnly, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = weapongroup;
  if ( (byte_4352C9B & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B70694(&StringLiteral_12913/*"Servants/Motion/"*/);
    byte_4352C9B = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_String__Concat_44758168((System_String_o *)StringLiteral_12913/*"Servants/Motion/"*/, v5, 0LL);
  if ( !Instance )
    sub_B7076C(v6, v7);
  ServantAssetLoadManager__setLoadList(Instance, v6, dlOnly, v8);
}


void __fastcall ServantAssetLoadManager__preloadBattleActor(
        ServantAssetArgs_o *args,
        bool isForce,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x6

  if ( (byte_4352C75 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C75 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_B7076C(Instance, v6);
  ServantAssetLoadManager__preloadBattleActorlocal(
    Instance,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    isForce,
    0,
    v7);
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
  System_String_o *ActorFolderName_26978256; // x0
  const MethodInfo *v15; // x3
  int32_t v16; // w0

  if ( (byte_4352C76 & 1) == 0 )
  {
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_4352C76 = 1;
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
      ActorFolderName_26978256 = ServantAssetLoadManager__getActorFolderName_26978256(v13, *(const MethodInfo **)&svtId);
      goto LABEL_24;
    }
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    v16 = appearanceId;
  }
  ActorFolderName_26978256 = ServantAssetLoadManager__getActorFolderName(
                               v16,
                               limitCount,
                               *(const MethodInfo **)&limitCount);
LABEL_24:
  if ( !this )
    sub_B7076C(ActorFolderName_26978256, ActorFolderName_26978256);
  ServantAssetLoadManager__setLoadList(this, ActorFolderName_26978256, dlOnly, v15);
}


System_String_array *__fastcall ServantAssetLoadManager__preloadBattleCommonEffect(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4352C91 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C91 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  return ServantAssetLoadManager__preloadBattleCommonEffectLocal(Instance, effectIdList, v5);
}


System_String_array *__fastcall ServantAssetLoadManager__preloadBattleCommonEffectLocal(
        ServantAssetLoadManager_o *this,
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  System_String_array *BattleCommonEffectPathList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  __int64 v8; // x8
  System_String_array *v9; // x20
  unsigned __int64 v10; // x21
  __int64 v12; // x0

  if ( (byte_4352C92 & 1) == 0 )
  {
    sub_B70694(&BattleEffectUtility_TypeInfo);
    byte_4352C92 = 1;
  }
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  BattleCommonEffectPathList = BattleEffectUtility__GetBattleCommonEffectPathList(effectIdList, 0LL);
  if ( !BattleCommonEffectPathList )
    sub_B7076C(0LL, v6);
  v8 = *(_QWORD *)&BattleCommonEffectPathList->max_length;
  v9 = BattleCommonEffectPathList;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)v8 )
      {
        v12 = sub_B70798(BattleCommonEffectPathList);
        sub_B70738(v12, 0LL);
      }
      ServantAssetLoadManager__setLoadList(this, v9->m_Items[v10], 0, v7);
      LODWORD(v8) = v9->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)v8 );
  }
  return v9;
}


void __fastcall ServantAssetLoadManager__preloadCameraAction(int32_t cameraId, bool dlOnly, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  ServantAssetLoadManager_o *Instance; // x21
  System_String_o *CameraActionPath; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4352CB7 & 1) == 0 )
  {
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352CB7 = 1;
  }
  if ( cameraId )
  {
    Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, v5);
    if ( !Instance )
      sub_B7076C(CameraActionPath, v8);
    ServantAssetLoadManager__setLoadList(Instance, CameraActionPath, dlOnly, v9);
  }
}


void __fastcall ServantAssetLoadManager__preloadCommandCard(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x4

  if ( (byte_4352C48 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C48 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v5);
  ServantAssetLoadManager__preloadCommandCardlocal(Instance, svtId, v6, 0, v7);
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

  if ( (byte_4352C49 & 1) == 0 )
  {
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_4352C49 = 1;
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
  if ( (byte_4352CC0 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_4352CC0 = 1;
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
          v13 = sub_B70798(this);
          sub_B70738(v13, 0LL);
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
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4352C6E & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C6E = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v2);
  ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal(Instance, v2);
}


void __fastcall ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v6; // x20
  unsigned __int64 v7; // x24
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o **p_lookup; // x25
  SoundManager_o *v9; // x21
  System_String_o *VoiceAssetName; // x22
  System_Action_o *v11; // x23
  __int64 v12; // x0

  if ( (byte_4352C6F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_B70694(&Method_DataMasterBase_getEntitys_CommandSpellEntity___);
    sub_B70694(&Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4352C6F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                      (DataMasterBase_o *)Instance,
                                      (const MethodInfo_1CA3E74 *)Method_DataMasterBase_getEntitys_CommandSpellEntity___)) == 0LL )
  {
LABEL_21:
    sub_B7076C(Instance, v4);
  }
  datalist = Instance->fields.datalist;
  v6 = Instance;
  if ( (int)datalist >= 1 )
  {
    v7 = 0LL;
    p_lookup = &Instance->fields.lookup;
    do
    {
      if ( v7 >= (unsigned int)datalist )
      {
LABEL_20:
        v12 = sub_B70798(Instance);
        sub_B70738(v12, 0LL);
      }
      Instance = (DataManager_o *)p_lookup[v7];
      if ( Instance )
      {
        Instance = (DataManager_o *)CommandSpellEntity__isUseBattle((CommandSpellEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v7 >= LODWORD(v6->fields.datalist) )
            goto LABEL_20;
          Instance = (DataManager_o *)p_lookup[v7];
          if ( !Instance )
            goto LABEL_21;
          Instance = (DataManager_o *)CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
          if ( Instance )
          {
            ++this->fields.soundCount;
            Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
            if ( v7 >= LODWORD(v6->fields.datalist) )
              goto LABEL_20;
            v9 = (SoundManager_o *)Instance;
            Instance = (DataManager_o *)p_lookup[v7];
            if ( !Instance )
              goto LABEL_21;
            VoiceAssetName = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
            v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            System_Action___ctor(
              v11,
              (Il2CppObject *)this,
              Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__,
              0LL);
            if ( !v9 )
              goto LABEL_21;
            SoundManager__LoadAudioAssetStorage(v9, VoiceAssetName, v11, 1, 0LL);
          }
        }
      }
      LODWORD(datalist) = v6->fields.datalist;
      ++v7;
    }
    while ( (__int64)v7 < (int)datalist );
  }
}


void __fastcall ServantAssetLoadManager__preloadFromDeckServant(
        BattleDeckServantData_o *deckSvt,
        bool dlOnly,
        const MethodInfo *method)
{
  int32_t EnemyNameEffect; // w0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  System_String_o *NameEffectPath; // x20
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4352CC7 & 1) == 0 )
  {
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352CC7 = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0LL);
    if ( EnemyNameEffect )
    {
      v7 = EnemyNameEffect;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v7, v6);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        sub_B7076C(0LL, v10);
      ServantAssetLoadManager__setLoadList(Instance, NameEffectPath, dlOnly, v11);
    }
  }
}


void __fastcall ServantAssetLoadManager__preloadServant(
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4352C63 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C63 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v6);
  ServantAssetLoadManager__preloadServantlocal(Instance, args, dlOnly, v7);
}


void __fastcall ServantAssetLoadManager__preloadServantVoice(
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x5

  if ( (byte_4352C66 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C66 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v8);
  ServantAssetLoadManager__preloadServantVoicelocal(Instance, svtId, limitCount, overwriteSvtVoiceId, 0, v9);
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
  int32_t VoiceId; // w0
  int32_t v12; // w8
  SoundManager_o *Instance; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x22
  System_Action_o *v16; // x0
  System_Action_o *v17; // x23
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4352C67 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__);
    sub_B70694(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__);
    sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_B70694(&StringLiteral_12916/*"Servants_"*/);
    byte_4352C67 = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v12 = overwriteSvtVoiceId;
  else
    v12 = VoiceId;
  v20 = v12;
  if ( v12 )
  {
    ++this->fields.soundCount;
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v14 = System_Int32__ToString((int32_t)&v20, 0LL);
    v15 = System_String__Concat_44758168((System_String_o *)StringLiteral_12916/*"Servants_"*/, v14, 0LL);
    v16 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    v17 = v16;
    if ( dlOnly )
    {
      System_Action___ctor(
        v16,
        (Il2CppObject *)this,
        Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__,
        0LL);
      if ( Instance )
      {
        SoundManager__DownloadAudioAssetStorage(Instance, v15, v17, 1, 0LL);
        return;
      }
LABEL_13:
      sub_B7076C(v18, v19);
    }
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__,
      0LL);
    if ( !Instance )
      goto LABEL_13;
    SoundManager__LoadAudioAssetStorage(Instance, v15, v17, 1, 0LL);
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
    sub_B7076C(this, 0LL);
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


void __fastcall ServantAssetLoadManager__preloadSkillAnyVoice(
        BattleSkillInfoData_o *skillInfo,
        bool dlOnly,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4352C6A & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C6A = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v6);
  ServantAssetLoadManager__preloadSkillAnyVoiceLocal(Instance, skillInfo, dlOnly, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadSkillAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x22
  __int64 v9; // x22
  DataManager_o *v10; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x22
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v13; // x21
  System_String_o *VoiceAssetName; // x20
  System_Action_o *v15; // x21
  SoundManager_o *Instance; // x20
  System_String_o *v17; // x21
  System_Action_o *v18; // x22

  if ( (byte_4352C6B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__);
    sub_B70694(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352C6B = 1;
  }
  if ( skillInfo
    && ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, bool, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
         skillInfo,
         skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
         dlOnly,
         method)
    && skillInfo->fields.skilllv )
  {
    v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
      sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v9 = **(_QWORD **)(v8 + 192);
    if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
      sub_B08394(v9);
    v10 = **(DataManager_o ***)(v9 + 184);
    if ( v10 )
    {
      MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                v10,
                                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      v10 = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_WarQuestSelectionMaster )
      {
        Entity = SkillLvMaster__GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int32_t)v10,
                   skillInfo->fields.skilllv,
                   0LL);
        if ( !Entity )
          return;
        v13 = Entity;
        if ( !SkillLvEntity__getVoiceAssetName(Entity, 0LL) )
          return;
        ++this->fields.soundCount;
        if ( dlOnly )
        {
          VoiceAssetName = SkillLvEntity__getVoiceAssetName(v13, 0LL);
          v15 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v15,
            (Il2CppObject *)this,
            Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__,
            0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__downloadAudioAssetStorage(VoiceAssetName, v15, 1, 0LL);
          return;
        }
        Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        v17 = SkillLvEntity__getVoiceAssetName(v13, 0LL);
        v18 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v18,
          (Il2CppObject *)this,
          Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__,
          0LL);
        if ( Instance )
        {
          SoundManager__LoadAudioAssetStorage(Instance, v17, v18, 1, 0LL);
          return;
        }
      }
    }
    sub_B7076C(v10, v7);
  }
}


void __fastcall ServantAssetLoadManager__preloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x4

  if ( (byte_4352C50 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C50 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v5);
  ServantAssetLoadManager__preloadCommandCardlocal(Instance, svtId, v6, 0, v7);
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

  if ( (byte_4352C51 & 1) == 0 )
  {
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_4352C51 = 1;
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


void __fastcall ServantAssetLoadManager__preloadWeaponEffect(
        int32_t weapongroup,
        int32_t effectFolder,
        bool dlOnly,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x22
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  int32_t v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v13 = effectFolder;
  v14 = weapongroup;
  if ( (byte_4352C8C & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B70694(&StringLiteral_5954/*"Effect/weapon/"*/);
    sub_B70694(&StringLiteral_890/*"/"*/);
    byte_4352C8C = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v7 = System_Int32__ToString((int32_t)&v14, 0LL);
  v8 = v7;
  if ( !effectFolder )
  {
    v10 = System_String__Concat_44758168((System_String_o *)StringLiteral_5954/*"Effect/weapon/"*/, v7, 0LL);
    if ( Instance )
      goto LABEL_5;
LABEL_7:
    sub_B7076C(v10, v11);
  }
  v9 = System_Int32__ToString((int32_t)&v13, 0LL);
  v10 = System_String__Concat_44761580(
          (System_String_o *)StringLiteral_5954/*"Effect/weapon/"*/,
          v8,
          (System_String_o *)StringLiteral_890/*"/"*/,
          v9,
          0LL);
  if ( !Instance )
    goto LABEL_7;
LABEL_5:
  ServantAssetLoadManager__setLoadList(Instance, v10, dlOnly, v12);
}


void __fastcall ServantAssetLoadManager__releaseNoblePhantasm(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  AssetData_o *nobleAssetData; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  AssetData_o *nobleSequenceData; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Collections_Generic_List_AssetData__o *bgAssetDataList; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *nobleEffectList; // x0
  System_String_array *v27; // x0
  const MethodInfo *v28; // x2
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4352CB1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B70694(&System_Collections_Generic_List_AssetData__TypeInfo);
    byte_4352CB1 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  nobleAssetData = this->fields.nobleAssetData;
  if ( nobleAssetData )
  {
    AssetData__RemoveEntry(nobleAssetData, 0LL);
    this->fields.nobleAssetData = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.nobleAssetData, 0LL, v4, v5, v6, v7, v8, v9);
  }
  nobleSequenceData = this->fields.nobleSequenceData;
  if ( nobleSequenceData )
  {
    AssetData__RemoveEntry(nobleSequenceData, 0LL);
    this->fields.nobleSequenceData = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.nobleSequenceData, 0LL, v11, v12, v13, v14, v15, v16);
  }
  bgAssetDataList = this->fields.bgAssetDataList;
  if ( bgAssetDataList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v29,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bgAssetDataList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v29,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      if ( !v29.fields.current )
        sub_B7076C(0LL, v18);
      AssetData__RemoveEntry((AssetData_o *)v29.fields.current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v29,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v19,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v19;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.bgAssetDataList,
      (System_Int32_array **)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  nobleEffectList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.nobleEffectList;
  if ( !nobleEffectList )
    goto LABEL_19;
  if ( nobleEffectList->fields._size < 1 )
    return;
  v27 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 nobleEffectList,
                                 (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_string__ToArray__);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal(this, v27, v28);
  nobleEffectList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.nobleEffectList;
  if ( !nobleEffectList )
LABEL_19:
    sub_B7076C(nobleEffectList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)nobleEffectList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall ServantAssetLoadManager__setLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        bool dlOnly,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *downloadlist; // x0
  AssetLoader_LoadEndDataHandler_o *v8; // x21
  AssetLoader_LoadEndDataHandler_o *v9; // x21

  if ( (byte_4352C5C & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Remove__);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_ServantAssetLoadManager_endloadList__);
    byte_4352C5C = 1;
  }
  if ( dlOnly )
  {
    downloadlist = this->fields.downloadlist;
    if ( downloadlist )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)downloadlist,
        (EventMissionProgressRequest_Argument_ProgressData_o *)path,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
      v8 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(v8, (Il2CppObject *)this, Method_ServantAssetLoadManager_endloadList__, 0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__downloadAssetStorage(path, v8, 20, 0LL) )
        return;
      downloadlist = this->fields.downloadlist;
      if ( downloadlist )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)downloadlist,
          (WarBoardManager_TaskList_o *)path,
          (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_string__Remove__);
        return;
      }
    }
LABEL_18:
    sub_B7076C(downloadlist, path);
  }
  downloadlist = this->fields.loadedList;
  if ( !downloadlist )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)downloadlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)path,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  downloadlist = this->fields.loadlist;
  if ( !downloadlist )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)downloadlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)path,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_ServantAssetLoadManager_endloadList__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_31203356(path, 20, v9, 0LL);
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

  if ( (byte_4352C5D & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    byte_4352C5D = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(path, 0LL) )
    ServantAssetLoadManager__setLoadList(this, path, dlOnly, v7);
}


void __fastcall ServantAssetLoadManager__unloadActorMotion(int32_t weapongroup, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4352C9E & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C9E = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  ServantAssetLoadManager__unloadActorMotionlocal(Instance, weapongroup, v5);
}


void __fastcall ServantAssetLoadManager__unloadActorMotionlocal(
        ServantAssetLoadManager_o *this,
        int32_t weapongroup,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadedList; // x0
  __int64 v6; // x1
  WarBoardManager_TaskList_o *v7; // x20
  AssetData_o *AssetStorage; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = weapongroup;
  if ( (byte_4352C9F & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Remove__);
    sub_B70694(&StringLiteral_12913/*"Servants/Motion/"*/);
    byte_4352C9F = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v9, 0LL);
  loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_String__Concat_44758168(
                                                                                (System_String_o *)StringLiteral_12913/*"Servants/Motion/"*/,
                                                                                v4,
                                                                                0LL);
  if ( !this->fields.loadedList )
    goto LABEL_11;
  v7 = (WarBoardManager_TaskList_o *)loadedList;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)loadedList,
         (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( loadedList )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadedList,
        v7,
        (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_7;
    }
LABEL_11:
    sub_B7076C(loadedList, v6);
  }
LABEL_7:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v7, 0LL);
  AssetManager__releaseAsset_31197044(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadAssets(const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4352CB4 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352CB4 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v2);
  ServantAssetLoadManager__unloadAssetsLocal(Instance, v2);
}


void __fastcall ServantAssetLoadManager__unloadAssetsLocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  Il2CppObject *current; // x20
  AssetData_o *AssetStorage; // x20
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4352CB5 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4352CB5 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)loadedList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v6,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v6.fields.current;
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
      AssetManager__releaseAsset_31197044(AssetStorage, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  loadedList = this->fields.loadedList;
  if ( !loadedList )
LABEL_16:
    sub_B7076C(loadedList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadedList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall ServantAssetLoadManager__unloadBattleActor(ServantAssetArgs_o *args, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_4352C7B & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C7B = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_B7076C(Instance, v4);
  ServantAssetLoadManager__unloadBattleActorlocal(
    Instance,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadBattleActorlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *ActorFolderName; // x0
  __int64 v10; // x1
  WarBoardManager_TaskList_o *v11; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4352C7C & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Remove__);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_4352C7C = 1;
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
  v11 = (WarBoardManager_TaskList_o *)ActorFolderName;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)ActorFolderName,
         (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    ActorFolderName = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( ActorFolderName )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        ActorFolderName,
        v11,
        (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_12;
    }
LABEL_16:
    sub_B7076C(ActorFolderName, v10);
  }
LABEL_12:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v11, 0LL);
  AssetManager__releaseAsset_31197044(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadCameraAction(int32_t cameraId, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4352CBA & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352CBA = 1;
  }
  if ( cameraId )
  {
    Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v4);
    ServantAssetLoadManager__unloadCameraActionlocal(Instance, cameraId, v5);
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

  if ( (byte_4352CBB & 1) == 0 )
  {
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_4352CBB = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, *(const MethodInfo **)&cameraId);
  ServantAssetLoadManager__unloadTargetPathAssetLocal(this, CameraActionPath, v6);
}


void __fastcall ServantAssetLoadManager__unloadCommandCard(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4352C4C & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C4C = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v5);
  ServantAssetLoadManager__unloadCommandCardlocal(Instance, svtId, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadCommandCardlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *CommandCardLoadFolderName; // x0
  __int64 v7; // x1
  WarBoardManager_TaskList_o *v8; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4352C4D & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Remove__);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_4352C4D = 1;
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
  v8 = (WarBoardManager_TaskList_o *)CommandCardLoadFolderName;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)CommandCardLoadFolderName,
         (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    CommandCardLoadFolderName = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( CommandCardLoadFolderName )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        CommandCardLoadFolderName,
        v8,
        (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_10;
    }
LABEL_14:
    sub_B7076C(CommandCardLoadFolderName, v7);
  }
LABEL_10:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v8, 0LL);
  AssetManager__releaseAsset_31197044(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadCommandSpellAnyVoice(const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4352C70 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C70 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v2);
  ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal(Instance, v2);
}


void __fastcall ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v3; // x1
  int v4; // w8
  _DWORD *v5; // x19
  unsigned int i; // w21
  char *v7; // x23
  CommandSpellEntity_o *v8; // x0
  void **v9; // x23
  CommandSpellEntity_o *v10; // t1
  SoundManager_o *v11; // x20
  __int64 v12; // x0

  if ( (byte_4352C71 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_B70694(&Method_DataMasterBase_getEntitys_CommandSpellEntity___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4352C71 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL
    || (Instance = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                     (DataMasterBase_o *)Instance,
                     (const MethodInfo_1CA3E74 *)Method_DataMasterBase_getEntitys_CommandSpellEntity___)) == 0LL )
  {
LABEL_21:
    sub_B7076C(Instance, v3);
  }
  v4 = *((_DWORD *)Instance + 6);
  v5 = Instance;
  if ( v4 >= 1 )
  {
    for ( i = 0; (int)i < v4; ++i )
    {
      if ( i >= v4 )
      {
LABEL_20:
        v12 = sub_B70798(Instance);
        sub_B70738(v12, 0LL);
      }
      v7 = (char *)&v5[2 * i];
      v10 = (CommandSpellEntity_o *)*((_QWORD *)v7 + 4);
      v9 = (void **)(v7 + 32);
      v8 = v10;
      if ( !v10 )
        return;
      Instance = (void *)CommandSpellEntity__isUseBattle(v8, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( i >= v5[6] )
          goto LABEL_20;
        Instance = *v9;
        if ( !*v9 )
          goto LABEL_21;
        Instance = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
        if ( Instance )
        {
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
          if ( i >= v5[6] )
            goto LABEL_20;
          v11 = (SoundManager_o *)Instance;
          Instance = *v9;
          if ( !*v9 )
            goto LABEL_21;
          Instance = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
          if ( !v11 )
            goto LABEL_21;
          SoundManager__ReleaseAudioAssetStorage(v11, (System_String_o *)Instance, 0LL);
        }
      }
      v4 = v5[6];
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadFromDeckServant(
        BattleDeckServantData_o *deckSvt,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4352CC8 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352CC8 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  ServantAssetLoadManager__unloadFromDeckServantlocal(Instance, deckSvt, v5);
}


void __fastcall ServantAssetLoadManager__unloadFromDeckServantlocal(
        ServantAssetLoadManager_o *this,
        BattleDeckServantData_o *deckSvt,
        const MethodInfo *method)
{
  int32_t EnemyNameEffect; // w0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  WarBoardManager_TaskList_o *NameEffectPath; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4352CC9 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Remove__);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_4352CC9 = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0LL);
    if ( EnemyNameEffect )
    {
      v7 = EnemyNameEffect;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      NameEffectPath = (WarBoardManager_TaskList_o *)ServantAssetLoadManager__getNameEffectPath(v7, v6);
      if ( this->fields.loadedList )
      {
        v10 = (System_String_o *)NameEffectPath;
        if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
                NameEffectPath,
                (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
LABEL_12:
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          AssetStorage = AssetManager__getAssetStorage(v10, 0LL);
          AssetManager__releaseAsset_31197044(AssetStorage, 0LL);
          return;
        }
        NameEffectPath = (WarBoardManager_TaskList_o *)this->fields.loadedList;
        if ( NameEffectPath )
        {
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)NameEffectPath,
            (WarBoardManager_TaskList_o *)v10,
            (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_string__Remove__);
          goto LABEL_12;
        }
      }
      sub_B7076C(NameEffectPath, v9);
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadServant(ServantAssetArgs_o *args, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4352C64 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C64 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  ServantAssetLoadManager__unloadServantlocal(Instance, args, v5);
}


void __fastcall ServantAssetLoadManager__unloadServantVoice(
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4352C68 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C68 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v8);
  ServantAssetLoadManager__unloadServantVoicelocal(Instance, svtId, limitCount, overwriteSvtVoiceId, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadServantVoicelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  int32_t VoiceId; // w0
  int32_t v10; // w8
  SoundManager_o *Instance; // x19
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4352C69 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_B70694(&StringLiteral_12916/*"Servants_"*/);
    byte_4352C69 = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v10 = overwriteSvtVoiceId;
  else
    v10 = VoiceId;
  v15 = v10;
  if ( v10 )
  {
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v12 = System_Int32__ToString((int32_t)&v15, 0LL);
    v13 = System_String__Concat_44758168((System_String_o *)StringLiteral_12916/*"Servants_"*/, v12, 0LL);
    if ( !Instance )
      sub_B7076C(v13, v14);
    SoundManager__ReleaseAudioAssetStorage(Instance, v13, 0LL);
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
    sub_B7076C(this, 0LL);
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
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4352C6C & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C6C = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  ServantAssetLoadManager__unloadSkillAnyVoiceLocal(Instance, skillInfo, v5);
}


void __fastcall ServantAssetLoadManager__unloadSkillAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x20
  System_String_o *VoiceAssetName; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v10; // x19
  SoundManager_o *Instance; // x20

  if ( (byte_4352C6D & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4352C6D = 1;
  }
  if ( skillInfo
    && ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
         skillInfo,
         skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
         method)
    && skillInfo->fields.skilllv )
  {
    v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
      sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v6 = **(_QWORD **)(v5 + 192);
    if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
      sub_B08394(v6);
    VoiceAssetName = **(System_String_o ***)(v6 + 184);
    if ( !VoiceAssetName )
      goto LABEL_17;
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)VoiceAssetName,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
      v10 = Entity;
      if ( SkillLvEntity__getVoiceAssetName(Entity, 0LL) )
      {
        Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        VoiceAssetName = SkillLvEntity__getVoiceAssetName(v10, 0LL);
        if ( Instance )
        {
          SoundManager__ReleaseAudioAssetStorage(Instance, VoiceAssetName, 0LL);
          return;
        }
LABEL_17:
        sub_B7076C(VoiceAssetName, v4);
      }
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadSkillCutIn(BattleSkillInfoData_o *skillInfo, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4352C9A & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C9A = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  ServantAssetLoadManager__unloadSkillCutInLocal(Instance, skillInfo, v5);
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


void __fastcall ServantAssetLoadManager__unloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4352C54 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C54 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v6);
  ServantAssetLoadManager__unloadStatusFacelocal(Instance, svtId, limitCount, v7);
}


void __fastcall ServantAssetLoadManager__unloadStatusFacelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int32_t v7; // w1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_WarBoardManager_TaskList__o *StatusImageFolderName; // x0
  __int64 v10; // x1
  WarBoardManager_TaskList_o *v11; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4352C55 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Remove__);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_4352C55 = 1;
  }
  ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, method);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  StatusImageFolderName = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)ServantAssetLoadManager__getStatusImageFolderName(
                                                                                           svtId,
                                                                                           v7,
                                                                                           v8);
  if ( !this->fields.loadedList )
    goto LABEL_14;
  v11 = (WarBoardManager_TaskList_o *)StatusImageFolderName;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)StatusImageFolderName,
         (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    StatusImageFolderName = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( StatusImageFolderName )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        StatusImageFolderName,
        v11,
        (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_10;
    }
LABEL_14:
    sub_B7076C(StatusImageFolderName, v10);
  }
LABEL_10:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v11, 0LL);
  AssetManager__releaseAsset_31197044(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssetLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  AssetData_o *v7; // x19

  if ( (byte_4352C96 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Remove__);
    byte_4352C96 = 1;
  }
  loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_16;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         loadedList,
         (WarBoardManager_TaskList_o *)path,
         (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( loadedList )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadedList,
        (WarBoardManager_TaskList_o *)path,
        (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_7;
    }
LABEL_16:
    sub_B7076C(loadedList, path);
  }
LABEL_7:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
  {
    v7 = AssetStorage;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_31197044(v7, 0LL);
  }
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssets(
        System_String_array *pathList,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4352C95 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C95 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal(Instance, pathList, v5);
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
    sub_B7076C(this, 0LL);
  v3 = *(_QWORD *)&pathList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
      {
        v7 = sub_B70798(this);
        sub_B70738(v7, 0LL);
      }
      ServantAssetLoadManager__unloadTargetPathAssetLocal(this, pathList->m_Items[v6], method);
      LODWORD(v3) = pathList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v3 );
  }
}


void __fastcall ServantAssetLoadManager__unloadWeaponGroupEffect(
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4352C8F & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4352C8F = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v6);
  ServantAssetLoadManager__unloadWeaponGroupEffectlocal(Instance, weapongroup, effectFolder, v7);
}


void __fastcall ServantAssetLoadManager__unloadWeaponGroupEffectlocal(
        ServantAssetLoadManager_o *this,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  int32_t v12; // [xsp+8h] [xbp-18h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  v12 = effectFolder;
  v13 = weapongroup;
  if ( (byte_4352C90 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Remove__);
    sub_B70694(&StringLiteral_5954/*"Effect/weapon/"*/);
    sub_B70694(&StringLiteral_890/*"/"*/);
    byte_4352C90 = 1;
  }
  v6 = System_Int32__ToString((int32_t)&v13, 0LL);
  v8 = System_String__Concat_44758168((System_String_o *)StringLiteral_5954/*"Effect/weapon/"*/, v6, 0LL);
  if ( effectFolder )
  {
    v9 = System_Int32__ToString((int32_t)&v12, 0LL);
    v8 = System_String__Concat_44760452(v8, (System_String_o *)StringLiteral_890/*"/"*/, v9, 0LL);
  }
  loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_13;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         loadedList,
         (WarBoardManager_TaskList_o *)v8,
         (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( loadedList )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadedList,
        (WarBoardManager_TaskList_o *)v8,
        (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_9;
    }
LABEL_13:
    sub_B7076C(loadedList, v7);
  }
LABEL_9:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v8, 0LL);
  AssetManager__releaseAsset_31197044(AssetStorage, 0LL);
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
  ServantAssetLoadManager__GetAheadBg_d__154_o *v2; // x19
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  struct WellFired_USFGOChangeBgEvent_array *bgList; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x22
  ServantAssetLoadManager__GetAheadBg_d__154_o **p_bgAheadList_5__2; // x21
  struct WellFired_USFGOChangeBgEvent_array *v8; // x22
  int max_length; // w8
  unsigned int v10; // w23
  __int64 v11; // x1
  System_String_o *v12; // x1
  System_String_o *v13; // x22
  AssetLoader_LoadEndDataHandler_o *v14; // x23
  Il2CppClass *klass; // x9
  bool result; // w0
  __int64 v17; // x0
  UnityEngine_WaitForEndOfFrame_o *v18; // x20
  Il2CppObject **p__2__current; // x19
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_434F212 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_AssetData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__get_Count__);
    sub_B70694(&System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_ServantAssetLoadManager__GetAheadBg_b__154_0__);
    sub_B70694(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    this = (ServantAssetLoadManager__GetAheadBg_d__154_o *)sub_B70694(&StringLiteral_2867/*"Bg/"*/);
    byte_434F212 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  _1__state = v2->fields.__1__state;
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_bgAheadList_5__2 = (ServantAssetLoadManager__GetAheadBg_d__154_o **)&v2->fields._bgAheadList_5__2;
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    bgList = v2->fields.bgList;
    v2->fields.__1__state = -1;
    if ( !bgList )
    {
LABEL_30:
      this = (ServantAssetLoadManager__GetAheadBg_d__154_o *)v2->fields.callback;
      if ( !this )
        goto LABEL_33;
      System_Action__Invoke((System_Action_o *)this, 0LL);
      return 0;
    }
    v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v6,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__);
    v2->fields._bgAheadList_5__2 = (struct System_Collections_Generic_List_USFGOChangeBgEvent__o *)v6;
    p_bgAheadList_5__2 = (ServantAssetLoadManager__GetAheadBg_d__154_o **)&v2->fields._bgAheadList_5__2;
    sub_B70630(&v2->fields._bgAheadList_5__2);
    v8 = v2->fields.bgList;
    if ( !v8 )
      goto LABEL_33;
    max_length = v8->max_length;
    if ( max_length >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= max_length )
        {
          v17 = sub_B70798(this);
          sub_B70738(v17, 0LL);
        }
        method = (const MethodInfo *)v8->m_Items[v10];
        if ( !method )
          break;
        if ( BYTE1(method->rgctx_data) )
        {
          this = *p_bgAheadList_5__2;
          if ( !*p_bgAheadList_5__2 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)method,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__);
        }
        max_length = v8->max_length;
        if ( (int)++v10 >= max_length )
          goto LABEL_15;
      }
LABEL_33:
      sub_B7076C(this, method);
    }
LABEL_15:
    this = *p_bgAheadList_5__2;
    if ( !*p_bgAheadList_5__2 )
      goto LABEL_33;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__);
    v21 = v20;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__) )
    {
      if ( !v21.fields.current )
        sub_B7076C(0LL, v11);
      v12 = (System_String_o *)((__int64 (*)(void))v21.fields.current->klass->vtable[16].method)();
      v13 = System_String__Concat_44758168((System_String_o *)StringLiteral_2867/*"Bg/"*/, v12, 0LL);
      v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(v14, _4__this, Method_ServantAssetLoadManager__GetAheadBg_b__154_0__, 0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__loadAssetStorage(v13, v14, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__);
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
    sub_B70630(p_bgAheadList_5__2);
    goto LABEL_30;
  }
  v18 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v18, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v18;
  p__2__current = &v2->fields.__2__current;
  sub_B70630(p__2__current);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_ServantAssetLoadManager__GetAheadBg_d__154_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  Il2CppObject *v1; // x19
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x0

  if ( (byte_434F210 & 1) == 0 )
  {
    sub_B70694(&ServantAssetLoadManager___c_TypeInfo);
    byte_434F210 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ServantAssetLoadManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantAssetLoadManager___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, data);
  _4__this->fields.nobleSequenceData = data;
  sub_B70630(&_4__this->fields.nobleSequenceData);
  this->fields.isNext = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager___c__DisplayClass152_0___loadNoblePhantasmCoroutine_b__1(
        ServantAssetLoadManager___c__DisplayClass152_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *_4__this; // x0
  UnityEngine_Texture2D_o *AssetObject_Texture2D; // x20
  struct UnityEngine_GameObject_o **p_sequence; // x20
  UnityEngine_Transform_o *v8; // x21
  UnityEngine_Transform_o *transform; // x21
  int v10; // s0
  UnityEngine_Transform_o *v13; // x21
  int v14; // s0
  UnityEngine_Transform_o *v17; // x21
  int v18; // s0
  System_Action_o *_9__2; // x22
  WellFired_USFGOChangeBgEvent_array *v22; // x20
  ServantAssetLoadManager_o *v23; // x21

  if ( (byte_434F211 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_B70694(&Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__2__);
    sub_B70694(&StringLiteral_4037/*"ChrSequence1"*/);
    byte_434F211 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  _4__this->fields.nobleAssetData = assetData;
  sub_B70630(&_4__this->fields.nobleAssetData);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  AssetObject_Texture2D = ServantAssetLoadManager__getAssetObject_Texture2D_(
                            _4__this,
                            this->fields.sequencePath,
                            (System_String_o *)StringLiteral_4037/*"ChrSequence1"*/,
                            (const MethodInfo_1D5C858 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this->fields.sequence = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                                               (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  p_sequence = &this->fields.sequence;
  sub_B70630(&this->fields.sequence);
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
  v8 = (UnityEngine_Transform_o *)_4__this;
  _4__this = (ServantAssetLoadManager_o *)UnityEngine_GameObject__get_transform(this->fields.parent, 0LL);
  if ( !v8 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent(v8, (UnityEngine_Transform_o *)_4__this, 0LL);
  _4__this = (ServantAssetLoadManager_o *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_23;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v10, 0LL);
  _4__this = (ServantAssetLoadManager_o *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_23;
  v13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_up(0LL);
  if ( !v13 )
    goto LABEL_23;
  UnityEngine_Transform__set_eulerAngles(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
  _4__this = (ServantAssetLoadManager_o *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_23;
  v17 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_one(0LL);
  if ( !v17 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
  _4__this = (ServantAssetLoadManager_o *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_23;
  _4__this = (ServantAssetLoadManager_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                                            (UnityEngine_GameObject_o *)_4__this,
                                            (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___);
  _9__2 = this->fields.__9__2;
  v22 = (WellFired_USFGOChangeBgEvent_array *)_4__this;
  v23 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B70630(&this->fields.__9__2);
  }
  if ( !v23 )
LABEL_23:
    sub_B7076C(_4__this, assetData);
  ServantAssetLoadManager__LoadBg(v23, v22, _9__2, 0LL);
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
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *v2; // x19
  struct ServantAssetLoadManager_o *_4__this; // x21
  Il2CppObject *v4; // x22
  Il2CppObject **p__8__1; // x20
  TreasureDeviceSequenceWeightEntity_o *EntityWithCommonPattern; // x0
  int32_t _1__state; // w8
  int v8; // w9
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v9; // x8
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o **v10; // x24
  System_String_o *v11; // x20
  Il2CppObject *v12; // x23
  AssetLoader_LoadEndDataHandler_o *v13; // x22
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *v14; // x8
  UnityEngine_Object_o *v15; // x20
  System_Collections_Generic_List_int__o *v16; // x20
  System_Int32_array *funcId; // x20
  int v18; // w20
  int _2__current; // w8
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *v20; // x20
  __int64 v21; // x22
  Il2CppObject **p__2__current; // x19
  int v23; // w8
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v24; // x8
  UnityEngine_GameObject_o *sequence; // x21
  ServantAssetLoadManager_onGameObjectLoadComplete_o *callback; // x20
  int32_t seqIdFromMstTDSeqWeight_5__2; // w22
  int32_t groupSeqIdFromMstTDSeqWeight_5__3; // w23
  System_Tuple_int__int__o *v29; // x19
  const MethodInfo *v30; // x3
  bool result; // w0
  int32_t limitCount; // w1
  int32_t RandomSeqIdEachLimit; // w0
  Il2CppObject *v34; // x21
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *_8__1; // x8
  System_String_o *sequencePath; // x22
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v39; // x22
  System_String_o *v40; // x0
  System_String_o *nobleDataPath_5__4; // x22
  System_String_o *v42; // x0
  Il2CppObject *v43; // x23
  System_String_o *monitor; // x21
  AssetLoader_LoadEndDataHandler_o *v45; // x22
  int monitor_low; // w20
  __int64 v47; // x0
  TreasureDvcLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_int__o *effectIdList; // [xsp+10h] [xbp-50h] BYREF
  WarEntity_o *v50; // [xsp+18h] [xbp-48h] BYREF
  int32_t v51; // [xsp+2Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_434F213 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B70694(&Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___);
    sub_B70694(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_System_Tuple_int__int___ctor__);
    sub_B70694(&Method_System_Tuple_int__int__get_Item1__);
    sub_B70694(&Method_System_Tuple_int__int__get_Item2__);
    sub_B70694(&System_Tuple_int__int__TypeInfo);
    sub_B70694(&Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__0__);
    sub_B70694(&Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__1__);
    sub_B70694(&ServantAssetLoadManager___c__DisplayClass152_0_TypeInfo);
    sub_B70694(&StringLiteral_9709/*"NoblePhantasm/"*/);
    this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)sub_B70694(&StringLiteral_9711/*"NoblePhantasm/Sequence/"*/);
    byte_434F213 = 1;
  }
  v51 = 0;
  effectIdList = 0LL;
  v50 = 0LL;
  entity = 0LL;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v4 = (Il2CppObject *)sub_B70764(ServantAssetLoadManager___c__DisplayClass152_0_TypeInfo);
      System_Object___ctor(v4, 0LL);
      p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
      v2->fields.__8__1 = (struct ServantAssetLoadManager___c__DisplayClass152_0_o *)v4;
      sub_B70630(&v2->fields.__8__1);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)v2->fields.__8__1;
      if ( !this )
        goto LABEL_108;
      *(_QWORD *)&this->fields.__1__state = v2->fields.__4__this;
      sub_B70630(&this->fields);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)v2->fields.__8__1;
      if ( !this )
        goto LABEL_108;
      *(_QWORD *)&this->fields.treasureDvcId = v2->fields.parent;
      sub_B70630(&this->fields.treasureDvcId);
      if ( !*p__8__1 )
        goto LABEL_108;
      LOBYTE((*p__8__1)[1].monitor) = 0;
      if ( !_4__this )
        goto LABEL_108;
      ServantAssetLoadManager__releaseNoblePhantasm(_4__this, 0LL);
      *(_QWORD *)&v2->fields._seqIdFromMstTDSeqWeight_5__2 = 0LL;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___);
      if ( !this )
        goto LABEL_108;
      EntityWithCommonPattern = TreasureDeviceSequenceWeightMaster__GetEntityWithCommonPattern(
                                  (TreasureDeviceSequenceWeightMaster_o *)this,
                                  v2->fields.treasureDvcId,
                                  v2->fields.limitCount,
                                  v2->fields.npChargeStage,
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
        v2->fields._seqIdFromMstTDSeqWeight_5__2 = _1__state;
        v8 = *(&this->fields.__1__state + 1);
        if ( v8 >= 1 )
          v2->fields._groupSeqIdFromMstTDSeqWeight_5__3 = v8;
        goto LABEL_80;
      }
      _1__state = v2->fields._seqIdFromMstTDSeqWeight_5__2;
      if ( _1__state >= 1 )
        goto LABEL_80;
LABEL_70:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
      if ( !this )
        goto LABEL_108;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
              &v50,
              v2->fields.treasureDvcId,
              (const MethodInfo_21C049C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
      {
        _1__state = v2->fields.treasureDvcId;
LABEL_80:
        v51 = _1__state;
        goto LABEL_83;
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)v50;
      if ( !v50 )
        goto LABEL_108;
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)TreasureDvcEntity__IsRandomTD(
                                                                               (TreasureDvcEntity_o *)v50,
                                                                               0LL);
      if ( !v50 )
        goto LABEL_108;
      limitCount = v2->fields.limitCount;
      if ( ((unsigned __int8)this & 1) != 0 )
        RandomSeqIdEachLimit = TreasureDvcEntity__getRandomSeqIdEachLimit(
                                 (TreasureDvcEntity_o *)v50,
                                 limitCount,
                                 0,
                                 0LL);
      else
        RandomSeqIdEachLimit = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)v50, limitCount, 0LL);
      v51 = RandomSeqIdEachLimit;
LABEL_83:
      v34 = *p__8__1;
      v35 = System_Int32__ToString((int32_t)&v51, 0LL);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)System_String__Concat_44758168(
                                                                               (System_String_o *)StringLiteral_9711/*"NoblePhantasm/Sequence/"*/,
                                                                               v35,
                                                                               0LL);
      if ( !v34 )
        goto LABEL_108;
      v34[2].monitor = this;
      sub_B70630(&v34[2].monitor);
      v36 = System_Int32__ToString((int32_t)&v51, 0LL);
      v2->fields._nobleDataPath_5__4 = System_String__Concat_44758168((System_String_o *)StringLiteral_9709/*"NoblePhantasm/"*/, v36, 0LL);
      sub_B70630(&v2->fields._nobleDataPath_5__4);
      _8__1 = v2->fields.__8__1;
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
        v39 = v2->fields.__8__1;
        v40 = System_Int32__ToString((int)v2 + 60, 0LL);
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)System_String__Concat_44758168(
                                                                                 (System_String_o *)StringLiteral_9711/*"NoblePhantasm/Sequence/"*/,
                                                                                 v40,
                                                                                 0LL);
        if ( !v39 )
          goto LABEL_108;
        v39->fields.sequencePath = (struct System_String_o *)this;
        sub_B70630(&v39->fields.sequencePath);
      }
      nobleDataPath_5__4 = v2->fields._nobleDataPath_5__4;
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
        v42 = System_Int32__ToString((int)v2 + 60, 0LL);
        v2->fields._nobleDataPath_5__4 = System_String__Concat_44758168((System_String_o *)StringLiteral_9709/*"NoblePhantasm/"*/, v42, 0LL);
        sub_B70630(&v2->fields._nobleDataPath_5__4);
      }
      if ( !*p__8__1 )
        goto LABEL_108;
      LOBYTE((*p__8__1)[1].monitor) = 0;
      v43 = *p__8__1;
      if ( !*p__8__1 )
        goto LABEL_108;
      monitor = (System_String_o *)v43[2].monitor;
      v45 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v45,
        v43,
        Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__0__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)AssetManager__loadAssetStorage(
                                                                               monitor,
                                                                               v45,
                                                                               1,
                                                                               0LL);
LABEL_102:
      if ( !*p__8__1 )
        goto LABEL_108;
      monitor_low = LOBYTE((*p__8__1)[1].monitor);
      v2->fields.__2__current = 0LL;
      sub_B70630(&v2->fields.__2__current);
      if ( !monitor_low )
      {
        result = 1;
        v2->fields.__1__state = 1;
        return result;
      }
      v2->fields.__1__state = 2;
      return 1;
    case 1:
      p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
      v2->fields.__1__state = -1;
      goto LABEL_102;
    case 2:
      v10 = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o **)&v2->fields.__8__1;
      v9 = v2->fields.__8__1;
      v2->fields.__1__state = -1;
      if ( !v9 )
        goto LABEL_108;
      v9->fields.isNext = 0;
      this = *v10;
      if ( !*v10 )
        goto LABEL_108;
      this->fields.__4__this = 0LL;
      sub_B70630(&this->fields.__4__this);
      v11 = v2->fields._nobleDataPath_5__4;
      v12 = (Il2CppObject *)v2->fields.__8__1;
      v13 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v13,
        v12,
        Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__1__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)AssetManager__loadAssetStorage(
                                                                               v11,
                                                                               v13,
                                                                               1,
                                                                               0LL);
LABEL_25:
      v14 = *v10;
      if ( !*v10 )
        goto LABEL_108;
      if ( LOBYTE(v14->fields.__2__current) )
      {
        v15 = (UnityEngine_Object_o *)v14->fields.__4__this;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
          goto LABEL_61;
        v16 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v16,
          (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
        effectIdList = v16;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_108;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)this,
                                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
        if ( !this )
          goto LABEL_108;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)TreasureDvcLvMaster__TryGetEntity(
                                                                                 (TreasureDvcLvMaster_o *)this,
                                                                                 &entity,
                                                                                 v2->fields.treasureDvcId,
                                                                                 v2->fields.treasureDvcLv,
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
            sub_B7076C(this, method);
          this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
                                                                                   entity,
                                                                                   0LL);
          if ( (int)this >= 1 )
          {
            v18 = (int)this;
            this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)sub_B706AC(int___TypeInfo, 1LL);
            if ( !this )
              goto LABEL_108;
            method = (const MethodInfo *)this;
            if ( !LODWORD(this->fields.__2__current) )
            {
LABEL_109:
              v47 = sub_B70798(this);
              sub_B70738(v47, 0LL);
            }
            LODWORD(this->fields.__4__this) = v18;
            if ( !_4__this )
              goto LABEL_108;
            this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                                                                     _4__this,
                                                                                     (System_Int32_array *)this,
                                                                                     0LL);
          }
        }
        if ( !*v10 )
          goto LABEL_108;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)(*v10)->fields.__4__this;
        if ( !this )
          goto LABEL_108;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                                                                                 (UnityEngine_GameObject_o *)this,
                                                                                 (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
        if ( this )
        {
          _2__current = (int)this->fields.__2__current;
          v20 = this;
          if ( _2__current >= 1 )
          {
            v21 = 0LL;
            while ( (unsigned int)v21 < _2__current )
            {
              this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)*((_QWORD *)&v20->fields.__4__this
                                                                                     + v21);
              if ( !this )
                goto LABEL_108;
              WellFired_USFGOActorBattleActionEvent__AddHasAllEffectIds(
                (WellFired_USFGOActorBattleActionEvent_o *)this,
                &effectIdList,
                0LL);
              _2__current = (int)v20->fields.__2__current;
              if ( (int)++v21 >= _2__current )
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
                                                                                 (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
          (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_string__AddRange__);
LABEL_56:
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        if ( ServantAssetLoadManager__checkLoad(0LL) )
        {
          v2->fields.__2__current = 0LL;
          p__2__current = &v2->fields.__2__current;
          sub_B70630(p__2__current);
          v23 = 4;
        }
        else
        {
LABEL_61:
          v2->fields.__2__current = 0LL;
          p__2__current = &v2->fields.__2__current;
          sub_B70630(p__2__current);
          v23 = 5;
        }
      }
      else
      {
        v2->fields.__2__current = 0LL;
        p__2__current = &v2->fields.__2__current;
        sub_B70630(p__2__current);
        v23 = 3;
      }
      *((_DWORD *)p__2__current - 2) = v23;
      return 1;
    case 3:
      v10 = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o **)&v2->fields.__8__1;
      v2->fields.__1__state = -1;
      goto LABEL_25;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_56;
    case 5:
      v24 = v2->fields.__8__1;
      v2->fields.__1__state = -1;
      if ( !v24 )
        goto LABEL_108;
      sequence = v24->fields.sequence;
      callback = v2->fields.callback;
      seqIdFromMstTDSeqWeight_5__2 = v2->fields._seqIdFromMstTDSeqWeight_5__2;
      groupSeqIdFromMstTDSeqWeight_5__3 = v2->fields._groupSeqIdFromMstTDSeqWeight_5__3;
      v29 = (System_Tuple_int__int__o *)sub_B70764(System_Tuple_int__int__TypeInfo);
      System_Tuple_int__int____ctor(
        v29,
        seqIdFromMstTDSeqWeight_5__2,
        groupSeqIdFromMstTDSeqWeight_5__3,
        (const MethodInfo_25DC100 *)Method_System_Tuple_int__int___ctor__);
      if ( !callback )
        goto LABEL_108;
      ServantAssetLoadManager_onGameObjectLoadComplete__Invoke(callback, sequence, v29, v30);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  sub_B70630(p_method);
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
  return (System_IAsyncResult_o *)sub_B70638(this, v7, callback, object);
}


void __fastcall ServantAssetLoadManager_onGameObjectLoadComplete__EndInvoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
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
        sub_B70750(*(_QWORD *)&v29->fields.extra_arg, obj);
      v33 = sub_B706C4(v30);
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
            v42 = sub_B706BC(v30);
            v43 = sub_B70AC0(v30);
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
                  v25 = sub_B08590(obj, v45, v46);
                }
                v17 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&obj->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))sub_B70744(v17, v30);
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
                  v16 = sub_B08590(obj, class_0, v11);
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
          v35 = sub_B706BC(v30);
          v36 = sub_B70AC0(v30);
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
                v27 = sub_B08590(v31, v38, v39);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))sub_B70744(v24, v30);
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
                v23 = sub_B08590(v31, v19, v18);
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