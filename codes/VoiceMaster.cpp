void VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59719BC & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
    byte_59719BC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    138,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *VoiceMaster__GetSyncUserServantCollectionEntity(
        VoiceMaster_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        int32_t svtVoiceType,
        const MethodInfo *method)
{
  int v8; // w8
  ServantVoiceMaster_o *Master_object; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  bool v12; // w20
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *v15; // x19
  NetworkManager_c *v16; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v18; // x19
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+0h] [xbp-70h] BYREF
  int32_t syncSvtId; // [xsp+1Ch] [xbp-54h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_59719C1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantVoiceMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceEntity__GetEnumerator__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59719C1 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v8 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  syncSvtId = 0;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = (ServantVoiceMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
  if ( !Master_object
    || (Master_object = (ServantVoiceMaster_o *)ServantVoiceMaster__getEntity_49836388(
                                                  Master_object,
                                                  svtVoiceType,
                                                  svtId,
                                                  0)) == 0 )
  {
    sub_2213CDC(Master_object, v10);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceEntity__GetEnumerator__);
  v22 = v20;
  v20.fields._list = 0;
  *(_QWORD *)&v20.fields._index = &v22;
  do
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceEntity__MoveNext__);
    if ( !v12 )
    {
      EntityDefinitely = 0;
      goto LABEL_22;
    }
    if ( !v22.fields._current )
      sub_2213CDC(0, v11);
  }
  while ( !ServantVoiceEntity__TryGetSyncServantId((ServantVoiceEntity_o *)v22.fields._current, &syncSvtId, voiceId, 0) );
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
  v15 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v16 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
    v16 = NetworkManager_TypeInfo;
  }
  if ( !v15 )
    sub_2213CDC(v16, v14);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)v15,
                       v16->static_fields->userIdNumber,
                       syncSvtId,
                       0);
LABEL_22:
  if ( v12 )
    v18 = EntityDefinitely;
  else
    v18 = 0;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceEntity__Dispose__);
  return v18;
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
  __int64 v13; // x28
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v17; // x23
  Il2CppObject *v18; // x27
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  ServantVoiceEntity_array *Entity_49837844; // x29
  System_Collections_Generic_List_object__o *v26; // x24
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  __int64 Enumerator; // x0
  __int64 v29; // x1
  const Il2CppType **v30; // x19
  _BOOL4 v31; // w28
  const Il2CppType *v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 p_bits; // x0
  __int64 v36; // x0
  const Il2CppType **parameters; // x19
  const Il2CppType *v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  VoiceEntity_o *v42; // x22
  __int64 naturalAligment; // x10
  __int64 v44; // x8
  ServantVoiceEntity_o *v45; // x19
  __int64 v46; // x0
  System_String_o *v47; // x25
  System_String_o *v48; // x0
  System_String_o *v49; // x27
  __int64 v50; // x9
  __int64 v51; // x8
  __int64 v52; // x1
  Il2CppObject *Master_object; // x19
  NetworkManager_c *v54; // x0
  __int64 v55; // x8
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  __int64 IsEnable; // x0
  __int64 v64; // x1
  const MethodInfo *v65; // x2
  __int64 v66; // x1
  Il2CppObject *v67; // x19
  NetworkManager_c *v68; // x0
  UserServantCollectionEntity_o *v69; // x0
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  int condType; // w8
  MissionNaviTransitionBoardItem_c *v77; // x8
  int32_t v78; // w19
  __int64 v79; // x23
  __int64 v80; // x27
  __int64 v81; // x0
  __int64 v82; // x1
  bool v83; // w0
  int32_t v84; // w19
  _BOOL8 IsQuestClear_47284152; // x0
  __int64 v86; // x1
  char v87; // w19
  __int64 v88; // x1
  __int64 v89; // x1
  MissionNaviTransitionBoardItem_c *klass; // x8
  int32_t v91; // w19
  __int64 v92; // x27
  __int64 v93; // x23
  __int64 v94; // x0
  __int64 v95; // x1
  const Il2CppType *v96; // x19
  __int64 v97; // x11
  __int64 v98; // x23
  char v99; // w9
  char v100; // w10
  char v101; // w8
  __int64 v102; // x24
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
  const Il2CppType *return_type; // x24
  __int64 v118; // x9
  __int64 v119; // x28
  char v120; // w27
  char v121; // w8
  __int64 v122; // x23
  unsigned int v123; // w9
  Il2CppObject *v124; // x0
  __int64 v125; // x1
  Il2CppObject *v126; // x0
  __int64 v127; // x1
  Il2CppObject *v128; // x0
  __int64 v129; // x1
  int32_t methodMetadataHandle_high; // w19
  int32_t v131; // w23
  _BOOL8 v132; // x0
  __int64 v133; // x1
  VoiceCondMaster_o *v134; // x0
  bool v135; // w0
  __int64 v136; // x1
  VoiceCondMaster_o *v137; // x0
  int32_t condValue; // w23
  __int64 v139; // x1
  __int64 v140; // x1
  const Il2CppType *v141; // x19
  __int64 v142; // x10
  __int64 v143; // x23
  char v144; // w24
  char v145; // w9
  char v146; // w8
  __int64 v147; // x28
  unsigned int v148; // w10
  Il2CppObject *v149; // x0
  __int64 v150; // x1
  _BOOL8 v151; // x0
  __int64 v152; // x1
  Il2CppClass *v153; // x28
  long double v154; // q0
  Il2CppObject *v155; // x0
  __int64 v156; // x1
  MissionNaviTransitionBoardItem_c *v157; // x8
  int32_t v158; // w23
  __int64 v159; // x27
  __int64 v160; // x19
  __int64 v161; // x0
  __int64 v162; // x1
  UserGameEntity_o *SelfUserGame; // x0
  int64_t v164; // x1
  int64_t birthDay; // x23
  BalanceConfig_c *v166; // x0
  System_Func_int__bool__o *monitor; // x19
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x27
  System_String_o *v169; // x2
  System_String_o *v170; // x3
  int32_t v171; // w4
  int32_t v172; // w5
  bool v173; // w6
  bool v174; // w7
  BalanceConfig_c *v175; // x0
  __int64 v176; // x1
  const MethodInfo *v177; // x3
  int64_t VtReleaseAt; // x8
  Il2CppClass **nestedTypes; // x19
  __int64 v180; // x1
  bool isEnableBirthdayVoice; // w19
  Il2CppObject *v182; // x0
  __int64 v183; // x1
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v185; // x3
  _BOOL8 v186; // x0
  char v187; // w23
  __int64 v188; // x19
  __int64 v189; // x0
  __int64 v190; // x1
  System_String_o *v191; // x2
  System_String_o *v192; // x3
  int32_t v193; // w4
  int32_t v194; // w5
  bool v195; // w6
  bool v196; // w7
  int32_t name; // w1
  System_String_o *v198; // x2
  System_String_o *v199; // x3
  int32_t v200; // w4
  int32_t v201; // w5
  bool v202; // w6
  bool v203; // w7
  int32_t invoker_method; // w1
  System_String_o *v205; // x2
  System_String_o *v206; // x3
  int32_t v207; // w4
  int32_t v208; // w5
  bool v209; // w6
  bool v210; // w7
  int32_t v211; // w1
  int virtualMethodPointer_high; // w8
  int v213; // w9
  System_String_o *v214; // x2
  System_String_o *v215; // x3
  int32_t v216; // w4
  int32_t v217; // w5
  bool v218; // w6
  bool v219; // w7
  int32_t methodPointer; // w1
  System_String_o *v221; // x2
  System_String_o *v222; // x3
  int32_t v223; // w4
  int32_t v224; // w5
  bool v225; // w6
  bool v226; // w7
  __int64 v227; // x0
  __int64 v228; // x1
  System_String_o *v229; // x2
  System_String_o *v230; // x3
  int32_t v231; // w4
  int32_t v232; // w5
  bool v233; // w6
  bool v234; // w7
  struct System_Object_array *items; // x8
  _QWORD *v236; // x9
  __int64 size; // x10
  Il2CppClass **v238; // x0
  const Il2CppType **v239; // x19
  const Il2CppType *v240; // x8
  __int64 v241; // x9
  int *v242; // x10
  __int64 v243; // x0
  ServantVoiceSync_array **sync; // [xsp+0h] [xbp-140h]
  System_Collections_Generic_List_object__o *v246; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_List_object__o *v247; // [xsp+28h] [xbp-118h]
  _BOOL4 v248; // [xsp+34h] [xbp-10Ch]
  _BOOL4 v249; // [xsp+34h] [xbp-10Ch]
  Il2CppObject *object; // [xsp+38h] [xbp-108h]
  int v251; // [xsp+40h] [xbp-100h]
  const Il2CppType *v252; // [xsp+48h] [xbp-F8h]
  int64_t Time; // [xsp+50h] [xbp-F0h]
  MissionNaviTransitionBoardItem_o *v254; // [xsp+58h] [xbp-E8h]
  VoiceCondMaster_o *v255; // [xsp+60h] [xbp-E0h]
  bool v257; // [xsp+70h] [xbp-D0h]
  Il2CppObject *entity; // [xsp+88h] [xbp-B8h] BYREF
  Il2CppObject *v260; // [xsp+90h] [xbp-B0h] BYREF
  int32_t closedType; // [xsp+9Ch] [xbp-A4h] BYREF
  MethodInfo v262; // [xsp+A0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v263; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v264; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v265; // 0:x0.16

  if ( (byte_59719BE & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_VoiceCondMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_BeforeBirthDayMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_VoiceInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_VoiceInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_2213A60(&System_Collections_Generic_List_VoiceInfo__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_2213A60(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__);
    sub_2213A60(&VoiceMaster___c__DisplayClass2_0_TypeInfo);
    sub_2213A60(&VoiceEntity_TypeInfo);
    sub_2213A60(&VoiceInfo_TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_59719BE = 1;
  }
  HIDWORD(v262.methodMetadataHandle) = 0;
  v262.return_type = 0;
  v262.parameters = 0;
  BYTE4(v262.klass) = 0;
  memset((char *)&v262.virtualMethodPointer + 4, 0, 20);
  v262.methodPointer = 0;
  closedType = 0;
  entity = 0;
  v260 = 0;
  v13 = sub_2213CCC(VoiceMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_305;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_305;
  v17 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_305;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_305;
  HIDWORD(v262.methodMetadataHandle) = ServantLimitAddMaster__getVoicePrefix(
                                         (ServantLimitAddMaster_o *)Instance,
                                         changeSvtVoiceId,
                                         limitCount,
                                         0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_305;
  v18 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v18 )
    goto LABEL_305;
  Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                (UserServantCollectionMaster_o *)v18,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                svtId,
                                0);
  if ( !v13 )
    goto LABEL_305;
  *(_QWORD *)(v13 + 16) = Instance;
  v254 = (MissionNaviTransitionBoardItem_o *)(v13 + 16);
  v255 = (VoiceCondMaster_o *)v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)Instance, v19, v20, v21, v22, v23, v24);
  if ( !MasterData_object )
    goto LABEL_305;
  Entity_49837844 = ServantVoiceMaster__getEntity_49837844(
                      (ServantVoiceMaster_o *)MasterData_object,
                      changeSvtVoiceId,
                      limitCount,
                      0);
  Time = NetworkManager__getTime(0);
  v26 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_596B88D )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596B88D = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_305;
  object = (Il2CppObject *)v13;
  v251 = *(unsigned __int8 *)(*(_QWORD *)&Instance[1].fields._DispLog + 144LL);
  Enumerator = (__int64)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                          list,
                          (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  v262.parameters = (const Il2CppType **)Enumerator;
  if ( !Enumerator )
    goto LABEL_312;
  v30 = (const Il2CppType **)Enumerator;
  v31 = 0;
  v257 = isMaterial;
LABEL_24:
  v32 = *v30;
  v33 = *((unsigned __int16 *)&(*v30)[18].bits + 3);
  if ( *((_WORD *)&(*v30)[18].bits + 3) )
  {
    v34 = (int *)((char *)v32[11].data + 8);
    while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_28;
    }
    p_bits = (__int64)&v32[*v34 + 19].bits;
  }
  else
  {
LABEL_28:
    p_bits = sub_224BC3C(v30, System_Collections_IEnumerator_TypeInfo, 0);
  }
  v36 = (*(__int64 (__fastcall **)(const Il2CppType **, _QWORD))p_bits)(v30, *(_QWORD *)(p_bits + 8));
  if ( (v36 & 1) != 0 )
  {
    parameters = v262.parameters;
    if ( !v262.parameters )
      sub_2213CDC(v36, v15);
    v38 = *v262.parameters;
    v39 = *((unsigned __int16 *)&(*v262.parameters)[18].bits + 3);
    if ( *((_WORD *)&(*v262.parameters)[18].bits + 3) )
    {
      v40 = (int *)((char *)v38[11].data + 8);
      while ( *((System_Collections_Generic_IEnumerator_VoiceEntity__c **)v40 - 1) != System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_36;
      }
      v41 = (__int64)&v38[*v40 + 19].bits;
    }
    else
    {
LABEL_36:
      v41 = sub_224BC3C(v262.parameters, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0);
    }
    Enumerator = (*(__int64 (__fastcall **)(const Il2CppType **, _QWORD))v41)(parameters, *(_QWORD *)(v41 + 8));
    v42 = (VoiceEntity_o *)Enumerator;
    if ( !Enumerator
      || (naturalAligment = VoiceEntity_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)Enumerator + 304LL) < (unsigned int)naturalAligment)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)Enumerator + 200LL) + 8 * naturalAligment - 8) != VoiceEntity_TypeInfo )
    {
      sub_2213CDC(Enumerator, v29);
    }
    if ( !Entity_49837844 )
      sub_2213CDC(Enumerator, v29);
    v44 = *(int *)(Enumerator + 28);
    if ( (unsigned int)v44 >= LODWORD(Entity_49837844->max_length) )
      sub_2213CE4(Enumerator);
    v45 = Entity_49837844->m_Items[v44];
    if ( !v45 )
      goto LABEL_49;
    v46 = *(_QWORD *)(Enumerator + 16);
    if ( !v46 )
      sub_2213CDC(0, v29);
    v47 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v46 + 360LL))(
                               v46,
                               *(_QWORD *)(*(_QWORD *)v46 + 368LL));
    v48 = System_Int32__ToString((int32_t)&v262.methodMetadataHandle + 4, 0);
    v49 = System_String__Concat_75694928(v48, (System_String_o *)StringLiteral_16746/*"_"*/, v47, 0);
    Enumerator = (__int64)ServantVoiceEntity__getVoiceList_49822176(
                            v45,
                            v42->fields.svtVoiceType,
                            v49,
                            disableCondTypeList,
                            isCheckPlayCond,
                            0);
    if ( !Enumerator )
      goto LABEL_49;
    if ( *(int *)(Enumerator + 24) < 1 )
      goto LABEL_49;
    Enumerator = (__int64)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Enumerator,
                            0,
                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    if ( !Enumerator )
      goto LABEL_49;
    ServantVoiceEntity__getOverwriteData(
      v45,
      v42->fields.svtVoiceType,
      v49,
      (ServantVoiceCond_array **)&v262.return_type,
      (bool *)&v262.klass + 4,
      (System_String_o **)&v262.name,
      (System_String_o **)&v262.invoker_method,
      (int32_t *)&v262.virtualMethodPointer + 1,
      (ServantVoiceSync_array **)&v262,
      v257,
      0);
    if ( BYTE4(v262.klass) )
      goto LABEL_49;
    closedType = v42->fields.closedType;
    if ( !v262.methodPointer )
      goto LABEL_380;
    v50 = *((_QWORD *)v262.methodPointer + 3);
    if ( !v50 )
      goto LABEL_380;
    if ( !(_DWORD)v50 )
      sub_2213CE4(Enumerator);
    v51 = *((_QWORD *)v262.methodPointer + 4);
    if ( !v51 )
      sub_2213CDC(Enumerator, v29);
    if ( *(int *)(v51 + 16) >= 1 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v52);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      v54 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v52);
        v54 = NetworkManager_TypeInfo;
      }
      if ( !v262.methodPointer )
        sub_2213CDC(v54, v52);
      if ( !*((_DWORD *)v262.methodPointer + 6) )
        sub_2213CE4(v54);
      v55 = *((_QWORD *)v262.methodPointer + 4);
      if ( !v55 )
        sub_2213CDC(v54, v52);
      if ( !Master_object )
        sub_2213CDC(v54, v52);
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                           (UserServantCollectionMaster_o *)Master_object,
                           v54->static_fields->userIdNumber,
                           *(_DWORD *)(v55 + 16),
                           0);
      v254->klass = (MissionNaviTransitionBoardItem_c *)EntityDefinitely;
      sub_2213A04(v254, (int32_t)EntityDefinitely, v57, v58, v59, v60, v61, v62);
    }
    else
    {
LABEL_380:
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
      v67 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v66);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      v68 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v66);
        v68 = NetworkManager_TypeInfo;
      }
      if ( !v67 )
        sub_2213CDC(v68, v66);
      v69 = UserServantCollectionMaster__GetEntityDefinitely(
              (UserServantCollectionMaster_o *)v67,
              v68->static_fields->userIdNumber,
              svtId,
              0);
      v254->klass = (MissionNaviTransitionBoardItem_c *)v69;
      sub_2213A04(v254, (int32_t)v69, v70, v71, v72, v73, v74, v75);
    }
    condType = v42->fields.condType;
    if ( condType > 54 )
    {
      if ( (unsigned int)condType <= 0x5C )
      {
        if ( condType == 56 )
        {
          v247 = v26;
          return_type = v262.return_type;
          if ( v262.return_type && (v118 = *(_QWORD *)&v262.return_type[1].bits) != 0 )
          {
            if ( (int)v118 >= 1 )
            {
              v248 = v31;
              v119 = 0;
              v120 = 0;
              v87 = 0;
              v121 = 0;
              v252 = v262.return_type + 2;
              do
              {
                if ( (unsigned int)v119 >= (unsigned int)v118 )
                  sub_2213CE4(IsEnable);
                v122 = *((_QWORD *)&v252->data + v119);
                if ( !v122 )
                  sub_2213CDC(IsEnable, v64);
                v123 = *(_DWORD *)(v122 + 16);
                if ( v123 <= 0x13 && ((1 << v123) & 0xCE000) != 0 && *(int *)(v122 + 20) >= 1 )
                {
                  v124 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v124 )
                    sub_2213CDC(0, v125);
                  v126 = DataManager__GetMasterData_object_(
                           (DataManager_o *)v124,
                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v126 )
                    sub_2213CDC(0, v127);
                  v128 = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v126,
                           *(_DWORD *)(v122 + 20),
                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v128 && Time >= (__int64)v128[5].monitor )
                  {
                    methodMetadataHandle_high = HIDWORD(v262.methodMetadataHandle);
                    v131 = *(_DWORD *)(v122 + 20);
                    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v129);
                    v132 = CondType__IsServantGetBeforeEventEnd(svtId, v131, 0);
                    if ( !v255 )
                      sub_2213CDC(v132, v133);
                    IsEnable = VoiceCondMaster__IsEnable(
                                 v255,
                                 &closedType,
                                 changeSvtVoiceId,
                                 v47,
                                 methodMetadataHandle_high,
                                 v132,
                                 svtId,
                                 (System_String_o **)&v262.invoker_method,
                                 (const MethodInfo *)sync);
                    v120 = IsEnable;
                    v121 = 1;
                    v87 = 1;
                  }
                  else
                  {
                    if ( !v255 )
                      sub_2213CDC(0, v129);
                    IsEnable = VoiceCondMaster__IsEnable(
                                 v255,
                                 &closedType,
                                 changeSvtVoiceId,
                                 v47,
                                 SHIDWORD(v262.methodMetadataHandle),
                                 0,
                                 svtId,
                                 (System_String_o **)&v262.invoker_method,
                                 (const MethodInfo *)sync);
                    v87 = IsEnable;
                    v121 = 1;
                    v120 = IsEnable;
                  }
                }
                LODWORD(v118) = return_type[1].bits;
                ++v119;
              }
              while ( (int)v119 < (int)v118 );
              v31 = v248;
              if ( (v121 & 1) != 0 )
                goto LABEL_272;
            }
            v134 = v255;
            if ( !v255 )
              sub_2213CDC(0, v64);
          }
          else
          {
            v134 = v255;
            if ( !v255 )
              sub_2213CDC(0, v64);
          }
          v87 = 1;
          v26 = v247;
          v135 = VoiceCondMaster__IsEnable(
                   v134,
                   &closedType,
                   changeSvtVoiceId,
                   v47,
                   SHIDWORD(v262.methodMetadataHandle),
                   1,
                   svtId,
                   (System_String_o **)&v262.invoker_method,
                   (const MethodInfo *)sync);
          goto LABEL_276;
        }
        if ( condType == 92 )
        {
          if ( !v255 )
            sub_2213CDC(0, v64);
          v83 = VoiceCondMaster__IsEnable(
                  v255,
                  &closedType,
                  changeSvtVoiceId,
                  v47,
                  SHIDWORD(v262.methodMetadataHandle),
                  0,
                  svtId,
                  (System_String_o **)&v262.invoker_method,
                  (const MethodInfo *)sync);
          goto LABEL_269;
        }
      }
      else
      {
        if ( condType == 98 )
        {
          klass = v254->klass;
          if ( !v254->klass )
            sub_2213CDC(IsEnable, v64);
          v91 = HIDWORD(v262.methodMetadataHandle);
          v92 = *(__int64 *)((char *)&klass->_1.typeMetadataHandle + 4);
          v93 = *(__int64 *)((char *)&klass->_1.interopData + 4);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v64);
          *(_QWORD *)&v264.fields.currentCryptoKey = v92;
          *(_QWORD *)&v264.fields.fakeValue = v93;
          v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v264, 0);
          if ( !v255 )
            sub_2213CDC(v94, v95);
          v83 = VoiceCondMaster__IsEnable(
                  v255,
                  &closedType,
                  changeSvtVoiceId,
                  v47,
                  v91,
                  (int)v94 >= v42->fields.condValue,
                  svtId,
                  (System_String_o **)&v262.invoker_method,
                  (const MethodInfo *)sync);
          goto LABEL_269;
        }
        if ( condType == 99 )
        {
          v77 = v254->klass;
          if ( !v254->klass )
            sub_2213CDC(IsEnable, v64);
          v78 = HIDWORD(v262.methodMetadataHandle);
          v79 = *(__int64 *)((char *)&v77->_1.typeMetadataHandle + 4);
          v80 = *(__int64 *)((char *)&v77->_1.interopData + 4);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v64);
          *(_QWORD *)&v263.fields.currentCryptoKey = v79;
          *(_QWORD *)&v263.fields.fakeValue = v80;
          v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v263, 0);
          if ( !v255 )
            sub_2213CDC(v81, v82);
          v83 = VoiceCondMaster__IsEnable(
                  v255,
                  &closedType,
                  changeSvtVoiceId,
                  v47,
                  v78,
                  (int)v81 <= v42->fields.condValue,
                  svtId,
                  (System_String_o **)&v262.invoker_method,
                  (const MethodInfo *)sync);
          goto LABEL_269;
        }
      }
      goto LABEL_248;
    }
    if ( condType > 21 )
    {
      if ( condType != 31 )
      {
        if ( condType == 54 )
        {
          if ( !v254->klass )
            sub_2213CDC(0, v64);
          v84 = HIDWORD(v262.methodMetadataHandle);
          IsQuestClear_47284152 = UserServantCollectionEntity__IsCostumeGet(
                                    (UserServantCollectionEntity_o *)v254->klass,
                                    limitCount,
                                    0);
          if ( !v255 )
            sub_2213CDC(IsQuestClear_47284152, v86);
LABEL_193:
          v83 = VoiceCondMaster__IsEnable(
                  v255,
                  &closedType,
                  changeSvtVoiceId,
                  v47,
                  v84,
                  IsQuestClear_47284152,
                  svtId,
                  (System_String_o **)&v262.invoker_method,
                  (const MethodInfo *)sync);
LABEL_269:
          v120 = v83;
          v87 = 1;
          goto LABEL_277;
        }
LABEL_248:
        v87 = 1;
        goto LABEL_249;
      }
      v96 = v262.return_type;
      if ( !v262.return_type || (v97 = *(_QWORD *)&v262.return_type[1].bits) == 0 )
      {
        v137 = v255;
        if ( !v255 )
          sub_2213CDC(0, v64);
        goto LABEL_275;
      }
      if ( (int)v97 < 1 )
        goto LABEL_252;
      v98 = 0;
      v99 = 0;
      v100 = 0;
      v101 = 0;
      v246 = v26;
      while ( 1 )
      {
        if ( (unsigned int)v98 >= (unsigned int)v97 )
          sub_2213CE4(IsEnable);
        v102 = *((_QWORD *)&v96[2].data + v98);
        if ( !v102 )
          sub_2213CDC(IsEnable, v64);
        v103 = *(_DWORD *)(v102 + 16);
        if ( v103 > 0x13 )
          goto LABEL_144;
        if ( ((1 << v103) & 0xCE000) == 0 )
          break;
        if ( *(int *)(v102 + 20) >= 1 )
        {
          v104 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v104 )
            sub_2213CDC(0, v105);
          v106 = DataManager__GetMasterData_object_(
                   (DataManager_o *)v104,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v106 )
            sub_2213CDC(0, v107);
          v108 = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v106,
                   *(_DWORD *)(v102 + 20),
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( v108 && Time >= (__int64)v108[5].monitor )
          {
            if ( !v255 )
              sub_2213CDC(v108, v109);
            IsEnable = VoiceCondMaster__IsEnable(
                         v255,
                         &closedType,
                         changeSvtVoiceId,
                         v47,
                         SHIDWORD(v262.methodMetadataHandle),
                         Time >= (__int64)v108[6].klass,
                         svtId,
                         (System_String_o **)&v262.invoker_method,
                         (const MethodInfo *)sync);
LABEL_143:
            v99 = IsEnable & 1;
            v101 = 1;
            v100 = 1;
            goto LABEL_144;
          }
          v110 = v255;
          if ( !v255 )
            sub_2213CDC(0, v109);
LABEL_131:
          IsEnable = VoiceCondMaster__IsEnable(
                       v110,
                       &closedType,
                       changeSvtVoiceId,
                       v47,
                       SHIDWORD(v262.methodMetadataHandle),
                       0,
                       svtId,
                       (System_String_o **)&v262.invoker_method,
                       (const MethodInfo *)sync);
          v100 = IsEnable & 1;
          v101 = 1;
          v99 = IsEnable & 1;
        }
LABEL_144:
        LODWORD(v97) = v96[1].bits;
        if ( (int)++v98 >= (int)v97 )
        {
          v26 = v246;
          if ( (v101 & 1) != 0 )
          {
            v87 = v100 & 1;
            v120 = v99 & 1;
            goto LABEL_277;
          }
LABEL_252:
          v137 = v255;
          if ( !v255 )
            sub_2213CDC(0, v64);
LABEL_275:
          v87 = 1;
          v135 = VoiceCondMaster__IsEnable(
                   v137,
                   &closedType,
                   changeSvtVoiceId,
                   v47,
                   SHIDWORD(v262.methodMetadataHandle),
                   1,
                   svtId,
                   (System_String_o **)&v262.invoker_method,
                   (const MethodInfo *)sync);
LABEL_276:
          v120 = v135;
LABEL_277:
          Enumerator = VoiceEntity__IsCondEnable(v42, svtId, v65);
          v187 = Enumerator & v120;
          if ( ((unsigned __int8)Enumerator & (unsigned __int8)v120 & 1) != 0 )
          {
            if ( (v87 & 1) != 0 )
            {
LABEL_281:
              v188 = sub_2213CCC(VoiceInfo_TypeInfo);
              VoiceInfo___ctor((VoiceInfo_o *)v188, 0);
              if ( !v188 )
                sub_2213CDC(v189, v190);
              *(_QWORD *)(v188 + 16) = v42;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v188 + 16),
                (int32_t)v42,
                v191,
                v192,
                v193,
                v194,
                v195,
                v196);
              name = (int32_t)v262.name;
              *(_QWORD *)(v188 + 32) = v262.name;
              *(_BYTE *)(v188 + 24) = v187 & 1;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v188 + 32), name, v198, v199, v200, v201, v202, v203);
              invoker_method = (int32_t)v262.invoker_method;
              *(_QWORD *)(v188 + 40) = v262.invoker_method;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v188 + 40),
                invoker_method,
                v205,
                v206,
                v207,
                v208,
                v209,
                v210);
              v211 = (int32_t)v262.return_type;
              virtualMethodPointer_high = HIDWORD(v262.virtualMethodPointer);
              v213 = HIDWORD(v262.methodMetadataHandle);
              *(_QWORD *)(v188 + 56) = v262.return_type;
              *(_DWORD *)(v188 + 48) = virtualMethodPointer_high;
              *(_DWORD *)(v188 + 52) = v213;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v188 + 56), v211, v214, v215, v216, v217, v218, v219);
              methodPointer = (int32_t)v262.methodPointer;
              *(_QWORD *)(v188 + 64) = v262.methodPointer;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v188 + 64),
                methodPointer,
                v221,
                v222,
                v223,
                v224,
                v225,
                v226);
              if ( !v26
                || (items = v26->fields._items,
                    v236 = Method_System_Collections_Generic_List_VoiceInfo__Add__,
                    ++v26->fields._version,
                    !items) )
              {
                sub_2213CDC(v227, v228);
              }
              size = v26->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v26,
                  (Il2CppObject *)v188,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v236[4] + 192LL) + 112LL));
              }
              else
              {
                v238 = &items->obj.klass + size;
                v26->fields._size = size + 1;
                v238[4] = (Il2CppClass *)v188;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v238 + 4), v188, v229, v230, v231, v232, v233, v234);
              }
            }
          }
          else if ( ((closedType != 2) & (unsigned __int8)v87) != 0 )
          {
            goto LABEL_281;
          }
LABEL_49:
          v30 = v262.parameters;
          if ( !v262.parameters )
LABEL_312:
            sub_2213CDC(Enumerator, v29);
          goto LABEL_24;
        }
      }
      if ( v103 != 16 || *(int *)(v102 + 20) < 1 )
        goto LABEL_144;
      v111 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v111 )
        sub_2213CDC(0, v112);
      v113 = DataManager__GetMasterData_object_(
               (DataManager_o *)v111,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
      if ( !v113 )
        sub_2213CDC(0, v114);
      v115 = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v113,
               &entity,
               *(_DWORD *)(v102 + 20),
               (const MethodInfo_3F10B80 *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
      if ( v115 )
      {
        if ( !entity )
          sub_2213CDC(v115, v116);
        if ( Time >= (__int64)entity[2].monitor )
        {
          if ( !v255 )
            sub_2213CDC(0, v116);
          IsEnable = VoiceCondMaster__IsEnable(
                       v255,
                       &closedType,
                       changeSvtVoiceId,
                       v47,
                       SHIDWORD(v262.methodMetadataHandle),
                       1,
                       svtId,
                       (System_String_o **)&v262.invoker_method,
                       (const MethodInfo *)sync);
          goto LABEL_143;
        }
      }
      v110 = v255;
      if ( !v255 )
        sub_2213CDC(0, v116);
      goto LABEL_131;
    }
    v87 = 1;
    if ( condType <= 8 )
    {
      if ( condType > 5 )
      {
        if ( condType == 6 )
        {
          if ( !v254->klass )
            sub_2213CDC(IsEnable, v64);
          if ( !v255 )
            sub_2213CDC(0, v64);
          v83 = VoiceCondMaster__IsEnable(
                  v255,
                  &closedType,
                  changeSvtVoiceId,
                  v47,
                  SHIDWORD(v262.methodMetadataHandle),
                  (signed int)*(&v254->klass->_1.byval_arg.bits + 1) >= v42->fields.condValue,
                  svtId,
                  (System_String_o **)&v262.invoker_method,
                  (const MethodInfo *)sync);
          goto LABEL_269;
        }
        if ( condType == 7 )
        {
          if ( !v254->klass )
            sub_2213CDC(IsEnable, v64);
          if ( !v255 )
            sub_2213CDC(0, v64);
          v83 = VoiceCondMaster__IsEnable(
                  v255,
                  &closedType,
                  changeSvtVoiceId,
                  v47,
                  SHIDWORD(v262.methodMetadataHandle),
                  SLODWORD(v254->klass->_1.element_class) >= v42->fields.condValue,
                  svtId,
                  (System_String_o **)&v262.invoker_method,
                  (const MethodInfo *)sync);
          goto LABEL_269;
        }
        if ( !v254->klass )
          sub_2213CDC(0, v64);
        v84 = HIDWORD(v262.methodMetadataHandle);
        IsQuestClear_47284152 = UserServantCollectionEntity__IsGet((UserServantCollectionEntity_o *)v254->klass, 0);
        if ( !v255 )
          sub_2213CDC(IsQuestClear_47284152, v89);
        goto LABEL_193;
      }
      if ( !condType )
      {
        if ( !v255 )
          sub_2213CDC(0, v64);
        v135 = VoiceCondMaster__IsEnable(
                 v255,
                 &closedType,
                 changeSvtVoiceId,
                 v47,
                 SHIDWORD(v262.methodMetadataHandle),
                 1,
                 svtId,
                 (System_String_o **)&v262.invoker_method,
                 (const MethodInfo *)sync);
        goto LABEL_276;
      }
      if ( condType == 1 )
      {
        v84 = HIDWORD(v262.methodMetadataHandle);
        condValue = v42->fields.condValue;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v64);
        IsQuestClear_47284152 = CondType__IsQuestClear_47284152(condValue, -1, 0, 0);
        if ( !v255 )
          sub_2213CDC(IsQuestClear_47284152, v139);
        goto LABEL_193;
      }
      goto LABEL_249;
    }
    if ( condType <= 18 )
    {
      switch ( condType )
      {
        case 9:
          v157 = v254->klass;
          if ( !v254->klass )
            sub_2213CDC(IsEnable, v64);
          v158 = HIDWORD(v262.methodMetadataHandle);
          v159 = *(__int64 *)((char *)&v157->_1.typeMetadataHandle + 4);
          v160 = *(__int64 *)((char *)&v157->_1.interopData + 4);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v64);
          *(_QWORD *)&v265.fields.currentCryptoKey = v159;
          *(_QWORD *)&v265.fields.fakeValue = v160;
          v161 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v265, 0);
          if ( !v255 )
            sub_2213CDC(v161, v162);
          v83 = VoiceCondMaster__IsEnable(
                  v255,
                  &closedType,
                  changeSvtVoiceId,
                  v47,
                  v158,
                  (int)v161 >= v42->fields.condValue,
                  svtId,
                  (System_String_o **)&v262.invoker_method,
                  (const MethodInfo *)sync);
          goto LABEL_269;
        case 17:
          if ( !v254->klass )
            sub_2213CDC(0, v64);
          v84 = HIDWORD(v262.methodMetadataHandle);
          IsQuestClear_47284152 = UserServantCollectionEntity__IsPlayed(
                                    (UserServantCollectionEntity_o *)v254->klass,
                                    v42->fields.condValue,
                                    0);
          if ( !v255 )
            sub_2213CDC(IsQuestClear_47284152, v140);
          goto LABEL_193;
        case 18:
          if ( !v254->klass )
            sub_2213CDC(0, v64);
          v84 = HIDWORD(v262.methodMetadataHandle);
          IsQuestClear_47284152 = UserServantCollectionEntity__IsLimitCountMax(
                                    (UserServantCollectionEntity_o *)v254->klass,
                                    0);
          if ( !v255 )
            sub_2213CDC(IsQuestClear_47284152, v88);
          goto LABEL_193;
      }
LABEL_249:
      v120 = 1;
      goto LABEL_277;
    }
    if ( condType != 19 )
    {
      if ( condType != 20 )
      {
        if ( !v254->klass )
          sub_2213CDC(0, v64);
        v84 = HIDWORD(v262.methodMetadataHandle);
        IsQuestClear_47284152 = UserServantCollectionEntity__IsFinded((UserServantCollectionEntity_o *)v254->klass, 0);
        if ( !v255 )
          sub_2213CDC(IsQuestClear_47284152, v136);
        goto LABEL_193;
      }
      v141 = v262.return_type;
      if ( !v262.return_type || (v142 = *(_QWORD *)&v262.return_type[1].bits) == 0 )
      {
        v137 = v255;
        if ( !v255 )
          sub_2213CDC(0, v64);
        goto LABEL_275;
      }
      if ( (int)v142 < 1 )
        goto LABEL_274;
      v247 = v26;
      v143 = 0;
      v144 = 0;
      v145 = 0;
      v146 = 0;
      while ( 1 )
      {
        v249 = v31;
        if ( (unsigned int)v143 >= (unsigned int)v142 )
          sub_2213CE4(IsEnable);
        v147 = *((_QWORD *)&v141[2].data + v143);
        if ( !v147 )
          sub_2213CDC(IsEnable, v64);
        v148 = *(_DWORD *)(v147 + 16);
        if ( v148 <= 0x13 && ((1 << v148) & 0xCE000) != 0 && *(int *)(v147 + 20) >= 1 )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v64);
          v149 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
          if ( !v149 )
            sub_2213CDC(0, v150);
          v151 = DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v149,
                   &v260,
                   *(_DWORD *)(v147 + 20),
                   (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          v31 = v249;
          if ( !v151 )
            goto LABEL_209;
          if ( !v260 )
            sub_2213CDC(v151, v152);
          if ( Time < (__int64)v260[5].monitor )
          {
LABEL_209:
            if ( !v255 )
              sub_2213CDC(0, v152);
            IsEnable = VoiceCondMaster__IsEnable(
                         v255,
                         &closedType,
                         changeSvtVoiceId,
                         v47,
                         SHIDWORD(v262.methodMetadataHandle),
                         0,
                         svtId,
                         (System_String_o **)&v262.invoker_method,
                         (const MethodInfo *)sync);
            v145 = IsEnable & 1;
            v146 = 1;
            v144 = IsEnable & 1;
            goto LABEL_215;
          }
          if ( !v255 )
            sub_2213CDC(0, v152);
          v153 = v260[6].klass;
          IsEnable = VoiceCondMaster__IsEnable(
                       v255,
                       &closedType,
                       changeSvtVoiceId,
                       v47,
                       SHIDWORD(v262.methodMetadataHandle),
                       Time >= (__int64)v153,
                       svtId,
                       (System_String_o **)&v262.invoker_method,
                       (const MethodInfo *)sync);
          v144 = IsEnable & 1;
          if ( v251 == 0 && !v249 )
          {
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v154 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v64);
            IsEnable = sub_3003A10(0, v154);
            if ( !v260 )
              sub_2213CDC(IsEnable, v64);
            v146 = 1;
            if ( Time < (__int64)v153 || IsEnable >= (__int64)v260[6].klass )
            {
              v145 = 1;
              v31 = 0;
            }
            else
            {
              v155 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !v155 )
                sub_2213CDC(0, v156);
              IsEnable = sub_3003A60(v155, 0);
              if ( !v260 )
                sub_2213CDC(IsEnable, v64);
              v145 = 1;
              v146 = 1;
              v31 = IsEnable < (__int64)v260[6].klass;
            }
            goto LABEL_215;
          }
          v146 = 1;
          v145 = 1;
        }
        v31 = v249;
LABEL_215:
        LODWORD(v142) = v141[1].bits;
        if ( (int)++v143 >= (int)v142 )
        {
          if ( (v146 & 1) != 0 )
          {
            v87 = v145 & 1;
            v120 = v144 & 1;
LABEL_272:
            v26 = v247;
            goto LABEL_277;
          }
          v26 = v247;
LABEL_274:
          v137 = v255;
          if ( !v255 )
            sub_2213CDC(0, v64);
          goto LABEL_275;
        }
      }
    }
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      sub_2213CDC(0, v164);
    birthDay = SelfUserGame->fields.birthDay;
    if ( birthDay >= 1 )
    {
      v166 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v164);
        v166 = BalanceConfig_TypeInfo;
      }
      monitor = (System_Func_int__bool__o *)object[1].monitor;
      ServantIdsBirthdayBeforeValentine = v166->static_fields->ServantIdsBirthdayBeforeValentine;
      if ( !monitor )
      {
        monitor = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(monitor, object, Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__, 0);
        object[1].monitor = monitor;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&object[1].monitor,
          (int32_t)monitor,
          v169,
          v170,
          v171,
          v172,
          v173,
          v174);
      }
      v175 = (BalanceConfig_c *)BasicHelper__Any_int__58784608(
                                  ServantIdsBirthdayBeforeValentine,
                                  (System_Func_T__bool__o *)monitor,
                                  (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
      if ( ((unsigned __int8)v175 & 1) != 0 )
      {
        v175 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v176);
          v175 = BalanceConfig_TypeInfo;
        }
        VtReleaseAt = v175->static_fields->VtReleaseAt;
        if ( VtReleaseAt >= 1 )
        {
          if ( !v254->klass )
            sub_2213CDC(v175, v176);
          nestedTypes = v254->klass->_1.nestedTypes;
          if ( !*(&v175->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v175, v176);
            VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
          }
          if ( (__int64)nestedTypes < VtReleaseAt )
            goto LABEL_248;
        }
      }
      if ( !v254->klass )
        sub_2213CDC(v175, v176);
      isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                (VoiceMaster_o *)v175,
                                birthDay,
                                (int64_t)v254->klass->_1.nestedTypes,
                                v177);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v180);
      v182 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
      if ( !v182 )
        sub_2213CDC(0, v183);
      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v182,
                       (const MethodInfo_3F1323C *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
      if ( isEnableBirthdayVoice )
      {
        v186 = 1;
LABEL_267:
        if ( !v255 )
          sub_2213CDC(v186, v164);
        v83 = VoiceCondMaster__IsEnable(
                v255,
                &closedType,
                changeSvtVoiceId,
                v47,
                SHIDWORD(v262.methodMetadataHandle),
                v186,
                svtId,
                (System_String_o **)&v262.invoker_method,
                (const MethodInfo *)sync);
        goto LABEL_269;
      }
      if ( !SingleEntity )
        sub_2213CDC(0, v164);
      v164 = (int64_t)SingleEntity[1].klass;
      if ( v164 >= 1 )
      {
        if ( !v254->klass )
          sub_2213CDC(SingleEntity, v164);
        v186 = VoiceMaster__isEnableBirthdayVoice(
                 (VoiceMaster_o *)SingleEntity,
                 v164,
                 (int64_t)v254->klass->_1.nestedTypes,
                 v185);
        goto LABEL_267;
      }
    }
    v186 = 0;
    goto LABEL_267;
  }
  v239 = v262.parameters;
  if ( v262.parameters )
  {
    v240 = *v262.parameters;
    v241 = *((unsigned __int16 *)&(*v262.parameters)[18].bits + 3);
    if ( *((_WORD *)&(*v262.parameters)[18].bits + 3) )
    {
      v242 = (int *)((char *)v240[11].data + 8);
      while ( *((System_IDisposable_c **)v242 - 1) != System_IDisposable_TypeInfo )
      {
        --v241;
        v242 += 4;
        if ( !v241 )
          goto LABEL_292;
      }
      v243 = (__int64)&v240[*v242 + 19].bits;
    }
    else
    {
LABEL_292:
      v243 = sub_224BC3C(v262.parameters, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(const Il2CppType **, _QWORD))v243)(v239, *(_QWORD *)(v243 + 8));
  }
  Instance = 0;
  if ( v31 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_305;
    NetworkManager__GoToTitleDialog((NetworkManager_o *)Instance, 0);
  }
  if ( !v26 )
LABEL_305:
    sub_2213CDC(Instance, v15);
  return (VoiceInfo_array *)System_Collections_Generic_List_object___ToArray(
                              v26,
                              (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
}


int32_t VoiceMaster__getFirstPlayPriority(
        VoiceMaster_o *this,
        int32_t svtId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  __int64 v6; // x1
  int32_t v7; // w20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  _QWORD *v19; // x0
  __int64 v20; // x1
  _QWORD *v21; // x20
  __int64 naturalAligment; // x10
  __int64 v23; // x0
  System_String_o *v24; // x1
  System_String_o *v25; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  System_Collections_Generic_IEnumerator_T__o *v31; // [xsp+18h] [xbp-38h]

  if ( (byte_59719C0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&VoiceEntity_TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_59719C0 = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  v31 = Enumerator;
  while ( 1 )
  {
    if ( !v31 )
      sub_2213CDC(Enumerator, v10);
    klass = v31->klass;
    v12 = *(unsigned __int16 *)&v31->klass->_2.rank;
    if ( *(_WORD *)&v31->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_12;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v14 = sub_224BC3C(v31, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            v31,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = v31->klass;
    v16 = *(unsigned __int16 *)&v31->klass->_2.rank;
    if ( *(_WORD *)&v31->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_VoiceEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_19;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_19:
      v18 = sub_224BC3C(v31, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0);
    }
    v19 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                      v31,
                      *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19
      || (naturalAligment = VoiceEntity_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*v19 + 304LL) < (unsigned int)naturalAligment)
      || *(VoiceEntity_c **)(*(_QWORD *)(*v19 + 200LL) + 8 * naturalAligment - 8) != VoiceEntity_TypeInfo )
    {
      sub_2213CDC(v19, v20);
    }
    v23 = v19[2];
    if ( !v23 )
      sub_2213CDC(0, v20);
    v24 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 360LL))(
                               v23,
                               *(_QWORD *)(*(_QWORD *)v23 + 368LL));
    v25 = System_String__Concat_75651716((System_String_o *)StringLiteral_16746/*"_"*/, v24, 0);
    if ( !labelName )
      sub_2213CDC(v25, v25);
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)System_String__EndsWith(labelName, v25, 0);
    if ( ((unsigned __int8)Enumerator & 1) != 0 )
    {
      v7 = *((_DWORD *)v21 + 15);
      goto LABEL_29;
    }
  }
  v7 = 0;
LABEL_29:
  v26 = v31->klass;
  v27 = *(unsigned __int16 *)&v31->klass->_2.rank;
  if ( *(_WORD *)&v31->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_33;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_33:
    v29 = sub_224BC3C(v31, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(v31, *(_QWORD *)(v29 + 8));
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int *p_offset; // x10
  __int64 v17; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  _QWORD *v22; // x0
  __int64 v23; // x1
  _QWORD *v24; // x22
  __int64 naturalAligment; // x10
  __int64 v26; // x0
  System_String_o *v27; // x1
  System_String_o *v28; // x0
  Il2CppObject *Instance; // x0
  __int64 v30; // x1
  __int64 v31; // x1
  Il2CppObject *MasterData_object; // x21
  NetworkManager_c *v33; // x0
  __int64 v34; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v36; // x23
  VoiceMaster_o *v37; // x0
  const MethodInfo *v38; // x4
  UserServantCollectionEntity_o *SyncUserServantCollectionEntity; // x0
  __int64 v40; // x1
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  System_Collections_Generic_IEnumerator_T__o *v46; // [xsp+18h] [xbp-48h]

  if ( (byte_59719BF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&VoiceEntity_TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_59719BF = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v9);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  v46 = Enumerator;
  do
  {
    if ( !v46 )
      sub_2213CDC(Enumerator, v13);
    klass = v46->klass;
    v15 = *(unsigned __int16 *)&v46->klass->_2.rank;
    if ( *(_WORD *)&v46->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_12;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v17 = sub_224BC3C(v46, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            v46,
            *(_QWORD *)(v17 + 8))
        & 1) == 0 )
      goto LABEL_44;
    v18 = v46->klass;
    v19 = *(unsigned __int16 *)&v46->klass->_2.rank;
    if ( *(_WORD *)&v46->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_VoiceEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_19;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_19:
      v21 = sub_224BC3C(v46, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0);
    }
    v22 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                      v46,
                      *(_QWORD *)(v21 + 8));
    v24 = v22;
    if ( !v22
      || (naturalAligment = VoiceEntity_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*v22 + 304LL) < (unsigned int)naturalAligment)
      || *(VoiceEntity_c **)(*(_QWORD *)(*v22 + 200LL) + 8 * naturalAligment - 8) != VoiceEntity_TypeInfo )
    {
      sub_2213CDC(v22, v23);
    }
    v26 = v22[2];
    if ( !v26 )
      sub_2213CDC(0, v23);
    v27 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 360LL))(
                               v26,
                               *(_QWORD *)(*(_QWORD *)v26 + 368LL));
    v28 = System_String__Concat_75651716((System_String_o *)StringLiteral_16746/*"_"*/, v27, 0);
    if ( !labelName )
      sub_2213CDC(v28, v28);
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)System_String__EndsWith(labelName, v28, 0);
  }
  while ( ((unsigned __int8)Enumerator & 1) == 0 );
  if ( *((_DWORD *)v24 + 12) != 17 && (unsigned int)(*((_DWORD *)v24 + 7) - 1) > 1 )
  {
LABEL_44:
    v10 = 0;
    goto LABEL_45;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v30);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v33 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31);
    v33 = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    sub_2213CDC(v33, v31);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       v33->static_fields->userIdNumber,
                       svtId,
                       0);
  v36 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v24[2];
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v34);
  v37 = (VoiceMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(v36, 0);
  SyncUserServantCollectionEntity = VoiceMaster__GetSyncUserServantCollectionEntity(
                                      v37,
                                      svtId,
                                      (System_String_o *)v37,
                                      *((_DWORD *)v24 + 7),
                                      v38);
  if ( !SyncUserServantCollectionEntity )
    SyncUserServantCollectionEntity = EntityDefinitely;
  if ( isUpdate )
  {
    if ( !SyncUserServantCollectionEntity )
      sub_2213CDC(0, v40);
    if ( !UserServantCollectionEntity__SetPlayed(SyncUserServantCollectionEntity, *((_DWORD *)v24 + 14), 0) )
      goto LABEL_44;
  }
  else
  {
    if ( !SyncUserServantCollectionEntity )
      sub_2213CDC(0, v40);
    if ( UserServantCollectionEntity__IsPlayed(SyncUserServantCollectionEntity, *((_DWORD *)v24 + 14), 0) )
      goto LABEL_44;
  }
  v10 = *((_DWORD *)v24 + 14);
LABEL_45:
  v41 = v46->klass;
  v42 = *(unsigned __int16 *)&v46->klass->_2.rank;
  if ( *(_WORD *)&v46->klass->_2.rank )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_49;
    }
    v44 = (__int64)&v41->vtable[*v43];
  }
  else
  {
LABEL_49:
    v44 = sub_224BC3C(v46, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(v46, *(_QWORD *)(v44 + 8));
  return v10;
}


bool VoiceMaster__isEnableBirthdayVoice(
        VoiceMaster_o *this,
        int64_t userBirthDay,
        int64_t createDay,
        const MethodInfo *method)
{
  System_DateTime_o v6; // x1
  int32_t Year; // w20
  int32_t Month; // w21
  int32_t Day; // w3
  __int64 v10; // x1
  int32_t v11; // w20
  int32_t v12; // w21
  int32_t v13; // w3
  __int64 v14; // x1
  int64_t ServerTime; // x20
  int64_t Time_48346468; // x21
  int64_t v17; // x0
  _QWORD v21[2]; // [xsp+8h] [xbp-68h] BYREF
  int v22; // [xsp+18h] [xbp-58h]
  System_DateTime_o v23; // [xsp+20h] [xbp-50h]
  System_DateTime_o dateTime; // [xsp+28h] [xbp-48h]
  uint64_t v25; // [xsp+30h] [xbp-40h] BYREF
  uint64_t dateData; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_59719BD & 1) == 0 )
  {
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59719BD = 1;
  }
  v25 = 0;
  dateData = 0;
  v23.fields._dateData = 0;
  dateTime.fields._dateData = 0;
  v22 = 0;
  if ( userBirthDay < 1 )
    return 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, userBirthDay);
  dateData = NetworkManager__getServerDateTime_48347596(createDay, 0).fields._dateData;
  v25 = NetworkManager__getDateTime_48347260(userBirthDay, 0).fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v6.fields._dateData);
  Year = System_DateTime__get_Year((System_DateTime_o)&dateData, 0);
  Month = System_DateTime__get_Month((System_DateTime_o)&v25, 0);
  Day = System_DateTime__get_Day((System_DateTime_o)&v25, 0);
  v21[0] = 0;
  System_DateTime___ctor_77013752((System_DateTime_o)v21, Year, Month, Day, 0);
  dateTime.fields._dateData = v21[0];
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v10);
  v11 = System_DateTime__get_Year((System_DateTime_o)&dateData, 0);
  v12 = System_DateTime__get_Month((System_DateTime_o)&v25, 0);
  v13 = System_DateTime__get_Day((System_DateTime_o)&v25, 0);
  v21[0] = 0;
  System_DateTime___ctor_77013752((System_DateTime_o)v21, v11 + 1, v12, v13, 0);
  v23.fields._dateData = v21[0];
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  ServerTime = NetworkManager__getServerTime(0);
  Time_48346468 = NetworkManager__getTime_48346468(dateTime, 0);
  v17 = NetworkManager__getTime_48346468(v23, 0);
  return Time_48346468 + 86400 >= createDay && Time_48346468 <= ServerTime || v17 <= ServerTime;
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
  if ( (byte_59719C2 & 1) == 0 )
  {
    this = (VoiceMaster___c__DisplayClass2_0_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59719C2 = 1;
  }
  userStvCollectionEntity = v4->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_2213CDC(this, *(_QWORD *)&id);
  v6 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&id);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v9, 0) == id;
}