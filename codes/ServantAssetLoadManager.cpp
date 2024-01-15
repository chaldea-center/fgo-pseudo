void __fastcall ServantAssetLoadManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v8; // x19
  struct ServantAssetLoadManager_StaticFields *static_fields; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct ServantAssetLoadManager_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40F9482 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo, v5);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40F9482 = 1;
  }
  ServantAssetLoadManager_TypeInfo->static_fields->KeepAssetPlayerServantCount = 3;
  v8 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                       System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo,
                                                                                       v1,
                                                                                       v2,
                                                                                       v3,
                                                                                       v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v8,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__);
  static_fields = ServantAssetLoadManager_TypeInfo->static_fields;
  static_fields->unloadIgnoredAssetArgs = (struct System_Collections_Generic_Dictionary_string__ServantAssetArgs__o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->unloadIgnoredAssetArgs,
    (System_Int32_array **)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = ServantAssetLoadManager_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  v16->wkSpace = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&v16->wkSpace, v17, v18, v19, v20, v21, v22, v23);
}


void __fastcall ServantAssetLoadManager___ctor(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v49; // x20
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v60; // x20
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v71; // x20
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v82; // x20
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v93; // x20
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7

  if ( (byte_40F9481 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__string___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__Object___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__string__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__Object__TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetData___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_List_AssetData__TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__, v15);
    byte_40F9481 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedList = (struct System_Collections_Generic_List_string__o *)v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.loadedList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadlist = (struct System_Collections_Generic_List_string__o *)v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.loadlist,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.downloadlist = (struct System_Collections_Generic_List_string__o *)v38;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.downloadlist,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v49 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo,
                                                                                                   v45,
                                                                                                   v46,
                                                                                                   v47,
                                                                                                   v48);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v49,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__);
  this->fields.ActorVoice = (struct System_Collections_Generic_Dictionary_int__SePlayer__o *)v49;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.ActorVoice,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v60 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__string__TypeInfo,
                                                                                                   v56,
                                                                                                   v57,
                                                                                                   v58,
                                                                                                   v59);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v60,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  this->fields.LastActorVoice = (struct System_Collections_Generic_Dictionary_int__string__o *)v60;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.LastActorVoice,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v71 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_AssetData__TypeInfo,
                                                                                                  v67,
                                                                                                  v68,
                                                                                                  v69,
                                                                                                  v70);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v71,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v71;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bgAssetDataList,
    (System_Int32_array **)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  v82 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v78,
                                                                                                  v79,
                                                                                                  v80,
                                                                                                  v81);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v82,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.nobleEffectList = (struct System_Collections_Generic_List_string__o *)v82;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.nobleEffectList,
    (System_Int32_array **)v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  this->fields.InitPoint.fields.z = 0.0;
  *(_QWORD *)&this->fields.InitPoint.fields.x = 0x3D4CCCCD00000000LL;
  v93 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__Object__TypeInfo,
                                                                                        v89,
                                                                                        v90,
                                                                                        v91,
                                                                                        v92);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v93,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__Object___ctor__);
  this->fields._releaseAssets = (struct System_Collections_Generic_Dictionary_string__Object__o *)v93;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._releaseAssets,
    (System_Int32_array **)v93,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__);
}


bool __fastcall ServantAssetLoadManager__CheckLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadlist; // x0

  if ( (byte_40F947B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, path);
    byte_40F947B = 1;
  }
  loadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadlist;
  if ( !loadlist )
    sub_B170D4();
  return System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           loadlist,
           (WarBoardManager_TaskList_o *)path,
           (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__);
}


void __fastcall ServantAssetLoadManager__DebugPrint(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array *ObjectNameList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int max_length; // w8
  int i; // w9

  if ( !data || (ObjectNameList = AssetData__GetObjectNameList(data, 0LL)) == 0LL )
    sub_B170D4();
  max_length = ObjectNameList->max_length;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        sub_B17100(ObjectNameList, v4, v5);
        sub_B170A0();
      }
    }
  }
}


void __fastcall ServantAssetLoadManager__DownLoadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40F9416 & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, method);
    byte_40F9416 = 1;
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
  WebViewManager_o *Instance; // x0
  ServantAssetLoadManager_c *v11; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *unloadIgnoredAssetArgs; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  ServantAssetArgs_o *currentValue; // x19
  int32_t v15; // w22
  const MethodInfo *v16; // x1
  ServantAssetLoadManager_c *v17; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v18; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v19; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v20; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F947A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__, v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__get_Current__,
      v6);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__,
      v9);
    byte_40F947A = 1;
  }
  memset(&v20, 0, sizeof(v20));
  this->fields._IsRetryTransition_k__BackingField = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  LODWORD(Instance[1].fields.webViewBase) = 3;
  v11 = ServantAssetLoadManager_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v11 = ServantAssetLoadManager_TypeInfo;
  }
  unloadIgnoredAssetArgs = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)v11->static_fields->unloadIgnoredAssetArgs;
  if ( !unloadIgnoredAssetArgs )
    goto LABEL_24;
  Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
             unloadIgnoredAssetArgs,
             (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__);
  if ( !Values )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v19,
    Values,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v20,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__) )
  {
    currentValue = (ServantAssetArgs_o *)v20.fields.currentValue;
    if ( !v20.fields.currentValue )
      sub_B170D4();
    if ( SLODWORD(v20.fields.currentValue[5].monitor) >= 1 )
    {
      v15 = 0;
      do
      {
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        ServantAssetLoadManager__UnloadAssetsByArgs(currentValue, v16);
        ++v15;
      }
      while ( v15 < currentValue->fields._UnloadCount_k__BackingField );
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v20,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__);
  v17 = ServantAssetLoadManager_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v17 = ServantAssetLoadManager_TypeInfo;
  }
  v18 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v17->static_fields->unloadIgnoredAssetArgs;
  if ( !v18 )
LABEL_24:
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v18,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__);
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

  if ( (byte_40F942E & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    byte_40F942E = 1;
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

  if ( (byte_40F945B & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_40F945B = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F945C & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
    sub_B16FFC(&Voice_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_23405/*"{0:D0}_{1}"*/, v13);
    sub_B16FFC(&StringLiteral_12683/*"Servants_"*/, v14);
    byte_40F945C = 1;
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
  v21 = System_String__Format_43739268((System_String_o *)StringLiteral_23405/*"{0:D0}_{1}"*/, v19, FileName, 0LL);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v23 = System_Int32__ToString((int32_t)&v27, 0LL);
  v24 = System_String__Concat_43743732((System_String_o *)StringLiteral_12683/*"Servants_"*/, v23, 0LL);
  if ( !Instance )
    sub_B170D4();
  return SoundManager__IsExistsSound(Instance, v24, v21, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ServantAssetLoadManager__GetAheadBg(
        ServantAssetLoadManager_o *this,
        WellFired_USFGOChangeBgEvent_array *bgList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
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

  if ( (byte_40F9466 & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager__GetAheadBg_d__154_TypeInfo, bgList);
    byte_40F9466 = 1;
  }
  v8 = sub_B170CC(ServantAssetLoadManager__GetAheadBg_d__154_TypeInfo, bgList, callback, method, v4);
  ServantAssetLoadManager__GetAheadBg_d__154___ctor((ServantAssetLoadManager__GetAheadBg_d__154_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 32) = bgList;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)bgList, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 48) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v8;
}


System_String_o *__fastcall ServantAssetLoadManager__GetCommandCodeFolderName(
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F9478 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_4147/*"CommandCodes/Texture/"*/, v3);
    byte_40F9478 = 1;
  }
  v6 = commandCodeId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_4147/*"CommandCodes/Texture/"*/, v4, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__GetLastVoiceType(int32_t uniqueId, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40F945F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_40F945F = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  struct System_Collections_Generic_Dictionary_int__string__o *v8; // x0
  ServantAssetLoadManager_c *v10; // x0

  if ( (byte_40F9460 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__, *(_QWORD *)&uniqueId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__string__get_Item__, v5);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v6);
    byte_40F9460 = 1;
  }
  LastActorVoice = this->fields.LastActorVoice;
  if ( !LastActorVoice )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)LastActorVoice,
         uniqueId,
         (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__) )
  {
    v8 = this->fields.LastActorVoice;
    if ( v8 )
      return (System_String_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v8,
                                  uniqueId,
                                  (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__string__get_Item__);
LABEL_11:
    sub_B170D4();
  }
  v10 = ServantAssetLoadManager_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v10 = ServantAssetLoadManager_TypeInfo;
  }
  return v10->static_fields->wkSpace;
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
  if ( (byte_40F93F9 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    byte_40F93F9 = 1;
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

  if ( (byte_40F947C & 1) == 0 )
  {
    sub_B16FFC(&System_IO_Path_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v2);
    byte_40F947C = 1;
  }
  result = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F9458 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&servantId);
    sub_B16FFC(&StringLiteral_23405/*"{0:D0}_{1}"*/, v9);
    byte_40F9458 = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, servantId, limitCount, (const MethodInfo *)voiceId);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &VoicePrefix);
  return System_String__Format_43739268((System_String_o *)StringLiteral_23405/*"{0:D0}_{1}"*/, v10, (Il2CppObject *)voiceId, 0LL);
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

  if ( (byte_40F942D & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_40F942D = 1;
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
      return ServantAssetLoadManager__getActorFolderName_23802084(v10, *(const MethodInfo **)&svtId);
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
      return ServantAssetLoadManager__getActorFolderName_23802084(v10, *(const MethodInfo **)&svtId);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ServantAssetLoadManager___c_c *v12; // x0
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__95_0; // x20
  Il2CppObject *v15; // x21
  struct ServantAssetLoadManager___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  changeVColor_array *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x8
  Il2CppObject *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4

  if ( (byte_40F9434 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleServantDeadComponent_getReplaceChocoShader__, method);
    sub_B16FFC(&Method_System_Func_Shader__Shader__Shader___ctor__, v6);
    sub_B16FFC(&System_Func_Shader__Shader__Shader__TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__95_0__, v10);
    sub_B16FFC(&ServantAssetLoadManager___c_TypeInfo, v11);
    byte_40F9434 = 1;
  }
  v12 = ServantAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo);
    v12 = ServantAssetLoadManager___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__95_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__95_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B170CC(System_Func_Shader__Shader__Shader__TypeInfo, method, v2, v3, v4);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__95_0,
      v15,
      Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__95_0__,
      (const MethodInfo_2B75C40 *)Method_System_Func_Shader__Shader__Shader___ctor__);
    v16 = ServantAssetLoadManager___c_TypeInfo->static_fields;
    v16->__9__95_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__95_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__95_0,
      (System_Int32_array **)_9__95_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !obj )
    sub_B170D4();
  v23 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
          obj,
          (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( v23 && (v26 = *(_QWORD *)&v23->max_length) != 0 )
  {
    if ( !(_DWORD)v26 )
    {
      sub_B17100(v23, v24, v25);
      sub_B170A0();
    }
    v27 = (Il2CppObject *)v23->m_Items[0];
  }
  else
  {
    v27 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL) )
  {
    _9__95_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B170CC(System_Func_Shader__Shader__Shader__TypeInfo, v28, v29, v30, v31);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__95_0,
      v27,
      Method_BattleServantDeadComponent_getReplaceChocoShader__,
      (const MethodInfo_2B75C40 *)Method_System_Func_Shader__Shader__Shader___ctor__);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__95_0;
}


System_Func_Shader__Shader__Shader__o *__fastcall ServantAssetLoadManager__GetReplaceDeadShaderFunc(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ServantAssetLoadManager___c_c *v12; // x0
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__94_0; // x20
  Il2CppObject *v15; // x21
  struct ServantAssetLoadManager___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  changeVColor_array *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x8
  Il2CppObject *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4

  if ( (byte_40F9433 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleServantDeadComponent_getReplaceDeadShader__, method);
    sub_B16FFC(&Method_System_Func_Shader__Shader__Shader___ctor__, v6);
    sub_B16FFC(&System_Func_Shader__Shader__Shader__TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__94_0__, v10);
    sub_B16FFC(&ServantAssetLoadManager___c_TypeInfo, v11);
    byte_40F9433 = 1;
  }
  v12 = ServantAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(ServantAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo);
    v12 = ServantAssetLoadManager___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__94_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)static_fields->__9__94_0;
  if ( !_9__94_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__94_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B170CC(System_Func_Shader__Shader__Shader__TypeInfo, method, v2, v3, v4);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__94_0,
      v15,
      Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__94_0__,
      (const MethodInfo_2B75C40 *)Method_System_Func_Shader__Shader__Shader___ctor__);
    v16 = ServantAssetLoadManager___c_TypeInfo->static_fields;
    v16->__9__94_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__94_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__94_0,
      (System_Int32_array **)_9__94_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !obj )
    sub_B170D4();
  v23 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
          obj,
          (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( v23 && (v26 = *(_QWORD *)&v23->max_length) != 0 )
  {
    if ( !(_DWORD)v26 )
    {
      sub_B17100(v23, v24, v25);
      sub_B170A0();
    }
    v27 = (Il2CppObject *)v23->m_Items[0];
  }
  else
  {
    v27 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL) )
  {
    _9__94_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B170CC(System_Func_Shader__Shader__Shader__TypeInfo, v28, v29, v30, v31);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__94_0,
      v27,
      Method_BattleServantDeadComponent_getReplaceDeadShader__,
      (const MethodInfo_2B75C40 *)Method_System_Func_Shader__Shader__Shader___ctor__);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__94_0;
}


bool __fastcall ServantAssetLoadManager__IsIgnoreUnloadServant(BattleServantData_o *data, const MethodInfo *method)
{
  int32_t uniqueId; // w19
  ServantAssetLoadManager_c *v5; // x0

  if ( (byte_40F941B & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, method);
    byte_40F941B = 1;
  }
  if ( !data )
    sub_B170D4();
  if ( data->fields.isEnemy )
    return 1;
  if ( data->fields.followerType )
    return 0;
  uniqueId = data->fields.uniqueId;
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

  if ( (byte_40F9479 & 1) == 0 )
  {
    sub_B16FFC(&BattleRootComponent_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v2);
    sub_B16FFC(&OptionManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_B16FFC(&StringLiteral_6342/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, v5);
    byte_40F9479 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6342/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, 0LL) > 0 )
    return 0;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  if ( UnityEngine_Object__op_Equality(v9, 0LL, 0LL) )
    return 0;
  if ( !v9 || (monitor = v9[2].monitor) == 0LL )
LABEL_23:
    sub_B170D4();
  return monitor[700];
}


bool __fastcall ServantAssetLoadManager__IsStop(int32_t uniqueId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *callbackFunc; // x0
  WebViewManager_o *v7; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0

  if ( (byte_40F9463 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4);
    byte_40F9463 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  callbackFunc = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Instance->fields.callbackFunc;
  if ( !callbackFunc )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         callbackFunc,
         uniqueId,
         (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    v7 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( v7 )
    {
      v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v7->fields.callbackFunc;
      if ( v8 )
      {
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 v8,
                 uniqueId,
                 (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        if ( Item )
          return LOBYTE(Item->fields._WarAdjustmentValueB_k__BackingField) != 0;
      }
    }
LABEL_11:
    sub_B170D4();
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
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, AheadBg, 0LL);
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

  if ( (byte_40F9464 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_40F9464 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  UnityEngine_MonoBehaviour__StartCoroutine_34804316(v16, Manager__loadNoblePhantasmCoroutine, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__PreloadAssetsByArgs(
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v5; // x1
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

  if ( (byte_40F9415 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, dlOnly);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v5);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v6);
    byte_40F9415 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__preloadServant(args, dlOnly, method);
  if ( !args )
    sub_B170D4();
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v17 = *((_QWORD *)&skillList_k__BackingField->fields._items->obj.klass + v16);
        if ( v17 )
        {
          if ( v16 - 4 >= (unsigned __int64)(unsigned int)skillList_k__BackingField->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  const MethodInfo *v6; // x2

  if ( (byte_40F9461 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_40F9461 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  ServantAssetLoadManager_c *v10; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *unloadIgnoredAssetArgs; // x20
  System_String_o *UniqueKey; // x0
  const MethodInfo *v13; // x1
  ServantAssetLoadManager_c *v14; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v15; // x20
  System_String_o *v16; // x0
  ServantAssetLoadManager_c *v17; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v18; // x20
  System_Type_o *v19; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0

  if ( (byte_40F9418 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__, v4);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    byte_40F9418 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  if ( ServantAssetLoadManager__IsKeepAssetAvailable(Instance, v8) )
  {
    v10 = ServantAssetLoadManager_TypeInfo;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      v10 = ServantAssetLoadManager_TypeInfo;
    }
    if ( args )
    {
      unloadIgnoredAssetArgs = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v10->static_fields->unloadIgnoredAssetArgs;
      UniqueKey = ServantAssetArgs__get_UniqueKey(args, v9);
      if ( unloadIgnoredAssetArgs )
      {
        if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                unloadIgnoredAssetArgs,
                (System_Xml_XmlQualifiedName_o *)UniqueKey,
                (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__) )
        {
          v14 = ServantAssetLoadManager_TypeInfo;
          if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            v14 = ServantAssetLoadManager_TypeInfo;
          }
          v15 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v14->static_fields->unloadIgnoredAssetArgs;
          v16 = ServantAssetArgs__get_UniqueKey(args, v13);
          if ( !v15 )
            goto LABEL_23;
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v15,
            (System_Xml_XmlQualifiedName_o *)v16,
            (System_Xml_Schema_XmlSchemaObject_o *)args,
            (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__);
        }
        v17 = ServantAssetLoadManager_TypeInfo;
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          v17 = ServantAssetLoadManager_TypeInfo;
        }
        v18 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v17->static_fields->unloadIgnoredAssetArgs;
        v19 = (System_Type_o *)ServantAssetArgs__get_UniqueKey(args, v13);
        if ( v18 )
        {
          Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                   v18,
                   v19,
                   (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__);
          if ( Item )
          {
            ++LODWORD(Item[5].monitor);
            return 1;
          }
        }
      }
    }
LABEL_23:
    sub_B170D4();
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

  if ( (byte_40F9468 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__Object__get_Value__, v6);
    byte_40F9468 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  releaseAssets = this->fields._releaseAssets;
  if ( !releaseAssets )
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    &v8,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)releaseAssets,
    (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v8,
            (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__) )
    UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)v8.fields.current.fields.value, 0LL);
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v8,
    (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__);
}


void __fastcall ServantAssetLoadManager__UnloadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int Weapon_k__BackingField; // w20
  int WeaponEffectId_k__BackingField; // w20
  int32_t EffectFolder_k__BackingField; // w21
  int32_t CameraId_k__BackingField; // w20
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillList_k__BackingField; // x19
  __int64 size; // x8
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x9

  if ( (byte_40F9417 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v3);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v4);
    byte_40F9417 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__unloadServant(args, method);
  if ( !args )
    sub_B170D4();
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__unloadActorMotion(Weapon_k__BackingField, v5);
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
    ServantAssetLoadManager__unloadWeaponGroupEffect(WeaponEffectId_k__BackingField, EffectFolder_k__BackingField, v6);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__unloadCameraAction(CameraId_k__BackingField, v5);
  ServantAssetLoadManager__unloadFromDeckServant(args->fields._deckSvt_k__BackingField, v11);
  skillList_k__BackingField = args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField )
  {
    LODWORD(size) = skillList_k__BackingField->fields._size;
    if ( (int)size >= 1 )
    {
      v14 = 4LL;
      do
      {
        if ( v14 - 4 >= (unsigned __int64)(unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v15 = *((_QWORD *)&skillList_k__BackingField->fields._items->obj.klass + v14);
        if ( v15 )
        {
          if ( v14 - 4 >= (unsigned __int64)(unsigned int)skillList_k__BackingField->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 456LL))(v15, *(_QWORD *)(*(_QWORD *)v15 + 464LL));
        }
        size = skillList_k__BackingField->fields._size;
        v16 = v14 - 3;
        ++v14;
      }
      while ( v16 < size );
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

  v4 = this;
  if ( (byte_40F9477 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B16FFC(&ServantAssetLoadManager_TypeInfo, commandCodeIds);
    byte_40F9477 = 1;
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
          sub_B17100(this, commandCodeIds, method);
          sub_B170A0();
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

  if ( (byte_40F9483 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetData__Add__, data);
    byte_40F9483 = 1;
  }
  bgAssetDataList = this->fields.bgAssetDataList;
  if ( !bgAssetDataList )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bgAssetDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_AssetData__Add__);
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
  void *ReplaceDeadShaderFunc; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x8
  _QWORD *v29; // x24
  unsigned __int64 v30; // x19
  UnityEngine_Object_o *v31; // x20
  UnityEngine_Material_o *material; // x0
  UnityEngine_Material_o *v33; // x0
  UnityEngine_Material_o *v34; // x0
  UnityEngine_Material_o *v35; // x0
  UnityEngine_Shader_o *v36; // x20
  UnityEngine_Texture_o *UIAtlas; // x21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v39; // x1
  UnityEngine_Transform_o *NodeFromName; // x22
  __int64 v41; // x8
  System_Func_string__BacktraceData__BacktraceResult__o *v42; // x23
  unsigned __int64 v43; // x27
  UnityEngine_Object_o *v44; // x24
  int v45; // w8
  _DWORD *v46; // x25
  unsigned int v47; // w28
  char *v48; // x8
  UnityEngine_Material_o *v49; // x26
  System_String_o *shader; // x0
  UnityEngine_Shader_o *v51; // x0
  UnityEngine_Object_o *gameObject; // x0
  System_String_o *name; // x0
  UnityEngine_Object_o *v54; // x0
  System_String_o *v55; // x0
  UnityEngine_Transform_o *rootBone; // x0
  int v57; // s0
  float x; // s13
  float y; // s14
  float z; // s15
  float v63; // s13
  float v64; // s14
  float v65; // s15
  float v66; // s13
  float v67; // s14
  float v68; // s15
  float v69; // s13
  _DWORD *v70; // [xsp+8h] [xbp-118h]
  UnityEngine_Bounds_o v71; // [xsp+10h] [xbp-110h] BYREF
  UnityEngine_Bounds_o v72; // [xsp+28h] [xbp-F8h] BYREF
  UnityEngine_Bounds_o v73; // [xsp+40h] [xbp-E0h] BYREF
  UnityEngine_Bounds_o v74; // [xsp+60h] [xbp-C0h] BYREF
  MethodInfo methoda; // [xsp+78h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F9436 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_Shader__Shader__Shader__Invoke__, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_15887/*"_ClipSharpnessY"*/, v7);
    sub_B16FFC(&StringLiteral_15891/*"_Color"*/, v8);
    sub_B16FFC(&StringLiteral_19988/*"joint_all_Base"*/, v9);
    sub_B16FFC(&StringLiteral_15875/*"_ChocoTex"*/, v10);
    sub_B16FFC(&StringLiteral_23162/*"weapon"*/, v11);
    sub_B16FFC(&StringLiteral_12773/*"Shaders/ChocoMap"*/, v12);
    sub_B16FFC(&StringLiteral_16032/*"_Use_alphawidth"*/, v13);
    sub_B16FFC(&StringLiteral_4500/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, v14);
    sub_B16FFC(&StringLiteral_16813/*"body"*/, v15);
    sub_B16FFC(&StringLiteral_15853/*"_AddColor"*/, v16);
    byte_40F9436 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  memset(&v74, 0, sizeof(v74));
  memset(&v73, 0, sizeof(v73));
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
  ReplaceDeadShaderFunc = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                            obj,
                            (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !ReplaceDeadShaderFunc )
    goto LABEL_55;
  v28 = *((_QWORD *)ReplaceDeadShaderFunc + 3);
  v29 = ReplaceDeadShaderFunc;
  if ( (int)v28 >= 1 )
  {
    v30 = 0LL;
    while ( 1 )
    {
      if ( v30 >= (unsigned int)v28 )
        goto LABEL_56;
      v31 = (UnityEngine_Object_o *)v29[v30 + 4];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      ReplaceDeadShaderFunc = (void *)UnityEngine_Object__op_Equality(v31, 0LL, 0LL);
      if ( ((unsigned __int8)ReplaceDeadShaderFunc & 1) == 0 )
        break;
      LODWORD(v28) = *((_DWORD *)v29 + 6);
      if ( (__int64)++v30 >= (int)v28 )
        goto LABEL_23;
    }
    if ( !v31 )
      goto LABEL_55;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v31, 0LL);
    if ( !material )
      goto LABEL_55;
    if ( UnityEngine_Material__HasProperty_40721564(material, (System_String_o *)StringLiteral_15891/*"_Color"*/, 0LL) )
    {
      v33 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v31, 0LL);
      if ( !v33 )
        goto LABEL_55;
      Color = UnityEngine_Material__GetColor(v33, (System_String_o *)StringLiteral_15891/*"_Color"*/, 0LL);
      r = Color.fields.r;
      g = Color.fields.g;
      b = Color.fields.b;
      a = Color.fields.a;
    }
    v34 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v31, 0LL);
    if ( !v34 )
LABEL_55:
      sub_B170D4();
    if ( UnityEngine_Material__HasProperty_40721564(v34, (System_String_o *)StringLiteral_15853/*"_AddColor"*/, 0LL) )
    {
      v35 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v31, 0LL);
      if ( v35 )
      {
        v85 = UnityEngine_Material__GetColor(v35, (System_String_o *)StringLiteral_15853/*"_AddColor"*/, 0LL);
        methoda.methodPointer = *(Il2CppMethodPointer *)&v85.fields.r;
        methoda.invoker_method = *(void **)&v85.fields.b;
        goto LABEL_23;
      }
      goto LABEL_55;
    }
  }
LABEL_23:
  v36 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4500/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, 0LL);
  UIAtlas = (UnityEngine_Texture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                       (System_String_o *)StringLiteral_12773/*"Shaders/ChocoMap"*/,
                                       (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_Texture2D___);
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_19988/*"joint_all_Base"*/, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ReplaceDeadShaderFunc = ServantAssetLoadManager__GetReplaceDeadShaderFunc(obj, v39);
  v41 = v29[3];
  if ( (int)v41 >= 1 )
  {
    v42 = (System_Func_string__BacktraceData__BacktraceResult__o *)ReplaceDeadShaderFunc;
    v43 = 0LL;
    v70 = v29;
    while ( 1 )
    {
      if ( v43 >= (unsigned int)v41 )
        goto LABEL_56;
      v44 = (UnityEngine_Object_o *)v29[v43 + 4];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      ReplaceDeadShaderFunc = (void *)UnityEngine_Object__op_Equality(v44, 0LL, 0LL);
      if ( ((unsigned __int8)ReplaceDeadShaderFunc & 1) == 0 )
      {
        if ( !v44 )
          goto LABEL_55;
        ReplaceDeadShaderFunc = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v44, 0LL);
        if ( !ReplaceDeadShaderFunc )
          goto LABEL_55;
        v45 = *((_DWORD *)ReplaceDeadShaderFunc + 6);
        v46 = ReplaceDeadShaderFunc;
        if ( v45 >= 1 )
          break;
      }
LABEL_53:
      v29 = v70;
      ++v43;
      LODWORD(v41) = v70[6];
      if ( (__int64)v43 >= (int)v41 )
        return;
    }
    v47 = 0;
    while ( v47 < v45 )
    {
      v48 = (char *)&v46[2 * v47];
      v49 = (UnityEngine_Material_o *)*((_QWORD *)v48 + 4);
      if ( !v49 )
        goto LABEL_55;
      shader = (System_String_o *)UnityEngine_Material__get_shader(*((UnityEngine_Material_o **)v48 + 4), 0LL);
      if ( !v42 )
        goto LABEL_55;
      v51 = (UnityEngine_Shader_o *)System_Func_string__BacktraceData__BacktraceResult___Invoke(
                                      v42,
                                      shader,
                                      (Backtrace_Unity_Model_BacktraceData_o *)v36,
                                      (const MethodInfo_2B75C54 *)Method_System_Func_Shader__Shader__Shader__Invoke__);
      UnityEngine_Material__set_shader(v49, v51, 0LL);
      v86.fields.r = r;
      v86.fields.g = g;
      v86.fields.b = b;
      v86.fields.a = a;
      UnityEngine_Material__SetColor(v49, (System_String_o *)StringLiteral_15891/*"_Color"*/, v86, 0LL);
      *(_QWORD *)&v87.fields.r = methoda.methodPointer;
      *(_QWORD *)&v87.fields.b = methoda.invoker_method;
      UnityEngine_Material__SetColor(v49, (System_String_o *)StringLiteral_15853/*"_AddColor"*/, v87, 0LL);
      UnityEngine_Material__SetTexture(v49, (System_String_o *)StringLiteral_15875/*"_ChocoTex"*/, UIAtlas, 0LL);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v44, 0LL);
      if ( !gameObject )
        goto LABEL_55;
      name = UnityEngine_Object__get_name(gameObject, 0LL);
      if ( !name )
        goto LABEL_55;
      if ( System_String__StartsWith(name, (System_String_o *)StringLiteral_16813/*"body"*/, 0LL) )
        goto LABEL_46;
      v54 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v44, 0LL);
      if ( !v54 )
        goto LABEL_55;
      v55 = UnityEngine_Object__get_name(v54, 0LL);
      if ( !v55 )
        goto LABEL_55;
      if ( System_String__StartsWith(v55, (System_String_o *)StringLiteral_23162/*"weapon"*/, 0LL) )
      {
LABEL_46:
        rootBone = UnityEngine_SkinnedMeshRenderer__get_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v44, 0LL);
        if ( !rootBone )
          goto LABEL_55;
        *(UnityEngine_Vector3_o *)&v57 = UnityEngine_Transform__get_position(rootBone, 0LL);
        if ( !NodeFromName )
          goto LABEL_55;
        v76 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, *(UnityEngine_Vector3_o *)&v57, 0LL);
        x = v76.fields.x;
        y = v76.fields.y;
        z = v76.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0LL);
        v63 = x - localPosition.fields.x;
        v64 = y - localPosition.fields.y;
        v65 = z - localPosition.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v72, (UnityEngine_SkinnedMeshRenderer_o *)v44, 0LL);
        v73 = v72;
        center = UnityEngine_Bounds__get_center(&v73, 0LL);
        v66 = v63 + center.fields.x;
        v67 = v64 + center.fields.y;
        v68 = v65 + center.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v72, (UnityEngine_SkinnedMeshRenderer_o *)v44, 0LL);
        v73 = v72;
        size = UnityEngine_Bounds__get_size(&v73, 0LL);
        v79.fields.x = v66;
        v79.fields.y = v67;
        v79.fields.z = v68;
        UnityEngine_Bounds___ctor(&v74, v79, size, 0LL);
        v71 = v74;
        UnityEngine_SkinnedMeshRenderer__set_localBounds((UnityEngine_SkinnedMeshRenderer_o *)v44, &v71, 0LL);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v44, NodeFromName, 0LL);
      }
      else
      {
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v72, (UnityEngine_SkinnedMeshRenderer_o *)v44, 0LL);
        v73 = v72;
        v80 = UnityEngine_Bounds__get_center(&v73, 0LL);
        v69 = v80.fields.y;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v72, (UnityEngine_SkinnedMeshRenderer_o *)v44, 0LL);
        v73 = v72;
        extents = UnityEngine_Bounds__get_extents(&v73, 0LL);
        UnityEngine_Material__SetFloat(v49, (System_String_o *)StringLiteral_15887/*"_ClipSharpnessY"*/, v69 - extents.fields.y, 0LL);
      }
      ReplaceDeadShaderFunc = (void *)UnityEngine_Material__HasProperty_40721564(
                                        v49,
                                        (System_String_o *)StringLiteral_16032/*"_Use_alphawidth"*/,
                                        0LL);
      if ( ((unsigned __int8)ReplaceDeadShaderFunc & 1) != 0 )
        UnityEngine_Material__SetFloat(v49, (System_String_o *)StringLiteral_16032/*"_Use_alphawidth"*/, 1.0, 0LL);
      v45 = v46[6];
      if ( (int)++v47 >= v45 )
        goto LABEL_53;
    }
LABEL_56:
    sub_B17100(ReplaceDeadShaderFunc, v26, v27);
    sub_B170A0();
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
  Il2CppClass *materials; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  const char *namespaze; // x8
  Il2CppClass *v25; // x21
  unsigned __int64 v26; // x23
  UnityEngine_Object_o *v27; // x20
  UnityEngine_Material_o *material; // x0
  UnityEngine_Material_o *v29; // x0
  UnityEngine_Material_o *v30; // x0
  UnityEngine_Material_o *v31; // x0
  UnityEngine_Shader_o *v32; // x20
  const MethodInfo *v33; // x1
  UnityEngine_Texture_o *UIAtlas; // x21
  System_Func_Shader__Shader__Shader__o *ReplaceChocoShaderFunc; // x22
  const char *v36; // x8
  Il2CppClass *klass; // x9
  unsigned __int64 v38; // x25
  UnityEngine_Object_o *v39; // x23
  int v40; // w8
  Il2CppClass *v41; // x23
  unsigned int v42; // w28
  void **v43; // x8
  UnityEngine_Material_o *v44; // x24
  System_String_o *shader; // x0
  UnityEngine_Shader_o *v46; // x0
  MethodInfo v47; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F9437 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_Shader__Shader__Shader__Invoke__, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_15891/*"_Color"*/, v7);
    sub_B16FFC(&StringLiteral_15875/*"_ChocoTex"*/, v8);
    sub_B16FFC(&StringLiteral_4499/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v9);
    sub_B16FFC(&StringLiteral_12773/*"Shaders/ChocoMap"*/, v10);
    sub_B16FFC(&StringLiteral_16032/*"_Use_alphawidth"*/, v11);
    sub_B16FFC(&StringLiteral_15853/*"_AddColor"*/, v12);
    byte_40F9437 = 1;
  }
  v47.methodPointer = 0LL;
  v47.invoker_method = 0LL;
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  white.fields.r = 0.0;
  white.fields.g = 0.0;
  white.fields.b = 0.0;
  white.fields.a = 0.0;
  UnityEngine_Color___ctor(white, v17, v18, v19, v20, &v47);
  if ( !obj )
    goto LABEL_46;
  materials = (Il2CppClass *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                               obj,
                               (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !materials )
    goto LABEL_46;
  namespaze = materials->_1.namespaze;
  v25 = materials;
  if ( (int)namespaze < 1 )
    goto LABEL_23;
  v26 = 0LL;
  while ( 1 )
  {
    if ( v26 >= (unsigned int)namespaze )
      goto LABEL_47;
    v27 = (UnityEngine_Object_o *)*((_QWORD *)&v25->_1.byval_arg.data + v26);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    materials = (Il2CppClass *)UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
    if ( ((unsigned __int8)materials & 1) == 0 )
      break;
    LODWORD(namespaze) = v25->_1.namespaze;
    if ( (__int64)++v26 >= (int)namespaze )
      goto LABEL_23;
  }
  if ( !v27 )
    goto LABEL_46;
  material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v27, 0LL);
  if ( !material )
    goto LABEL_46;
  if ( UnityEngine_Material__HasProperty_40721564(material, (System_String_o *)StringLiteral_15891/*"_Color"*/, 0LL) )
  {
    v29 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v27, 0LL);
    if ( !v29 )
      goto LABEL_46;
    Color = UnityEngine_Material__GetColor(v29, (System_String_o *)StringLiteral_15891/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  v30 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v27, 0LL);
  if ( !v30 )
LABEL_46:
    sub_B170D4();
  if ( UnityEngine_Material__HasProperty_40721564(v30, (System_String_o *)StringLiteral_15853/*"_AddColor"*/, 0LL) )
  {
    v31 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v27, 0LL);
    if ( !v31 )
      goto LABEL_46;
    v50 = UnityEngine_Material__GetColor(v31, (System_String_o *)StringLiteral_15853/*"_AddColor"*/, 0LL);
    v47.methodPointer = *(Il2CppMethodPointer *)&v50.fields.r;
    v47.invoker_method = *(void **)&v50.fields.b;
  }
LABEL_23:
  v32 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4499/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
  UIAtlas = (UnityEngine_Texture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                       (System_String_o *)StringLiteral_12773/*"Shaders/ChocoMap"*/,
                                       (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_Texture2D___);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ReplaceChocoShaderFunc = ServantAssetLoadManager__GetReplaceChocoShaderFunc(obj, v33);
  materials = (Il2CppClass *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                               obj,
                               (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !materials )
    goto LABEL_46;
  v36 = materials->_1.namespaze;
  klass = materials;
  if ( (int)v36 >= 1 )
  {
    v38 = 0LL;
    v47.klass = materials;
    while ( 1 )
    {
      if ( v38 >= (unsigned int)v36 )
        goto LABEL_47;
      v39 = (UnityEngine_Object_o *)*((_QWORD *)&klass->_1.byval_arg.data + v38);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      materials = (Il2CppClass *)UnityEngine_Object__op_Equality(v39, 0LL, 0LL);
      if ( ((unsigned __int8)materials & 1) == 0 )
      {
        if ( !v39 )
          goto LABEL_46;
        materials = (Il2CppClass *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v39, 0LL);
        if ( !materials )
          goto LABEL_46;
        v40 = (int)materials->_1.namespaze;
        v41 = materials;
        if ( v40 >= 1 )
          break;
      }
LABEL_44:
      klass = v47.klass;
      ++v38;
      LODWORD(v36) = v47.klass->_1.namespaze;
      if ( (__int64)v38 >= (int)v36 )
        return;
    }
    v42 = 0;
    while ( v42 < v40 )
    {
      v43 = &v41->_1.image + (int)v42;
      v44 = (UnityEngine_Material_o *)v43[4];
      if ( !v44 )
        goto LABEL_46;
      shader = (System_String_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v43[4], 0LL);
      if ( !ReplaceChocoShaderFunc )
        goto LABEL_46;
      v46 = (UnityEngine_Shader_o *)System_Func_string__BacktraceData__BacktraceResult___Invoke(
                                      (System_Func_string__BacktraceData__BacktraceResult__o *)ReplaceChocoShaderFunc,
                                      shader,
                                      (Backtrace_Unity_Model_BacktraceData_o *)v32,
                                      (const MethodInfo_2B75C54 *)Method_System_Func_Shader__Shader__Shader__Invoke__);
      UnityEngine_Material__set_shader(v44, v46, 0LL);
      v51.fields.r = r;
      v51.fields.g = g;
      v51.fields.b = b;
      v51.fields.a = a;
      UnityEngine_Material__SetColor(v44, (System_String_o *)StringLiteral_15891/*"_Color"*/, v51, 0LL);
      *(_QWORD *)&v52.fields.r = v47.methodPointer;
      *(_QWORD *)&v52.fields.b = v47.invoker_method;
      UnityEngine_Material__SetColor(v44, (System_String_o *)StringLiteral_15853/*"_AddColor"*/, v52, 0LL);
      UnityEngine_Material__SetTexture(v44, (System_String_o *)StringLiteral_15875/*"_ChocoTex"*/, UIAtlas, 0LL);
      materials = (Il2CppClass *)UnityEngine_Material__HasProperty_40721564(
                                   v44,
                                   (System_String_o *)StringLiteral_16032/*"_Use_alphawidth"*/,
                                   0LL);
      if ( ((unsigned __int8)materials & 1) != 0 )
        UnityEngine_Material__SetFloat(v44, (System_String_o *)StringLiteral_16032/*"_Use_alphawidth"*/, 1.0, 0LL);
      v40 = (int)v41->_1.namespaze;
      if ( (int)++v42 >= v40 )
        goto LABEL_44;
    }
LABEL_47:
    sub_B17100(materials, v22, v23);
    sub_B170A0();
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
  void *ReplaceDeadShaderFunc; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x8
  _QWORD *v26; // x24
  unsigned __int64 v27; // x19
  UnityEngine_Object_o *v28; // x20
  UnityEngine_Material_o *material; // x0
  UnityEngine_Material_o *v30; // x0
  UnityEngine_Material_o *v31; // x0
  UnityEngine_Material_o *v32; // x0
  UnityEngine_Shader_o *v33; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v35; // x1
  UnityEngine_Transform_o *NodeFromName; // x21
  __int64 v37; // x8
  System_Func_string__BacktraceData__BacktraceResult__o *v38; // x22
  unsigned __int64 v39; // x26
  UnityEngine_Object_o *v40; // x23
  int v41; // w8
  _DWORD *v42; // x24
  unsigned int v43; // w19
  char *v44; // x8
  UnityEngine_Material_o *v45; // x25
  System_String_o *shader; // x0
  UnityEngine_Shader_o *v47; // x0
  UnityEngine_Object_o *gameObject; // x0
  System_String_o *name; // x0
  UnityEngine_Object_o *v50; // x0
  System_String_o *v51; // x0
  UnityEngine_Transform_o *rootBone; // x0
  int v53; // s0
  float x; // s13
  float y; // s14
  float z; // s15
  float v59; // s13
  float v60; // s14
  float v61; // s15
  float v62; // s13
  float v63; // s14
  float v64; // s15
  float v65; // s13
  _DWORD *v66; // [xsp+8h] [xbp-118h]
  UnityEngine_Bounds_o v67; // [xsp+10h] [xbp-110h] BYREF
  UnityEngine_Bounds_o v68; // [xsp+28h] [xbp-F8h] BYREF
  UnityEngine_Bounds_o v69; // [xsp+40h] [xbp-E0h] BYREF
  UnityEngine_Bounds_o v70; // [xsp+60h] [xbp-C0h] BYREF
  MethodInfo methoda; // [xsp+78h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F9435 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_Shader__Shader__Shader__Invoke__, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_15887/*"_ClipSharpnessY"*/, v6);
    sub_B16FFC(&StringLiteral_4498/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, v7);
    sub_B16FFC(&StringLiteral_15891/*"_Color"*/, v8);
    sub_B16FFC(&StringLiteral_19988/*"joint_all_Base"*/, v9);
    sub_B16FFC(&StringLiteral_23162/*"weapon"*/, v10);
    sub_B16FFC(&StringLiteral_16032/*"_Use_alphawidth"*/, v11);
    sub_B16FFC(&StringLiteral_16813/*"body"*/, v12);
    sub_B16FFC(&StringLiteral_15853/*"_AddColor"*/, v13);
    byte_40F9435 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  memset(&v70, 0, sizeof(v70));
  memset(&v69, 0, sizeof(v69));
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
  ReplaceDeadShaderFunc = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                            obj,
                            (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !ReplaceDeadShaderFunc )
    goto LABEL_55;
  v25 = *((_QWORD *)ReplaceDeadShaderFunc + 3);
  v26 = ReplaceDeadShaderFunc;
  if ( (int)v25 >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v25 )
        goto LABEL_56;
      v28 = (UnityEngine_Object_o *)v26[v27 + 4];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      ReplaceDeadShaderFunc = (void *)UnityEngine_Object__op_Equality(v28, 0LL, 0LL);
      if ( ((unsigned __int8)ReplaceDeadShaderFunc & 1) == 0 )
        break;
      LODWORD(v25) = *((_DWORD *)v26 + 6);
      if ( (__int64)++v27 >= (int)v25 )
        goto LABEL_23;
    }
    if ( !v28 )
      goto LABEL_55;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v28, 0LL);
    if ( !material )
      goto LABEL_55;
    if ( UnityEngine_Material__HasProperty_40721564(material, (System_String_o *)StringLiteral_15891/*"_Color"*/, 0LL) )
    {
      v30 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v28, 0LL);
      if ( !v30 )
        goto LABEL_55;
      Color = UnityEngine_Material__GetColor(v30, (System_String_o *)StringLiteral_15891/*"_Color"*/, 0LL);
      r = Color.fields.r;
      g = Color.fields.g;
      b = Color.fields.b;
      a = Color.fields.a;
    }
    v31 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v28, 0LL);
    if ( !v31 )
LABEL_55:
      sub_B170D4();
    if ( UnityEngine_Material__HasProperty_40721564(v31, (System_String_o *)StringLiteral_15853/*"_AddColor"*/, 0LL) )
    {
      v32 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v28, 0LL);
      if ( v32 )
      {
        v81 = UnityEngine_Material__GetColor(v32, (System_String_o *)StringLiteral_15853/*"_AddColor"*/, 0LL);
        methoda.methodPointer = *(Il2CppMethodPointer *)&v81.fields.r;
        methoda.invoker_method = *(void **)&v81.fields.b;
        goto LABEL_23;
      }
      goto LABEL_55;
    }
  }
LABEL_23:
  v33 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4498/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, 0LL);
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_19988/*"joint_all_Base"*/, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ReplaceDeadShaderFunc = ServantAssetLoadManager__GetReplaceDeadShaderFunc(obj, v35);
  v37 = v26[3];
  if ( (int)v37 >= 1 )
  {
    v38 = (System_Func_string__BacktraceData__BacktraceResult__o *)ReplaceDeadShaderFunc;
    v39 = 0LL;
    v66 = v26;
    while ( 1 )
    {
      if ( v39 >= (unsigned int)v37 )
        goto LABEL_56;
      v40 = (UnityEngine_Object_o *)v26[v39 + 4];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      ReplaceDeadShaderFunc = (void *)UnityEngine_Object__op_Equality(v40, 0LL, 0LL);
      if ( ((unsigned __int8)ReplaceDeadShaderFunc & 1) == 0 )
      {
        if ( !v40 )
          goto LABEL_55;
        ReplaceDeadShaderFunc = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v40, 0LL);
        if ( !ReplaceDeadShaderFunc )
          goto LABEL_55;
        v41 = *((_DWORD *)ReplaceDeadShaderFunc + 6);
        v42 = ReplaceDeadShaderFunc;
        if ( v41 >= 1 )
          break;
      }
LABEL_53:
      v26 = v66;
      ++v39;
      LODWORD(v37) = v66[6];
      if ( (__int64)v39 >= (int)v37 )
        return;
    }
    v43 = 0;
    while ( v43 < v41 )
    {
      v44 = (char *)&v42[2 * v43];
      v45 = (UnityEngine_Material_o *)*((_QWORD *)v44 + 4);
      if ( !v45 )
        goto LABEL_55;
      shader = (System_String_o *)UnityEngine_Material__get_shader(*((UnityEngine_Material_o **)v44 + 4), 0LL);
      if ( !v38 )
        goto LABEL_55;
      v47 = (UnityEngine_Shader_o *)System_Func_string__BacktraceData__BacktraceResult___Invoke(
                                      v38,
                                      shader,
                                      (Backtrace_Unity_Model_BacktraceData_o *)v33,
                                      (const MethodInfo_2B75C54 *)Method_System_Func_Shader__Shader__Shader__Invoke__);
      UnityEngine_Material__set_shader(v45, v47, 0LL);
      v82.fields.r = r;
      v82.fields.g = g;
      v82.fields.b = b;
      v82.fields.a = a;
      UnityEngine_Material__SetColor(v45, (System_String_o *)StringLiteral_15891/*"_Color"*/, v82, 0LL);
      *(_QWORD *)&v83.fields.r = methoda.methodPointer;
      *(_QWORD *)&v83.fields.b = methoda.invoker_method;
      UnityEngine_Material__SetColor(v45, (System_String_o *)StringLiteral_15853/*"_AddColor"*/, v83, 0LL);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v40, 0LL);
      if ( !gameObject )
        goto LABEL_55;
      name = UnityEngine_Object__get_name(gameObject, 0LL);
      if ( !name )
        goto LABEL_55;
      if ( System_String__StartsWith(name, (System_String_o *)StringLiteral_16813/*"body"*/, 0LL) )
        goto LABEL_46;
      v50 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v40, 0LL);
      if ( !v50 )
        goto LABEL_55;
      v51 = UnityEngine_Object__get_name(v50, 0LL);
      if ( !v51 )
        goto LABEL_55;
      if ( System_String__StartsWith(v51, (System_String_o *)StringLiteral_23162/*"weapon"*/, 0LL) )
      {
LABEL_46:
        rootBone = UnityEngine_SkinnedMeshRenderer__get_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v40, 0LL);
        if ( !rootBone )
          goto LABEL_55;
        *(UnityEngine_Vector3_o *)&v53 = UnityEngine_Transform__get_position(rootBone, 0LL);
        if ( !NodeFromName )
          goto LABEL_55;
        v72 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, *(UnityEngine_Vector3_o *)&v53, 0LL);
        x = v72.fields.x;
        y = v72.fields.y;
        z = v72.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0LL);
        v59 = x - localPosition.fields.x;
        v60 = y - localPosition.fields.y;
        v61 = z - localPosition.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v68, (UnityEngine_SkinnedMeshRenderer_o *)v40, 0LL);
        v69 = v68;
        center = UnityEngine_Bounds__get_center(&v69, 0LL);
        v62 = v59 + center.fields.x;
        v63 = v60 + center.fields.y;
        v64 = v61 + center.fields.z;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v68, (UnityEngine_SkinnedMeshRenderer_o *)v40, 0LL);
        v69 = v68;
        size = UnityEngine_Bounds__get_size(&v69, 0LL);
        v75.fields.x = v62;
        v75.fields.y = v63;
        v75.fields.z = v64;
        UnityEngine_Bounds___ctor(&v70, v75, size, 0LL);
        v67 = v70;
        UnityEngine_SkinnedMeshRenderer__set_localBounds((UnityEngine_SkinnedMeshRenderer_o *)v40, &v67, 0LL);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v40, NodeFromName, 0LL);
      }
      else
      {
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v68, (UnityEngine_SkinnedMeshRenderer_o *)v40, 0LL);
        v69 = v68;
        v76 = UnityEngine_Bounds__get_center(&v69, 0LL);
        v65 = v76.fields.y;
        UnityEngine_SkinnedMeshRenderer__get_localBounds(&v68, (UnityEngine_SkinnedMeshRenderer_o *)v40, 0LL);
        v69 = v68;
        extents = UnityEngine_Bounds__get_extents(&v69, 0LL);
        UnityEngine_Material__SetFloat(v45, (System_String_o *)StringLiteral_15887/*"_ClipSharpnessY"*/, v65 - extents.fields.y, 0LL);
      }
      ReplaceDeadShaderFunc = (void *)UnityEngine_Material__HasProperty_40721564(
                                        v45,
                                        (System_String_o *)StringLiteral_16032/*"_Use_alphawidth"*/,
                                        0LL);
      if ( ((unsigned __int8)ReplaceDeadShaderFunc & 1) != 0 )
        UnityEngine_Material__SetFloat(v45, (System_String_o *)StringLiteral_16032/*"_Use_alphawidth"*/, 1.0, 0LL);
      v41 = v42[6];
      if ( (int)++v43 >= v41 )
        goto LABEL_53;
    }
LABEL_56:
    sub_B17100(ReplaceDeadShaderFunc, v23, v24);
    sub_B170A0();
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

  if ( (byte_40F945D & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_40F945D = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F945E & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&SoundManager_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_9568/*"NoblePhantasm_"*/, v14);
    sub_B16FFC(&StringLiteral_23405/*"{0:D0}_{1}"*/, v15);
    sub_B16FFC(&StringLiteral_12683/*"Servants_"*/, v16);
    byte_40F945E = 1;
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
  v24 = System_String__Format_43739268((System_String_o *)StringLiteral_23405/*"{0:D0}_{1}"*/, v23, (Il2CppObject *)voiceTypeId, 0LL);
  if ( SvtEntity )
  {
    v25 = &StringLiteral_9568/*"NoblePhantasm_"*/;
    v26 = v24;
    if ( !isNp )
      v25 = &StringLiteral_12683/*"Servants_"*/;
    v27 = (System_String_o *)*v25;
    v28 = System_Int32__ToString((int32_t)&v33, 0LL);
    v29 = System_String__Concat_43743732(v27, v28, 0LL);
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

  if ( (byte_40F9410 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_40F9410 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return ServantAssetLoadManager__checkLoadlocal(Instance, v3);
}


bool __fastcall ServantAssetLoadManager__checkLoadlocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadlist; // x8
  struct System_Collections_Generic_List_string__o *downloadlist; // x8

  if ( (byte_40F9411 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, method);
    byte_40F9411 = 1;
  }
  loadlist = this->fields.loadlist;
  if ( !loadlist )
    goto LABEL_9;
  if ( loadlist->fields._size > 0 )
    return 1;
  downloadlist = this->fields.downloadlist;
  if ( !downloadlist )
LABEL_9:
    sub_B170D4();
  if ( downloadlist->fields._size > 0 )
    return 1;
  return this->fields.soundCount > 0;
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
  WebViewManager_o *v14; // x0
  struct ServantLimitMaster_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleServantConfConponent_o *p_svtlimitaddmaster; // x19
  struct ServantLimitAddMaster_o *svtlimitaddmaster; // t1
  WebViewManager_o *v24; // x0
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_40F93FA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F93FA = 1;
  }
  if ( !this->fields.svtmaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_WarQuestSelectionMaster = (struct ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    this->fields.svtmaster = MasterData_WarQuestSelectionMaster;
    sub_B16F98(
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
    v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v14 )
      goto LABEL_12;
    v15 = (struct ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v14,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    this->fields.svtlimitmaster = v15;
    sub_B16F98(
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
  v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v24 )
LABEL_12:
    sub_B170D4();
  v25 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v24,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  p_svtlimitaddmaster->klass = (BattleServantConfConponent_c *)v25;
  sub_B16F98(p_svtlimitaddmaster, v25, v26, v27, v28, v29, v30, v31);
}


void __fastcall ServantAssetLoadManager__clearServantlist(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_40F940E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_40F940E = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  ServantAssetLoadManager__clearServantlistlocal(Instance, v3);
}


void __fastcall ServantAssetLoadManager__clearServantlistlocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadlist; // x0
  struct System_Collections_Generic_List_string__o *downloadlist; // x0
  struct System_Collections_Generic_List_string__o *loadedList; // x0

  if ( (byte_40F940F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Clear__, method);
    byte_40F940F = 1;
  }
  loadlist = this->fields.loadlist;
  if ( !loadlist
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadlist,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__),
        (downloadlist = this->fields.downloadlist) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)downloadlist,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__),
        (loadedList = this->fields.loadedList) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadedList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__);
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
  System_String_o *v13; // x0
  System_String_o *v14; // x20
  struct System_Collections_Generic_Dictionary_string__Object__o *v15; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v17; // x19
  System_Xml_Schema_XmlSchemaObject_o *UIAtlas; // x0
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x8
  int v21; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F9469 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__, *(_QWORD *)&tp);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__Object__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__Object__set_Item__, v6);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_GameObject___, v10);
    sub_B16FFC(&StringLiteral_18189/*"effect/ef_shadow0"*/, v11);
    byte_40F9469 = 1;
  }
  v21 = tp + 1;
  v12 = System_Int32__ToString((int32_t)&v21, 0LL);
  v13 = System_String__Concat_43743732((System_String_o *)StringLiteral_18189/*"effect/ef_shadow0"*/, v12, 0LL);
  if ( !this->fields._releaseAssets )
    goto LABEL_17;
  v14 = v13;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields._releaseAssets,
          (System_Xml_XmlQualifiedName_o *)v13,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__) )
  {
    UIAtlas = (System_Xml_Schema_XmlSchemaObject_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                       v14,
                                                       (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_GameObject___);
    releaseAssets = this->fields._releaseAssets;
    if ( releaseAssets )
    {
      v17 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UIAtlas;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)releaseAssets,
        (System_Xml_XmlQualifiedName_o *)v14,
        UIAtlas,
        (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__Object__set_Item__);
      goto LABEL_13;
    }
LABEL_17:
    sub_B170D4();
  }
  v15 = this->fields._releaseAssets;
  if ( !v15 )
    goto LABEL_17;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15,
           (System_Type_o *)v14,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__Object__get_Item__);
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
                                       (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


void __fastcall ServantAssetLoadManager__endloadList(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadlist; // x0
  struct System_String_o *name; // x20
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v8; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *downloadlist; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v10; // x0

  if ( (byte_40F9414 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, data);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, v5);
    byte_40F9414 = 1;
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
           (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      v8 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadlist;
      if ( !v8 )
        goto LABEL_13;
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        v8,
        (WarBoardManager_TaskList_o *)name,
        (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__);
    }
    downloadlist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.downloadlist;
    if ( !downloadlist )
LABEL_13:
      sub_B170D4();
    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           downloadlist,
           (WarBoardManager_TaskList_o *)name,
           (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      v10 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.downloadlist;
      if ( v10 )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v10,
          (WarBoardManager_TaskList_o *)name,
          (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__);
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

  if ( (byte_40F9429 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    sub_B16FFC(&StringLiteral_12676/*"Servants/"*/, v5);
    byte_40F9429 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  BattleChrId = ServantAssetLoadManager__getBattleChrId(Instance, svtId, limitCount, v7);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_12676/*"Servants/"*/, BattleChrId, 0LL);
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
  int32_t LimitCountByImageLimitCostumeIn; // w0
  const MethodInfo *v9; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_40F9428 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, *(_QWORD *)&displimitCount);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_12676/*"Servants/"*/, v6);
    byte_40F9428 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(displimitCount, 0LL);
  if ( !Instance )
    sub_B170D4();
  BattleChrId = ServantAssetLoadManager__getBattleChrId(Instance, svtId, LimitCountByImageLimitCostumeIn, v9);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_12676/*"Servants/"*/, BattleChrId, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getActorFolderName_23802084(
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F942A & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_12676/*"Servants/"*/, v3);
    byte_40F942A = 1;
  }
  v6 = svtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_12676/*"Servants/"*/, v4, 0LL);
}


UnityEngine_Texture2D_o *__fastcall ServantAssetLoadManager__getAssetObject_Texture2D_(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *file,
        const MethodInfo_19E221C *method)
{
  UnityEngine_Texture2D_o *result; // x0

  if ( (byte_40FB09A & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, path);
    byte_40FB09A = 1;
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
    sub_B170D4();
  return ServantLimitAddMaster__getBattleChrId(svtlimitaddmaster, svtId, limitCount, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getCameraActionPath(int32_t cameraId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = cameraId;
  if ( (byte_40F946C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12677/*"Servants/Camera/"*/, method);
    byte_40F946C = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_12677/*"Servants/Camera/"*/, v2, 0LL);
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

  if ( (byte_40F93FD & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&limitCount);
    sub_B16FFC(&StringLiteral_12679/*"Servants/Commands/"*/, v4);
    byte_40F93FD = 1;
  }
  v7 = svtId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12679/*"Servants/Commands/"*/, v5, 0LL);
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

  if ( (byte_40F93FC & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&displimitCount);
    sub_B16FFC(&StringLiteral_12679/*"Servants/Commands/"*/, v4);
    byte_40F93FC = 1;
  }
  v7 = svtId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12679/*"Servants/Commands/"*/, v5, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getNameEffectPath(
        int32_t enemyNameEffectId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = enemyNameEffectId;
  if ( (byte_40F9480 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5796/*"Effect/BattleCommon/NameEffect/"*/, method);
    byte_40F9480 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_5796/*"Effect/BattleCommon/NameEffect/"*/, v2, 0LL);
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

  if ( (byte_40F944D & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&cutInId);
    sub_B16FFC(&StringLiteral_5819/*"Effect/CutIn/Skill/{0}"*/, v4);
    byte_40F944D = 1;
  }
  v7 = cutInId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Format((System_String_o *)StringLiteral_5819/*"Effect/CutIn/Skill/{0}"*/, v5, 0LL);
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

  if ( (byte_40F9405 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&limitCount);
    sub_B16FFC(&StringLiteral_12682/*"Servants/Status/"*/, v4);
    byte_40F9405 = 1;
  }
  v7 = svtId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12682/*"Servants/Status/"*/, v5, 0LL);
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

  if ( (byte_40F9404 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&displimitCount);
    sub_B16FFC(&StringLiteral_12682/*"Servants/Status/"*/, v4);
    byte_40F9404 = 1;
  }
  v7 = svtId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12682/*"Servants/Status/"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *__fastcall ServantAssetLoadManager__getSvtEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct ServantMaster_o *svtmaster; // x0

  if ( (byte_40F93FB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, *(_QWORD *)&svtId);
    byte_40F93FB = 1;
  }
  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtmaster = this->fields.svtmaster;
  if ( !svtmaster )
    sub_B170D4();
  return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)svtmaster,
                              svtId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_B170D4();
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
    sub_B170D4();
  return ServantLimitMaster__GetEntity(svtlimitmaster, svtId, limitCnt, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantAssetLoadManager__getVoiceId(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int32_t SvtVoiceId; // w0

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, 0LL);
  if ( !this->fields.svtlimitaddmaster )
    sub_B170D4();
  return ServantLimitAddMaster__getVoiceId(this->fields.svtlimitaddmaster, SvtVoiceId, limitCount, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantAssetLoadManager__getVoicePrefix(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int32_t SvtVoiceId; // w0

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, 0LL);
  if ( !this->fields.svtlimitaddmaster )
    sub_B170D4();
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

  if ( (byte_40F943C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_40F943C = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F943D & 1) == 0 )
  {
    sub_B16FFC(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, *(_QWORD *)&svtId);
    sub_B16FFC(&StringLiteral_12676/*"Servants/"*/, v10);
    byte_40F943D = 1;
  }
  BattleChrId = ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, *(const MethodInfo **)&weapongroup);
  v12 = System_String__Concat_43743732((System_String_o *)StringLiteral_12676/*"Servants/"*/, BattleChrId, 0LL);
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                       this,
                                       v12,
                                       name,
                                       (const MethodInfo_19E221C *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
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

  if ( (byte_40F9452 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_40F9452 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v17; // x21
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Transform_o *v19; // x20
  int v20; // s0
  UnityEngine_Transform_o *v23; // x20
  int v24; // s0
  UnityEngine_Transform_o *v27; // x20
  int v28; // s0
  int32_t v32; // [xsp+Ch] [xbp-14h] BYREF

  v32 = weapongroup;
  if ( (byte_40F9453 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, parent);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v8);
    sub_B16FFC(&StringLiteral_20489/*"motion"*/, v9);
    sub_B16FFC(&StringLiteral_12680/*"Servants/Motion/"*/, v10);
    byte_40F9453 = 1;
  }
  v11 = System_Int32__ToString((int32_t)&v32, 0LL);
  v12 = System_String__Concat_43743732((System_String_o *)StringLiteral_12680/*"Servants/Motion/"*/, v11, 0LL);
  AssetObject_Texture2D = ServantAssetLoadManager__getAssetObject_Texture2D_(
                            this,
                            v12,
                            (System_String_o *)StringLiteral_20489/*"motion"*/,
                            (const MethodInfo_19E221C *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v14 )
    goto LABEL_13;
  v15 = v14;
  transform = UnityEngine_GameObject__get_transform(v14, 0LL);
  if ( !parent )
    goto LABEL_13;
  v17 = transform;
  v18 = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v17 )
    goto LABEL_13;
  UnityEngine_Transform__set_parent(v17, v18, 0LL);
  v19 = UnityEngine_GameObject__get_transform(v15, 0LL);
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v19
    || (UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)&v20, 0LL),
        v23 = UnityEngine_GameObject__get_transform(v15, 0LL),
        *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_up(0LL),
        !v23)
    || (UnityEngine_Transform__set_eulerAngles(v23, *(UnityEngine_Vector3_o *)&v24, 0LL),
        v27 = UnityEngine_GameObject__get_transform(v15, 0LL),
        *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_one(0LL),
        !v27) )
  {
LABEL_13:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v27, *(UnityEngine_Vector3_o *)&v28, 0LL);
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

  if ( (byte_40F9438 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_40F9438 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  System_String_o *ActorFolderName_23802084; // x0

  if ( (byte_40F9439 & 1) == 0 )
  {
    sub_B16FFC(&Method_ServantAssetLoadManager_getAssetObject_TextAsset___, *(_QWORD *)&svtId);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_18620/*"fbxevent"*/, v10);
    byte_40F9439 = 1;
  }
  if ( isForce )
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ActorFolderName_23802084 = ServantAssetLoadManager__getActorFolderName_23802084(svtId, *(const MethodInfo **)&svtId);
  }
  else
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ActorFolderName_23802084 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  }
  if ( !this )
    sub_B170D4();
  return (UnityEngine_TextAsset_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                      this,
                                      ActorFolderName_23802084,
                                      (System_String_o *)StringLiteral_18620/*"fbxevent"*/,
                                      (const MethodInfo_19E221C *)Method_ServantAssetLoadManager_getAssetObject_TextAsset___);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleActor(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_40F942F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_40F942F = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return ServantAssetLoadManager__loadBattleActorlocal(Instance, parent, svtId, limitCount, isForce, v10);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleActorlocal(
        ServantAssetLoadManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *ActorFolderName_23802084; // x0
  UnityEngine_Texture2D_o *AssetObject_Texture2D; // x21
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v20; // x22
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_Transform_o *v22; // x0
  UnityEngine_Transform_o *v23; // x19
  int v24; // s0
  UnityEngine_Transform_o *v27; // x19
  int v28; // s0

  if ( (byte_40F9430 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, parent);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v12);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_17354/*"chr"*/, v14);
    byte_40F9430 = 1;
  }
  if ( isForce )
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ActorFolderName_23802084 = ServantAssetLoadManager__getActorFolderName_23802084(svtId, (const MethodInfo *)parent);
  }
  else
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ActorFolderName_23802084 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&svtId);
  }
  if ( !this )
    goto LABEL_23;
  AssetObject_Texture2D = ServantAssetLoadManager__getAssetObject_Texture2D_(
                            this,
                            ActorFolderName_23802084,
                            (System_String_o *)StringLiteral_17354/*"chr"*/,
                            (const MethodInfo_19E221C *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v17 )
    goto LABEL_23;
  v18 = v17;
  transform = UnityEngine_GameObject__get_transform(v17, 0LL);
  if ( !parent )
    goto LABEL_23;
  v20 = transform;
  v21 = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v20 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent(v20, v21, 0LL);
  v22 = UnityEngine_GameObject__get_transform(v18, 0LL);
  if ( !v22
    || (UnityEngine_Transform__set_localPosition(v22, this->fields.InitPoint, 0LL),
        v23 = UnityEngine_GameObject__get_transform(v18, 0LL),
        *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_up(0LL),
        !v23)
    || (UnityEngine_Transform__set_eulerAngles(v23, *(UnityEngine_Vector3_o *)&v24, 0LL),
        v27 = UnityEngine_GameObject__get_transform(v18, 0LL),
        *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_one(0LL),
        !v27) )
  {
LABEL_23:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v27, *(UnityEngine_Vector3_o *)&v28, 0LL);
  return v18;
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleCommonEffect(
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_40F9449 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, name);
    byte_40F9449 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F944A & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, path);
    sub_B16FFC(&AssetManager_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F944A = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   name,
                                                                   (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
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

  if ( (byte_40F946E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, parent);
    byte_40F946E = 1;
  }
  if ( !cameraId )
    return 0LL;
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v16; // x22
  UnityEngine_Transform_o *v17; // x0
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Transform_o *v19; // x19
  int v20; // s0
  UnityEngine_Transform_o *v23; // x19
  int v24; // s0

  if ( (byte_40F946F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, *(_QWORD *)&cameraId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v8);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_17115/*"cameraAction"*/, v10);
    byte_40F946F = 1;
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
                            (System_String_o *)StringLiteral_17115/*"cameraAction"*/,
                            (const MethodInfo_19E221C *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
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
    v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v14 )
      goto LABEL_21;
    v13 = v14;
    transform = UnityEngine_GameObject__get_transform(v14, 0LL);
    if ( !parent )
      goto LABEL_21;
    v16 = transform;
    v17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0LL);
    if ( !v16 )
      goto LABEL_21;
    UnityEngine_Transform__set_parent(v16, v17, 0LL);
    v18 = UnityEngine_GameObject__get_transform(v13, 0LL);
    if ( !v18
      || (UnityEngine_Transform__set_localPosition(v18, this->fields.InitPoint, 0LL),
          v19 = UnityEngine_GameObject__get_transform(v13, 0LL),
          *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_up(0LL),
          !v19)
      || (UnityEngine_Transform__set_eulerAngles(v19, *(UnityEngine_Vector3_o *)&v20, 0LL),
          v23 = UnityEngine_GameObject__get_transform(v13, 0LL),
          *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_one(0LL),
          !v23) )
    {
LABEL_21:
      sub_B170D4();
    }
    UnityEngine_Transform__set_localScale(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
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

  if ( (byte_40F9400 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_40F9400 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F9401 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, tex);
    sub_B16FFC(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v10);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_17181/*"card_servant_"*/, v12);
    byte_40F9401 = 1;
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
  v18 = System_String__Concat_43743732((System_String_o *)StringLiteral_17181/*"card_servant_"*/, v17, 0LL);
  AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                    this,
                                                    CommandCardLoadFolderName,
                                                    v18,
                                                    (const MethodInfo_19E221C *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
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
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL) )
    {
      if ( !tex )
        sub_B170D4();
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

  if ( (byte_40F9472 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, userCommandCodeId);
    byte_40F9472 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return ServantAssetLoadManager__loadCommandCodeTextureLocal_23821232(Instance, tex, userCommandCodeId, v6);
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
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F9474 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, tex);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v8);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_17102/*"c_{0:D7}"*/, v10);
    byte_40F9474 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(commandCodeId, (const MethodInfo *)tex);
  v17 = commandCodeId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v13 = System_String__Format((System_String_o *)StringLiteral_17102/*"c_{0:D7}"*/, v12, 0LL);
  AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                    this,
                                                    CommandCodeFolderName,
                                                    v13,
                                                    (const MethodInfo_19E221C *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
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
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL) )
    {
      if ( !tex )
        sub_B170D4();
      ((void (__fastcall *)(UITexture_o *, UnityEngine_Object_o *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_Texture2D,
        tex->klass->vtable._28_get_shader.methodPtr);
    }
    return tex;
  }
  return result;
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTextureLocal_23821232(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  int32_t v14; // w0
  const MethodInfo *v15; // x3
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_40F9475 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, tex);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F9475 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  entity = 0LL;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          userCommandCodeId,
          (const MethodInfo_266F60C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
    return 0LL;
  if ( !entity )
LABEL_13:
    sub_B170D4();
  v13 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(this, tex, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTexture_23821516(
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_40F9473 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&commandCodeId);
    byte_40F9473 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(Instance, tex, commandCodeId, v6);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCommonEffect(
        System_String_o *name,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40F9440 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_40F9440 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F9441 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, name);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_18155/*"effect/"*/, v6);
    byte_40F9441 = 1;
  }
  v7 = System_String__Concat_43743732((System_String_o *)StringLiteral_18155/*"effect/"*/, name, 0LL);
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
                                         (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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

  if ( (byte_40F943E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&weapongroup);
    byte_40F943E = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F943F & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, name);
    byte_40F943F = 1;
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
  return StandFigureManager__CreateRenderPrefab_26843068(
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

  if ( (byte_40F940C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_40F940C = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *Entity; // x25
  WebViewManager_o *v28; // x0
  WarQuestSelectionMaster_o *v29; // x0
  ServantLimitAddMaster_o *v30; // x26
  int32_t v31; // w1
  const MethodInfo *v32; // x2
  System_String_o *CommandCardLoadFolderName; // x0
  System_String_o *v34; // x21
  System_String_o *OverwriteTDFileName; // x0
  UnityEngine_Object_o *AssetObject_Texture2D; // x20
  int imageIndex; // w22
  __int64 v38; // x25
  System_String_o *v39; // x24
  __int64 v40; // x25
  DataManager_o *v41; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // x0
  TreasureDvcEntity_o *v43; // x0
  System_String_o *NpNameFileSuffix; // x22
  int32_t v45; // w1
  const MethodInfo *v46; // x2
  System_String_o *v47; // x21
  Il2CppObject *v48; // x0
  System_String_o *v49; // x0
  System_String_o *v50; // x2
  ServantAssetLoadManager_o *v51; // x0
  System_String_o *v52; // x1
  float v54; // s4
  float v55; // s5
  float v56; // s6
  float v57; // s7
  float v58; // s1
  float v59; // s2
  int v60; // s0
  float v61; // s3
  MethodInfo methoda; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Rect_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F940D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, tex);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v14);
    sub_B16FFC(&int_TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v17);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&StringLiteral_23445/*"{0}"*/, v21);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v22);
    sub_B16FFC(&StringLiteral_17182/*"card_servant_np"*/, v23);
    byte_40F940D = 1;
  }
  methoda.name = 0LL;
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(svtId, treasureDvcId, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_54;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                MasterData_WarQuestSelectionMaster,
                                svtId,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v28 )
    goto LABEL_54;
  v29 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v28,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  methoda.name = 0LL;
  if ( !Entity )
    goto LABEL_54;
  v30 = (ServantLimitAddMaster_o *)v29;
  if ( !ServantEntity__IsNameTrueFromBattleSvt(Entity, 0LL) )
    goto LABEL_17;
  if ( !v30 )
    goto LABEL_54;
  if ( !ServantLimitAddMaster__TryGetEntity(v30, (ServantLimitAddEntity_o **)&methoda.name, svtId, limit, 0LL) )
    goto LABEL_17;
  if ( !methoda.name )
    goto LABEL_54;
  if ( ServantLimitAddEntity__ExistOverwriteTDInfo((ServantLimitAddEntity_o *)methoda.name, 0LL) )
  {
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v31, v32);
    if ( !methoda.name )
      goto LABEL_54;
    v34 = CommandCardLoadFolderName;
    OverwriteTDFileName = ServantLimitAddEntity__GetOverwriteTDFileName((ServantLimitAddEntity_o *)methoda.name, 0LL);
    AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                      this,
                                                      v34,
                                                      OverwriteTDFileName,
                                                      (const MethodInfo_19E221C *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    LOBYTE(imageIndex) = 0;
  }
  else
  {
LABEL_17:
    if ( EntityFromIDID )
    {
      v38 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      v39 = (System_String_o *)StringLiteral_17182/*"card_servant_np"*/;
      if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
        sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v40 = **(_QWORD **)(v38 + 192);
      if ( (*(_BYTE *)(v40 + 306) & 1) == 0 )
        sub_AAFCFC(v40);
      v41 = **(DataManager_o ***)(v40 + 184);
      if ( !v41 )
        goto LABEL_54;
      v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             v41,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !v42 )
        goto LABEL_54;
      v43 = (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v42,
                                     treasureDvcId,
                                     (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      if ( !v43 )
        goto LABEL_54;
      NpNameFileSuffix = TreasureDvcEntity__GetNpNameFileSuffix(v43, 0LL);
      if ( !System_String__IsNullOrEmpty(NpNameFileSuffix, 0LL) )
        v39 = System_String__Concat_43746016(v39, (System_String_o *)StringLiteral_15842/*"_"*/, NpNameFileSuffix, 0LL);
      imageIndex = EntityFromIDID->fields.imageIndex;
      if ( imageIndex <= 1 )
      {
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        v52 = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v45, v46);
        v51 = this;
        v50 = v39;
      }
      else
      {
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        v47 = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v45, v46);
        LODWORD(methoda.methodPointer) = (unsigned int)imageIndex >> 1;
        v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
        v49 = System_String__Format((System_String_o *)StringLiteral_23445/*"{0}"*/, v48, 0LL);
        v50 = System_String__Concat_43743732(v39, v49, 0LL);
        v51 = this;
        v52 = v47;
      }
      AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                        v51,
                                                        v52,
                                                        v50,
                                                        (const MethodInfo_19E221C *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
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
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL) )
  {
    if ( tex )
    {
      ((void (__fastcall *)(UITexture_o *, UnityEngine_Object_o *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_Texture2D,
        tex->klass->vtable._28_get_shader.methodPtr);
      if ( (imageIndex & 1) != 0 )
      {
        v59 = 1.0;
        v61 = 0.5;
        v60 = 0;
        v58 = 0.0;
        methoda.methodPointer = 0LL;
        methoda.invoker_method = 0LL;
      }
      else
      {
        v58 = 0.5;
        methoda.methodPointer = 0LL;
        methoda.invoker_method = 0LL;
        v59 = 1.0;
        v60 = 0;
        v61 = 0.5;
      }
      UnityEngine_Rect___ctor(*(UnityEngine_Rect_o *)&v60, v54, v55, v56, v57, &methoda);
      *(_QWORD *)&v63.fields.m_XMin = methoda.methodPointer;
      *(_QWORD *)&v63.fields.m_Width = methoda.invoker_method;
      UITexture__set_uvRect(tex, v63, 0LL);
      return 1;
    }
LABEL_54:
    sub_B170D4();
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
  UnityEngine_MonoBehaviour__StartCoroutine_34804316(
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_40F9465 & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_TypeInfo, parent);
    byte_40F9465 = 1;
  }
  v17 = sub_B170CC(
          ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_TypeInfo,
          parent,
          *(_QWORD *)&svtId,
          *(_QWORD *)&limitCount,
          *(_QWORD *)&treasureDvcId);
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152___ctor(
    (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_o *)v17,
    0,
    0LL);
  if ( !v17 )
    sub_B170D4();
  *(_QWORD *)(v17 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 32), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v17 + 40) = parent;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 40), (System_Int32_array **)parent, v24, v25, v26, v27, v28, v29);
  *(_DWORD *)(v17 + 56) = npChargeStage;
  *(_DWORD *)(v17 + 60) = svtId;
  *(_DWORD *)(v17 + 48) = treasureDvcId;
  *(_DWORD *)(v17 + 52) = limitCount;
  *(_DWORD *)(v17 + 72) = treasureDvcLv;
  *(_QWORD *)(v17 + 80) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 80), (System_Int32_array **)callback, v30, v31, v32, v33, v34, v35);
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

  if ( (byte_40F943A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_40F943A = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  bool IsRandomTD; // w0
  int32_t eventId; // w0
  System_String_o *v19; // x0
  System_String_o *v20; // x21
  System_String_o *v21; // x0
  int v23; // [xsp+Ch] [xbp-44h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  int32_t v25; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40F943B & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&treasureDeviceId);
    sub_B16FFC(&Method_DataManager_GetMaster_TreasureDvcMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v13);
    sub_B16FFC(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v14);
    sub_B16FFC(&StringLiteral_9565/*"NoblePhantasm/"*/, v15);
    byte_40F943B = 1;
  }
  v25 = 0;
  entity = 0LL;
  v23 = 0;
  if ( seqIdFromMstTDSeqWeight < 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_23;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            Master_WarQuestSelectionMaster,
            &entity,
            treasureDeviceId,
            (const MethodInfo_266F3E4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
    {
      v25 = treasureDeviceId;
      goto LABEL_17;
    }
    if ( !entity || (IsRandomTD = TreasureDvcEntity__IsRandomTD((TreasureDvcEntity_o *)entity, 0LL), !entity) )
LABEL_23:
      sub_B170D4();
    if ( IsRandomTD )
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
  v20 = System_String__Concat_43743732((System_String_o *)StringLiteral_9565/*"NoblePhantasm/"*/, v19, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v20, 0LL) )
  {
    v23 = 10 * (v25 / 10);
    v21 = System_Int32__ToString((int32_t)&v23, 0LL);
    v20 = System_String__Concat_43743732((System_String_o *)StringLiteral_9565/*"NoblePhantasm/"*/, v21, 0LL);
  }
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                       this,
                                       v20,
                                       name,
                                       (const MethodInfo_19E221C *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


void __fastcall ServantAssetLoadManager__loadSkillCutIn(
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_40F944E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, callback);
    byte_40F944E = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F944F & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B16FFC(&AssetManager_TypeInfo, skillInfo);
    byte_40F944F = 1;
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

  if ( (byte_40F9408 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtID);
    byte_40F9408 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F9409 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, tex);
    sub_B16FFC(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v9);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_22221/*"status_servant_"*/, v11);
    byte_40F9409 = 1;
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
  v17 = System_String__Concat_43743732((System_String_o *)StringLiteral_22221/*"status_servant_"*/, v16, 0LL);
  AssetObject_Texture2D = (UnityEngine_Object_o *)ServantAssetLoadManager__getAssetObject_Texture2D_(
                                                    this,
                                                    StatusImageFolderName,
                                                    v17,
                                                    (const MethodInfo_19E221C *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
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
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL) )
    {
      if ( !tex )
        sub_B170D4();
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

  if ( (byte_40F9443 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&weapongroup);
    byte_40F9443 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  if ( (byte_40F9444 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, name);
    sub_B16FFC(&AssetManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_5845/*"Effect/weapon/"*/, v9);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v10);
    byte_40F9444 = 1;
  }
  v11 = System_Int32__ToString((int32_t)&v18, 0LL);
  v12 = System_String__Concat_43743732((System_String_o *)StringLiteral_5845/*"Effect/weapon/"*/, v11, 0LL);
  if ( effectFolder )
  {
    v13 = System_Int32__ToString((int32_t)&v17, 0LL);
    v12 = System_String__Concat_43746016(v12, (System_String_o *)StringLiteral_871/*"/"*/, v13, 0LL);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v12, 0LL);
  if ( AssetStorage )
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   name,
                                                                   (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
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
  struct System_Collections_Generic_Dictionary_int__SePlayer__o *ActorVoice; // x0
  struct System_Collections_Generic_Dictionary_int__SePlayer__o *v9; // x0
  SePlayer_o *Item; // x0

  if ( (byte_40F9462 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, *(_QWORD *)&uniqueId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v7);
    byte_40F9462 = 1;
  }
  ActorVoice = this->fields.ActorVoice;
  if ( !ActorVoice )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)ActorVoice,
         uniqueId,
         (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    v9 = this->fields.ActorVoice;
    if ( v9 )
    {
      Item = (SePlayer_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                             (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v9,
                             uniqueId,
                             (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
      if ( Item )
      {
        SePlayer__StopSe(Item, fadeoutTime, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B170D4();
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

  if ( (byte_40F9456 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_40F9456 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F9459 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_40F9459 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F945A & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&StringLiteral_12676/*"Servants/"*/, v13);
    byte_40F945A = 1;
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
    v19 = System_String__Concat_43743732((System_String_o *)StringLiteral_12676/*"Servants/"*/, v18, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    return SoundManager__playSe_24847608(v19, targetFileName, volume, 0LL, 0LL);
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
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  SePlayer_o **v38; // x28
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x2
  ServantEntity_o *SvtEntity; // x27
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x3
  int32_t VoicePrefix; // w0
  struct System_Collections_Generic_Dictionary_int__SePlayer__o *ActorVoice; // x0
  struct System_Collections_Generic_Dictionary_int__SePlayer__o *v51; // x0
  struct System_Collections_Generic_Dictionary_int__SePlayer__o *v52; // x0
  SePlayer_o *Item; // x0
  struct System_Collections_Generic_Dictionary_int__string__o *LastActorVoice; // x0
  __int64 *v55; // x8
  System_String_o *v56; // x22
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  struct System_Collections_Generic_Dictionary_int__SePlayer__o *v59; // x22
  System_String_o *v60; // x24
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  System_Action_o *v65; // x25
  SePlayer_o *v66; // x0
  struct System_Collections_Generic_Dictionary_int__SePlayer__o *v67; // x0
  SePlayer_o *result; // x0
  Il2CppObject *v69; // x0
  int32_t v70; // [xsp+8h] [xbp-58h] BYREF
  int32_t VoiceId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F9457 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__string__set_Item__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__, v23);
    sub_B16FFC(&int_TypeInfo, v24);
    sub_B16FFC(&SoundManager_TypeInfo, v25);
    sub_B16FFC(&Method_ServantAssetLoadManager___c__DisplayClass134_0__playBattleVoicelocal_b__0__, v26);
    sub_B16FFC(&ServantAssetLoadManager___c__DisplayClass134_0_TypeInfo, v27);
    sub_B16FFC(&StringLiteral_23405/*"{0:D0}_{1}"*/, v28);
    sub_B16FFC(&StringLiteral_12676/*"Servants/"*/, v29);
    sub_B16FFC(&StringLiteral_9565/*"NoblePhantasm/"*/, v30);
    byte_40F9457 = 1;
  }
  VoiceId = 0;
  v31 = sub_B170CC(
          ServantAssetLoadManager___c__DisplayClass134_0_TypeInfo,
          *(_QWORD *)&svtId,
          *(_QWORD *)&limit,
          *(_QWORD *)&overwriteSvtVoiceId,
          voiceTypeId);
  ServantAssetLoadManager___c__DisplayClass134_0___ctor((ServantAssetLoadManager___c__DisplayClass134_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_29;
  *(_QWORD *)(v31 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)this, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v31 + 24) = callback;
  v38 = (SePlayer_o **)(v31 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v31 + 24), (System_Int32_array **)callback, v39, v40, v41, v42, v43, v44);
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, v45);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v47);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v48);
  if ( overwriteSvtVoiceId )
    VoiceId = overwriteSvtVoiceId;
  if ( targetFileName )
  {
    if ( SvtEntity )
    {
LABEL_8:
      if ( uniqueId != -1 )
      {
        ActorVoice = this->fields.ActorVoice;
        if ( !ActorVoice )
          goto LABEL_29;
        if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
               (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)ActorVoice,
               uniqueId,
               (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
        {
          v51 = this->fields.ActorVoice;
          if ( !v51 )
            goto LABEL_29;
          if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v51,
                 uniqueId,
                 (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__) )
          {
            v52 = this->fields.ActorVoice;
            if ( !v52 )
              goto LABEL_29;
            Item = (SePlayer_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v52,
                                   uniqueId,
                                   (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
            if ( !Item )
              goto LABEL_29;
            SePlayer__StopSe(Item, 0.0, 0LL);
          }
        }
      }
      LastActorVoice = this->fields.LastActorVoice;
      if ( LastActorVoice )
      {
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)LastActorVoice,
          uniqueId,
          (WarBoardAIRoute_RouteData_o *)voiceTypeId,
          (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
        v55 = &StringLiteral_9565/*"NoblePhantasm/"*/;
        if ( !isNp )
          v55 = &StringLiteral_12676/*"Servants/"*/;
        v56 = (System_String_o *)*v55;
        v57 = System_Int32__ToString((int32_t)&VoiceId, 0LL);
        v58 = System_String__Concat_43743732(v56, v57, 0LL);
        v59 = this->fields.ActorVoice;
        v60 = v58;
        v65 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v61, v62, v63, v64);
        System_Action___ctor(
          v65,
          (Il2CppObject *)v31,
          Method_ServantAssetLoadManager___c__DisplayClass134_0__playBattleVoicelocal_b__0__,
          0LL);
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        v66 = SoundManager__playVoice_24824004(v60, targetFileName, volume, v65, 0LL);
        if ( v59 )
        {
          System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v59,
            uniqueId,
            (WarBoardAIRoute_RouteData_o *)v66,
            (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__);
          v67 = this->fields.ActorVoice;
          if ( v67 )
            return (SePlayer_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v67,
                                   uniqueId,
                                   (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        }
      }
LABEL_29:
      sub_B170D4();
    }
  }
  else
  {
    v70 = VoicePrefix;
    v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
    targetFileName = System_String__Format_43739268(
                       (System_String_o *)StringLiteral_23405/*"{0:D0}_{1}"*/,
                       v69,
                       (Il2CppObject *)voiceTypeId,
                       0LL);
    if ( SvtEntity )
      goto LABEL_8;
  }
  result = *v38;
  if ( *v38 )
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
  if ( (byte_40F9451 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly);
    sub_B16FFC(&StringLiteral_12680/*"Servants/Motion/"*/, v4);
    byte_40F9451 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_43743732((System_String_o *)StringLiteral_12680/*"Servants/Motion/"*/, v6, 0LL);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F942B & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, isForce);
    byte_40F942B = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_B170D4();
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
  System_String_o *ActorFolderName_23802084; // x0
  const MethodInfo *v15; // x3
  int32_t v16; // w0

  if ( (byte_40F942C & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_40F942C = 1;
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
      ActorFolderName_23802084 = ServantAssetLoadManager__getActorFolderName_23802084(v13, *(const MethodInfo **)&svtId);
      goto LABEL_24;
    }
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    v16 = appearanceId;
  }
  ActorFolderName_23802084 = ServantAssetLoadManager__getActorFolderName(
                               v16,
                               limitCount,
                               *(const MethodInfo **)&limitCount);
LABEL_24:
  if ( !this )
    sub_B170D4();
  ServantAssetLoadManager__setLoadList(this, ActorFolderName_23802084, dlOnly, v15);
}


System_String_array *__fastcall ServantAssetLoadManager__preloadBattleCommonEffect(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40F9447 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_40F9447 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return ServantAssetLoadManager__preloadBattleCommonEffectLocal(Instance, effectIdList, v4);
}


System_String_array *__fastcall ServantAssetLoadManager__preloadBattleCommonEffectLocal(
        ServantAssetLoadManager_o *this,
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  System_String_array *BattleCommonEffectPathList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  __int64 v9; // x8
  System_String_array *v10; // x20
  unsigned __int64 v11; // x21

  if ( (byte_40F9448 & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, effectIdList);
    byte_40F9448 = 1;
  }
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  BattleCommonEffectPathList = BattleEffectUtility__GetBattleCommonEffectPathList(effectIdList, 0LL);
  if ( !BattleCommonEffectPathList )
    sub_B170D4();
  v9 = *(_QWORD *)&BattleCommonEffectPathList->max_length;
  v10 = BattleCommonEffectPathList;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)v9 )
      {
        sub_B17100(BattleCommonEffectPathList, v6, v7);
        sub_B170A0();
      }
      ServantAssetLoadManager__setLoadList(this, v10->m_Items[v11], 0, v8);
      LODWORD(v9) = v10->max_length;
      ++v11;
    }
    while ( (__int64)v11 < (int)v9 );
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadCameraAction(int32_t cameraId, bool dlOnly, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  ServantAssetLoadManager_o *Instance; // x21
  System_String_o *CameraActionPath; // x0
  const MethodInfo *v9; // x3

  if ( (byte_40F946D & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, dlOnly);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    byte_40F946D = 1;
  }
  if ( cameraId )
  {
    Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, v6);
    if ( !Instance )
      sub_B170D4();
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

  if ( (byte_40F93FE & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_40F93FE = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F93FF & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_40F93FF = 1;
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


// local variable allocation has failed, the output may be wrong!
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

  v6 = this;
  if ( (byte_40F9476 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_B16FFC(&ServantAssetLoadManager_TypeInfo, commandCodeIds);
    byte_40F9476 = 1;
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
          sub_B17100(this, commandCodeIds, dlOnly);
          sub_B170A0();
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

  if ( (byte_40F9424 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_40F9424 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x0
  CommandSpellEntity_o *Entitys_WarQuestSelectionEntity; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x8
  CommandSpellEntity_o *v14; // x20
  unsigned __int64 v15; // x24
  struct System_String_o **p_name; // x25
  CommandSpellEntity_o *v17; // x0
  SoundManager_o *v18; // x21
  CommandSpellEntity_o *v19; // x0
  System_String_o *VoiceAssetName; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Action_o *v25; // x23

  if ( (byte_40F9425 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandSpellMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_getEntitys_CommandSpellEntity___, v4);
    sub_B16FFC(&Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v7);
    byte_40F9425 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL
    || (Entitys_WarQuestSelectionEntity = (CommandSpellEntity_o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_CommandSpellEntity___)) == 0LL )
  {
LABEL_21:
    sub_B170D4();
  }
  v13 = *(_QWORD *)&Entitys_WarQuestSelectionEntity->fields.type;
  v14 = Entitys_WarQuestSelectionEntity;
  if ( (int)v13 >= 1 )
  {
    v15 = 0LL;
    p_name = &Entitys_WarQuestSelectionEntity->fields.name;
    do
    {
      if ( v15 >= (unsigned int)v13 )
      {
LABEL_20:
        sub_B17100(Entitys_WarQuestSelectionEntity, v11, v12);
        sub_B170A0();
      }
      Entitys_WarQuestSelectionEntity = (CommandSpellEntity_o *)p_name[v15];
      if ( Entitys_WarQuestSelectionEntity )
      {
        Entitys_WarQuestSelectionEntity = (CommandSpellEntity_o *)CommandSpellEntity__isUseBattle(
                                                                    Entitys_WarQuestSelectionEntity,
                                                                    0LL);
        if ( ((unsigned __int8)Entitys_WarQuestSelectionEntity & 1) != 0 )
        {
          if ( v15 >= (unsigned int)v14->fields.type )
            goto LABEL_20;
          v17 = (CommandSpellEntity_o *)p_name[v15];
          if ( !v17 )
            goto LABEL_21;
          Entitys_WarQuestSelectionEntity = (CommandSpellEntity_o *)CommandSpellEntity__getVoiceAssetName(v17, 0LL);
          if ( Entitys_WarQuestSelectionEntity )
          {
            ++this->fields.soundCount;
            Entitys_WarQuestSelectionEntity = (CommandSpellEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
            if ( v15 >= (unsigned int)v14->fields.type )
              goto LABEL_20;
            v18 = (SoundManager_o *)Entitys_WarQuestSelectionEntity;
            v19 = (CommandSpellEntity_o *)p_name[v15];
            if ( !v19 )
              goto LABEL_21;
            VoiceAssetName = CommandSpellEntity__getVoiceAssetName(v19, 0LL);
            v25 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v21, v22, v23, v24);
            System_Action___ctor(
              v25,
              (Il2CppObject *)this,
              Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__,
              0LL);
            if ( !v18 )
              goto LABEL_21;
            SoundManager__LoadAudioAssetStorage(v18, VoiceAssetName, v25, 1, 0LL);
          }
        }
      }
      LODWORD(v13) = v14->fields.type;
      ++v15;
    }
    while ( (__int64)v15 < (int)v13 );
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

  if ( (byte_40F947D & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, dlOnly);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    byte_40F947D = 1;
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
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        sub_B170D4();
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

  if ( (byte_40F9419 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly);
    byte_40F9419 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F941C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_40F941C = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  __int64 v22; // x3
  __int64 v23; // x4
  System_Action_o *v24; // x0
  System_Action_o *v25; // x23
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F941D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__, v11);
    sub_B16FFC(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v13);
    sub_B16FFC(&StringLiteral_12683/*"Servants_"*/, v14);
    byte_40F941D = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v16 = overwriteSvtVoiceId;
  else
    v16 = VoiceId;
  v26 = v16;
  if ( v16 )
  {
    ++this->fields.soundCount;
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v18 = System_Int32__ToString((int32_t)&v26, 0LL);
    v19 = System_String__Concat_43743732((System_String_o *)StringLiteral_12683/*"Servants_"*/, v18, 0LL);
    v24 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v20, v21, v22, v23);
    v25 = v24;
    if ( dlOnly )
    {
      System_Action___ctor(
        v24,
        (Il2CppObject *)this,
        Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__,
        0LL);
      if ( Instance )
      {
        SoundManager__DownloadAudioAssetStorage(Instance, v19, v25, 1, 0LL);
        return;
      }
LABEL_13:
      sub_B170D4();
    }
    System_Action___ctor(
      v24,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__,
      0LL);
    if ( !Instance )
      goto LABEL_13;
    SoundManager__LoadAudioAssetStorage(Instance, v19, v25, 1, 0LL);
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
    sub_B170D4();
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

  if ( (byte_40F9420 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly);
    byte_40F9420 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  int32_t v17; // w0
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v19; // x21
  System_String_o *VoiceAssetName; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Action_o *v25; // x21
  SoundManager_o *Instance; // x20
  System_String_o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Action_o *v32; // x22

  if ( (byte_40F9421 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, skillInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_B16FFC(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__, v8);
    sub_B16FFC(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
    sub_B16FFC(&SoundManager_TypeInfo, v12);
    byte_40F9421 = 1;
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
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v14 = **(_QWORD **)(v13 + 192);
    if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
      sub_AAFCFC(v14);
    v15 = **(DataManager_o ***)(v14 + 184);
    if ( v15 )
    {
      MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                v15,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      v17 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
              skillInfo,
              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_WarQuestSelectionMaster )
      {
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v17, skillInfo->fields.skilllv, 0LL);
        if ( !Entity )
          return;
        v19 = Entity;
        if ( !SkillLvEntity__getVoiceAssetName(Entity, 0LL) )
          return;
        ++this->fields.soundCount;
        if ( dlOnly )
        {
          VoiceAssetName = SkillLvEntity__getVoiceAssetName(v19, 0LL);
          v25 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v21, v22, v23, v24);
          System_Action___ctor(
            v25,
            (Il2CppObject *)this,
            Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__,
            0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__downloadAudioAssetStorage(VoiceAssetName, v25, 1, 0LL);
          return;
        }
        Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        v27 = SkillLvEntity__getVoiceAssetName(v19, 0LL);
        v32 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v28, v29, v30, v31);
        System_Action___ctor(
          v32,
          (Il2CppObject *)this,
          Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__,
          0LL);
        if ( Instance )
        {
          SoundManager__LoadAudioAssetStorage(Instance, v27, v32, 1, 0LL);
          return;
        }
      }
    }
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x4

  if ( (byte_40F9406 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_40F9406 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F9407 & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_40F9407 = 1;
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
  if ( (byte_40F9442 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&effectFolder);
    sub_B16FFC(&StringLiteral_5845/*"Effect/weapon/"*/, v6);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v7);
    byte_40F9442 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v9 = System_Int32__ToString((int32_t)&v15, 0LL);
  v10 = v9;
  if ( !effectFolder )
  {
    v12 = System_String__Concat_43743732((System_String_o *)StringLiteral_5845/*"Effect/weapon/"*/, v9, 0LL);
    if ( Instance )
      goto LABEL_5;
LABEL_7:
    sub_B170D4();
  }
  v11 = System_Int32__ToString((int32_t)&v14, 0LL);
  v12 = System_String__Concat_43747144(
          (System_String_o *)StringLiteral_5845/*"Effect/weapon/"*/,
          v10,
          (System_String_o *)StringLiteral_871/*"/"*/,
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
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *nobleEffectList; // x0
  System_String_array *v38; // x0
  const MethodInfo *v39; // x2
  struct System_Collections_Generic_List_string__o *v40; // x0
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F9467 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetData___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v9);
    sub_B16FFC(&System_Collections_Generic_List_AssetData__TypeInfo, v10);
    byte_40F9467 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  nobleAssetData = this->fields.nobleAssetData;
  if ( nobleAssetData )
  {
    AssetData__RemoveEntry(nobleAssetData, 0LL);
    this->fields.nobleAssetData = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.nobleAssetData, 0LL, v12, v13, v14, v15, v16, v17);
  }
  nobleSequenceData = this->fields.nobleSequenceData;
  if ( nobleSequenceData )
  {
    AssetData__RemoveEntry(nobleSequenceData, 0LL);
    this->fields.nobleSequenceData = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.nobleSequenceData, 0LL, v19, v20, v21, v22, v23, v24);
  }
  bgAssetDataList = this->fields.bgAssetDataList;
  if ( bgAssetDataList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v41,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bgAssetDataList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v41,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      if ( !v41.fields.current )
        sub_B170D4();
      AssetData__RemoveEntry((AssetData_o *)v41.fields.current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v41,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_AssetData__TypeInfo,
                                                                                                    v26,
                                                                                                    v27,
                                                                                                    v28,
                                                                                                    v29);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v30,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v30;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.bgAssetDataList,
      (System_Int32_array **)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  nobleEffectList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.nobleEffectList;
  if ( !nobleEffectList )
    goto LABEL_19;
  if ( nobleEffectList->fields._size < 1 )
    return;
  v38 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 nobleEffectList,
                                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal(this, v38, v39);
  v40 = this->fields.nobleEffectList;
  if ( !v40 )
LABEL_19:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v40,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__);
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
  __int64 v14; // x3
  __int64 v15; // x4
  AssetLoader_LoadEndDataHandler_o *v16; // x21
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  struct System_Collections_Generic_List_string__o *loadlist; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  AssetLoader_LoadEndDataHandler_o *v23; // x21
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v24; // x0

  if ( (byte_40F9412 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, path);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, v8);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B16FFC(&Method_ServantAssetLoadManager_endloadList__, v10);
    byte_40F9412 = 1;
  }
  if ( dlOnly )
  {
    downloadlist = this->fields.downloadlist;
    if ( downloadlist )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)downloadlist,
        (EventMissionProgressRequest_Argument_ProgressData_o *)path,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      v16 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v12, v13, v14, v15);
      AssetLoader_LoadEndDataHandler___ctor(
        v16,
        (Il2CppObject *)this,
        Method_ServantAssetLoadManager_endloadList__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__downloadAssetStorage(path, v16, 20, 0LL) )
        return;
      v24 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.downloadlist;
      if ( v24 )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v24,
          (WarBoardManager_TaskList_o *)path,
          (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__);
        return;
      }
    }
LABEL_18:
    sub_B170D4();
  }
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)loadedList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)path,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  loadlist = this->fields.loadlist;
  if ( !loadlist )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)loadlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)path,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v19, v20, v21, v22);
  AssetLoader_LoadEndDataHandler___ctor(v23, (Il2CppObject *)this, Method_ServantAssetLoadManager_endloadList__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_29953688(path, 20, v23, 0LL);
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

  if ( (byte_40F9413 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, path);
    byte_40F9413 = 1;
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

  if ( (byte_40F9454 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_40F9454 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  System_String_o *v8; // x0
  WarBoardManager_TaskList_o *v9; // x20
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = weapongroup;
  if ( (byte_40F9455 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&weapongroup);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, v5);
    sub_B16FFC(&StringLiteral_12680/*"Servants/Motion/"*/, v6);
    byte_40F9455 = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v12, 0LL);
  v8 = System_String__Concat_43743732((System_String_o *)StringLiteral_12680/*"Servants/Motion/"*/, v7, 0LL);
  if ( !this->fields.loadedList )
    goto LABEL_11;
  v9 = (WarBoardManager_TaskList_o *)v8;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)v8,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( loadedList )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadedList,
        v9,
        (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_7;
    }
LABEL_11:
    sub_B170D4();
  }
LABEL_7:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v9, 0LL);
  AssetManager__releaseAsset_29947376(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadAssets(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_40F946A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_40F946A = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  struct System_Collections_Generic_List_string__o *v11; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F946B & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_40F946B = 1;
  }
  memset(&v12, 0, sizeof(v12));
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)loadedList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v12.fields.current;
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
      AssetManager__releaseAsset_29947376(AssetStorage, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v11 = this->fields.loadedList;
  if ( !v11 )
LABEL_16:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall ServantAssetLoadManager__unloadBattleActor(ServantAssetArgs_o *args, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x4

  if ( (byte_40F9431 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_40F9431 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_B170D4();
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
  System_String_o *ActorFolderName; // x0
  WarBoardManager_TaskList_o *v13; // x20
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0

  if ( (byte_40F9432 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, v10);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v11);
    byte_40F9432 = 1;
  }
  if ( appearanceId < 1 )
    appearanceId = svtId;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ActorFolderName = ServantAssetLoadManager__getActorFolderName(
                      appearanceId,
                      limitCount,
                      *(const MethodInfo **)&limitCount);
  if ( !this->fields.loadedList )
    goto LABEL_16;
  v13 = (WarBoardManager_TaskList_o *)ActorFolderName;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)ActorFolderName,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( loadedList )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadedList,
        v13,
        (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_12;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_12:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v13, 0LL);
  AssetManager__releaseAsset_29947376(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadCameraAction(int32_t cameraId, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40F9470 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_40F9470 = 1;
  }
  if ( cameraId )
  {
    Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
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

  if ( (byte_40F9471 & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&cameraId);
    byte_40F9471 = 1;
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

  if ( (byte_40F9402 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_40F9402 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  System_String_o *CommandCardLoadFolderName; // x0
  WarBoardManager_TaskList_o *v10; // x20
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0

  if ( (byte_40F9403 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, v7);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v8);
    byte_40F9403 = 1;
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
  if ( !this->fields.loadedList )
    goto LABEL_14;
  v10 = (WarBoardManager_TaskList_o *)CommandCardLoadFolderName;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)CommandCardLoadFolderName,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( loadedList )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadedList,
        v10,
        (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_10;
    }
LABEL_14:
    sub_B170D4();
  }
LABEL_10:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v10, 0LL);
  AssetManager__releaseAsset_29947376(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadCommandSpellAnyVoice(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_40F9426 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_40F9426 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal(Instance, v3);
}


void __fastcall ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x0
  void *Entitys_WarQuestSelectionEntity; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int v10; // w8
  _DWORD *v11; // x19
  unsigned int i; // w21
  char *v13; // x23
  CommandSpellEntity_o *v14; // x0
  CommandSpellEntity_o **v15; // x23
  CommandSpellEntity_o *v16; // t1
  SoundManager_o *v17; // x20
  System_String_o *VoiceAssetName; // x0

  if ( (byte_40F9427 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandSpellMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_getEntitys_CommandSpellEntity___, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v4);
    byte_40F9427 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL
    || (Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                            MasterData_WarQuestSelectionMaster,
                                            (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_CommandSpellEntity___)) == 0LL )
  {
LABEL_21:
    sub_B170D4();
  }
  v10 = *((_DWORD *)Entitys_WarQuestSelectionEntity + 6);
  v11 = Entitys_WarQuestSelectionEntity;
  if ( v10 >= 1 )
  {
    for ( i = 0; (int)i < v10; ++i )
    {
      if ( i >= v10 )
      {
LABEL_20:
        sub_B17100(Entitys_WarQuestSelectionEntity, v8, v9);
        sub_B170A0();
      }
      v13 = (char *)&v11[2 * i];
      v16 = (CommandSpellEntity_o *)*((_QWORD *)v13 + 4);
      v15 = (CommandSpellEntity_o **)(v13 + 32);
      v14 = v16;
      if ( !v16 )
        return;
      Entitys_WarQuestSelectionEntity = (void *)CommandSpellEntity__isUseBattle(v14, 0LL);
      if ( ((unsigned __int8)Entitys_WarQuestSelectionEntity & 1) != 0 )
      {
        if ( i >= v11[6] )
          goto LABEL_20;
        if ( !*v15 )
          goto LABEL_21;
        Entitys_WarQuestSelectionEntity = CommandSpellEntity__getVoiceAssetName(*v15, 0LL);
        if ( Entitys_WarQuestSelectionEntity )
        {
          Entitys_WarQuestSelectionEntity = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
          if ( i >= v11[6] )
            goto LABEL_20;
          v17 = (SoundManager_o *)Entitys_WarQuestSelectionEntity;
          if ( !*v15 )
            goto LABEL_21;
          VoiceAssetName = CommandSpellEntity__getVoiceAssetName(*v15, 0LL);
          if ( !v17 )
            goto LABEL_21;
          SoundManager__ReleaseAudioAssetStorage(v17, VoiceAssetName, 0LL);
        }
      }
      v10 = v11[6];
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadFromDeckServant(
        BattleDeckServantData_o *deckSvt,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40F947E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_40F947E = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  System_String_o *NameEffectPath; // x0
  System_String_o *v12; // x20
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0

  if ( (byte_40F947F & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, deckSvt);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, v6);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v7);
    byte_40F947F = 1;
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
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v10, v9);
      if ( this->fields.loadedList )
      {
        v12 = NameEffectPath;
        if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
                (WarBoardManager_TaskList_o *)NameEffectPath,
                (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
LABEL_12:
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          AssetStorage = AssetManager__getAssetStorage(v12, 0LL);
          AssetManager__releaseAsset_29947376(AssetStorage, 0LL);
          return;
        }
        loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
        if ( loadedList )
        {
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            loadedList,
            (WarBoardManager_TaskList_o *)v12,
            (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__);
          goto LABEL_12;
        }
      }
      sub_B170D4();
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadServant(ServantAssetArgs_o *args, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40F941A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_40F941A = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F941E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_40F941E = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F941F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, *(_QWORD *)&svtId);
    sub_B16FFC(&StringLiteral_12683/*"Servants_"*/, v9);
    byte_40F941F = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v11 = overwriteSvtVoiceId;
  else
    v11 = VoiceId;
  v15 = v11;
  if ( v11 )
  {
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v13 = System_Int32__ToString((int32_t)&v15, 0LL);
    v14 = System_String__Concat_43743732((System_String_o *)StringLiteral_12683/*"Servants_"*/, v13, 0LL);
    if ( !Instance )
      sub_B170D4();
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
    sub_B170D4();
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

  if ( (byte_40F9422 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_40F9422 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  DataManager_o *v8; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int32_t v10; // w0
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v12; // x19
  SoundManager_o *Instance; // x20
  System_String_o *VoiceAssetName; // x0

  if ( (byte_40F9423 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v5);
    byte_40F9423 = 1;
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
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v7 = **(_QWORD **)(v6 + 192);
    if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
      sub_AAFCFC(v7);
    v8 = **(DataManager_o ***)(v7 + 184);
    if ( !v8 )
      goto LABEL_17;
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v8,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    v10 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
            skillInfo,
            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_17;
    Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v10, skillInfo->fields.skilllv, 0LL);
    if ( Entity )
    {
      v12 = Entity;
      if ( SkillLvEntity__getVoiceAssetName(Entity, 0LL) )
      {
        Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        VoiceAssetName = SkillLvEntity__getVoiceAssetName(v12, 0LL);
        if ( Instance )
        {
          SoundManager__ReleaseAudioAssetStorage(Instance, VoiceAssetName, 0LL);
          return;
        }
LABEL_17:
        sub_B170D4();
      }
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadSkillCutIn(BattleSkillInfoData_o *skillInfo, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40F9450 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_40F9450 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F940A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_40F940A = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  System_String_o *StatusImageFolderName; // x0
  WarBoardManager_TaskList_o *v13; // x20
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0

  if ( (byte_40F940B & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, v8);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v9);
    byte_40F940B = 1;
  }
  ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, method);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(svtId, v10, v11);
  if ( !this->fields.loadedList )
    goto LABEL_14;
  v13 = (WarBoardManager_TaskList_o *)StatusImageFolderName;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList,
         (WarBoardManager_TaskList_o *)StatusImageFolderName,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( loadedList )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadedList,
        v13,
        (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_10;
    }
LABEL_14:
    sub_B170D4();
  }
LABEL_10:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v13, 0LL);
  AssetManager__releaseAsset_29947376(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssetLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadedList; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v8; // x0
  AssetData_o *AssetStorage; // x0
  AssetData_o *v10; // x19

  if ( (byte_40F944C & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, path);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, v6);
    byte_40F944C = 1;
  }
  loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_16;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         loadedList,
         (WarBoardManager_TaskList_o *)path,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    v8 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( v8 )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        v8,
        (WarBoardManager_TaskList_o *)path,
        (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_7;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_7:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
  {
    v10 = AssetStorage;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29947376(v10, 0LL);
  }
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssets(
        System_String_array *pathList,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40F944B & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_40F944B = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  ServantAssetLoadManager__unloadTargetPathAssetsLocal(Instance, pathList, v4);
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssetsLocal(
        ServantAssetLoadManager_o *this,
        System_String_array *pathList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21

  if ( !pathList )
    sub_B170D4();
  v3 = *(_QWORD *)&pathList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
      {
        sub_B17100(this, pathList, method);
        sub_B170A0();
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

  if ( (byte_40F9445 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&effectFolder);
    byte_40F9445 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v14; // x0
  AssetData_o *AssetStorage; // x0
  int32_t v16; // [xsp+8h] [xbp-18h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-14h] BYREF

  v16 = effectFolder;
  v17 = weapongroup;
  if ( (byte_40F9446 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&weapongroup);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, v7);
    sub_B16FFC(&StringLiteral_5845/*"Effect/weapon/"*/, v8);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v9);
    byte_40F9446 = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v17, 0LL);
  v11 = System_String__Concat_43743732((System_String_o *)StringLiteral_5845/*"Effect/weapon/"*/, v10, 0LL);
  if ( effectFolder )
  {
    v12 = System_Int32__ToString((int32_t)&v16, 0LL);
    v11 = System_String__Concat_43746016(v11, (System_String_o *)StringLiteral_871/*"/"*/, v12, 0LL);
  }
  loadedList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_13;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         loadedList,
         (WarBoardManager_TaskList_o *)v11,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    v14 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedList;
    if ( v14 )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        v14,
        (WarBoardManager_TaskList_o *)v11,
        (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_9;
    }
LABEL_13:
    sub_B170D4();
  }
LABEL_9:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v11, 0LL);
  AssetManager__releaseAsset_29947376(AssetStorage, 0LL);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  struct WellFired_USFGOChangeBgEvent_array *bgList; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_bgAheadList_5__2; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x0
  WellFired_USFGOChangeBgEvent_o *v34; // x1
  __int64 v35; // x2
  struct WellFired_USFGOChangeBgEvent_array *v36; // x22
  int max_length; // w8
  unsigned int v38; // w23
  System_String_o *v39; // x1
  System_String_o *v40; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  AssetLoader_LoadEndDataHandler_o *v45; // x23
  Il2CppClass *klass; // x9
  System_Action_o *callback; // x0
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v49; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F7607 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetData__get_Count__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__get_Count__, v16);
    sub_B16FFC(&System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo, v17);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v18);
    sub_B16FFC(&Method_ServantAssetLoadManager__GetAheadBg_b__154_0__, v19);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v20);
    sub_B16FFC(&StringLiteral_2791/*"Bg/"*/, v21);
    byte_40F7607 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  _1__state = this->fields.__1__state;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_bgAheadList_5__2 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields._bgAheadList_5__2;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    bgList = this->fields.bgList;
    this->fields.__1__state = -1;
    if ( !bgList )
    {
LABEL_30:
      callback = this->fields.callback;
      if ( !callback )
        goto LABEL_33;
      System_Action__Invoke(callback, 0LL);
      return 0;
    }
    v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo,
                                                                                                    method,
                                                                                                    v2,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v25,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__);
    this->fields._bgAheadList_5__2 = (struct System_Collections_Generic_List_USFGOChangeBgEvent__o *)v25;
    p_bgAheadList_5__2 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields._bgAheadList_5__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._bgAheadList_5__2,
      (System_Int32_array **)v25,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    v36 = this->fields.bgList;
    if ( !v36 )
      goto LABEL_33;
    max_length = v36->max_length;
    if ( max_length >= 1 )
    {
      v38 = 0;
      while ( 1 )
      {
        if ( v38 >= max_length )
        {
          sub_B17100(v33, v34, v35);
          sub_B170A0();
        }
        v34 = v36->m_Items[v38];
        if ( !v34 )
          break;
        if ( BYTE1(v34->fields.bgName) )
        {
          if ( !*p_bgAheadList_5__2 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            *p_bgAheadList_5__2,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__);
        }
        max_length = v36->max_length;
        if ( (int)++v38 >= max_length )
          goto LABEL_15;
      }
LABEL_33:
      sub_B170D4();
    }
LABEL_15:
    if ( !*p_bgAheadList_5__2 )
      goto LABEL_33;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v57,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*p_bgAheadList_5__2,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__);
    v58 = v57;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v58,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__) )
    {
      if ( !v58.fields.current )
        sub_B170D4();
      v39 = (System_String_o *)((__int64 (*)(void))v58.fields.current->klass->vtable[16].method)();
      v40 = System_String__Concat_43743732((System_String_o *)StringLiteral_2791/*"Bg/"*/, v39, 0LL);
      v45 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v41, v42, v43, v44);
      AssetLoader_LoadEndDataHandler___ctor(v45, _4__this, Method_ServantAssetLoadManager__GetAheadBg_b__154_0__, 0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__loadAssetStorage(v40, v45, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v58,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__);
  }
  if ( !*p_bgAheadList_5__2 )
    goto LABEL_33;
  if ( !_4__this )
    goto LABEL_33;
  klass = _4__this[7].klass;
  if ( !klass )
    goto LABEL_33;
  if ( (*p_bgAheadList_5__2)->fields._size == LODWORD(klass->_1.namespaze) )
  {
    *p_bgAheadList_5__2 = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_bgAheadList_5__2, 0LL, v2, v3, v4, v5, v6, v7);
    goto LABEL_30;
  }
  v49 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3, v4);
  UnityEngine_WaitForEndOfFrame___ctor(v49, 0LL);
  this->fields.__2__current = (Il2CppObject *)v49;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v49, v51, v52, v53, v54, v55, v56);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_ServantAssetLoadManager__GetAheadBg_d__154_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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

  if ( (byte_40F7605 & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager___c_TypeInfo, v1);
    byte_40F7605 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantAssetLoadManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantAssetLoadManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ServantAssetLoadManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  _4__this->fields.nobleSequenceData = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.nobleSequenceData,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isNext = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager___c__DisplayClass152_0___loadNoblePhantasmCoroutine_b__1(
        ServantAssetLoadManager___c__DisplayClass152_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct ServantAssetLoadManager_o *_4__this; // x0
  ServantAssetLoadManager_o *v17; // x0
  UnityEngine_Texture2D_o *AssetObject_Texture2D; // x20
  struct UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o **p_sequence; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v28; // x21
  UnityEngine_Transform_o *v29; // x0
  UnityEngine_Transform_o *v30; // x21
  int v31; // s0
  UnityEngine_Transform_o *v34; // x21
  int v35; // s0
  UnityEngine_Transform_o *v38; // x21
  int v39; // s0
  changeVColor_array *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Action_o *_9__2; // x22
  WellFired_USFGOChangeBgEvent_array *v48; // x20
  ServantAssetLoadManager_o *v49; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_40F7606 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, assetData);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___, v10);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v13);
    sub_B16FFC(&Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__2__, v14);
    sub_B16FFC(&StringLiteral_3945/*"ChrSequence1"*/, v15);
    byte_40F7606 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  _4__this->fields.nobleAssetData = assetData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.nobleAssetData,
    (System_Int32_array **)assetData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_23;
  AssetObject_Texture2D = ServantAssetLoadManager__getAssetObject_Texture2D_(
                            v17,
                            this->fields.sequencePath,
                            (System_String_o *)StringLiteral_3945/*"ChrSequence1"*/,
                            (const MethodInfo_19E221C *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v19 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetObject_Texture2D,
                                             (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.sequence = v19;
  p_sequence = &this->fields.sequence;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sequence,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( !this->fields.sequence )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(this->fields.sequence, 0, 0LL);
  if ( !*p_sequence )
    goto LABEL_23;
  transform = UnityEngine_GameObject__get_transform(*p_sequence, 0LL);
  if ( !this->fields.parent )
    goto LABEL_23;
  v28 = transform;
  v29 = UnityEngine_GameObject__get_transform(this->fields.parent, 0LL);
  if ( !v28 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent(v28, v29, 0LL);
  if ( !*p_sequence )
    goto LABEL_23;
  v30 = UnityEngine_GameObject__get_transform(*p_sequence, 0LL);
  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v30 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(v30, *(UnityEngine_Vector3_o *)&v31, 0LL);
  if ( !*p_sequence )
    goto LABEL_23;
  v34 = UnityEngine_GameObject__get_transform(*p_sequence, 0LL);
  *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Vector3__get_up(0LL);
  if ( !v34 )
    goto LABEL_23;
  UnityEngine_Transform__set_eulerAngles(v34, *(UnityEngine_Vector3_o *)&v35, 0LL);
  if ( !*p_sequence )
    goto LABEL_23;
  v38 = UnityEngine_GameObject__get_transform(*p_sequence, 0LL);
  *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_one(0LL);
  if ( !v38 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(v38, *(UnityEngine_Vector3_o *)&v39, 0LL);
  if ( !*p_sequence )
    goto LABEL_23;
  v42 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
          *p_sequence,
          (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___);
  _9__2 = this->fields.__9__2;
  v48 = (WellFired_USFGOChangeBgEvent_array *)v42;
  v49 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v43, v44, v45, v46);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( !v49 )
LABEL_23:
    sub_B170D4();
  ServantAssetLoadManager__LoadBg(v49, v48, _9__2, 0LL);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  struct ServantAssetLoadManager_o *_4__this; // x21
  Il2CppObject *v35; // x22
  struct ServantAssetLoadManager___c__DisplayClass152_0_o **p__8__1; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *_8__1; // x0
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v57; // x0
  System_Int32_array **parent; // x1
  TreasureDeviceSequenceWeightMaster_o *Master_WarQuestSelectionMaster; // x0
  TreasureDeviceSequenceWeightEntity_o *EntityWithCommonPattern; // x0
  System_Tuple_int__int__o *SeqIdAndGroupSeqId; // x0
  int m_Item1; // w8
  int32_t m_Item2; // w9
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v64; // x8
  struct ServantAssetLoadManager___c__DisplayClass152_0_o **v65; // x24
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v66; // x0
  System_String_o *v67; // x20
  Il2CppObject *v68; // x23
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  AssetLoader_LoadEndDataHandler_o *v73; // x22
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v74; // x8
  UnityEngine_Object_o *sequence; // x20
  __int64 v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Collections_Generic_List_int__o *v83; // x20
  WebViewManager_o *Instance; // x0
  TreasureDvcLvMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *funcId; // x20
  int32_t FieldHpDamageSpecialInvincibleEffectId; // w0
  __int64 v88; // x2
  int32_t v89; // w20
  System_Int32_array *v90; // x0
  __int64 v91; // x2
  System_Int32_array *v92; // x1
  UnityEngine_GameObject_o *v93; // x0
  int max_length; // w8
  System_Int32_array *v95; // x20
  __int64 v96; // x22
  WellFired_USFGOActorBattleActionEvent_o *v97; // x0
  System_Int32_array *v98; // x0
  System_Collections_Generic_IEnumerable_T__o *Manager__preloadBattleCommonEffectLocal; // x0
  Il2CppObject **p__2__current; // x19
  int v101; // w8
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v102; // x8
  UnityEngine_GameObject_o *v103; // x21
  ServantAssetLoadManager_onGameObjectLoadComplete_o *callback; // x20
  int32_t seqIdFromMstTDSeqWeight_5__2; // w22
  int32_t groupSeqIdFromMstTDSeqWeight_5__3; // w23
  System_Tuple_int__int__o *v107; // x19
  const MethodInfo *v108; // x3
  bool result; // w0
  DataMasterBase_WarMaster__WarEntity__int__o *v110; // x0
  bool IsRandomTD; // w0
  int32_t limitCount; // w1
  int32_t RandomSeqIdEachLimit; // w0
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v114; // x21
  System_String_o *v115; // x0
  System_Int32_array **v116; // x0
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_String_o *v123; // x0
  struct System_String_o *v124; // x0
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v131; // x8
  System_String_o *sequencePath; // x22
  struct ServantAssetLoadManager___c__DisplayClass152_0_o *v133; // x22
  System_String_o *v134; // x0
  System_Int32_array **v135; // x0
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_String_o *nobleDataPath_5__4; // x22
  __int64 v143; // x1
  __int64 v144; // x2
  __int64 v145; // x3
  __int64 v146; // x4
  System_String_o *v147; // x0
  struct System_String_o *v148; // x0
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  Il2CppObject *v155; // x23
  System_String_o *monitor; // x21
  AssetLoader_LoadEndDataHandler_o *v157; // x22
  _BOOL4 isNext; // w20
  TreasureDvcLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_int__o *effectIdList; // [xsp+10h] [xbp-50h] BYREF
  WarEntity_o *v161; // [xsp+18h] [xbp-48h] BYREF
  int v162; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_40F7608 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_TreasureDvcMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___, v15);
    sub_B16FFC(&int___TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__AddRange__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v21);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v22);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B16FFC(&Method_System_Tuple_int__int___ctor__, v25);
    sub_B16FFC(&Method_System_Tuple_int__int__get_Item1__, v26);
    sub_B16FFC(&Method_System_Tuple_int__int__get_Item2__, v27);
    sub_B16FFC(&System_Tuple_int__int__TypeInfo, v28);
    sub_B16FFC(&Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__0__, v29);
    sub_B16FFC(&Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__1__, v30);
    sub_B16FFC(&ServantAssetLoadManager___c__DisplayClass152_0_TypeInfo, v31);
    sub_B16FFC(&StringLiteral_9565/*"NoblePhantasm/"*/, v32);
    sub_B16FFC(&StringLiteral_9567/*"NoblePhantasm/Sequence/"*/, v33);
    byte_40F7608 = 1;
  }
  v162 = 0;
  effectIdList = 0LL;
  v161 = 0LL;
  entity = 0LL;
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v35 = (Il2CppObject *)sub_B170CC(ServantAssetLoadManager___c__DisplayClass152_0_TypeInfo, method, v2, v3, v4);
      System_Object___ctor(v35, 0LL);
      p__8__1 = &this->fields.__8__1;
      this->fields.__8__1 = (struct ServantAssetLoadManager___c__DisplayClass152_0_o *)v35;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__8__1,
        (System_Int32_array **)v35,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      _8__1 = this->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_108;
      v50 = (System_Int32_array **)this->fields.__4__this;
      _8__1->fields.__4__this = (struct ServantAssetLoadManager_o *)v50;
      sub_B16F98((BattleServantConfConponent_o *)&_8__1->fields, v50, v43, v44, v45, v46, v47, v48);
      v57 = this->fields.__8__1;
      if ( !v57 )
        goto LABEL_108;
      parent = (System_Int32_array **)this->fields.parent;
      v57->fields.parent = (struct UnityEngine_GameObject_o *)parent;
      sub_B16F98((BattleServantConfConponent_o *)&v57->fields.parent, parent, v51, v52, v53, v54, v55, v56);
      if ( !*p__8__1 )
        goto LABEL_108;
      (*p__8__1)->fields.isNext = 0;
      if ( !_4__this )
        goto LABEL_108;
      ServantAssetLoadManager__releaseNoblePhantasm(_4__this, 0LL);
      *(_QWORD *)&this->fields._seqIdFromMstTDSeqWeight_5__2 = 0LL;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (TreasureDeviceSequenceWeightMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_108;
      EntityWithCommonPattern = TreasureDeviceSequenceWeightMaster__GetEntityWithCommonPattern(
                                  Master_WarQuestSelectionMaster,
                                  this->fields.treasureDvcId,
                                  this->fields.limitCount,
                                  this->fields.npChargeStage,
                                  0LL);
      if ( !EntityWithCommonPattern )
        goto LABEL_70;
      SeqIdAndGroupSeqId = TreasureDeviceSequenceWeightEntity__GetSeqIdAndGroupSeqId(EntityWithCommonPattern, 0LL);
      if ( !SeqIdAndGroupSeqId )
        goto LABEL_108;
      m_Item1 = SeqIdAndGroupSeqId->fields.m_Item1;
      if ( m_Item1 >= 1 )
      {
        this->fields._seqIdFromMstTDSeqWeight_5__2 = m_Item1;
        m_Item2 = SeqIdAndGroupSeqId->fields.m_Item2;
        if ( m_Item2 >= 1 )
          this->fields._groupSeqIdFromMstTDSeqWeight_5__3 = m_Item2;
        goto LABEL_80;
      }
      m_Item1 = this->fields._seqIdFromMstTDSeqWeight_5__2;
      if ( m_Item1 >= 1 )
        goto LABEL_80;
LABEL_70:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v110 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
      if ( !v110 )
        goto LABEL_108;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v110,
              &v161,
              this->fields.treasureDvcId,
              (const MethodInfo_266F3E4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
      {
        m_Item1 = this->fields.treasureDvcId;
LABEL_80:
        v162 = m_Item1;
        goto LABEL_83;
      }
      if ( !v161 )
        goto LABEL_108;
      IsRandomTD = TreasureDvcEntity__IsRandomTD((TreasureDvcEntity_o *)v161, 0LL);
      if ( !v161 )
        goto LABEL_108;
      limitCount = this->fields.limitCount;
      if ( IsRandomTD )
        RandomSeqIdEachLimit = TreasureDvcEntity__getRandomSeqIdEachLimit(
                                 (TreasureDvcEntity_o *)v161,
                                 limitCount,
                                 0,
                                 0LL);
      else
        RandomSeqIdEachLimit = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)v161, limitCount, 0LL);
      v162 = RandomSeqIdEachLimit;
LABEL_83:
      v114 = *p__8__1;
      v115 = System_Int32__ToString((int32_t)&v162, 0LL);
      v116 = (System_Int32_array **)System_String__Concat_43743732((System_String_o *)StringLiteral_9567/*"NoblePhantasm/Sequence/"*/, v115, 0LL);
      if ( !v114 )
        goto LABEL_108;
      v114->fields.sequencePath = (struct System_String_o *)v116;
      sub_B16F98((BattleServantConfConponent_o *)&v114->fields.sequencePath, v116, v117, v118, v119, v120, v121, v122);
      v123 = System_Int32__ToString((int32_t)&v162, 0LL);
      v124 = System_String__Concat_43743732((System_String_o *)StringLiteral_9565/*"NoblePhantasm/"*/, v123, 0LL);
      this->fields._nobleDataPath_5__4 = v124;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._nobleDataPath_5__4,
        (System_Int32_array **)v124,
        v125,
        v126,
        v127,
        v128,
        v129,
        v130);
      v131 = this->fields.__8__1;
      if ( !v131 )
        goto LABEL_108;
      sequencePath = v131->fields.sequencePath;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( !AssetManager__isExistAssetStorage(sequencePath, 0LL) )
      {
        v133 = this->fields.__8__1;
        v134 = System_Int32__ToString((int)this + 60, 0LL);
        v135 = (System_Int32_array **)System_String__Concat_43743732((System_String_o *)StringLiteral_9567/*"NoblePhantasm/Sequence/"*/, v134, 0LL);
        if ( !v133 )
          goto LABEL_108;
        v133->fields.sequencePath = (struct System_String_o *)v135;
        sub_B16F98((BattleServantConfConponent_o *)&v133->fields.sequencePath, v135, v136, v137, v138, v139, v140, v141);
      }
      nobleDataPath_5__4 = this->fields._nobleDataPath_5__4;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( !AssetManager__isExistAssetStorage(nobleDataPath_5__4, 0LL) )
      {
        v147 = System_Int32__ToString((int)this + 60, 0LL);
        v148 = System_String__Concat_43743732((System_String_o *)StringLiteral_9565/*"NoblePhantasm/"*/, v147, 0LL);
        this->fields._nobleDataPath_5__4 = v148;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._nobleDataPath_5__4,
          (System_Int32_array **)v148,
          v149,
          v150,
          v151,
          v152,
          v153,
          v154);
      }
      if ( !*p__8__1 )
        goto LABEL_108;
      (*p__8__1)->fields.isNext = 0;
      v155 = (Il2CppObject *)*p__8__1;
      if ( !*p__8__1 )
        goto LABEL_108;
      monitor = (System_String_o *)v155[2].monitor;
      v157 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(
                                                   AssetLoader_LoadEndDataHandler_TypeInfo,
                                                   v143,
                                                   v144,
                                                   v145,
                                                   v146);
      AssetLoader_LoadEndDataHandler___ctor(
        v157,
        v155,
        Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__0__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__loadAssetStorage(monitor, v157, 1, 0LL);
LABEL_102:
      if ( !*p__8__1 )
        goto LABEL_108;
      isNext = (*p__8__1)->fields.isNext;
      this->fields.__2__current = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      if ( !isNext )
      {
        result = 1;
        this->fields.__1__state = 1;
        return result;
      }
      this->fields.__1__state = 2;
      return 1;
    case 1:
      p__8__1 = &this->fields.__8__1;
      this->fields.__1__state = -1;
      goto LABEL_102;
    case 2:
      v65 = &this->fields.__8__1;
      v64 = this->fields.__8__1;
      this->fields.__1__state = -1;
      if ( !v64 )
        goto LABEL_108;
      v64->fields.isNext = 0;
      v66 = *v65;
      if ( !*v65 )
        goto LABEL_108;
      v66->fields.sequence = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&v66->fields.sequence, 0LL, v2, v3, v4, v5, v6, v7);
      v67 = this->fields._nobleDataPath_5__4;
      v68 = (Il2CppObject *)this->fields.__8__1;
      v73 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v69, v70, v71, v72);
      AssetLoader_LoadEndDataHandler___ctor(
        v73,
        v68,
        Method_ServantAssetLoadManager___c__DisplayClass152_0__loadNoblePhantasmCoroutine_b__1__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__loadAssetStorage(v67, v73, 1, 0LL);
LABEL_25:
      v74 = *v65;
      if ( !*v65 )
        goto LABEL_108;
      if ( v74->fields.isNext )
      {
        sequence = (UnityEngine_Object_o *)v74->fields.sequence;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(sequence, 0LL, 0LL) )
          goto LABEL_61;
        v83 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v76,
                                                          v77,
                                                          v78,
                                                          v79);
        System_Collections_Generic_List_int____ctor(
          v83,
          (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
        effectIdList = v83;
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_108;
        MasterData_WarQuestSelectionMaster = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_108;
        if ( TreasureDvcLvMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               this->fields.treasureDvcId,
               this->fields.treasureDvcLv,
               0LL) )
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
          if ( !entity )
LABEL_108:
            sub_B170D4();
          FieldHpDamageSpecialInvincibleEffectId = TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
                                                     entity,
                                                     0LL);
          if ( FieldHpDamageSpecialInvincibleEffectId >= 1 )
          {
            v89 = FieldHpDamageSpecialInvincibleEffectId;
            v90 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v88);
            if ( !v90 )
              goto LABEL_108;
            v92 = v90;
            if ( !v90->max_length )
            {
LABEL_109:
              sub_B17100(v90, v92, v91);
              sub_B170A0();
            }
            v90->m_Items[1] = v89;
            if ( !_4__this )
              goto LABEL_108;
            ServantAssetLoadManager__preloadBattleCommonEffectLocal(_4__this, v90, 0LL);
          }
        }
        if ( !*v65 )
          goto LABEL_108;
        v93 = (*v65)->fields.sequence;
        if ( !v93 )
          goto LABEL_108;
        v90 = (System_Int32_array *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                                      v93,
                                      (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
        if ( v90 )
        {
          max_length = v90->max_length;
          v95 = v90;
          if ( max_length >= 1 )
          {
            v96 = 0LL;
            while ( (unsigned int)v96 < max_length )
            {
              v97 = *(WellFired_USFGOActorBattleActionEvent_o **)&v95->m_Items[2 * v96 + 1];
              if ( !v97 )
                goto LABEL_108;
              WellFired_USFGOActorBattleActionEvent__AddHasAllEffectIds(v97, &effectIdList, 0LL);
              max_length = v95->max_length;
              if ( (int)++v96 >= max_length )
                goto LABEL_52;
            }
            goto LABEL_109;
          }
        }
LABEL_52:
        if ( !effectIdList )
          goto LABEL_108;
        v98 = System_Collections_Generic_List_int___ToArray(
                effectIdList,
                (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !_4__this )
          goto LABEL_108;
        Manager__preloadBattleCommonEffectLocal = (System_Collections_Generic_IEnumerable_T__o *)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                                                                                   _4__this,
                                                                                                   v98,
                                                                                                   0LL);
        if ( !_4__this->fields.nobleEffectList )
          goto LABEL_108;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)_4__this->fields.nobleEffectList,
          Manager__preloadBattleCommonEffectLocal,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_string__AddRange__);
LABEL_56:
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        if ( ServantAssetLoadManager__checkLoad(0LL) )
        {
          this->fields.__2__current = 0LL;
          p__2__current = &this->fields.__2__current;
          sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v77, v78, v79, v80, v81, v82);
          v101 = 4;
        }
        else
        {
LABEL_61:
          this->fields.__2__current = 0LL;
          p__2__current = &this->fields.__2__current;
          sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v77, v78, v79, v80, v81, v82);
          v101 = 5;
        }
      }
      else
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        v101 = 3;
      }
      *((_DWORD *)p__2__current - 2) = v101;
      return 1;
    case 3:
      v65 = &this->fields.__8__1;
      this->fields.__1__state = -1;
      goto LABEL_25;
    case 4:
      this->fields.__1__state = -1;
      goto LABEL_56;
    case 5:
      v102 = this->fields.__8__1;
      this->fields.__1__state = -1;
      if ( !v102 )
        goto LABEL_108;
      v103 = v102->fields.sequence;
      callback = this->fields.callback;
      seqIdFromMstTDSeqWeight_5__2 = this->fields._seqIdFromMstTDSeqWeight_5__2;
      groupSeqIdFromMstTDSeqWeight_5__3 = this->fields._groupSeqIdFromMstTDSeqWeight_5__3;
      v107 = (System_Tuple_int__int__o *)sub_B170CC(System_Tuple_int__int__TypeInfo, method, v2, v3, v4);
      System_Tuple_int__int____ctor(
        v107,
        seqIdFromMstTDSeqWeight_5__2,
        groupSeqIdFromMstTDSeqWeight_5__3,
        (const MethodInfo_25418C0 *)Method_System_Tuple_int__int___ctor__);
      if ( !callback )
        goto LABEL_108;
      ServantAssetLoadManager_onGameObjectLoadComplete__Invoke(callback, v103, v107, v108);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__152_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, v7, callback, object);
}


void __fastcall ServantAssetLoadManager_onGameObjectLoadComplete__EndInvoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v29->fields.extra_arg, obj, paramsFromMstTDSeqWeight);
      v33 = sub_B1702C(v30);
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
            v42 = sub_B17024(v30);
            v43 = sub_B17428(v30);
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
                  v25 = sub_AAFEF8(obj, v45, v46);
                }
                v17 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&obj->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))sub_B170AC(v17, v30);
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
                  v16 = sub_AAFEF8(obj, class_0, v11);
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
          v35 = sub_B17024(v30);
          v36 = sub_B17428(v30);
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
                v27 = sub_AAFEF8(v31, v38, v39);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))sub_B170AC(v24, v30);
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
                v23 = sub_AAFEF8(v31, v19, v18);
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