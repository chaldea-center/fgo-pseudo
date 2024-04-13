void __fastcall VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE71C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EE71C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    131,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
VoiceInfo_array *__fastcall VoiceMaster__getEnableInfo(
        VoiceMaster_o *this,
        int32_t svtId,
        int32_t changeSvtVoiceId,
        int32_t limitCount,
        System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList,
        bool isCheckPlayCond,
        bool isMaterial,
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
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  int v115; // w1
  int v116; // w2
  __int64 v117; // x3
  int v118; // w1
  int v119; // w2
  __int64 v120; // x3
  __int64 v121; // x28
  DataManager_o *Instance; // x0
  __int64 v123; // x1
  ServantVoiceMaster_o *MasterData_WarQuestSelectionMaster; // x23
  UserServantCollectionMaster_o *v125; // x24
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  ServantVoiceEntity_array *Entity_31451972; // x27
  int v133; // w2
  __int64 v134; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  __int64 v136; // x1
  __int64 v137; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v139; // w22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v141; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v144; // x3
  System_Collections_Generic_IEnumerator_T__c *v145; // x8
  unsigned __int64 v146; // x10
  int32_t *v147; // x11
  __int64 v148; // x0
  __int64 v149; // x0
  __int64 v150; // x1
  VoiceEntity_o *v151; // x19
  __int64 v152; // x10
  __int64 v153; // x8
  ServantVoiceEntity_o *v154; // x23
  __int64 v155; // x0
  System_String_o *v156; // x26
  System_String_o *v157; // x0
  System_String_o *v158; // x24
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_31475968; // x0
  void *IsEnable; // x0
  __int64 v161; // x1
  const MethodInfo *v162; // x2
  int condType; // w8
  UserServantCollectionEntity_o *v164; // x8
  __int64 v165; // x24
  __int64 v166; // x23
  __int64 v167; // x0
  __int64 v168; // x1
  bool v169; // w0
  int32_t v170; // w23
  _BOOL8 IsQuestClear_25877652; // x0
  __int64 v172; // x1
  int v173; // w24
  char v174; // w23
  VoiceCondMaster_o *v175; // x0
  UserServantCollectionEntity_o *v176; // x8
  __int64 v177; // x24
  __int64 v178; // x23
  __int64 v179; // x0
  __int64 v180; // x1
  ServantVoiceCond_array *v181; // x14
  __int64 v182; // x11
  __int64 v183; // x24
  char v184; // w9
  char v185; // w10
  char v186; // w8
  ServantVoiceCond_o *v187; // x23
  unsigned int v188; // w11
  WebViewManager_o *v189; // x0
  __int64 v190; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v191; // x0
  __int64 v192; // x1
  WarEntity_o *v193; // x0
  __int64 v194; // x1
  VoiceCondMaster_o *v195; // x0
  WebViewManager_o *v196; // x0
  __int64 v197; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v198; // x0
  __int64 v199; // x1
  _BOOL8 v200; // x0
  __int64 v201; // x1
  ServantVoiceCond_array *v202; // x28
  __int64 v203; // x11
  __int64 v204; // x23
  char v205; // w8
  char v206; // w10
  char v207; // w9
  ServantVoiceCond_o *v208; // x24
  unsigned int v209; // w11
  WebViewManager_o *v210; // x0
  __int64 v211; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v212; // x0
  __int64 v213; // x1
  WarEntity_o *v214; // x0
  __int64 v215; // x1
  int32_t value; // w24
  _BOOL8 v217; // x0
  __int64 v218; // x1
  __int64 v219; // x1
  __int64 v220; // x1
  UserServantCollectionEntity_o *v221; // x8
  __int64 v222; // x24
  __int64 v223; // x23
  __int64 v224; // x1
  int32_t condValue; // w24
  __int64 v226; // x1
  __int64 v227; // x1
  __int64 v228; // x1
  ServantVoiceCond_array *v229; // x12
  __int64 v230; // x10
  __int64 v231; // x24
  char v232; // w13
  char v233; // w9
  char v234; // w8
  ServantVoiceCond_o *v235; // x23
  unsigned int v236; // w10
  DataMasterBase_WarMaster__WarEntity__int__o *v237; // x0
  __int64 v238; // x1
  _BOOL8 v239; // x0
  __int64 v240; // x1
  int64_t v241; // x23
  __int64 v242; // x3
  char v243; // w10
  bool v244; // w8
  char v245; // w23
  __int64 v246; // x3
  UserGameEntity_o *SelfUserGame; // x0
  int64_t v248; // x1
  BalanceConfig_c *v249; // x0
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x24
  System_Func_int__bool__o *v251; // x23
  System_String_array **v252; // x2
  System_String_array **v253; // x3
  System_Boolean_array **v254; // x4
  System_Int32_array **v255; // x5
  System_Int32_array *v256; // x6
  System_Int32_array *v257; // x7
  BalanceConfig_c *v258; // x0
  __int64 v259; // x1
  const MethodInfo *v260; // x3
  int64_t VtReleaseAt; // x8
  int64_t createdAt; // x23
  bool isEnableBirthdayVoice; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0
  __int64 v265; // x1
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v267; // x3
  VoiceCondMaster_o *v268; // x8
  _BOOL8 v269; // x0
  char v270; // w26
  __int64 v271; // x23
  const MethodInfo *v272; // x1
  __int64 v273; // x0
  __int64 v274; // x1
  System_String_array **v275; // x2
  System_String_array **v276; // x3
  System_Boolean_array **v277; // x4
  System_Int32_array **v278; // x5
  System_Int32_array *v279; // x6
  System_Int32_array *v280; // x7
  System_Int32_array **v281; // x1
  System_String_array **v282; // x2
  System_String_array **v283; // x3
  System_Boolean_array **v284; // x4
  System_Int32_array **v285; // x5
  System_Int32_array *v286; // x6
  System_Int32_array *v287; // x7
  System_Int32_array **v288; // x1
  System_String_array **v289; // x2
  System_String_array **v290; // x3
  System_Boolean_array **v291; // x4
  System_Int32_array **v292; // x5
  System_Int32_array *v293; // x6
  System_Int32_array *v294; // x7
  System_Int32_array **v295; // x1
  System_String_array **v296; // x2
  System_String_array **v297; // x3
  System_Boolean_array **v298; // x4
  System_Int32_array **v299; // x5
  System_Int32_array *v300; // x6
  System_Int32_array *v301; // x7
  __int64 v302; // x1
  System_Collections_Generic_IEnumerator_T__c *v303; // x8
  unsigned __int64 v304; // x10
  int32_t *v305; // x11
  __int64 v306; // x0
  __int64 v308; // x0
  __int64 v309; // x0
  __int64 v310; // x0
  __int64 v311; // x0
  const MethodInfo *isMateriala; // [xsp+0h] [xbp-120h]
  char v313; // [xsp+18h] [xbp-108h]
  char v314; // [xsp+18h] [xbp-108h]
  char v315; // [xsp+18h] [xbp-108h]
  ServantVoiceCond_array *v316; // [xsp+20h] [xbp-100h]
  int32_t v317; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v318; // [xsp+20h] [xbp-100h]
  int32_t voicePrefix; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixa; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixb; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixc; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixd; // [xsp+28h] [xbp-F8h]
  int64_t voicePrefixe; // [xsp+28h] [xbp-F8h]
  Il2CppObject *object; // [xsp+30h] [xbp-F0h]
  BattleServantConfConponent_o *v326; // [xsp+38h] [xbp-E8h]
  int items_low; // [xsp+40h] [xbp-E0h]
  UserServantCollectionEntity_o **v328; // [xsp+48h] [xbp-D8h]
  int64_t Time; // [xsp+50h] [xbp-D0h]
  char v330; // [xsp+58h] [xbp-C8h]
  int32_t svtVoiceId; // [xsp+5Ch] [xbp-C4h]
  VoiceCondMaster_o *v332; // [xsp+60h] [xbp-C0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v333; // [xsp+68h] [xbp-B8h]
  bool svtIda; // [xsp+70h] [xbp-B0h]
  WarEntity_o *entity; // [xsp+88h] [xbp-98h] BYREF
  WarEntity_o *v338; // [xsp+90h] [xbp-90h] BYREF
  int32_t overwritePriority[2]; // [xsp+98h] [xbp-88h] BYREF
  System_String_o *overwriteNameDefault; // [xsp+A0h] [xbp-80h] BYREF
  System_String_o *overwriteName; // [xsp+A8h] [xbp-78h] BYREF
  bool isInvalidVoiceList; // [xsp+B4h] [xbp-6Ch] BYREF
  ServantVoiceCond_array *conds; // [xsp+B8h] [xbp-68h] BYREF
  int32_t v344; // [xsp+C4h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v345; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v346; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v347; // 0:x0.16

  if ( (byte_42EE71E & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, svtId, changeSvtVoiceId, *(_QWORD *)&limitCount);
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v16, v17, v18);
    sub_B5D5C4(&CondType_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v28, v29, v30);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v31, v32, v33);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v34, v35, v36);
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoiceCondMaster___, v37, v38, v39);
    sub_B5D5C4(&Method_DataManager_GetMaster_BeforeBirthDayMaster___, v40, v41, v42);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v43, v44, v45);
    sub_B5D5C4(&DataManager_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v49, v50, v51);
    sub_B5D5C4(
      &Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__,
      v52,
      v53,
      v54);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v55, v56, v57);
    sub_B5D5C4(
      &Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__,
      v58,
      v59,
      v60);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v61, v62, v63);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v64, v65, v66);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v67, v68, v69);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v70, v71, v72);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v73, v74, v75);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VoiceInfo__Add__, v76, v77, v78);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__, v79, v80, v81);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VoiceInfo___ctor__, v82, v83, v84);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v85, v86, v87);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v88, v89, v90);
    sub_B5D5C4(&System_Collections_Generic_List_VoiceInfo__TypeInfo, v91, v92, v93);
    sub_B5D5C4(&NetworkManager_TypeInfo, v94, v95, v96);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v97, v98, v99);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v100, v101, v102);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v103, v104, v105);
    sub_B5D5C4(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__, v106, v107, v108);
    sub_B5D5C4(&VoiceMaster___c__DisplayClass2_0_TypeInfo, v109, v110, v111);
    sub_B5D5C4(&VoiceEntity_TypeInfo, v112, v113, v114);
    sub_B5D5C4(&VoiceInfo_TypeInfo, v115, v116, v117);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v118, v119, v120);
    byte_42EE71E = 1;
  }
  v344 = 0;
  conds = 0LL;
  isInvalidVoiceList = 0;
  overwriteNameDefault = 0LL;
  overwriteName = 0LL;
  *(_QWORD *)overwritePriority = 0LL;
  entity = 0LL;
  v338 = 0LL;
  v121 = sub_B5D694(VoiceMaster___c__DisplayClass2_0_TypeInfo);
  VoiceMaster___c__DisplayClass2_0___ctor((VoiceMaster___c__DisplayClass2_0_o *)v121, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  MasterData_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  v332 = (VoiceCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_277;
  v344 = ServantLimitAddMaster__getVoicePrefix((ServantLimitAddMaster_o *)Instance, changeSvtVoiceId, limitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  v125 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            Instance,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !v125 )
    goto LABEL_277;
  Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(v125, (int64_t)Instance, svtId, 0LL);
  if ( !v121 )
    goto LABEL_277;
  *(_QWORD *)(v121 + 16) = Instance;
  v328 = (UserServantCollectionEntity_o **)(v121 + 16);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v121 + 16),
    (System_Int32_array **)Instance,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_277;
  Entity_31451972 = ServantVoiceMaster__getEntity_31451972(
                      MasterData_WarQuestSelectionMaster,
                      changeSvtVoiceId,
                      limitCount,
                      0LL);
  Time = NetworkManager__getTime(0LL);
  v333 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v333,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_42E5FA0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, v123, v133, v134);
    byte_42E5FA0 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_277;
  svtVoiceId = changeSvtVoiceId;
  items_low = LOBYTE(Instance[1].fields.saveNameList[3].fields._items);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v136);
  v330 = 0;
  object = (Il2CppObject *)v121;
  v326 = (BattleServantConfConponent_o *)(v121 + 24);
  v139 = isCheckPlayCond;
  svtIda = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v141 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v141;
        p_offset += 4;
        if ( v141 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_26;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_26:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v137);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v145 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v146 = 0LL;
      v147 = &v145->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v147 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v146;
        v147 += 4;
        if ( v146 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_33;
      }
      v148 = (__int64)&v145->vtable[*v147].method;
    }
    else
    {
LABEL_33:
      v148 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v144);
    }
    v149 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v148)(
             Enumerator,
             *(_QWORD *)(v148 + 8));
    v151 = (VoiceEntity_o *)v149;
    if ( !v149
      || (v152 = *(&VoiceEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)v149 + 300LL) < (unsigned int)v152)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v149 + 200LL) + 8 * v152 - 8) != VoiceEntity_TypeInfo )
    {
      sub_B5D69C(v149, v150);
    }
    if ( !Entity_31451972 )
      sub_B5D69C(v149, v150);
    v153 = *(int *)(v149 + 28);
    if ( (unsigned int)v153 >= Entity_31451972->max_length )
    {
      v308 = sub_B5D6C8(v149);
      sub_B5D668(v308, 0LL);
    }
    v154 = Entity_31451972->m_Items[v153];
    if ( !v154 )
      continue;
    v155 = *(_QWORD *)(v149 + 16);
    if ( !v155 )
      sub_B5D69C(0LL, v150);
    v156 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v155 + 360LL))(
                                v155,
                                *(_QWORD *)(*(_QWORD *)v155 + 368LL));
    v157 = System_Int32__ToString((int32_t)&v344, 0LL);
    v158 = System_String__Concat_44580072(v157, (System_String_o *)StringLiteral_16096/*"_"*/, v156, 0LL);
    VoiceList_31475968 = ServantVoiceEntity__getVoiceList_31475968(
                           v154,
                           v151->fields.svtVoiceType,
                           v158,
                           disableCondTypeList,
                           v139,
                           0LL);
    if ( !VoiceList_31475968 )
      continue;
    if ( VoiceList_31475968->fields._size < 1 )
      continue;
    if ( !VoiceList_31475968->fields._items->m_Items[0] )
      continue;
    ServantVoiceEntity__getOverwriteData(
      v154,
      v151->fields.svtVoiceType,
      v158,
      &conds,
      &isInvalidVoiceList,
      &overwriteName,
      &overwriteNameDefault,
      &overwritePriority[1],
      svtIda,
      0LL);
    if ( isInvalidVoiceList )
      continue;
    overwritePriority[0] = v151->fields.closedType;
    condType = v151->fields.condType;
    if ( condType > 54 )
    {
      if ( condType <= 92 )
      {
        if ( condType == 56 )
        {
          v202 = conds;
          if ( conds && (v203 = *(_QWORD *)&conds->max_length) != 0 )
          {
            if ( (int)v203 >= 1 )
            {
              v204 = 0LL;
              v205 = 0;
              v206 = 0;
              v207 = 0;
              voicePrefixc = conds->m_Items;
              do
              {
                if ( (unsigned int)v204 >= (unsigned int)v203 )
                {
                  v311 = sub_B5D6C8(IsEnable);
                  sub_B5D668(v311, 0LL);
                }
                v208 = voicePrefixc[v204];
                if ( !v208 )
                  sub_B5D69C(IsEnable, v161);
                v209 = v208->fields.condType;
                if ( v209 <= 0x13 && ((1 << v209) & 0xCE000) != 0 && v208->fields.value >= 1 )
                {
                  v210 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v210 )
                    sub_B5D69C(0LL, v211);
                  v212 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)v210,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v212 )
                    sub_B5D69C(0LL, v213);
                  v214 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           v212,
                           v208->fields.value,
                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v214 && Time >= v214->fields.targetId )
                  {
                    value = v208->fields.value;
                    v317 = v344;
                    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CondType_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    }
                    v217 = CondType__IsServantGetBeforeEventEnd(svtId, value, 0LL);
                    if ( !v332 )
                      sub_B5D69C(v217, v218);
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v332,
                                         overwritePriority,
                                         svtVoiceId,
                                         v156,
                                         v317,
                                         v217,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v205 = (unsigned __int8)IsEnable & 1;
                    v207 = 1;
                    v206 = 1;
                  }
                  else
                  {
                    if ( !v332 )
                      sub_B5D69C(0LL, v215);
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v332,
                                         overwritePriority,
                                         svtVoiceId,
                                         v156,
                                         v344,
                                         0,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v206 = (unsigned __int8)IsEnable & 1;
                    v207 = 1;
                    v205 = (unsigned __int8)IsEnable & 1;
                  }
                }
                LODWORD(v203) = v202->max_length;
                ++v204;
              }
              while ( (int)v204 < (int)v203 );
              if ( (v207 & 1) != 0 )
              {
                v173 = v206 & 1;
                v174 = v205 & 1;
                goto LABEL_253;
              }
            }
            v175 = v332;
            if ( !v332 )
              sub_B5D69C(0LL, v161);
          }
          else
          {
            v175 = v332;
            if ( !v332 )
              sub_B5D69C(0LL, v161);
          }
          goto LABEL_245;
        }
        if ( condType == 92 )
        {
          if ( !v332 )
            sub_B5D69C(0LL, v161);
          v169 = VoiceCondMaster__IsEnable(
                   v332,
                   overwritePriority,
                   svtVoiceId,
                   v156,
                   v344,
                   0,
                   svtId,
                   &overwriteNameDefault,
                   isMateriala);
          goto LABEL_252;
        }
      }
      else
      {
        if ( condType == 98 )
        {
          v176 = *v328;
          if ( !*v328 )
            sub_B5D69C(IsEnable, v161);
          v177 = *(_QWORD *)&v176->fields.friendshipRank.fields.currentCryptoKey;
          v178 = *(_QWORD *)&v176->fields.friendshipRank.fields.fakeValue;
          voicePrefixa = v344;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v346.fields.currentCryptoKey = v177;
          *(_QWORD *)&v346.fields.fakeValue = v178;
          v179 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v346, 0LL);
          if ( !v332 )
            sub_B5D69C(v179, v180);
LABEL_74:
          v169 = VoiceCondMaster__IsEnable(
                   v332,
                   overwritePriority,
                   svtVoiceId,
                   v156,
                   voicePrefixa,
                   (int)v179 >= v151->fields.condValue,
                   svtId,
                   &overwriteNameDefault,
                   isMateriala);
          goto LABEL_252;
        }
        if ( condType == 99 )
        {
          v164 = *v328;
          if ( !*v328 )
            sub_B5D69C(IsEnable, v161);
          v165 = *(_QWORD *)&v164->fields.friendshipRank.fields.currentCryptoKey;
          v166 = *(_QWORD *)&v164->fields.friendshipRank.fields.fakeValue;
          voicePrefix = v344;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v345.fields.currentCryptoKey = v165;
          *(_QWORD *)&v345.fields.fakeValue = v166;
          v167 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v345, 0LL);
          if ( !v332 )
            sub_B5D69C(v167, v168);
          v169 = VoiceCondMaster__IsEnable(
                   v332,
                   overwritePriority,
                   svtVoiceId,
                   v156,
                   voicePrefix,
                   (int)v167 <= v151->fields.condValue,
                   svtId,
                   &overwriteNameDefault,
                   isMateriala);
          goto LABEL_252;
        }
      }
LABEL_227:
      v173 = 1;
LABEL_228:
      v174 = 1;
      goto LABEL_253;
    }
    if ( condType <= 21 )
    {
      v173 = 1;
      v174 = 1;
      switch ( condType )
      {
        case 0:
          v175 = v332;
          if ( !v332 )
            sub_B5D69C(0LL, v161);
          goto LABEL_245;
        case 1:
          v170 = v344;
          condValue = v151->fields.condValue;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_25877652 = CondType__IsQuestClear_25877652(condValue, -1, 0, 0LL);
          if ( !v332 )
            sub_B5D69C(IsQuestClear_25877652, v226);
          goto LABEL_164;
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
          goto LABEL_253;
        case 6:
          if ( !*v328 )
            sub_B5D69C(IsEnable, v161);
          if ( !v332 )
            sub_B5D69C(0LL, v161);
          v169 = VoiceCondMaster__IsEnable(
                   v332,
                   overwritePriority,
                   svtVoiceId,
                   v156,
                   v344,
                   (*v328)->fields.maxLv >= v151->fields.condValue,
                   svtId,
                   &overwriteNameDefault,
                   isMateriala);
          goto LABEL_252;
        case 7:
          if ( !*v328 )
            sub_B5D69C(IsEnable, v161);
          if ( !v332 )
            sub_B5D69C(0LL, v161);
          v169 = VoiceCondMaster__IsEnable(
                   v332,
                   overwritePriority,
                   svtVoiceId,
                   v156,
                   v344,
                   (*v328)->fields.maxLimitCount >= v151->fields.condValue,
                   svtId,
                   &overwriteNameDefault,
                   isMateriala);
          goto LABEL_252;
        case 8:
          if ( !*v328 )
            sub_B5D69C(0LL, v161);
          v170 = v344;
          IsQuestClear_25877652 = UserServantCollectionEntity__IsGet(*v328, 0LL);
          if ( !v332 )
            sub_B5D69C(IsQuestClear_25877652, v220);
          goto LABEL_164;
        case 9:
          v221 = *v328;
          if ( !*v328 )
            sub_B5D69C(IsEnable, v161);
          v222 = *(_QWORD *)&v221->fields.friendshipRank.fields.currentCryptoKey;
          v223 = *(_QWORD *)&v221->fields.friendshipRank.fields.fakeValue;
          voicePrefixa = v344;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v347.fields.currentCryptoKey = v222;
          *(_QWORD *)&v347.fields.fakeValue = v223;
          v179 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v347, 0LL);
          if ( !v332 )
            sub_B5D69C(v179, v224);
          goto LABEL_74;
        case 17:
          if ( !*v328 )
            sub_B5D69C(0LL, v161);
          v170 = v344;
          IsQuestClear_25877652 = UserServantCollectionEntity__IsPlayed(*v328, v151->fields.condValue, 0LL);
          if ( !v332 )
            sub_B5D69C(IsQuestClear_25877652, v227);
          goto LABEL_164;
        case 18:
          if ( !*v328 )
            sub_B5D69C(0LL, v161);
          v170 = v344;
          IsQuestClear_25877652 = UserServantCollectionEntity__IsLimitCountMax(*v328, 0LL);
          if ( !v332 )
            sub_B5D69C(IsQuestClear_25877652, v228);
          goto LABEL_164;
        case 19:
          SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
          if ( !SelfUserGame )
            sub_B5D69C(0LL, v248);
          if ( SelfUserGame->fields.birthDay < 1 )
          {
            v269 = 0LL;
          }
          else
          {
            voicePrefixe = SelfUserGame->fields.birthDay;
            v249 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v249 = BalanceConfig_TypeInfo;
            }
            ServantIdsBirthdayBeforeValentine = v249->static_fields->ServantIdsBirthdayBeforeValentine;
            v251 = (System_Func_int__bool__o *)v326->klass;
            if ( !v326->klass )
            {
              v251 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
              System_Func_int__bool____ctor(
                v251,
                object,
                Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__,
                (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
              v326->klass = (BattleServantConfConponent_c *)v251;
              sub_B5D560(v326, (System_Int32_array **)v251, v252, v253, v254, v255, v256, v257);
            }
            v258 = (BalanceConfig_c *)BasicHelper__Any_int__28142236(
                                        ServantIdsBirthdayBeforeValentine,
                                        (System_Func_T__bool__o *)v251,
                                        (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
            if ( ((unsigned __int8)v258 & 1) != 0 )
            {
              v258 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v258 = BalanceConfig_TypeInfo;
              }
              VtReleaseAt = v258->static_fields->VtReleaseAt;
              if ( VtReleaseAt >= 1 )
              {
                if ( !*v328 )
                  sub_B5D69C(v258, v259);
                createdAt = (*v328)->fields.createdAt;
                if ( (BYTE3(v258->vtable._0_Equals.methodPtr) & 4) != 0 && !v258->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v258);
                  VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
                }
                if ( createdAt < VtReleaseAt )
                  goto LABEL_227;
              }
            }
            if ( !*v328 )
              sub_B5D69C(v258, v259);
            isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                      (VoiceMaster_o *)v258,
                                      voicePrefixe,
                                      (*v328)->fields.createdAt,
                                      v260);
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
            if ( !Master_WarQuestSelectionMaster )
              sub_B5D69C(0LL, v265);
            SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                             Master_WarQuestSelectionMaster,
                             (const MethodInfo_23FB0FC *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
            v268 = v332;
            if ( isEnableBirthdayVoice )
            {
              v269 = 1LL;
              if ( !v332 )
LABEL_261:
                sub_B5D69C(v269, v248);
LABEL_251:
              v169 = VoiceCondMaster__IsEnable(
                       v268,
                       overwritePriority,
                       svtVoiceId,
                       v156,
                       v344,
                       v269,
                       svtId,
                       &overwriteNameDefault,
                       isMateriala);
LABEL_252:
              v174 = v169;
              v173 = 1;
              goto LABEL_253;
            }
            if ( !SingleEntity )
              sub_B5D69C(0LL, v248);
            v248 = (int64_t)SingleEntity[1].klass;
            if ( v248 < 1 )
            {
              v269 = 0LL;
              if ( !v332 )
                goto LABEL_261;
              goto LABEL_251;
            }
            if ( !*v328 )
              sub_B5D69C(SingleEntity, v248);
            v269 = VoiceMaster__isEnableBirthdayVoice(
                     (VoiceMaster_o *)SingleEntity,
                     v248,
                     (*v328)->fields.createdAt,
                     v267);
          }
          v268 = v332;
          if ( !v332 )
            goto LABEL_261;
          goto LABEL_251;
        case 20:
          v229 = conds;
          if ( conds && (v230 = *(_QWORD *)&conds->max_length) != 0 )
          {
            if ( (int)v230 >= 1 )
            {
              v231 = 0LL;
              v232 = 0;
              v233 = 0;
              v234 = 0;
              v318 = conds;
              voicePrefixd = conds->m_Items;
              do
              {
                if ( (unsigned int)v231 >= (unsigned int)v230 )
                {
                  v309 = sub_B5D6C8(IsEnable);
                  sub_B5D668(v309, 0LL);
                }
                v235 = voicePrefixd[v231];
                if ( !v235 )
                  sub_B5D69C(IsEnable, v161);
                v236 = v235->fields.condType;
                if ( v236 <= 0x13 && ((1 << v236) & 0xCE000) != 0 && v235->fields.value >= 1 )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  v237 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
                  if ( !v237 )
                    sub_B5D69C(0LL, v238);
                  v239 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           v237,
                           &v338,
                           v235->fields.value,
                           (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
                  if ( !v239 )
                    goto LABEL_181;
                  if ( !v338 )
                    sub_B5D69C(v239, v240);
                  if ( Time >= v338->fields.targetId )
                  {
                    if ( !v332 )
                      sub_B5D69C(0LL, v240);
                    v241 = *(_QWORD *)&v338->fields.eventId;
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v332,
                                         overwritePriority,
                                         svtVoiceId,
                                         v156,
                                         v344,
                                         Time >= v241,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v243 = (char)IsEnable;
                    if ( (items_low != 0) | v330 & 1 )
                    {
                      v244 = 0;
                    }
                    else
                    {
                      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        v313 = (char)IsEnable;
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                        v243 = v313;
                      }
                      if ( !byte_42EE731 )
                      {
                        v314 = v243;
                        sub_B5D5C4(&NetworkManager_TypeInfo, v161, (_DWORD)v162, v242);
                        v243 = v314;
                        byte_42EE731 = 1;
                      }
                      IsEnable = NetworkManager_TypeInfo;
                      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        v315 = v243;
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                        v243 = v315;
                        IsEnable = NetworkManager_TypeInfo;
                      }
                      if ( !v338 )
                        sub_B5D69C(IsEnable, v161);
                      v244 = *(_QWORD *)(*((_QWORD *)IsEnable + 23) + 24LL) < *(_QWORD *)&v338->fields.eventId;
                    }
                    v229 = v318;
                    v232 = v243 & 1;
                    if ( v244 && Time >= v241 )
                    {
                      v245 = v243 & 1;
                      if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
                        sub_B5D69C(0LL, v161);
                      if ( !byte_42E8374 )
                      {
                        sub_B5D5C4(&DataManager_TypeInfo, v161, (_DWORD)v162, v246);
                        byte_42E8374 = 1;
                      }
                      IsEnable = DataManager_TypeInfo;
                      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !DataManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                        IsEnable = DataManager_TypeInfo;
                      }
                      if ( !v338 )
                        sub_B5D69C(IsEnable, v161);
                      v229 = v318;
                      v234 = 1;
                      v232 = v245;
                      v330 |= *(_QWORD *)(*((_QWORD *)IsEnable + 23) + 24LL) < *(_QWORD *)&v338->fields.eventId;
                    }
                    else
                    {
                      v234 = 1;
                    }
                    v233 = 1;
                  }
                  else
                  {
LABEL_181:
                    if ( !v332 )
                      sub_B5D69C(0LL, v240);
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v332,
                                         overwritePriority,
                                         svtVoiceId,
                                         v156,
                                         v344,
                                         0,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v229 = v318;
                    v233 = (unsigned __int8)IsEnable & 1;
                    v234 = 1;
                    v232 = (unsigned __int8)IsEnable & 1;
                  }
                }
                LODWORD(v230) = v229->max_length;
                ++v231;
              }
              while ( (int)v231 < (int)v230 );
              if ( (v234 & 1) != 0 )
              {
                v173 = v233 & 1;
                v174 = v232 & 1;
                goto LABEL_253;
              }
            }
            v175 = v332;
            if ( !v332 )
              sub_B5D69C(0LL, v161);
          }
          else
          {
            v175 = v332;
            if ( !v332 )
              sub_B5D69C(0LL, v161);
          }
          goto LABEL_245;
        case 21:
          if ( !*v328 )
            sub_B5D69C(0LL, v161);
          v170 = v344;
          IsQuestClear_25877652 = UserServantCollectionEntity__IsFinded(*v328, 0LL);
          if ( !v332 )
            sub_B5D69C(IsQuestClear_25877652, v219);
          goto LABEL_164;
        default:
          goto LABEL_228;
      }
    }
    if ( condType != 31 )
    {
      if ( condType == 54 )
      {
        if ( !*v328 )
          sub_B5D69C(0LL, v161);
        v170 = v344;
        IsQuestClear_25877652 = UserServantCollectionEntity__IsCostumeGet(*v328, limitCount, 0LL);
        if ( !v332 )
          sub_B5D69C(IsQuestClear_25877652, v172);
LABEL_164:
        v169 = VoiceCondMaster__IsEnable(
                 v332,
                 overwritePriority,
                 svtVoiceId,
                 v156,
                 v170,
                 IsQuestClear_25877652,
                 svtId,
                 &overwriteNameDefault,
                 isMateriala);
        goto LABEL_252;
      }
      goto LABEL_227;
    }
    v181 = conds;
    if ( !conds || (v182 = *(_QWORD *)&conds->max_length) == 0 )
    {
      v175 = v332;
      if ( !v332 )
        sub_B5D69C(0LL, v161);
      goto LABEL_245;
    }
    if ( (int)v182 < 1 )
      goto LABEL_231;
    v183 = 0LL;
    v184 = 0;
    v185 = 0;
    v186 = 0;
    v316 = conds;
    voicePrefixb = conds->m_Items;
    do
    {
      if ( (unsigned int)v183 >= (unsigned int)v182 )
      {
        v310 = sub_B5D6C8(IsEnable);
        sub_B5D668(v310, 0LL);
      }
      v187 = voicePrefixb[v183];
      if ( !v187 )
        sub_B5D69C(IsEnable, v161);
      v188 = v187->fields.condType;
      if ( v188 <= 0x13 )
      {
        if ( ((1 << v188) & 0xCE000) != 0 )
        {
          if ( v187->fields.value < 1 )
            goto LABEL_103;
          v189 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v189 )
            sub_B5D69C(0LL, v190);
          v191 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)v189,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v191 )
            sub_B5D69C(0LL, v192);
          v193 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v191,
                   v187->fields.value,
                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !v193 || Time < v193->fields.targetId )
          {
            v195 = v332;
            if ( !v332 )
              sub_B5D69C(0LL, v194);
            goto LABEL_89;
          }
          if ( !v332 )
            sub_B5D69C(v193, v194);
          IsEnable = (void *)VoiceCondMaster__IsEnable(
                               v332,
                               overwritePriority,
                               svtVoiceId,
                               v156,
                               v344,
                               Time >= *(_QWORD *)&v193->fields.eventId,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
          goto LABEL_101;
        }
        if ( v188 == 16 && v187->fields.value >= 1 )
        {
          v196 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v196 )
            sub_B5D69C(0LL, v197);
          v198 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)v196,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
          if ( !v198 )
            sub_B5D69C(0LL, v199);
          v200 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v198,
                   &entity,
                   v187->fields.value,
                   (const MethodInfo_23FAE6C *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
          if ( !v200 )
            goto LABEL_97;
          if ( !entity )
            sub_B5D69C(v200, v201);
          if ( Time < (__int64)entity->fields.longName )
          {
LABEL_97:
            v195 = v332;
            if ( !v332 )
              sub_B5D69C(0LL, v201);
LABEL_89:
            IsEnable = (void *)VoiceCondMaster__IsEnable(
                                 v195,
                                 overwritePriority,
                                 svtVoiceId,
                                 v156,
                                 v344,
                                 0,
                                 svtId,
                                 &overwriteNameDefault,
                                 isMateriala);
            v185 = (unsigned __int8)IsEnable & 1;
            v186 = 1;
            v184 = (unsigned __int8)IsEnable & 1;
LABEL_102:
            v181 = v316;
            goto LABEL_103;
          }
          if ( !v332 )
            sub_B5D69C(0LL, v201);
          IsEnable = (void *)VoiceCondMaster__IsEnable(
                               v332,
                               overwritePriority,
                               svtVoiceId,
                               v156,
                               v344,
                               1,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
LABEL_101:
          v184 = (unsigned __int8)IsEnable & 1;
          v186 = 1;
          v185 = 1;
          goto LABEL_102;
        }
      }
LABEL_103:
      LODWORD(v182) = v181->max_length;
      ++v183;
    }
    while ( (int)v183 < (int)v182 );
    if ( (v186 & 1) != 0 )
    {
      v173 = v185 & 1;
      v174 = v184 & 1;
      goto LABEL_253;
    }
LABEL_231:
    v175 = v332;
    if ( !v332 )
      sub_B5D69C(0LL, v161);
LABEL_245:
    v173 = 1;
    v174 = VoiceCondMaster__IsEnable(
             v175,
             overwritePriority,
             svtVoiceId,
             v156,
             v344,
             1,
             svtId,
             &overwriteNameDefault,
             isMateriala);
LABEL_253:
    v270 = v174 & VoiceEntity__IsCondEnable(v151, svtId, v162);
    if ( (v270 & 1) != 0 )
    {
      if ( v173 )
      {
LABEL_257:
        v271 = sub_B5D694(VoiceInfo_TypeInfo);
        VoiceInfo___ctor((VoiceInfo_o *)v271, v272);
        if ( !v271 )
          sub_B5D69C(v273, v274);
        *(_QWORD *)(v271 + 16) = v151;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v271 + 16),
          (System_Int32_array **)v151,
          v275,
          v276,
          v277,
          v278,
          v279,
          v280);
        *(_BYTE *)(v271 + 24) = v270 & 1;
        v281 = (System_Int32_array **)overwriteName;
        *(_QWORD *)(v271 + 32) = overwriteName;
        sub_B5D560((BattleServantConfConponent_o *)(v271 + 32), v281, v282, v283, v284, v285, v286, v287);
        v288 = (System_Int32_array **)overwriteNameDefault;
        *(_QWORD *)(v271 + 40) = overwriteNameDefault;
        sub_B5D560((BattleServantConfConponent_o *)(v271 + 40), v288, v289, v290, v291, v292, v293, v294);
        *(_DWORD *)(v271 + 48) = overwritePriority[1];
        *(_DWORD *)(v271 + 52) = v344;
        v295 = (System_Int32_array **)conds;
        *(_QWORD *)(v271 + 56) = conds;
        sub_B5D560((BattleServantConfConponent_o *)(v271 + 56), v295, v296, v297, v298, v299, v300, v301);
        if ( !v333 )
          sub_B5D69C(0LL, v302);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v333,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v271,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_VoiceInfo__Add__);
      }
    }
    else if ( ((unsigned __int8)v173 & (overwritePriority[0] != 2)) != 0 )
    {
      goto LABEL_257;
    }
  }
  v303 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v304 = 0LL;
    v305 = &v303->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v305 - 1) != System_IDisposable_TypeInfo )
    {
      ++v304;
      v305 += 4;
      if ( v304 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_266;
    }
    v306 = (__int64)&v303->vtable[*v305].method;
  }
  else
  {
LABEL_266:
    v306 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v144);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v306)(
    Enumerator,
    *(_QWORD *)(v306 + 8));
  if ( (v330 & 1) != 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_277;
    NetworkManager__GoToTitleDialog((NetworkManager_o *)Instance, 0LL);
  }
  Instance = (DataManager_o *)v333;
  if ( !v333 )
LABEL_277:
    sub_B5D69C(Instance, v123);
  return (VoiceInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v333,
                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
}


int32_t __fastcall VoiceMaster__getFirstPlayPriority(
        VoiceMaster_o *this,
        int32_t svtId,
        System_String_o *labelName,
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x1
  int32_t v22; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  _QWORD *v35; // x0
  __int64 v36; // x1
  _QWORD *v37; // x21
  __int64 v38; // x10
  __int64 v39; // x0
  System_String_o *v40; // x1
  System_String_o *v41; // x0
  int v42; // w8
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  int v48; // [xsp+0h] [xbp-50h]

  if ( (byte_42EE720 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      svtId,
      (_DWORD)labelName,
      method);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&VoiceEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v18, v19, v20);
    byte_42EE720 = 1;
  }
  v22 = 0;
  if ( !System_String__IsNullOrEmpty(labelName, 0LL) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      sub_B5D69C(0LL, v21);
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B5D69C(0LL, v24);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v28 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v28;
          p_offset += 4;
          if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v25);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v31 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v32 = 0LL;
        v33 = &v31->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v32;
          v33 += 4;
          if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v34 = (__int64)&v31->vtable[*v33].method;
      }
      else
      {
LABEL_17:
        v34 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v25);
      }
      v35 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                        Enumerator,
                        *(_QWORD *)(v34 + 8));
      v37 = v35;
      if ( !v35
        || (v38 = *(&VoiceEntity_TypeInfo->_2.bitflags2 + 1), *(unsigned __int8 *)(*v35 + 300LL) < (unsigned int)v38)
        || *(VoiceEntity_c **)(*(_QWORD *)(*v35 + 200LL) + 8 * v38 - 8) != VoiceEntity_TypeInfo )
      {
        sub_B5D69C(v35, v36);
      }
      v39 = v35[2];
      if ( !v39 )
        sub_B5D69C(0LL, v36);
      v40 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v39 + 360LL))(
                                 v39,
                                 *(_QWORD *)(*(_QWORD *)v39 + 368LL));
      v41 = System_String__Concat_44577788((System_String_o *)StringLiteral_16096/*"_"*/, v40, 0LL);
      if ( !labelName )
        sub_B5D69C(v41, v41);
      if ( System_String__EndsWith(labelName, v41, 0LL) )
      {
        v22 = *((_DWORD *)v37 + 15);
        v42 = 98;
        goto LABEL_27;
      }
    }
    v42 = 96;
    v22 = 0;
LABEL_27:
    v48 = v42;
    v43 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v44 = 0LL;
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      v46 = (__int64)&v43->vtable[*v45].method;
    }
    else
    {
LABEL_31:
      v46 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v25);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(
      Enumerator,
      *(_QWORD *)(v46 + 8));
    if ( v48 == 96 )
      return 0;
  }
  return v22;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall VoiceMaster__getFlagRequestNumber(
        VoiceMaster_o *this,
        int32_t svtId,
        System_String_o *labelName,
        bool isUpdate,
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
  __int64 v33; // x1
  int32_t v34; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v36; // x1
  __int64 v37; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v40; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  _QWORD *v47; // x0
  __int64 v48; // x1
  _DWORD *v49; // x23
  __int64 v50; // x10
  __int64 v51; // x0
  System_String_o *v52; // x1
  System_String_o *v53; // x0
  WebViewManager_o *Instance; // x0
  __int64 v55; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v59; // x1
  System_Collections_Generic_IEnumerator_T__c *v60; // x8
  unsigned __int64 v61; // x10
  int32_t *v62; // x11
  __int64 v63; // x0
  int v65; // [xsp+0h] [xbp-60h]

  if ( (byte_42EE71F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      svtId,
      (_DWORD)labelName,
      isUpdate);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&VoiceEntity_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v30, v31, v32);
    byte_42EE71F = 1;
  }
  v34 = 0;
  if ( !System_String__IsNullOrEmpty(labelName, 0LL) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      sub_B5D69C(0LL, v33);
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B5D69C(0LL, v36);
    do
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v40 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v40;
          p_offset += 4;
          if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v37);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        goto LABEL_35;
      v43 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v44 = 0LL;
        v45 = &v43->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v45 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v44;
          v45 += 4;
          if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v46 = (__int64)&v43->vtable[*v45].method;
      }
      else
      {
LABEL_17:
        v46 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v37);
      }
      v47 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(
                        Enumerator,
                        *(_QWORD *)(v46 + 8));
      v49 = v47;
      if ( !v47
        || (v50 = *(&VoiceEntity_TypeInfo->_2.bitflags2 + 1), *(unsigned __int8 *)(*v47 + 300LL) < (unsigned int)v50)
        || *(VoiceEntity_c **)(*(_QWORD *)(*v47 + 200LL) + 8 * v50 - 8) != VoiceEntity_TypeInfo )
      {
        sub_B5D69C(v47, v48);
      }
      v51 = v47[2];
      if ( !v51 )
        sub_B5D69C(0LL, v48);
      v52 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v51 + 360LL))(
                                 v51,
                                 *(_QWORD *)(*(_QWORD *)v51 + 368LL));
      v53 = System_String__Concat_44577788((System_String_o *)StringLiteral_16096/*"_"*/, v52, 0LL);
      if ( !labelName )
        sub_B5D69C(v53, v53);
    }
    while ( !System_String__EndsWith(labelName, v53, 0LL) );
    if ( v49[12] != 17 && v49[7] != 1 )
    {
LABEL_35:
      v34 = 0;
      v65 = 178;
      goto LABEL_36;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v55);
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B5D69C(UserId, UserId);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                         MasterData_WarQuestSelectionMaster,
                         UserId,
                         svtId,
                         0LL);
    v59 = (unsigned int)v49[14];
    if ( isUpdate )
    {
      if ( !EntityDefinitely )
        sub_B5D69C(0LL, v59);
      if ( !UserServantCollectionEntity__SetPlayed(EntityDefinitely, v59, 0LL) )
        goto LABEL_35;
    }
    else
    {
      if ( !EntityDefinitely )
        sub_B5D69C(0LL, v59);
      if ( UserServantCollectionEntity__IsPlayed(EntityDefinitely, v59, 0LL) )
        goto LABEL_35;
    }
    v34 = v49[14];
    v65 = 180;
LABEL_36:
    v60 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v61 = 0LL;
      v62 = &v60->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
      {
        ++v61;
        v62 += 4;
        if ( v61 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_40;
      }
      v63 = (__int64)&v60->vtable[*v62].method;
    }
    else
    {
LABEL_40:
      v63 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v37);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v63)(
      Enumerator,
      *(_QWORD *)(v63 + 8));
    if ( v65 == 178 )
      return 0;
  }
  return v34;
}


bool __fastcall VoiceMaster__isEnableBirthdayVoice(
        VoiceMaster_o *this,
        int64_t userBirthDay,
        int64_t createDay,
        const MethodInfo *method)
{
  int32_t Year; // w20
  int32_t Month; // w21
  int32_t Day; // w3
  int32_t v9; // w20
  int32_t v10; // w21
  int32_t v11; // w3
  int64_t ServerTime; // x20
  int64_t Time_26076684; // x21
  uint64_t v15; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v16; // [xsp+10h] [xbp-40h]
  System_DateTime_o dateTime; // [xsp+18h] [xbp-38h]
  uint64_t v18; // [xsp+20h] [xbp-30h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-28h] BYREF
  System_DateTime_o v20; // 0:x0.8
  System_DateTime_o v21; // 0:x0.8
  System_DateTime_o v22; // 0:x0.8
  System_DateTime_o v23; // 0:x0.8
  System_DateTime_o v24; // 0:x0.8
  System_DateTime_o v25; // 0:x0.8
  System_DateTime_o v26; // 0:x0.8
  System_DateTime_o v27; // 0:x0.8
  System_DateTime_o v28; // 0:x0.8
  System_DateTime_o v29; // 0:x0.8

  if ( (byte_42EE71D & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, userBirthDay, createDay, method);
    byte_42EE71D = 1;
  }
  v18 = 0LL;
  dateData = 0LL;
  v16.fields.dateData = 0LL;
  dateTime.fields.dateData = 0LL;
  if ( userBirthDay < 1 )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime_26077756(createDay, 0LL).fields.dateData;
  v18 = NetworkManager__getDateTime_26077468(userBirthDay, 0LL).fields.dateData;
  v20.fields.dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v20, 0LL);
  v21.fields.dateData = (uint64_t)&v18;
  Month = System_DateTime__get_Month(v21, 0LL);
  v22.fields.dateData = (uint64_t)&v18;
  Day = System_DateTime__get_Day(v22, 0LL);
  v15 = 0LL;
  v23.fields.dateData = (uint64_t)&v15;
  System_DateTime___ctor_15564744(v23, Year, Month, Day, 0LL);
  dateTime.fields.dateData = v15;
  v24.fields.dateData = (uint64_t)&dateData;
  v9 = System_DateTime__get_Year(v24, 0LL);
  v25.fields.dateData = (uint64_t)&v18;
  v10 = System_DateTime__get_Month(v25, 0LL);
  v26.fields.dateData = (uint64_t)&v18;
  v11 = System_DateTime__get_Day(v26, 0LL);
  v15 = 0LL;
  v27.fields.dateData = (uint64_t)&v15;
  System_DateTime___ctor_15564744(v27, v9 + 1, v10, v11, 0LL);
  v16.fields.dateData = v15;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  ServerTime = NetworkManager__getServerTime(0LL);
  v28.fields.dateData = dateTime.fields.dateData;
  Time_26076684 = NetworkManager__getTime_26076684(v28, 0LL);
  v29.fields.dateData = v16.fields.dateData;
  return NetworkManager__getTime_26076684(v29, 0LL) <= ServerTime
      || Time_26076684 + 86400 >= createDay && Time_26076684 <= ServerTime;
}


void __fastcall VoiceMaster___c__DisplayClass2_0___ctor(
        VoiceMaster___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceMaster___c__DisplayClass2_0___getEnableInfo_b__0(
        VoiceMaster___c__DisplayClass2_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  VoiceMaster___c__DisplayClass2_0_o *v5; // x20
  struct UserServantCollectionEntity_o *userStvCollectionEntity; // x8
  __int64 v7; // x20
  __int64 v8; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v5 = this;
  if ( (byte_42E7031 & 1) == 0 )
  {
    this = (VoiceMaster___c__DisplayClass2_0_o *)sub_B5D5C4(
                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                   id,
                                                   (_DWORD)method,
                                                   v3);
    byte_42E7031 = 1;
  }
  userStvCollectionEntity = v5->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_B5D69C(this, *(_QWORD *)&id);
  v8 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v10, 0LL) == id;
}