void __fastcall ServantAssetLoadManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v13; // x19
  struct ServantAssetLoadManager_StaticFields *static_fields; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct ServantAssetLoadManager_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E990F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__, v1, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo, v4, v5, v6);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_1/*""*/, v10, v11, v12);
    byte_42E990F = 1;
  }
  ServantAssetLoadManager_TypeInfo->static_fields->KeepAssetPlayerServantCount = 3;
  v13 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v13,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__);
  static_fields = ServantAssetLoadManager_TypeInfo->static_fields;
  static_fields->unloadIgnoredAssetArgs = (struct System_Collections_Generic_Dictionary_string__ServantAssetArgs__o *)v13;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->unloadIgnoredAssetArgs,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = ServantAssetLoadManager_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_1/*""*/;
  v21->wkSpace = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&v21->wkSpace, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall ServantAssetLoadManager___ctor(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x20
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v56; // x20
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v63; // x20
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // x20
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x20
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v84; // x20
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7

  if ( (byte_42E990E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__string___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__Object___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__string__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__Object__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_AssetData__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__, v32, v33, v34);
    byte_42E990E = 1;
  }
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedList = (struct System_Collections_Generic_List_string__o *)v35;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.loadedList,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadlist = (struct System_Collections_Generic_List_string__o *)v42;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.loadlist,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.downloadlist = (struct System_Collections_Generic_List_string__o *)v49;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.downloadlist,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v56 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v56,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__);
  this->fields.ActorVoice = (struct System_Collections_Generic_Dictionary_int__SePlayer__o *)v56;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.ActorVoice,
    (System_Int32_array **)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__string__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v63,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  this->fields.LastActorVoice = (struct System_Collections_Generic_Dictionary_int__string__o *)v63;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.LastActorVoice,
    (System_Int32_array **)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v70,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v70;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bgAssetDataList,
    (System_Int32_array **)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v77 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v77,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.nobleEffectList = (struct System_Collections_Generic_List_string__o *)v77;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.nobleEffectList,
    (System_Int32_array **)v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  this->fields.InitPoint.fields.z = 0.0;
  *(_QWORD *)&this->fields.InitPoint.fields.x = 0x3D4CCCCD00000000LL;
  v84 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__Object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v84,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__Object___ctor__);
  this->fields._releaseAssets = (struct System_Collections_Generic_Dictionary_string__Object__o *)v84;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._releaseAssets,
    (System_Int32_array **)v84,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__);
}


bool __fastcall ServantAssetLoadManager__CheckLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadlist; // x0

  if ( (byte_42E9908 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, (_DWORD)path, (_DWORD)method, v3);
    byte_42E9908 = 1;
  }
  loadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadlist;
  if ( !loadlist )
    sub_B5D69C(0LL, path);
  return System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           loadlist,
           (WarBoardManager_TaskList_o *)path,
           (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__);
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
    sub_B5D69C(this, data);
  svtmaster = (int)this->fields.svtmaster;
  if ( svtmaster >= 1 )
  {
    for ( i = 0; i < svtmaster; ++i )
    {
      if ( i >= (unsigned int)svtmaster )
      {
        v5 = sub_B5D6C8(this);
        sub_B5D668(v5, 0LL);
      }
    }
  }
}


void __fastcall ServantAssetLoadManager__DownLoadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42E98A3 & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E98A3 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *Instance; // x0
  __int64 v27; // x1
  ServantAssetLoadManager_c *v28; // x0
  ServantAssetArgs_o *currentValue; // x19
  int32_t v30; // w22
  const MethodInfo *v31; // x1
  _BOOL8 v32; // x0
  ServantAssetLoadManager_c *v33; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v34; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v35; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E9907 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__,
      v23,
      v24,
      v25);
    byte_42E9907 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  this->fields._IsRetryTransition_k__BackingField = 0;
  Instance = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  LODWORD(Instance[1].fields.values) = 3;
  v28 = ServantAssetLoadManager_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v28 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)v28->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
    goto LABEL_24;
  Instance = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                          Instance,
                                                                                          (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__);
  if ( !Instance )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v34,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v32 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v35,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__);
    if ( !v32 )
      break;
    currentValue = (ServantAssetArgs_o *)v35.fields.currentValue;
    if ( !v35.fields.currentValue )
      sub_B5D69C(v32, v31);
    if ( SLODWORD(v35.fields.currentValue[5].monitor) >= 1 )
    {
      v30 = 0;
      do
      {
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        ServantAssetLoadManager__UnloadAssetsByArgs(currentValue, v31);
        ++v30;
      }
      while ( v30 < currentValue->fields._UnloadCount_k__BackingField );
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v35,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__);
  v33 = ServantAssetLoadManager_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v33 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)v33->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
LABEL_24:
    sub_B5D69C(Instance, v27);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Instance,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__);
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

  if ( (byte_42E98BB & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B5D5C4(&AssetManager_TypeInfo, svtId, limitCount, *(_QWORD *)&appearanceId);
    byte_42E98BB = 1;
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

  if ( (byte_42E98E8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      limit,
      overwriteSvtVoiceId,
      *(_QWORD *)&type);
    byte_42E98E8 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int32_t VoicePrefix; // w24
  const MethodInfo *v24; // x3
  int32_t VoiceId; // w0
  int32_t v26; // w9
  Il2CppObject *v27; // x20
  Il2CppObject *FileName; // x0
  System_String_o *v29; // x19
  SoundManager_o *Instance; // x20
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  __int64 v33; // x1
  int32_t v35; // [xsp+8h] [xbp-38h] BYREF
  int32_t v36; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E98E9 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, svtId, limit, *(_QWORD *)&overwriteSvtVoiceId);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Voice_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_23810/*"{0:D0}_{1}"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_12895/*"Servants_"*/, v20, v21, v22);
    byte_42E98E9 = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, *(const MethodInfo **)&overwriteSvtVoiceId);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v24);
  if ( overwriteSvtVoiceId )
    v26 = overwriteSvtVoiceId;
  else
    v26 = VoiceId;
  v35 = VoicePrefix;
  v36 = v26;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = (Il2CppObject *)Voice__getFileName(type, 0LL);
  v29 = System_String__Format_44573324((System_String_o *)StringLiteral_23810/*"{0:D0}_{1}"*/, v27, FileName, 0LL);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v31 = System_Int32__ToString((int32_t)&v36, 0LL);
  v32 = System_String__Concat_44577788((System_String_o *)StringLiteral_12895/*"Servants_"*/, v31, 0LL);
  if ( !Instance )
    sub_B5D69C(v32, v33);
  return SoundManager__IsExistsSound(Instance, v32, v29, 0LL);
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

  if ( (byte_42E98F3 & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager__GetAheadBg_d__154_TypeInfo, (_DWORD)bgList, (_DWORD)callback, method);
    byte_42E98F3 = 1;
  }
  v7 = sub_B5D694(ServantAssetLoadManager__GetAheadBg_d__154_TypeInfo);
  ServantAssetLoadManager__GetAheadBg_d__154___ctor((ServantAssetLoadManager__GetAheadBg_d__154_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = bgList;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)bgList, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


System_String_o *__fastcall ServantAssetLoadManager__GetCommandCodeFolderName(
        int32_t commandCodeId,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E9905 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_4236/*"CommandCodes/Texture/"*/, v5, v6, v7);
    byte_42E9905 = 1;
  }
  v10 = commandCodeId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Concat((Il2CppObject *)StringLiteral_4236/*"CommandCodes/Texture/"*/, v8, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__GetLastVoiceType(int32_t uniqueId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42E98EC & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E98EC = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  return ServantAssetLoadManager__GetLastVoiceTypeLocal(Instance, uniqueId, v7);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__GetLastVoiceTypeLocal(
        ServantAssetLoadManager_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_Dictionary_int__string__o *LastActorVoice; // x0
  ServantAssetLoadManager_c *v14; // x0

  if ( (byte_42E98ED & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__, uniqueId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__string__get_Item__, v6, v7, v8);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v9, v10, v11);
    byte_42E98ED = 1;
  }
  LastActorVoice = this->fields.LastActorVoice;
  if ( !LastActorVoice )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)LastActorVoice,
         uniqueId,
         (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__) )
  {
    LastActorVoice = this->fields.LastActorVoice;
    if ( LastActorVoice )
      return (System_String_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)LastActorVoice,
                                  uniqueId,
                                  (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__string__get_Item__);
LABEL_11:
    sub_B5D69C(LastActorVoice, *(_QWORD *)&uniqueId);
  }
  v14 = ServantAssetLoadManager_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v14 = ServantAssetLoadManager_TypeInfo;
  }
  return v14->static_fields->wkSpace;
}


int32_t __fastcall ServantAssetLoadManager__GetLimitImageIndex(
        int32_t svtId,
        int32_t limitCount,
        int32_t limitDiff,
        const MethodInfo *method)
{
  int v5; // w19

  v5 = limitCount;
  if ( (byte_42E9886 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, limitCount, limitDiff, method);
    byte_42E9886 = 1;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  WebViewManager_c *klass; // x8
  System_String_o *namespaze; // x19
  System_String_o *FileNameWithoutExtension; // x0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( (byte_42E9909 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_Path_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4, v5, v6);
    byte_42E9909 = 1;
  }
  result = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  Il2CppObject *v12; // x0
  int32_t VoicePrefix; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E98E5 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, servantId, limitCount, voiceId);
    sub_B5D5C4(&StringLiteral_23810/*"{0:D0}_{1}"*/, v9, v10, v11);
    byte_42E98E5 = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, servantId, limitCount, (const MethodInfo *)voiceId);
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &VoicePrefix);
  return System_String__Format_44573324((System_String_o *)StringLiteral_23810/*"{0:D0}_{1}"*/, v12, (Il2CppObject *)voiceId, 0LL);
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

  if ( (byte_42E98BA & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, svtId, limitCount, *(_QWORD *)&appearanceId);
    byte_42E98BA = 1;
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
      return ServantAssetLoadManager__getActorFolderName_26900124(v10, *(const MethodInfo **)&svtId);
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
      return ServantAssetLoadManager__getActorFolderName_26900124(v10, *(const MethodInfo **)&svtId);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  ServantAssetLoadManager___c_c *v23; // x0
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__95_0; // x20
  Il2CppObject *v26; // x21
  struct ServantAssetLoadManager___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  changeVColor_array *v34; // x0
  __int64 v35; // x8
  Il2CppObject *v36; // x19
  __int64 v38; // x0

  if ( (byte_42E98C1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleServantDeadComponent_getReplaceChocoShader__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_Shader__Shader__Shader___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_Shader__Shader__Shader__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__95_0__, v17, v18, v19);
    sub_B5D5C4(&ServantAssetLoadManager___c_TypeInfo, v20, v21, v22);
    byte_42E98C1 = 1;
  }
  v23 = ServantAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo);
    v23 = ServantAssetLoadManager___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__95_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__95_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B5D694(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__95_0,
      v26,
      Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__95_0__,
      (const MethodInfo_2C39DD0 *)Method_System_Func_Shader__Shader__Shader___ctor__);
    v27 = ServantAssetLoadManager___c_TypeInfo->static_fields;
    v27->__9__95_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__95_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v27->__9__95_0,
      (System_Int32_array **)_9__95_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !obj )
    sub_B5D69C(v23, method);
  v34 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
          obj,
          (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( v34 && (v35 = *(_QWORD *)&v34->max_length) != 0 )
  {
    if ( !(_DWORD)v35 )
    {
      v38 = sub_B5D6C8(v34);
      sub_B5D668(v38, 0LL);
    }
    v36 = (Il2CppObject *)v34->m_Items[0];
  }
  else
  {
    v36 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v36, 0LL, 0LL) )
  {
    _9__95_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B5D694(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__95_0,
      v36,
      Method_BattleServantDeadComponent_getReplaceChocoShader__,
      (const MethodInfo_2C39DD0 *)Method_System_Func_Shader__Shader__Shader___ctor__);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__95_0;
}


System_Func_Shader__Shader__Shader__o *__fastcall ServantAssetLoadManager__GetReplaceDeadShaderFunc(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  ServantAssetLoadManager___c_c *v23; // x0
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__94_0; // x20
  Il2CppObject *v26; // x21
  struct ServantAssetLoadManager___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  changeVColor_array *v34; // x0
  __int64 v35; // x8
  Il2CppObject *v36; // x19
  __int64 v38; // x0

  if ( (byte_42E98C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleServantDeadComponent_getReplaceDeadShader__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_Shader__Shader__Shader___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_Shader__Shader__Shader__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__94_0__, v17, v18, v19);
    sub_B5D5C4(&ServantAssetLoadManager___c_TypeInfo, v20, v21, v22);
    byte_42E98C0 = 1;
  }
  v23 = ServantAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo);
    v23 = ServantAssetLoadManager___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__94_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)static_fields->__9__94_0;
  if ( !_9__94_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__94_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B5D694(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__94_0,
      v26,
      Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__94_0__,
      (const MethodInfo_2C39DD0 *)Method_System_Func_Shader__Shader__Shader___ctor__);
    v27 = ServantAssetLoadManager___c_TypeInfo->static_fields;
    v27->__9__94_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__94_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v27->__9__94_0,
      (System_Int32_array **)_9__94_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !obj )
    sub_B5D69C(v23, method);
  v34 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
          obj,
          (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( v34 && (v35 = *(_QWORD *)&v34->max_length) != 0 )
  {
    if ( !(_DWORD)v35 )
    {
      v38 = sub_B5D6C8(v34);
      sub_B5D668(v38, 0LL);
    }
    v36 = (Il2CppObject *)v34->m_Items[0];
  }
  else
  {
    v36 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v36, 0LL, 0LL) )
  {
    _9__94_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B5D694(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__94_0,
      v36,
      Method_BattleServantDeadComponent_getReplaceDeadShader__,
      (const MethodInfo_2C39DD0 *)Method_System_Func_Shader__Shader__Shader___ctor__);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__94_0;
}


bool __fastcall ServantAssetLoadManager__IsIgnoreUnloadServant(BattleServantData_o *data, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantData_o *v4; // x19
  int32_t uniqueId; // w19
  ServantAssetLoadManager_c *v7; // x0

  v4 = data;
  if ( (byte_42E98A8 & 1) == 0 )
  {
    data = (BattleServantData_o *)sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E98A8 = 1;
  }
  if ( !v4 )
    sub_B5D69C(data, method);
  if ( v4->fields.isEnemy )
    return 1;
  if ( v4->fields.followerType )
    return 0;
  uniqueId = v4->fields.uniqueId;
  v7 = ServantAssetLoadManager_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v7 = ServantAssetLoadManager_TypeInfo;
  }
  return uniqueId <= v7->static_fields->KeepAssetPlayerServantCount;
}


bool __fastcall ServantAssetLoadManager__IsKeepAssetAvailable(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  WebViewManager_o *Instance; // x0
  __int64 v17; // x1
  struct UIPanel_o *basePanel; // x8
  __int64 v19; // x11
  UnityEngine_Object_o *v20; // x19
  _BYTE *monitor; // x8

  if ( (byte_42E9906 & 1) == 0 )
  {
    sub_B5D5C4(&BattleRootComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&OptionManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_6439/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, v13, v14, v15);
    byte_42E9906 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6439/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, 0LL) > 0 )
    return 0;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  basePanel = Instance->fields.basePanel;
  if ( basePanel
    && (v19 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
        *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v19) )
  {
    if ( (BattleRootComponent_c *)basePanel->klass->_2.typeHierarchy[v19 - 1] == BattleRootComponent_TypeInfo )
      v20 = (UnityEngine_Object_o *)Instance->fields.basePanel;
    else
      v20 = 0LL;
  }
  else
  {
    v20 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (WebViewManager_o *)UnityEngine_Object__op_Equality(v20, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    return 0;
  if ( !v20 || (monitor = v20[2].monitor) == 0LL )
LABEL_23:
    sub_B5D69C(Instance, v17);
  return monitor[700];
}


bool __fastcall ServantAssetLoadManager__IsStop(int32_t uniqueId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *Instance; // x0
  __int64 v12; // x1

  if ( (byte_42E98F0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v8, v9, v10);
    byte_42E98F0 = 1;
  }
  Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance->fields._syncRoot;
  if ( !Instance )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Instance,
         uniqueId,
         (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance->fields._syncRoot;
      if ( Instance )
      {
        Instance = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(Instance, uniqueId, (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        if ( Instance )
          return LOBYTE(Instance->fields.freeList) != 0;
      }
    }
LABEL_11:
    sub_B5D69C(Instance, v12);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, AheadBg, 0LL);
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

  if ( (byte_42E98F1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      svtId,
      limitCount,
      *(_QWORD *)&treasureDvcId);
    byte_42E98F1 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v16);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35615088(v17, Manager__loadNoblePhantasmCoroutine, 0LL);
}


void __fastcall ServantAssetLoadManager__PreloadAssetsByArgs(
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3
  int Weapon_k__BackingField; // w21
  int WeaponEffectId_k__BackingField; // w21
  int32_t EffectFolder_k__BackingField; // w22
  int32_t CameraId_k__BackingField; // w21
  const MethodInfo *v20; // x2
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillList_k__BackingField; // x20
  __int64 size; // x8
  __int64 v23; // x21
  __int64 v24; // x0
  __int64 v25; // x9

  if ( (byte_42E98A2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, dlOnly, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v6, v7, v8);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v9, v10, v11);
    byte_42E98A2 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__preloadServant(args, dlOnly, method);
  if ( !args )
    sub_B5D69C(v12, v13);
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__preloadActorMotion(Weapon_k__BackingField, dlOnly, v14);
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
      v15);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__preloadCameraAction(CameraId_k__BackingField, dlOnly, v14);
  ServantAssetLoadManager__preloadFromDeckServant(args->fields._deckSvt_k__BackingField, dlOnly, v20);
  skillList_k__BackingField = args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField )
  {
    LODWORD(size) = skillList_k__BackingField->fields._size;
    if ( (int)size >= 1 )
    {
      v23 = 4LL;
      do
      {
        if ( v23 - 4 >= (unsigned __int64)(unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v24 = *((_QWORD *)&skillList_k__BackingField->fields._items->obj.klass + v23);
        if ( v24 )
        {
          if ( v23 - 4 >= (unsigned __int64)(unsigned int)skillList_k__BackingField->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)v24 + 440LL))(
            v24,
            dlOnly,
            *(_QWORD *)(*(_QWORD *)v24 + 448LL));
        }
        size = skillList_k__BackingField->fields._size;
        v25 = v23 - 3;
        ++v23;
      }
      while ( v25 < size );
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
  int v3; // w2
  __int64 v4; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_42E98EE & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, (_DWORD)method, v3, v4);
    byte_42E98EE = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  ServantAssetLoadManager__localStopVoice(Instance, uniqueId, fadeoutTime, v9);
}


bool __fastcall ServantAssetLoadManager__TryRegisterUnloadIgnoredArgs(
        ServantAssetArgs_o *args,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Xml_XmlQualifiedName_o *Instance; // x0
  const MethodInfo *v18; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *monitor; // x20
  const MethodInfo *v20; // x1
  ServantAssetLoadManager_c *v21; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *unloadIgnoredAssetArgs; // x20
  ServantAssetLoadManager_c *v23; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v24; // x20

  if ( (byte_42E98A5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__, v8, v9, v10);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v14, v15, v16);
    byte_42E98A5 = 1;
  }
  Instance = (System_Xml_XmlQualifiedName_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  if ( ServantAssetLoadManager__IsKeepAssetAvailable((ServantAssetLoadManager_o *)Instance, v18) )
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
      Instance = (System_Xml_XmlQualifiedName_o *)ServantAssetArgs__get_UniqueKey(args, v18);
      if ( monitor )
      {
        if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                monitor,
                Instance,
                (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__) )
        {
          v21 = ServantAssetLoadManager_TypeInfo;
          if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            v21 = ServantAssetLoadManager_TypeInfo;
          }
          unloadIgnoredAssetArgs = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v21->static_fields->unloadIgnoredAssetArgs;
          Instance = (System_Xml_XmlQualifiedName_o *)ServantAssetArgs__get_UniqueKey(args, v20);
          if ( !unloadIgnoredAssetArgs )
            goto LABEL_23;
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            unloadIgnoredAssetArgs,
            Instance,
            (System_Xml_Schema_XmlSchemaObject_o *)args,
            (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__);
        }
        v23 = ServantAssetLoadManager_TypeInfo;
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          v23 = ServantAssetLoadManager_TypeInfo;
        }
        v24 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v23->static_fields->unloadIgnoredAssetArgs;
        Instance = (System_Xml_XmlQualifiedName_o *)ServantAssetArgs__get_UniqueKey(args, v20);
        if ( v24 )
        {
          Instance = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                        v24,
                                                        (System_Type_o *)Instance,
                                                        (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__);
          if ( Instance )
          {
            ++LODWORD(Instance[2].monitor);
            return 1;
          }
        }
      }
    }
LABEL_23:
    sub_B5D69C(Instance, v18);
  }
  return 0;
}


void __fastcall ServantAssetLoadManager__UnloadAllAsset(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E98F5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__Object__get_Value__, v14, v15, v16);
    byte_42E98F5 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  releaseAssets = this->fields._releaseAssets;
  if ( !releaseAssets )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)releaseAssets,
    (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v18,
            (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__) )
    UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)v18.fields.current.fields.value, 0LL);
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v18,
    (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__);
}


void __fastcall ServantAssetLoadManager__UnloadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  int Weapon_k__BackingField; // w20
  int WeaponEffectId_k__BackingField; // w20
  int32_t EffectFolder_k__BackingField; // w21
  int32_t CameraId_k__BackingField; // w20
  const MethodInfo *v18; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillList_k__BackingField; // x19
  __int64 size; // x8
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x9

  if ( (byte_42E98A4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v5, v6, v7);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v8, v9, v10);
    byte_42E98A4 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__unloadServant(args, method);
  if ( !args )
    sub_B5D69C(v11, v12);
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__unloadActorMotion(Weapon_k__BackingField, v12);
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
    ServantAssetLoadManager__unloadWeaponGroupEffect(WeaponEffectId_k__BackingField, EffectFolder_k__BackingField, v13);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__unloadCameraAction(CameraId_k__BackingField, v12);
  ServantAssetLoadManager__unloadFromDeckServant(args->fields._deckSvt_k__BackingField, v18);
  skillList_k__BackingField = args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField )
  {
    LODWORD(size) = skillList_k__BackingField->fields._size;
    if ( (int)size >= 1 )
    {
      v21 = 4LL;
      do
      {
        if ( v21 - 4 >= (unsigned __int64)(unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v22 = *((_QWORD *)&skillList_k__BackingField->fields._items->obj.klass + v21);
        if ( v22 )
        {
          if ( v21 - 4 >= (unsigned __int64)(unsigned int)skillList_k__BackingField->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 456LL))(v22, *(_QWORD *)(*(_QWORD *)v22 + 464LL));
        }
        size = skillList_k__BackingField->fields._size;
        v23 = v21 - 3;
        ++v21;
      }
      while ( v23 < size );
    }
  }
}


void __fastcall ServantAssetLoadManager__UnloadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        System_Int32_array *commandCodeIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantAssetLoadManager_o *v5; // x20
  __int64 v6; // x8
  unsigned __int64 v7; // x22
  int32_t v8; // w21
  System_String_o *CommandCodeFolderName; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x0

  v5 = this;
  if ( (byte_42E9904 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B5D5C4(
                                          &ServantAssetLoadManager_TypeInfo,
                                          (_DWORD)commandCodeIds,
                                          (_DWORD)method,
                                          v3);
    byte_42E9904 = 1;
  }
  if ( commandCodeIds )
  {
    v6 = *(_QWORD *)&commandCodeIds->max_length;
    if ( (int)v6 >= 1 )
    {
      v7 = 0LL;
      do
      {
        if ( v7 >= (unsigned int)v6 )
        {
          v11 = sub_B5D6C8(this);
          sub_B5D668(v11, 0LL);
        }
        v8 = commandCodeIds->m_Items[v7 + 1];
        if ( v8 >= 1 )
        {
          if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          }
          CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(
                                    v8,
                                    (const MethodInfo *)commandCodeIds);
          ServantAssetLoadManager__unloadTargetPathAssetLocal(v5, CommandCodeFolderName, v10);
          LODWORD(v6) = commandCodeIds->max_length;
        }
        ++v7;
      }
      while ( (__int64)v7 < (int)v6 );
    }
  }
}


void __fastcall ServantAssetLoadManager___GetAheadBg_b__154_0(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_List_AssetData__o *bgAssetDataList; // x0

  if ( (byte_42E9910 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData__Add__, (_DWORD)data, (_DWORD)method, v3);
    byte_42E9910 = 1;
  }
  bgAssetDataList = this->fields.bgAssetDataList;
  if ( !bgAssetDataList )
    sub_B5D69C(0LL, data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bgAssetDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AssetData__Add__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v51; // s4
  float v52; // s5
  float v53; // s6
  float v54; // s7
  UnityEngine_Material_o *material; // x0
  __int64 v56; // x1
  UnityEngine_Material_c *klass; // x8
  UnityEngine_Material_o *v58; // x24
  unsigned __int64 v59; // x19
  UnityEngine_Object_o *v60; // x20
  UnityEngine_Shader_o *v61; // x20
  UnityEngine_Texture_o *UIAtlas; // x21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v64; // x1
  UnityEngine_Transform_o *NodeFromName; // x22
  UnityEngine_Material_c *v66; // x8
  System_Func_string__BacktraceData__BacktraceResult__o *v67; // x23
  unsigned __int64 v68; // x27
  UnityEngine_Object_o *v69; // x24
  int v70; // w8
  UnityEngine_Material_o *v71; // x25
  unsigned int v72; // w28
  UnityEngine_Material_c **v73; // x8
  UnityEngine_Material_o *v74; // x26
  UnityEngine_Shader_o *v75; // x0
  int v76; // s0
  float x; // s13
  float y; // s14
  float z; // s15
  float v82; // s13
  float v83; // s14
  float v84; // s15
  float v85; // s13
  float v86; // s14
  float v87; // s15
  float v88; // s13
  __int64 v89; // x0
  UnityEngine_Material_o *v90; // [xsp+8h] [xbp-118h]
  UnityEngine_Bounds_o v91; // [xsp+10h] [xbp-110h] BYREF
  UnityEngine_Bounds_o v92; // [xsp+28h] [xbp-F8h] BYREF
  UnityEngine_Bounds_o v93; // [xsp+40h] [xbp-E0h] BYREF
  UnityEngine_Bounds_o v94; // [xsp+60h] [xbp-C0h] BYREF
  MethodInfo methoda; // [xsp+78h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E98C3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_Shader__Shader__Shader__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_Texture2D___, v11, v12, v13);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_16142/*"_ClipSharpnessY"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_20324/*"joint_all_Base"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_16130/*"_ChocoTex"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_23567/*"weapon"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_12985/*"Shaders/ChocoMap"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_16287/*"_Use_alphawidth"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_4589/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_17086/*"body"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_16107/*"_AddColor"*/, v44, v45, v46);
    byte_42E98C3 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  memset(&v94, 0, sizeof(v94));
  memset(&v93, 0, sizeof(v93));
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  white.fields.r = 0.0;
  white.fields.g = 0.0;
  white.fields.b = 0.0;
  white.fields.a = 0.0;
  UnityEngine_Color___ctor(white, v51, v52, v53, v54, &methoda);
  if ( !obj )
    goto LABEL_55;
  material = (UnityEngine_Material_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                         obj,
                                         (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !material )
    goto LABEL_55;
  klass = material[1].klass;
  v58 = material;
  if ( (int)klass >= 1 )
  {
    v59 = 0LL;
    while ( 1 )
    {
      if ( v59 >= (unsigned int)klass )
        goto LABEL_56;
      v60 = (UnityEngine_Object_o *)*((_QWORD *)&v58[1].monitor + v59);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v60, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
        break;
      LODWORD(klass) = v58[1].klass;
      if ( (__int64)++v59 >= (int)klass )
        goto LABEL_23;
    }
    if ( !v60 )
      goto LABEL_55;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v60, 0LL);
    if ( !material )
      goto LABEL_55;
    if ( UnityEngine_Material__HasProperty_41623368(material, (System_String_o *)StringLiteral_16146/*"_Color"*/, 0LL) )
    {
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v60, 0LL);
      if ( !material )
        goto LABEL_55;
      Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16146/*"_Color"*/, 0LL);
      r = Color.fields.r;
      g = Color.fields.g;
      b = Color.fields.b;
      a = Color.fields.a;
    }
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v60, 0LL);
    if ( !material )
LABEL_55:
      sub_B5D69C(material, v56);
    if ( UnityEngine_Material__HasProperty_41623368(material, (System_String_o *)StringLiteral_16107/*"_AddColor"*/, 0LL) )
    {
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v60, 0LL);
      if ( material )
      {
        v105 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16107/*"_AddColor"*/, 0LL);
        methoda.methodPointer = *(Il2CppMethodPointer *)&v105.fields.r;
        methoda.invoker_method = *(void **)&v105.fields.b;
        goto LABEL_23;
      }
      goto LABEL_55;
    }
  }
LABEL_23:
  v61 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4589/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, 0LL);
  UIAtlas = (UnityEngine_Texture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                       (System_String_o *)StringLiteral_12985/*"Shaders/ChocoMap"*/,
                                       (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_Texture2D___);
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_20324/*"joint_all_Base"*/, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  material = (UnityEngine_Material_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(obj, v64);
  v66 = v58[1].klass;
  if ( (int)v66 >= 1 )
  {
    v67 = (System_Func_string__BacktraceData__BacktraceResult__o *)material;
    v68 = 0LL;
    v90 = v58;
    while ( 1 )
    {
      if ( v68 >= (unsigned int)v66 )
        goto LABEL_56;
      v69 = (UnityEngine_Object_o *)*((_QWORD *)&v58[1].monitor + v68);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v69, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
      {
        if ( !v69 )
          goto LABEL_55;
        material = (UnityEngine_Material_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v69, 0LL);
        if ( !material )
          goto LABEL_55;
        v70 = (int)material[1].klass;
        v71 = material;
        if ( v70 >= 1 )
          break;
      }
LABEL_53:
      v58 = v90;
      ++v68;
      LODWORD(v66) = v90[1].klass;
      if ( (__int64)v68 >= (int)v66 )
        return;
    }
    v72 = 0;
    while ( v72 < v70 )
    {
      v73 = &v71->klass + (int)v72;
      v74 = (UnityEngine_Material_o *)v73[4];
      if ( !v74 )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v73[4], 0LL);
      if ( !v67 )
        goto LABEL_55;
      v75 = (UnityEngine_Shader_o *)System_Func_string__BacktraceData__BacktraceResult___Invoke(
                                      v67,
                                      (System_String_o *)material,
                                      (Backtrace_Unity_Model_BacktraceData_o *)v61,
                                      (const MethodInfo_2C39DE4 *)Method_System_Func_Shader__Shader__Shader__Invoke__);
      UnityEngine_Material__set_shader(v74, v75, 0LL);
      v106.fields.r = r;
      v106.fields.g = g;
      v106.fields.b = b;
      v106.fields.a = a;
      UnityEngine_Material__SetColor(v74, (System_String_o *)StringLiteral_16146/*"_Color"*/, v106, 0LL);
      *(_QWORD *)&v107.fields.r = methoda.methodPointer;
      *(_QWORD *)&v107.fields.b = methoda.invoker_method;
      UnityEngine_Material__SetColor(v74, (System_String_o *)StringLiteral_16107/*"_AddColor"*/, v107, 0LL);
      UnityEngine_Material__SetTexture(v74, (System_String_o *)StringLiteral_16130/*"_ChocoTex"*/, UIAtlas, 0LL);
      material = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v69, 0LL);
      if ( !material )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
      if ( !material )
        goto LABEL_55;
      if ( System_String__StartsWith((System_String_o *)material, (System_String_o *)StringLiteral_17086/*"body"*/, 0LL) )
        goto LABEL_46;
      material = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v69, 0LL);
      if ( !material )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
      if ( !material )
        goto LABEL_55;
      if ( System_String__StartsWith((System_String_o *)material, (System_String_o *)StringLiteral_23567/*"weapon"*/, 0LL) )
      {
LABEL_46:
        material = (UnityEngine_Material_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                               (UnityEngine_SkinnedMeshRenderer_o *)v69,
                                               0LL);
        if ( !material )
          goto LABEL_55;
        *(UnityEngine_Vector3_o *)&v76 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)material, 0LL);
        if ( !NodeFromName )
          goto LABEL_55;
        v96 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, *(UnityEngine_Vector3_o *)&v76, 0LL);
        x = v96.fields.x;
        y = v96.fields.y;
        z = v96.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0LL);
        v82 = x - localPosition.fields.x;
        v83 = y - localPosition.fields.y;
        v84 = z - localPosition.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v92, (UnityEngine_SkinnedMeshRenderer_o *)v69, 0LL);
        v93 = v92;
        center = UnityEngine_Bounds__get_center(&v93, 0LL);
        v85 = v82 + center.fields.x;
        v86 = v83 + center.fields.y;
        v87 = v84 + center.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v92, (UnityEngine_SkinnedMeshRenderer_o *)v69, 0LL);
        v93 = v92;
        size = UnityEngine_Bounds__get_size(&v93, 0LL);
        v99.fields.x = v85;
        v99.fields.y = v86;
        v99.fields.z = v87;
        UnityEngine_Bounds___ctor(&v94, v99, size, 0LL);
        v91 = v94;
        UnityEngine_SkinnedMeshRenderer__set_localBounds((UnityEngine_SkinnedMeshRenderer_o *)v69, &v91, 0LL);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v69, NodeFromName, 0LL);
      }
      else
      {
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v92, (UnityEngine_SkinnedMeshRenderer_o *)v69, 0LL);
        v93 = v92;
        v100 = UnityEngine_Bounds__get_center(&v93, 0LL);
        v88 = v100.fields.y;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v92, (UnityEngine_SkinnedMeshRenderer_o *)v69, 0LL);
        v93 = v92;
        extents = UnityEngine_Bounds__get_extents(&v93, 0LL);
        UnityEngine_Material__SetFloat(v74, (System_String_o *)StringLiteral_16142/*"_ClipSharpnessY"*/, v88 - extents.fields.y, 0LL);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Material__HasProperty_41623368(
                                             v74,
                                             (System_String_o *)StringLiteral_16287/*"_Use_alphawidth"*/,
                                             0LL);
      if ( ((unsigned __int8)material & 1) != 0 )
        UnityEngine_Material__SetFloat(v74, (System_String_o *)StringLiteral_16287/*"_Use_alphawidth"*/, 1.0, 0LL);
      v70 = (int)v71[1].klass;
      if ( (int)++v72 >= v70 )
        goto LABEL_53;
    }
LABEL_56:
    v89 = sub_B5D6C8(material);
    sub_B5D668(v89, 0LL);
  }
}


void __fastcall ServantAssetLoadManager__changeChocoSahder(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v39; // s4
  float v40; // s5
  float v41; // s6
  float v42; // s7
  UnityEngine_Material_o *material; // x0
  __int64 v44; // x1
  UnityEngine_Material_c *klass; // x8
  UnityEngine_Material_o *v46; // x21
  unsigned __int64 v47; // x23
  UnityEngine_Object_o *v48; // x20
  UnityEngine_Shader_o *v49; // x20
  const MethodInfo *v50; // x1
  UnityEngine_Texture_o *UIAtlas; // x21
  System_Func_Shader__Shader__Shader__o *ReplaceChocoShaderFunc; // x22
  UnityEngine_Material_c *v53; // x8
  Il2CppClass *v54; // x9
  unsigned __int64 v55; // x25
  UnityEngine_Object_o *v56; // x23
  int v57; // w8
  UnityEngine_Material_o *v58; // x23
  unsigned int v59; // w28
  UnityEngine_Material_c **v60; // x8
  UnityEngine_Material_o *v61; // x24
  UnityEngine_Shader_o *v62; // x0
  __int64 v63; // x0
  MethodInfo v64; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E98C4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_Shader__Shader__Shader__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_Texture2D___, v11, v12, v13);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_16130/*"_ChocoTex"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_4588/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_12985/*"Shaders/ChocoMap"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_16287/*"_Use_alphawidth"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_16107/*"_AddColor"*/, v32, v33, v34);
    byte_42E98C4 = 1;
  }
  v64.methodPointer = 0LL;
  v64.invoker_method = 0LL;
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  white.fields.r = 0.0;
  white.fields.g = 0.0;
  white.fields.b = 0.0;
  white.fields.a = 0.0;
  UnityEngine_Color___ctor(white, v39, v40, v41, v42, &v64);
  if ( !obj )
    goto LABEL_46;
  material = (UnityEngine_Material_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                         obj,
                                         (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !material )
    goto LABEL_46;
  klass = material[1].klass;
  v46 = material;
  if ( (int)klass < 1 )
    goto LABEL_23;
  v47 = 0LL;
  while ( 1 )
  {
    if ( v47 >= (unsigned int)klass )
      goto LABEL_47;
    v48 = (UnityEngine_Object_o *)*((_QWORD *)&v46[1].monitor + v47);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v48, 0LL, 0LL);
    if ( ((unsigned __int8)material & 1) == 0 )
      break;
    LODWORD(klass) = v46[1].klass;
    if ( (__int64)++v47 >= (int)klass )
      goto LABEL_23;
  }
  if ( !v48 )
    goto LABEL_46;
  material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v48, 0LL);
  if ( !material )
    goto LABEL_46;
  if ( UnityEngine_Material__HasProperty_41623368(material, (System_String_o *)StringLiteral_16146/*"_Color"*/, 0LL) )
  {
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v48, 0LL);
    if ( !material )
      goto LABEL_46;
    Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16146/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v48, 0LL);
  if ( !material )
LABEL_46:
    sub_B5D69C(material, v44);
  if ( UnityEngine_Material__HasProperty_41623368(material, (System_String_o *)StringLiteral_16107/*"_AddColor"*/, 0LL) )
  {
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v48, 0LL);
    if ( !material )
      goto LABEL_46;
    v67 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16107/*"_AddColor"*/, 0LL);
    v64.methodPointer = *(Il2CppMethodPointer *)&v67.fields.r;
    v64.invoker_method = *(void **)&v67.fields.b;
  }
LABEL_23:
  v49 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4588/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
  UIAtlas = (UnityEngine_Texture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                       (System_String_o *)StringLiteral_12985/*"Shaders/ChocoMap"*/,
                                       (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_Texture2D___);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ReplaceChocoShaderFunc = ServantAssetLoadManager__GetReplaceChocoShaderFunc(obj, v50);
  material = (UnityEngine_Material_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                         obj,
                                         (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !material )
    goto LABEL_46;
  v53 = material[1].klass;
  v54 = (Il2CppClass *)material;
  if ( (int)v53 >= 1 )
  {
    v55 = 0LL;
    v64.klass = (Il2CppClass *)material;
    while ( 1 )
    {
      if ( v55 >= (unsigned int)v53 )
        goto LABEL_47;
      v56 = (UnityEngine_Object_o *)*((_QWORD *)&v54->_1.byval_arg.data + v55);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v56, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
      {
        if ( !v56 )
          goto LABEL_46;
        material = (UnityEngine_Material_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v56, 0LL);
        if ( !material )
          goto LABEL_46;
        v57 = (int)material[1].klass;
        v58 = material;
        if ( v57 >= 1 )
          break;
      }
LABEL_44:
      v54 = v64.klass;
      ++v55;
      LODWORD(v53) = v64.klass->_1.namespaze;
      if ( (__int64)v55 >= (int)v53 )
        return;
    }
    v59 = 0;
    while ( v59 < v57 )
    {
      v60 = &v58->klass + (int)v59;
      v61 = (UnityEngine_Material_o *)v60[4];
      if ( !v61 )
        goto LABEL_46;
      material = (UnityEngine_Material_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v60[4], 0LL);
      if ( !ReplaceChocoShaderFunc )
        goto LABEL_46;
      v62 = (UnityEngine_Shader_o *)System_Func_string__BacktraceData__BacktraceResult___Invoke(
                                      (System_Func_string__BacktraceData__BacktraceResult__o *)ReplaceChocoShaderFunc,
                                      (System_String_o *)material,
                                      (Backtrace_Unity_Model_BacktraceData_o *)v49,
                                      (const MethodInfo_2C39DE4 *)Method_System_Func_Shader__Shader__Shader__Invoke__);
      UnityEngine_Material__set_shader(v61, v62, 0LL);
      v68.fields.r = r;
      v68.fields.g = g;
      v68.fields.b = b;
      v68.fields.a = a;
      UnityEngine_Material__SetColor(v61, (System_String_o *)StringLiteral_16146/*"_Color"*/, v68, 0LL);
      *(_QWORD *)&v69.fields.r = v64.methodPointer;
      *(_QWORD *)&v69.fields.b = v64.invoker_method;
      UnityEngine_Material__SetColor(v61, (System_String_o *)StringLiteral_16107/*"_AddColor"*/, v69, 0LL);
      UnityEngine_Material__SetTexture(v61, (System_String_o *)StringLiteral_16130/*"_ChocoTex"*/, UIAtlas, 0LL);
      material = (UnityEngine_Material_o *)UnityEngine_Material__HasProperty_41623368(
                                             v61,
                                             (System_String_o *)StringLiteral_16287/*"_Use_alphawidth"*/,
                                             0LL);
      if ( ((unsigned __int8)material & 1) != 0 )
        UnityEngine_Material__SetFloat(v61, (System_String_o *)StringLiteral_16287/*"_Use_alphawidth"*/, 1.0, 0LL);
      v57 = (int)v58[1].klass;
      if ( (int)++v59 >= v57 )
        goto LABEL_44;
    }
LABEL_47:
    v63 = sub_B5D6C8(material);
    sub_B5D668(v63, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__changeDeadShader(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v42; // s4
  float v43; // s5
  float v44; // s6
  float v45; // s7
  UnityEngine_Material_o *material; // x0
  __int64 v47; // x1
  UnityEngine_Material_c *klass; // x8
  UnityEngine_Material_o *v49; // x24
  unsigned __int64 v50; // x19
  UnityEngine_Object_o *v51; // x20
  UnityEngine_Shader_o *v52; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v54; // x1
  UnityEngine_Transform_o *NodeFromName; // x21
  UnityEngine_Material_c *v56; // x8
  System_Func_string__BacktraceData__BacktraceResult__o *v57; // x22
  unsigned __int64 v58; // x26
  UnityEngine_Object_o *v59; // x23
  int v60; // w8
  UnityEngine_Material_o *v61; // x24
  unsigned int v62; // w19
  UnityEngine_Material_c **v63; // x8
  UnityEngine_Material_o *v64; // x25
  UnityEngine_Shader_o *v65; // x0
  int v66; // s0
  float x; // s13
  float y; // s14
  float z; // s15
  float v72; // s13
  float v73; // s14
  float v74; // s15
  float v75; // s13
  float v76; // s14
  float v77; // s15
  float v78; // s13
  __int64 v79; // x0
  UnityEngine_Material_o *v80; // [xsp+8h] [xbp-118h]
  UnityEngine_Bounds_o v81; // [xsp+10h] [xbp-110h] BYREF
  UnityEngine_Bounds_o v82; // [xsp+28h] [xbp-F8h] BYREF
  UnityEngine_Bounds_o v83; // [xsp+40h] [xbp-E0h] BYREF
  UnityEngine_Bounds_o v84; // [xsp+60h] [xbp-C0h] BYREF
  MethodInfo methoda; // [xsp+78h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E98C2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_Shader__Shader__Shader__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16142/*"_ClipSharpnessY"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_4587/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_20324/*"joint_all_Base"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_23567/*"weapon"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_16287/*"_Use_alphawidth"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_17086/*"body"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_16107/*"_AddColor"*/, v35, v36, v37);
    byte_42E98C2 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  memset(&v84, 0, sizeof(v84));
  memset(&v83, 0, sizeof(v83));
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  white.fields.r = 0.0;
  white.fields.g = 0.0;
  white.fields.b = 0.0;
  white.fields.a = 0.0;
  UnityEngine_Color___ctor(white, v42, v43, v44, v45, &methoda);
  if ( !obj )
    goto LABEL_55;
  material = (UnityEngine_Material_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                         obj,
                                         (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !material )
    goto LABEL_55;
  klass = material[1].klass;
  v49 = material;
  if ( (int)klass >= 1 )
  {
    v50 = 0LL;
    while ( 1 )
    {
      if ( v50 >= (unsigned int)klass )
        goto LABEL_56;
      v51 = (UnityEngine_Object_o *)*((_QWORD *)&v49[1].monitor + v50);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v51, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
        break;
      LODWORD(klass) = v49[1].klass;
      if ( (__int64)++v50 >= (int)klass )
        goto LABEL_23;
    }
    if ( !v51 )
      goto LABEL_55;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v51, 0LL);
    if ( !material )
      goto LABEL_55;
    if ( UnityEngine_Material__HasProperty_41623368(material, (System_String_o *)StringLiteral_16146/*"_Color"*/, 0LL) )
    {
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v51, 0LL);
      if ( !material )
        goto LABEL_55;
      Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16146/*"_Color"*/, 0LL);
      r = Color.fields.r;
      g = Color.fields.g;
      b = Color.fields.b;
      a = Color.fields.a;
    }
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v51, 0LL);
    if ( !material )
LABEL_55:
      sub_B5D69C(material, v47);
    if ( UnityEngine_Material__HasProperty_41623368(material, (System_String_o *)StringLiteral_16107/*"_AddColor"*/, 0LL) )
    {
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v51, 0LL);
      if ( material )
      {
        v95 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16107/*"_AddColor"*/, 0LL);
        methoda.methodPointer = *(Il2CppMethodPointer *)&v95.fields.r;
        methoda.invoker_method = *(void **)&v95.fields.b;
        goto LABEL_23;
      }
      goto LABEL_55;
    }
  }
LABEL_23:
  v52 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4587/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, 0LL);
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_20324/*"joint_all_Base"*/, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  material = (UnityEngine_Material_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(obj, v54);
  v56 = v49[1].klass;
  if ( (int)v56 >= 1 )
  {
    v57 = (System_Func_string__BacktraceData__BacktraceResult__o *)material;
    v58 = 0LL;
    v80 = v49;
    while ( 1 )
    {
      if ( v58 >= (unsigned int)v56 )
        goto LABEL_56;
      v59 = (UnityEngine_Object_o *)*((_QWORD *)&v49[1].monitor + v58);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(v59, 0LL, 0LL);
      if ( ((unsigned __int8)material & 1) == 0 )
      {
        if ( !v59 )
          goto LABEL_55;
        material = (UnityEngine_Material_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v59, 0LL);
        if ( !material )
          goto LABEL_55;
        v60 = (int)material[1].klass;
        v61 = material;
        if ( v60 >= 1 )
          break;
      }
LABEL_53:
      v49 = v80;
      ++v58;
      LODWORD(v56) = v80[1].klass;
      if ( (__int64)v58 >= (int)v56 )
        return;
    }
    v62 = 0;
    while ( v62 < v60 )
    {
      v63 = &v61->klass + (int)v62;
      v64 = (UnityEngine_Material_o *)v63[4];
      if ( !v64 )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v63[4], 0LL);
      if ( !v57 )
        goto LABEL_55;
      v65 = (UnityEngine_Shader_o *)System_Func_string__BacktraceData__BacktraceResult___Invoke(
                                      v57,
                                      (System_String_o *)material,
                                      (Backtrace_Unity_Model_BacktraceData_o *)v52,
                                      (const MethodInfo_2C39DE4 *)Method_System_Func_Shader__Shader__Shader__Invoke__);
      UnityEngine_Material__set_shader(v64, v65, 0LL);
      v96.fields.r = r;
      v96.fields.g = g;
      v96.fields.b = b;
      v96.fields.a = a;
      UnityEngine_Material__SetColor(v64, (System_String_o *)StringLiteral_16146/*"_Color"*/, v96, 0LL);
      *(_QWORD *)&v97.fields.r = methoda.methodPointer;
      *(_QWORD *)&v97.fields.b = methoda.invoker_method;
      UnityEngine_Material__SetColor(v64, (System_String_o *)StringLiteral_16107/*"_AddColor"*/, v97, 0LL);
      material = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v59, 0LL);
      if ( !material )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
      if ( !material )
        goto LABEL_55;
      if ( System_String__StartsWith((System_String_o *)material, (System_String_o *)StringLiteral_17086/*"body"*/, 0LL) )
        goto LABEL_46;
      material = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v59, 0LL);
      if ( !material )
        goto LABEL_55;
      material = (UnityEngine_Material_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
      if ( !material )
        goto LABEL_55;
      if ( System_String__StartsWith((System_String_o *)material, (System_String_o *)StringLiteral_23567/*"weapon"*/, 0LL) )
      {
LABEL_46:
        material = (UnityEngine_Material_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                               (UnityEngine_SkinnedMeshRenderer_o *)v59,
                                               0LL);
        if ( !material )
          goto LABEL_55;
        *(UnityEngine_Vector3_o *)&v66 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)material, 0LL);
        if ( !NodeFromName )
          goto LABEL_55;
        v86 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, *(UnityEngine_Vector3_o *)&v66, 0LL);
        x = v86.fields.x;
        y = v86.fields.y;
        z = v86.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0LL);
        v72 = x - localPosition.fields.x;
        v73 = y - localPosition.fields.y;
        v74 = z - localPosition.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v82, (UnityEngine_SkinnedMeshRenderer_o *)v59, 0LL);
        v83 = v82;
        center = UnityEngine_Bounds__get_center(&v83, 0LL);
        v75 = v72 + center.fields.x;
        v76 = v73 + center.fields.y;
        v77 = v74 + center.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v82, (UnityEngine_SkinnedMeshRenderer_o *)v59, 0LL);
        v83 = v82;
        size = UnityEngine_Bounds__get_size(&v83, 0LL);
        v89.fields.x = v75;
        v89.fields.y = v76;
        v89.fields.z = v77;
        UnityEngine_Bounds___ctor(&v84, v89, size, 0LL);
        v81 = v84;
        UnityEngine_SkinnedMeshRenderer__set_localBounds((UnityEngine_SkinnedMeshRenderer_o *)v59, &v81, 0LL);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v59, NodeFromName, 0LL);
      }
      else
      {
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v82, (UnityEngine_SkinnedMeshRenderer_o *)v59, 0LL);
        v83 = v82;
        v90 = UnityEngine_Bounds__get_center(&v83, 0LL);
        v78 = v90.fields.y;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v82, (UnityEngine_SkinnedMeshRenderer_o *)v59, 0LL);
        v83 = v82;
        extents = UnityEngine_Bounds__get_extents(&v83, 0LL);
        UnityEngine_Material__SetFloat(v64, (System_String_o *)StringLiteral_16142/*"_ClipSharpnessY"*/, v78 - extents.fields.y, 0LL);
      }
      material = (UnityEngine_Material_o *)UnityEngine_Material__HasProperty_41623368(
                                             v64,
                                             (System_String_o *)StringLiteral_16287/*"_Use_alphawidth"*/,
                                             0LL);
      if ( ((unsigned __int8)material & 1) != 0 )
        UnityEngine_Material__SetFloat(v64, (System_String_o *)StringLiteral_16287/*"_Use_alphawidth"*/, 1.0, 0LL);
      v60 = (int)v61[1].klass;
      if ( (int)++v62 >= v60 )
        goto LABEL_53;
    }
LABEL_56:
    v79 = sub_B5D6C8(material);
    sub_B5D668(v79, 0LL);
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

  if ( (byte_42E98EA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      limit,
      overwriteSvtVoiceId,
      voiceTypeId);
    byte_42E98EA = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v12);
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
  ServantEntity_o *SvtEntity; // x25
  const MethodInfo *v26; // x3
  int32_t VoicePrefix; // w26
  const MethodInfo *v28; // x3
  int32_t VoiceId; // w0
  int32_t v30; // w9
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  __int64 *v33; // x8
  System_String_o *v34; // x20
  System_String_o *v35; // x19
  System_String_o *v36; // x0
  System_String_o *v37; // x19
  int32_t v40; // [xsp+8h] [xbp-48h] BYREF
  int32_t v41; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42E98EB & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, svtId, limit, *(_QWORD *)&overwriteSvtVoiceId);
    sub_B5D5C4(&SoundManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_9696/*"NoblePhantasm_"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_23810/*"{0:D0}_{1}"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_12895/*"Servants_"*/, v22, v23, v24);
    byte_42E98EB = 1;
  }
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&limit);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v26);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v28);
  if ( overwriteSvtVoiceId )
    v30 = overwriteSvtVoiceId;
  else
    v30 = VoiceId;
  v40 = VoicePrefix;
  v41 = v30;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  v32 = System_String__Format_44573324((System_String_o *)StringLiteral_23810/*"{0:D0}_{1}"*/, v31, (Il2CppObject *)voiceTypeId, 0LL);
  if ( SvtEntity )
  {
    v33 = &StringLiteral_9696/*"NoblePhantasm_"*/;
    v34 = v32;
    if ( !isNp )
      v33 = &StringLiteral_12895/*"Servants_"*/;
    v35 = (System_String_o *)*v33;
    v36 = System_Int32__ToString((int32_t)&v41, 0LL);
    v37 = System_String__Concat_44577788(v35, v36, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    return SoundManager__checkServantVoice(v37, v34, 0, 0LL);
  }
  else
  {
    return 0;
  }
}


bool __fastcall ServantAssetLoadManager__checkLoad(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_42E989D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1, v2, v3);
    byte_42E989D = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  return ServantAssetLoadManager__checkLoadlocal(Instance, v5);
}


bool __fastcall ServantAssetLoadManager__checkLoadlocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager_o *v4; // x19
  struct System_Collections_Generic_List_string__o *loadlist; // x8
  struct System_Collections_Generic_List_string__o *downloadlist; // x8

  v4 = this;
  if ( (byte_42E989E & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B5D5C4(
                                          &Method_System_Collections_Generic_List_string__get_Count__,
                                          (_DWORD)method,
                                          v2,
                                          v3);
    byte_42E989E = 1;
  }
  loadlist = v4->fields.loadlist;
  if ( !loadlist )
    goto LABEL_9;
  if ( loadlist->fields._size > 0 )
    return 1;
  downloadlist = v4->fields.downloadlist;
  if ( !downloadlist )
LABEL_9:
    sub_B5D69C(this, method);
  if ( downloadlist->fields._size > 0 )
    return 1;
  return v4->fields.soundCount > 0;
}


void __fastcall ServantAssetLoadManager__checkMaster(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  struct ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct ServantLimitMaster_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  BattleServantConfConponent_o *p_svtlimitaddmaster; // x19
  struct ServantLimitAddMaster_o *svtlimitaddmaster; // t1
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_42E9887 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E9887 = 1;
  }
  if ( !this->fields.svtmaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_WarQuestSelectionMaster = (struct ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    this->fields.svtmaster = MasterData_WarQuestSelectionMaster;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.svtmaster,
      (System_Int32_array **)MasterData_WarQuestSelectionMaster,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !this->fields.svtlimitmaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    v23 = (struct ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    this->fields.svtlimitmaster = v23;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.svtlimitmaster,
      (System_Int32_array **)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  p_svtlimitaddmaster = (BattleServantConfConponent_o *)&this->fields.svtlimitaddmaster;
  if ( svtlimitaddmaster )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_B5D69C(Instance, v15);
  v32 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  p_svtlimitaddmaster->klass = (BattleServantConfConponent_c *)v32;
  sub_B5D560(p_svtlimitaddmaster, v32, v33, v34, v35, v36, v37, v38);
}


void __fastcall ServantAssetLoadManager__clearServantlist(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_42E989B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1, v2, v3);
    byte_42E989B = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  ServantAssetLoadManager__clearServantlistlocal(Instance, v5);
}


void __fastcall ServantAssetLoadManager__clearServantlistlocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_string__o *loadlist; // x0

  if ( (byte_42E989C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, (_DWORD)method, v2, v3);
    byte_42E989C = 1;
  }
  loadlist = this->fields.loadlist;
  if ( !loadlist
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadlist,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__),
        (loadlist = this->fields.downloadlist) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadlist,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__),
        (loadlist = this->fields.loadedList) == 0LL) )
  {
    sub_B5D69C(loadlist, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadlist,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
  this->fields.soundCount = 0;
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__createShadowEffect(
        ServantAssetLoadManager_o *this,
        int32_t tp,
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
  System_String_o *v27; // x0
  System_Xml_Schema_XmlSchemaObject_o *UIAtlas; // x0
  __int64 v29; // x1
  System_String_o *v30; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v32; // x19
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x8
  int v35; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E98F6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__, tp, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__Object__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__Object__set_Item__, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_GameObject___, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_18485/*"effect/ef_shadow0"*/, v24, v25, v26);
    byte_42E98F6 = 1;
  }
  v35 = tp + 1;
  v27 = System_Int32__ToString((int32_t)&v35, 0LL);
  UIAtlas = (System_Xml_Schema_XmlSchemaObject_o *)System_String__Concat_44577788(
                                                     (System_String_o *)StringLiteral_18485/*"effect/ef_shadow0"*/,
                                                     v27,
                                                     0LL);
  if ( !this->fields._releaseAssets )
    goto LABEL_17;
  v30 = (System_String_o *)UIAtlas;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields._releaseAssets,
          (System_Xml_XmlQualifiedName_o *)UIAtlas,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__) )
  {
    UIAtlas = (System_Xml_Schema_XmlSchemaObject_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                       v30,
                                                       (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_GameObject___);
    releaseAssets = this->fields._releaseAssets;
    if ( releaseAssets )
    {
      v32 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UIAtlas;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)releaseAssets,
        (System_Xml_XmlQualifiedName_o *)v30,
        UIAtlas,
        (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__Object__set_Item__);
      goto LABEL_13;
    }
LABEL_17:
    sub_B5D69C(UIAtlas, v29);
  }
  UIAtlas = (System_Xml_Schema_XmlSchemaObject_o *)this->fields._releaseAssets;
  if ( !UIAtlas )
    goto LABEL_17;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)UIAtlas,
           (System_Type_o *)v30,
           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__Object__get_Item__);
  if ( Item )
  {
    if ( (UnityEngine_GameObject_c *)Item->klass == UnityEngine_GameObject_TypeInfo )
      v32 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Item;
    else
      v32 = 0LL;
  }
  else
  {
    v32 = 0LL;
  }
LABEL_13:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       v32,
                                       (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


void __fastcall ServantAssetLoadManager__endloadList(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadlist; // x0
  struct System_String_o *name; // x20

  if ( (byte_42E98A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, v6, v7, v8);
    byte_42E98A1 = 1;
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
           (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadlist;
      if ( !loadlist )
        goto LABEL_13;
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadlist,
        (WarBoardManager_TaskList_o *)name,
        (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__);
    }
    loadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.downloadlist;
    if ( !loadlist )
LABEL_13:
      sub_B5D69C(loadlist, data);
    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           loadlist,
           (WarBoardManager_TaskList_o *)name,
           (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.downloadlist;
      if ( loadlist )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          loadlist,
          (WarBoardManager_TaskList_o *)name,
          (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_42E98B6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, limitCount, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_12888/*"Servants/"*/, v6, v7, v8);
    byte_42E98B6 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
  BattleChrId = ServantAssetLoadManager__getBattleChrId(Instance, svtId, limitCount, v11);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_12888/*"Servants/"*/, BattleChrId, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getActorFolderNameFromDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ServantAssetLoadManager_o *Instance; // x21
  __int64 LimitCountByImageLimitCostumeIn; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_42E98B5 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, displimitCount, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_12888/*"Servants/"*/, v9, v10, v11);
    byte_42E98B5 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(displimitCount, 0LL);
  if ( !Instance )
    sub_B5D69C(LimitCountByImageLimitCostumeIn, v14);
  BattleChrId = ServantAssetLoadManager__getBattleChrId(Instance, svtId, LimitCountByImageLimitCostumeIn, v15);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_12888/*"Servants/"*/, BattleChrId, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getActorFolderName_26900124(
        int32_t svtId,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E98B7 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12888/*"Servants/"*/, v5, v6, v7);
    byte_42E98B7 = 1;
  }
  v10 = svtId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Concat((Il2CppObject *)StringLiteral_12888/*"Servants/"*/, v8, 0LL);
}


UnityEngine_Texture2D_o *__fastcall ServantAssetLoadManager__getAssetObject_Texture2D_(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *file,
        const MethodInfo_1E6A3CC *method)
{
  UnityEngine_Texture2D_o *result; // x0

  if ( (byte_42EC248 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)path, (_DWORD)file, method);
    byte_42EC248 = 1;
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
    sub_B5D69C(0LL, v7);
  return ServantLimitAddMaster__getBattleChrId(svtlimitaddmaster, svtId, limitCount, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getCameraActionPath(int32_t cameraId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-4h] BYREF

  v6 = cameraId;
  if ( (byte_42E98F9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12889/*"Servants/Camera/"*/, (_DWORD)method, v2, v3);
    byte_42E98F9 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_12889/*"Servants/Camera/"*/, v4, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getCommandCardLoadFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E988A & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, limitCount, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_12891/*"Servants/Commands/"*/, v5, v6, v7);
    byte_42E988A = 1;
  }
  v10 = svtId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Concat((Il2CppObject *)StringLiteral_12891/*"Servants/Commands/"*/, v8, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E9889 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, displimitCount, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_12891/*"Servants/Commands/"*/, v5, v6, v7);
    byte_42E9889 = 1;
  }
  v10 = svtId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Concat((Il2CppObject *)StringLiteral_12891/*"Servants/Commands/"*/, v8, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getNameEffectPath(
        int32_t enemyNameEffectId,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-4h] BYREF

  v6 = enemyNameEffectId;
  if ( (byte_42E990D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5891/*"Effect/BattleCommon/NameEffect/"*/, (_DWORD)method, v2, v3);
    byte_42E990D = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_5891/*"Effect/BattleCommon/NameEffect/"*/, v4, 0LL);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E98DA & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, cutInId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_5914/*"Effect/CutIn/Skill/{0}"*/, v5, v6, v7);
    byte_42E98DA = 1;
  }
  v10 = cutInId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format((System_String_o *)StringLiteral_5914/*"Effect/CutIn/Skill/{0}"*/, v8, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getStatusImageFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E9892 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, limitCount, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_12894/*"Servants/Status/"*/, v5, v6, v7);
    byte_42E9892 = 1;
  }
  v10 = svtId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Concat((Il2CppObject *)StringLiteral_12894/*"Servants/Status/"*/, v8, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getStatusImageFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E9891 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, displimitCount, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_12894/*"Servants/Status/"*/, v5, v6, v7);
    byte_42E9891 = 1;
  }
  v10 = svtId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Concat((Il2CppObject *)StringLiteral_12894/*"Servants/Status/"*/, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *__fastcall ServantAssetLoadManager__getSvtEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  struct ServantMaster_o *svtmaster; // x0

  if ( (byte_42E9888 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, svtId, (_DWORD)method, v3);
    byte_42E9888 = 1;
  }
  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtmaster = this->fields.svtmaster;
  if ( !svtmaster )
    sub_B5D69C(0LL, v6);
  return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)svtmaster,
                              svtId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_B5D69C(0LL, v7);
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
    sub_B5D69C(0LL, v7);
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
    sub_B5D69C(SvtVoiceId, v8);
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
    sub_B5D69C(SvtVoiceId, v8);
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

  if ( (byte_42E98C9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, limitCount, weapongroup, name);
    byte_42E98C9 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v9);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_String_o *BattleChrId; // x0
  System_String_o *v14; // x1

  if ( (byte_42E98CA & 1) == 0 )
  {
    sub_B5D5C4(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, svtId, limitCount, *(_QWORD *)&weapongroup);
    sub_B5D5C4(&StringLiteral_12888/*"Servants/"*/, v10, v11, v12);
    byte_42E98CA = 1;
  }
  BattleChrId = ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, *(const MethodInfo **)&weapongroup);
  v14 = System_String__Concat_44577788((System_String_o *)StringLiteral_12888/*"Servants/"*/, BattleChrId, 0LL);
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                       this,
                                       v14,
                                       name,
                                       (const MethodInfo_1E6A3CC *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
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

  if ( (byte_42E98DF & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, svtId, weapongroup, method);
    byte_42E98DF = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
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
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  UnityEngine_Texture2D_o *AssetObject_Texture2D; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x19
  UnityEngine_Transform_o *v25; // x21
  UnityEngine_Transform_o *v26; // x20
  int v27; // s0
  UnityEngine_Transform_o *v30; // x20
  int v31; // s0
  UnityEngine_Transform_o *v34; // x20
  int v35; // s0
  int32_t v39; // [xsp+Ch] [xbp-14h] BYREF

  v39 = weapongroup;
  if ( (byte_42E98E0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, (_DWORD)parent, svtId, *(_QWORD *)&weapongroup);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_20837/*"motion"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_12892/*"Servants/Motion/"*/, v16, v17, v18);
    byte_42E98E0 = 1;
  }
  v19 = System_Int32__ToString((int32_t)&v39, 0LL);
  v20 = System_String__Concat_44577788((System_String_o *)StringLiteral_12892/*"Servants/Motion/"*/, v19, 0LL);
  AssetObject_Texture2D = ServantAssetLoadManager__getAssetObject_Texture2D_(
                            this,
                            v20,
                            (System_String_o *)StringLiteral_20837/*"motion"*/,
                            (const MethodInfo_1E6A3CC *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_13;
  v24 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !parent )
    goto LABEL_13;
  v25 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v25 )
    goto LABEL_13;
  UnityEngine_Transform__set_parent(v25, (UnityEngine_Transform_o *)transform, 0LL);
  v26 = UnityEngine_GameObject__get_transform(v24, 0LL);
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v26
    || (UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v27, 0LL),
        v30 = UnityEngine_GameObject__get_transform(v24, 0LL),
        *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_up(0LL),
        !v30)
    || (UnityEngine_Transform__set_eulerAngles(v30, *(UnityEngine_Vector3_o *)&v31, 0LL),
        v34 = UnityEngine_GameObject__get_transform(v24, 0LL),
        *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Vector3__get_one(0LL),
        !v34) )
  {
LABEL_13:
    sub_B5D69C(transform, v23);
  }
  UnityEngine_Transform__set_localScale(v34, *(UnityEngine_Vector3_o *)&v35, 0LL);
  return v24;
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

  if ( (byte_42E98C5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, limitCount, isForce, method);
    byte_42E98C5 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_String_o *ActorFolderName_26900124; // x0

  if ( (byte_42E98C6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ServantAssetLoadManager_getAssetObject_TextAsset___, svtId, limitCount, isForce);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_18926/*"fbxevent"*/, v12, v13, v14);
    byte_42E98C6 = 1;
  }
  if ( isForce )
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ActorFolderName_26900124 = ServantAssetLoadManager__getActorFolderName_26900124(svtId, *(const MethodInfo **)&svtId);
  }
  else
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ActorFolderName_26900124 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  }
  if ( !this )
    sub_B5D69C(ActorFolderName_26900124, ActorFolderName_26900124);
  return (UnityEngine_TextAsset_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                      this,
                                      ActorFolderName_26900124,
                                      (System_String_o *)StringLiteral_18926/*"fbxevent"*/,
                                      (const MethodInfo_1E6A3CC *)Method_ServantAssetLoadManager_getAssetObject_TextAsset___);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_42E98BC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      (_DWORD)parent,
      svtId,
      *(_QWORD *)&limitCount);
    byte_42E98BC = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v12);
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
  System_String_o *ActorFolderName_26900124; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Texture2D_o *AssetObject_Texture2D; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v34; // x1
  UnityEngine_GameObject_o *v35; // x21
  UnityEngine_Transform_o *v36; // x22
  UnityEngine_Transform_o *v37; // x19
  int v38; // s0
  UnityEngine_Transform_o *v41; // x19
  int v42; // s0

  if ( (byte_42E98BD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Object_Instantiate_GameObject___,
      (_DWORD)assetPath,
      (_DWORD)parent,
      *(_QWORD *)&svtId);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v16, v17, v18);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_17639/*"chr"*/, v22, v23, v24);
    byte_42E98BD = 1;
  }
  if ( isForce )
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ActorFolderName_26900124 = ServantAssetLoadManager__getActorFolderName_26900124(
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
    ActorFolderName_26900124 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 (const MethodInfo *)parent);
  }
  *assetPath = ActorFolderName_26900124;
  sub_B5D560(
    (BattleServantConfConponent_o *)assetPath,
    (System_Int32_array **)ActorFolderName_26900124,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  AssetObject_Texture2D = ServantAssetLoadManager__getAssetObject_Texture2D_(
                            this,
                            *assetPath,
                            (System_String_o *)StringLiteral_17639/*"chr"*/,
                            (const MethodInfo_1E6A3CC *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_22;
  v35 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !parent )
    goto LABEL_22;
  v36 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v36 )
    goto LABEL_22;
  UnityEngine_Transform__set_parent(v36, (UnityEngine_Transform_o *)transform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v35, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0LL),
        v37 = UnityEngine_GameObject__get_transform(v35, 0LL),
        *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_up(0LL),
        !v37)
    || (UnityEngine_Transform__set_eulerAngles(v37, *(UnityEngine_Vector3_o *)&v38, 0LL),
        v41 = UnityEngine_GameObject__get_transform(v35, 0LL),
        *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Vector3__get_one(0LL),
        !v41) )
  {
LABEL_22:
    sub_B5D69C(transform, v34);
  }
  UnityEngine_Transform__set_localScale(v41, *(UnityEngine_Vector3_o *)&v42, 0LL);
  return v35;
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleCommonEffect(
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_42E98D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, (_DWORD)name, (_DWORD)method, v3);
    byte_42E98D6 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  return ServantAssetLoadManager__loadBattleCommonEffectLocal(Instance, path, name, v8);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleCommonEffectLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  AssetData_o *AssetStorage; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x19

  if ( (byte_42E98D7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)path, (_DWORD)name, method);
    sub_B5D5C4(&AssetManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E98D7 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   name,
                                                                   (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_42E98FB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      (_DWORD)parent,
      (_DWORD)method,
      v3);
    byte_42E98FB = 1;
  }
  if ( !cameraId )
    return 0LL;
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  return ServantAssetLoadManager__loadCameraActionlocal(Instance, cameraId, parent, v8);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCameraActionlocal(
        ServantAssetLoadManager_o *this,
        int32_t cameraId,
        UnityEngine_Transform_o *parent,
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
  System_String_o *CameraActionPath; // x0
  UnityEngine_Texture2D_o *AssetObject_Texture2D; // x22
  UnityEngine_GameObject_o *v21; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v23; // x1
  UnityEngine_Transform_o *v24; // x22
  UnityEngine_Transform_o *v25; // x19
  int v26; // s0
  UnityEngine_Transform_o *v29; // x19
  int v30; // s0

  if ( (byte_42E98FC & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, cameraId, (_DWORD)parent, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v10, v11, v12);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_17394/*"cameraAction"*/, v16, v17, v18);
    byte_42E98FC = 1;
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
                            (System_String_o *)StringLiteral_17394/*"cameraAction"*/,
                            (const MethodInfo_1E6A3CC *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v21 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AssetObject_Texture2D, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_21;
    v21 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !parent )
      goto LABEL_21;
    v24 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0LL);
    if ( !v24 )
      goto LABEL_21;
    UnityEngine_Transform__set_parent(v24, (UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v21, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0LL),
          v25 = UnityEngine_GameObject__get_transform(v21, 0LL),
          *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_up(0LL),
          !v25)
      || (UnityEngine_Transform__set_eulerAngles(v25, *(UnityEngine_Vector3_o *)&v26, 0LL),
          v29 = UnityEngine_GameObject__get_transform(v21, 0LL),
          *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_one(0LL),
          !v29) )
    {
LABEL_21:
      sub_B5D69C(transform, v23);
    }
    UnityEngine_Transform__set_localScale(v29, *(UnityEngine_Vector3_o *)&v30, 0LL);
  }
  return v21;
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

  if ( (byte_42E988D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      svtId,
      limit,
      *(_QWORD *)&commandLimit);
    byte_42E988D = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v9);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  const MethodInfo *v21; // x2
  System_String_o *CommandCardLoadFolderName; // x21
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  UnityEngine_Object_o *AssetObject_Texture2D; // x20
  bool v26; // w8
  UITexture_o *result; // x0
  _BOOL8 v28; // x0
  __int64 v29; // x1
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E988E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)tex, svtId, *(_QWORD *)&limit);
    sub_B5D5C4(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v10, v11, v12);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_17462/*"card_servant_"*/, v16, v17, v18);
    byte_42E988E = 1;
  }
  LimitImageIndex = 0;
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, commandLimit, 1, v19);
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v20, v21);
  v23 = System_Int32__ToString((int32_t)&LimitImageIndex, 0LL);
  v24 = System_String__Concat_44577788((System_String_o *)StringLiteral_17462/*"card_servant_"*/, v23, 0LL);
  AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                    this,
                                                    CommandCardLoadFolderName,
                                                    v24,
                                                    (const MethodInfo_1E6A3CC *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v26 = UnityEngine_Object__op_Equality(AssetObject_Texture2D, 0LL, 0LL);
  result = 0LL;
  if ( !v26 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v28 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v28 )
    {
      if ( !tex )
        sub_B5D69C(v28, v29);
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
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_42E98FF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      userCommandCodeId,
      (_DWORD)method,
      v3);
    byte_42E98FF = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal_26919304(Instance, tex, userCommandCodeId, v8);
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t commandCodeId,
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
  System_String_o *CommandCodeFolderName; // x22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  UnityEngine_Object_o *AssetObject_Texture2D; // x20
  bool v23; // w8
  UITexture_o *result; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  int32_t v27; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E9901 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)tex, commandCodeId, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v10, v11, v12);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_17381/*"c_{0:D7}"*/, v16, v17, v18);
    byte_42E9901 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(commandCodeId, (const MethodInfo *)tex);
  v27 = commandCodeId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  v21 = System_String__Format((System_String_o *)StringLiteral_17381/*"c_{0:D7}"*/, v20, 0LL);
  AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                    this,
                                                    CommandCodeFolderName,
                                                    v21,
                                                    (const MethodInfo_1E6A3CC *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v23 = UnityEngine_Object__op_Equality(AssetObject_Texture2D, 0LL, 0LL);
  result = 0LL;
  if ( !v23 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v25 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v25 )
    {
      if ( !tex )
        sub_B5D69C(v25, v26);
      ((void (__fastcall *)(UITexture_o *, UnityEngine_Object_o *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_Texture2D,
        tex->klass->vtable._28_get_shader.methodPtr);
    }
    return tex;
  }
  return result;
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTextureLocal_26919304(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int64_t userCommandCodeId,
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
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x21
  __int64 v19; // x22
  int32_t v20; // w0
  const MethodInfo *v21; // x3
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_42E9902 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, (_DWORD)tex, userCommandCodeId, method);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7, v8, v9);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42E9902 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  entity = 0LL;
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userCommandCodeId,
                                (const MethodInfo_23FB094 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
LABEL_13:
    sub_B5D69C(Instance, v17);
  v19 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v24.fields.currentCryptoKey = v19;
  *(_QWORD *)&v24.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v24, 0LL);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(this, tex, v20, v21);
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTexture_26919588(
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_42E9900 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      commandCodeId,
      (_DWORD)method,
      v3);
    byte_42E9900 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(Instance, tex, commandCodeId, v8);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCommonEffect(
        System_String_o *name,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42E98CD & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E98CD = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  return ServantAssetLoadManager__loadCommonEffectlocal(Instance, name, v7);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCommonEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *v14; // x0
  UnityEngine_Object_o *v15; // x0
  UnityEngine_Object_o *v16; // x19
  bool v17; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_42E98CE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18452/*"effect/"*/, v11, v12, v13);
    byte_42E98CE = 1;
  }
  v14 = System_String__Concat_44577788((System_String_o *)StringLiteral_18452/*"effect/"*/, name, 0LL);
  v15 = UnityEngine_Resources__Load(v14, 0LL);
  if ( v15 )
  {
    if ( (UnityEngine_GameObject_c *)v15->klass == UnityEngine_GameObject_TypeInfo )
      v16 = v15;
    else
      v16 = 0LL;
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
  v17 = UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
  result = 0LL;
  if ( v17 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)v16,
                                         (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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

  if ( (byte_42E98CB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      weapongroup,
      effectFolder,
      method);
    byte_42E98CB = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
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

  if ( (byte_42E98CC & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B5D5C4(
                                          &UnityEngine_Object_TypeInfo,
                                          (_DWORD)name,
                                          weapongroup,
                                          *(_QWORD *)&effectFolder);
    byte_42E98CC = 1;
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
  return StandFigureManager__CreateRenderPrefab_26229964(
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

  if ( (byte_42E9899 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      svtId,
      limit,
      *(_QWORD *)&treasureDvcId);
    byte_42E9899 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  ServantTreasureDvcEntity_o *EntityFromIDID; // x23
  DataManager_o *Instance; // x0
  __int64 v52; // x1
  ServantEntity_o *Entity; // x25
  ServantLimitAddMaster_o *v54; // x26
  const MethodInfo *v55; // x2
  System_String_o *v56; // x21
  System_String_o *OverwriteTDFileName; // x0
  UnityEngine_Object_o *AssetObject_Texture2D; // x20
  int imageIndex; // w22
  __int64 v60; // x25
  System_String_o *v61; // x24
  __int64 v62; // x25
  System_String_o *NpNameFileSuffix; // x22
  int32_t v64; // w1
  const MethodInfo *v65; // x2
  System_String_o *v66; // x21
  Il2CppObject *v67; // x0
  System_String_o *v68; // x0
  System_String_o *v69; // x2
  ServantAssetLoadManager_o *v70; // x0
  System_String_o *CommandCardLoadFolderName; // x1
  float v73; // s4
  float v74; // s5
  float v75; // s6
  float v76; // s7
  float v77; // s1
  float v78; // s2
  int v79; // s0
  float v80; // s3
  MethodInfo methoda; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Rect_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E989A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, (_DWORD)tex, svtId, *(_QWORD *)&limit);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v20, v21, v22);
    sub_B5D5C4(&int_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v29, v30, v31);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_17463/*"card_servant_np"*/, v47, v48, v49);
    byte_42E989A = 1;
  }
  methoda.name = 0LL;
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(svtId, treasureDvcId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_54;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  methoda.name = 0LL;
  if ( !Entity )
    goto LABEL_54;
  v54 = (ServantLimitAddMaster_o *)Instance;
  Instance = (DataManager_o *)ServantEntity__IsNameTrueFromBattleSvt(Entity, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_17;
  if ( !v54 )
    goto LABEL_54;
  if ( !ServantLimitAddMaster__TryGetEntity(v54, (ServantLimitAddEntity_o **)&methoda.name, svtId, limit, 0LL) )
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
    Instance = (DataManager_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v52, v55);
    if ( !methoda.name )
      goto LABEL_54;
    v56 = (System_String_o *)Instance;
    OverwriteTDFileName = ServantLimitAddEntity__GetOverwriteTDFileName((ServantLimitAddEntity_o *)methoda.name, 0LL);
    AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                      this,
                                                      v56,
                                                      OverwriteTDFileName,
                                                      (const MethodInfo_1E6A3CC *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    LOBYTE(imageIndex) = 0;
  }
  else
  {
LABEL_17:
    if ( EntityFromIDID )
    {
      v60 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      v61 = (System_String_o *)StringLiteral_17463/*"card_servant_np"*/;
      if ( (*(_BYTE *)(v60 + 306) & 1) == 0 )
        sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v62 = **(_QWORD **)(v60 + 192);
      if ( (*(_BYTE *)(v62 + 306) & 1) == 0 )
        sub_AF52C4(v62);
      Instance = **(DataManager_o ***)(v62 + 184);
      if ( !Instance )
        goto LABEL_54;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Instance )
        goto LABEL_54;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    treasureDvcId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_54;
      NpNameFileSuffix = TreasureDvcEntity__GetNpNameFileSuffix((TreasureDvcEntity_o *)Instance, 0LL);
      if ( !System_String__IsNullOrEmpty(NpNameFileSuffix, 0LL) )
        v61 = System_String__Concat_44580072(v61, (System_String_o *)StringLiteral_16096/*"_"*/, NpNameFileSuffix, 0LL);
      imageIndex = EntityFromIDID->fields.imageIndex;
      if ( imageIndex <= 1 )
      {
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v64, v65);
        v70 = this;
        v69 = v61;
      }
      else
      {
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        v66 = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v64, v65);
        LODWORD(methoda.methodPointer) = (unsigned int)imageIndex >> 1;
        v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
        v68 = System_String__Format((System_String_o *)StringLiteral_23850/*"{0}"*/, v67, 0LL);
        v69 = System_String__Concat_44577788(v61, v68, 0LL);
        v70 = this;
        CommandCardLoadFolderName = v66;
      }
      AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                        v70,
                                                        CommandCardLoadFolderName,
                                                        v69,
                                                        (const MethodInfo_1E6A3CC *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
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
        v78 = 1.0;
        v80 = 0.5;
        v79 = 0;
        v77 = 0.0;
        methoda.methodPointer = 0LL;
        methoda.invoker_method = 0LL;
      }
      else
      {
        v77 = 0.5;
        methoda.methodPointer = 0LL;
        methoda.invoker_method = 0LL;
        v78 = 1.0;
        v79 = 0;
        v80 = 0.5;
      }
      UnityEngine_Rect___ctor(*(UnityEngine_Rect_o *)&v79, v73, v74, v75, v76, &methoda);
      *(_QWORD *)&v82.fields.m_XMin = methoda.methodPointer;
      *(_QWORD *)&v82.fields.m_Width = methoda.invoker_method;
      UITexture__set_uvRect(tex, v82, 0LL);
      return 1;
    }
LABEL_54:
    sub_B5D69C(Instance, v52);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35615088(
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

  if ( (byte_42E98F2 & 1) == 0 )
  {
    sub_B5D5C4(
      &ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_TypeInfo,
      (_DWORD)parent,
      svtId,
      *(_QWORD *)&limitCount);
    byte_42E98F2 = 1;
  }
  v17 = sub_B5D694(ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_TypeInfo);
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152___ctor(
    (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)v17,
    0,
    0LL);
  if ( !v17 )
    sub_B5D69C(v18, v19);
  *(_QWORD *)(v17 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v17 + 32), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 40) = parent;
  sub_B5D560((BattleServantConfConponent_o *)(v17 + 40), (System_Int32_array **)parent, v26, v27, v28, v29, v30, v31);
  *(_DWORD *)(v17 + 56) = npChargeStage;
  *(_DWORD *)(v17 + 60) = svtId;
  *(_DWORD *)(v17 + 48) = treasureDvcId;
  *(_DWORD *)(v17 + 52) = limitCount;
  *(_DWORD *)(v17 + 72) = treasureDvcLv;
  *(_QWORD *)(v17 + 80) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v17 + 80), (System_Int32_array **)callback, v32, v33, v34, v35, v36, v37);
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

  if ( (byte_42E98C7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      limit,
      (_DWORD)name,
      *(_QWORD *)&seqIdFromMstTDSeqWeight);
    byte_42E98C7 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v27; // x1
  int32_t eventId; // w0
  System_String_o *v29; // x0
  System_String_o *v30; // x21
  System_String_o *v31; // x0
  int v33; // [xsp+Ch] [xbp-44h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  int32_t v35; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42E98C8 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, treasureDeviceId, limit, name);
    sub_B5D5C4(&Method_DataManager_GetMaster_TreasureDvcMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_9693/*"NoblePhantasm/"*/, v23, v24, v25);
    byte_42E98C8 = 1;
  }
  v35 = 0;
  entity = 0LL;
  v33 = 0;
  if ( seqIdFromMstTDSeqWeight < 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_TreasureDvcMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_23;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            Master_WarQuestSelectionMaster,
            &entity,
            treasureDeviceId,
            (const MethodInfo_23FAE6C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
    {
      v35 = treasureDeviceId;
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
      sub_B5D69C(Master_WarQuestSelectionMaster, v27);
    }
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      eventId = entity->fields.eventId;
    else
      eventId = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)entity, limit, 0LL);
    v35 = eventId;
  }
  else
  {
    v35 = seqIdFromMstTDSeqWeight;
  }
LABEL_17:
  v29 = System_Int32__ToString((int32_t)&v35, 0LL);
  v30 = System_String__Concat_44577788((System_String_o *)StringLiteral_9693/*"NoblePhantasm/"*/, v29, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v30, 0LL) )
  {
    v33 = 10 * (v35 / 10);
    v31 = System_Int32__ToString((int32_t)&v33, 0LL);
    v30 = System_String__Concat_44577788((System_String_o *)StringLiteral_9693/*"NoblePhantasm/"*/, v31, 0LL);
  }
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                       this,
                                       v30,
                                       name,
                                       (const MethodInfo_1E6A3CC *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


void __fastcall ServantAssetLoadManager__loadSkillCutIn(
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_42E98DB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      (_DWORD)callback,
      (_DWORD)method,
      v3);
    byte_42E98DB = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  ServantAssetLoadManager__loadSkillCutInLocal(Instance, skillInfo, callback, v8);
}


void __fastcall ServantAssetLoadManager__loadSkillCutInLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w1
  System_String_o *SkillCutInPath; // x20

  if ( (byte_42E98DC & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)skillInfo, (_DWORD)callback, method);
    byte_42E98DC = 1;
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

  if ( (byte_42E9895 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, svtID, limit, method);
    byte_42E9895 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  const MethodInfo *v20; // x2
  System_String_o *StatusImageFolderName; // x21
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  UnityEngine_Object_o *AssetObject_Texture2D; // x20
  bool v25; // w8
  UITexture_o *result; // x0
  _BOOL8 v27; // x0
  __int64 v28; // x1
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E9896 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)tex, svtID, *(_QWORD *)&limit);
    sub_B5D5C4(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v9, v10, v11);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_22616/*"status_servant_"*/, v15, v16, v17);
    byte_42E9896 = 1;
  }
  LimitImageIndex = 0;
  ServantAssetLoadManager__getSvtEntity(this, svtID, *(const MethodInfo **)&svtID);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtID, limit, 1, v18);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(svtID, v19, v20);
  v22 = System_Int32__ToString((int32_t)&LimitImageIndex, 0LL);
  v23 = System_String__Concat_44577788((System_String_o *)StringLiteral_22616/*"status_servant_"*/, v22, 0LL);
  AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                    this,
                                                    StatusImageFolderName,
                                                    v23,
                                                    (const MethodInfo_1E6A3CC *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v25 = UnityEngine_Object__op_Equality(AssetObject_Texture2D, 0LL, 0LL);
  result = 0LL;
  if ( !v25 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v27 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v27 )
    {
      if ( !tex )
        sub_B5D69C(v27, v28);
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

  if ( (byte_42E98D0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      weapongroup,
      effectFolder,
      method);
    byte_42E98D0 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return ServantAssetLoadManager__loadWeaponGroupEffectlocal(Instance, name, weapongroup, effectFolder, v9);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadWeaponGroupEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
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
  System_String_o *v19; // x0
  System_String_o *v20; // x21
  System_String_o *v21; // x0
  AssetData_o *AssetStorage; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x19
  int32_t v25; // [xsp+8h] [xbp-18h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-14h] BYREF

  v25 = effectFolder;
  v26 = weapongroup;
  if ( (byte_42E98D1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)name, weapongroup, *(_QWORD *)&effectFolder);
    sub_B5D5C4(&AssetManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_5941/*"Effect/weapon/"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v16, v17, v18);
    byte_42E98D1 = 1;
  }
  v19 = System_Int32__ToString((int32_t)&v26, 0LL);
  v20 = System_String__Concat_44577788((System_String_o *)StringLiteral_5941/*"Effect/weapon/"*/, v19, 0LL);
  if ( effectFolder )
  {
    v21 = System_Int32__ToString((int32_t)&v25, 0LL);
    v20 = System_String__Concat_44580072(v20, (System_String_o *)StringLiteral_885/*"/"*/, v21, 0LL);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v20, 0LL);
  if ( AssetStorage )
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   name,
                                                                   (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *ActorVoice; // x0

  if ( (byte_42E98EF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, uniqueId, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v8, v9, v10);
    byte_42E98EF = 1;
  }
  ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
  if ( !ActorVoice )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)ActorVoice,
         uniqueId,
         (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
    if ( ActorVoice )
    {
      ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(ActorVoice, uniqueId, (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
      if ( ActorVoice )
      {
        SePlayer__StopSe((SePlayer_o *)ActorVoice, fadeoutTime, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B5D69C(ActorVoice, *(_QWORD *)&uniqueId);
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

  if ( (byte_42E98E3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      limit,
      overwriteSvtVoiceId,
      voiceTypeId);
    byte_42E98E3 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v18);
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

  if ( (byte_42E98E6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      limit,
      overwriteSvtVoiceId,
      fileName);
    byte_42E98E6 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v12);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  SePlayer_o *result; // x0
  const MethodInfo *v17; // x3
  int32_t VoiceId; // w0
  int32_t v19; // w8
  System_String_o *v20; // x0
  System_String_o *v21; // x20
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E98E7 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, svtId, limit, *(_QWORD *)&overwriteSvtVoiceId);
    sub_B5D5C4(&StringLiteral_12888/*"Servants/"*/, v13, v14, v15);
    byte_42E98E7 = 1;
  }
  v22 = 0;
  result = (SePlayer_o *)ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&limit);
  if ( result )
  {
    VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v17);
    if ( overwriteSvtVoiceId )
      v19 = overwriteSvtVoiceId;
    else
      v19 = VoiceId;
    v22 = v19;
    v20 = System_Int32__ToString((int32_t)&v22, 0LL);
    v21 = System_String__Concat_44577788((System_String_o *)StringLiteral_12888/*"Servants/"*/, v20, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    return SoundManager__playSe_23414888(v21, targetFileName, volume, 0LL, 0LL);
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  __int64 v53; // x23
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *ActorVoice; // x0
  __int64 v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  SePlayer_o **v62; // x28
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  const MethodInfo *v69; // x2
  ServantEntity_o *SvtEntity; // x27
  const MethodInfo *v71; // x3
  const MethodInfo *v72; // x3
  int32_t VoicePrefix; // w0
  __int64 *v74; // x8
  System_String_o *v75; // x22
  System_String_o *v76; // x0
  System_String_o *v77; // x0
  struct System_Collections_Generic_Dictionary_int__SePlayer__o *v78; // x22
  System_String_o *v79; // x24
  System_Action_o *v80; // x25
  SePlayer_o *result; // x0
  Il2CppObject *v82; // x0
  int32_t v83; // [xsp+8h] [xbp-58h] BYREF
  int32_t VoiceId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E98E4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, svtId, limit, *(_QWORD *)&overwriteSvtVoiceId);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__string__set_Item__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__, v29, v30, v31);
    sub_B5D5C4(&int_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&SoundManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_ServantAssetLoadManager___c__DisplayClass134_0__playBattleVoicelocal_b__0__, v38, v39, v40);
    sub_B5D5C4(&ServantAssetLoadManager___c__DisplayClass134_0_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_23810/*"{0:D0}_{1}"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_12888/*"Servants/"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_9693/*"NoblePhantasm/"*/, v50, v51, v52);
    byte_42E98E4 = 1;
  }
  VoiceId = 0;
  v53 = sub_B5D694(ServantAssetLoadManager___c__DisplayClass134_0_TypeInfo);
  ServantAssetLoadManager___c__DisplayClass134_0___ctor((ServantAssetLoadManager___c__DisplayClass134_0_o *)v53, 0LL);
  if ( !v53 )
    goto LABEL_29;
  *(_QWORD *)(v53 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v53 + 16), (System_Int32_array **)this, v56, v57, v58, v59, v60, v61);
  *(_QWORD *)(v53 + 24) = callback;
  v62 = (SePlayer_o **)(v53 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v53 + 24), (System_Int32_array **)callback, v63, v64, v65, v66, v67, v68);
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, v69);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v71);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v72);
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
               (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
        {
          ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
          if ( !ActorVoice )
            goto LABEL_29;
          if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 ActorVoice,
                 uniqueId,
                 (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__) )
          {
            ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
            if ( !ActorVoice )
              goto LABEL_29;
            ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(ActorVoice, uniqueId, (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
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
          (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
        v74 = &StringLiteral_9693/*"NoblePhantasm/"*/;
        if ( !isNp )
          v74 = &StringLiteral_12888/*"Servants/"*/;
        v75 = (System_String_o *)*v74;
        v76 = System_Int32__ToString((int32_t)&VoiceId, 0LL);
        v77 = System_String__Concat_44577788(v75, v76, 0LL);
        v78 = this->fields.ActorVoice;
        v79 = v77;
        v80 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v80,
          (Il2CppObject *)v53,
          Method_ServantAssetLoadManager___c__DisplayClass134_0__playBattleVoicelocal_b__0__,
          0LL);
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SoundManager__playVoice_23391328(v79, targetFileName, volume, v80, 0LL);
        if ( v78 )
        {
          System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v78,
            uniqueId,
            (WarBoardAIRoute_RouteData_o *)ActorVoice,
            (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__);
          ActorVoice = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.ActorVoice;
          if ( ActorVoice )
            return (SePlayer_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                   ActorVoice,
                                   uniqueId,
                                   (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        }
      }
LABEL_29:
      sub_B5D69C(ActorVoice, v55);
    }
  }
  else
  {
    v83 = VoicePrefix;
    v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
    targetFileName = System_String__Format_44573324(
                       (System_String_o *)StringLiteral_23810/*"{0:D0}_{1}"*/,
                       v82,
                       (Il2CppObject *)voiceTypeId,
                       0LL);
    if ( SvtEntity )
      goto LABEL_8;
  }
  result = *v62;
  if ( *v62 )
  {
    System_Action__Invoke((System_Action_o *)result, 0LL);
    return 0LL;
  }
  return result;
}


void __fastcall ServantAssetLoadManager__preloadActorMotion(int32_t weapongroup, bool dlOnly, const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ServantAssetLoadManager_o *Instance; // x20
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  v13 = weapongroup;
  if ( (byte_42E98DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_12892/*"Servants/Motion/"*/, v5, v6, v7);
    byte_42E98DE = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v9 = System_Int32__ToString((int32_t)&v13, 0LL);
  v10 = System_String__Concat_44577788((System_String_o *)StringLiteral_12892/*"Servants/Motion/"*/, v9, 0LL);
  if ( !Instance )
    sub_B5D69C(v10, v11);
  ServantAssetLoadManager__setLoadList(Instance, v10, dlOnly, v12);
}


void __fastcall ServantAssetLoadManager__preloadBattleActor(
        ServantAssetArgs_o *args,
        bool isForce,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x6

  if ( (byte_42E98B8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, isForce, (_DWORD)method, v3);
    byte_42E98B8 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_B5D69C(Instance, v7);
  ServantAssetLoadManager__preloadBattleActorlocal(
    Instance,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    isForce,
    0,
    v8);
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
  System_String_o *ActorFolderName_26900124; // x0
  const MethodInfo *v15; // x3
  int32_t v16; // w0

  if ( (byte_42E98B9 & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, svtId, limitCount, *(_QWORD *)&appearanceId);
    byte_42E98B9 = 1;
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
      ActorFolderName_26900124 = ServantAssetLoadManager__getActorFolderName_26900124(v13, *(const MethodInfo **)&svtId);
      goto LABEL_24;
    }
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    v16 = appearanceId;
  }
  ActorFolderName_26900124 = ServantAssetLoadManager__getActorFolderName(
                               v16,
                               limitCount,
                               *(const MethodInfo **)&limitCount);
LABEL_24:
  if ( !this )
    sub_B5D69C(ActorFolderName_26900124, ActorFolderName_26900124);
  ServantAssetLoadManager__setLoadList(this, ActorFolderName_26900124, dlOnly, v15);
}


System_String_array *__fastcall ServantAssetLoadManager__preloadBattleCommonEffect(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42E98D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E98D4 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  return ServantAssetLoadManager__preloadBattleCommonEffectLocal(Instance, effectIdList, v7);
}


System_String_array *__fastcall ServantAssetLoadManager__preloadBattleCommonEffectLocal(
        ServantAssetLoadManager_o *this,
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_array *BattleCommonEffectPathList; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  __int64 v9; // x8
  System_String_array *v10; // x20
  unsigned __int64 v11; // x21
  __int64 v13; // x0

  if ( (byte_42E98D5 & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, (_DWORD)effectIdList, (_DWORD)method, v3);
    byte_42E98D5 = 1;
  }
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  BattleCommonEffectPathList = BattleEffectUtility__GetBattleCommonEffectPathList(effectIdList, 0LL);
  if ( !BattleCommonEffectPathList )
    sub_B5D69C(0LL, v7);
  v9 = *(_QWORD *)&BattleCommonEffectPathList->max_length;
  v10 = BattleCommonEffectPathList;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)v9 )
      {
        v13 = sub_B5D6C8(BattleCommonEffectPathList);
        sub_B5D668(v13, 0LL);
      }
      ServantAssetLoadManager__setLoadList(this, v10->m_Items[v11], 0, v8);
      LODWORD(v9) = v10->max_length;
      ++v11;
    }
    while ( (__int64)v11 < (int)v9 );
  }
  return v10;
}


void __fastcall ServantAssetLoadManager__preloadCameraAction(int32_t cameraId, bool dlOnly, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  const MethodInfo *v9; // x1
  ServantAssetLoadManager_o *Instance; // x21
  System_String_o *CameraActionPath; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3

  if ( (byte_42E98FA & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, dlOnly, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6, v7, v8);
    byte_42E98FA = 1;
  }
  if ( cameraId )
  {
    Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, v9);
    if ( !Instance )
      sub_B5D69C(CameraActionPath, v12);
    ServantAssetLoadManager__setLoadList(Instance, CameraActionPath, dlOnly, v13);
  }
}


void __fastcall ServantAssetLoadManager__preloadCommandCard(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x4

  if ( (byte_42E988B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, limitCount, (_DWORD)method, v3);
    byte_42E988B = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  ServantAssetLoadManager__preloadCommandCardlocal(Instance, svtId, v7, 0, v8);
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

  if ( (byte_42E988C & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, svtId, limitCount, dlOnly);
    byte_42E988C = 1;
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
  if ( (byte_42E9903 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B5D5C4(
                                          &ServantAssetLoadManager_TypeInfo,
                                          (_DWORD)commandCodeIds,
                                          dlOnly,
                                          method);
    byte_42E9903 = 1;
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
          v13 = sub_B5D6C8(this);
          sub_B5D668(v13, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_42E98B1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1, v2, v3);
    byte_42E98B1 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal(Instance, v5);
}


void __fastcall ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v23; // x20
  unsigned __int64 v24; // x24
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o **p_lookup; // x25
  SoundManager_o *v26; // x21
  System_String_o *VoiceAssetName; // x22
  System_Action_o *v28; // x23
  __int64 v29; // x0

  if ( (byte_42E98B2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandSpellMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_CommandSpellEntity___, v8, v9, v10);
    sub_B5D5C4(&Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v17, v18, v19);
    byte_42E98B2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                      (DataMasterBase_o *)Instance,
                                      (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_CommandSpellEntity___)) == 0LL )
  {
LABEL_21:
    sub_B5D69C(Instance, v21);
  }
  datalist = Instance->fields.datalist;
  v23 = Instance;
  if ( (int)datalist >= 1 )
  {
    v24 = 0LL;
    p_lookup = &Instance->fields.lookup;
    do
    {
      if ( v24 >= (unsigned int)datalist )
      {
LABEL_20:
        v29 = sub_B5D6C8(Instance);
        sub_B5D668(v29, 0LL);
      }
      Instance = (DataManager_o *)p_lookup[v24];
      if ( Instance )
      {
        Instance = (DataManager_o *)CommandSpellEntity__isUseBattle((CommandSpellEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v24 >= LODWORD(v23->fields.datalist) )
            goto LABEL_20;
          Instance = (DataManager_o *)p_lookup[v24];
          if ( !Instance )
            goto LABEL_21;
          Instance = (DataManager_o *)CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
          if ( Instance )
          {
            ++this->fields.soundCount;
            Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
            if ( v24 >= LODWORD(v23->fields.datalist) )
              goto LABEL_20;
            v26 = (SoundManager_o *)Instance;
            Instance = (DataManager_o *)p_lookup[v24];
            if ( !Instance )
              goto LABEL_21;
            VoiceAssetName = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
            v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              v28,
              (Il2CppObject *)this,
              Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__,
              0LL);
            if ( !v26 )
              goto LABEL_21;
            SoundManager__LoadAudioAssetStorage(v26, VoiceAssetName, v28, 1, 0LL);
          }
        }
      }
      LODWORD(datalist) = v23->fields.datalist;
      ++v24;
    }
    while ( (__int64)v24 < (int)datalist );
  }
}


void __fastcall ServantAssetLoadManager__preloadFromDeckServant(
        BattleDeckServantData_o *deckSvt,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t EnemyNameEffect; // w0
  const MethodInfo *v10; // x1
  int32_t v11; // w20
  System_String_o *NameEffectPath; // x20
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3

  if ( (byte_42E990A & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, dlOnly, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6, v7, v8);
    byte_42E990A = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0LL);
    if ( EnemyNameEffect )
    {
      v11 = EnemyNameEffect;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v11, v10);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        sub_B5D69C(0LL, v14);
      ServantAssetLoadManager__setLoadList(Instance, NameEffectPath, dlOnly, v15);
    }
  }
}


void __fastcall ServantAssetLoadManager__preloadServant(
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_42E98A6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly, (_DWORD)method, v3);
    byte_42E98A6 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  ServantAssetLoadManager__preloadServantlocal(Instance, args, dlOnly, v8);
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

  if ( (byte_42E98A9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      limitCount,
      overwriteSvtVoiceId,
      method);
    byte_42E98A9 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int32_t VoiceId; // w0
  int32_t v24; // w8
  SoundManager_o *Instance; // x21
  System_String_o *v26; // x0
  System_String_o *v27; // x22
  System_Action_o *v28; // x0
  System_Action_o *v29; // x23
  __int64 v30; // x0
  __int64 v31; // x1
  int32_t v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E98AA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, svtId, limitCount, *(_QWORD *)&overwriteSvtVoiceId);
    sub_B5D5C4(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__, v11, v12, v13);
    sub_B5D5C4(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_12895/*"Servants_"*/, v20, v21, v22);
    byte_42E98AA = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v24 = overwriteSvtVoiceId;
  else
    v24 = VoiceId;
  v32 = v24;
  if ( v24 )
  {
    ++this->fields.soundCount;
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v26 = System_Int32__ToString((int32_t)&v32, 0LL);
    v27 = System_String__Concat_44577788((System_String_o *)StringLiteral_12895/*"Servants_"*/, v26, 0LL);
    v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v29 = v28;
    if ( dlOnly )
    {
      System_Action___ctor(
        v28,
        (Il2CppObject *)this,
        Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__,
        0LL);
      if ( Instance )
      {
        SoundManager__DownloadAudioAssetStorage(Instance, v27, v29, 1, 0LL);
        return;
      }
LABEL_13:
      sub_B5D69C(v30, v31);
    }
    System_Action___ctor(
      v28,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__,
      0LL);
    if ( !Instance )
      goto LABEL_13;
    SoundManager__LoadAudioAssetStorage(Instance, v27, v29, 1, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_42E98AD & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly, (_DWORD)method, v3);
    byte_42E98AD = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  ServantAssetLoadManager__preloadSkillAnyVoiceLocal(Instance, skillInfo, dlOnly, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadSkillAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool dlOnly,
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
  __int64 v25; // x1
  __int64 v26; // x22
  __int64 v27; // x22
  DataManager_o *v28; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x22
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v31; // x21
  System_String_o *VoiceAssetName; // x20
  System_Action_o *v33; // x21
  SoundManager_o *Instance; // x20
  System_String_o *v35; // x21
  System_Action_o *v36; // x22

  if ( (byte_42E98AE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)skillInfo, dlOnly, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__, v10, v11, v12);
    sub_B5D5C4(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v19, v20, v21);
    sub_B5D5C4(&SoundManager_TypeInfo, v22, v23, v24);
    byte_42E98AE = 1;
  }
  if ( skillInfo
    && ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, bool, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
         skillInfo,
         skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
         dlOnly,
         method)
    && skillInfo->fields.skilllv )
  {
    v26 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v27 = **(_QWORD **)(v26 + 192);
    if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
      sub_AF52C4(v27);
    v28 = **(DataManager_o ***)(v27 + 184);
    if ( v28 )
    {
      MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                v28,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
      v28 = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_WarQuestSelectionMaster )
      {
        Entity = SkillLvMaster__GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int32_t)v28,
                   skillInfo->fields.skilllv,
                   0LL);
        if ( !Entity )
          return;
        v31 = Entity;
        if ( !SkillLvEntity__getVoiceAssetName(Entity, 0LL) )
          return;
        ++this->fields.soundCount;
        if ( dlOnly )
        {
          VoiceAssetName = SkillLvEntity__getVoiceAssetName(v31, 0LL);
          v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v33,
            (Il2CppObject *)this,
            Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__,
            0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__downloadAudioAssetStorage(VoiceAssetName, v33, 1, 0LL);
          return;
        }
        Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        v35 = SkillLvEntity__getVoiceAssetName(v31, 0LL);
        v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v36,
          (Il2CppObject *)this,
          Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__,
          0LL);
        if ( Instance )
        {
          SoundManager__LoadAudioAssetStorage(Instance, v35, v36, 1, 0LL);
          return;
        }
      }
    }
    sub_B5D69C(v28, v25);
  }
}


void __fastcall ServantAssetLoadManager__preloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x4

  if ( (byte_42E9893 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, limitCount, (_DWORD)method, v3);
    byte_42E9893 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  ServantAssetLoadManager__preloadCommandCardlocal(Instance, svtId, v7, 0, v8);
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

  if ( (byte_42E9894 & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, svtId, limitCount, dlOnly);
    byte_42E9894 = 1;
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
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  ServantAssetLoadManager_o *Instance; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x22
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  int32_t v19; // [xsp+8h] [xbp-28h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  v19 = effectFolder;
  v20 = weapongroup;
  if ( (byte_42E98CF & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, effectFolder, dlOnly, method);
    sub_B5D5C4(&StringLiteral_5941/*"Effect/weapon/"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v9, v10, v11);
    byte_42E98CF = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v13 = System_Int32__ToString((int32_t)&v20, 0LL);
  v14 = v13;
  if ( !effectFolder )
  {
    v16 = System_String__Concat_44577788((System_String_o *)StringLiteral_5941/*"Effect/weapon/"*/, v13, 0LL);
    if ( Instance )
      goto LABEL_5;
LABEL_7:
    sub_B5D69C(v16, v17);
  }
  v15 = System_Int32__ToString((int32_t)&v19, 0LL);
  v16 = System_String__Concat_44581200(
          (System_String_o *)StringLiteral_5941/*"Effect/weapon/"*/,
          v14,
          (System_String_o *)StringLiteral_885/*"/"*/,
          v15,
          0LL);
  if ( !Instance )
    goto LABEL_7;
LABEL_5:
  ServantAssetLoadManager__setLoadList(Instance, v16, dlOnly, v18);
}


void __fastcall ServantAssetLoadManager__releaseNoblePhantasm(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  AssetData_o *nobleAssetData; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  AssetData_o *nobleSequenceData; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct System_Collections_Generic_List_AssetData__o *bgAssetDataList; // x0
  __int64 v44; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *nobleEffectList; // x0
  System_String_array *v53; // x0
  const MethodInfo *v54; // x2
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E98F4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_AssetData__TypeInfo, v26, v27, v28);
    byte_42E98F4 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  nobleAssetData = this->fields.nobleAssetData;
  if ( nobleAssetData )
  {
    AssetData__RemoveEntry(nobleAssetData, 0LL);
    this->fields.nobleAssetData = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.nobleAssetData, 0LL, v30, v31, v32, v33, v34, v35);
  }
  nobleSequenceData = this->fields.nobleSequenceData;
  if ( nobleSequenceData )
  {
    AssetData__RemoveEntry(nobleSequenceData, 0LL);
    this->fields.nobleSequenceData = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.nobleSequenceData, 0LL, v37, v38, v39, v40, v41, v42);
  }
  bgAssetDataList = this->fields.bgAssetDataList;
  if ( bgAssetDataList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v55,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bgAssetDataList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v55,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      if ( !v55.fields.current )
        sub_B5D69C(0LL, v44);
      AssetData__RemoveEntry((AssetData_o *)v55.fields.current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v55,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v45,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v45;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.bgAssetDataList,
      (System_Int32_array **)v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  nobleEffectList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.nobleEffectList;
  if ( !nobleEffectList )
    goto LABEL_19;
  if ( nobleEffectList->fields._size < 1 )
    return;
  v53 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 nobleEffectList,
                                 (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal(this, v53, v54);
  nobleEffectList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.nobleEffectList;
  if ( !nobleEffectList )
LABEL_19:
    sub_B5D69C(nobleEffectList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)nobleEffectList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall ServantAssetLoadManager__setLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        bool dlOnly,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  struct System_Collections_Generic_List_string__o *downloadlist; // x0
  AssetLoader_LoadEndDataHandler_o *v20; // x21
  AssetLoader_LoadEndDataHandler_o *v21; // x21

  if ( (byte_42E989F & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)path, dlOnly, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, v10, v11, v12);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_ServantAssetLoadManager_endloadList__, v16, v17, v18);
    byte_42E989F = 1;
  }
  if ( dlOnly )
  {
    downloadlist = this->fields.downloadlist;
    if ( downloadlist )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)downloadlist,
        (EventMissionProgressRequest_Argument_ProgressData_o *)path,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      v20 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v20,
        (Il2CppObject *)this,
        Method_ServantAssetLoadManager_endloadList__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__downloadAssetStorage(path, v20, 20, 0LL) )
        return;
      downloadlist = this->fields.downloadlist;
      if ( downloadlist )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)downloadlist,
          (WarBoardManager_TaskList_o *)path,
          (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__);
        return;
      }
    }
LABEL_18:
    sub_B5D69C(downloadlist, path);
  }
  downloadlist = this->fields.loadedList;
  if ( !downloadlist )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)downloadlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)path,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  downloadlist = this->fields.loadlist;
  if ( !downloadlist )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)downloadlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)path,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v21, (Il2CppObject *)this, Method_ServantAssetLoadManager_endloadList__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30663876(path, 20, v21, 0LL);
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

  if ( (byte_42E98A0 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)path, dlOnly, method);
    byte_42E98A0 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(path, 0LL) )
    ServantAssetLoadManager__setLoadList(this, path, dlOnly, v7);
}


void __fastcall ServantAssetLoadManager__unloadActorMotion(int32_t weapongroup, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42E98E1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E98E1 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  ServantAssetLoadManager__unloadActorMotionlocal(Instance, weapongroup, v7);
}


void __fastcall ServantAssetLoadManager__unloadActorMotionlocal(
        ServantAssetLoadManager_o *this,
        int32_t weapongroup,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *v14; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadedList; // x0
  __int64 v16; // x1
  WarBoardManager_TaskList_o *v17; // x20
  AssetData_o *AssetStorage; // x0
  int32_t v19; // [xsp+Ch] [xbp-14h] BYREF

  v19 = weapongroup;
  if ( (byte_42E98E2 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, weapongroup, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12892/*"Servants/Motion/"*/, v11, v12, v13);
    byte_42E98E2 = 1;
  }
  v14 = System_Int32__ToString((int32_t)&v19, 0LL);
  loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_String__Concat_44577788(
                                                                                (System_String_o *)StringLiteral_12892/*"Servants/Motion/"*/,
                                                                                v14,
                                                                                0LL);
  if ( !this->fields.loadedList )
    goto LABEL_11;
  v17 = (WarBoardManager_TaskList_o *)loadedList;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)loadedList,
         (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( loadedList )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadedList,
        v17,
        (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_7;
    }
LABEL_11:
    sub_B5D69C(loadedList, v16);
  }
LABEL_7:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v17, 0LL);
  AssetManager__releaseAsset_30657564(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadAssets(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_42E98F7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1, v2, v3);
    byte_42E98F7 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  ServantAssetLoadManager__unloadAssetsLocal(Instance, v5);
}


void __fastcall ServantAssetLoadManager__unloadAssetsLocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  Il2CppObject *current; // x20
  AssetData_o *AssetStorage; // x20
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E98F8 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v17, v18, v19);
    byte_42E98F8 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)loadedList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v23.fields.current;
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
      AssetManager__releaseAsset_30657564(AssetStorage, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  loadedList = this->fields.loadedList;
  if ( !loadedList )
LABEL_16:
    sub_B5D69C(loadedList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadedList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall ServantAssetLoadManager__unloadBattleActor(ServantAssetArgs_o *args, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4

  if ( (byte_42E98BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E98BE = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_B5D69C(Instance, v6);
  ServantAssetLoadManager__unloadBattleActorlocal(
    Instance,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadBattleActorlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        const MethodInfo *method)
{
  int v5; // w21
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_List_WarBoardManager_TaskList__o *ActorFolderName; // x0
  __int64 v19; // x1
  WarBoardManager_TaskList_o *v20; // x20
  AssetData_o *AssetStorage; // x0

  v5 = appearanceId;
  if ( (byte_42E98BF & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, svtId, limitCount, *(_QWORD *)&appearanceId);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, v12, v13, v14);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v15, v16, v17);
    byte_42E98BF = 1;
  }
  if ( v5 < 1 )
    v5 = svtId;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ActorFolderName = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)ServantAssetLoadManager__getActorFolderName(
                                                                                     v5,
                                                                                     limitCount,
                                                                                     *(const MethodInfo **)&limitCount);
  if ( !this->fields.loadedList )
    goto LABEL_16;
  v20 = (WarBoardManager_TaskList_o *)ActorFolderName;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)ActorFolderName,
         (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    ActorFolderName = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( ActorFolderName )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        ActorFolderName,
        v20,
        (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_12;
    }
LABEL_16:
    sub_B5D69C(ActorFolderName, v19);
  }
LABEL_12:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v20, 0LL);
  AssetManager__releaseAsset_30657564(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadCameraAction(int32_t cameraId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42E98FD & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E98FD = 1;
  }
  if ( cameraId )
  {
    Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v6);
    ServantAssetLoadManager__unloadCameraActionlocal(Instance, cameraId, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadCameraActionlocal(
        ServantAssetLoadManager_o *this,
        int32_t cameraId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *CameraActionPath; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42E98FE & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, cameraId, (_DWORD)method, v3);
    byte_42E98FE = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, *(const MethodInfo **)&cameraId);
  ServantAssetLoadManager__unloadTargetPathAssetLocal(this, CameraActionPath, v7);
}


void __fastcall ServantAssetLoadManager__unloadCommandCard(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_42E988F & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, limitCount, (_DWORD)method, v3);
    byte_42E988F = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  ServantAssetLoadManager__unloadCommandCardlocal(Instance, svtId, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadCommandCardlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
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
  System_Collections_Generic_List_WarBoardManager_TaskList__o *CommandCardLoadFolderName; // x0
  __int64 v16; // x1
  WarBoardManager_TaskList_o *v17; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_42E9890 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, svtId, limitCount, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, v9, v10, v11);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v12, v13, v14);
    byte_42E9890 = 1;
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
  v17 = (WarBoardManager_TaskList_o *)CommandCardLoadFolderName;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)CommandCardLoadFolderName,
         (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    CommandCardLoadFolderName = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( CommandCardLoadFolderName )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        CommandCardLoadFolderName,
        v17,
        (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_10;
    }
LABEL_14:
    sub_B5D69C(CommandCardLoadFolderName, v16);
  }
LABEL_10:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v17, 0LL);
  AssetManager__releaseAsset_30657564(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadCommandSpellAnyVoice(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_42E98B3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1, v2, v3);
    byte_42E98B3 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal(Instance, v5);
}


void __fastcall ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  void *Instance; // x0
  __int64 v14; // x1
  int v15; // w8
  _DWORD *v16; // x19
  unsigned int i; // w21
  char *v18; // x23
  CommandSpellEntity_o *v19; // x0
  void **v20; // x23
  CommandSpellEntity_o *v21; // t1
  SoundManager_o *v22; // x20
  __int64 v23; // x0

  if ( (byte_42E98B4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandSpellMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_CommandSpellEntity___, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v10, v11, v12);
    byte_42E98B4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL
    || (Instance = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                     (DataMasterBase_o *)Instance,
                     (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_CommandSpellEntity___)) == 0LL )
  {
LABEL_21:
    sub_B5D69C(Instance, v14);
  }
  v15 = *((_DWORD *)Instance + 6);
  v16 = Instance;
  if ( v15 >= 1 )
  {
    for ( i = 0; (int)i < v15; ++i )
    {
      if ( i >= v15 )
      {
LABEL_20:
        v23 = sub_B5D6C8(Instance);
        sub_B5D668(v23, 0LL);
      }
      v18 = (char *)&v16[2 * i];
      v21 = (CommandSpellEntity_o *)*((_QWORD *)v18 + 4);
      v20 = (void **)(v18 + 32);
      v19 = v21;
      if ( !v21 )
        return;
      Instance = (void *)CommandSpellEntity__isUseBattle(v19, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( i >= v16[6] )
          goto LABEL_20;
        Instance = *v20;
        if ( !*v20 )
          goto LABEL_21;
        Instance = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
        if ( Instance )
        {
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
          if ( i >= v16[6] )
            goto LABEL_20;
          v22 = (SoundManager_o *)Instance;
          Instance = *v20;
          if ( !*v20 )
            goto LABEL_21;
          Instance = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
          if ( !v22 )
            goto LABEL_21;
          SoundManager__ReleaseAudioAssetStorage(v22, (System_String_o *)Instance, 0LL);
        }
      }
      v15 = v16[6];
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadFromDeckServant(
        BattleDeckServantData_o *deckSvt,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42E990B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E990B = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  ServantAssetLoadManager__unloadFromDeckServantlocal(Instance, deckSvt, v7);
}


void __fastcall ServantAssetLoadManager__unloadFromDeckServantlocal(
        ServantAssetLoadManager_o *this,
        BattleDeckServantData_o *deckSvt,
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
  int32_t EnemyNameEffect; // w0
  const MethodInfo *v16; // x1
  int32_t v17; // w20
  WarBoardManager_TaskList_o *NameEffectPath; // x0
  __int64 v19; // x1
  System_String_o *v20; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_42E990C & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)deckSvt, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, v9, v10, v11);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v12, v13, v14);
    byte_42E990C = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0LL);
    if ( EnemyNameEffect )
    {
      v17 = EnemyNameEffect;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      NameEffectPath = (WarBoardManager_TaskList_o *)ServantAssetLoadManager__getNameEffectPath(v17, v16);
      if ( this->fields.loadedList )
      {
        v20 = (System_String_o *)NameEffectPath;
        if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
                NameEffectPath,
                (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
LABEL_12:
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          AssetStorage = AssetManager__getAssetStorage(v20, 0LL);
          AssetManager__releaseAsset_30657564(AssetStorage, 0LL);
          return;
        }
        NameEffectPath = (WarBoardManager_TaskList_o *)this->fields.loadedList;
        if ( NameEffectPath )
        {
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)NameEffectPath,
            (WarBoardManager_TaskList_o *)v20,
            (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__);
          goto LABEL_12;
        }
      }
      sub_B5D69C(NameEffectPath, v19);
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadServant(ServantAssetArgs_o *args, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42E98A7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E98A7 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  ServantAssetLoadManager__unloadServantlocal(Instance, args, v7);
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

  if ( (byte_42E98AB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      limitCount,
      overwriteSvtVoiceId,
      method);
    byte_42E98AB = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t VoiceId; // w0
  int32_t v13; // w8
  SoundManager_o *Instance; // x19
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E98AC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_SoundManager__get_Instance__,
      svtId,
      limitCount,
      *(_QWORD *)&overwriteSvtVoiceId);
    sub_B5D5C4(&StringLiteral_12895/*"Servants_"*/, v9, v10, v11);
    byte_42E98AC = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v13 = overwriteSvtVoiceId;
  else
    v13 = VoiceId;
  v18 = v13;
  if ( v13 )
  {
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v15 = System_Int32__ToString((int32_t)&v18, 0LL);
    v16 = System_String__Concat_44577788((System_String_o *)StringLiteral_12895/*"Servants_"*/, v15, 0LL);
    if ( !Instance )
      sub_B5D69C(v16, v17);
    SoundManager__ReleaseAudioAssetStorage(Instance, v16, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42E98AF & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E98AF = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  ServantAssetLoadManager__unloadSkillAnyVoiceLocal(Instance, skillInfo, v7);
}


void __fastcall ServantAssetLoadManager__unloadSkillAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x20
  System_String_o *VoiceAssetName; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v17; // x19
  SoundManager_o *Instance; // x20

  if ( (byte_42E98B0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, (_DWORD)skillInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8, v9, v10);
    byte_42E98B0 = 1;
  }
  if ( skillInfo
    && ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
         skillInfo,
         skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
         method)
    && skillInfo->fields.skilllv )
  {
    v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v13 = **(_QWORD **)(v12 + 192);
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      sub_AF52C4(v13);
    VoiceAssetName = **(System_String_o ***)(v13 + 184);
    if ( !VoiceAssetName )
      goto LABEL_17;
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)VoiceAssetName,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
      v17 = Entity;
      if ( SkillLvEntity__getVoiceAssetName(Entity, 0LL) )
      {
        Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        VoiceAssetName = SkillLvEntity__getVoiceAssetName(v17, 0LL);
        if ( Instance )
        {
          SoundManager__ReleaseAudioAssetStorage(Instance, VoiceAssetName, 0LL);
          return;
        }
LABEL_17:
        sub_B5D69C(VoiceAssetName, v11);
      }
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadSkillCutIn(BattleSkillInfoData_o *skillInfo, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42E98DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E98DD = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  ServantAssetLoadManager__unloadSkillCutInLocal(Instance, skillInfo, v7);
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
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_42E9897 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, limitCount, (_DWORD)method, v3);
    byte_42E9897 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  ServantAssetLoadManager__unloadStatusFacelocal(Instance, svtId, limitCount, v8);
}


void __fastcall ServantAssetLoadManager__unloadStatusFacelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
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
  int32_t v16; // w1
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_WarBoardManager_TaskList__o *StatusImageFolderName; // x0
  __int64 v19; // x1
  WarBoardManager_TaskList_o *v20; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_42E9898 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, svtId, limitCount, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, v10, v11, v12);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v13, v14, v15);
    byte_42E9898 = 1;
  }
  ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, method);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  StatusImageFolderName = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)ServantAssetLoadManager__getStatusImageFolderName(
                                                                                           svtId,
                                                                                           v16,
                                                                                           v17);
  if ( !this->fields.loadedList )
    goto LABEL_14;
  v20 = (WarBoardManager_TaskList_o *)StatusImageFolderName;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)StatusImageFolderName,
         (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    StatusImageFolderName = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( StatusImageFolderName )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        StatusImageFolderName,
        v20,
        (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_10;
    }
LABEL_14:
    sub_B5D69C(StatusImageFolderName, v19);
  }
LABEL_10:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v20, 0LL);
  AssetManager__releaseAsset_30657564(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssetLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  AssetData_o *v14; // x19

  if ( (byte_42E98D9 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)path, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, v9, v10, v11);
    byte_42E98D9 = 1;
  }
  loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_16;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         loadedList,
         (WarBoardManager_TaskList_o *)path,
         (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( loadedList )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadedList,
        (WarBoardManager_TaskList_o *)path,
        (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_7;
    }
LABEL_16:
    sub_B5D69C(loadedList, path);
  }
LABEL_7:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
  {
    v14 = AssetStorage;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30657564(v14, 0LL);
  }
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssets(
        System_String_array *pathList,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42E98D8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E98D8 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal(Instance, pathList, v7);
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
    sub_B5D69C(this, 0LL);
  v3 = *(_QWORD *)&pathList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
      {
        v7 = sub_B5D6C8(this);
        sub_B5D668(v7, 0LL);
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
  __int64 v3; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_42E98D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, effectFolder, (_DWORD)method, v3);
    byte_42E98D2 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  ServantAssetLoadManager__unloadWeaponGroupEffectlocal(Instance, weapongroup, effectFolder, v8);
}


void __fastcall ServantAssetLoadManager__unloadWeaponGroupEffectlocal(
        ServantAssetLoadManager_o *this,
        int32_t weapongroup,
        int32_t effectFolder,
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
  System_String_o *v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x20
  System_String_o *v21; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  int32_t v24; // [xsp+8h] [xbp-18h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-14h] BYREF

  v24 = effectFolder;
  v25 = weapongroup;
  if ( (byte_42E98D3 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, weapongroup, effectFolder, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_5941/*"Effect/weapon/"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v15, v16, v17);
    byte_42E98D3 = 1;
  }
  v18 = System_Int32__ToString((int32_t)&v25, 0LL);
  v20 = System_String__Concat_44577788((System_String_o *)StringLiteral_5941/*"Effect/weapon/"*/, v18, 0LL);
  if ( effectFolder )
  {
    v21 = System_Int32__ToString((int32_t)&v24, 0LL);
    v20 = System_String__Concat_44580072(v20, (System_String_o *)StringLiteral_885/*"/"*/, v21, 0LL);
  }
  loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_13;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         loadedList,
         (WarBoardManager_TaskList_o *)v20,
         (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( loadedList )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadedList,
        (WarBoardManager_TaskList_o *)v20,
        (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_9;
    }
LABEL_13:
    sub_B5D69C(loadedList, v19);
  }
LABEL_9:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v20, 0LL);
  AssetManager__releaseAsset_30657564(AssetStorage, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager__GetAheadBg_d__154_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  struct WellFired_USFGOChangeBgEvent_array *bgList; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x22
  ServantAssetLoadManager__GetAheadBg_d__154_o **p_bgAheadList_5__2; // x21
  struct WellFired_USFGOChangeBgEvent_array *v49; // x22
  int max_length; // w8
  unsigned int v51; // w23
  __int64 v52; // x1
  System_String_o *v53; // x1
  System_String_o *v54; // x22
  AssetLoader_LoadEndDataHandler_o *v55; // x23
  Il2CppClass *klass; // x9
  bool result; // w0
  __int64 v58; // x0
  UnityEngine_WaitForEndOfFrame_o *v59; // x20
  Il2CppObject **p__2__current; // x19
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_42E5D33 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData__get_Count__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__get_Count__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_ServantAssetLoadManager__GetAheadBg_b__154_0__, v35, v36, v37);
    sub_B5D5C4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v38, v39, v40);
    this = (ServantAssetLoadManager__GetAheadBg_d__154_o *)sub_B5D5C4(&StringLiteral_2858/*"Bg/"*/, v41, v42, v43);
    byte_42E5D33 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  _1__state = v4->fields.__1__state;
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_bgAheadList_5__2 = (ServantAssetLoadManager__GetAheadBg_d__154_o **)&v4->fields._bgAheadList_5__2;
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    bgList = v4->fields.bgList;
    v4->fields.__1__state = -1;
    if ( !bgList )
    {
LABEL_30:
      this = (ServantAssetLoadManager__GetAheadBg_d__154_o *)v4->fields.callback;
      if ( !this )
        goto LABEL_33;
      System_Action__Invoke((System_Action_o *)this, 0LL);
      return 0;
    }
    v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v47,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__);
    v4->fields._bgAheadList_5__2 = (struct System_Collections_Generic_List_USFGOChangeBgEvent__o *)v47;
    p_bgAheadList_5__2 = (ServantAssetLoadManager__GetAheadBg_d__154_o **)&v4->fields._bgAheadList_5__2;
    sub_B5D560(&v4->fields._bgAheadList_5__2);
    v49 = v4->fields.bgList;
    if ( !v49 )
      goto LABEL_33;
    max_length = v49->max_length;
    if ( max_length >= 1 )
    {
      v51 = 0;
      while ( 1 )
      {
        if ( v51 >= max_length )
        {
          v58 = sub_B5D6C8(this);
          sub_B5D668(v58, 0LL);
        }
        method = (const MethodInfo *)v49->m_Items[v51];
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
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__);
        }
        max_length = v49->max_length;
        if ( (int)++v51 >= max_length )
          goto LABEL_15;
      }
LABEL_33:
      sub_B5D69C(this, method);
    }
LABEL_15:
    this = *p_bgAheadList_5__2;
    if ( !*p_bgAheadList_5__2 )
      goto LABEL_33;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v61,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__);
    v62 = v61;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v62,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__) )
    {
      if ( !v62.fields.current )
        sub_B5D69C(0LL, v52);
      v53 = (System_String_o *)((__int64 (*)(void))v62.fields.current->klass->vtable[16].method)();
      v54 = System_String__Concat_44577788((System_String_o *)StringLiteral_2858/*"Bg/"*/, v53, 0LL);
      v55 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(v55, _4__this, Method_ServantAssetLoadManager__GetAheadBg_b__154_0__, 0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__loadAssetStorage(v54, v55, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v62,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__);
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
    sub_B5D560(p_bgAheadList_5__2);
    goto LABEL_30;
  }
  v59 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v59, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v59;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_ServantAssetLoadManager__GetAheadBg_d__154_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D31 & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager___c_TypeInfo, v1, v2, v3);
    byte_42E5D31 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantAssetLoadManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantAssetLoadManager___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, data);
  _4__this->fields.nobleSequenceData = data;
  sub_B5D560(&_4__this->fields.nobleSequenceData);
  this->fields.isNext = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager___c__DisplayClass152_0___loadNoblePhantasmCoroutine_b__1(
        ServantAssetLoadManager___c__DisplayClass152_0_o *this,
        AssetData_o *assetData,
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
  ServantAssetLoadManager_o *_4__this; // x0
  UnityEngine_Texture2D_o *AssetObject_Texture2D; // x20
  struct UnityEngine_GameObject_o **p_sequence; // x20
  UnityEngine_Transform_o *v27; // x21
  UnityEngine_Transform_o *transform; // x21
  int v29; // s0
  UnityEngine_Transform_o *v32; // x21
  int v33; // s0
  UnityEngine_Transform_o *v36; // x21
  int v37; // s0
  System_Action_o *_9__2; // x22
  WellFired_USFGOChangeBgEvent_array *v41; // x20
  ServantAssetLoadManager_o *v42; // x21

  if ( (byte_42E5D32 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v15, v16, v17);
    sub_B5D5C4(&Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__2__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_4028/*"ChrSequence1"*/, v21, v22, v23);
    byte_42E5D32 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  _4__this->fields.nobleAssetData = assetData;
  sub_B5D560(&_4__this->fields.nobleAssetData);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  AssetObject_Texture2D = ServantAssetLoadManager__getAssetObject_Texture2D_(
                            _4__this,
                            this->fields.sequencePath,
                            (System_String_o *)StringLiteral_4028/*"ChrSequence1"*/,
                            (const MethodInfo_1E6A3CC *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this->fields.sequence = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                                               (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  p_sequence = &this->fields.sequence;
  sub_B5D560(&this->fields.sequence);
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
  v27 = (UnityEngine_Transform_o *)_4__this;
  _4__this = (ServantAssetLoadManager_o *)UnityEngine_GameObject__get_transform(this->fields.parent, 0LL);
  if ( !v27 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent(v27, (UnityEngine_Transform_o *)_4__this, 0LL);
  _4__this = (ServantAssetLoadManager_o *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_23;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v29, 0LL);
  _4__this = (ServantAssetLoadManager_o *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_23;
  v32 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_up(0LL);
  if ( !v32 )
    goto LABEL_23;
  UnityEngine_Transform__set_eulerAngles(v32, *(UnityEngine_Vector3_o *)&v33, 0LL);
  _4__this = (ServantAssetLoadManager_o *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_23;
  v36 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_one(0LL);
  if ( !v36 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(v36, *(UnityEngine_Vector3_o *)&v37, 0LL);
  _4__this = (ServantAssetLoadManager_o *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_23;
  _4__this = (ServantAssetLoadManager_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                            (UnityEngine_GameObject_o *)_4__this,
                                            (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___);
  _9__2 = this->fields.__9__2;
  v41 = (WellFired_USFGOChangeBgEvent_array *)_4__this;
  v42 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(&this->fields.__9__2);
  }
  if ( !v42 )
LABEL_23:
    sub_B5D69C(_4__this, assetData);
  ServantAssetLoadManager__LoadBg(v42, v41, _9__2, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  struct ServantAssetLoadManager_o *_4__this; // x21
  Il2CppObject *v81; // x22
  Il2CppObject **p__8__1; // x20
  TreasureDeviceSequenceWeightEntity_o *EntityWithCommonPattern; // x0
  int32_t _1__state; // w8
  int v85; // w9
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v86; // x8
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o **v87; // x24
  System_String_o *v88; // x20
  Il2CppObject *v89; // x23
  AssetLoader_LoadEndDataHandler_o *v90; // x22
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *v91; // x8
  UnityEngine_Object_o *v92; // x20
  System_Collections_Generic_List_int__o *v93; // x20
  System_Int32_array *funcId; // x20
  int v95; // w20
  int _2__current; // w8
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *v97; // x20
  __int64 v98; // x22
  Il2CppObject **p__2__current; // x19
  int v100; // w8
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v101; // x8
  UnityEngine_GameObject_o *sequence; // x21
  ServantAssetLoadManager_onGameObjectLoadComplete_o *callback; // x20
  int32_t seqIdFromMstTDSeqWeight_5__2; // w22
  int32_t groupSeqIdFromMstTDSeqWeight_5__3; // w23
  System_Tuple_int__int__o *v106; // x19
  const MethodInfo *v107; // x3
  bool result; // w0
  int32_t limitCount; // w1
  int32_t RandomSeqIdEachLimit; // w0
  Il2CppObject *v111; // x21
  System_String_o *v112; // x0
  System_String_o *v113; // x0
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *_8__1; // x8
  System_String_o *sequencePath; // x22
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v116; // x22
  System_String_o *v117; // x0
  System_String_o *nobleDataPath_5__4; // x22
  System_String_o *v119; // x0
  Il2CppObject *v120; // x23
  System_String_o *monitor; // x21
  AssetLoader_LoadEndDataHandler_o *v122; // x22
  int monitor_low; // w20
  __int64 v124; // x0
  TreasureDvcLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_int__o *effectIdList; // [xsp+10h] [xbp-50h] BYREF
  WarEntity_o *v127; // [xsp+18h] [xbp-48h] BYREF
  int32_t v128; // [xsp+2Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_42E5D34 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_TreasureDvcMaster___, v14, v15, v16);
    sub_B5D5C4(&DataManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___, v23, v24, v25);
    sub_B5D5C4(&int___TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__AddRange__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Tuple_int__int___ctor__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Tuple_int__int__get_Item1__, v56, v57, v58);
    sub_B5D5C4(&Method_System_Tuple_int__int__get_Item2__, v59, v60, v61);
    sub_B5D5C4(&System_Tuple_int__int__TypeInfo, v62, v63, v64);
    sub_B5D5C4(&Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__0__, v65, v66, v67);
    sub_B5D5C4(&Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__1__, v68, v69, v70);
    sub_B5D5C4(&ServantAssetLoadManager___c__DisplayClass152_0_TypeInfo, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_9693/*"NoblePhantasm/"*/, v74, v75, v76);
    this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)sub_B5D5C4(
                                                                             &StringLiteral_9695/*"NoblePhantasm/Sequence/"*/,
                                                                             v77,
                                                                             v78,
                                                                             v79);
    byte_42E5D34 = 1;
  }
  v128 = 0;
  effectIdList = 0LL;
  v127 = 0LL;
  entity = 0LL;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v81 = (Il2CppObject *)sub_B5D694(ServantAssetLoadManager___c__DisplayClass152_0_TypeInfo);
      System_Object___ctor(v81, 0LL);
      p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
      v4->fields.__8__1 = (struct ServantAssetLoadManager___c__DisplayClass152_0_o *)v81;
      sub_B5D560(&v4->fields.__8__1);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_108;
      *(_QWORD *)&this->fields.__1__state = v4->fields.__4__this;
      sub_B5D560(&this->fields);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_108;
      *(_QWORD *)&this->fields.treasureDvcId = v4->fields.parent;
      sub_B5D560(&this->fields.treasureDvcId);
      if ( !*p__8__1 )
        goto LABEL_108;
      LOBYTE((*p__8__1)[1].monitor) = 0;
      if ( !_4__this )
        goto LABEL_108;
      ServantAssetLoadManager__releaseNoblePhantasm(_4__this, 0LL);
      *(_QWORD *)&v4->fields._seqIdFromMstTDSeqWeight_5__2 = 0LL;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___);
      if ( !this )
        goto LABEL_108;
      EntityWithCommonPattern = TreasureDeviceSequenceWeightMaster__GetEntityWithCommonPattern(
                                  (TreasureDeviceSequenceWeightMaster_o *)this,
                                  v4->fields.treasureDvcId,
                                  v4->fields.limitCount,
                                  v4->fields.npChargeStage,
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
        v4->fields._seqIdFromMstTDSeqWeight_5__2 = _1__state;
        v85 = *(&this->fields.__1__state + 1);
        if ( v85 >= 1 )
          v4->fields._groupSeqIdFromMstTDSeqWeight_5__3 = v85;
        goto LABEL_80;
      }
      _1__state = v4->fields._seqIdFromMstTDSeqWeight_5__2;
      if ( _1__state >= 1 )
        goto LABEL_80;
LABEL_70:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_TreasureDvcMaster___);
      if ( !this )
        goto LABEL_108;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
              &v127,
              v4->fields.treasureDvcId,
              (const MethodInfo_23FAE6C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
      {
        _1__state = v4->fields.treasureDvcId;
LABEL_80:
        v128 = _1__state;
        goto LABEL_83;
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)v127;
      if ( !v127 )
        goto LABEL_108;
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)TreasureDvcEntity__IsRandomTD(
                                                                               (TreasureDvcEntity_o *)v127,
                                                                               0LL);
      if ( !v127 )
        goto LABEL_108;
      limitCount = v4->fields.limitCount;
      if ( ((unsigned __int8)this & 1) != 0 )
        RandomSeqIdEachLimit = TreasureDvcEntity__getRandomSeqIdEachLimit(
                                 (TreasureDvcEntity_o *)v127,
                                 limitCount,
                                 0,
                                 0LL);
      else
        RandomSeqIdEachLimit = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)v127, limitCount, 0LL);
      v128 = RandomSeqIdEachLimit;
LABEL_83:
      v111 = *p__8__1;
      v112 = System_Int32__ToString((int32_t)&v128, 0LL);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)System_String__Concat_44577788(
                                                                               (System_String_o *)StringLiteral_9695/*"NoblePhantasm/Sequence/"*/,
                                                                               v112,
                                                                               0LL);
      if ( !v111 )
        goto LABEL_108;
      v111[2].monitor = this;
      sub_B5D560(&v111[2].monitor);
      v113 = System_Int32__ToString((int32_t)&v128, 0LL);
      v4->fields._nobleDataPath_5__4 = System_String__Concat_44577788((System_String_o *)StringLiteral_9693/*"NoblePhantasm/"*/, v113, 0LL);
      sub_B5D560(&v4->fields._nobleDataPath_5__4);
      _8__1 = v4->fields.__8__1;
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
        v116 = v4->fields.__8__1;
        v117 = System_Int32__ToString((int)v4 + 60, 0LL);
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)System_String__Concat_44577788(
                                                                                 (System_String_o *)StringLiteral_9695/*"NoblePhantasm/Sequence/"*/,
                                                                                 v117,
                                                                                 0LL);
        if ( !v116 )
          goto LABEL_108;
        v116->fields.sequencePath = (struct System_String_o *)this;
        sub_B5D560(&v116->fields.sequencePath);
      }
      nobleDataPath_5__4 = v4->fields._nobleDataPath_5__4;
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
        v119 = System_Int32__ToString((int)v4 + 60, 0LL);
        v4->fields._nobleDataPath_5__4 = System_String__Concat_44577788(
                                           (System_String_o *)StringLiteral_9693/*"NoblePhantasm/"*/,
                                           v119,
                                           0LL);
        sub_B5D560(&v4->fields._nobleDataPath_5__4);
      }
      if ( !*p__8__1 )
        goto LABEL_108;
      LOBYTE((*p__8__1)[1].monitor) = 0;
      v120 = *p__8__1;
      if ( !*p__8__1 )
        goto LABEL_108;
      monitor = (System_String_o *)v120[2].monitor;
      v122 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v122,
        v120,
        Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__0__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)AssetManager__loadAssetStorage(
                                                                               monitor,
                                                                               v122,
                                                                               1,
                                                                               0LL);
LABEL_102:
      if ( !*p__8__1 )
        goto LABEL_108;
      monitor_low = LOBYTE((*p__8__1)[1].monitor);
      v4->fields.__2__current = 0LL;
      sub_B5D560(&v4->fields.__2__current);
      if ( !monitor_low )
      {
        result = 1;
        v4->fields.__1__state = 1;
        return result;
      }
      v4->fields.__1__state = 2;
      return 1;
    case 1:
      p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
      v4->fields.__1__state = -1;
      goto LABEL_102;
    case 2:
      v87 = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o **)&v4->fields.__8__1;
      v86 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v86 )
        goto LABEL_108;
      v86->fields.isNext = 0;
      this = *v87;
      if ( !*v87 )
        goto LABEL_108;
      this->fields.__4__this = 0LL;
      sub_B5D560(&this->fields.__4__this);
      v88 = v4->fields._nobleDataPath_5__4;
      v89 = (Il2CppObject *)v4->fields.__8__1;
      v90 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v90,
        v89,
        Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__1__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)AssetManager__loadAssetStorage(
                                                                               v88,
                                                                               v90,
                                                                               1,
                                                                               0LL);
LABEL_25:
      v91 = *v87;
      if ( !*v87 )
        goto LABEL_108;
      if ( LOBYTE(v91->fields.__2__current) )
      {
        v92 = (UnityEngine_Object_o *)v91->fields.__4__this;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v92, 0LL, 0LL) )
          goto LABEL_61;
        v93 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v93,
          (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
        effectIdList = v93;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_108;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)this,
                                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
        if ( !this )
          goto LABEL_108;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)TreasureDvcLvMaster__TryGetEntity(
                                                                                 (TreasureDvcLvMaster_o *)this,
                                                                                 &entity,
                                                                                 v4->fields.treasureDvcId,
                                                                                 v4->fields.treasureDvcLv,
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
            sub_B5D69C(this, method);
          this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
                                                                                   entity,
                                                                                   0LL);
          if ( (int)this >= 1 )
          {
            v95 = (int)this;
            this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)sub_B5D5DC(int___TypeInfo, 1LL);
            if ( !this )
              goto LABEL_108;
            method = (const MethodInfo *)this;
            if ( !LODWORD(this->fields.__2__current) )
            {
LABEL_109:
              v124 = sub_B5D6C8(this);
              sub_B5D668(v124, 0LL);
            }
            LODWORD(this->fields.__4__this) = v95;
            if ( !_4__this )
              goto LABEL_108;
            this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                                                                     _4__this,
                                                                                     (System_Int32_array *)this,
                                                                                     0LL);
          }
        }
        if ( !*v87 )
          goto LABEL_108;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)(*v87)->fields.__4__this;
        if ( !this )
          goto LABEL_108;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                                                                 (UnityEngine_GameObject_o *)this,
                                                                                 (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
        if ( this )
        {
          _2__current = (int)this->fields.__2__current;
          v97 = this;
          if ( _2__current >= 1 )
          {
            v98 = 0LL;
            while ( (unsigned int)v98 < _2__current )
            {
              this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)*((_QWORD *)&v97->fields.__4__this
                                                                                     + v98);
              if ( !this )
                goto LABEL_108;
              WellFired_USFGOActorBattleActionEvent__AddHasAllEffectIds(
                (WellFired_USFGOActorBattleActionEvent_o *)this,
                &effectIdList,
                0LL);
              _2__current = (int)v97->fields.__2__current;
              if ( (int)++v98 >= _2__current )
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
                                                                                 (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_string__AddRange__);
LABEL_56:
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        if ( ServantAssetLoadManager__checkLoad(0LL) )
        {
          v4->fields.__2__current = 0LL;
          p__2__current = &v4->fields.__2__current;
          sub_B5D560(p__2__current);
          v100 = 4;
        }
        else
        {
LABEL_61:
          v4->fields.__2__current = 0LL;
          p__2__current = &v4->fields.__2__current;
          sub_B5D560(p__2__current);
          v100 = 5;
        }
      }
      else
      {
        v4->fields.__2__current = 0LL;
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
        v100 = 3;
      }
      *((_DWORD *)p__2__current - 2) = v100;
      return 1;
    case 3:
      v87 = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o **)&v4->fields.__8__1;
      v4->fields.__1__state = -1;
      goto LABEL_25;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_56;
    case 5:
      v101 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v101 )
        goto LABEL_108;
      sequence = v101->fields.sequence;
      callback = v4->fields.callback;
      seqIdFromMstTDSeqWeight_5__2 = v4->fields._seqIdFromMstTDSeqWeight_5__2;
      groupSeqIdFromMstTDSeqWeight_5__3 = v4->fields._groupSeqIdFromMstTDSeqWeight_5__3;
      v106 = (System_Tuple_int__int__o *)sub_B5D694(System_Tuple_int__int__TypeInfo);
      System_Tuple_int__int____ctor(
        v106,
        seqIdFromMstTDSeqWeight_5__2,
        groupSeqIdFromMstTDSeqWeight_5__3,
        (const MethodInfo_265CCF0 *)Method_System_Tuple_int__int___ctor__);
      if ( !callback )
        goto LABEL_108;
      ServantAssetLoadManager_onGameObjectLoadComplete__Invoke(callback, sequence, v106, v107);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  sub_B5D560(p_method);
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
  return (System_IAsyncResult_o *)sub_B5D568(this, v7, callback, object);
}


void __fastcall ServantAssetLoadManager_onGameObjectLoadComplete__EndInvoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v31->fields.extra_arg, obj, paramsFromMstTDSeqWeight);
      v35 = sub_B5D5F4(v32);
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
            v45 = sub_B5D5EC(v32);
            v46 = sub_B5D9F0(v32);
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
                  v27 = sub_AF54C0(obj, v49, v50, v47);
                }
                v18 = *(_QWORD *)(v27 + 8);
              }
              else
              {
                v18 = *((_QWORD *)&obj->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v32 + 72));
              }
              v28 = (void (__fastcall **)(UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))sub_B5D674(v18, v32);
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
                  v17 = sub_AF54C0(obj, class_0, v11, v13);
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
          v37 = sub_B5D5EC(v32);
          v38 = sub_B5D9F0(v32);
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
                v29 = sub_AF54C0(v33, v41, v42, v39);
              }
              v26 = *(_QWORD *)(v29 + 8);
            }
            else
            {
              v26 = *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320);
            }
            v30 = (void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))sub_B5D674(v26, v32);
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
                v25 = sub_AF54C0(v33, v20, v19, v21);
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