void __fastcall MovieFileMerge___ctor(MovieFileMerge_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_string__uint__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_Dictionary_string__uint__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E747F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v5, v6, v7);
    byte_42E747F = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v8,
    (const MethodInfo_2EC8C88 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.AllDownLoadFilePathCRCDictionary = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v15,
    (const MethodInfo_2EC8C88 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.RequireDownLoadFilePathCRCDictionary = v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MovieFileMerge__AssetLoadLogError(
        MovieFileMerge_o *this,
        System_String_o *errorCode,
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
  __int64 Instance; // x0
  __int64 v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x21
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x1
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x1
  __int64 v104; // x8
  unsigned __int64 v105; // x22
  signed __int64 v106; // x23
  __int64 v107; // x0
  Il2CppObject *v108; // x0
  __int64 v109; // x0

  if ( (byte_42E747D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Debug_TypeInfo, (_DWORD)errorCode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&string___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_14263/*"The request timed out."*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_14195/*"The network connection was lost."*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_4315/*"Connection reset by peer"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_4679/*"DLErrorType"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_4678/*"DLErrorAsset"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_4314/*"Connection refused"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_9579/*"No address associated with hostname"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_2125/*"AssetBundle file download time over"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_13070/*"Software caused connection abort"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_4316/*"Connection timed out"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_2128/*"AssetLoadError"*/, v42, v43, v44);
    byte_42E747D = 1;
  }
  Instance = sub_B5D5DC(string___TypeInfo, 8LL);
  if ( !Instance )
    goto LABEL_63;
  v53 = Instance;
  Instance = StringLiteral_9579/*"No address associated with hostname"*/;
  if ( StringLiteral_9579/*"No address associated with hostname"*/ )
  {
    Instance = sub_B5D684(StringLiteral_9579/*"No address associated with hostname"*/, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v54 = (System_Int32_array **)StringLiteral_9579/*"No address associated with hostname"*/;
  }
  else
  {
    v54 = 0LL;
  }
  if ( !*(_DWORD *)(v53 + 24) )
    goto LABEL_50;
  *(_QWORD *)(v53 + 32) = v54;
  sub_B5D560((BattleServantConfConponent_o *)(v53 + 32), v54, v47, v48, v49, v50, v51, v52);
  Instance = StringLiteral_2125/*"AssetBundle file download time over"*/;
  if ( StringLiteral_2125/*"AssetBundle file download time over"*/ )
  {
    Instance = sub_B5D684(StringLiteral_2125/*"AssetBundle file download time over"*/, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v61 = (System_Int32_array **)StringLiteral_2125/*"AssetBundle file download time over"*/;
  }
  else
  {
    v61 = 0LL;
  }
  if ( *(_DWORD *)(v53 + 24) <= 1u )
    goto LABEL_50;
  *(_QWORD *)(v53 + 40) = v61;
  sub_B5D560((BattleServantConfConponent_o *)(v53 + 40), v61, v55, v56, v57, v58, v59, v60);
  Instance = StringLiteral_14195/*"The network connection was lost."*/;
  if ( StringLiteral_14195/*"The network connection was lost."*/ )
  {
    Instance = sub_B5D684(StringLiteral_14195/*"The network connection was lost."*/, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v68 = (System_Int32_array **)StringLiteral_14195/*"The network connection was lost."*/;
  }
  else
  {
    v68 = 0LL;
  }
  if ( *(_DWORD *)(v53 + 24) <= 2u )
    goto LABEL_50;
  *(_QWORD *)(v53 + 48) = v68;
  sub_B5D560((BattleServantConfConponent_o *)(v53 + 48), v68, v62, v63, v64, v65, v66, v67);
  Instance = StringLiteral_4315/*"Connection reset by peer"*/;
  if ( StringLiteral_4315/*"Connection reset by peer"*/ )
  {
    Instance = sub_B5D684(StringLiteral_4315/*"Connection reset by peer"*/, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v75 = (System_Int32_array **)StringLiteral_4315/*"Connection reset by peer"*/;
  }
  else
  {
    v75 = 0LL;
  }
  if ( *(_DWORD *)(v53 + 24) <= 3u )
    goto LABEL_50;
  *(_QWORD *)(v53 + 56) = v75;
  sub_B5D560((BattleServantConfConponent_o *)(v53 + 56), v75, v69, v70, v71, v72, v73, v74);
  Instance = StringLiteral_13070/*"Software caused connection abort"*/;
  if ( StringLiteral_13070/*"Software caused connection abort"*/ )
  {
    Instance = sub_B5D684(StringLiteral_13070/*"Software caused connection abort"*/, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v82 = (System_Int32_array **)StringLiteral_13070/*"Software caused connection abort"*/;
  }
  else
  {
    v82 = 0LL;
  }
  if ( *(_DWORD *)(v53 + 24) <= 4u )
    goto LABEL_50;
  *(_QWORD *)(v53 + 64) = v82;
  sub_B5D560((BattleServantConfConponent_o *)(v53 + 64), v82, v76, v77, v78, v79, v80, v81);
  Instance = StringLiteral_4316/*"Connection timed out"*/;
  if ( StringLiteral_4316/*"Connection timed out"*/ )
  {
    Instance = sub_B5D684(StringLiteral_4316/*"Connection timed out"*/, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v89 = (System_Int32_array **)StringLiteral_4316/*"Connection timed out"*/;
  }
  else
  {
    v89 = 0LL;
  }
  if ( *(_DWORD *)(v53 + 24) <= 5u )
    goto LABEL_50;
  *(_QWORD *)(v53 + 72) = v89;
  sub_B5D560((BattleServantConfConponent_o *)(v53 + 72), v89, v83, v84, v85, v86, v87, v88);
  Instance = StringLiteral_4314/*"Connection refused"*/;
  if ( StringLiteral_4314/*"Connection refused"*/ )
  {
    Instance = sub_B5D684(StringLiteral_4314/*"Connection refused"*/, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v96 = (System_Int32_array **)StringLiteral_4314/*"Connection refused"*/;
  }
  else
  {
    v96 = 0LL;
  }
  if ( *(_DWORD *)(v53 + 24) <= 6u )
    goto LABEL_50;
  *(_QWORD *)(v53 + 80) = v96;
  sub_B5D560((BattleServantConfConponent_o *)(v53 + 80), v96, v90, v91, v92, v93, v94, v95);
  Instance = StringLiteral_14263/*"The request timed out."*/;
  if ( StringLiteral_14263/*"The request timed out."*/ )
  {
    Instance = sub_B5D684(StringLiteral_14263/*"The request timed out."*/, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
    if ( Instance )
    {
      v103 = (System_Int32_array **)StringLiteral_14263/*"The request timed out."*/;
      goto LABEL_43;
    }
LABEL_64:
    v109 = sub_B5D6BC();
    sub_B5D668(v109, 0LL);
  }
  v103 = 0LL;
LABEL_43:
  if ( *(_DWORD *)(v53 + 24) <= 7u )
    goto LABEL_50;
  *(_QWORD *)(v53 + 88) = v103;
  sub_B5D560((BattleServantConfConponent_o *)(v53 + 88), v103, v97, v98, v99, v100, v101, v102);
  v104 = *(_QWORD *)(v53 + 24);
  if ( (int)v104 < 1 )
  {
LABEL_51:
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    v108 = (Il2CppObject *)errorCode;
    goto LABEL_62;
  }
  v105 = 0LL;
  v106 = (int)v104;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_63;
    Instance = System_String__Contains(errorCode, *(System_String_o **)(v53 + 32 + 8 * v105), 0LL);
    if ( (Instance & 1) != 0 )
      break;
    if ( (__int64)++v105 >= v106 )
      goto LABEL_51;
    if ( v105 >= *(unsigned int *)(v53 + 24) )
      goto LABEL_50;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
LABEL_63:
    sub_B5D69C(Instance, v46);
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_4678/*"DLErrorAsset"*/,
    this->fields.downloadingURL,
    0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v105 >= *(_DWORD *)(v53 + 24) )
  {
LABEL_50:
    v107 = sub_B5D6C8(Instance);
    sub_B5D668(v107, 0LL);
  }
  if ( !Instance )
    goto LABEL_63;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_4679/*"DLErrorType"*/,
    *(System_String_o **)(v53 + 32 + 8 * v105),
    0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  v108 = (Il2CppObject *)StringLiteral_2128/*"AssetLoadError"*/;
LABEL_62:
  UnityEngine_Debug__LogError(v108, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__CRCDownloadAndCheck(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E7474 & 1) == 0 )
  {
    sub_B5D5C4(&MovieFileMerge__CRCDownloadAndCheck_d__33_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7474 = 1;
  }
  v5 = sub_B5D694(MovieFileMerge__CRCDownloadAndCheck_d__33_TypeInfo);
  MovieFileMerge__CRCDownloadAndCheck_d__33___ctor((MovieFileMerge__CRCDownloadAndCheck_d__33_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_Generic_Dictionary_string__uint__o *__fastcall MovieFileMerge__CreateDic(
        MovieFileMerge_o *this,
        System_String_o *dataPath,
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
  System_Collections_Generic_Dictionary_string__uint__o *v14; // x19
  System_String_array *AllLines; // x0
  System_String_array *v16; // x1
  int max_length; // w8
  System_String_array *v18; // x20
  unsigned int v19; // w22
  System_String_o *v20; // x21
  System_String_array *v21; // x21
  __int64 v23; // x0
  uint32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E747B & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)dataPath, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__uint__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v11, v12, v13);
    byte_42E747B = 1;
  }
  result = 0;
  v14 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v14,
    (const MethodInfo_2EC8C88 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllLines = System_IO_File__ReadAllLines(dataPath, 0LL);
  if ( !AllLines )
LABEL_20:
    sub_B5D69C(AllLines, v16);
  max_length = AllLines->max_length;
  v18 = AllLines;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
        goto LABEL_19;
      v20 = v18->m_Items[v19];
      AllLines = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !AllLines )
        goto LABEL_20;
      v16 = AllLines;
      if ( !AllLines->max_length )
      {
LABEL_19:
        v23 = sub_B5D6C8(AllLines);
        sub_B5D668(v23, 0LL);
      }
      LOWORD(AllLines->m_Items[0]) = 44;
      if ( !v20 )
        goto LABEL_20;
      AllLines = System_String__Split(v20, (System_Char_array *)AllLines, 0LL);
      result = 0;
      if ( !AllLines )
        goto LABEL_20;
      v21 = AllLines;
      if ( AllLines->max_length <= 1 )
        goto LABEL_19;
      AllLines = (System_String_array *)System_UInt32__TryParse(AllLines->m_Items[1], &result, 0LL);
      if ( ((unsigned __int8)AllLines & 1) == 0 )
        return 0LL;
      if ( !v21->max_length )
        goto LABEL_19;
      if ( !v14 )
        goto LABEL_20;
      System_Collections_Generic_Dictionary_string__uint___Add(
        v14,
        v21->m_Items[0],
        result,
        (const MethodInfo_2EC983C *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      max_length = v18->max_length;
      if ( (int)++v19 >= max_length )
        return v14;
    }
  }
  return v14;
}


void __fastcall MovieFileMerge__Delete(System_String_o *folder, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *FileName; // x19
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v16; // x19
  __int64 v17; // x0

  v4 = folder;
  if ( (byte_42E7477 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_IO_Path_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_23922/*"{0}/{1}"*/, v8, v9, v10);
    folder = (System_String_o *)sub_B5D5C4(&StringLiteral_885/*"/"*/, v11, v12, v13);
    byte_42E7477 = 1;
  }
  if ( !v4 )
    goto LABEL_14;
  if ( !System_String__EndsWith(v4, (System_String_o *)StringLiteral_885/*"/"*/, 0LL) )
    goto LABEL_8;
  folder = (System_String_o *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !folder )
LABEL_14:
    sub_B5D69C(folder, method);
  if ( !LODWORD(folder[1].klass) )
  {
    v17 = sub_B5D6C8(folder);
    sub_B5D668(v17, 0LL);
  }
  LOWORD(folder[1].monitor) = 47;
  v4 = System_String__TrimEnd(v4, (System_Char_array *)folder, 0LL);
LABEL_8:
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  FileName = System_IO_Path__GetFileName(v4, 0LL);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v16 = System_String__Format_44573324(
          (System_String_o *)StringLiteral_23922/*"{0}/{1}"*/,
          LocalDataPath,
          (Il2CppObject *)FileName,
          0LL);
  if ( System_IO_Directory__Exists(v16, 0LL) )
    System_IO_Directory__Delete_44512988(v16, 1, 0LL);
}


void __fastcall MovieFileMerge__Delete_22835872(const MethodInfo *method)
{
  System_String_o *LocalDataPath; // x0
  _BOOL8 v2; // x0
  System_String_o *v3; // x0

  LocalDataPath = MovieFileMerge__GetLocalDataPath(method);
  v2 = System_IO_Directory__Exists(LocalDataPath, 0LL);
  if ( v2 )
  {
    v3 = MovieFileMerge__GetLocalDataPath((const MethodInfo *)v2);
    System_IO_Directory__Delete_44512988(v3, 1, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__Download(
        MovieFileMerge_o *this,
        System_String_o *fileName,
        uint32_t crc,
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

  if ( (byte_42E747A & 1) == 0 )
  {
    sub_B5D5C4(&MovieFileMerge__Download_d__41_TypeInfo, (_DWORD)fileName, crc, method);
    byte_42E747A = 1;
  }
  v7 = sub_B5D694(MovieFileMerge__Download_d__41_TypeInfo);
  MovieFileMerge__Download_d__41___ctor((MovieFileMerge__Download_d__41_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = fileName;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)fileName, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v7 + 48) = crc;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall MovieFileMerge__DownloadCancel(MovieFileMerge_o *this, const MethodInfo *method)
{
  this->fields.isDownloadCancel = 1;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__DownloadMovie(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E7475 & 1) == 0 )
  {
    sub_B5D5C4(&MovieFileMerge__DownloadMovie_d__34_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7475 = 1;
  }
  v5 = sub_B5D694(MovieFileMerge__DownloadMovie_d__34_TypeInfo);
  MovieFileMerge__DownloadMovie_d__34___ctor((MovieFileMerge__DownloadMovie_d__34_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MovieFileMerge__EndMergeRetryDialog(MovieFileMerge_o *this, bool isDecide, const MethodInfo *method)
{
  if ( isDecide )
    this->fields.isErrorDialog = 0;
  else
    MovieFileMerge__Reboot(this, (const MethodInfo *)isDecide);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MovieFileMerge__EndRetryDialog(MovieFileMerge_o *this, bool isDecide, const MethodInfo *method)
{
  if ( isDecide )
    this->fields.isErrorDialog = 0;
  else
    MovieFileMerge__Reboot(this, (const MethodInfo *)isDecide);
}


void __fastcall MovieFileMerge__EndWarningDialog(MovieFileMerge_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


bool __fastcall MovieFileMerge__ExistCRCCheckedMovieFile(
        MovieFileMerge_o *this,
        System_String_o *assetFolderURL,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x19
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
  System_String_o *FileName; // x20
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v22; // x19
  Il2CppObject *v23; // x21
  FileMergeAndSplit_c *v24; // x8
  System_String_o *v25; // x0
  __int64 v27; // x0

  v4 = assetFolderURL;
  if ( (byte_42E746B & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)assetFolderURL, (_DWORD)method, v3);
    sub_B5D5C4(&FileMergeAndSplit_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_IO_Path_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_23927/*"{0}/{1}/{2}"*/, v14, v15, v16);
    this = (MovieFileMerge_o *)sub_B5D5C4(&StringLiteral_23926/*"{0}/{1}/{1}.usm"*/, v17, v18, v19);
    byte_42E746B = 1;
  }
  if ( !v4 )
    goto LABEL_17;
  if ( !System_String__EndsWith(v4, (System_String_o *)StringLiteral_885/*"/"*/, 0LL) )
    goto LABEL_8;
  this = (MovieFileMerge_o *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !this )
LABEL_17:
    sub_B5D69C(this, assetFolderURL);
  if ( !LODWORD(this->fields.assetFolderURL) )
  {
    v27 = sub_B5D6C8(this);
    sub_B5D668(v27, 0LL);
  }
  LOWORD(this->fields.assetFolder) = 47;
  v4 = System_String__TrimEnd(v4, (System_Char_array *)this, 0LL);
LABEL_8:
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  FileName = System_IO_Path__GetFileName(v4, 0LL);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v22 = System_String__Format_44573324(
          (System_String_o *)StringLiteral_23926/*"{0}/{1}/{1}.usm"*/,
          LocalDataPath,
          (Il2CppObject *)FileName,
          0LL);
  v23 = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)v22);
  v24 = FileMergeAndSplit_TypeInfo;
  if ( (BYTE3(FileMergeAndSplit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v24 = FileMergeAndSplit_TypeInfo;
  }
  v25 = System_String__Format_44578852(
          (System_String_o *)StringLiteral_23927/*"{0}/{1}/{2}"*/,
          v23,
          (Il2CppObject *)FileName,
          (Il2CppObject *)v24->static_fields->PathCRCFileName,
          0LL);
  return !System_IO_File__Exists(v25, 0LL) && System_IO_File__Exists(v22, 0LL);
}


float __fastcall MovieFileMerge__GetDownloadProgress(MovieFileMerge_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x0
  float v6; // s8
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_string__uint__o *v8; // x0
  int32_t downloadProgress; // s8

  if ( (byte_42E746F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, (_DWORD)method, v2, v3);
    byte_42E746F = 1;
  }
  RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary;
  v6 = 0.0;
  if ( RequireDownLoadFilePathCRCDictionary
    && System_Collections_Generic_Dictionary_string__uint___get_Count(
         RequireDownLoadFilePathCRCDictionary,
         (const MethodInfo_2EC9438 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) )
  {
    v8 = this->fields.RequireDownLoadFilePathCRCDictionary;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    downloadProgress = this->fields.downloadProgress;
    return (float)downloadProgress
         / (float)System_Collections_Generic_Dictionary_string__uint___get_Count(
                    v8,
                    (const MethodInfo_2EC9438 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
  }
  return v6;
}


double __fastcall MovieFileMerge__GetDownloadSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x0

  if ( (byte_42E746E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, (_DWORD)method, v2, v3);
    byte_42E746E = 1;
  }
  RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( !RequireDownLoadFilePathCRCDictionary )
    sub_B5D69C(0LL, method);
  return (double)(System_Collections_Generic_Dictionary_string__uint___get_Count(
                    RequireDownLoadFilePathCRCDictionary,
                    (const MethodInfo_2EC9438 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) << 20);
}


System_String_o *__fastcall MovieFileMerge__GetLocalDataPath(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  System_String_o *persistentDataPath; // x0

  if ( (byte_42E746C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_940/*"/extend-data/movie"*/, v1, v2, v3);
    byte_42E746C = 1;
  }
  persistentDataPath = UnityEngine_Application__get_persistentDataPath(0LL);
  return System_String__Concat_44577788(persistentDataPath, (System_String_o *)StringLiteral_940/*"/extend-data/movie"*/, 0LL);
}


System_String_o *__fastcall MovieFileMerge__GetLocalFolderPath(MovieFileMerge_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MovieFileMerge_o *v4; // x19
  Il2CppObject *LocalDataPath; // x0

  v4 = this;
  if ( (byte_42E7478 & 1) == 0 )
  {
    this = (MovieFileMerge_o *)sub_B5D5C4(&StringLiteral_23922/*"{0}/{1}"*/, (_DWORD)method, v2, v3);
    byte_42E7478 = 1;
  }
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)this);
  return System_String__Format_44573324(
           (System_String_o *)StringLiteral_23922/*"{0}/{1}"*/,
           LocalDataPath,
           (Il2CppObject *)v4->fields.assetFolder,
           0LL);
}


float __fastcall MovieFileMerge__GetMergeProgress(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct FileMergeAndSplit_Merge_o *mergeClass; // x8

  mergeClass = this->fields.mergeClass;
  if ( mergeClass )
    return mergeClass->fields.progress;
  else
    return 0.0;
}


System_Collections_Generic_Dictionary_string__uint__o *__fastcall MovieFileMerge__GetNeedDownloadDictionary(
        MovieFileMerge_o *this,
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_Dictionary_string__uint__o *v35; // x19
  __int64 v36; // x1
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  const MethodInfo *v38; // x1
  Il2CppObject *key; // x21
  uint32_t value; // w22
  Il2CppObject *LocalFolderPath; // x1
  System_String_o *v42; // x23
  _BOOL8 v43; // x0
  __int64 v44; // x1
  System_Byte_array *AllBytes; // x24
  uint32_t v46; // w1
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v48; // x1
  System_IO_DirectoryInfo_o *v49; // x21
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  System_Collections_Generic_Dictionary_Enumerator_string__uint__o v53; // [xsp+0h] [xbp-B0h] BYREF
  uint32_t v54; // [xsp+2Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_string__uint__o v55; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_42E7479 & 1) == 0 )
  {
    sub_B5D5C4(&Crc32_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__uint__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_23922/*"{0}/{1}"*/, v32, v33, v34);
    byte_42E7479 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  v54 = 0;
  v35 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v35,
    (const MethodInfo_2EC8C88 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary )
    sub_B5D69C(0LL, v36);
  System_Collections_Generic_Dictionary_string__uint___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v53,
    AllDownLoadFilePathCRCDictionary,
    (const MethodInfo_2EC9DD0 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
  v55 = v53;
  while ( System_Collections_Generic_Dictionary_Enumerator_string__uint___MoveNext(
            &v55,
            (const MethodInfo_276BFB8 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__) )
  {
    key = v55.fields.current.fields.key;
    value = (uint32_t)v55.fields.current.fields.value;
    LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v38);
    v42 = System_String__Format_44573324((System_String_o *)StringLiteral_23922/*"{0}/{1}"*/, LocalFolderPath, key, 0LL);
    v43 = System_IO_File__Exists(v42, 0LL);
    if ( !v43 )
      goto LABEL_12;
    AllBytes = System_IO_File__ReadAllBytes(v42, 0LL);
    v54 = value;
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v46 = Crc32__Compute(AllBytes, 0LL);
    if ( !System_UInt32__Equals_43470640((uint32_t)&v54, v46, 0LL) )
    {
      System_IO_File__Delete(v42, 0LL);
LABEL_12:
      if ( !v35 )
        sub_B5D69C(v43, v44);
      System_Collections_Generic_Dictionary_string__uint___Add(
        v35,
        (System_String_o *)key,
        value,
        (const MethodInfo_2EC983C *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      Parent = System_IO_Directory__GetParent(v42, 0LL);
      v49 = Parent;
      if ( !Parent )
        sub_B5D69C(0LL, v48);
      v50 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._7_get_FullName.method)(
                                 Parent,
                                 Parent->klass->vtable._8_get_Name.methodPtr);
      if ( !System_IO_Directory__Exists(v50, 0LL) )
      {
        v51 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v49->klass->vtable._7_get_FullName.method)(
                                   v49,
                                   v49->klass->vtable._8_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v51, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_string__uint___Dispose(
    &v55,
    (const MethodInfo_276C124 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
  return v35;
}


System_Collections_Generic_List_string__o *__fastcall MovieFileMerge__GetSplitFileList(
        MovieFileMerge_o *this,
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x19
  const MethodInfo *v33; // x1
  System_String_o *LocalFolderPath; // x0
  __int64 v35; // x1
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v38; // x1
  Il2CppObject *current; // x21
  Il2CppObject *v40; // x1
  System_String_o *v41; // x0
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E747C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_string___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_23922/*"{0}/{1}"*/, v29, v30, v31);
    byte_42E747C = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  LocalFolderPath = MovieFileMerge__GetLocalFolderPath(this, v33);
  if ( System_IO_Directory__Exists(LocalFolderPath, 0LL) )
  {
    AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
    if ( !AllDownLoadFilePathCRCDictionary
      || (Keys = System_Collections_Generic_Dictionary_string__uint___get_Keys(
                   AllDownLoadFilePathCRCDictionary,
                   (const MethodInfo_2EC9448 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__),
          (AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_string__uint__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL) )
    {
      sub_B5D69C(AllDownLoadFilePathCRCDictionary, v35);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v43,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v43,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v43.fields.current;
      v40 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v38);
      v41 = System_String__Format_44573324((System_String_o *)StringLiteral_23922/*"{0}/{1}"*/, v40, current, 0LL);
      if ( !v32 )
        sub_B5D69C(v41, v41);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v32,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v43,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  return (System_Collections_Generic_List_string__o *)v32;
}


double __fastcall MovieFileMerge__GetTotalRequireSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x8

  if ( (byte_42E746D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, (_DWORD)method, v2, v3);
    byte_42E746D = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary
    || (AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_string__uint__o *)System_Collections_Generic_Dictionary_string__uint___get_Count(AllDownLoadFilePathCRCDictionary, (const MethodInfo_2EC9438 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__),
        (RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary) == 0LL) )
  {
    sub_B5D69C(AllDownLoadFilePathCRCDictionary, method);
  }
  return (double)((System_Collections_Generic_Dictionary_string__uint___get_Count(
                     RequireDownLoadFilePathCRCDictionary,
                     (const MethodInfo_2EC9438 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__)
                 + (int)AllDownLoadFilePathCRCDictionary) << 20);
}


void __fastcall MovieFileMerge__Initialize(
        MovieFileMerge_o *this,
        System_String_o *assetFolderURL,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x20
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
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_string__uint__o *v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_Dictionary_string__uint__o *v48; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Char_array *v61; // x0
  __int64 v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct System_String_o *FileName; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  const MethodInfo *v76; // x1
  Il2CppObject *LocalFolderPath; // x0
  struct System_String_o *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  const MethodInfo *v85; // x1
  Il2CppObject *v86; // x0
  struct System_String_o *v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  const MethodInfo *v94; // x1
  Il2CppObject *v95; // x20
  FileMergeAndSplit_c *v96; // x8
  struct System_String_o *v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  __int64 v104; // x0

  v4 = assetFolderURL;
  if ( (byte_42E7473 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)assetFolderURL, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__uint__Clear__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&FileMergeAndSplit_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_IO_Path_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_23922/*"{0}/{1}"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_23918/*"{0}/SplitFile"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_23924/*"{0}/{1}.usm"*/, v30, v31, v32);
    byte_42E7473 = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( AllDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_string__uint___Clear(
      AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_2EC9A18 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v34 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_string__uint____ctor(
      v34,
      (const MethodInfo_2EC8C88 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.AllDownLoadFilePathCRCDictionary = v34;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
      (System_Int32_array **)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( RequireDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_string__uint___Clear(
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_2EC9A18 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v48 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_string__uint____ctor(
      v48,
      (const MethodInfo_2EC8C88 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.RequireDownLoadFilePathCRCDictionary = v48;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
      (System_Int32_array **)v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  *(_QWORD *)&this->fields.downloadProgress = 0LL;
  this->fields.isDownloadCancel = 0;
  this->fields.mergeClass = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.mergeClass, 0LL, v42, v43, v44, v45, v46, v47);
  this->fields.crcCheckerClass = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.crcCheckerClass, 0LL, v55, v56, v57, v58, v59, v60);
  if ( !v4 )
    goto LABEL_21;
  if ( !System_String__EndsWith(v4, (System_String_o *)StringLiteral_885/*"/"*/, 0LL) )
    goto LABEL_14;
  v61 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v61 )
LABEL_21:
    sub_B5D69C(v61, v62);
  if ( !v61->max_length )
  {
    v104 = sub_B5D6C8(v61);
    sub_B5D668(v104, 0LL);
  }
  v61->m_Items[2] = 47;
  v4 = System_String__TrimEnd(v4, v61, 0LL);
LABEL_14:
  this->fields.assetFolderURL = v4;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.assetFolderURL,
    (System_Int32_array **)v4,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  FileName = System_IO_Path__GetFileName(v4, 0LL);
  this->fields.assetFolder = FileName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.assetFolder,
    (System_Int32_array **)FileName,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v76);
  v78 = System_String__Format((System_String_o *)StringLiteral_23918/*"{0}/SplitFile"*/, LocalFolderPath, 0LL);
  this->fields.outputSplitFileFolder = v78;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.outputSplitFileFolder,
    (System_Int32_array **)v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  v86 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v85);
  v87 = System_String__Format_44573324(
          (System_String_o *)StringLiteral_23924/*"{0}/{1}.usm"*/,
          v86,
          (Il2CppObject *)this->fields.assetFolder,
          0LL);
  this->fields.outputMergeFile = v87;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.outputMergeFile,
    (System_Int32_array **)v87,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  v95 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v94);
  v96 = FileMergeAndSplit_TypeInfo;
  if ( (BYTE3(FileMergeAndSplit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v96 = FileMergeAndSplit_TypeInfo;
  }
  v97 = System_String__Format_44573324(
          (System_String_o *)StringLiteral_23922/*"{0}/{1}"*/,
          v95,
          (Il2CppObject *)v96->static_fields->PathCRCFileName,
          0LL);
  this->fields.outputMergeFileCRC = v97;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.outputMergeFileCRC,
    (System_Int32_array **)v97,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
}


bool __fastcall MovieFileMerge__IsCRCCheckEnd(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8

  crcCheckerClass = this->fields.crcCheckerClass;
  return crcCheckerClass && crcCheckerClass->fields.isCRCCheckEnd;
}


bool __fastcall MovieFileMerge__IsCRCMatch(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8

  crcCheckerClass = this->fields.crcCheckerClass;
  return crcCheckerClass && crcCheckerClass->fields.isCRCMatch;
}


bool __fastcall MovieFileMerge__IsDownload(MovieFileMerge_o *this, const MethodInfo *method)
{
  return this->fields.isDownloading;
}


bool __fastcall MovieFileMerge__IsDownloadCancel(MovieFileMerge_o *this, const MethodInfo *method)
{
  return this->fields.isDownloadCancel;
}


bool __fastcall MovieFileMerge__IsMerge(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct FileMergeAndSplit_Merge_o *mergeClass; // x8

  mergeClass = this->fields.mergeClass;
  return mergeClass && mergeClass->fields.isMerge;
}


bool __fastcall MovieFileMerge__IsMergeError(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct FileMergeAndSplit_Merge_o *mergeClass; // x8

  mergeClass = this->fields.mergeClass;
  return mergeClass && mergeClass->fields.isError;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__Merge(MovieFileMerge_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E7476 & 1) == 0 )
  {
    sub_B5D5C4(&MovieFileMerge__Merge_d__35_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7476 = 1;
  }
  v5 = sub_B5D694(MovieFileMerge__Merge_d__35_TypeInfo);
  MovieFileMerge__Merge_d__35___ctor((MovieFileMerge__Merge_d__35_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayCRIMovie(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E7472 & 1) == 0 )
  {
    sub_B5D5C4(&MovieFileMerge__PlayCRIMovie_d__31_TypeInfo, (_DWORD)filePath, (_DWORD)method, v3);
    byte_42E7472 = 1;
  }
  v5 = sub_B5D694(MovieFileMerge__PlayCRIMovie_d__31_TypeInfo);
  MovieFileMerge__PlayCRIMovie_d__31___ctor((MovieFileMerge__PlayCRIMovie_d__31_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = filePath;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)filePath, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4(MovieFileMerge_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E7470 & 1) == 0 )
  {
    sub_B5D5C4(&MovieFileMerge__PlayMP4_d__29_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7470 = 1;
  }
  v5 = sub_B5D694(MovieFileMerge__PlayMP4_d__29_TypeInfo);
  MovieFileMerge__PlayMP4_d__29___ctor((MovieFileMerge__PlayMP4_d__29_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4_22834032(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
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

  if ( (byte_42E7471 & 1) == 0 )
  {
    sub_B5D5C4(&MovieFileMerge__PlayMP4_d__30_TypeInfo, (_DWORD)filePath, mode, method);
    byte_42E7471 = 1;
  }
  v6 = sub_B5D694(MovieFileMerge__PlayMP4_d__30_TypeInfo);
  MovieFileMerge__PlayMP4_d__30___ctor((MovieFileMerge__PlayMP4_d__30_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 32) = filePath;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)filePath, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall MovieFileMerge__Reboot(MovieFileMerge_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Networking_UnityWebRequest_o *v8; // x0
  BattleServantConfConponent_o *p_loader; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *loader; // t1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  ManagementManager_c *v17; // x0
  ManagementManager_o *Instance; // x0
  __int64 v19; // x1

  if ( (byte_42E747E & 1) == 0 )
  {
    sub_B5D5C4(&ManagementManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v5, v6, v7);
    byte_42E747E = 1;
  }
  loader = this->fields.loader;
  p_loader = (BattleServantConfConponent_o *)&this->fields.loader;
  v8 = loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(v8, 0LL);
    p_loader->klass = 0LL;
    sub_B5D560(p_loader, 0LL, v11, v12, v13, v14, v15, v16);
  }
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  }
  if ( !byte_42E5AE3 )
  {
    sub_B5D5C4(&ManagementManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5AE3 = 1;
  }
  v17 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v17 = ManagementManager_TypeInfo;
  }
  if ( v17->static_fields->isDuringStartup )
  {
    UnityEngine_Application__Quit_41546252(0LL);
  }
  else
  {
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v19);
    ManagementManager__reboot(Instance, 0, 0LL);
  }
}


void __fastcall MovieFileMerge___Merge_b__35_0(MovieFileMerge_o *this, System_Exception_o *e, const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x19
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
  CommonUI_o *Instance; // x20
  System_String_o *v25; // x21
  ErrorDialog_ClickDelegate_o *v26; // x22
  const MethodInfo *v27; // x2
  System_String_o *v28; // x1

  v5 = (Il2CppObject *)this;
  if ( (byte_42E7480 & 1) == 0 )
  {
    sub_B5D5C4(&ErrorDialog_ClickDelegate_TypeInfo, (_DWORD)e, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_MovieFileMerge_EndMergeRetryDialog__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_5396/*"Disk full"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_9380/*"NETWORK_ERROR_DISK_FULL"*/, v18, v19, v20);
    this = (MovieFileMerge_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v21, v22, v23);
    byte_42E7480 = 1;
  }
  if ( !e )
    goto LABEL_13;
  this = (MovieFileMerge_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer, const MethodInfo *))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr,
                               method);
  if ( !this )
    goto LABEL_13;
  if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_5396/*"Disk full"*/, 0LL) )
  {
    v28 = (System_String_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr);
    goto LABEL_12;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9380/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
  v26 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v26, v5, Method_MovieFileMerge_EndMergeRetryDialog__, 0LL);
  if ( !Instance )
LABEL_13:
    sub_B5D69C(this, e);
  CommonUI__OpenErrorDialog(Instance, (System_String_o *)StringLiteral_1/*""*/, v25, v26, 1, 0LL);
  v28 = (System_String_o *)StringLiteral_5396/*"Disk full"*/;
LABEL_12:
  MovieFileMerge__AssetLoadLogError((MovieFileMerge_o *)v5, v28, v27);
}


void __fastcall MovieFileMerge__CRCDownloadAndCheck_d__33___ctor(
        MovieFileMerge__CRCDownloadAndCheck_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__CRCDownloadAndCheck_d__33__MoveNext(
        MovieFileMerge__CRCDownloadAndCheck_d__33_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MovieFileMerge__CRCDownloadAndCheck_d__33_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v20; // x22
  FileMergeAndSplit_CRCChecker_o *v21; // x23
  Il2CppObject **v22; // x19

  v4 = this;
  if ( (byte_42E5F6D & 1) == 0 )
  {
    sub_B5D5C4(&FileMergeAndSplit_CRCChecker_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_uint___, v8, v9, v10);
    this = (MovieFileMerge__CRCDownloadAndCheck_d__33_o *)sub_B5D5C4(&FileMergeAndSplit_TypeInfo, v11, v12, v13);
    byte_42E5F6D = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    _4__this->fields.RequireDownLoadFilePathCRCDictionary = MovieFileMerge__GetNeedDownloadDictionary(_4__this, 0LL);
    sub_B5D560(&_4__this->fields.RequireDownLoadFilePathCRCDictionary);
    if ( MovieFileMerge__IsCRCMatch(_4__this, 0LL) )
    {
      if ( System_IO_Directory__Exists(_4__this->fields.outputSplitFileFolder, 0LL) )
        System_IO_Directory__Delete_44512988(_4__this->fields.outputSplitFileFolder, 1, 0LL);
      if ( System_IO_File__Exists(_4__this->fields.outputMergeFileCRC, 0LL) )
        System_IO_File__Delete(_4__this->fields.outputMergeFileCRC, 0LL);
    }
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v4->fields.__1__state = -1;
      this = (MovieFileMerge__CRCDownloadAndCheck_d__33_o *)FileMergeAndSplit_TypeInfo;
      if ( (BYTE3(FileMergeAndSplit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
      }
      if ( _4__this )
      {
        v4->fields.__2__current = (Il2CppObject *)MovieFileMerge__Download(
                                                    _4__this,
                                                    FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName,
                                                    0,
                                                    0LL);
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_22:
      sub_B5D69C(this, method);
    }
    return 0;
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  _4__this->fields.AllDownLoadFilePathCRCDictionary = MovieFileMerge__CreateDic(
                                                        _4__this,
                                                        _4__this->fields.outputMergeFileCRC,
                                                        0LL);
  sub_B5D560(&_4__this->fields.AllDownLoadFilePathCRCDictionary);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__33_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_22;
  outputMergeFile = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_string__uint___get_Values(
             (System_Collections_Generic_Dictionary_string__uint__o *)this,
             (const MethodInfo_2EC95E0 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v20 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_1CBA864 *)Method_System_Linq_Enumerable_ToList_uint___);
  v21 = (FileMergeAndSplit_CRCChecker_o *)sub_B5D694(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v21, outputMergeFile, v20, 0LL);
  _4__this->fields.crcCheckerClass = v21;
  sub_B5D560(&_4__this->fields.crcCheckerClass);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__33_o *)_4__this->fields.crcCheckerClass;
  if ( !this )
    goto LABEL_22;
  v4->fields.__2__current = (Il2CppObject *)FileMergeAndSplit_CRCChecker__Run(
                                              (FileMergeAndSplit_CRCChecker_o *)this,
                                              0LL);
  v22 = &v4->fields.__2__current;
  sub_B5D560(v22);
  *((_DWORD *)v22 - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall MovieFileMerge__CRCDownloadAndCheck_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__CRCDownloadAndCheck_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__CRCDownloadAndCheck_d__33__System_Collections_IEnumerator_Reset(
        MovieFileMerge__CRCDownloadAndCheck_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MovieFileMerge__CRCDownloadAndCheck_d__33_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__CRCDownloadAndCheck_d__33__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__CRCDownloadAndCheck_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__CRCDownloadAndCheck_d__33__System_IDisposable_Dispose(
        MovieFileMerge__CRCDownloadAndCheck_d__33_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MovieFileMerge__DownloadMovie_d__34___ctor(
        MovieFileMerge__DownloadMovie_d__34_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__DownloadMovie_d__34__MoveNext(
        MovieFileMerge__DownloadMovie_d__34_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MovieFileMerge__DownloadMovie_d__34_o *v4; // x19
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
  int32_t _1__state; // w8
  MovieFileMerge_o *_4__this; // x20
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x0
  struct System_Collections_Generic_Dictionary_Enumerator_string__uint__o *p__7__wrap1; // x21
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q0
  __int128 v22; // q1
  _BOOL8 v23; // x0
  const MethodInfo *v24; // x1
  bool result; // w0
  __int64 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+28h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_42E5F6F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__, v11, v12, v13);
    this = (MovieFileMerge__DownloadMovie_d__34_o *)sub_B5D5C4(
                                                      &Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__,
                                                      v14,
                                                      v15,
                                                      v16);
    byte_42E5F6F = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__7__wrap1 = &v4->fields.__7__wrap1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      sub_B5D69C(this, method);
    RequireDownLoadFilePathCRCDictionary = _4__this->fields.RequireDownLoadFilePathCRCDictionary;
    _4__this->fields.isDownloading = 1;
    _4__this->fields.downloadProgress = 0;
    if ( !RequireDownLoadFilePathCRCDictionary )
      sub_B5D69C(0LL, method);
    System_Collections_Generic_Dictionary_string__uint___GetEnumerator(
      &v28,
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_2EC9DD0 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    p__7__wrap1 = &v4->fields.__7__wrap1;
    v22 = *(_OWORD *)&v28.fields.dictionary;
    current = v28.fields.current;
    *(_QWORD *)&v4->fields.__7__wrap1.fields.getEnumeratorRetType = *(_QWORD *)&v28.fields.getEnumeratorRetType;
    v4->fields.__7__wrap1.fields.current = current;
    *(_OWORD *)&v4->fields.__7__wrap1.fields.dictionary = v22;
    sub_B5D560(&v4->fields.__7__wrap1);
  }
  v4->fields.__1__state = -3;
  v23 = System_Collections_Generic_Dictionary_Enumerator_string__uint___MoveNext(
          p__7__wrap1,
          (const MethodInfo_276BFB8 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
  if ( v23 )
  {
    if ( !_4__this )
      sub_B5D69C(v23, v24);
    if ( _4__this->fields.isDownloadCancel )
    {
      _4__this->fields.isDownloading = 0;
      MovieFileMerge__DownloadMovie_d__34____m__Finally1(v4, v24);
      return 0;
    }
    else
    {
      v4->fields.__2__current = (Il2CppObject *)MovieFileMerge__Download(
                                                  _4__this,
                                                  (System_String_o *)v4->fields.__7__wrap1.fields.current.fields.key,
                                                  (uint32_t)v4->fields.__7__wrap1.fields.current.fields.value,
                                                  0LL);
      sub_B5D560(&v4->fields.__2__current);
      result = 1;
      v4->fields.__1__state = 1;
    }
  }
  else
  {
    MovieFileMerge__DownloadMovie_d__34____m__Finally1(v4, v24);
    *(_QWORD *)&p__7__wrap1->fields.getEnumeratorRetType = 0LL;
    *(_OWORD *)&p__7__wrap1->fields.dictionary = 0u;
    p__7__wrap1->fields.current = 0u;
    if ( !_4__this )
      sub_B5D69C(v26, v27);
    result = 0;
    _4__this->fields.isDownloading = 0;
  }
  return result;
}


Il2CppObject *__fastcall MovieFileMerge__DownloadMovie_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__DownloadMovie_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__DownloadMovie_d__34__System_Collections_IEnumerator_Reset(
        MovieFileMerge__DownloadMovie_d__34_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MovieFileMerge__DownloadMovie_d__34_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__DownloadMovie_d__34__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__DownloadMovie_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__DownloadMovie_d__34__System_IDisposable_Dispose(
        MovieFileMerge__DownloadMovie_d__34_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    MovieFileMerge__DownloadMovie_d__34____m__Finally1(this, method);
}


void __fastcall MovieFileMerge__DownloadMovie_d__34____m__Finally1(
        MovieFileMerge__DownloadMovie_d__34_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5F70 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__, (_DWORD)method, v2, v3);
    byte_42E5F70 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_string__uint___Dispose(
    &this->fields.__7__wrap1,
    (const MethodInfo_276C124 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
}


void __fastcall MovieFileMerge__Download_d__41___ctor(
        MovieFileMerge__Download_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__Download_d__41__MoveNext(
        MovieFileMerge__Download_d__41_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MovieFileMerge__Download_d__41_o *v4; // x19
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
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  struct MovieFileMerge_o *_4__this; // x20
  Il2CppObject *LocalFolderPath; // x0
  bool *p_isDownload_5__4; // x22
  struct System_Byte_array **p_readData_5__5; // x21
  uint32_t downloadingCRC; // w8
  System_String_array *v103; // x21
  __int64 v104; // x1
  ManagementManager_c *v105; // x0
  _BOOL4 v106; // w22
  CommonUI_o *v107; // x21
  System_String_o *v108; // x22
  ErrorDialog_ClickDelegate_o *v109; // x23
  System_Byte_array *readData_5__5; // x20
  uint32_t v111; // w0
  Il2CppObject **p__2__current; // x19
  int v113; // w8
  UnityEngine_WaitForEndOfFrame_o *v114; // x20
  float unscaledTime; // s8
  UnityEngine_WaitForEndOfFrame_o *v116; // x21
  MovieFileMerge__Download_d__41_o **p_loader; // x22
  struct System_String_o **p_errorCode_5__11; // x21
  System_String_o *error; // x0
  UnityEngine_WaitForEndOfFrame_o *v120; // x20
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v122; // x1
  System_IO_DirectoryInfo_o *v123; // x21
  System_String_o *v124; // x0
  System_String_o *v125; // x21
  int64_t FreeSize; // x21
  ManagerConfig_c *v127; // x0
  System_String_o *v128; // x22
  ErrorDialog_ClickDelegate_o *v129; // x23
  UnityEngine_WaitForEndOfFrame_o *v130; // x20
  float downloadProgress; // s0
  float loadProgress_5__7; // s9
  float v133; // s8
  float v134; // s0
  bool v135; // zf
  float v136; // s8
  System_String_o *downloadingURL; // x22
  System_String_o *v138; // x0
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v140; // x22
  System_String_o *v141; // x22
  MovieFileMerge__Download_d__41_o *v142; // x22
  int v143; // w8
  System_String_o *v144; // x23
  System_String_o *v145; // x0
  System_String_o *v146; // x24
  __int64 v147; // x1
  MovieFileMerge__Download_d__41_o *v148; // x23
  __int64 v149; // x1
  MovieFileMerge__Download_d__41_o *v150; // x22
  __int64 v151; // x1
  ManagerConfig_c *v152; // x0
  WebViewManager_o *Instance; // x0
  System_String_o *errorCode_5__11; // x21
  CommonUI_o *v155; // x22
  ErrorDialog_ClickDelegate_o *v156; // x23
  UnityEngine_WaitForEndOfFrame_o *v157; // x20
  int autoRetryCount_5__3; // w21
  ManagerConfig_c *v159; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v161; // x20
  Il2CppObject *v162; // x21
  struct UnityEngine_Networking_UnityWebRequest_o **v163; // x20
  MovieFileMerge__Download_d__41_o *loader; // t1
  struct System_Byte_array **v165; // x0
  struct UnityEngine_Networking_UnityWebRequest_o **v166; // x21
  ManagerConfig_c *v167; // x0
  WebViewManager_o *v168; // x0
  System_String_o *v169; // x21
  CommonUI_o *v170; // x22
  ErrorDialog_ClickDelegate_o *v171; // x23
  UnityEngine_WaitForSeconds_o *v172; // x20
  int v173; // w1
  int v174; // w2
  __int64 v175; // x3
  ManagementManager_c *v176; // x0
  _BOOL4 isDuringStartup; // w23
  WebViewManager_o *v178; // x0
  struct System_String_o *errorLocalizeCode_5__12; // x8
  CommonUI_o *v180; // x22
  System_String_o *v181; // x21
  System_String_o *v182; // x23
  System_String_o *v183; // x23
  ErrorDialog_ClickDelegate_o *v184; // x24
  ManagerConfig_c *v185; // x0
  System_String_o *v186; // x23
  System_String_o *v187; // x23
  ErrorDialog_ClickDelegate_o *v188; // x24
  __int64 v189; // x0
  __int64 v190; // x0
  __int64 v191; // x0
  System_IO_IOException_o *v192; // x21
  System_String_o *v193; // x0
  __int64 v194; // x0
  Il2CppObject **v195; // x19
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-60h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-60h]
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+18h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_42E5F6E & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ErrorDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CommonServicePluginScript_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Crc32_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Debug_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v20, v21, v22);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ManagementManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_MovieFileMerge_EndRetryDialog__, v32, v33, v34);
    sub_B5D5C4(&Method_MovieFileMerge_EndWarningDialog__, v35, v36, v37);
    sub_B5D5C4(&NetworkManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v41, v42, v43);
    sub_B5D5C4(&string___TypeInfo, v44, v45, v46);
    sub_B5D5C4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_7180/*"HTTP"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_662/*")\n\n503 Auto retry count "*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_665/*")\nfile crc ("*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_1212/*"503"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_1766/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_15935/*"[FFFF80]Download error for debug"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_23922/*"{0}/{1}"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_12515/*"STATUS"*/, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_661/*")\n\n"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_592/*"("*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_663/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_1767/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v89, v90, v91);
    sub_B5D5C4(&StringLiteral_664/*")\n\nAssetBundle file download time over"*/, v92, v93, v94);
    this = (MovieFileMerge__Download_d__41_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v95, v96, v97);
    byte_42E5F6E = 1;
  }
  value = 0LL;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      _4__this->fields.downloadingURL = System_String__Format_44573324(
                                          (System_String_o *)StringLiteral_23922/*"{0}/{1}"*/,
                                          (Il2CppObject *)_4__this->fields.assetFolderURL,
                                          (Il2CppObject *)v4->fields.fileName,
                                          0LL);
      sub_B5D560(&_4__this->fields.downloadingURL);
      _4__this->fields.downloadingCRC = v4->fields.crc;
      LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(_4__this, 0LL);
      v4->fields._dlFilePath_5__2 = System_String__Format_44573324(
                                      (System_String_o *)StringLiteral_23922/*"{0}/{1}"*/,
                                      LocalFolderPath,
                                      (Il2CppObject *)v4->fields.fileName,
                                      0LL);
      sub_B5D560(&v4->fields._dlFilePath_5__2);
      v4->fields._isDownload_5__4 = 1;
      p_isDownload_5__4 = &v4->fields._isDownload_5__4;
      p_readData_5__5 = &v4->fields._readData_5__5;
      v4->fields._autoRetryCount_5__3 = 0;
      _4__this->fields.isErrorDialog = 0;
      goto LABEL_218;
    case 1:
      v4->fields.__1__state = -1;
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      this = (MovieFileMerge__Download_d__41_o *)ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        this = (MovieFileMerge__Download_d__41_o *)ManagerConfig_TypeInfo;
      }
      v4->fields._requestTime_5__6 = unscaledTime + *(float *)&this[1].fields._dlFilePath_5__2[1].fields.m_stringLength;
      if ( !_4__this )
        goto LABEL_223;
      v4->fields._loadProgress_5__7 = 0.0;
      v116 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v116, 0LL);
      v4->fields._wait_5__8 = v116;
      sub_B5D560(&v4->fields._wait_5__8);
LABEL_42:
      p_loader = (MovieFileMerge__Download_d__41_o **)&_4__this->fields.loader;
      this = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_223;
      if ( UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
        goto LABEL_44;
      this = *p_loader;
      if ( !*p_loader )
        goto LABEL_223;
      if ( _4__this->fields.isDownloadCancel )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        _4__this->fields.loader = 0LL;
        sub_B5D560(&_4__this->fields.loader);
        LOBYTE(this) = 0;
        _4__this->fields.isDownloading = 0;
        return (char)this;
      }
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__7 = v4->fields._loadProgress_5__7;
      v133 = downloadProgress;
      v134 = UnityEngine_Time__get_unscaledTime(0LL);
      v135 = v133 == loadProgress_5__7;
      v136 = v134;
      if ( !v135 )
      {
        v185 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v185 = ManagerConfig_TypeInfo;
        }
        v4->fields._requestTime_5__6 = v136 + v185->static_fields->TIMEOUT;
        this = *p_loader;
        if ( *p_loader )
        {
          v4->fields._loadProgress_5__7 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
LABEL_205:
          v4->fields.__2__current = (Il2CppObject *)v4->fields._wait_5__8;
          sub_B5D560(&v4->fields.__2__current);
          v4->fields.__1__state = 2;
          goto LABEL_180;
        }
        goto LABEL_223;
      }
      if ( v134 < v4->fields._requestTime_5__6 )
        goto LABEL_205;
LABEL_44:
      *(_WORD *)&v4->fields._isAutoRetry_5__9 = 0;
      v4->fields._errorCode_5__11 = 0LL;
      p_errorCode_5__11 = &v4->fields._errorCode_5__11;
      sub_B5D560(&v4->fields._errorCode_5__11);
      v4->fields._errorLocalizeCode_5__12 = 0LL;
      sub_B5D560(&v4->fields._errorLocalizeCode_5__12);
      this = *p_loader;
      if ( !*p_loader )
LABEL_223:
        sub_B5D69C(this, method);
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
      {
        *p_errorCode_5__11 = System_String__Concat_44580072(
                               (System_String_o *)StringLiteral_592/*"("*/,
                               _4__this->fields.downloadingURL,
                               (System_String_o *)StringLiteral_664/*")\n\nAssetBundle file download time over"*/,
                               0LL);
LABEL_63:
        sub_B5D560(&v4->fields._errorCode_5__11);
        goto LABEL_133;
      }
      this = *p_loader;
      if ( !*p_loader )
        goto LABEL_223;
      error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      if ( System_String__IsNullOrEmpty(error, 0LL) )
      {
        this = *p_loader;
        if ( !*p_loader )
          goto LABEL_223;
        this = (MovieFileMerge__Download_d__41_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                     (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_223;
        v4->fields._readData_5__5 = UnityEngine_Networking_DownloadHandler__get_data(
                                      (UnityEngine_Networking_DownloadHandler_o *)this,
                                      0LL);
        sub_B5D560(&v4->fields._readData_5__5);
        v4->fields.__2__current = 0LL;
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
        v113 = 3;
        goto LABEL_179;
      }
      this = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_223;
      downloadingURL = _4__this->fields.downloadingURL;
      v138 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      *p_errorCode_5__11 = System_String__Concat_44581200(
                             (System_String_o *)StringLiteral_592/*"("*/,
                             downloadingURL,
                             (System_String_o *)StringLiteral_661/*")\n\n"*/,
                             v138,
                             0LL);
      sub_B5D560(&v4->fields._errorCode_5__11);
      this = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_223;
      ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                          0LL);
      if ( !ResponseHeaders )
        goto LABEL_133;
      v140 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders,
             (const MethodInfo_2F267B8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
        || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
              v140,
              (System_Xml_XmlQualifiedName_o *)StringLiteral_12515/*"STATUS"*/,
              &value,
              (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
      {
        goto LABEL_133;
      }
      v141 = (System_String_o *)value;
      this = (MovieFileMerge__Download_d__41_o *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_223;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_214;
      LOWORD(this->fields.__4__this) = 32;
      if ( !v141 )
        goto LABEL_223;
      this = (MovieFileMerge__Download_d__41_o *)System_String__Split_44638572(v141, (System_Char_array *)this, 1, 0LL);
      if ( !this )
        goto LABEL_223;
      v142 = this;
      if ( SLODWORD(this->fields.__2__current) < 2 )
        goto LABEL_133;
      this = (MovieFileMerge__Download_d__41_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_223;
      this = (MovieFileMerge__Download_d__41_o *)System_String__StartsWith(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_7180/*"HTTP"*/,
                                                   0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_133;
      if ( LODWORD(v142->fields.__2__current) <= 1 )
        goto LABEL_214;
      this = (MovieFileMerge__Download_d__41_o *)v142->fields.fileName;
      if ( !this )
        goto LABEL_223;
      if ( System_String__Equals_44565128((System_String_o *)this, (System_String_o *)StringLiteral_1212/*"503"*/, 0LL) )
      {
        v143 = v4->fields._autoRetryCount_5__3 + 1;
        v4->fields._isAutoRetry_5__9 = 1;
        v4->fields._autoRetryCount_5__3 = v143;
        v144 = _4__this->fields.downloadingURL;
        v145 = System_Int32__ToString((int)v4 + 64, 0LL);
        v4->fields._errorCode_5__11 = System_String__Concat_44581200(
                                        (System_String_o *)StringLiteral_592/*"("*/,
                                        v144,
                                        (System_String_o *)StringLiteral_662/*")\n\n503 Auto retry count "*/,
                                        v145,
                                        0LL);
        goto LABEL_63;
      }
      goto LABEL_133;
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      goto LABEL_42;
    case 3:
      v4->fields.__1__state = -1;
      readData_5__5 = v4->fields._readData_5__5;
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v111 = Crc32__Compute(readData_5__5, 0LL);
      v4->fields.__2__current = 0LL;
      p__2__current = &v4->fields.__2__current;
      *((_DWORD *)p__2__current + 24) = v111;
      sub_B5D560(p__2__current);
      v113 = 4;
      goto LABEL_179;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      downloadingCRC = _4__this->fields.downloadingCRC;
      if ( v4->fields._downloadCrc_5__13 != downloadingCRC && downloadingCRC )
      {
        this = (MovieFileMerge__Download_d__41_o *)sub_B5D5DC(string___TypeInfo, 7LL);
        if ( !this )
          goto LABEL_223;
        v103 = (System_String_array *)this;
        this = (MovieFileMerge__Download_d__41_o *)StringLiteral_592/*"("*/;
        if ( StringLiteral_592/*"("*/ )
        {
          this = (MovieFileMerge__Download_d__41_o *)sub_B5D684(StringLiteral_592/*"("*/, v103->obj.klass->_1.element_class);
          if ( !this )
            goto LABEL_215;
          v104 = StringLiteral_592/*"("*/;
        }
        else
        {
          v104 = 0LL;
        }
        if ( !v103->max_length )
          goto LABEL_214;
        v103->m_Items[0] = (System_String_o *)v104;
        sub_B5D560(v103->m_Items);
        v146 = _4__this->fields.downloadingURL;
        if ( !v146
          || (this = (MovieFileMerge__Download_d__41_o *)sub_B5D684(
                                                           _4__this->fields.downloadingURL,
                                                           v103->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v103->max_length <= 1 )
            goto LABEL_214;
          v103->m_Items[1] = v146;
          sub_B5D560(&v103->m_Items[1]);
          this = (MovieFileMerge__Download_d__41_o *)StringLiteral_663/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
          if ( StringLiteral_663/*")\n\nAssetBundle file check sum error\nlist crc ("*/ )
          {
            this = (MovieFileMerge__Download_d__41_o *)sub_B5D684(StringLiteral_663/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v103->obj.klass->_1.element_class);
            if ( !this )
              goto LABEL_215;
            v147 = StringLiteral_663/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
          }
          else
          {
            v147 = 0LL;
          }
          if ( v103->max_length <= 2 )
            goto LABEL_214;
          v103->m_Items[2] = (System_String_o *)v147;
          sub_B5D560(&v103->m_Items[2]);
          this = (MovieFileMerge__Download_d__41_o *)System_UInt32__ToString((int)_4__this + 88, 0LL);
          v148 = this;
          if ( !this
            || (this = (MovieFileMerge__Download_d__41_o *)sub_B5D684(this, v103->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v103->max_length <= 3 )
              goto LABEL_214;
            v103->m_Items[3] = (System_String_o *)v148;
            sub_B5D560(&v103->m_Items[3]);
            this = (MovieFileMerge__Download_d__41_o *)StringLiteral_665/*")\nfile crc ("*/;
            if ( StringLiteral_665/*")\nfile crc ("*/ )
            {
              this = (MovieFileMerge__Download_d__41_o *)sub_B5D684(
                                                           StringLiteral_665/*")\nfile crc ("*/,
                                                           v103->obj.klass->_1.element_class);
              if ( !this )
                goto LABEL_215;
              v149 = StringLiteral_665/*")\nfile crc ("*/;
            }
            else
            {
              v149 = 0LL;
            }
            if ( v103->max_length <= 4 )
              goto LABEL_214;
            v103->m_Items[4] = (System_String_o *)v149;
            sub_B5D560(&v103->m_Items[4]);
            this = (MovieFileMerge__Download_d__41_o *)System_UInt32__ToString((int)v4 + 120, 0LL);
            v150 = this;
            if ( !this
              || (this = (MovieFileMerge__Download_d__41_o *)sub_B5D684(this, v103->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v103->max_length <= 5 )
                goto LABEL_214;
              v103->m_Items[5] = (System_String_o *)v150;
              sub_B5D560(&v103->m_Items[5]);
              this = (MovieFileMerge__Download_d__41_o *)StringLiteral_659/*")"*/;
              if ( !StringLiteral_659/*")"*/ )
              {
                v151 = 0LL;
LABEL_131:
                if ( v103->max_length > 6 )
                {
                  v103->m_Items[6] = (System_String_o *)v151;
                  sub_B5D560(&v103->m_Items[6]);
                  v4->fields._errorCode_5__11 = System_String__Concat_44657912(v103, 0LL);
                  sub_B5D560(&v4->fields._errorCode_5__11);
                  v4->fields._isCrcError_5__10 = 1;
                  goto LABEL_133;
                }
LABEL_214:
                v189 = sub_B5D6C8(this);
                sub_B5D668(v189, 0LL);
              }
              this = (MovieFileMerge__Download_d__41_o *)sub_B5D684(
                                                           StringLiteral_659/*")"*/,
                                                           v103->obj.klass->_1.element_class);
              if ( this )
              {
                v151 = StringLiteral_659/*")"*/;
                goto LABEL_131;
              }
            }
          }
        }
LABEL_215:
        v190 = sub_B5D6BC();
        sub_B5D668(v190, 0LL);
      }
      Parent = System_IO_Directory__GetParent(v4->fields._dlFilePath_5__2, 0LL);
      v123 = Parent;
      if ( !Parent )
        sub_B5D69C(0LL, v122);
      if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._9_get_Exists.method)(
              Parent,
              Parent->klass->vtable._10_Delete.methodPtr) & 1) == 0 )
      {
        v124 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v123->klass->vtable._7_get_FullName.method)(
                                    v123,
                                    v123->klass->vtable._8_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v124, 0LL);
      }
      v125 = MovieFileMerge__GetLocalFolderPath(_4__this, 0LL);
      if ( (BYTE3(CommonServicePluginScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      }
      FreeSize = CommonServicePluginScript__GetFreeSize(v125, 0LL);
      if ( FreeSize >= 1 )
      {
        v127 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v127 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v127->static_fields->LIMIT_FREE_SIZE )
        {
          v191 = sub_B5D5C8(&System_IO_IOException_TypeInfo);
          v192 = (System_IO_IOException_o *)sub_B5D694(v191);
          v193 = (System_String_o *)sub_B5D5C8(&StringLiteral_5396/*"Disk full"*/);
          System_IO_IOException___ctor_39731552(v192, v193, 0LL);
          v194 = sub_B5D5C8(&Method_MovieFileMerge__Download_d__41_MoveNext__);
          sub_B5D668(v192, v194);
        }
      }
      if ( System_IO_File__Exists(v4->fields._dlFilePath_5__2, 0LL) )
        System_IO_File__Delete(v4->fields._dlFilePath_5__2, 0LL);
      ++_4__this->fields.downloadProgress;
      System_IO_File__WriteAllBytes(v4->fields._dlFilePath_5__2, v4->fields._readData_5__5, 0LL);
      v4->fields._isDownload_5__4 = 0;
LABEL_133:
      method = (const MethodInfo *)v4->fields._errorCode_5__11;
      if ( method )
      {
        MovieFileMerge__AssetLoadLogError(_4__this, (System_String_o *)method, 0LL);
        v152 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v152 = ManagerConfig_TypeInfo;
        }
        if ( v152->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorCode_5__11 = v4->fields._errorCode_5__11;
          v155 = (CommonUI_o *)Instance;
          v156 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(
            v156,
            (Il2CppObject *)_4__this,
            Method_MovieFileMerge_EndWarningDialog__,
            0LL);
          if ( !v155 )
            goto LABEL_223;
          effectDistance.fields.value = 0LL;
          *(_DWORD *)&effectDistance.fields.has_value = 0;
          CommonUI__OpenWarningDialog(
            v155,
            (System_String_o *)StringLiteral_15935/*"[FFFF80]Download error for debug"*/,
            errorCode_5__11,
            v156,
            1,
            0,
            -1.0,
            1,
            effectDistance,
            0LL);
LABEL_140:
          if ( _4__this->fields.isErrorDialog )
          {
            v157 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v157, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v157;
            p__2__current = &v4->fields.__2__current;
            sub_B5D560(p__2__current);
            v113 = 5;
            goto LABEL_179;
          }
        }
        if ( v4->fields._isAutoRetry_5__9 )
        {
          autoRetryCount_5__3 = v4->fields._autoRetryCount_5__3;
          v159 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v159 = ManagerConfig_TypeInfo;
          }
          DOWNLOAD_RETRY_DELAY_TIME = v159->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
          v161 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v161, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v161;
          p__2__current = &v4->fields.__2__current;
          sub_B5D560(p__2__current);
          v113 = 6;
          goto LABEL_179;
        }
        v162 = (Il2CppObject *)v4->fields._errorCode_5__11;
        if ( v4->fields._isCrcError_5__10 )
        {
          if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__LogError(v162, 0LL);
        }
        else
        {
          MovieFileMerge__AssetLoadLogError(_4__this, v4->fields._errorCode_5__11, 0LL);
          _4__this->fields.isErrorDialog = 1;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          if ( !byte_42E5AE3 )
          {
            sub_B5D5C4(&ManagementManager_TypeInfo, v173, v174, v175);
            byte_42E5AE3 = 1;
          }
          v176 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v176 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v176->static_fields->isDuringStartup;
          v178 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorLocalizeCode_5__12 = v4->fields._errorLocalizeCode_5__12;
          v180 = (CommonUI_o *)v178;
          v181 = (System_String_o *)StringLiteral_1/*""*/;
          if ( isDuringStartup )
          {
            if ( errorLocalizeCode_5__12 )
              v182 = v4->fields._errorLocalizeCode_5__12;
            else
              v182 = (System_String_o *)StringLiteral_1766/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v183 = LocalizationManager__Get(v182, 0LL);
            v184 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v184,
              (Il2CppObject *)_4__this,
              Method_MovieFileMerge_EndRetryDialog__,
              0LL);
            if ( !v180 )
              goto LABEL_223;
            CommonUI__OpenRetryBootDialog(v180, v181, v183, v184, 1, 0LL);
          }
          else
          {
            if ( errorLocalizeCode_5__12 )
              v186 = v4->fields._errorLocalizeCode_5__12;
            else
              v186 = (System_String_o *)StringLiteral_1767/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v187 = LocalizationManager__Get(v186, 0LL);
            v188 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v188,
              (Il2CppObject *)_4__this,
              Method_MovieFileMerge_EndRetryDialog__,
              0LL);
            if ( !v180 )
              goto LABEL_223;
            CommonUI__OpenRetryDialog(v180, v181, v187, v188, 1, 0LL);
          }
LABEL_35:
          if ( _4__this->fields.isErrorDialog )
          {
            v114 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v114, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v114;
            p__2__current = &v4->fields.__2__current;
            sub_B5D560(p__2__current);
            v113 = 7;
            goto LABEL_179;
          }
        }
      }
LABEL_152:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !byte_42E5FA0 )
      {
        sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
        byte_42E5FA0 = 1;
      }
      this = (MovieFileMerge__Download_d__41_o *)NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (MovieFileMerge__Download_d__41_o *)NetworkManager_TypeInfo;
      }
      if ( LOBYTE(this[1].fields._dlFilePath_5__2[5].fields.m_stringLength) )
      {
        if ( !_4__this )
          goto LABEL_223;
        loader = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
        v163 = &_4__this->fields.loader;
        this = loader;
        if ( !loader )
          goto LABEL_223;
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        *v163 = 0LL;
        sub_B5D560(v163);
        v4->fields._readData_5__5 = 0LL;
        v165 = &v4->fields._readData_5__5;
      }
      else
      {
        if ( !_4__this )
          goto LABEL_223;
        p_isDownload_5__4 = &v4->fields._isDownload_5__4;
        v166 = &_4__this->fields.loader;
        this = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
        if ( v4->fields._isDownload_5__4 )
        {
          if ( !this )
            goto LABEL_223;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          *v166 = 0LL;
          sub_B5D560(&_4__this->fields.loader);
          v4->fields._readData_5__5 = 0LL;
          p_readData_5__5 = &v4->fields._readData_5__5;
          sub_B5D560(&v4->fields._readData_5__5);
          if ( !v4->fields._isCrcError_5__10 )
          {
LABEL_177:
            v4->fields._wait_5__8 = 0LL;
            sub_B5D560(&v4->fields._wait_5__8);
            v4->fields._errorCode_5__11 = 0LL;
            sub_B5D560(&v4->fields._errorCode_5__11);
            v4->fields._errorLocalizeCode_5__12 = 0LL;
            sub_B5D560(&v4->fields._errorLocalizeCode_5__12);
            do
            {
              *p_readData_5__5 = 0LL;
              sub_B5D560(p_readData_5__5);
LABEL_218:
              *p_readData_5__5 = 0LL;
              sub_B5D560(p_readData_5__5);
            }
            while ( !*p_isDownload_5__4 );
            _4__this->fields.loader = UnityEngine_Networking_UnityWebRequest__Get(_4__this->fields.downloadingURL, 0LL);
            sub_B5D560(&_4__this->fields.loader);
            this = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
            if ( this )
            {
              UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                (UnityEngine_Networking_UnityWebRequest_o *)this,
                0LL);
              v4->fields.__2__current = 0LL;
              v195 = &v4->fields.__2__current;
              sub_B5D560(v195);
              LOBYTE(this) = 1;
              *((_DWORD *)v195 - 2) = 1;
              return (char)this;
            }
            goto LABEL_223;
          }
          if ( !v4->fields._errorCode_5__11 )
            goto LABEL_178;
          v167 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v167 = ManagerConfig_TypeInfo;
          }
          if ( !v167->static_fields->UseDebugCommand )
            goto LABEL_178;
          _4__this->fields.isErrorDialog = 1;
          v168 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v169 = v4->fields._errorCode_5__11;
          v170 = (CommonUI_o *)v168;
          v171 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(
            v171,
            (Il2CppObject *)_4__this,
            Method_MovieFileMerge_EndWarningDialog__,
            0LL);
          if ( !v170 )
            goto LABEL_223;
          effectDistancea.fields.value = 0LL;
          *(_DWORD *)&effectDistancea.fields.has_value = 0;
          CommonUI__OpenWarningDialog(
            v170,
            (System_String_o *)StringLiteral_15935/*"[FFFF80]Download error for debug"*/,
            v169,
            v171,
            1,
            0,
            -1.0,
            1,
            effectDistancea,
            0LL);
LABEL_60:
          if ( _4__this->fields.isErrorDialog )
          {
            v120 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v120, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v120;
            p__2__current = &v4->fields.__2__current;
            sub_B5D560(p__2__current);
            v113 = 8;
          }
          else
          {
LABEL_178:
            v172 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v172, 1.0, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v172;
            p__2__current = &v4->fields.__2__current;
            sub_B5D560(p__2__current);
            v113 = 9;
          }
LABEL_179:
          *((_DWORD *)p__2__current - 2) = v113;
LABEL_180:
          LOBYTE(this) = 1;
          return (char)this;
        }
        if ( !this )
          return (char)this;
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        v165 = (struct System_Byte_array **)&_4__this->fields.loader;
        *v166 = 0LL;
      }
      sub_B5D560(v165);
LABEL_165:
      LOBYTE(this) = 0;
      return (char)this;
    case 5:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      goto LABEL_140;
    case 6:
      v4->fields.__1__state = -1;
      goto LABEL_152;
    case 7:
      v4->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_35;
      goto LABEL_223;
    case 8:
      v4->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_60;
      goto LABEL_223;
    case 9:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      _4__this->fields.isErrorDialog = 1;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      }
      if ( !byte_42E5AE3 )
      {
        sub_B5D5C4(&ManagementManager_TypeInfo, (_DWORD)method, v2, v3);
        byte_42E5AE3 = 1;
      }
      v105 = ManagementManager_TypeInfo;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v105 = ManagementManager_TypeInfo;
      }
      v106 = v105->static_fields->isDuringStartup;
      v107 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v106 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v108 = LocalizationManager__Get((System_String_o *)StringLiteral_1766/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
        v109 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v109, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v107 )
          goto LABEL_223;
        CommonUI__OpenRetryBootDialog(v107, (System_String_o *)StringLiteral_1/*""*/, v108, v109, 1, 0LL);
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v128 = LocalizationManager__Get((System_String_o *)StringLiteral_1767/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v129 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v129, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v107 )
          goto LABEL_223;
        CommonUI__OpenRetryDialog(v107, (System_String_o *)StringLiteral_1/*""*/, v128, v129, 1, 0LL);
      }
LABEL_83:
      if ( _4__this->fields.isErrorDialog )
      {
        v130 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v130, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v130;
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
        v113 = 10;
        goto LABEL_179;
      }
      p_readData_5__5 = &v4->fields._readData_5__5;
      p_isDownload_5__4 = &v4->fields._isDownload_5__4;
      goto LABEL_177;
    case 0xA:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      goto LABEL_83;
    default:
      goto LABEL_165;
  }
}


Il2CppObject *__fastcall MovieFileMerge__Download_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__Download_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__Download_d__41__System_Collections_IEnumerator_Reset(
        MovieFileMerge__Download_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MovieFileMerge__Download_d__41_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__Download_d__41__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__Download_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__Download_d__41__System_IDisposable_Dispose(
        MovieFileMerge__Download_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MovieFileMerge__Merge_d__35___ctor(
        MovieFileMerge__Merge_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__Merge_d__35__MoveNext(MovieFileMerge__Merge_d__35_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MovieFileMerge__Merge_d__35_o *v4; // x19
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
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  System_Collections_Generic_List_string__o *SplitFileList; // x0
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_List_string__o *v27; // x22
  FileMergeAndSplit_Merge_o *v28; // x23
  FileMergeAndSplit_Merge_o *mergeClass; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v30; // x22
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct FileMergeAndSplit_Merge_o *v33; // x8
  System_String_o *v34; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v36; // x22
  FileMergeAndSplit_CRCChecker_o *v37; // x23
  Il2CppObject **v38; // x19

  v4 = this;
  if ( (byte_42E5F71 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_Exception___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_Exception__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&FileMergeAndSplit_CRCChecker_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_uint___, v14, v15, v16);
    sub_B5D5C4(&FileMergeAndSplit_Merge_TypeInfo, v17, v18, v19);
    this = (MovieFileMerge__Merge_d__35_o *)sub_B5D5C4(&Method_MovieFileMerge__Merge_b__35_0__, v20, v21, v22);
    byte_42E5F71 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    if ( MovieFileMerge__IsCRCMatch(_4__this, 0LL) )
    {
      if ( System_IO_Directory__Exists(_4__this->fields.outputSplitFileFolder, 0LL) )
        System_IO_Directory__Delete_44512988(_4__this->fields.outputSplitFileFolder, 1, 0LL);
      if ( System_IO_File__Exists(_4__this->fields.outputMergeFileCRC, 0LL) )
        System_IO_File__Delete(_4__this->fields.outputMergeFileCRC, 0LL);
    }
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v4->fields.__1__state = -1;
      if ( _4__this )
      {
        _4__this->fields.mergeProgress = 0.0;
        SplitFileList = MovieFileMerge__GetSplitFileList(_4__this, 0LL);
        outputMergeFile = _4__this->fields.outputMergeFile;
        v27 = SplitFileList;
        v28 = (FileMergeAndSplit_Merge_o *)sub_B5D694(FileMergeAndSplit_Merge_TypeInfo);
        FileMergeAndSplit_Merge___ctor(v28, v27, outputMergeFile, 0LL);
        _4__this->fields.mergeClass = v28;
        sub_B5D560(&_4__this->fields.mergeClass);
        mergeClass = _4__this->fields.mergeClass;
        v30 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Exception__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v30,
          (Il2CppObject *)_4__this,
          Method_MovieFileMerge__Merge_b__35_0__,
          (const MethodInfo_258B320 *)Method_System_Action_Exception___ctor__);
        if ( mergeClass )
        {
          v4->fields.__2__current = (Il2CppObject *)FileMergeAndSplit_Merge__Run(
                                                      mergeClass,
                                                      (System_Action_Exception__o *)v30,
                                                      0LL);
          p__2__current = &v4->fields.__2__current;
          sub_B5D560(p__2__current);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_22:
      sub_B5D69C(this, method);
    }
    return 0;
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  v33 = _4__this->fields.mergeClass;
  if ( !v33 )
    goto LABEL_22;
  if ( v33->fields.isError )
    return 0;
  this = (MovieFileMerge__Merge_d__35_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_22;
  v34 = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_string__uint___get_Values(
             (System_Collections_Generic_Dictionary_string__uint__o *)this,
             (const MethodInfo_2EC95E0 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v36 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_1CBA864 *)Method_System_Linq_Enumerable_ToList_uint___);
  v37 = (FileMergeAndSplit_CRCChecker_o *)sub_B5D694(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v37, v34, v36, 0LL);
  _4__this->fields.crcCheckerClass = v37;
  sub_B5D560(&_4__this->fields.crcCheckerClass);
  this = (MovieFileMerge__Merge_d__35_o *)_4__this->fields.crcCheckerClass;
  if ( !this )
    goto LABEL_22;
  v4->fields.__2__current = (Il2CppObject *)FileMergeAndSplit_CRCChecker__Run(
                                              (FileMergeAndSplit_CRCChecker_o *)this,
                                              0LL);
  v38 = &v4->fields.__2__current;
  sub_B5D560(v38);
  *((_DWORD *)v38 - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall MovieFileMerge__Merge_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__Merge_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__Merge_d__35__System_Collections_IEnumerator_Reset(
        MovieFileMerge__Merge_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MovieFileMerge__Merge_d__35_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__Merge_d__35__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__Merge_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__Merge_d__35__System_IDisposable_Dispose(
        MovieFileMerge__Merge_d__35_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MovieFileMerge__PlayCRIMovie_d__31___ctor(
        MovieFileMerge__PlayCRIMovie_d__31_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__PlayCRIMovie_d__31__MoveNext(
        MovieFileMerge__PlayCRIMovie_d__31_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MovieFileMerge__PlayCRIMovie_d__31_o *v4; // x19
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
  int32_t _1__state; // w8
  Il2CppObject *v30; // x21
  Il2CppObject **p__8__1; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x21
  Il2CppObject *v33; // x21
  int v34; // w2
  __int64 v35; // x3
  CRIMoviePlayer_o *klass; // x21
  System_String_o *filePath; // x22
  BgmManager_c *v38; // x0
  Il2CppObject *v39; // x24
  float masterVolume; // s8
  System_Action_o *v41; // x23
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_42E5F72 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BgmManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_GameObject___, v17, v18, v19);
    sub_B5D5C4(&Method_MovieFileMerge___c__DisplayClass31_0__PlayCRIMovie_b__0__, v20, v21, v22);
    sub_B5D5C4(&MovieFileMerge___c__DisplayClass31_0_TypeInfo, v23, v24, v25);
    this = (MovieFileMerge__PlayCRIMovie_d__31_o *)sub_B5D5C4(&StringLiteral_3502/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v26, v27, v28);
    byte_42E5F72 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    v30 = (Il2CppObject *)sub_B5D694(MovieFileMerge___c__DisplayClass31_0_TypeInfo);
    System_Object___ctor(v30, 0LL);
    p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
    v4->fields.__8__1 = (struct MovieFileMerge___c__DisplayClass31_0_o *)v30;
    sub_B5D560(&v4->fields.__8__1);
    UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                          (System_String_o *)StringLiteral_3502/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
                                                          (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (MovieFileMerge__PlayCRIMovie_d__31_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                     UIAtlas,
                                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_29;
    v33 = *p__8__1;
    this = (MovieFileMerge__PlayCRIMovie_d__31_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    if ( !v33 )
      goto LABEL_29;
    v33[1].klass = (Il2CppClass *)this;
    sub_B5D560(&v33[1]);
    if ( !*p__8__1 )
      goto LABEL_29;
    LOBYTE((*p__8__1)[1].monitor) = 1;
    if ( !*p__8__1 )
      goto LABEL_29;
    klass = (CRIMoviePlayer_o *)(*p__8__1)[1].klass;
    filePath = v4->fields.filePath;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_42E4CBD )
    {
      sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v34, v35);
      byte_42E4CBD = 1;
    }
    v38 = BgmManager_TypeInfo;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v38 = BgmManager_TypeInfo;
    }
    v39 = *p__8__1;
    masterVolume = v38->static_fields->masterVolume;
    v41 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v41, v39, Method_MovieFileMerge___c__DisplayClass31_0__PlayCRIMovie_b__0__, 0LL);
    if ( !klass
      || (CRIMoviePlayer__Initialize(klass, filePath, filePath, masterVolume, 1, 0LL, v41, 1, 0LL, 0, 0, 1, 0LL),
          !*p__8__1)
      || (this = (MovieFileMerge__PlayCRIMovie_d__31_o *)(*p__8__1)[1].klass) == 0LL )
    {
LABEL_29:
      sub_B5D69C(this, method);
    }
    CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)this, 1, 1, 1, 0LL);
  }
  if ( !*p__8__1 )
    goto LABEL_29;
  if ( LOBYTE((*p__8__1)[1].monitor) )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = &v4->fields.__2__current;
    sub_B5D560(p__2__current);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall MovieFileMerge__PlayCRIMovie_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__PlayCRIMovie_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__PlayCRIMovie_d__31__System_Collections_IEnumerator_Reset(
        MovieFileMerge__PlayCRIMovie_d__31_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MovieFileMerge__PlayCRIMovie_d__31_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__PlayCRIMovie_d__31__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__PlayCRIMovie_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__PlayCRIMovie_d__31__System_IDisposable_Dispose(
        MovieFileMerge__PlayCRIMovie_d__31_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MovieFileMerge__PlayMP4_d__29___ctor(
        MovieFileMerge__PlayMP4_d__29_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__PlayMP4_d__29__MoveNext(
        MovieFileMerge__PlayMP4_d__29_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  struct MovieFileMerge_o *_4__this; // x0
  int32_t v6; // w8

  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v6 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_B5D69C(0LL, method);
    this->fields.__2__current = (Il2CppObject *)MovieFileMerge__PlayMP4_22834032(
                                                  _4__this,
                                                  _4__this->fields.outputMergeFile,
                                                  0,
                                                  0LL);
    sub_B5D560(&this->fields.__2__current);
    v6 = 1;
    result = 1;
  }
  this->fields.__1__state = v6;
  return result;
}


Il2CppObject *__fastcall MovieFileMerge__PlayMP4_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__PlayMP4_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__PlayMP4_d__29__System_Collections_IEnumerator_Reset(
        MovieFileMerge__PlayMP4_d__29_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MovieFileMerge__PlayMP4_d__29_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__PlayMP4_d__29__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__PlayMP4_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__PlayMP4_d__29__System_IDisposable_Dispose(
        MovieFileMerge__PlayMP4_d__29_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MovieFileMerge__PlayMP4_d__30___ctor(
        MovieFileMerge__PlayMP4_d__30_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__PlayMP4_d__30__MoveNext(
        MovieFileMerge__PlayMP4_d__30_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *filePath; // x0
  MovieFileMerge_o *_4__this; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v10; // x20
  int32_t v11; // w8
  UnityEngine_WaitForEndOfFrame_o *v12; // x20

  if ( (byte_42E5F73 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_WaitForEndOfFrame_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5F73 = 1;
  }
  switch ( this->fields.__1__state )
  {
    case 0:
      filePath = this->fields.filePath;
      _4__this = this->fields.__4__this;
      this->fields.__1__state = -1;
      IsNullOrEmpty = System_String__IsNullOrEmpty(filePath, 0LL);
      if ( IsNullOrEmpty )
        goto LABEL_5;
      if ( !_4__this )
        sub_B5D69C(IsNullOrEmpty, v8);
      this->fields.__2__current = (Il2CppObject *)MovieFileMerge__PlayCRIMovie(_4__this, this->fields.filePath, 0LL);
      sub_B5D560(&this->fields.__2__current);
      result = 1;
      this->fields.__1__state = 1;
      break;
    case 1:
      this->fields.__1__state = -1;
      v12 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v12, 0LL);
      this->fields.__2__current = (Il2CppObject *)v12;
      sub_B5D560(&this->fields.__2__current);
      v11 = 2;
      goto LABEL_9;
    case 2:
      this->fields.__1__state = -1;
      v10 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v10, 0LL);
      this->fields.__2__current = (Il2CppObject *)v10;
      sub_B5D560(&this->fields.__2__current);
      v11 = 3;
LABEL_9:
      this->fields.__1__state = v11;
      result = 1;
      break;
    case 3:
      result = 0;
      this->fields.__1__state = -1;
      break;
    default:
LABEL_5:
      result = 0;
      break;
  }
  return result;
}


Il2CppObject *__fastcall MovieFileMerge__PlayMP4_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__PlayMP4_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__PlayMP4_d__30__System_Collections_IEnumerator_Reset(
        MovieFileMerge__PlayMP4_d__30_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MovieFileMerge__PlayMP4_d__30_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__PlayMP4_d__30__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__PlayMP4_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__PlayMP4_d__30__System_IDisposable_Dispose(
        MovieFileMerge__PlayMP4_d__30_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MovieFileMerge___c__DisplayClass31_0___ctor(
        MovieFileMerge___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MovieFileMerge___c__DisplayClass31_0___PlayCRIMovie_b__0(
        MovieFileMerge___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    sub_B5D69C(0LL, method);
  CRIMoviePlayer__Dispose(player, 0LL);
  this->fields.wait = 0;
}