void VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E787B7 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
    byte_4E787B7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    136,
    (const MethodInfo_3538564 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
}


UserServantCollectionEntity_o *VoiceMaster__GetSyncUserServantCollectionEntity(
        VoiceMaster_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        int32_t svtVoiceType,
        const MethodInfo *method)
{
  ServantVoiceMaster_o *Master_object; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *v12; // x19
  NetworkManager_c *v13; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x19
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+0h] [xbp-70h] BYREF
  int32_t syncSvtId; // [xsp+1Ch] [xbp-54h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4E787BC & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantVoiceMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceEntity__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceEntity__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceEntity__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantVoiceEntity__GetEnumerator__);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E787BC = 1;
  }
  memset(&v18, 0, sizeof(v18));
  syncSvtId = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantVoiceMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
  if ( !Master_object
    || (Master_object = (ServantVoiceMaster_o *)ServantVoiceMaster__getEntity_44191544(
                                                  Master_object,
                                                  svtVoiceType,
                                                  svtId,
                                                  0)) == 0 )
  {
    sub_1D0F30C(Master_object, v9);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_ServantVoiceEntity__GetEnumerator__);
  v18 = v16;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceEntity__MoveNext__) )
    {
      EntityDefinitely = 0;
      goto LABEL_22;
    }
    if ( !v18.fields._current )
      sub_1D0F30C(0, v10);
  }
  while ( !ServantVoiceEntity__TryGetSyncServantId((ServantVoiceEntity_o *)v18.fields._current, &syncSvtId, voiceId, 0) );
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v12 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4E710BF )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E710BF = 1;
  }
  v13 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v13 = NetworkManager_TypeInfo;
  }
  if ( !v12 )
    sub_1D0F30C(v13, v11);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)v12,
                       v13->static_fields->userIdNumber,
                       syncSvtId,
                       0);
LABEL_22:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceEntity__Dispose__);
  return EntityDefinitely;
}


VoiceInfo_array *VoiceMaster__getEnableInfo(
        VoiceMaster_o *this,
        int32_t svtId,
        int32_t changeSvtVoiceId,
        int32_t limitCount,
        System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList,
        bool isCheckPlayCond,
        bool isMaterial,
        const MethodInfo *method)
{
  __int64 v15; // x23
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  ServantVoiceEntity_array *Entity_44193060; // x29
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  __int64 v28; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v30; // w26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  VoiceEntity_o *v41; // x19
  __int64 naturalAligment; // x10
  __int64 v43; // x8
  ServantVoiceEntity_o *v44; // x27
  __int64 v45; // x0
  System_String_o *v46; // x24
  System_String_o *v47; // x0
  System_String_o *v48; // x22
  System_Collections_Generic_List_object__o *VoiceList_44177296; // x0
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x9
  __int64 v53; // x8
  __int64 v54; // x1
  Il2CppObject *Master_object; // x27
  NetworkManager_c *v56; // x0
  __int64 v57; // x8
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  DataManager_c *v65; // x0
  __int64 v66; // x1
  const MethodInfo *v67; // x2
  __int64 v68; // x1
  Il2CppObject *v69; // x22
  NetworkManager_c *v70; // x0
  UserServantCollectionEntity_o *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  int condType; // w8
  GrandQuestFolderBoardItem_c *v79; // x8
  __int64 v80; // x27
  __int64 v81; // x22
  __int64 v82; // x0
  __int64 v83; // x1
  _BOOL4 IsEnable; // w0
  int32_t parameters_high; // w22
  _BOOL8 IsQuestClear_41684364; // x0
  __int64 v87; // x1
  int v88; // w22
  int v89; // w27
  VoiceCondMaster_o *v90; // x0
  GrandQuestFolderBoardItem_c *v91; // x8
  __int64 v92; // x27
  __int64 v93; // x22
  __int64 v94; // x0
  __int64 v95; // x1
  const Il2CppType *v96; // x14
  __int64 v97; // x11
  __int64 v98; // x27
  char v99; // w9
  char v100; // w10
  char v101; // w8
  __int64 v102; // x22
  unsigned int v103; // w11
  Il2CppObject *v104; // x0
  __int64 v105; // x1
  Il2CppObject *v106; // x0
  __int64 v107; // x1
  Il2CppObject *v108; // x0
  __int64 v109; // x1
  VoiceCondMaster_o *v110; // x0
  Il2CppObject *v111; // x0
  __int64 v112; // x1
  Il2CppObject *v113; // x0
  __int64 v114; // x1
  _BOOL8 v115; // x0
  __int64 v116; // x1
  const Il2CppType *v117; // x13
  __int64 v118; // x11
  __int64 v119; // x22
  char v120; // w8
  char v121; // w10
  char v122; // w9
  __int64 v123; // x27
  unsigned int v124; // w11
  Il2CppObject *v125; // x0
  __int64 v126; // x1
  Il2CppObject *v127; // x0
  __int64 v128; // x1
  Il2CppObject *v129; // x0
  __int64 v130; // x1
  int32_t v131; // w27
  _BOOL8 v132; // x0
  __int64 v133; // x1
  __int64 v134; // x1
  __int64 v135; // x1
  GrandQuestFolderBoardItem_c *v136; // x8
  __int64 v137; // x27
  __int64 v138; // x22
  __int64 v139; // x1
  int32_t condValue; // w27
  __int64 v141; // x1
  __int64 v142; // x1
  __int64 v143; // x1
  const Il2CppType *return_type; // x12
  __int64 v145; // x10
  __int64 v146; // x22
  char v147; // w13
  char v148; // w9
  char v149; // w8
  __int64 v150; // x27
  unsigned int v151; // w10
  Il2CppObject *v152; // x0
  __int64 v153; // x1
  _BOOL8 v154; // x0
  __int64 v155; // x1
  Il2CppClass *v156; // x27
  bool v157; // w8
  NetworkManager_c *v158; // x0
  struct NetworkManager_StaticFields *static_fields; // x9
  char v160; // w27
  UserGameEntity_o *SelfUserGame; // x0
  int64_t v162; // x1
  BalanceConfig_c *v163; // x0
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x22
  System_Func_int__bool__o *v165; // x27
  int32_t v166; // w2
  int32_t v167; // w3
  System_String_o *v168; // x4
  int32_t v169; // w5
  int64_t v170; // x6
  System_String_o *v171; // x7
  BalanceConfig_c *v172; // x0
  __int64 v173; // x1
  const MethodInfo *v174; // x3
  int64_t VtReleaseAt; // x8
  void *methods; // x22
  bool isEnableBirthdayVoice; // w22
  Il2CppObject *v178; // x0
  __int64 v179; // x1
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v181; // x3
  _BOOL8 v182; // x0
  int v183; // w27
  __int64 v184; // x24
  __int64 v185; // x0
  __int64 v186; // x1
  int32_t v187; // w2
  int32_t v188; // w3
  System_String_o *v189; // x4
  int32_t v190; // w5
  int64_t v191; // x6
  System_String_o *v192; // x7
  int32_t name; // w1
  int32_t v194; // w2
  int32_t v195; // w3
  System_String_o *v196; // x4
  int32_t v197; // w5
  int64_t v198; // x6
  System_String_o *v199; // x7
  int32_t invoker_method; // w1
  int32_t v201; // w2
  int32_t v202; // w3
  System_String_o *v203; // x4
  int32_t v204; // w5
  int64_t v205; // x6
  System_String_o *v206; // x7
  int v207; // w8
  int32_t v208; // w1
  int32_t v209; // w2
  int32_t v210; // w3
  System_String_o *v211; // x4
  int32_t v212; // w5
  int64_t v213; // x6
  System_String_o *v214; // x7
  int32_t methodPointer; // w1
  int32_t v216; // w2
  int32_t v217; // w3
  System_String_o *v218; // x4
  int32_t v219; // w5
  int64_t v220; // x6
  System_String_o *v221; // x7
  __int64 v222; // x0
  __int64 v223; // x1
  int32_t v224; // w2
  int32_t v225; // w3
  System_String_o *v226; // x4
  int32_t v227; // w5
  int64_t v228; // x6
  System_String_o *v229; // x7
  struct System_Object_array *items; // x8
  _QWORD *v231; // x9
  __int64 size; // x10
  Il2CppClass **v233; // x0
  System_Collections_Generic_IEnumerator_T__c *v234; // x8
  __int64 v235; // x9
  int32_t *v236; // x10
  __int64 v237; // x0
  VoiceInfo_array *result; // x0
  ServantVoiceSync_array **sync; // [xsp+0h] [xbp-140h]
  unsigned int v240; // [xsp+28h] [xbp-118h]
  int32_t v241; // [xsp+2Ch] [xbp-114h]
  const Il2CppType *v242; // [xsp+30h] [xbp-110h]
  const Il2CppType *v243; // [xsp+30h] [xbp-110h]
  const Il2CppType *v244; // [xsp+30h] [xbp-110h]
  int32_t voicePrefix; // [xsp+38h] [xbp-108h]
  int32_t voicePrefixa; // [xsp+38h] [xbp-108h]
  const Il2CppType *voicePrefixb; // [xsp+38h] [xbp-108h]
  const Il2CppType *voicePrefixc; // [xsp+38h] [xbp-108h]
  const Il2CppType *voicePrefixd; // [xsp+38h] [xbp-108h]
  int32_t voicePrefixe[2]; // [xsp+38h] [xbp-108h]
  GrandQuestFolderBoardItem_o *v251; // [xsp+40h] [xbp-100h]
  int v252; // [xsp+48h] [xbp-F8h]
  int64_t Time; // [xsp+50h] [xbp-F0h]
  GrandQuestFolderBoardItem_o *v254; // [xsp+58h] [xbp-E8h]
  int32_t svtVoiceId; // [xsp+64h] [xbp-DCh]
  VoiceCondMaster_o *v256; // [xsp+68h] [xbp-D8h]
  char v257; // [xsp+74h] [xbp-CCh]
  System_Collections_Generic_List_object__o *v258; // [xsp+78h] [xbp-C8h]
  bool v259; // [xsp+8Ch] [xbp-B4h]
  Il2CppObject *entity; // [xsp+90h] [xbp-B0h] BYREF
  Il2CppObject *v261; // [xsp+98h] [xbp-A8h] BYREF
  int32_t closedType; // [xsp+A4h] [xbp-9Ch] BYREF
  MethodInfo v263; // [xsp+A8h] [xbp-98h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v264; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v265; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v266; // 0:x0.16

  if ( (byte_4E787B9 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_BasicHelper_Any_int____80372680);
    sub_1D0F0B4(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
    sub_1D0F0B4(&CondType_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_VoiceCondMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_BeforeBirthDayMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
    sub_1D0F0B4(&System_Func_int__bool__TypeInfo);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_VoiceInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_VoiceInfo___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1D0F0B4(&System_Collections_Generic_List_VoiceInfo__TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1D0F0B4(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__);
    sub_1D0F0B4(&VoiceMaster___c__DisplayClass2_0_TypeInfo);
    sub_1D0F0B4(&VoiceEntity_TypeInfo);
    sub_1D0F0B4(&VoiceInfo_TypeInfo);
    sub_1D0F0B4(&StringLiteral_16314/*"_"*/);
    byte_4E787B9 = 1;
  }
  HIDWORD(v263.parameters) = 0;
  v263.return_type = 0;
  BYTE4(v263.klass) = 0;
  memset((char *)&v263.virtualMethodPointer + 4, 0, 20);
  v263.methodPointer = 0;
  closedType = 0;
  entity = 0;
  v261 = 0;
  v15 = sub_1D0F300(VoiceMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_292;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_292;
  v256 = (VoiceCondMaster_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_292;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_292;
  HIDWORD(v263.parameters) = ServantLimitAddMaster__getVoicePrefix(
                               (ServantLimitAddMaster_o *)Instance,
                               changeSvtVoiceId,
                               limitCount,
                               0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_292;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4E710BF )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E710BF = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v19 )
    goto LABEL_292;
  Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                (UserServantCollectionMaster_o *)v19,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                svtId,
                                0);
  if ( !v15 )
    goto LABEL_292;
  *(_QWORD *)(v15 + 16) = Instance;
  v254 = (GrandQuestFolderBoardItem_o *)(v15 + 16);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v15 + 16), (int32_t)Instance, v20, v21, v22, v23, v24, v25);
  if ( !MasterData_object )
    goto LABEL_292;
  Entity_44193060 = ServantVoiceMaster__getEntity_44193060(
                      (ServantVoiceMaster_o *)MasterData_object,
                      changeSvtVoiceId,
                      limitCount,
                      0);
  Time = NetworkManager__getTime(0);
  v258 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v258,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_4E7284B )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E7284B = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_292;
  svtVoiceId = changeSvtVoiceId;
  v252 = *(unsigned __int8 *)(*(_QWORD *)&Instance[1].fields._DispLog + 144LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_34CD418 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1D0F30C(0, v28);
  v257 = 0;
  v30 = isCheckPlayCond;
  v251 = (GrandQuestFolderBoardItem_o *)(v15 + 24);
  v259 = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        p_offset += 4;
        if ( !v32 )
          goto LABEL_28;
      }
      v34 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_28:
      v34 = sub_1CE5430(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
            Enumerator,
            *(_QWORD *)(v34 + 8))
        & 1) == 0 )
      break;
    v35 = Enumerator->klass;
    v36 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_VoiceEntity__c **)v37 - 1) != System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_35;
      }
      v38 = (__int64)&v35->vtable[*v37];
    }
    else
    {
LABEL_35:
      v38 = sub_1CE5430(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0);
    }
    v39 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
            Enumerator,
            *(_QWORD *)(v38 + 8));
    v41 = (VoiceEntity_o *)v39;
    if ( !v39
      || (naturalAligment = VoiceEntity_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)v39 + 304LL) < (unsigned int)naturalAligment)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v39 + 200LL) + 8 * naturalAligment - 8) != VoiceEntity_TypeInfo )
    {
      sub_1D0F30C(v39, v40);
    }
    if ( !Entity_44193060 )
      sub_1D0F30C(v39, v40);
    v43 = *(int *)(v39 + 28);
    if ( (unsigned int)v43 >= LODWORD(Entity_44193060->max_length) )
      sub_1D0F314(v39);
    v44 = Entity_44193060->m_Items[v43];
    if ( v44 )
    {
      v45 = *(_QWORD *)(v39 + 16);
      if ( !v45 )
        sub_1D0F30C(0, v40);
      v46 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v45 + 360LL))(
                                 v45,
                                 *(_QWORD *)(*(_QWORD *)v45 + 368LL));
      v47 = System_Int32__ToString((int32_t)&v263.parameters + 4, 0);
      v48 = System_String__Concat_65601036(v47, (System_String_o *)StringLiteral_16314/*"_"*/, v46, 0);
      VoiceList_44177296 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getVoiceList_44177296(
                                                                          v44,
                                                                          v41->fields.svtVoiceType,
                                                                          v48,
                                                                          disableCondTypeList,
                                                                          v30,
                                                                          0);
      if ( VoiceList_44177296 )
      {
        if ( VoiceList_44177296->fields._size >= 1 )
        {
          if ( System_Collections_Generic_List_object___get_Item(
                 VoiceList_44177296,
                 0,
                 (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__) )
          {
            ServantVoiceEntity__getOverwriteData(
              v44,
              v41->fields.svtVoiceType,
              v48,
              (ServantVoiceCond_array **)&v263.return_type,
              (bool *)&v263.klass + 4,
              (System_String_o **)&v263.name,
              (System_String_o **)&v263.invoker_method,
              (int32_t *)&v263.virtualMethodPointer + 1,
              (ServantVoiceSync_array **)&v263,
              v259,
              0);
            if ( !BYTE4(v263.klass) )
            {
              closedType = v41->fields.closedType;
              if ( !v263.methodPointer )
                goto LABEL_368;
              v52 = *((_QWORD *)v263.methodPointer + 3);
              if ( !v52 )
                goto LABEL_368;
              if ( !(_DWORD)v52 )
                sub_1D0F314(v50);
              v53 = *((_QWORD *)v263.methodPointer + 4);
              if ( !v53 )
                sub_1D0F30C(v50, v51);
              if ( *(int *)(v53 + 16) >= 1 )
              {
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_4E710BF )
                {
                  sub_1D0F0B4(&NetworkManager_TypeInfo);
                  byte_4E710BF = 1;
                }
                v56 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v56 = NetworkManager_TypeInfo;
                }
                if ( !v263.methodPointer )
                  sub_1D0F30C(v56, v54);
                if ( !*((_DWORD *)v263.methodPointer + 6) )
                  sub_1D0F314(v56);
                v57 = *((_QWORD *)v263.methodPointer + 4);
                if ( !v57 )
                  sub_1D0F30C(v56, v54);
                if ( !Master_object )
                  sub_1D0F30C(v56, v54);
                EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                     (UserServantCollectionMaster_o *)Master_object,
                                     v56->static_fields->userIdNumber,
                                     *(_DWORD *)(v57 + 16),
                                     0);
                v254->klass = (GrandQuestFolderBoardItem_c *)EntityDefinitely;
                sub_1D0F058(v254, (int32_t)EntityDefinitely, v59, v60, v61, v62, v63, v64);
              }
              else
              {
LABEL_368:
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                v69 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_4E710BF )
                {
                  sub_1D0F0B4(&NetworkManager_TypeInfo);
                  byte_4E710BF = 1;
                }
                v70 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v70 = NetworkManager_TypeInfo;
                }
                if ( !v69 )
                  sub_1D0F30C(v70, v68);
                v71 = UserServantCollectionMaster__GetEntityDefinitely(
                        (UserServantCollectionMaster_o *)v69,
                        v70->static_fields->userIdNumber,
                        svtId,
                        0);
                v254->klass = (GrandQuestFolderBoardItem_c *)v71;
                sub_1D0F058(v254, (int32_t)v71, v72, v73, v74, v75, v76, v77);
              }
              condType = v41->fields.condType;
              if ( condType <= 54 )
              {
                if ( condType <= 21 )
                {
                  v88 = 1;
                  v89 = 1;
                  switch ( condType )
                  {
                    case 0:
                      v90 = v256;
                      if ( !v256 )
                        sub_1D0F30C(0, v66);
                      goto LABEL_261;
                    case 1:
                      parameters_high = HIDWORD(v263.parameters);
                      condValue = v41->fields.condValue;
                      if ( !CondType_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                      IsQuestClear_41684364 = CondType__IsQuestClear_41684364(condValue, -1, 0, 0);
                      if ( !v256 )
                        sub_1D0F30C(IsQuestClear_41684364, v141);
                      goto LABEL_190;
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 10:
                    case 11:
                    case 12:
                    case 13:
                    case 14:
                    case 15:
                    case 16:
                      goto LABEL_270;
                    case 6:
                      if ( !v254->klass )
                        sub_1D0F30C(v65, v66);
                      if ( !v256 )
                        sub_1D0F30C(0, v66);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   v256,
                                   &closedType,
                                   svtVoiceId,
                                   v46,
                                   SHIDWORD(v263.parameters),
                                   (signed int)*(&v254->klass->_1.byval_arg.bits + 1) >= v41->fields.condValue,
                                   svtId,
                                   (System_String_o **)&v263.invoker_method,
                                   (const MethodInfo *)sync);
                      goto LABEL_269;
                    case 7:
                      if ( !v254->klass )
                        sub_1D0F30C(v65, v66);
                      if ( !v256 )
                        sub_1D0F30C(0, v66);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   v256,
                                   &closedType,
                                   svtVoiceId,
                                   v46,
                                   SHIDWORD(v263.parameters),
                                   (signed int)v254->klass->_1.this_arg.bits >= v41->fields.condValue,
                                   svtId,
                                   (System_String_o **)&v263.invoker_method,
                                   (const MethodInfo *)sync);
                      goto LABEL_269;
                    case 8:
                      if ( !v254->klass )
                        sub_1D0F30C(0, v66);
                      parameters_high = HIDWORD(v263.parameters);
                      IsQuestClear_41684364 = UserServantCollectionEntity__IsGet(
                                                (UserServantCollectionEntity_o *)v254->klass,
                                                0);
                      if ( !v256 )
                        sub_1D0F30C(IsQuestClear_41684364, v135);
                      goto LABEL_190;
                    case 9:
                      v136 = v254->klass;
                      if ( !v254->klass )
                        sub_1D0F30C(v65, v66);
                      v137 = *(__int64 *)((char *)&v136->_1.generic_class + 4);
                      v138 = *(__int64 *)((char *)&v136->_1.typeMetadataHandle + 4);
                      voicePrefixa = HIDWORD(v263.parameters);
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v266.fields.currentCryptoKey = v137;
                      *(_QWORD *)&v266.fields.fakeValue = v138;
                      v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v266, 0);
                      if ( !v256 )
                        sub_1D0F30C(v94, v139);
                      goto LABEL_102;
                    case 17:
                      if ( !v254->klass )
                        sub_1D0F30C(0, v66);
                      parameters_high = HIDWORD(v263.parameters);
                      IsQuestClear_41684364 = UserServantCollectionEntity__IsPlayed(
                                                (UserServantCollectionEntity_o *)v254->klass,
                                                v41->fields.condValue,
                                                0);
                      if ( !v256 )
                        sub_1D0F30C(IsQuestClear_41684364, v142);
                      goto LABEL_190;
                    case 18:
                      if ( !v254->klass )
                        sub_1D0F30C(0, v66);
                      parameters_high = HIDWORD(v263.parameters);
                      IsQuestClear_41684364 = UserServantCollectionEntity__IsLimitCountMax(
                                                (UserServantCollectionEntity_o *)v254->klass,
                                                0);
                      if ( !v256 )
                        sub_1D0F30C(IsQuestClear_41684364, v143);
                      goto LABEL_190;
                    case 19:
                      SelfUserGame = UserGameMaster__getSelfUserGame(0);
                      if ( !SelfUserGame )
                        sub_1D0F30C(0, v162);
                      if ( SelfUserGame->fields.birthDay < 1 )
                        goto LABEL_266;
                      *(_QWORD *)voicePrefixe = SelfUserGame->fields.birthDay;
                      v163 = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v163 = BalanceConfig_TypeInfo;
                      }
                      ServantIdsBirthdayBeforeValentine = v163->static_fields->ServantIdsBirthdayBeforeValentine;
                      v165 = (System_Func_int__bool__o *)v251->klass;
                      if ( !v251->klass )
                      {
                        v165 = (System_Func_int__bool__o *)sub_1D0F300(System_Func_int__bool__TypeInfo);
                        System_Func_int__bool____ctor(
                          v165,
                          (Il2CppObject *)v15,
                          Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__,
                          0);
                        v251->klass = (GrandQuestFolderBoardItem_c *)v165;
                        sub_1D0F058(v251, (int32_t)v165, v166, v167, v168, v169, v170, v171);
                      }
                      v172 = (BalanceConfig_c *)BasicHelper__Any_int__52658284(
                                                  ServantIdsBirthdayBeforeValentine,
                                                  (System_Func_T__bool__o *)v165,
                                                  (const MethodInfo_323806C *)Method_BasicHelper_Any_int____80372680);
                      if ( ((unsigned __int8)v172 & 1) != 0 )
                      {
                        v172 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v172 = BalanceConfig_TypeInfo;
                        }
                        VtReleaseAt = v172->static_fields->VtReleaseAt;
                        if ( VtReleaseAt >= 1 )
                        {
                          if ( !v254->klass )
                            sub_1D0F30C(v172, v173);
                          methods = v254->klass->_1.methods;
                          if ( !v172->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v172);
                            VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
                          }
                          if ( (__int64)methods < VtReleaseAt )
                            goto LABEL_246;
                        }
                      }
                      if ( !v254->klass )
                        sub_1D0F30C(v172, v173);
                      isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                                (VoiceMaster_o *)v172,
                                                *(int64_t *)voicePrefixe,
                                                (int64_t)v254->klass->_1.methods,
                                                v174);
                      if ( !DataManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                      v178 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
                      if ( !v178 )
                        sub_1D0F30C(0, v179);
                      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v178,
                                       (const MethodInfo_35383D8 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
                      if ( isEnableBirthdayVoice )
                      {
                        v182 = 1;
                      }
                      else
                      {
                        if ( !SingleEntity )
                          sub_1D0F30C(0, v162);
                        v162 = (int64_t)SingleEntity[1].klass;
                        if ( v162 < 1 )
                        {
LABEL_266:
                          v182 = 0;
                        }
                        else
                        {
                          if ( !v254->klass )
                            sub_1D0F30C(SingleEntity, v162);
                          v182 = VoiceMaster__isEnableBirthdayVoice(
                                   (VoiceMaster_o *)SingleEntity,
                                   v162,
                                   (int64_t)v254->klass->_1.methods,
                                   v181);
                        }
                      }
                      if ( !v256 )
                        sub_1D0F30C(v182, v162);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   v256,
                                   &closedType,
                                   svtVoiceId,
                                   v46,
                                   SHIDWORD(v263.parameters),
                                   v182,
                                   svtId,
                                   (System_String_o **)&v263.invoker_method,
                                   (const MethodInfo *)sync);
                      goto LABEL_269;
                    case 20:
                      return_type = v263.return_type;
                      if ( v263.return_type && (v145 = *(_QWORD *)&v263.return_type[1].bits) != 0 )
                      {
                        if ( (int)v145 >= 1 )
                        {
                          v146 = 0;
                          v147 = 0;
                          v148 = 0;
                          v149 = 0;
                          v244 = v263.return_type;
                          voicePrefixd = v263.return_type + 2;
                          do
                          {
                            if ( (unsigned int)v146 >= (unsigned int)v145 )
                              sub_1D0F314(v65);
                            v150 = *((_QWORD *)&voicePrefixd->data + v146);
                            if ( !v150 )
                              sub_1D0F30C(v65, v66);
                            v151 = *(_DWORD *)(v150 + 16);
                            if ( v151 <= 0x13 && ((1 << v151) & 0xCE000) != 0 && *(int *)(v150 + 20) >= 1 )
                            {
                              if ( !DataManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                              v152 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventMaster___);
                              if ( !v152 )
                                sub_1D0F30C(0, v153);
                              v154 = DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v152,
                                       &v261,
                                       *(_DWORD *)(v150 + 20),
                                       (const MethodInfo_3535BC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
                              if ( !v154 )
                                goto LABEL_206;
                              if ( !v261 )
                                sub_1D0F30C(v154, v155);
                              if ( Time >= (__int64)v261[5].monitor )
                              {
                                if ( !v256 )
                                  sub_1D0F30C(0, v155);
                                v156 = v261[6].klass;
                                v65 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         v256,
                                                         &closedType,
                                                         svtVoiceId,
                                                         v46,
                                                         SHIDWORD(v263.parameters),
                                                         Time >= (__int64)v156,
                                                         svtId,
                                                         (System_String_o **)&v263.invoker_method,
                                                         (const MethodInfo *)sync);
                                if ( (v252 != 0) | v257 & 1 )
                                {
                                  return_type = v244;
                                  v157 = 0;
                                }
                                else
                                {
                                  v240 = (unsigned int)v65;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  if ( !byte_4E788B8 )
                                  {
                                    sub_1D0F0B4(&NetworkManager_TypeInfo);
                                    byte_4E788B8 = 1;
                                  }
                                  v158 = NetworkManager_TypeInfo;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                    v158 = NetworkManager_TypeInfo;
                                  }
                                  if ( !v261 )
                                    sub_1D0F30C(v158, v66);
                                  static_fields = v158->static_fields;
                                  return_type = v244;
                                  v65 = (DataManager_c *)v240;
                                  v157 = static_fields->serverTime < (__int64)v261[6].klass;
                                }
                                v147 = (unsigned __int8)v65 & 1;
                                if ( v157 && Time >= (__int64)v156 )
                                {
                                  v160 = (unsigned __int8)v65 & 1;
                                  if ( !SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
                                    sub_1D0F30C(0, v66);
                                  if ( !byte_4E74BBC )
                                  {
                                    sub_1D0F0B4(&DataManager_TypeInfo);
                                    byte_4E74BBC = 1;
                                  }
                                  v65 = DataManager_TypeInfo;
                                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                    v65 = DataManager_TypeInfo;
                                  }
                                  if ( !v261 )
                                    sub_1D0F30C(v65, v66);
                                  return_type = v244;
                                  v149 = 1;
                                  v147 = v160;
                                  v257 |= v65->static_fields->dateVersion < (__int64)v261[6].klass;
                                }
                                else
                                {
                                  v149 = 1;
                                }
                                v148 = 1;
                              }
                              else
                              {
LABEL_206:
                                if ( !v256 )
                                  sub_1D0F30C(0, v155);
                                v65 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         v256,
                                                         &closedType,
                                                         svtVoiceId,
                                                         v46,
                                                         SHIDWORD(v263.parameters),
                                                         0,
                                                         svtId,
                                                         (System_String_o **)&v263.invoker_method,
                                                         (const MethodInfo *)sync);
                                return_type = v244;
                                v148 = (unsigned __int8)v65 & 1;
                                v149 = 1;
                                v147 = (unsigned __int8)v65 & 1;
                              }
                            }
                            LODWORD(v145) = return_type[1].bits;
                            ++v146;
                          }
                          while ( (int)v146 < (int)v145 );
                          if ( (v149 & 1) != 0 )
                          {
                            v88 = v148 & 1;
                            v89 = v147 & 1;
                            goto LABEL_270;
                          }
                        }
                        v90 = v256;
                        if ( !v256 )
                          sub_1D0F30C(0, v66);
                      }
                      else
                      {
                        v90 = v256;
                        if ( !v256 )
                          sub_1D0F30C(0, v66);
                      }
                      return result;
                    case 21:
                      if ( !v254->klass )
                        sub_1D0F30C(0, v66);
                      parameters_high = HIDWORD(v263.parameters);
                      IsQuestClear_41684364 = UserServantCollectionEntity__IsFinded(
                                                (UserServantCollectionEntity_o *)v254->klass,
                                                0);
                      if ( !v256 )
                        sub_1D0F30C(IsQuestClear_41684364, v134);
                      goto LABEL_190;
                    default:
                      goto LABEL_247;
                  }
                  goto LABEL_261;
                }
                if ( condType != 31 )
                {
                  if ( condType == 54 )
                  {
                    if ( !v254->klass )
                      sub_1D0F30C(0, v66);
                    parameters_high = HIDWORD(v263.parameters);
                    IsQuestClear_41684364 = UserServantCollectionEntity__IsCostumeGet(
                                              (UserServantCollectionEntity_o *)v254->klass,
                                              limitCount,
                                              0);
                    if ( !v256 )
                      sub_1D0F30C(IsQuestClear_41684364, v87);
LABEL_190:
                    IsEnable = VoiceCondMaster__IsEnable(
                                 v256,
                                 &closedType,
                                 svtVoiceId,
                                 v46,
                                 parameters_high,
                                 IsQuestClear_41684364,
                                 svtId,
                                 (System_String_o **)&v263.invoker_method,
                                 (const MethodInfo *)sync);
                    goto LABEL_269;
                  }
LABEL_246:
                  v88 = 1;
LABEL_247:
                  v89 = 1;
                  goto LABEL_270;
                }
                v96 = v263.return_type;
                if ( !v263.return_type || (v97 = *(_QWORD *)&v263.return_type[1].bits) == 0 )
                {
                  v90 = v256;
                  if ( !v256 )
                    sub_1D0F30C(0, v66);
                  goto LABEL_261;
                }
                if ( (int)v97 < 1 )
                  goto LABEL_250;
                v98 = 0;
                v99 = 0;
                v100 = 0;
                v101 = 0;
                v242 = v263.return_type;
                voicePrefixb = v263.return_type + 2;
                while ( 2 )
                {
                  if ( (unsigned int)v98 >= (unsigned int)v97 )
                    sub_1D0F314(v65);
                  v102 = *((_QWORD *)&voicePrefixb->data + v98);
                  if ( !v102 )
                    sub_1D0F30C(v65, v66);
                  v103 = *(_DWORD *)(v102 + 16);
                  if ( v103 <= 0x13 )
                  {
                    if ( ((1 << v103) & 0xCE000) != 0 )
                    {
                      if ( *(int *)(v102 + 20) >= 1 )
                      {
                        v104 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !v104 )
                          sub_1D0F30C(0, v105);
                        v106 = DataManager__GetMasterData_object_(
                                 (DataManager_o *)v104,
                                 (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventMaster___);
                        if ( !v106 )
                          sub_1D0F30C(0, v107);
                        v108 = DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v106,
                                 *(_DWORD *)(v102 + 20),
                                 (const MethodInfo_3535B7C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                        if ( !v108 || Time < (__int64)v108[5].monitor )
                        {
                          v110 = v256;
                          if ( !v256 )
                            sub_1D0F30C(0, v109);
                          goto LABEL_117;
                        }
                        if ( !v256 )
                          sub_1D0F30C(v108, v109);
                        v65 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                 v256,
                                                 &closedType,
                                                 svtVoiceId,
                                                 v46,
                                                 SHIDWORD(v263.parameters),
                                                 Time >= (__int64)v108[6].klass,
                                                 svtId,
                                                 (System_String_o **)&v263.invoker_method,
                                                 (const MethodInfo *)sync);
LABEL_129:
                        v99 = (unsigned __int8)v65 & 1;
                        v101 = 1;
                        v100 = 1;
                        goto LABEL_130;
                      }
                    }
                    else if ( v103 == 16 && *(int *)(v102 + 20) >= 1 )
                    {
                      v111 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !v111 )
                        sub_1D0F30C(0, v112);
                      v113 = DataManager__GetMasterData_object_(
                               (DataManager_o *)v111,
                               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
                      if ( !v113 )
                        sub_1D0F30C(0, v114);
                      v115 = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v113,
                               &entity,
                               *(_DWORD *)(v102 + 20),
                               (const MethodInfo_3535BC8 *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
                      if ( v115 )
                      {
                        if ( !entity )
                          sub_1D0F30C(v115, v116);
                        if ( Time >= (__int64)entity[2].monitor )
                        {
                          if ( !v256 )
                            sub_1D0F30C(0, v116);
                          v65 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                   v256,
                                                   &closedType,
                                                   svtVoiceId,
                                                   v46,
                                                   SHIDWORD(v263.parameters),
                                                   1,
                                                   svtId,
                                                   (System_String_o **)&v263.invoker_method,
                                                   (const MethodInfo *)sync);
                          goto LABEL_129;
                        }
                      }
                      v110 = v256;
                      if ( !v256 )
                        sub_1D0F30C(0, v116);
LABEL_117:
                      v65 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                               v110,
                                               &closedType,
                                               svtVoiceId,
                                               v46,
                                               SHIDWORD(v263.parameters),
                                               0,
                                               svtId,
                                               (System_String_o **)&v263.invoker_method,
                                               (const MethodInfo *)sync);
                      v100 = (unsigned __int8)v65 & 1;
                      v101 = 1;
                      v99 = (unsigned __int8)v65 & 1;
LABEL_130:
                      v96 = v242;
                    }
                  }
                  LODWORD(v97) = v96[1].bits;
                  if ( (int)++v98 >= (int)v97 )
                  {
                    if ( (v101 & 1) != 0 )
                    {
                      v88 = v100 & 1;
                      v89 = v99 & 1;
                      goto LABEL_270;
                    }
LABEL_250:
                    v90 = v256;
                    if ( !v256 )
                      sub_1D0F30C(0, v66);
LABEL_261:
                    v88 = 1;
                    v89 = VoiceCondMaster__IsEnable(
                            v90,
                            &closedType,
                            svtVoiceId,
                            v46,
                            SHIDWORD(v263.parameters),
                            1,
                            svtId,
                            (System_String_o **)&v263.invoker_method,
                            (const MethodInfo *)sync);
                    goto LABEL_270;
                  }
                  continue;
                }
              }
              if ( condType > 92 )
              {
                if ( condType == 98 )
                {
                  v91 = v254->klass;
                  if ( !v254->klass )
                    sub_1D0F30C(v65, v66);
                  v92 = *(__int64 *)((char *)&v91->_1.generic_class + 4);
                  v93 = *(__int64 *)((char *)&v91->_1.typeMetadataHandle + 4);
                  voicePrefixa = HIDWORD(v263.parameters);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v265.fields.currentCryptoKey = v92;
                  *(_QWORD *)&v265.fields.fakeValue = v93;
                  v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v265, 0);
                  if ( !v256 )
                    sub_1D0F30C(v94, v95);
LABEL_102:
                  IsEnable = VoiceCondMaster__IsEnable(
                               v256,
                               &closedType,
                               svtVoiceId,
                               v46,
                               voicePrefixa,
                               (int)v94 >= v41->fields.condValue,
                               svtId,
                               (System_String_o **)&v263.invoker_method,
                               (const MethodInfo *)sync);
                  goto LABEL_269;
                }
                if ( condType == 99 )
                {
                  v79 = v254->klass;
                  if ( !v254->klass )
                    sub_1D0F30C(v65, v66);
                  v80 = *(__int64 *)((char *)&v79->_1.generic_class + 4);
                  v81 = *(__int64 *)((char *)&v79->_1.typeMetadataHandle + 4);
                  voicePrefix = HIDWORD(v263.parameters);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v264.fields.currentCryptoKey = v80;
                  *(_QWORD *)&v264.fields.fakeValue = v81;
                  v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v264, 0);
                  if ( !v256 )
                    sub_1D0F30C(v82, v83);
                  IsEnable = VoiceCondMaster__IsEnable(
                               v256,
                               &closedType,
                               svtVoiceId,
                               v46,
                               voicePrefix,
                               (int)v82 <= v41->fields.condValue,
                               svtId,
                               (System_String_o **)&v263.invoker_method,
                               (const MethodInfo *)sync);
LABEL_269:
                  v89 = IsEnable;
                  v88 = 1;
                  goto LABEL_270;
                }
                goto LABEL_246;
              }
              if ( condType != 56 )
              {
                if ( condType == 92 )
                {
                  if ( !v256 )
                    sub_1D0F30C(0, v66);
                  IsEnable = VoiceCondMaster__IsEnable(
                               v256,
                               &closedType,
                               svtVoiceId,
                               v46,
                               SHIDWORD(v263.parameters),
                               0,
                               svtId,
                               (System_String_o **)&v263.invoker_method,
                               (const MethodInfo *)sync);
                  goto LABEL_269;
                }
                goto LABEL_246;
              }
              v117 = v263.return_type;
              if ( !v263.return_type || (v118 = *(_QWORD *)&v263.return_type[1].bits) == 0 )
              {
                v90 = v256;
                if ( !v256 )
                  sub_1D0F30C(0, v66);
                goto LABEL_261;
              }
              if ( (int)v118 < 1 )
                goto LABEL_162;
              v119 = 0;
              v120 = 0;
              v121 = 0;
              v122 = 0;
              v243 = v263.return_type;
              voicePrefixc = v263.return_type + 2;
              do
              {
                if ( (unsigned int)v119 >= (unsigned int)v118 )
                  sub_1D0F314(v65);
                v123 = *((_QWORD *)&voicePrefixc->data + v119);
                if ( !v123 )
                  sub_1D0F30C(v65, v66);
                v124 = *(_DWORD *)(v123 + 16);
                if ( v124 <= 0x13 && ((1 << v124) & 0xCE000) != 0 && *(int *)(v123 + 20) >= 1 )
                {
                  v125 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v125 )
                    sub_1D0F30C(0, v126);
                  v127 = DataManager__GetMasterData_object_(
                           (DataManager_o *)v125,
                           (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v127 )
                    sub_1D0F30C(0, v128);
                  v129 = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v127,
                           *(_DWORD *)(v123 + 20),
                           (const MethodInfo_3535B7C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v129 && Time >= (__int64)v129[5].monitor )
                  {
                    v131 = *(_DWORD *)(v123 + 20);
                    v241 = HIDWORD(v263.parameters);
                    if ( !CondType_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    v132 = CondType__IsServantGetBeforeEventEnd(svtId, v131, 0);
                    if ( !v256 )
                      sub_1D0F30C(v132, v133);
                    v65 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             v256,
                                             &closedType,
                                             svtVoiceId,
                                             v46,
                                             v241,
                                             v132,
                                             svtId,
                                             (System_String_o **)&v263.invoker_method,
                                             (const MethodInfo *)sync);
                    v120 = (unsigned __int8)v65 & 1;
                    v122 = 1;
                    v121 = 1;
                  }
                  else
                  {
                    if ( !v256 )
                      sub_1D0F30C(0, v130);
                    v65 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             v256,
                                             &closedType,
                                             svtVoiceId,
                                             v46,
                                             SHIDWORD(v263.parameters),
                                             0,
                                             svtId,
                                             (System_String_o **)&v263.invoker_method,
                                             (const MethodInfo *)sync);
                    v121 = (unsigned __int8)v65 & 1;
                    v122 = 1;
                    v120 = (unsigned __int8)v65 & 1;
                  }
                  v117 = v243;
                }
                LODWORD(v118) = v117[1].bits;
                ++v119;
              }
              while ( (int)v119 < (int)v118 );
              if ( (v122 & 1) == 0 )
              {
LABEL_162:
                v90 = v256;
                if ( !v256 )
                  sub_1D0F30C(0, v66);
                goto LABEL_261;
              }
              v88 = v121 & 1;
              v89 = v120 & 1;
LABEL_270:
              v183 = v89 & VoiceEntity__IsCondEnable(v41, svtId, v67);
              if ( (v88 & (v183 | (closedType != 2)) & 1) != 0 )
              {
                v184 = sub_1D0F300(VoiceInfo_TypeInfo);
                VoiceInfo___ctor((VoiceInfo_o *)v184, 0);
                if ( !v184 )
                  sub_1D0F30C(v185, v186);
                *(_QWORD *)(v184 + 16) = v41;
                sub_1D0F058(
                  (GrandQuestFolderBoardItem_o *)(v184 + 16),
                  (int32_t)v41,
                  v187,
                  v188,
                  v189,
                  v190,
                  v191,
                  v192);
                *(_BYTE *)(v184 + 24) = v183 & 1;
                name = (int32_t)v263.name;
                *(_QWORD *)(v184 + 32) = v263.name;
                sub_1D0F058((GrandQuestFolderBoardItem_o *)(v184 + 32), name, v194, v195, v196, v197, v198, v199);
                invoker_method = (int32_t)v263.invoker_method;
                *(_QWORD *)(v184 + 40) = v263.invoker_method;
                sub_1D0F058(
                  (GrandQuestFolderBoardItem_o *)(v184 + 40),
                  invoker_method,
                  v201,
                  v202,
                  v203,
                  v204,
                  v205,
                  v206);
                v207 = HIDWORD(v263.parameters);
                *(_DWORD *)(v184 + 48) = HIDWORD(v263.virtualMethodPointer);
                *(_DWORD *)(v184 + 52) = v207;
                v208 = (int32_t)v263.return_type;
                *(_QWORD *)(v184 + 56) = v263.return_type;
                sub_1D0F058((GrandQuestFolderBoardItem_o *)(v184 + 56), v208, v209, v210, v211, v212, v213, v214);
                methodPointer = (int32_t)v263.methodPointer;
                *(_QWORD *)(v184 + 64) = v263.methodPointer;
                sub_1D0F058(
                  (GrandQuestFolderBoardItem_o *)(v184 + 64),
                  methodPointer,
                  v216,
                  v217,
                  v218,
                  v219,
                  v220,
                  v221);
                if ( !v258 )
                  sub_1D0F30C(v222, v223);
                items = v258->fields._items;
                v231 = Method_System_Collections_Generic_List_VoiceInfo__Add__;
                ++v258->fields._version;
                if ( !items )
                  sub_1D0F30C(v222, v223);
                size = v258->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v258,
                    (Il2CppObject *)v184,
                    *(const MethodInfo_395C410 **)(*(_QWORD *)(v231[4] + 192LL) + 112LL));
                }
                else
                {
                  v233 = &items->obj.klass + size;
                  v258->fields._size = size + 1;
                  v233[4] = (Il2CppClass *)v184;
                  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v233 + 4), v184, v224, v225, v226, v227, v228, v229);
                }
              }
            }
          }
        }
      }
    }
  }
  v234 = Enumerator->klass;
  v235 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v236 = &v234->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v236 - 1) != System_IDisposable_TypeInfo )
    {
      --v235;
      v236 += 4;
      if ( !v235 )
        goto LABEL_281;
    }
    v237 = (__int64)&v234->vtable[*v236];
  }
  else
  {
LABEL_281:
    v237 = sub_1CE5430(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v237)(
                                Enumerator,
                                *(_QWORD *)(v237 + 8));
  if ( (v257 & 1) != 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_292;
    NetworkManager__GoToTitleDialog((NetworkManager_o *)Instance, 0);
  }
  if ( !v258 )
LABEL_292:
    sub_1D0F30C(Instance, v17);
  return (VoiceInfo_array *)System_Collections_Generic_List_object___ToArray(
                              v258,
                              (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
}


int32_t VoiceMaster__getFirstPlayPriority(
        VoiceMaster_o *this,
        int32_t svtId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  __int64 v6; // x1
  int32_t v7; // w21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  _QWORD *v19; // x0
  __int64 v20; // x1
  _QWORD *v21; // x21
  __int64 naturalAligment; // x10
  __int64 v23; // x0
  System_String_o *v24; // x1
  System_String_o *v25; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4E787BB & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&VoiceEntity_TypeInfo);
    sub_1D0F0B4(&StringLiteral_16314/*"_"*/);
    byte_4E787BB = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1D0F30C(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_34CD418 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1D0F30C(0, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_11;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v14 = sub_1CE5430(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_VoiceEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_18:
      v18 = sub_1CE5430(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0);
    }
    v19 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                      Enumerator,
                      *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19
      || (naturalAligment = VoiceEntity_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*v19 + 304LL) < (unsigned int)naturalAligment)
      || *(VoiceEntity_c **)(*(_QWORD *)(*v19 + 200LL) + 8 * naturalAligment - 8) != VoiceEntity_TypeInfo )
    {
      sub_1D0F30C(v19, v20);
    }
    v23 = v19[2];
    if ( !v23 )
      sub_1D0F30C(0, v20);
    v24 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 360LL))(
                               v23,
                               *(_QWORD *)(*(_QWORD *)v23 + 368LL));
    v25 = System_String__Concat_65562772((System_String_o *)StringLiteral_16314/*"_"*/, v24, 0);
    if ( !labelName )
      sub_1D0F30C(v25, v25);
    if ( System_String__EndsWith(labelName, v25, 0) )
    {
      v7 = *((_DWORD *)v21 + 15);
      goto LABEL_28;
    }
  }
  v7 = 0;
LABEL_28:
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_32;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_32:
    v29 = sub_1CE5430(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return v7;
}


int32_t VoiceMaster__getFlagRequestNumber(
        VoiceMaster_o *this,
        int32_t svtId,
        System_String_o *labelName,
        bool isUpdate,
        const MethodInfo *method)
{
  __int64 v9; // x1
  int32_t v10; // w20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  _QWORD *v22; // x0
  __int64 v23; // x1
  _QWORD *v24; // x23
  __int64 naturalAligment; // x10
  __int64 v26; // x0
  System_String_o *v27; // x1
  System_String_o *v28; // x0
  Il2CppObject *Instance; // x0
  __int64 v30; // x1
  __int64 v31; // x1
  Il2CppObject *MasterData_object; // x22
  NetworkManager_c *v33; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v35; // x24
  VoiceMaster_o *v36; // x0
  const MethodInfo *v37; // x4
  UserServantCollectionEntity_o *SyncUserServantCollectionEntity; // x0
  __int64 v39; // x1
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_4E787BA & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&VoiceEntity_TypeInfo);
    sub_1D0F0B4(&StringLiteral_16314/*"_"*/);
    byte_4E787BA = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1D0F30C(0, v9);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_34CD418 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1D0F30C(0, v12);
  do
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_11;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v17 = sub_1CE5430(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8))
        & 1) == 0 )
      goto LABEL_43;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_VoiceEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_18;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_18:
      v21 = sub_1CE5430(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0);
    }
    v22 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                      Enumerator,
                      *(_QWORD *)(v21 + 8));
    v24 = v22;
    if ( !v22
      || (naturalAligment = VoiceEntity_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*v22 + 304LL) < (unsigned int)naturalAligment)
      || *(VoiceEntity_c **)(*(_QWORD *)(*v22 + 200LL) + 8 * naturalAligment - 8) != VoiceEntity_TypeInfo )
    {
      sub_1D0F30C(v22, v23);
    }
    v26 = v22[2];
    if ( !v26 )
      sub_1D0F30C(0, v23);
    v27 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 360LL))(
                               v26,
                               *(_QWORD *)(*(_QWORD *)v26 + 368LL));
    v28 = System_String__Concat_65562772((System_String_o *)StringLiteral_16314/*"_"*/, v27, 0);
    if ( !labelName )
      sub_1D0F30C(v28, v28);
  }
  while ( !System_String__EndsWith(labelName, v28, 0) );
  if ( *((_DWORD *)v24 + 12) != 17 && (unsigned int)(*((_DWORD *)v24 + 7) - 1) > 1 )
  {
LABEL_43:
    v10 = 0;
    goto LABEL_44;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v30);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4E710BF )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E710BF = 1;
  }
  v33 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v33 = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    sub_1D0F30C(v33, v31);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       v33->static_fields->userIdNumber,
                       svtId,
                       0);
  v35 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v24[2];
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v36 = (VoiceMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_50367044(v35, 0);
  SyncUserServantCollectionEntity = VoiceMaster__GetSyncUserServantCollectionEntity(
                                      v36,
                                      svtId,
                                      (System_String_o *)v36,
                                      *((_DWORD *)v24 + 7),
                                      v37);
  v39 = *((unsigned int *)v24 + 14);
  if ( !SyncUserServantCollectionEntity )
    SyncUserServantCollectionEntity = EntityDefinitely;
  if ( isUpdate )
  {
    if ( !SyncUserServantCollectionEntity )
      sub_1D0F30C(0, v39);
    if ( !UserServantCollectionEntity__SetPlayed(SyncUserServantCollectionEntity, v39, 0) )
      goto LABEL_43;
  }
  else
  {
    if ( !SyncUserServantCollectionEntity )
      sub_1D0F30C(0, v39);
    if ( UserServantCollectionEntity__IsPlayed(SyncUserServantCollectionEntity, v39, 0) )
      goto LABEL_43;
  }
  v10 = *((_DWORD *)v24 + 14);
LABEL_44:
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_48;
    }
    v43 = (__int64)&v40->vtable[*v42];
  }
  else
  {
LABEL_48:
    v43 = sub_1CE5430(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  return v10;
}


bool VoiceMaster__isEnableBirthdayVoice(
        VoiceMaster_o *this,
        int64_t userBirthDay,
        int64_t createDay,
        const MethodInfo *method)
{
  System_DateTime_o v6; // x0
  int32_t Year; // w20
  System_DateTime_o v8; // x0
  int32_t Month; // w21
  System_DateTime_o v10; // x0
  int32_t Day; // w3
  System_DateTime_o v12; // x0
  System_DateTime_o v13; // x0
  int32_t v14; // w20
  System_DateTime_o v15; // x0
  int32_t v16; // w21
  System_DateTime_o v17; // x0
  int32_t v18; // w3
  System_DateTime_o v19; // x0
  int64_t ServerTime; // x20
  System_DateTime_o v21; // x0
  int64_t Time_42740560; // x21
  System_DateTime_o v23; // x0
  uint64_t v25; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v26; // [xsp+10h] [xbp-50h]
  System_DateTime_o dateTime; // [xsp+18h] [xbp-48h]
  uint64_t v28; // [xsp+20h] [xbp-40h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4E787B8 & 1) == 0 )
  {
    sub_1D0F0B4(&System_DateTime_TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E787B8 = 1;
  }
  v26.fields._dateData = 0;
  dateTime.fields._dateData = 0;
  if ( userBirthDay < 1 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_42741668(createDay, 0).fields._dateData;
  v28 = NetworkManager__getDateTime_42741340(userBirthDay, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v6.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v6, 0);
  v8.fields._dateData = (uint64_t)&v28;
  Month = System_DateTime__get_Month(v8, 0);
  v10.fields._dateData = (uint64_t)&v28;
  Day = System_DateTime__get_Day(v10, 0);
  v25 = 0;
  v12.fields._dateData = (uint64_t)&v25;
  System_DateTime___ctor_66946936(v12, Year, Month, Day, 0);
  dateTime.fields._dateData = v25;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v13.fields._dateData = (uint64_t)&dateData;
  v14 = System_DateTime__get_Year(v13, 0);
  v15.fields._dateData = (uint64_t)&v28;
  v16 = System_DateTime__get_Month(v15, 0);
  v17.fields._dateData = (uint64_t)&v28;
  v18 = System_DateTime__get_Day(v17, 0);
  v25 = 0;
  v19.fields._dateData = (uint64_t)&v25;
  System_DateTime___ctor_66946936(v19, v14 + 1, v16, v18, 0);
  v26.fields._dateData = v25;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  ServerTime = NetworkManager__getServerTime(0);
  v21.fields._dateData = dateTime.fields._dateData;
  Time_42740560 = NetworkManager__getTime_42740560(v21, 0);
  v23.fields._dateData = v26.fields._dateData;
  return (Time_42740560 <= ServerTime && Time_42740560 + 86400 >= createDay)
       | (NetworkManager__getTime_42740560(v23, 0) <= ServerTime);
}


void VoiceMaster___c__DisplayClass2_0___ctor(VoiceMaster___c__DisplayClass2_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool VoiceMaster___c__DisplayClass2_0___getEnableInfo_b__0(
        VoiceMaster___c__DisplayClass2_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  VoiceMaster___c__DisplayClass2_0_o *v4; // x20
  struct UserServantCollectionEntity_o *userStvCollectionEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_4E787BD & 1) == 0 )
  {
    this = (VoiceMaster___c__DisplayClass2_0_o *)sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E787BD = 1;
  }
  userStvCollectionEntity = v4->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_1D0F30C(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v9, 0) == id;
}