void __fastcall ServantAssetLoadManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v5; // x19
  struct ServantAssetLoadManager_StaticFields *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct ServantAssetLoadManager_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4187BF1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo, v2);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4187BF1 = 1;
  }
  ServantAssetLoadManager_TypeInfo->static_fields->KeepAssetPlayerServantCount = 3;
  v5 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v5,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__);
  static_fields = ServantAssetLoadManager_TypeInfo->static_fields;
  static_fields->unloadIgnoredAssetArgs = (struct System_Collections_Generic_Dictionary_string__ServantAssetArgs__o *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&static_fields->unloadIgnoredAssetArgs,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = ServantAssetLoadManager_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_1/*""*/;
  v13->wkSpace = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->wkSpace, v14, v15, v16, v17, v18, v19, v20);
}


void __fastcall ServantAssetLoadManager___ctor(ServantAssetLoadManager_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v62; // x20
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7

  if ( (byte_4187BF0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__string___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__Object___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__string__TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__Object__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetData___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v9);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_List_AssetData__TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__, v12);
    byte_4187BF0 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.loadedList = (struct System_Collections_Generic_List_string__o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.loadedList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.loadlist = (struct System_Collections_Generic_List_string__o *)v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.loadlist,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.downloadlist = (struct System_Collections_Generic_List_string__o *)v27;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.downloadlist,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v34,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__);
  this->fields.ActorVoice = (struct System_Collections_Generic_Dictionary_int__SePlayer__o *)v34;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.ActorVoice,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__string__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v41,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  this->fields.LastActorVoice = (struct System_Collections_Generic_Dictionary_int__string__o *)v41;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.LastActorVoice,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v48;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.bgAssetDataList,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.nobleEffectList = (struct System_Collections_Generic_List_string__o *)v55;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.nobleEffectList,
    (System_Int32_array **)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.InitPoint.fields.z = 0.0;
  *(_QWORD *)&this->fields.InitPoint.fields.x = 0x3D4CCCCD00000000LL;
  v62 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__Object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v62,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__Object___ctor__);
  this->fields._releaseAssets = (struct System_Collections_Generic_Dictionary_string__Object__o *)v62;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._releaseAssets,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__);
}


bool __fastcall ServantAssetLoadManager__CheckLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadlist; // x0

  if ( (byte_4187BEA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, path);
    byte_4187BEA = 1;
  }
  loadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadlist;
  if ( !loadlist )
    sub_B2C434(0LL, path);
  return System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           loadlist,
           (WarBoardManager_TaskList_o *)path,
           (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__);
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
    sub_B2C434(this, data);
  svtmaster = (int)this->fields.svtmaster;
  if ( svtmaster >= 1 )
  {
    for ( i = 0; i < svtmaster; ++i )
    {
      if ( i >= (unsigned int)svtmaster )
      {
        v5 = sub_B2C460(this);
        sub_B2C400(v5, 0LL);
      }
    }
  }
}


void __fastcall ServantAssetLoadManager__DownLoadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4187B85 & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, method);
    byte_4187B85 = 1;
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
  __int64 v11; // x1
  ServantAssetLoadManager_c *v12; // x0
  ServantAssetArgs_o *currentValue; // x19
  int32_t v14; // w22
  const MethodInfo *v15; // x1
  _BOOL8 v16; // x0
  ServantAssetLoadManager_c *v17; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v19; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4187BE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__, v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__,
      v4);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__get_Current__,
      v6);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__,
      v9);
    byte_4187BE9 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  this->fields._IsRetryTransition_k__BackingField = 0;
  Instance = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  LODWORD(Instance[1].fields.values) = 3;
  v12 = ServantAssetLoadManager_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v12 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)v12->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
    goto LABEL_24;
  Instance = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                          Instance,
                                                                                          (const MethodInfo_2DB1A64 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__);
  if ( !Instance )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_29C7178 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v16 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v19,
            (const MethodInfo_27541F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__);
    if ( !v16 )
      break;
    currentValue = (ServantAssetArgs_o *)v19.fields.currentValue;
    if ( !v19.fields.currentValue )
      sub_B2C434(v16, v15);
    if ( SLODWORD(v19.fields.currentValue[5].monitor) >= 1 )
    {
      v14 = 0;
      do
      {
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        ServantAssetLoadManager__UnloadAssetsByArgs(currentValue, v15);
        ++v14;
      }
      while ( v14 < currentValue->fields._UnloadCount_k__BackingField );
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v19,
    (const MethodInfo_27541EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__);
  v17 = ServantAssetLoadManager_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v17 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)v17->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
LABEL_24:
    sub_B2C434(Instance, v11);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Instance,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__);
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

  if ( (byte_4187B9D & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4187B9D = 1;
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
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4187BCA & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_4187BCA = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v10);
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
  __int64 v25; // x1
  int32_t v27; // [xsp+8h] [xbp-38h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4187BCB & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
    sub_B2C35C(&Voice_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_23499/*"{0:D0}_{1}"*/, v13);
    sub_B2C35C(&StringLiteral_12739/*"Servants_"*/, v14);
    byte_4187BCB = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, *(const MethodInfo **)&overwriteSvtVoiceId);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v16);
  if ( overwriteSvtVoiceId )
    v18 = overwriteSvtVoiceId;
  else
    v18 = VoiceId;
  v27 = VoicePrefix;
  v28 = v18;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = (Il2CppObject *)Voice__getFileName(type, 0LL);
  v21 = System_String__Format_44301068((System_String_o *)StringLiteral_23499/*"{0:D0}_{1}"*/, v19, FileName, 0LL);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v23 = System_Int32__ToString((int32_t)&v28, 0LL);
  v24 = System_String__Concat_44305532((System_String_o *)StringLiteral_12739/*"Servants_"*/, v23, 0LL);
  if ( !Instance )
    sub_B2C434(v24, v25);
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

  if ( (byte_4187BD5 & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager__GetAheadBg_d__154_TypeInfo, bgList);
    byte_4187BD5 = 1;
  }
  v7 = sub_B2C42C(ServantAssetLoadManager__GetAheadBg_d__154_TypeInfo);
  ServantAssetLoadManager__GetAheadBg_d__154___ctor((ServantAssetLoadManager__GetAheadBg_d__154_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = bgList;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)bgList, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


System_String_o *__fastcall ServantAssetLoadManager__GetCommandCodeFolderName(
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4187BE7 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&StringLiteral_4165/*"CommandCodes/Texture/"*/, v3);
    byte_4187BE7 = 1;
  }
  v6 = commandCodeId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_4165/*"CommandCodes/Texture/"*/, v4, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__GetLastVoiceType(int32_t uniqueId, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4187BCE & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4187BCE = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return ServantAssetLoadManager__GetLastVoiceTypeLocal(Instance, uniqueId, v5);
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

  if ( (byte_4187BCF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__, *(_QWORD *)&uniqueId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__string__get_Item__, v5);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v6);
    byte_4187BCF = 1;
  }
  LastActorVoice = this->fields.LastActorVoice;
  if ( !LastActorVoice )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)LastActorVoice,
         uniqueId,
         (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__) )
  {
    LastActorVoice = this->fields.LastActorVoice;
    if ( LastActorVoice )
      return (System_String_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)LastActorVoice,
                                  uniqueId,
                                  (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__string__get_Item__);
LABEL_11:
    sub_B2C434(LastActorVoice, *(_QWORD *)&uniqueId);
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
  if ( (byte_4187B68 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    byte_4187B68 = 1;
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
  __int64 v4; // x1
  WebViewManager_c *klass; // x8
  System_String_o *namespaze; // x19
  System_String_o *FileNameWithoutExtension; // x0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( (byte_4187BEB & 1) == 0 )
  {
    sub_B2C35C(&System_IO_Path_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v2);
    byte_4187BEB = 1;
  }
  result = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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

  if ( (byte_4187BC7 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&servantId);
    sub_B2C35C(&StringLiteral_23499/*"{0:D0}_{1}"*/, v9);
    byte_4187BC7 = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, servantId, limitCount, (const MethodInfo *)voiceId);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &VoicePrefix);
  return System_String__Format_44301068((System_String_o *)StringLiteral_23499/*"{0:D0}_{1}"*/, v10, (Il2CppObject *)voiceId, 0LL);
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

  if ( (byte_4187B9C & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4187B9C = 1;
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
      return ServantAssetLoadManager__getActorFolderName_25332400(v10, *(const MethodInfo **)&svtId);
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
      return ServantAssetLoadManager__getActorFolderName_25332400(v10, *(const MethodInfo **)&svtId);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantAssetLoadManager___c_c *v9; // x0
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__95_0; // x20
  Il2CppObject *v12; // x21
  struct ServantAssetLoadManager___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  changeVColor_array *v20; // x0
  __int64 v21; // x8
  Il2CppObject *v22; // x19
  __int64 v24; // x0

  if ( (byte_4187BA3 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleServantDeadComponent_getReplaceChocoShader__, method);
    sub_B2C35C(&Method_System_Func_Shader__Shader__Shader___ctor__, v3);
    sub_B2C35C(&System_Func_Shader__Shader__Shader__TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__95_0__, v7);
    sub_B2C35C(&ServantAssetLoadManager___c_TypeInfo, v8);
    byte_4187BA3 = 1;
  }
  v9 = ServantAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo);
    v9 = ServantAssetLoadManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__95_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__95_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B2C42C(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__95_0,
      v12,
      Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__95_0__,
      (const MethodInfo_271CD04 *)Method_System_Func_Shader__Shader__Shader___ctor__);
    v13 = ServantAssetLoadManager___c_TypeInfo->static_fields;
    v13->__9__95_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__95_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__95_0,
      (System_Int32_array **)_9__95_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !obj )
    sub_B2C434(v9, method);
  v20 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
          obj,
          (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( v20 && (v21 = *(_QWORD *)&v20->max_length) != 0 )
  {
    if ( !(_DWORD)v21 )
    {
      v24 = sub_B2C460(v20);
      sub_B2C400(v24, 0LL);
    }
    v22 = (Il2CppObject *)v20->m_Items[0];
  }
  else
  {
    v22 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL) )
  {
    _9__95_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B2C42C(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__95_0,
      v22,
      Method_BattleServantDeadComponent_getReplaceChocoShader__,
      (const MethodInfo_271CD04 *)Method_System_Func_Shader__Shader__Shader___ctor__);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__95_0;
}


System_Func_Shader__Shader__Shader__o *__fastcall ServantAssetLoadManager__GetReplaceDeadShaderFunc(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantAssetLoadManager___c_c *v9; // x0
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__94_0; // x20
  Il2CppObject *v12; // x21
  struct ServantAssetLoadManager___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  changeVColor_array *v20; // x0
  __int64 v21; // x8
  Il2CppObject *v22; // x19
  __int64 v24; // x0

  if ( (byte_4187BA2 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleServantDeadComponent_getReplaceDeadShader__, method);
    sub_B2C35C(&Method_System_Func_Shader__Shader__Shader___ctor__, v3);
    sub_B2C35C(&System_Func_Shader__Shader__Shader__TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__94_0__, v7);
    sub_B2C35C(&ServantAssetLoadManager___c_TypeInfo, v8);
    byte_4187BA2 = 1;
  }
  v9 = ServantAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo);
    v9 = ServantAssetLoadManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__94_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)static_fields->__9__94_0;
  if ( !_9__94_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__94_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B2C42C(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__94_0,
      v12,
      Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__94_0__,
      (const MethodInfo_271CD04 *)Method_System_Func_Shader__Shader__Shader___ctor__);
    v13 = ServantAssetLoadManager___c_TypeInfo->static_fields;
    v13->__9__94_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__94_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__94_0,
      (System_Int32_array **)_9__94_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !obj )
    sub_B2C434(v9, method);
  v20 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
          obj,
          (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( v20 && (v21 = *(_QWORD *)&v20->max_length) != 0 )
  {
    if ( !(_DWORD)v21 )
    {
      v24 = sub_B2C460(v20);
      sub_B2C400(v24, 0LL);
    }
    v22 = (Il2CppObject *)v20->m_Items[0];
  }
  else
  {
    v22 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL) )
  {
    _9__94_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B2C42C(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__94_0,
      v22,
      Method_BattleServantDeadComponent_getReplaceDeadShader__,
      (const MethodInfo_271CD04 *)Method_System_Func_Shader__Shader__Shader___ctor__);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__94_0;
}


bool __fastcall ServantAssetLoadManager__IsIgnoreUnloadServant(BattleServantData_o *data, const MethodInfo *method)
{
  BattleServantData_o *v2; // x19
  int32_t uniqueId; // w19
  ServantAssetLoadManager_c *v5; // x0

  v2 = data;
  if ( (byte_4187B8A & 1) == 0 )
  {
    data = (BattleServantData_o *)sub_B2C35C(&ServantAssetLoadManager_TypeInfo, method);
    byte_4187B8A = 1;
  }
  if ( !v2 )
    sub_B2C434(data, method);
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
  __int64 v7; // x1
  struct UIPanel_o *basePanel; // x8
  __int64 v9; // x11
  UnityEngine_Object_o *v10; // x19
  _BYTE *monitor; // x8

  if ( (byte_4187BE8 & 1) == 0 )
  {
    sub_B2C35C(&BattleRootComponent_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v2);
    sub_B2C35C(&OptionManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_B2C35C(&StringLiteral_6360/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, v5);
    byte_4187BE8 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6360/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, 0LL) > 0 )
    return 0;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  basePanel = Instance->fields.basePanel;
  if ( basePanel
    && (v9 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
        *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
  {
    if ( (BattleRootComponent_c *)basePanel->klass->_2.typeHierarchy[v9 - 1] == BattleRootComponent_TypeInfo )
      v10 = (UnityEngine_Object_o *)Instance->fields.basePanel;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (WebViewManager_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    return 0;
  if ( !v10 || (monitor = v10[2].monitor) == 0LL )
LABEL_23:
    sub_B2C434(Instance, v7);
  return monitor[700];
}


bool __fastcall ServantAssetLoadManager__IsStop(int32_t uniqueId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4187BD2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4);
    byte_4187BD2 = 1;
  }
  Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance->fields._syncRoot;
  if ( !Instance )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Instance,
         uniqueId,
         (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance->fields._syncRoot;
      if ( Instance )
      {
        Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(Instance, uniqueId, (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        if ( Instance )
          return LOBYTE(Instance->fields.freeList) != 0;
      }
    }
LABEL_11:
    sub_B2C434(Instance, v6);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, AheadBg, 0LL);
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
  __int64 v16; // x1
  UnityEngine_MonoBehaviour_o *v17; // x26
  System_Collections_IEnumerator_o *Manager__loadNoblePhantasmCoroutine; // x1
  const MethodInfo *v19; // [xsp+0h] [xbp-50h]

  if ( (byte_4187BD3 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4187BD3 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v16);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35309748(v17, Manager__loadNoblePhantasmCoroutine, 0LL);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3
  int Weapon_k__BackingField; // w21
  int WeaponEffectId_k__BackingField; // w21
  int32_t EffectFolder_k__BackingField; // w22
  int32_t CameraId_k__BackingField; // w21
  const MethodInfo *v15; // x2
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillList_k__BackingField; // x20
  __int64 size; // x8
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x9

  if ( (byte_4187B84 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, dlOnly);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v5);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v6);
    byte_4187B84 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__preloadServant(args, dlOnly, method);
  if ( !args )
    sub_B2C434(v7, v8);
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__preloadActorMotion(Weapon_k__BackingField, dlOnly, v9);
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
      v10);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__preloadCameraAction(CameraId_k__BackingField, dlOnly, v9);
  ServantAssetLoadManager__preloadFromDeckServant(args->fields._deckSvt_k__BackingField, dlOnly, v15);
  skillList_k__BackingField = args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField )
  {
    LODWORD(size) = skillList_k__BackingField->fields._size;
    if ( (int)size >= 1 )
    {
      v18 = 4LL;
      do
      {
        if ( v18 - 4 >= (unsigned __int64)(unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v19 = *((_QWORD *)&skillList_k__BackingField->fields._items->obj.klass + v18);
        if ( v19 )
        {
          if ( v18 - 4 >= (unsigned __int64)(unsigned int)skillList_k__BackingField->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)v19 + 440LL))(
            v19,
            dlOnly,
            *(_QWORD *)(*(_QWORD *)v19 + 448LL));
        }
        size = skillList_k__BackingField->fields._size;
        v20 = v18 - 3;
        ++v18;
      }
      while ( v20 < size );
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

  if ( (byte_4187BD0 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4187BD0 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  ServantAssetLoadManager__localStopVoice(Instance, uniqueId, fadeoutTime, v7);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *monitor; // x20
  const MethodInfo *v10; // x1
  ServantAssetLoadManager_c *v11; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *unloadIgnoredAssetArgs; // x20
  ServantAssetLoadManager_c *v13; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v14; // x20

  if ( (byte_4187B87 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__, v4);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    byte_4187B87 = 1;
  }
  Instance = (System_Xml_XmlQualifiedName_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
      Instance = (System_Xml_XmlQualifiedName_o *)ServantAssetArgs__get_UniqueKey(args, v8);
      if ( monitor )
      {
        if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                monitor,
                Instance,
                (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__) )
        {
          v11 = ServantAssetLoadManager_TypeInfo;
          if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            v11 = ServantAssetLoadManager_TypeInfo;
          }
          unloadIgnoredAssetArgs = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v11->static_fields->unloadIgnoredAssetArgs;
          Instance = (System_Xml_XmlQualifiedName_o *)ServantAssetArgs__get_UniqueKey(args, v10);
          if ( !unloadIgnoredAssetArgs )
            goto LABEL_23;
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            unloadIgnoredAssetArgs,
            Instance,
            (System_Xml_Schema_XmlSchemaObject_o *)args,
            (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__);
        }
        v13 = ServantAssetLoadManager_TypeInfo;
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          v13 = ServantAssetLoadManager_TypeInfo;
        }
        v14 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v13->static_fields->unloadIgnoredAssetArgs;
        Instance = (System_Xml_XmlQualifiedName_o *)ServantAssetArgs__get_UniqueKey(args, v10);
        if ( v14 )
        {
          Instance = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                        v14,
                                                        (System_Type_o *)Instance,
                                                        (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__);
          if ( Instance )
          {
            ++LODWORD(Instance[2].monitor);
            return 1;
          }
        }
      }
    }
LABEL_23:
    sub_B2C434(Instance, v8);
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

  if ( (byte_4187BD7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__Object__get_Value__, v6);
    byte_4187BD7 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  releaseAssets = this->fields._releaseAssets;
  if ( !releaseAssets )
    sub_B2C434(0LL, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    &v8,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)releaseAssets,
    (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v8,
            (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__) )
    UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)v8.fields.current.fields.value, 0LL);
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v8,
    (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__);
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

  if ( (byte_4187B86 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v3);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v4);
    byte_4187B86 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__unloadServant(args, method);
  if ( !args )
    sub_B2C434(v5, v6);
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v16 = *((_QWORD *)&skillList_k__BackingField->fields._items->obj.klass + v15);
        if ( v16 )
        {
          if ( v15 - 4 >= (unsigned __int64)(unsigned int)skillList_k__BackingField->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  if ( (byte_4187BE6 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B2C35C(&ServantAssetLoadManager_TypeInfo, commandCodeIds);
    byte_4187BE6 = 1;
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
          v10 = sub_B2C460(this);
          sub_B2C400(v10, 0LL);
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

  if ( (byte_4187BF2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetData__Add__, data);
    byte_4187BF2 = 1;
  }
  bgAssetDataList = this->fields.bgAssetDataList;
  if ( !bgAssetDataList )
    sub_B2C434(0LL, data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bgAssetDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AssetData__Add__);
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
  __int64 v26; // x1
  UnityEngine_Material_c *klass; // x8
  UnityEngine_Material_o *v28; // x24
  unsigned __int64 v29; // x19
  UnityEngine_Object_o *v30; // x20
  UnityEngine_Shader_o *v31; // x20
  UnityEngine_Texture_o *UIAtlas; // x21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v34; // x1
  UnityEngine_Transform_o *NodeFromName; // x22
  UnityEngine_Material_c *v36; // x8
  System_Func_string__BacktraceData__BacktraceResult__o *v37; // x23
  unsigned __int64 v38; // x27
  UnityEngine_Object_o *v39; // x24
  int v40; // w8
  UnityEngine_Material_o *v41; // x25
  unsigned int v42; // w28
  UnityEngine_Material_c **v43; // x8
  UnityEngine_Material_o *v44; // x26
  UnityEngine_Shader_o *v45; // x0
  int v46; // s0
  float x; // s13
  float y; // s14
  float z; // s15
  float v52; // s13
  float v53; // s14
  float v54; // s15
  float v55; // s13
  float v56; // s14
  float v57; // s15
  float v58; // s13
  __int64 v59; // x0
  UnityEngine_Material_o *v60; // [xsp+8h] [xbp-118h]
  UnityEngine_Bounds_o v61; // [xsp+10h] [xbp-110h] BYREF
  UnityEngine_Bounds_o v62; // [xsp+28h] [xbp-F8h] BYREF
  UnityEngine_Bounds_o v63; // [xsp+40h] [xbp-E0h] BYREF
  UnityEngine_Bounds_o v64; // [xsp+60h] [xbp-C0h] BYREF
  MethodInfo methoda; // [xsp+78h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4187BA5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_Shader__Shader__Shader__Invoke__, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_15950/*"_ClipSharpnessY"*/, v7);
    sub_B2C35C(&StringLiteral_15954/*"_Color"*/, v8);
    sub_B2C35C(&StringLiteral_20070/*"joint_all_Base"*/, v9);
    sub_B2C35C(&StringLiteral_15938/*"_ChocoTex"*/, v10);
    sub_B2C35C(&StringLiteral_23256/*"weapon"*/, v11);
    sub_B2C35C(&StringLiteral_12829/*"Shaders/ChocoMap"*/, v12);
    sub_B2C35C(&StringLiteral_16095/*"_Use_alphawidth"*/, v13);
    sub_B2C35C(&StringLiteral_4518/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, v14);
    sub_B2C35C(&StringLiteral_16879/*"body"*/, v15);
    sub_B2C35C(&StringLiteral_15916/*"_AddColor"*/, v16);
    byte_4187BA5 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  memset(&v64, 0, sizeof(v64));
  memset(&v63, 0, sizeof(v63));
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
  material = (UnityEngine_Material_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                         obj,
                                         (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !material )
    goto LABEL_55;
  klass = material[1].klass;
  v28 = material;
  if ( (int)klass >= 1 )
  {
    v29 = 0LL;
    while ( 1 )
    {
      if ( v29 >= (unsigned int)klass )
        goto LABEL_56;
      v30 = (UnityEngine_Object_o *)*((_QWORD *)&v28[1].monitor + v29);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v30, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
        break;
      LODWORD(klass) = v28[1].klass;
      if ( (__int64)++v29 >= (int)klass )
        goto LABEL_23;
    }
    if ( !v30 )
      goto LABEL_55;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v30, 0LL);
    if ( !material )
      goto LABEL_55;
    if ( UnityEngine_Material__HasProperty_40688736(material, (System_String_o *)StringLiteral_15954/*"_Color"*/, 0LL) )
    {
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v30, 0LL);
      if ( !material )
        goto LABEL_55;
      Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_15954/*"_Color"*/, 0LL);
      r = Color.fields.r;
      g = Color.fields.g;
      b = Color.fields.b;
      a = Color.fields.a;
    }
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v30, 0LL);
    if ( !material )
LABEL_55:
      sub_B2C434(material, v26);
    if ( UnityEngine_Material__HasProperty_40688736(material, (System_String_o *)StringLiteral_15916/*"_AddColor"*/, 0LL) )
    {
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v30, 0LL);
      if ( material )
      {
        v75 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_15916/*"_AddColor"*/, 0LL);
        methoda.methodPointer = *(Il2CppMethodPointer *)&v75.fields.r;
        methoda.invoker_method = *(void **)&v75.fields.b;
        goto LABEL_23;
      }
      goto LABEL_55;
    }
  }
LABEL_23:
  v31 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4518/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, 0LL);
  UIAtlas = (UnityEngine_Texture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                       (System_String_o *)StringLiteral_12829/*"Shaders/ChocoMap"*/,
                                       (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_Texture2D___);
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_20070/*"joint_all_Base"*/, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  material = (UnityEngine_Material_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(obj, v34);
  v36 = v28[1].klass;
  if ( (int)v36 >= 1 )
  {
    v37 = (System_Func_string__BacktraceData__BacktraceResult__o *)material;
    v38 = 0LL;
    v60 = v28;
    while ( 1 )
    {
      if ( v38 >= (unsigned int)v36 )
        goto LABEL_56;
      v39 = (UnityEngine_Object_o *)*((_QWORD *)&v28[1].monitor + v38);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v39, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
      {
        if ( !v39 )
          goto LABEL_55;
        material = (UnityEngine_Material_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v39, 0LL);
        if ( !material )
          goto LABEL_55;
        v40 = (int)material[1].klass;
        v41 = material;
        if ( v40 >= 1 )
          break;
      }
LABEL_53:
      v28 = v60;
      ++v38;
      LODWORD(v36) = v60[1].klass;
      if ( (__int64)v38 >= (int)v36 )
        return;
    }
    v42 = 0;
    while ( v42 < v40 )
    {
      v43 = &v41->klass + (int)v42;
      v44 = (UnityEngine_Material_o *)v43[4];
      if ( !v44 )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v43[4], 0LL);
      if ( !v37 )
        goto LABEL_55;
      v45 = (UnityEngine_Shader_o *)System_Func_string__BacktraceData__BacktraceResult___Invoke(
                                      v37,
                                      (System_String_o *)material,
                                      (Backtrace_Unity_Model_BacktraceData_o *)v31,
                                      (const MethodInfo_271CD18 *)Method_System_Func_Shader__Shader__Shader__Invoke__);
      UnityEngine_Material__set_shader(v44, v45, 0LL);
      v76.fields.r = r;
      v76.fields.g = g;
      v76.fields.b = b;
      v76.fields.a = a;
      UnityEngine_Material__SetColor(v44, (System_String_o *)StringLiteral_15954/*"_Color"*/, v76, 0LL);
      *(_QWORD *)&v77.fields.r = methoda.methodPointer;
      *(_QWORD *)&v77.fields.b = methoda.invoker_method;
      UnityEngine_Material__SetColor(v44, (System_String_o *)StringLiteral_15916/*"_AddColor"*/, v77, 0LL);
      UnityEngine_Material__SetTexture(v44, (System_String_o *)StringLiteral_15938/*"_ChocoTex"*/, UIAtlas, 0LL);
      material = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v39, 0LL);
      if ( !material )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
      if ( !material )
        goto LABEL_55;
      if ( System_String__StartsWith((System_String_o *)material, (System_String_o *)StringLiteral_16879/*"body"*/, 0LL) )
        goto LABEL_46;
      material = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v39, 0LL);
      if ( !material )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
      if ( !material )
        goto LABEL_55;
      if ( System_String__StartsWith((System_String_o *)material, (System_String_o *)StringLiteral_23256/*"weapon"*/, 0LL) )
      {
LABEL_46:
        material = (UnityEngine_Material_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                               (UnityEngine_SkinnedMeshRenderer_o *)v39,
                                               0LL);
        if ( !material )
          goto LABEL_55;
        *(UnityEngine_Vector3_o *)&v46 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)material, 0LL);
        if ( !NodeFromName )
          goto LABEL_55;
        v66 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, *(UnityEngine_Vector3_o *)&v46, 0LL);
        x = v66.fields.x;
        y = v66.fields.y;
        z = v66.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0LL);
        v52 = x - localPosition.fields.x;
        v53 = y - localPosition.fields.y;
        v54 = z - localPosition.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v62, (UnityEngine_SkinnedMeshRenderer_o *)v39, 0LL);
        v63 = v62;
        center = UnityEngine_Bounds__get_center(&v63, 0LL);
        v55 = v52 + center.fields.x;
        v56 = v53 + center.fields.y;
        v57 = v54 + center.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v62, (UnityEngine_SkinnedMeshRenderer_o *)v39, 0LL);
        v63 = v62;
        size = UnityEngine_Bounds__get_size(&v63, 0LL);
        v69.fields.x = v55;
        v69.fields.y = v56;
        v69.fields.z = v57;
        UnityEngine_Bounds___ctor(&v64, v69, size, 0LL);
        v61 = v64;
        UnityEngine_SkinnedMeshRenderer__set_localBounds((UnityEngine_SkinnedMeshRenderer_o *)v39, &v61, 0LL);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v39, NodeFromName, 0LL);
      }
      else
      {
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v62, (UnityEngine_SkinnedMeshRenderer_o *)v39, 0LL);
        v63 = v62;
        v70 = UnityEngine_Bounds__get_center(&v63, 0LL);
        v58 = v70.fields.y;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v62, (UnityEngine_SkinnedMeshRenderer_o *)v39, 0LL);
        v63 = v62;
        extents = UnityEngine_Bounds__get_extents(&v63, 0LL);
        UnityEngine_Material__SetFloat(v44, (System_String_o *)StringLiteral_15950/*"_ClipSharpnessY"*/, v58 - extents.fields.y, 0LL);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Material__HasProperty_40688736(
                                             v44,
                                             (System_String_o *)StringLiteral_16095/*"_Use_alphawidth"*/,
                                             0LL);
      if ( ((unsigned __int8)material & 1) != 0 )
        UnityEngine_Material__SetFloat(v44, (System_String_o *)StringLiteral_16095/*"_Use_alphawidth"*/, 1.0, 0LL);
      v40 = (int)v41[1].klass;
      if ( (int)++v42 >= v40 )
        goto LABEL_53;
    }
LABEL_56:
    v59 = sub_B2C460(material);
    sub_B2C400(v59, 0LL);
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
  __int64 v22; // x1
  UnityEngine_Material_c *klass; // x8
  UnityEngine_Material_o *v24; // x21
  unsigned __int64 v25; // x23
  UnityEngine_Object_o *v26; // x20
  UnityEngine_Shader_o *v27; // x20
  const MethodInfo *v28; // x1
  UnityEngine_Texture_o *UIAtlas; // x21
  System_Func_Shader__Shader__Shader__o *ReplaceChocoShaderFunc; // x22
  UnityEngine_Material_c *v31; // x8
  Il2CppClass *v32; // x9
  unsigned __int64 v33; // x25
  UnityEngine_Object_o *v34; // x23
  int v35; // w8
  UnityEngine_Material_o *v36; // x23
  unsigned int v37; // w28
  UnityEngine_Material_c **v38; // x8
  UnityEngine_Material_o *v39; // x24
  UnityEngine_Shader_o *v40; // x0
  __int64 v41; // x0
  MethodInfo v42; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4187BA6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_Shader__Shader__Shader__Invoke__, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_15954/*"_Color"*/, v7);
    sub_B2C35C(&StringLiteral_15938/*"_ChocoTex"*/, v8);
    sub_B2C35C(&StringLiteral_4517/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v9);
    sub_B2C35C(&StringLiteral_12829/*"Shaders/ChocoMap"*/, v10);
    sub_B2C35C(&StringLiteral_16095/*"_Use_alphawidth"*/, v11);
    sub_B2C35C(&StringLiteral_15916/*"_AddColor"*/, v12);
    byte_4187BA6 = 1;
  }
  v42.methodPointer = 0LL;
  v42.invoker_method = 0LL;
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  white.fields.r = 0.0;
  white.fields.g = 0.0;
  white.fields.b = 0.0;
  white.fields.a = 0.0;
  UnityEngine_Color___ctor(white, v17, v18, v19, v20, &v42);
  if ( !obj )
    goto LABEL_46;
  material = (UnityEngine_Material_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                         obj,
                                         (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !material )
    goto LABEL_46;
  klass = material[1].klass;
  v24 = material;
  if ( (int)klass < 1 )
    goto LABEL_23;
  v25 = 0LL;
  while ( 1 )
  {
    if ( v25 >= (unsigned int)klass )
      goto LABEL_47;
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
    goto LABEL_46;
  material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v26, 0LL);
  if ( !material )
    goto LABEL_46;
  if ( UnityEngine_Material__HasProperty_40688736(material, (System_String_o *)StringLiteral_15954/*"_Color"*/, 0LL) )
  {
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v26, 0LL);
    if ( !material )
      goto LABEL_46;
    Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_15954/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v26, 0LL);
  if ( !material )
LABEL_46:
    sub_B2C434(material, v22);
  if ( UnityEngine_Material__HasProperty_40688736(material, (System_String_o *)StringLiteral_15916/*"_AddColor"*/, 0LL) )
  {
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v26, 0LL);
    if ( !material )
      goto LABEL_46;
    v45 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_15916/*"_AddColor"*/, 0LL);
    v42.methodPointer = *(Il2CppMethodPointer *)&v45.fields.r;
    v42.invoker_method = *(void **)&v45.fields.b;
  }
LABEL_23:
  v27 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4517/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
  UIAtlas = (UnityEngine_Texture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                       (System_String_o *)StringLiteral_12829/*"Shaders/ChocoMap"*/,
                                       (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_Texture2D___);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ReplaceChocoShaderFunc = ServantAssetLoadManager__GetReplaceChocoShaderFunc(obj, v28);
  material = (UnityEngine_Material_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                         obj,
                                         (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !material )
    goto LABEL_46;
  v31 = material[1].klass;
  v32 = (Il2CppClass *)material;
  if ( (int)v31 >= 1 )
  {
    v33 = 0LL;
    v42.klass = (Il2CppClass *)material;
    while ( 1 )
    {
      if ( v33 >= (unsigned int)v31 )
        goto LABEL_47;
      v34 = (UnityEngine_Object_o *)*((_QWORD *)&v32->_1.byval_arg.data + v33);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v34, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
      {
        if ( !v34 )
          goto LABEL_46;
        material = (UnityEngine_Material_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v34, 0LL);
        if ( !material )
          goto LABEL_46;
        v35 = (int)material[1].klass;
        v36 = material;
        if ( v35 >= 1 )
          break;
      }
LABEL_44:
      v32 = v42.klass;
      ++v33;
      LODWORD(v31) = v42.klass->_1.namespaze;
      if ( (__int64)v33 >= (int)v31 )
        return;
    }
    v37 = 0;
    while ( v37 < v35 )
    {
      v38 = &v36->klass + (int)v37;
      v39 = (UnityEngine_Material_o *)v38[4];
      if ( !v39 )
        goto LABEL_46;
      material = (UnityEngine_Material_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v38[4], 0LL);
      if ( !ReplaceChocoShaderFunc )
        goto LABEL_46;
      v40 = (UnityEngine_Shader_o *)System_Func_string__BacktraceData__BacktraceResult___Invoke(
                                      (System_Func_string__BacktraceData__BacktraceResult__o *)ReplaceChocoShaderFunc,
                                      (System_String_o *)material,
                                      (Backtrace_Unity_Model_BacktraceData_o *)v27,
                                      (const MethodInfo_271CD18 *)Method_System_Func_Shader__Shader__Shader__Invoke__);
      UnityEngine_Material__set_shader(v39, v40, 0LL);
      v46.fields.r = r;
      v46.fields.g = g;
      v46.fields.b = b;
      v46.fields.a = a;
      UnityEngine_Material__SetColor(v39, (System_String_o *)StringLiteral_15954/*"_Color"*/, v46, 0LL);
      *(_QWORD *)&v47.fields.r = v42.methodPointer;
      *(_QWORD *)&v47.fields.b = v42.invoker_method;
      UnityEngine_Material__SetColor(v39, (System_String_o *)StringLiteral_15916/*"_AddColor"*/, v47, 0LL);
      UnityEngine_Material__SetTexture(v39, (System_String_o *)StringLiteral_15938/*"_ChocoTex"*/, UIAtlas, 0LL);
      material = (UnityEngine_Material_o *)UnityEngine_Material__HasProperty_40688736(
                                             v39,
                                             (System_String_o *)StringLiteral_16095/*"_Use_alphawidth"*/,
                                             0LL);
      if ( ((unsigned __int8)material & 1) != 0 )
        UnityEngine_Material__SetFloat(v39, (System_String_o *)StringLiteral_16095/*"_Use_alphawidth"*/, 1.0, 0LL);
      v35 = (int)v36[1].klass;
      if ( (int)++v37 >= v35 )
        goto LABEL_44;
    }
LABEL_47:
    v41 = sub_B2C460(material);
    sub_B2C400(v41, 0LL);
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
  __int64 v23; // x1
  UnityEngine_Material_c *klass; // x8
  UnityEngine_Material_o *v25; // x24
  unsigned __int64 v26; // x19
  UnityEngine_Object_o *v27; // x20
  UnityEngine_Shader_o *v28; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v30; // x1
  UnityEngine_Transform_o *NodeFromName; // x21
  UnityEngine_Material_c *v32; // x8
  System_Func_string__BacktraceData__BacktraceResult__o *v33; // x22
  unsigned __int64 v34; // x26
  UnityEngine_Object_o *v35; // x23
  int v36; // w8
  UnityEngine_Material_o *v37; // x24
  unsigned int v38; // w19
  UnityEngine_Material_c **v39; // x8
  UnityEngine_Material_o *v40; // x25
  UnityEngine_Shader_o *v41; // x0
  int v42; // s0
  float x; // s13
  float y; // s14
  float z; // s15
  float v48; // s13
  float v49; // s14
  float v50; // s15
  float v51; // s13
  float v52; // s14
  float v53; // s15
  float v54; // s13
  __int64 v55; // x0
  UnityEngine_Material_o *v56; // [xsp+8h] [xbp-118h]
  UnityEngine_Bounds_o v57; // [xsp+10h] [xbp-110h] BYREF
  UnityEngine_Bounds_o v58; // [xsp+28h] [xbp-F8h] BYREF
  UnityEngine_Bounds_o v59; // [xsp+40h] [xbp-E0h] BYREF
  UnityEngine_Bounds_o v60; // [xsp+60h] [xbp-C0h] BYREF
  MethodInfo methoda; // [xsp+78h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4187BA4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_Shader__Shader__Shader__Invoke__, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_15950/*"_ClipSharpnessY"*/, v6);
    sub_B2C35C(&StringLiteral_4516/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, v7);
    sub_B2C35C(&StringLiteral_15954/*"_Color"*/, v8);
    sub_B2C35C(&StringLiteral_20070/*"joint_all_Base"*/, v9);
    sub_B2C35C(&StringLiteral_23256/*"weapon"*/, v10);
    sub_B2C35C(&StringLiteral_16095/*"_Use_alphawidth"*/, v11);
    sub_B2C35C(&StringLiteral_16879/*"body"*/, v12);
    sub_B2C35C(&StringLiteral_15916/*"_AddColor"*/, v13);
    byte_4187BA4 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  memset(&v60, 0, sizeof(v60));
  memset(&v59, 0, sizeof(v59));
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
  material = (UnityEngine_Material_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                         obj,
                                         (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !material )
    goto LABEL_55;
  klass = material[1].klass;
  v25 = material;
  if ( (int)klass >= 1 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)klass )
        goto LABEL_56;
      v27 = (UnityEngine_Object_o *)*((_QWORD *)&v25[1].monitor + v26);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
        break;
      LODWORD(klass) = v25[1].klass;
      if ( (__int64)++v26 >= (int)klass )
        goto LABEL_23;
    }
    if ( !v27 )
      goto LABEL_55;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v27, 0LL);
    if ( !material )
      goto LABEL_55;
    if ( UnityEngine_Material__HasProperty_40688736(material, (System_String_o *)StringLiteral_15954/*"_Color"*/, 0LL) )
    {
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v27, 0LL);
      if ( !material )
        goto LABEL_55;
      Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_15954/*"_Color"*/, 0LL);
      r = Color.fields.r;
      g = Color.fields.g;
      b = Color.fields.b;
      a = Color.fields.a;
    }
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v27, 0LL);
    if ( !material )
LABEL_55:
      sub_B2C434(material, v23);
    if ( UnityEngine_Material__HasProperty_40688736(material, (System_String_o *)StringLiteral_15916/*"_AddColor"*/, 0LL) )
    {
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v27, 0LL);
      if ( material )
      {
        v71 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_15916/*"_AddColor"*/, 0LL);
        methoda.methodPointer = *(Il2CppMethodPointer *)&v71.fields.r;
        methoda.invoker_method = *(void **)&v71.fields.b;
        goto LABEL_23;
      }
      goto LABEL_55;
    }
  }
LABEL_23:
  v28 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4516/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, 0LL);
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_20070/*"joint_all_Base"*/, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  material = (UnityEngine_Material_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(obj, v30);
  v32 = v25[1].klass;
  if ( (int)v32 >= 1 )
  {
    v33 = (System_Func_string__BacktraceData__BacktraceResult__o *)material;
    v34 = 0LL;
    v56 = v25;
    while ( 1 )
    {
      if ( v34 >= (unsigned int)v32 )
        goto LABEL_56;
      v35 = (UnityEngine_Object_o *)*((_QWORD *)&v25[1].monitor + v34);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v35, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
      {
        if ( !v35 )
          goto LABEL_55;
        material = (UnityEngine_Material_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v35, 0LL);
        if ( !material )
          goto LABEL_55;
        v36 = (int)material[1].klass;
        v37 = material;
        if ( v36 >= 1 )
          break;
      }
LABEL_53:
      v25 = v56;
      ++v34;
      LODWORD(v32) = v56[1].klass;
      if ( (__int64)v34 >= (int)v32 )
        return;
    }
    v38 = 0;
    while ( v38 < v36 )
    {
      v39 = &v37->klass + (int)v38;
      v40 = (UnityEngine_Material_o *)v39[4];
      if ( !v40 )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v39[4], 0LL);
      if ( !v33 )
        goto LABEL_55;
      v41 = (UnityEngine_Shader_o *)System_Func_string__BacktraceData__BacktraceResult___Invoke(
                                      v33,
                                      (System_String_o *)material,
                                      (Backtrace_Unity_Model_BacktraceData_o *)v28,
                                      (const MethodInfo_271CD18 *)Method_System_Func_Shader__Shader__Shader__Invoke__);
      UnityEngine_Material__set_shader(v40, v41, 0LL);
      v72.fields.r = r;
      v72.fields.g = g;
      v72.fields.b = b;
      v72.fields.a = a;
      UnityEngine_Material__SetColor(v40, (System_String_o *)StringLiteral_15954/*"_Color"*/, v72, 0LL);
      *(_QWORD *)&v73.fields.r = methoda.methodPointer;
      *(_QWORD *)&v73.fields.b = methoda.invoker_method;
      UnityEngine_Material__SetColor(v40, (System_String_o *)StringLiteral_15916/*"_AddColor"*/, v73, 0LL);
      material = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v35, 0LL);
      if ( !material )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
      if ( !material )
        goto LABEL_55;
      if ( System_String__StartsWith((System_String_o *)material, (System_String_o *)StringLiteral_16879/*"body"*/, 0LL) )
        goto LABEL_46;
      material = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v35, 0LL);
      if ( !material )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
      if ( !material )
        goto LABEL_55;
      if ( System_String__StartsWith((System_String_o *)material, (System_String_o *)StringLiteral_23256/*"weapon"*/, 0LL) )
      {
LABEL_46:
        material = (UnityEngine_Material_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                               (UnityEngine_SkinnedMeshRenderer_o *)v35,
                                               0LL);
        if ( !material )
          goto LABEL_55;
        *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)material, 0LL);
        if ( !NodeFromName )
          goto LABEL_55;
        v62 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, *(UnityEngine_Vector3_o *)&v42, 0LL);
        x = v62.fields.x;
        y = v62.fields.y;
        z = v62.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0LL);
        v48 = x - localPosition.fields.x;
        v49 = y - localPosition.fields.y;
        v50 = z - localPosition.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v58, (UnityEngine_SkinnedMeshRenderer_o *)v35, 0LL);
        v59 = v58;
        center = UnityEngine_Bounds__get_center(&v59, 0LL);
        v51 = v48 + center.fields.x;
        v52 = v49 + center.fields.y;
        v53 = v50 + center.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v58, (UnityEngine_SkinnedMeshRenderer_o *)v35, 0LL);
        v59 = v58;
        size = UnityEngine_Bounds__get_size(&v59, 0LL);
        v65.fields.x = v51;
        v65.fields.y = v52;
        v65.fields.z = v53;
        UnityEngine_Bounds___ctor(&v60, v65, size, 0LL);
        v57 = v60;
        UnityEngine_SkinnedMeshRenderer__set_localBounds((UnityEngine_SkinnedMeshRenderer_o *)v35, &v57, 0LL);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v35, NodeFromName, 0LL);
      }
      else
      {
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v58, (UnityEngine_SkinnedMeshRenderer_o *)v35, 0LL);
        v59 = v58;
        v66 = UnityEngine_Bounds__get_center(&v59, 0LL);
        v54 = v66.fields.y;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v58, (UnityEngine_SkinnedMeshRenderer_o *)v35, 0LL);
        v59 = v58;
        extents = UnityEngine_Bounds__get_extents(&v59, 0LL);
        UnityEngine_Material__SetFloat(v40, (System_String_o *)StringLiteral_15950/*"_ClipSharpnessY"*/, v54 - extents.fields.y, 0LL);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Material__HasProperty_40688736(
                                             v40,
                                             (System_String_o *)StringLiteral_16095/*"_Use_alphawidth"*/,
                                             0LL);
      if ( ((unsigned __int8)material & 1) != 0 )
        UnityEngine_Material__SetFloat(v40, (System_String_o *)StringLiteral_16095/*"_Use_alphawidth"*/, 1.0, 0LL);
      v36 = (int)v37[1].klass;
      if ( (int)++v38 >= v36 )
        goto LABEL_53;
    }
LABEL_56:
    v55 = sub_B2C460(material);
    sub_B2C400(v55, 0LL);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x6

  if ( (byte_4187BCC & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_4187BCC = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v12);
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

  if ( (byte_4187BCD & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&SoundManager_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_9598/*"NoblePhantasm_"*/, v14);
    sub_B2C35C(&StringLiteral_23499/*"{0:D0}_{1}"*/, v15);
    sub_B2C35C(&StringLiteral_12739/*"Servants_"*/, v16);
    byte_4187BCD = 1;
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
  v24 = System_String__Format_44301068((System_String_o *)StringLiteral_23499/*"{0:D0}_{1}"*/, v23, (Il2CppObject *)voiceTypeId, 0LL);
  if ( SvtEntity )
  {
    v25 = &StringLiteral_9598/*"NoblePhantasm_"*/;
    v26 = v24;
    if ( !isNp )
      v25 = &StringLiteral_12739/*"Servants_"*/;
    v27 = (System_String_o *)*v25;
    v28 = System_Int32__ToString((int32_t)&v33, 0LL);
    v29 = System_String__Concat_44305532(v27, v28, 0LL);
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

  if ( (byte_4187B7F & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_4187B7F = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  return ServantAssetLoadManager__checkLoadlocal(Instance, v3);
}


bool __fastcall ServantAssetLoadManager__checkLoadlocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  ServantAssetLoadManager_o *v2; // x19
  struct System_Collections_Generic_List_string__o *loadlist; // x8
  struct System_Collections_Generic_List_string__o *downloadlist; // x8

  v2 = this;
  if ( (byte_4187B80 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, method);
    byte_4187B80 = 1;
  }
  loadlist = v2->fields.loadlist;
  if ( !loadlist )
    goto LABEL_9;
  if ( loadlist->fields._size > 0 )
    return 1;
  downloadlist = v2->fields.downloadlist;
  if ( !downloadlist )
LABEL_9:
    sub_B2C434(this, method);
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
  __int64 v7; // x1
  struct ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct ServantLimitMaster_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleServantConfConponent_o *p_svtlimitaddmaster; // x19
  struct ServantLimitAddMaster_o *svtlimitaddmaster; // t1
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_4187B69 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4187B69 = 1;
  }
  if ( !this->fields.svtmaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_WarQuestSelectionMaster = (struct ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    this->fields.svtmaster = MasterData_WarQuestSelectionMaster;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.svtmaster,
      (System_Int32_array **)MasterData_WarQuestSelectionMaster,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !this->fields.svtlimitmaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    v15 = (struct ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    this->fields.svtlimitmaster = v15;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.svtlimitmaster,
      (System_Int32_array **)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  p_svtlimitaddmaster = (BattleServantConfConponent_o *)&this->fields.svtlimitaddmaster;
  if ( svtlimitaddmaster )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_B2C434(Instance, v7);
  v24 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  p_svtlimitaddmaster->klass = (BattleServantConfConponent_c *)v24;
  sub_B2C2F8(p_svtlimitaddmaster, v24, v25, v26, v27, v28, v29, v30);
}


void __fastcall ServantAssetLoadManager__clearServantlist(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4187B7D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_4187B7D = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  ServantAssetLoadManager__clearServantlistlocal(Instance, v3);
}


void __fastcall ServantAssetLoadManager__clearServantlistlocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadlist; // x0

  if ( (byte_4187B7E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, method);
    byte_4187B7E = 1;
  }
  loadlist = this->fields.loadlist;
  if ( !loadlist
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadlist,
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__),
        (loadlist = this->fields.downloadlist) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadlist,
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__),
        (loadlist = this->fields.loadedList) == 0LL) )
  {
    sub_B2C434(loadlist, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadlist,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
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
  __int64 v14; // x1
  System_String_o *v15; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v17; // x19
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x8
  int v20; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4187BD8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__, *(_QWORD *)&tp);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__Object__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__Object__set_Item__, v6);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_GameObject___, v10);
    sub_B2C35C(&StringLiteral_18257/*"effect/ef_shadow0"*/, v11);
    byte_4187BD8 = 1;
  }
  v20 = tp + 1;
  v12 = System_Int32__ToString((int32_t)&v20, 0LL);
  UIAtlas = (System_Xml_Schema_XmlSchemaObject_o *)System_String__Concat_44305532(
                                                     (System_String_o *)StringLiteral_18257/*"effect/ef_shadow0"*/,
                                                     v12,
                                                     0LL);
  if ( !this->fields._releaseAssets )
    goto LABEL_17;
  v15 = (System_String_o *)UIAtlas;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields._releaseAssets,
          (System_Xml_XmlQualifiedName_o *)UIAtlas,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__) )
  {
    UIAtlas = (System_Xml_Schema_XmlSchemaObject_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                       v15,
                                                       (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_GameObject___);
    releaseAssets = this->fields._releaseAssets;
    if ( releaseAssets )
    {
      v17 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UIAtlas;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)releaseAssets,
        (System_Xml_XmlQualifiedName_o *)v15,
        UIAtlas,
        (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__Object__set_Item__);
      goto LABEL_13;
    }
LABEL_17:
    sub_B2C434(UIAtlas, v14);
  }
  UIAtlas = (System_Xml_Schema_XmlSchemaObject_o *)this->fields._releaseAssets;
  if ( !UIAtlas )
    goto LABEL_17;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)UIAtlas,
           (System_Type_o *)v15,
           (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__Object__get_Item__);
  if ( Item )
  {
    if ( (UnityEngine_GameObject_c *)Item->klass == UnityEngine_GameObject_TypeInfo )
      v17 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Item;
    else
      v17 = 0LL;
  }
  else
  {
    v17 = 0LL;
  }
LABEL_13:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       v17,
                                       (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


void __fastcall ServantAssetLoadManager__endloadList(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadlist; // x0
  struct System_String_o *name; // x20

  if ( (byte_4187B83 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, data);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, v5);
    byte_4187B83 = 1;
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
           (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadlist;
      if ( !loadlist )
        goto LABEL_13;
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadlist,
        (WarBoardManager_TaskList_o *)name,
        (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__);
    }
    loadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.downloadlist;
    if ( !loadlist )
LABEL_13:
      sub_B2C434(loadlist, data);
    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           loadlist,
           (WarBoardManager_TaskList_o *)name,
           (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.downloadlist;
      if ( loadlist )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          loadlist,
          (WarBoardManager_TaskList_o *)name,
          (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_4187B98 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    sub_B2C35C(&StringLiteral_12732/*"Servants/"*/, v5);
    byte_4187B98 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
  BattleChrId = ServantAssetLoadManager__getBattleChrId(Instance, svtId, limitCount, v8);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_12732/*"Servants/"*/, BattleChrId, 0LL);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_4187B97 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, *(_QWORD *)&displimitCount);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_12732/*"Servants/"*/, v6);
    byte_4187B97 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(displimitCount, 0LL);
  if ( !Instance )
    sub_B2C434(LimitCountByImageLimitCostumeIn, v9);
  BattleChrId = ServantAssetLoadManager__getBattleChrId(Instance, svtId, LimitCountByImageLimitCostumeIn, v10);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_12732/*"Servants/"*/, BattleChrId, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getActorFolderName_25332400(
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4187B99 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&StringLiteral_12732/*"Servants/"*/, v3);
    byte_4187B99 = 1;
  }
  v6 = svtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_12732/*"Servants/"*/, v4, 0LL);
}


UnityEngine_Texture2D_o *__fastcall ServantAssetLoadManager__getAssetObject_Texture2D_(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *file,
        const MethodInfo_2099E48 *method)
{
  UnityEngine_Texture2D_o *result; // x0

  if ( (byte_418D1D5 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, path);
    byte_418D1D5 = 1;
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
    sub_B2C434(0LL, v7);
  return ServantLimitAddMaster__getBattleChrId(svtlimitaddmaster, svtId, limitCount, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getCameraActionPath(int32_t cameraId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = cameraId;
  if ( (byte_4187BDB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12733/*"Servants/Camera/"*/, method);
    byte_4187BDB = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_12733/*"Servants/Camera/"*/, v2, 0LL);
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

  if ( (byte_4187B6C & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&limitCount);
    sub_B2C35C(&StringLiteral_12735/*"Servants/Commands/"*/, v4);
    byte_4187B6C = 1;
  }
  v7 = svtId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12735/*"Servants/Commands/"*/, v5, 0LL);
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

  if ( (byte_4187B6B & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&displimitCount);
    sub_B2C35C(&StringLiteral_12735/*"Servants/Commands/"*/, v4);
    byte_4187B6B = 1;
  }
  v7 = svtId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12735/*"Servants/Commands/"*/, v5, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getNameEffectPath(
        int32_t enemyNameEffectId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = enemyNameEffectId;
  if ( (byte_4187BEF & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5813/*"Effect/BattleCommon/NameEffect/"*/, method);
    byte_4187BEF = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_5813/*"Effect/BattleCommon/NameEffect/"*/, v2, 0LL);
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

  if ( (byte_4187BBC & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&cutInId);
    sub_B2C35C(&StringLiteral_5836/*"Effect/CutIn/Skill/{0}"*/, v4);
    byte_4187BBC = 1;
  }
  v7 = cutInId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Format((System_String_o *)StringLiteral_5836/*"Effect/CutIn/Skill/{0}"*/, v5, 0LL);
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

  if ( (byte_4187B74 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&limitCount);
    sub_B2C35C(&StringLiteral_12738/*"Servants/Status/"*/, v4);
    byte_4187B74 = 1;
  }
  v7 = svtId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12738/*"Servants/Status/"*/, v5, 0LL);
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

  if ( (byte_4187B73 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&displimitCount);
    sub_B2C35C(&StringLiteral_12738/*"Servants/Status/"*/, v4);
    byte_4187B73 = 1;
  }
  v7 = svtId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12738/*"Servants/Status/"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *__fastcall ServantAssetLoadManager__getSvtEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ServantMaster_o *svtmaster; // x0

  if ( (byte_4187B6A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, *(_QWORD *)&svtId);
    byte_4187B6A = 1;
  }
  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtmaster = this->fields.svtmaster;
  if ( !svtmaster )
    sub_B2C434(0LL, v5);
  return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)svtmaster,
                              svtId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_B2C434(0LL, v7);
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
    sub_B2C434(0LL, v7);
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
    sub_B2C434(SvtVoiceId, v8);
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
    sub_B2C434(SvtVoiceId, v8);
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
  __int64 v9; // x1
  int32_t v10; // w3
  const MethodInfo *v11; // x5

  if ( (byte_4187BAB & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4187BAB = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v9);
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
  __int64 v10; // x1
  System_String_o *BattleChrId; // x0
  System_String_o *v12; // x1

  if ( (byte_4187BAC & 1) == 0 )
  {
    sub_B2C35C(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, *(_QWORD *)&svtId);
    sub_B2C35C(&StringLiteral_12732/*"Servants/"*/, v10);
    byte_4187BAC = 1;
  }
  BattleChrId = ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, *(const MethodInfo **)&weapongroup);
  v12 = System_String__Concat_44305532((System_String_o *)StringLiteral_12732/*"Servants/"*/, BattleChrId, 0LL);
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                       this,
                                       v12,
                                       name,
                                       (const MethodInfo_2099E48 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4187BC1 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4187BC1 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  UnityEngine_Texture2D_o *AssetObject_Texture2D; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x19
  UnityEngine_Transform_o *v17; // x21
  UnityEngine_Transform_o *v18; // x20
  int v19; // s0
  UnityEngine_Transform_o *v22; // x20
  int v23; // s0
  UnityEngine_Transform_o *v26; // x20
  int v27; // s0
  int32_t v31; // [xsp+Ch] [xbp-14h] BYREF

  v31 = weapongroup;
  if ( (byte_4187BC2 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, parent);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v8);
    sub_B2C35C(&StringLiteral_20574/*"motion"*/, v9);
    sub_B2C35C(&StringLiteral_12736/*"Servants/Motion/"*/, v10);
    byte_4187BC2 = 1;
  }
  v11 = System_Int32__ToString((int32_t)&v31, 0LL);
  v12 = System_String__Concat_44305532((System_String_o *)StringLiteral_12736/*"Servants/Motion/"*/, v11, 0LL);
  AssetObject_Texture2D = ServantAssetLoadManager__getAssetObject_Texture2D_(
                            this,
                            v12,
                            (System_String_o *)StringLiteral_20574/*"motion"*/,
                            (const MethodInfo_2099E48 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_13;
  v16 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !parent )
    goto LABEL_13;
  v17 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v17 )
    goto LABEL_13;
  UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)transform, 0LL);
  v18 = UnityEngine_GameObject__get_transform(v16, 0LL);
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v18
    || (UnityEngine_Transform__set_localPosition(v18, *(UnityEngine_Vector3_o *)&v19, 0LL),
        v22 = UnityEngine_GameObject__get_transform(v16, 0LL),
        *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_up(0LL),
        !v22)
    || (UnityEngine_Transform__set_eulerAngles(v22, *(UnityEngine_Vector3_o *)&v23, 0LL),
        v26 = UnityEngine_GameObject__get_transform(v16, 0LL),
        *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL),
        !v26) )
  {
LABEL_13:
    sub_B2C434(transform, v15);
  }
  UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
  return v16;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_TextAsset_o *__fastcall ServantAssetLoadManager__loadAnimEvents(
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4187BA7 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4187BA7 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v8);
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
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *ActorFolderName_25332400; // x0

  if ( (byte_4187BA8 & 1) == 0 )
  {
    sub_B2C35C(&Method_ServantAssetLoadManager_getAssetObject_TextAsset___, *(_QWORD *)&svtId);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_18691/*"fbxevent"*/, v10);
    byte_4187BA8 = 1;
  }
  if ( isForce )
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ActorFolderName_25332400 = ServantAssetLoadManager__getActorFolderName_25332400(svtId, *(const MethodInfo **)&svtId);
  }
  else
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ActorFolderName_25332400 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  }
  if ( !this )
    sub_B2C434(ActorFolderName_25332400, ActorFolderName_25332400);
  return (UnityEngine_TextAsset_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                      this,
                                      ActorFolderName_25332400,
                                      (System_String_o *)StringLiteral_18691/*"fbxevent"*/,
                                      (const MethodInfo_2099E48 *)Method_ServantAssetLoadManager_getAssetObject_TextAsset___);
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

  if ( (byte_4187B9E & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, parent);
    byte_4187B9E = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v12);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o *ActorFolderName_25332400; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Texture2D_o *AssetObject_Texture2D; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v26; // x1
  UnityEngine_GameObject_o *v27; // x21
  UnityEngine_Transform_o *v28; // x22
  UnityEngine_Transform_o *v29; // x19
  int v30; // s0
  UnityEngine_Transform_o *v33; // x19
  int v34; // s0

  if ( (byte_4187B9F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, assetPath);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v14);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_17420/*"chr"*/, v16);
    byte_4187B9F = 1;
  }
  if ( isForce )
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ActorFolderName_25332400 = ServantAssetLoadManager__getActorFolderName_25332400(
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
    ActorFolderName_25332400 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 (const MethodInfo *)parent);
  }
  *assetPath = ActorFolderName_25332400;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)assetPath,
    (System_Int32_array **)ActorFolderName_25332400,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  AssetObject_Texture2D = ServantAssetLoadManager__getAssetObject_Texture2D_(
                            this,
                            *assetPath,
                            (System_String_o *)StringLiteral_17420/*"chr"*/,
                            (const MethodInfo_2099E48 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_22;
  v27 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !parent )
    goto LABEL_22;
  v28 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v28 )
    goto LABEL_22;
  UnityEngine_Transform__set_parent(v28, (UnityEngine_Transform_o *)transform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v27, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0LL),
        v29 = UnityEngine_GameObject__get_transform(v27, 0LL),
        *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_up(0LL),
        !v29)
    || (UnityEngine_Transform__set_eulerAngles(v29, *(UnityEngine_Vector3_o *)&v30, 0LL),
        v33 = UnityEngine_GameObject__get_transform(v27, 0LL),
        *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_one(0LL),
        !v33) )
  {
LABEL_22:
    sub_B2C434(transform, v26);
  }
  UnityEngine_Transform__set_localScale(v33, *(UnityEngine_Vector3_o *)&v34, 0LL);
  return v27;
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleCommonEffect(
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4187BB8 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, name);
    byte_4187BB8 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  return ServantAssetLoadManager__loadBattleCommonEffectLocal(Instance, path, name, v7);
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

  if ( (byte_4187BB9 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, path);
    sub_B2C35C(&AssetManager_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4187BB9 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   name,
                                                                   (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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

  if ( (byte_4187BDD & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, parent);
    byte_4187BDD = 1;
  }
  if ( !cameraId )
    return 0LL;
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  return ServantAssetLoadManager__loadCameraActionlocal(Instance, cameraId, parent, v7);
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
  __int64 v15; // x1
  UnityEngine_Transform_o *v16; // x22
  UnityEngine_Transform_o *v17; // x19
  int v18; // s0
  UnityEngine_Transform_o *v21; // x19
  int v22; // s0

  if ( (byte_4187BDE & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, *(_QWORD *)&cameraId);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v8);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_17181/*"cameraAction"*/, v10);
    byte_4187BDE = 1;
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
                            (System_String_o *)StringLiteral_17181/*"cameraAction"*/,
                            (const MethodInfo_2099E48 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
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
                                              (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_21;
    v13 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !parent )
      goto LABEL_21;
    v16 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0LL);
    if ( !v16 )
      goto LABEL_21;
    UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0LL),
          v17 = UnityEngine_GameObject__get_transform(v13, 0LL),
          *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_up(0LL),
          !v17)
      || (UnityEngine_Transform__set_eulerAngles(v17, *(UnityEngine_Vector3_o *)&v18, 0LL),
          v21 = UnityEngine_GameObject__get_transform(v13, 0LL),
          *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_one(0LL),
          !v21) )
    {
LABEL_21:
      sub_B2C434(transform, v15);
    }
    UnityEngine_Transform__set_localScale(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
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
  __int64 v9; // x1
  int32_t v10; // w3
  const MethodInfo *v11; // x5

  if ( (byte_4187B6F & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4187B6F = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v9);
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
  __int64 v23; // x1
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4187B70 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, tex);
    sub_B2C35C(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v10);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_17247/*"card_servant_"*/, v12);
    byte_4187B70 = 1;
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
  v18 = System_String__Concat_44305532((System_String_o *)StringLiteral_17247/*"card_servant_"*/, v17, 0LL);
  AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                    this,
                                                    CommandCardLoadFolderName,
                                                    v18,
                                                    (const MethodInfo_2099E48 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
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
        sub_B2C434(v22, v23);
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

  if ( (byte_4187BE1 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, userCommandCodeId);
    byte_4187BE1 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal_25351580(Instance, tex, userCommandCodeId, v7);
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
  __int64 v18; // x1
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4187BE3 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, tex);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v8);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_17168/*"c_{0:D7}"*/, v10);
    byte_4187BE3 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(commandCodeId, (const MethodInfo *)tex);
  v19 = commandCodeId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v13 = System_String__Format((System_String_o *)StringLiteral_17168/*"c_{0:D7}"*/, v12, 0LL);
  AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                    this,
                                                    CommandCodeFolderName,
                                                    v13,
                                                    (const MethodInfo_2099E48 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
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
        sub_B2C434(v17, v18);
      ((void (__fastcall *)(UITexture_o *, UnityEngine_Object_o *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_Texture2D,
        tex->klass->vtable._28_get_shader.methodPtr);
    }
    return tex;
  }
  return result;
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTextureLocal_25351580(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x22
  int32_t v14; // w0
  const MethodInfo *v15; // x3
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4187BE4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, tex);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4187BE4 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  entity = 0LL;
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userCommandCodeId,
                                (const MethodInfo_24E4354 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
LABEL_13:
    sub_B2C434(Instance, v11);
  v13 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(this, tex, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTexture_25351864(
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4187BE2 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&commandCodeId);
    byte_4187BE2 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(Instance, tex, commandCodeId, v7);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCommonEffect(
        System_String_o *name,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4187BAF & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4187BAF = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return ServantAssetLoadManager__loadCommonEffectlocal(Instance, name, v5);
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

  if ( (byte_4187BB0 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, name);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_18223/*"effect/"*/, v6);
    byte_4187BB0 = 1;
  }
  v7 = System_String__Concat_44305532((System_String_o *)StringLiteral_18223/*"effect/"*/, name, 0LL);
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
                                         (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4187BAD & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&weapongroup);
    byte_4187BAD = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v8);
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

  if ( (byte_4187BAE & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, name);
    byte_4187BAE = 1;
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
  return StandFigureManager__CreateRenderPrefab_27085276(
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
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4187B7B & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4187B7B = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v10);
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
  __int64 v26; // x1
  ServantEntity_o *Entity; // x25
  ServantLimitAddMaster_o *v28; // x26
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

  if ( (byte_4187B7C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, tex);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v12);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B2C35C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v14);
    sub_B2C35C(&int_TypeInfo, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v17);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v21);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v22);
    sub_B2C35C(&StringLiteral_17248/*"card_servant_np"*/, v23);
    byte_4187B7C = 1;
  }
  methoda.name = 0LL;
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(svtId, treasureDvcId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_54;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  methoda.name = 0LL;
  if ( !Entity )
    goto LABEL_54;
  v28 = (ServantLimitAddMaster_o *)Instance;
  Instance = (DataManager_o *)ServantEntity__IsNameTrueFromBattleSvt(Entity, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_17;
  if ( !v28 )
    goto LABEL_54;
  if ( !ServantLimitAddMaster__TryGetEntity(v28, (ServantLimitAddEntity_o **)&methoda.name, svtId, limit, 0LL) )
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
    Instance = (DataManager_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v26, v29);
    if ( !methoda.name )
      goto LABEL_54;
    v30 = (System_String_o *)Instance;
    OverwriteTDFileName = ServantLimitAddEntity__GetOverwriteTDFileName((ServantLimitAddEntity_o *)methoda.name, 0LL);
    AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                      this,
                                                      v30,
                                                      OverwriteTDFileName,
                                                      (const MethodInfo_2099E48 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    LOBYTE(imageIndex) = 0;
  }
  else
  {
LABEL_17:
    if ( EntityFromIDID )
    {
      v34 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      v35 = (System_String_o *)StringLiteral_17248/*"card_servant_np"*/;
      if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
        sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v36 = **(_QWORD **)(v34 + 192);
      if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
        sub_AC505C(v36);
      Instance = **(DataManager_o ***)(v36 + 184);
      if ( !Instance )
        goto LABEL_54;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Instance )
        goto LABEL_54;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    treasureDvcId,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_54;
      NpNameFileSuffix = TreasureDvcEntity__GetNpNameFileSuffix((TreasureDvcEntity_o *)Instance, 0LL);
      if ( !System_String__IsNullOrEmpty(NpNameFileSuffix, 0LL) )
        v35 = System_String__Concat_44307816(v35, (System_String_o *)StringLiteral_15905/*"_"*/, NpNameFileSuffix, 0LL);
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
        v42 = System_String__Format((System_String_o *)StringLiteral_23539/*"{0}"*/, v41, 0LL);
        v43 = System_String__Concat_44305532(v35, v42, 0LL);
        v44 = this;
        CommandCardLoadFolderName = v40;
      }
      AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                        v44,
                                                        CommandCardLoadFolderName,
                                                        v43,
                                                        (const MethodInfo_2099E48 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
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
    sub_B2C434(Instance, v26);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35309748(
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

  if ( (byte_4187BD4 & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_TypeInfo, parent);
    byte_4187BD4 = 1;
  }
  v17 = sub_B2C42C(ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_TypeInfo);
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152___ctor(
    (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)v17,
    0,
    0LL);
  if ( !v17 )
    sub_B2C434(v18, v19);
  *(_QWORD *)(v17 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 32), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 40) = parent;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 40), (System_Int32_array **)parent, v26, v27, v28, v29, v30, v31);
  *(_DWORD *)(v17 + 56) = npChargeStage;
  *(_DWORD *)(v17 + 60) = svtId;
  *(_DWORD *)(v17 + 48) = treasureDvcId;
  *(_DWORD *)(v17 + 52) = limitCount;
  *(_DWORD *)(v17 + 72) = treasureDvcLv;
  *(_QWORD *)(v17 + 80) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 80), (System_Int32_array **)callback, v32, v33, v34, v35, v36, v37);
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
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4187BA9 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_4187BA9 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v10);
  return ServantAssetLoadManager__loadNoblePhantasmEffectlocal(
           Instance,
           treasureDeviceId,
           limit,
           name,
           seqIdFromMstTDSeqWeight,
           v11);
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
  __int64 v17; // x1
  int32_t eventId; // w0
  System_String_o *v19; // x0
  System_String_o *v20; // x21
  System_String_o *v21; // x0
  int v23; // [xsp+Ch] [xbp-44h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  int32_t v25; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4187BAA & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&treasureDeviceId);
    sub_B2C35C(&Method_DataManager_GetMaster_TreasureDvcMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v13);
    sub_B2C35C(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v14);
    sub_B2C35C(&StringLiteral_9595/*"NoblePhantasm/"*/, v15);
    byte_4187BAA = 1;
  }
  v25 = 0;
  entity = 0LL;
  v23 = 0;
  if ( seqIdFromMstTDSeqWeight < 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_TreasureDvcMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_23;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            Master_WarQuestSelectionMaster,
            &entity,
            treasureDeviceId,
            (const MethodInfo_24E412C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
    {
      v25 = treasureDeviceId;
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
      sub_B2C434(Master_WarQuestSelectionMaster, v17);
    }
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      eventId = entity->fields.eventId;
    else
      eventId = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)entity, limit, 0LL);
    v25 = eventId;
  }
  else
  {
    v25 = seqIdFromMstTDSeqWeight;
  }
LABEL_17:
  v19 = System_Int32__ToString((int32_t)&v25, 0LL);
  v20 = System_String__Concat_44305532((System_String_o *)StringLiteral_9595/*"NoblePhantasm/"*/, v19, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v20, 0LL) )
  {
    v23 = 10 * (v25 / 10);
    v21 = System_Int32__ToString((int32_t)&v23, 0LL);
    v20 = System_String__Concat_44305532((System_String_o *)StringLiteral_9595/*"NoblePhantasm/"*/, v21, 0LL);
  }
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                       this,
                                       v20,
                                       name,
                                       (const MethodInfo_2099E48 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


void __fastcall ServantAssetLoadManager__loadSkillCutIn(
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4187BBD & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, callback);
    byte_4187BBD = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
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

  if ( (byte_4187BBE & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B2C35C(&AssetManager_TypeInfo, skillInfo);
    byte_4187BBE = 1;
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
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4187B77 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtID);
    byte_4187B77 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v8);
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
  __int64 v22; // x1
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4187B78 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, tex);
    sub_B2C35C(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v9);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_22313/*"status_servant_"*/, v11);
    byte_4187B78 = 1;
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
  v17 = System_String__Concat_44305532((System_String_o *)StringLiteral_22313/*"status_servant_"*/, v16, 0LL);
  AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                    this,
                                                    StatusImageFolderName,
                                                    v17,
                                                    (const MethodInfo_2099E48 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
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
        sub_B2C434(v21, v22);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4187BB2 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&weapongroup);
    byte_4187BB2 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v8);
  return ServantAssetLoadManager__loadWeaponGroupEffectlocal(Instance, name, weapongroup, effectFolder, v9);
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
  if ( (byte_4187BB3 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, name);
    sub_B2C35C(&AssetManager_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_5862/*"Effect/weapon/"*/, v9);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v10);
    byte_4187BB3 = 1;
  }
  v11 = System_Int32__ToString((int32_t)&v18, 0LL);
  v12 = System_String__Concat_44305532((System_String_o *)StringLiteral_5862/*"Effect/weapon/"*/, v11, 0LL);
  if ( effectFolder )
  {
    v13 = System_Int32__ToString((int32_t)&v17, 0LL);
    v12 = System_String__Concat_44307816(v12, (System_String_o *)StringLiteral_872/*"/"*/, v13, 0LL);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v12, 0LL);
  if ( AssetStorage )
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   name,
                                                                   (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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

  if ( (byte_4187BD1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, *(_QWORD *)&uniqueId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v7);
    byte_4187BD1 = 1;
  }
  ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
  if ( !ActorVoice )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)ActorVoice,
         uniqueId,
         (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
    if ( ActorVoice )
    {
      ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(ActorVoice, uniqueId, (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
      if ( ActorVoice )
      {
        SePlayer__StopSe((SePlayer_o *)ActorVoice, fadeoutTime, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B2C434(ActorVoice, *(_QWORD *)&uniqueId);
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
  __int64 v18; // x1
  const MethodInfo *v20; // [xsp+8h] [xbp-58h]

  if ( (byte_4187BC5 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_4187BC5 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v18);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x5

  if ( (byte_4187BC8 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_4187BC8 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v12);
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
  __int64 v13; // x1
  SePlayer_o *result; // x0
  const MethodInfo *v15; // x3
  int32_t VoiceId; // w0
  int32_t v17; // w8
  System_String_o *v18; // x0
  System_String_o *v19; // x20
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4187BC9 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&StringLiteral_12732/*"Servants/"*/, v13);
    byte_4187BC9 = 1;
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
    v19 = System_String__Concat_44305532((System_String_o *)StringLiteral_12732/*"Servants/"*/, v18, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    return SoundManager__playSe_24810404(v19, targetFileName, volume, 0LL, 0LL);
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
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  SePlayer_o **v40; // x28
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  const MethodInfo *v47; // x2
  ServantEntity_o *SvtEntity; // x27
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x3
  int32_t VoicePrefix; // w0
  __int64 *v52; // x8
  System_String_o *v53; // x22
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  struct System_Collections_Generic_Dictionary_int__SePlayer__o *v56; // x22
  System_String_o *v57; // x24
  System_Action_o *v58; // x25
  SePlayer_o *result; // x0
  Il2CppObject *v60; // x0
  int32_t v61; // [xsp+8h] [xbp-58h] BYREF
  int32_t VoiceId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4187BC6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__string__set_Item__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__, v23);
    sub_B2C35C(&int_TypeInfo, v24);
    sub_B2C35C(&SoundManager_TypeInfo, v25);
    sub_B2C35C(&Method_ServantAssetLoadManager___c__DisplayClass134_0__playBattleVoicelocal_b__0__, v26);
    sub_B2C35C(&ServantAssetLoadManager___c__DisplayClass134_0_TypeInfo, v27);
    sub_B2C35C(&StringLiteral_23499/*"{0:D0}_{1}"*/, v28);
    sub_B2C35C(&StringLiteral_12732/*"Servants/"*/, v29);
    sub_B2C35C(&StringLiteral_9595/*"NoblePhantasm/"*/, v30);
    byte_4187BC6 = 1;
  }
  VoiceId = 0;
  v31 = sub_B2C42C(ServantAssetLoadManager___c__DisplayClass134_0_TypeInfo);
  ServantAssetLoadManager___c__DisplayClass134_0___ctor((ServantAssetLoadManager___c__DisplayClass134_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_29;
  *(_QWORD *)(v31 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  *(_QWORD *)(v31 + 24) = callback;
  v40 = (SePlayer_o **)(v31 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 24), (System_Int32_array **)callback, v41, v42, v43, v44, v45, v46);
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, v47);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v49);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v50);
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
               (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
        {
          ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
          if ( !ActorVoice )
            goto LABEL_29;
          if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 ActorVoice,
                 uniqueId,
                 (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__) )
          {
            ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
            if ( !ActorVoice )
              goto LABEL_29;
            ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(ActorVoice, uniqueId, (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
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
          (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
        v52 = &StringLiteral_9595/*"NoblePhantasm/"*/;
        if ( !isNp )
          v52 = &StringLiteral_12732/*"Servants/"*/;
        v53 = (System_String_o *)*v52;
        v54 = System_Int32__ToString((int32_t)&VoiceId, 0LL);
        v55 = System_String__Concat_44305532(v53, v54, 0LL);
        v56 = this->fields.ActorVoice;
        v57 = v55;
        v58 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v58,
          (Il2CppObject *)v31,
          Method_ServantAssetLoadManager___c__DisplayClass134_0__playBattleVoicelocal_b__0__,
          0LL);
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SoundManager__playVoice_24786800(v57, targetFileName, volume, v58, 0LL);
        if ( v56 )
        {
          System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v56,
            uniqueId,
            (WarBoardAIRoute_RouteData_o *)ActorVoice,
            (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__);
          ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
          if ( ActorVoice )
            return (SePlayer_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                   ActorVoice,
                                   uniqueId,
                                   (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        }
      }
LABEL_29:
      sub_B2C434(ActorVoice, v33);
    }
  }
  else
  {
    v61 = VoicePrefix;
    v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
    targetFileName = System_String__Format_44301068(
                       (System_String_o *)StringLiteral_23499/*"{0:D0}_{1}"*/,
                       v60,
                       (Il2CppObject *)voiceTypeId,
                       0LL);
    if ( SvtEntity )
      goto LABEL_8;
  }
  result = *v40;
  if ( *v40 )
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
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = weapongroup;
  if ( (byte_4187BC0 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly);
    sub_B2C35C(&StringLiteral_12736/*"Servants/Motion/"*/, v4);
    byte_4187BC0 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  v7 = System_String__Concat_44305532((System_String_o *)StringLiteral_12736/*"Servants/Motion/"*/, v6, 0LL);
  if ( !Instance )
    sub_B2C434(v7, v8);
  ServantAssetLoadManager__setLoadList(Instance, v7, dlOnly, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadBattleActor(
        ServantAssetArgs_o *args,
        bool isForce,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x6

  if ( (byte_4187B9A & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, isForce);
    byte_4187B9A = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_B2C434(Instance, v6);
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
  System_String_o *ActorFolderName_25332400; // x0
  const MethodInfo *v15; // x3
  int32_t v16; // w0

  if ( (byte_4187B9B & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4187B9B = 1;
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
      ActorFolderName_25332400 = ServantAssetLoadManager__getActorFolderName_25332400(v13, *(const MethodInfo **)&svtId);
      goto LABEL_24;
    }
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    v16 = appearanceId;
  }
  ActorFolderName_25332400 = ServantAssetLoadManager__getActorFolderName(
                               v16,
                               limitCount,
                               *(const MethodInfo **)&limitCount);
LABEL_24:
  if ( !this )
    sub_B2C434(ActorFolderName_25332400, ActorFolderName_25332400);
  ServantAssetLoadManager__setLoadList(this, ActorFolderName_25332400, dlOnly, v15);
}


System_String_array *__fastcall ServantAssetLoadManager__preloadBattleCommonEffect(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4187BB6 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4187BB6 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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

  if ( (byte_4187BB7 & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, effectIdList);
    byte_4187BB7 = 1;
  }
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  BattleCommonEffectPathList = BattleEffectUtility__GetBattleCommonEffectPathList(effectIdList, 0LL);
  if ( !BattleCommonEffectPathList )
    sub_B2C434(0LL, v6);
  v8 = *(_QWORD *)&BattleCommonEffectPathList->max_length;
  v9 = BattleCommonEffectPathList;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)v8 )
      {
        v12 = sub_B2C460(BattleCommonEffectPathList);
        sub_B2C400(v12, 0LL);
      }
      ServantAssetLoadManager__setLoadList(this, v9->m_Items[v10], 0, v7);
      LODWORD(v8) = v9->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)v8 );
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadCameraAction(int32_t cameraId, bool dlOnly, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  ServantAssetLoadManager_o *Instance; // x21
  System_String_o *CameraActionPath; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4187BDC & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, dlOnly);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    byte_4187BDC = 1;
  }
  if ( cameraId )
  {
    Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, v6);
    if ( !Instance )
      sub_B2C434(CameraActionPath, v9);
    ServantAssetLoadManager__setLoadList(Instance, CameraActionPath, dlOnly, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadCommandCard(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x4

  if ( (byte_4187B6D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4187B6D = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
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

  if ( (byte_4187B6E & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4187B6E = 1;
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
  if ( (byte_4187BE5 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B2C35C(&ServantAssetLoadManager_TypeInfo, commandCodeIds);
    byte_4187BE5 = 1;
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
          v13 = sub_B2C460(this);
          sub_B2C400(v13, 0LL);
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

  if ( (byte_4187B93 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_4187B93 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
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
  __int64 v9; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v11; // x20
  unsigned __int64 v12; // x24
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o **p_lookup; // x25
  SoundManager_o *v14; // x21
  System_String_o *VoiceAssetName; // x22
  System_Action_o *v16; // x23
  __int64 v17; // x0

  if ( (byte_4187B94 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandSpellMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_CommandSpellEntity___, v4);
    sub_B2C35C(&Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v7);
    byte_4187B94 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                      (DataMasterBase_o *)Instance,
                                      (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_CommandSpellEntity___)) == 0LL )
  {
LABEL_21:
    sub_B2C434(Instance, v9);
  }
  datalist = Instance->fields.datalist;
  v11 = Instance;
  if ( (int)datalist >= 1 )
  {
    v12 = 0LL;
    p_lookup = &Instance->fields.lookup;
    do
    {
      if ( v12 >= (unsigned int)datalist )
      {
LABEL_20:
        v17 = sub_B2C460(Instance);
        sub_B2C400(v17, 0LL);
      }
      Instance = (DataManager_o *)p_lookup[v12];
      if ( Instance )
      {
        Instance = (DataManager_o *)CommandSpellEntity__isUseBattle((CommandSpellEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v12 >= LODWORD(v11->fields.datalist) )
            goto LABEL_20;
          Instance = (DataManager_o *)p_lookup[v12];
          if ( !Instance )
            goto LABEL_21;
          Instance = (DataManager_o *)CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
          if ( Instance )
          {
            ++this->fields.soundCount;
            Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
            if ( v12 >= LODWORD(v11->fields.datalist) )
              goto LABEL_20;
            v14 = (SoundManager_o *)Instance;
            Instance = (DataManager_o *)p_lookup[v12];
            if ( !Instance )
              goto LABEL_21;
            VoiceAssetName = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
            v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(
              v16,
              (Il2CppObject *)this,
              Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__,
              0LL);
            if ( !v14 )
              goto LABEL_21;
            SoundManager__LoadAudioAssetStorage(v14, VoiceAssetName, v16, 1, 0LL);
          }
        }
      }
      LODWORD(datalist) = v11->fields.datalist;
      ++v12;
    }
    while ( (__int64)v12 < (int)datalist );
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
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_4187BEC & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, dlOnly);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    byte_4187BEC = 1;
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
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        sub_B2C434(0LL, v11);
      ServantAssetLoadManager__setLoadList(Instance, NameEffectPath, dlOnly, v12);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4187B88 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly);
    byte_4187B88 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  ServantAssetLoadManager__preloadServantlocal(Instance, args, dlOnly, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadServantVoice(
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x5

  if ( (byte_4187B8B & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4187B8B = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v8);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t VoiceId; // w0
  int32_t v16; // w8
  SoundManager_o *Instance; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x22
  System_Action_o *v20; // x0
  System_Action_o *v21; // x23
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4187B8C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__, v11);
    sub_B2C35C(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v13);
    sub_B2C35C(&StringLiteral_12739/*"Servants_"*/, v14);
    byte_4187B8C = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v16 = overwriteSvtVoiceId;
  else
    v16 = VoiceId;
  v24 = v16;
  if ( v16 )
  {
    ++this->fields.soundCount;
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v18 = System_Int32__ToString((int32_t)&v24, 0LL);
    v19 = System_String__Concat_44305532((System_String_o *)StringLiteral_12739/*"Servants_"*/, v18, 0LL);
    v20 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v21 = v20;
    if ( dlOnly )
    {
      System_Action___ctor(
        v20,
        (Il2CppObject *)this,
        Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__,
        0LL);
      if ( Instance )
      {
        SoundManager__DownloadAudioAssetStorage(Instance, v19, v21, 1, 0LL);
        return;
      }
LABEL_13:
      sub_B2C434(v22, v23);
    }
    System_Action___ctor(
      v20,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__,
      0LL);
    if ( !Instance )
      goto LABEL_13;
    SoundManager__LoadAudioAssetStorage(Instance, v19, v21, 1, 0LL);
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
    sub_B2C434(this, 0LL);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4187B8F & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly);
    byte_4187B8F = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x22
  __int64 v15; // x22
  DataManager_o *v16; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x22
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v19; // x21
  System_String_o *VoiceAssetName; // x20
  System_Action_o *v21; // x21
  SoundManager_o *Instance; // x20
  System_String_o *v23; // x21
  System_Action_o *v24; // x22

  if ( (byte_4187B90 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, skillInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_B2C35C(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__, v8);
    sub_B2C35C(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
    sub_B2C35C(&SoundManager_TypeInfo, v12);
    byte_4187B90 = 1;
  }
  if ( skillInfo
    && ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, bool, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
         skillInfo,
         skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
         dlOnly,
         method)
    && skillInfo->fields.skilllv )
  {
    v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v15 = **(_QWORD **)(v14 + 192);
    if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
      sub_AC505C(v15);
    v16 = **(DataManager_o ***)(v15 + 184);
    if ( v16 )
    {
      MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                v16,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
      v16 = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_WarQuestSelectionMaster )
      {
        Entity = SkillLvMaster__GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int32_t)v16,
                   skillInfo->fields.skilllv,
                   0LL);
        if ( !Entity )
          return;
        v19 = Entity;
        if ( !SkillLvEntity__getVoiceAssetName(Entity, 0LL) )
          return;
        ++this->fields.soundCount;
        if ( dlOnly )
        {
          VoiceAssetName = SkillLvEntity__getVoiceAssetName(v19, 0LL);
          v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v21,
            (Il2CppObject *)this,
            Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__,
            0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__downloadAudioAssetStorage(VoiceAssetName, v21, 1, 0LL);
          return;
        }
        Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        v23 = SkillLvEntity__getVoiceAssetName(v19, 0LL);
        v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v24,
          (Il2CppObject *)this,
          Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__,
          0LL);
        if ( Instance )
        {
          SoundManager__LoadAudioAssetStorage(Instance, v23, v24, 1, 0LL);
          return;
        }
      }
    }
    sub_B2C434(v16, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x4

  if ( (byte_4187B75 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4187B75 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
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

  if ( (byte_4187B76 & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4187B76 = 1;
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
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v15 = effectFolder;
  v16 = weapongroup;
  if ( (byte_4187BB1 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&effectFolder);
    sub_B2C35C(&StringLiteral_5862/*"Effect/weapon/"*/, v6);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v7);
    byte_4187BB1 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v9 = System_Int32__ToString((int32_t)&v16, 0LL);
  v10 = v9;
  if ( !effectFolder )
  {
    v12 = System_String__Concat_44305532((System_String_o *)StringLiteral_5862/*"Effect/weapon/"*/, v9, 0LL);
    if ( Instance )
      goto LABEL_5;
LABEL_7:
    sub_B2C434(v12, v13);
  }
  v11 = System_Int32__ToString((int32_t)&v15, 0LL);
  v12 = System_String__Concat_44308944(
          (System_String_o *)StringLiteral_5862/*"Effect/weapon/"*/,
          v10,
          (System_String_o *)StringLiteral_872/*"/"*/,
          v11,
          0LL);
  if ( !Instance )
    goto LABEL_7;
LABEL_5:
  ServantAssetLoadManager__setLoadList(Instance, v12, dlOnly, v14);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *nobleEffectList; // x0
  System_String_array *v35; // x0
  const MethodInfo *v36; // x2
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4187BD6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetData___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v9);
    sub_B2C35C(&System_Collections_Generic_List_AssetData__TypeInfo, v10);
    byte_4187BD6 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  nobleAssetData = this->fields.nobleAssetData;
  if ( nobleAssetData )
  {
    AssetData__RemoveEntry(nobleAssetData, 0LL);
    this->fields.nobleAssetData = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.nobleAssetData, 0LL, v12, v13, v14, v15, v16, v17);
  }
  nobleSequenceData = this->fields.nobleSequenceData;
  if ( nobleSequenceData )
  {
    AssetData__RemoveEntry(nobleSequenceData, 0LL);
    this->fields.nobleSequenceData = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.nobleSequenceData, 0LL, v19, v20, v21, v22, v23, v24);
  }
  bgAssetDataList = this->fields.bgAssetDataList;
  if ( bgAssetDataList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bgAssetDataList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      if ( !v37.fields.current )
        sub_B2C434(0LL, v26);
      AssetData__RemoveEntry((AssetData_o *)v37.fields.current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v27,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v27;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.bgAssetDataList,
      (System_Int32_array **)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  nobleEffectList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.nobleEffectList;
  if ( !nobleEffectList )
    goto LABEL_19;
  if ( nobleEffectList->fields._size < 1 )
    return;
  v35 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 nobleEffectList,
                                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal(this, v35, v36);
  nobleEffectList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.nobleEffectList;
  if ( !nobleEffectList )
LABEL_19:
    sub_B2C434(nobleEffectList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)nobleEffectList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
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
  AssetLoader_LoadEndDataHandler_o *v12; // x21
  AssetLoader_LoadEndDataHandler_o *v13; // x21

  if ( (byte_4187B81 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, path);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, v8);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B2C35C(&Method_ServantAssetLoadManager_endloadList__, v10);
    byte_4187B81 = 1;
  }
  if ( dlOnly )
  {
    downloadlist = this->fields.downloadlist;
    if ( downloadlist )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)downloadlist,
        (EventMissionProgressRequest_Argument_ProgressData_o *)path,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      v12 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v12,
        (Il2CppObject *)this,
        Method_ServantAssetLoadManager_endloadList__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__downloadAssetStorage(path, v12, 20, 0LL) )
        return;
      downloadlist = this->fields.downloadlist;
      if ( downloadlist )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)downloadlist,
          (WarBoardManager_TaskList_o *)path,
          (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__);
        return;
      }
    }
LABEL_18:
    sub_B2C434(downloadlist, path);
  }
  downloadlist = this->fields.loadedList;
  if ( !downloadlist )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)downloadlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)path,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  downloadlist = this->fields.loadlist;
  if ( !downloadlist )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)downloadlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)path,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v13, (Il2CppObject *)this, Method_ServantAssetLoadManager_endloadList__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30158996(path, 20, v13, 0LL);
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

  if ( (byte_4187B82 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, path);
    byte_4187B82 = 1;
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

  if ( (byte_4187BC3 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4187BC3 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  ServantAssetLoadManager__unloadActorMotionlocal(Instance, weapongroup, v5);
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
  __int64 v9; // x1
  WarBoardManager_TaskList_o *v10; // x20
  AssetData_o *AssetStorage; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = weapongroup;
  if ( (byte_4187BC4 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&weapongroup);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, v5);
    sub_B2C35C(&StringLiteral_12736/*"Servants/Motion/"*/, v6);
    byte_4187BC4 = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v12, 0LL);
  loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_String__Concat_44305532(
                                                                                (System_String_o *)StringLiteral_12736/*"Servants/Motion/"*/,
                                                                                v7,
                                                                                0LL);
  if ( !this->fields.loadedList )
    goto LABEL_11;
  v10 = (WarBoardManager_TaskList_o *)loadedList;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)loadedList,
         (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( loadedList )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadedList,
        v10,
        (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_7;
    }
LABEL_11:
    sub_B2C434(loadedList, v9);
  }
LABEL_7:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v10, 0LL);
  AssetManager__releaseAsset_30152684(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadAssets(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4187BD9 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_4187BD9 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
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

  if ( (byte_4187BDA & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_4187BDA = 1;
  }
  memset(&v11, 0, sizeof(v11));
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)loadedList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
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
      AssetManager__releaseAsset_30152684(AssetStorage, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  loadedList = this->fields.loadedList;
  if ( !loadedList )
LABEL_16:
    sub_B2C434(loadedList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadedList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall ServantAssetLoadManager__unloadBattleActor(ServantAssetArgs_o *args, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_4187BA0 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4187BA0 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_B2C434(Instance, v4);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *ActorFolderName; // x0
  __int64 v13; // x1
  WarBoardManager_TaskList_o *v14; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4187BA1 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, v10);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v11);
    byte_4187BA1 = 1;
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
  v14 = (WarBoardManager_TaskList_o *)ActorFolderName;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)ActorFolderName,
         (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    ActorFolderName = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( ActorFolderName )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        ActorFolderName,
        v14,
        (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_12;
    }
LABEL_16:
    sub_B2C434(ActorFolderName, v13);
  }
LABEL_12:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v14, 0LL);
  AssetManager__releaseAsset_30152684(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadCameraAction(int32_t cameraId, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4187BDF & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4187BDF = 1;
  }
  if ( cameraId )
  {
    Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v4);
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

  if ( (byte_4187BE0 & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&cameraId);
    byte_4187BE0 = 1;
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
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4187B71 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4187B71 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
  ServantAssetLoadManager__unloadCommandCardlocal(Instance, svtId, v6, v7);
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
  __int64 v10; // x1
  WarBoardManager_TaskList_o *v11; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4187B72 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, v7);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v8);
    byte_4187B72 = 1;
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
  v11 = (WarBoardManager_TaskList_o *)CommandCardLoadFolderName;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)CommandCardLoadFolderName,
         (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    CommandCardLoadFolderName = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( CommandCardLoadFolderName )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        CommandCardLoadFolderName,
        v11,
        (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_10;
    }
LABEL_14:
    sub_B2C434(CommandCardLoadFolderName, v10);
  }
LABEL_10:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v11, 0LL);
  AssetManager__releaseAsset_30152684(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadCommandSpellAnyVoice(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4187B95 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_4187B95 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
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
  __int64 v6; // x1
  int v7; // w8
  _DWORD *v8; // x19
  unsigned int i; // w21
  char *v10; // x23
  CommandSpellEntity_o *v11; // x0
  void **v12; // x23
  CommandSpellEntity_o *v13; // t1
  SoundManager_o *v14; // x20
  __int64 v15; // x0

  if ( (byte_4187B96 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandSpellMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_CommandSpellEntity___, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v4);
    byte_4187B96 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL
    || (Instance = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                     (DataMasterBase_o *)Instance,
                     (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_CommandSpellEntity___)) == 0LL )
  {
LABEL_21:
    sub_B2C434(Instance, v6);
  }
  v7 = *((_DWORD *)Instance + 6);
  v8 = Instance;
  if ( v7 >= 1 )
  {
    for ( i = 0; (int)i < v7; ++i )
    {
      if ( i >= v7 )
      {
LABEL_20:
        v15 = sub_B2C460(Instance);
        sub_B2C400(v15, 0LL);
      }
      v10 = (char *)&v8[2 * i];
      v13 = (CommandSpellEntity_o *)*((_QWORD *)v10 + 4);
      v12 = (void **)(v10 + 32);
      v11 = v13;
      if ( !v13 )
        return;
      Instance = (void *)CommandSpellEntity__isUseBattle(v11, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( i >= v8[6] )
          goto LABEL_20;
        Instance = *v12;
        if ( !*v12 )
          goto LABEL_21;
        Instance = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
        if ( Instance )
        {
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
          if ( i >= v8[6] )
            goto LABEL_20;
          v14 = (SoundManager_o *)Instance;
          Instance = *v12;
          if ( !*v12 )
            goto LABEL_21;
          Instance = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
          if ( !v14 )
            goto LABEL_21;
          SoundManager__ReleaseAudioAssetStorage(v14, (System_String_o *)Instance, 0LL);
        }
      }
      v7 = v8[6];
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

  if ( (byte_4187BED & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4187BED = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  ServantAssetLoadManager__unloadFromDeckServantlocal(Instance, deckSvt, v5);
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
  __int64 v12; // x1
  System_String_o *v13; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4187BEE & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, deckSvt);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, v6);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v7);
    byte_4187BEE = 1;
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
        v13 = (System_String_o *)NameEffectPath;
        if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
                NameEffectPath,
                (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
LABEL_12:
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          AssetStorage = AssetManager__getAssetStorage(v13, 0LL);
          AssetManager__releaseAsset_30152684(AssetStorage, 0LL);
          return;
        }
        NameEffectPath = (WarBoardManager_TaskList_o *)this->fields.loadedList;
        if ( NameEffectPath )
        {
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)NameEffectPath,
            (WarBoardManager_TaskList_o *)v13,
            (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__);
          goto LABEL_12;
        }
      }
      sub_B2C434(NameEffectPath, v12);
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadServant(ServantAssetArgs_o *args, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4187B89 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4187B89 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  ServantAssetLoadManager__unloadServantlocal(Instance, args, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadServantVoice(
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4187B8D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4187B8D = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v8);
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
  __int64 v9; // x1
  int32_t VoiceId; // w0
  int32_t v11; // w8
  SoundManager_o *Instance; // x19
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4187B8E & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, *(_QWORD *)&svtId);
    sub_B2C35C(&StringLiteral_12739/*"Servants_"*/, v9);
    byte_4187B8E = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v11 = overwriteSvtVoiceId;
  else
    v11 = VoiceId;
  v16 = v11;
  if ( v11 )
  {
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v13 = System_Int32__ToString((int32_t)&v16, 0LL);
    v14 = System_String__Concat_44305532((System_String_o *)StringLiteral_12739/*"Servants_"*/, v13, 0LL);
    if ( !Instance )
      sub_B2C434(v14, v15);
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
    sub_B2C434(this, 0LL);
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

  if ( (byte_4187B91 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4187B91 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  ServantAssetLoadManager__unloadSkillAnyVoiceLocal(Instance, skillInfo, v5);
}


void __fastcall ServantAssetLoadManager__unloadSkillAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x20
  System_String_o *VoiceAssetName; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v12; // x19
  SoundManager_o *Instance; // x20

  if ( (byte_4187B92 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v5);
    byte_4187B92 = 1;
  }
  if ( skillInfo
    && ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
         skillInfo,
         skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
         method)
    && skillInfo->fields.skilllv )
  {
    v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v8 = **(_QWORD **)(v7 + 192);
    if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
      sub_AC505C(v8);
    VoiceAssetName = **(System_String_o ***)(v8 + 184);
    if ( !VoiceAssetName )
      goto LABEL_17;
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)VoiceAssetName,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
      v12 = Entity;
      if ( SkillLvEntity__getVoiceAssetName(Entity, 0LL) )
      {
        Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        VoiceAssetName = SkillLvEntity__getVoiceAssetName(v12, 0LL);
        if ( Instance )
        {
          SoundManager__ReleaseAudioAssetStorage(Instance, VoiceAssetName, 0LL);
          return;
        }
LABEL_17:
        sub_B2C434(VoiceAssetName, v6);
      }
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadSkillCutIn(BattleSkillInfoData_o *skillInfo, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4187BBF & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4187BBF = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4187B79 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4187B79 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  ServantAssetLoadManager__unloadStatusFacelocal(Instance, svtId, limitCount, v7);
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
  __int64 v13; // x1
  WarBoardManager_TaskList_o *v14; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4187B7A & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, v8);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v9);
    byte_4187B7A = 1;
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
  v14 = (WarBoardManager_TaskList_o *)StatusImageFolderName;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)StatusImageFolderName,
         (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    StatusImageFolderName = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( StatusImageFolderName )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        StatusImageFolderName,
        v14,
        (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_10;
    }
LABEL_14:
    sub_B2C434(StatusImageFolderName, v13);
  }
LABEL_10:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v14, 0LL);
  AssetManager__releaseAsset_30152684(AssetStorage, 0LL);
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

  if ( (byte_4187BBB & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, path);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, v6);
    byte_4187BBB = 1;
  }
  loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_16;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         loadedList,
         (WarBoardManager_TaskList_o *)path,
         (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( loadedList )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadedList,
        (WarBoardManager_TaskList_o *)path,
        (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_7;
    }
LABEL_16:
    sub_B2C434(loadedList, path);
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
    AssetManager__releaseAsset_30152684(v9, 0LL);
  }
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssets(
        System_String_array *pathList,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4187BBA & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4187BBA = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
    sub_B2C434(this, 0LL);
  v3 = *(_QWORD *)&pathList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
      {
        v7 = sub_B2C460(this);
        sub_B2C400(v7, 0LL);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4187BB4 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&effectFolder);
    byte_4187BB4 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  ServantAssetLoadManager__unloadWeaponGroupEffectlocal(Instance, weapongroup, effectFolder, v7);
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
  __int64 v11; // x1
  System_String_o *v12; // x20
  System_String_o *v13; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  int32_t v16; // [xsp+8h] [xbp-18h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-14h] BYREF

  v16 = effectFolder;
  v17 = weapongroup;
  if ( (byte_4187BB5 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&weapongroup);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, v7);
    sub_B2C35C(&StringLiteral_5862/*"Effect/weapon/"*/, v8);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v9);
    byte_4187BB5 = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v17, 0LL);
  v12 = System_String__Concat_44305532((System_String_o *)StringLiteral_5862/*"Effect/weapon/"*/, v10, 0LL);
  if ( effectFolder )
  {
    v13 = System_Int32__ToString((int32_t)&v16, 0LL);
    v12 = System_String__Concat_44307816(v12, (System_String_o *)StringLiteral_872/*"/"*/, v13, 0LL);
  }
  loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_13;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         loadedList,
         (WarBoardManager_TaskList_o *)v12,
         (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( loadedList )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadedList,
        (WarBoardManager_TaskList_o *)v12,
        (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_9;
    }
LABEL_13:
    sub_B2C434(loadedList, v11);
  }
LABEL_9:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v12, 0LL);
  AssetManager__releaseAsset_30152684(AssetStorage, 0LL);
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
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  struct WellFired_USFGOChangeBgEvent_array *bgList; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x22
  ServantAssetLoadManager__GetAheadBg_d__154_o **p_bgAheadList_5__2; // x21
  struct WellFired_USFGOChangeBgEvent_array *v21; // x22
  int max_length; // w8
  unsigned int v23; // w23
  __int64 v24; // x1
  System_String_o *v25; // x1
  System_String_o *v26; // x22
  AssetLoader_LoadEndDataHandler_o *v27; // x23
  Il2CppClass *klass; // x9
  bool result; // w0
  __int64 v30; // x0
  UnityEngine_WaitForEndOfFrame_o *v31; // x20
  Il2CppObject **p__2__current; // x19
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_41853C3 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetData__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__get_Count__, v10);
    sub_B2C35C(&System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo, v11);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v12);
    sub_B2C35C(&Method_ServantAssetLoadManager__GetAheadBg_b__154_0__, v13);
    sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v14);
    this = (ServantAssetLoadManager__GetAheadBg_d__154_o *)sub_B2C35C(&StringLiteral_2803/*"Bg/"*/, v15);
    byte_41853C3 = 1;
  }
  memset(&v34, 0, sizeof(v34));
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
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v19,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__);
    v2->fields._bgAheadList_5__2 = (struct System_Collections_Generic_List_USFGOChangeBgEvent__o *)v19;
    p_bgAheadList_5__2 = (ServantAssetLoadManager__GetAheadBg_d__154_o **)&v2->fields._bgAheadList_5__2;
    sub_B2C2F8(&v2->fields._bgAheadList_5__2, v19);
    v21 = v2->fields.bgList;
    if ( !v21 )
      goto LABEL_33;
    max_length = v21->max_length;
    if ( max_length >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        if ( v23 >= max_length )
        {
          v30 = sub_B2C460(this);
          sub_B2C400(v30, 0LL);
        }
        method = (const MethodInfo *)v21->m_Items[v23];
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
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__);
        }
        max_length = v21->max_length;
        if ( (int)++v23 >= max_length )
          goto LABEL_15;
      }
LABEL_33:
      sub_B2C434(this, method);
    }
LABEL_15:
    this = *p_bgAheadList_5__2;
    if ( !*p_bgAheadList_5__2 )
      goto LABEL_33;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v33,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__);
    v34 = v33;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v34,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__) )
    {
      if ( !v34.fields.current )
        sub_B2C434(0LL, v24);
      v25 = (System_String_o *)((__int64 (*)(void))v34.fields.current->klass->vtable[16].method)();
      v26 = System_String__Concat_44305532((System_String_o *)StringLiteral_2803/*"Bg/"*/, v25, 0LL);
      v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(v27, _4__this, Method_ServantAssetLoadManager__GetAheadBg_b__154_0__, 0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__loadAssetStorage(v26, v27, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v34,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__);
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
    sub_B2C2F8(p_bgAheadList_5__2, 0LL);
    goto LABEL_30;
  }
  v31 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v31, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v31;
  p__2__current = &v2->fields.__2__current;
  sub_B2C2F8(p__2__current, v31);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_ServantAssetLoadManager__GetAheadBg_d__154_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  Il2CppObject *v2; // x19
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x0

  if ( (byte_41853C1 & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager___c_TypeInfo, v1);
    byte_41853C1 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantAssetLoadManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantAssetLoadManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, data);
  _4__this->fields.nobleSequenceData = data;
  sub_B2C2F8(&_4__this->fields.nobleSequenceData, data);
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
  System_Action_o *_9__2; // x22
  WellFired_USFGOChangeBgEvent_array *v29; // x20
  ServantAssetLoadManager_o *v30; // x21

  if ( (byte_41853C2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, assetData);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v8);
    sub_B2C35C(&Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__2__, v9);
    sub_B2C35C(&StringLiteral_3961/*"ChrSequence1"*/, v10);
    byte_41853C2 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  _4__this->fields.nobleAssetData = assetData;
  sub_B2C2F8(&_4__this->fields.nobleAssetData, assetData);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  AssetObject_Texture2D = ServantAssetLoadManager__getAssetObject_Texture2D_(
                            _4__this,
                            this->fields.sequencePath,
                            (System_String_o *)StringLiteral_3961/*"ChrSequence1"*/,
                            (const MethodInfo_2099E48 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                             (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.sequence = v13;
  p_sequence = &this->fields.sequence;
  sub_B2C2F8(&this->fields.sequence, v13);
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
  _4__this = (ServantAssetLoadManager_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                            (UnityEngine_GameObject_o *)_4__this,
                                            (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___);
  _9__2 = this->fields.__9__2;
  v29 = (WellFired_USFGOChangeBgEvent_array *)_4__this;
  v30 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( !v30 )
LABEL_23:
    sub_B2C434(_4__this, assetData);
  ServantAssetLoadManager__LoadBg(v30, v29, _9__2, 0LL);
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
  struct ServantAssetLoadManager_o *_4__this; // x21
  Il2CppObject *v29; // x22
  Il2CppObject **p__8__1; // x20
  struct ServantAssetLoadManager_o *v31; // x1
  struct UnityEngine_GameObject_o *parent; // x1
  TreasureDeviceSequenceWeightEntity_o *EntityWithCommonPattern; // x0
  int32_t _1__state; // w8
  int v35; // w9
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v36; // x8
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o **v37; // x24
  System_String_o *v38; // x20
  Il2CppObject *v39; // x23
  AssetLoader_LoadEndDataHandler_o *v40; // x22
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *v41; // x8
  UnityEngine_Object_o *v42; // x20
  System_Collections_Generic_List_int__o *v43; // x20
  System_Int32_array *funcId; // x20
  int v45; // w20
  int _2__current; // w8
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *v47; // x20
  __int64 v48; // x22
  Il2CppObject **p__2__current; // x19
  int v50; // w8
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v51; // x8
  UnityEngine_GameObject_o *sequence; // x21
  ServantAssetLoadManager_onGameObjectLoadComplete_o *callback; // x20
  int32_t seqIdFromMstTDSeqWeight_5__2; // w22
  int32_t groupSeqIdFromMstTDSeqWeight_5__3; // w23
  System_Tuple_int__int__o *v56; // x19
  const MethodInfo *v57; // x3
  bool result; // w0
  int32_t limitCount; // w1
  int32_t RandomSeqIdEachLimit; // w0
  Il2CppObject *v61; // x21
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *_8__1; // x8
  System_String_o *sequencePath; // x22
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v67; // x22
  System_String_o *v68; // x0
  System_String_o *nobleDataPath_5__4; // x22
  System_String_o *v70; // x0
  System_String_o *v71; // x0
  Il2CppObject *v72; // x23
  System_String_o *monitor; // x21
  AssetLoader_LoadEndDataHandler_o *v74; // x22
  int monitor_low; // w20
  __int64 v76; // x0
  TreasureDvcLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_int__o *effectIdList; // [xsp+10h] [xbp-50h] BYREF
  WarEntity_o *v79; // [xsp+18h] [xbp-48h] BYREF
  int32_t v80; // [xsp+2Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_41853C4 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_TreasureDvcMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___, v9);
    sub_B2C35C(&int___TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__AddRange__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&Method_System_Tuple_int__int___ctor__, v19);
    sub_B2C35C(&Method_System_Tuple_int__int__get_Item1__, v20);
    sub_B2C35C(&Method_System_Tuple_int__int__get_Item2__, v21);
    sub_B2C35C(&System_Tuple_int__int__TypeInfo, v22);
    sub_B2C35C(&Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__0__, v23);
    sub_B2C35C(&Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__1__, v24);
    sub_B2C35C(&ServantAssetLoadManager___c__DisplayClass152_0_TypeInfo, v25);
    sub_B2C35C(&StringLiteral_9595/*"NoblePhantasm/"*/, v26);
    this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)sub_B2C35C(&StringLiteral_9597/*"NoblePhantasm/Sequence/"*/, v27);
    byte_41853C4 = 1;
  }
  v80 = 0;
  effectIdList = 0LL;
  v79 = 0LL;
  entity = 0LL;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v29 = (Il2CppObject *)sub_B2C42C(ServantAssetLoadManager___c__DisplayClass152_0_TypeInfo);
      System_Object___ctor(v29, 0LL);
      p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
      v2->fields.__8__1 = (struct ServantAssetLoadManager___c__DisplayClass152_0_o *)v29;
      sub_B2C2F8(&v2->fields.__8__1, v29);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)v2->fields.__8__1;
      if ( !this )
        goto LABEL_108;
      v31 = v2->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v31;
      sub_B2C2F8(&this->fields, v31);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)v2->fields.__8__1;
      if ( !this )
        goto LABEL_108;
      parent = v2->fields.parent;
      *(_QWORD *)&this->fields.treasureDvcId = parent;
      sub_B2C2F8(&this->fields.treasureDvcId, parent);
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
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___);
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
        v35 = *(&this->fields.__1__state + 1);
        if ( v35 >= 1 )
          v2->fields._groupSeqIdFromMstTDSeqWeight_5__3 = v35;
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
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_TreasureDvcMaster___);
      if ( !this )
        goto LABEL_108;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
              &v79,
              v2->fields.treasureDvcId,
              (const MethodInfo_24E412C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
      {
        _1__state = v2->fields.treasureDvcId;
LABEL_80:
        v80 = _1__state;
        goto LABEL_83;
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)v79;
      if ( !v79 )
        goto LABEL_108;
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)TreasureDvcEntity__IsRandomTD(
                                                                               (TreasureDvcEntity_o *)v79,
                                                                               0LL);
      if ( !v79 )
        goto LABEL_108;
      limitCount = v2->fields.limitCount;
      if ( ((unsigned __int8)this & 1) != 0 )
        RandomSeqIdEachLimit = TreasureDvcEntity__getRandomSeqIdEachLimit(
                                 (TreasureDvcEntity_o *)v79,
                                 limitCount,
                                 0,
                                 0LL);
      else
        RandomSeqIdEachLimit = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)v79, limitCount, 0LL);
      v80 = RandomSeqIdEachLimit;
LABEL_83:
      v61 = *p__8__1;
      v62 = System_Int32__ToString((int32_t)&v80, 0LL);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)System_String__Concat_44305532(
                                                                               (System_String_o *)StringLiteral_9597/*"NoblePhantasm/Sequence/"*/,
                                                                               v62,
                                                                               0LL);
      if ( !v61 )
        goto LABEL_108;
      v61[2].monitor = this;
      sub_B2C2F8(&v61[2].monitor, this);
      v63 = System_Int32__ToString((int32_t)&v80, 0LL);
      v64 = System_String__Concat_44305532((System_String_o *)StringLiteral_9595/*"NoblePhantasm/"*/, v63, 0LL);
      v2->fields._nobleDataPath_5__4 = v64;
      sub_B2C2F8(&v2->fields._nobleDataPath_5__4, v64);
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
        v67 = v2->fields.__8__1;
        v68 = System_Int32__ToString((int)v2 + 60, 0LL);
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)System_String__Concat_44305532(
                                                                                 (System_String_o *)StringLiteral_9597/*"NoblePhantasm/Sequence/"*/,
                                                                                 v68,
                                                                                 0LL);
        if ( !v67 )
          goto LABEL_108;
        v67->fields.sequencePath = (struct System_String_o *)this;
        sub_B2C2F8(&v67->fields.sequencePath, this);
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
        v70 = System_Int32__ToString((int)v2 + 60, 0LL);
        v71 = System_String__Concat_44305532((System_String_o *)StringLiteral_9595/*"NoblePhantasm/"*/, v70, 0LL);
        v2->fields._nobleDataPath_5__4 = v71;
        sub_B2C2F8(&v2->fields._nobleDataPath_5__4, v71);
      }
      if ( !*p__8__1 )
        goto LABEL_108;
      LOBYTE((*p__8__1)[1].monitor) = 0;
      v72 = *p__8__1;
      if ( !*p__8__1 )
        goto LABEL_108;
      monitor = (System_String_o *)v72[2].monitor;
      v74 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v74,
        v72,
        Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__0__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)AssetManager__loadAssetStorage(
                                                                               monitor,
                                                                               v74,
                                                                               1,
                                                                               0LL);
LABEL_102:
      if ( !*p__8__1 )
        goto LABEL_108;
      monitor_low = LOBYTE((*p__8__1)[1].monitor);
      v2->fields.__2__current = 0LL;
      sub_B2C2F8(&v2->fields.__2__current, 0LL);
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
      v37 = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o **)&v2->fields.__8__1;
      v36 = v2->fields.__8__1;
      v2->fields.__1__state = -1;
      if ( !v36 )
        goto LABEL_108;
      v36->fields.isNext = 0;
      this = *v37;
      if ( !*v37 )
        goto LABEL_108;
      this->fields.__4__this = 0LL;
      sub_B2C2F8(&this->fields.__4__this, 0LL);
      v38 = v2->fields._nobleDataPath_5__4;
      v39 = (Il2CppObject *)v2->fields.__8__1;
      v40 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v40,
        v39,
        Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__1__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)AssetManager__loadAssetStorage(
                                                                               v38,
                                                                               v40,
                                                                               1,
                                                                               0LL);
LABEL_25:
      v41 = *v37;
      if ( !*v37 )
        goto LABEL_108;
      if ( LOBYTE(v41->fields.__2__current) )
      {
        v42 = (UnityEngine_Object_o *)v41->fields.__4__this;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
          goto LABEL_61;
        v43 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v43,
          (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
        effectIdList = v43;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_108;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)this,
                                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
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
            sub_B2C434(this, method);
          this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
                                                                                   entity,
                                                                                   0LL);
          if ( (int)this >= 1 )
          {
            v45 = (int)this;
            this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)sub_B2C374(int___TypeInfo, 1LL);
            if ( !this )
              goto LABEL_108;
            method = (const MethodInfo *)this;
            if ( !LODWORD(this->fields.__2__current) )
            {
LABEL_109:
              v76 = sub_B2C460(this);
              sub_B2C400(v76, 0LL);
            }
            LODWORD(this->fields.__4__this) = v45;
            if ( !_4__this )
              goto LABEL_108;
            this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                                                                     _4__this,
                                                                                     (System_Int32_array *)this,
                                                                                     0LL);
          }
        }
        if ( !*v37 )
          goto LABEL_108;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)(*v37)->fields.__4__this;
        if ( !this )
          goto LABEL_108;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                                                                 (UnityEngine_GameObject_o *)this,
                                                                                 (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
        if ( this )
        {
          _2__current = (int)this->fields.__2__current;
          v47 = this;
          if ( _2__current >= 1 )
          {
            v48 = 0LL;
            while ( (unsigned int)v48 < _2__current )
            {
              this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)*((_QWORD *)&v47->fields.__4__this
                                                                                     + v48);
              if ( !this )
                goto LABEL_108;
              WellFired_USFGOActorBattleActionEvent__AddHasAllEffectIds(
                (WellFired_USFGOActorBattleActionEvent_o *)this,
                &effectIdList,
                0LL);
              _2__current = (int)v47->fields.__2__current;
              if ( (int)++v48 >= _2__current )
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
                                                                                 (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_string__AddRange__);
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
          sub_B2C2F8(p__2__current, 0LL);
          v50 = 4;
        }
        else
        {
LABEL_61:
          v2->fields.__2__current = 0LL;
          p__2__current = &v2->fields.__2__current;
          sub_B2C2F8(p__2__current, 0LL);
          v50 = 5;
        }
      }
      else
      {
        v2->fields.__2__current = 0LL;
        p__2__current = &v2->fields.__2__current;
        sub_B2C2F8(p__2__current, 0LL);
        v50 = 3;
      }
      *((_DWORD *)p__2__current - 2) = v50;
      return 1;
    case 3:
      v37 = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o **)&v2->fields.__8__1;
      v2->fields.__1__state = -1;
      goto LABEL_25;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_56;
    case 5:
      v51 = v2->fields.__8__1;
      v2->fields.__1__state = -1;
      if ( !v51 )
        goto LABEL_108;
      sequence = v51->fields.sequence;
      callback = v2->fields.callback;
      seqIdFromMstTDSeqWeight_5__2 = v2->fields._seqIdFromMstTDSeqWeight_5__2;
      groupSeqIdFromMstTDSeqWeight_5__3 = v2->fields._groupSeqIdFromMstTDSeqWeight_5__3;
      v56 = (System_Tuple_int__int__o *)sub_B2C42C(System_Tuple_int__int__TypeInfo);
      System_Tuple_int__int____ctor(
        v56,
        seqIdFromMstTDSeqWeight_5__2,
        groupSeqIdFromMstTDSeqWeight_5__3,
        (const MethodInfo_26571E4 *)Method_System_Tuple_int__int___ctor__);
      if ( !callback )
        goto LABEL_108;
      ServantAssetLoadManager_onGameObjectLoadComplete__Invoke(callback, sequence, v56, v57);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  sub_B2C2F8(p_method, object);
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
  return (System_IAsyncResult_o *)sub_B2C300(this, v7, callback, object);
}


void __fastcall ServantAssetLoadManager_onGameObjectLoadComplete__EndInvoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v13; // x3
  UnityEngine_GameObject_c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  unsigned int v19; // w24
  __int64 v20; // x0
  __int64 v21; // x3
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  _DWORD *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  void (__fastcall **v28)(UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD); // x0
  __int64 v29; // x0
  void (__fastcall **v30)(__int64 *, UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD); // x0
  ServantAssetLoadManager_onGameObjectLoadComplete_o *v31; // x8
  __int64 v32; // x22
  __int64 *v33; // x23
  void (__fastcall *v34)(UnityEngine_GameObject_o *, System_Tuple_int__int__o *, __int64); // x24
  char v35; // w0
  int v36; // w8
  char v37; // w24
  char v38; // w0
  __int64 v39; // x3
  __int64 v40; // x8
  __int64 v41; // x1
  __int64 v42; // x2
  unsigned __int64 v43; // x10
  _DWORD *v44; // x11
  char v45; // w23
  char v46; // w0
  __int64 v47; // x3
  UnityEngine_GameObject_c *klass; // x8
  __int64 v49; // x1
  __int64 v50; // x2
  unsigned __int64 v51; // x10
  int32_t *p_offset; // x11
  ServantAssetLoadManager_onGameObjectLoadComplete_o *v53; // [xsp+8h] [xbp-48h] BYREF

  v53 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v53;
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
      v31 = v9[i];
      v33 = *(__int64 **)&v31->fields.method;
      v32 = *(_QWORD *)&v31->fields.extra_arg;
      v34 = *(void (__fastcall **)(UnityEngine_GameObject_o *, System_Tuple_int__int__o *, __int64))&v31->fields.method_ptr;
      if ( *(__int16 *)(v32 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v31->fields.extra_arg, obj, paramsFromMstTDSeqWeight, method);
      v35 = sub_B2C38C(v32);
      v36 = *(unsigned __int8 *)(v32 + 74);
      if ( (v35 & 1) != 0 )
      {
        if ( v36 == 2 )
          goto LABEL_58;
      }
      else
      {
        if ( v36 != 2 )
        {
          if ( *(__int16 *)(v32 + 72) != -1 && this->fields.m_target )
          {
            v45 = sub_B2C384(v32);
            v46 = sub_B2C788(v32);
            if ( (v45 & 1) != 0 )
            {
              if ( (v46 & 1) != 0 )
              {
                klass = obj->klass;
                v49 = *(_QWORD *)(v32 + 24);
                v50 = *(unsigned __int16 *)(v32 + 72);
                if ( *(_WORD *)&obj->klass->_2.bitflags1 )
                {
                  v51 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v49 )
                  {
                    ++v51;
                    p_offset += 4;
                    if ( v51 >= *(unsigned __int16 *)&obj->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v50);
                }
                else
                {
LABEL_57:
                  v27 = sub_AC5258(obj, v49, v50, v47);
                }
                v18 = *(_QWORD *)(v27 + 8);
              }
              else
              {
                v18 = *((_QWORD *)&obj->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v32 + 72));
              }
              v28 = (void (__fastcall **)(UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))sub_B2C40C(v18, v32);
              (*v28)(obj, paramsFromMstTDSeqWeight, v28);
            }
            else
            {
              v11 = *(unsigned __int16 *)(v32 + 72);
              if ( (v46 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v32);
                v14 = obj->klass;
                if ( *(_WORD *)&obj->klass->_2.bitflags1 )
                {
                  v15 = 0LL;
                  v16 = &v14->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v16 - 1) != class_0 )
                  {
                    ++v15;
                    v16 += 4;
                    if ( v15 >= *(unsigned __int16 *)&obj->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v17 = (__int64)(&v14->vtable._0_Equals.method + 2 * (int)(*v16 + v11));
                }
                else
                {
LABEL_11:
                  v17 = sub_AC5258(obj, class_0, v11, v13);
                }
                (*(void (__fastcall **)(UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))v17)(
                  obj,
                  paramsFromMstTDSeqWeight,
                  *(_QWORD *)(v17 + 8));
              }
              else
              {
                (*((void (__fastcall **)(UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))&obj->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v32 + 72)))(
                  obj,
                  paramsFromMstTDSeqWeight,
                  *((_QWORD *)&obj->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v32 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v34(obj, paramsFromMstTDSeqWeight, v32);
          continue;
        }
        if ( !v33 )
          goto LABEL_58;
        if ( *(__int16 *)(v32 + 72) != -1 && (*(_BYTE *)(*v33 + 277) & 1) == 0 && this->fields.m_target )
        {
          v37 = sub_B2C384(v32);
          v38 = sub_B2C788(v32);
          if ( (v37 & 1) != 0 )
          {
            if ( (v38 & 1) != 0 )
            {
              v40 = *v33;
              v41 = *(_QWORD *)(v32 + 24);
              v42 = *(unsigned __int16 *)(v32 + 72);
              if ( *(_WORD *)(*v33 + 298) )
              {
                v43 = 0LL;
                v44 = (_DWORD *)(*(_QWORD *)(v40 + 176) + 8LL);
                while ( *((_QWORD *)v44 - 1) != v41 )
                {
                  ++v43;
                  v44 += 4;
                  if ( v43 >= *(unsigned __int16 *)(*v33 + 298) )
                    goto LABEL_48;
                }
                v29 = v40 + 16LL * (*v44 + (int)v42) + 312;
              }
              else
              {
LABEL_48:
                v29 = sub_AC5258(v33, v41, v42, v39);
              }
              v26 = *(_QWORD *)(v29 + 8);
            }
            else
            {
              v26 = *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320);
            }
            v30 = (void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))sub_B2C40C(v26, v32);
            (*v30)(v33, obj, paramsFromMstTDSeqWeight, v30);
          }
          else
          {
            v19 = *(unsigned __int16 *)(v32 + 72);
            if ( (v38 & 1) != 0 )
            {
              v20 = j_il2cpp_method_get_class_0(v32);
              v22 = *v33;
              if ( *(_WORD *)(*v33 + 298) )
              {
                v23 = 0LL;
                v24 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
                while ( *((_QWORD *)v24 - 1) != v20 )
                {
                  ++v23;
                  v24 += 4;
                  if ( v23 >= *(unsigned __int16 *)(*v33 + 298) )
                    goto LABEL_19;
                }
                v25 = v22 + 16LL * (int)(*v24 + v19) + 312;
              }
              else
              {
LABEL_19:
                v25 = sub_AC5258(v33, v20, v19, v21);
              }
              (*(void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))v25)(
                v33,
                obj,
                paramsFromMstTDSeqWeight,
                *(_QWORD *)(v25 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 312))(
                v33,
                obj,
                paramsFromMstTDSeqWeight,
                *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, UnityEngine_GameObject_o *, System_Tuple_int__int__o *, __int64))v34)(
        v33,
        obj,
        paramsFromMstTDSeqWeight,
        v32);
    }
  }
}