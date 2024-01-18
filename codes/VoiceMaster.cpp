void __fastcall VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418D2D6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__, method);
    byte_418D2D6 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    130,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
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
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x28
  DataManager_o *Instance; // x0
  __int64 v51; // x1
  ServantVoiceMaster_o *MasterData_WarQuestSelectionMaster; // x23
  UserServantCollectionMaster_o *v53; // x24
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  ServantVoiceEntity_array *Entity_31384532; // x27
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  __int64 v62; // x1
  __int64 v63; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v65; // w22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v67; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v70; // x3
  System_Collections_Generic_IEnumerator_T__c *v71; // x8
  unsigned __int64 v72; // x10
  int32_t *v73; // x11
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x1
  VoiceEntity_o *v77; // x19
  __int64 v78; // x10
  __int64 v79; // x8
  ServantVoiceEntity_o *v80; // x23
  __int64 v81; // x0
  System_String_o *v82; // x26
  System_String_o *v83; // x0
  System_String_o *v84; // x24
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_31408724; // x0
  void *IsEnable; // x0
  __int64 v87; // x1
  const MethodInfo *v88; // x2
  int condType; // w8
  UserServantCollectionEntity_o *v90; // x8
  __int64 v91; // x24
  __int64 v92; // x23
  __int64 v93; // x0
  __int64 v94; // x1
  bool v95; // w0
  int32_t v96; // w23
  _BOOL8 IsQuestClear_25746984; // x0
  __int64 v98; // x1
  int v99; // w24
  char v100; // w23
  VoiceCondMaster_o *v101; // x0
  UserServantCollectionEntity_o *v102; // x8
  __int64 v103; // x24
  __int64 v104; // x23
  __int64 v105; // x0
  __int64 v106; // x1
  ServantVoiceCond_array *v107; // x14
  __int64 v108; // x11
  __int64 v109; // x24
  char v110; // w9
  char v111; // w10
  char v112; // w8
  ServantVoiceCond_o *v113; // x23
  unsigned int v114; // w11
  WebViewManager_o *v115; // x0
  __int64 v116; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v117; // x0
  __int64 v118; // x1
  WarEntity_o *v119; // x0
  __int64 v120; // x1
  VoiceCondMaster_o *v121; // x0
  WebViewManager_o *v122; // x0
  __int64 v123; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v124; // x0
  __int64 v125; // x1
  _BOOL8 v126; // x0
  __int64 v127; // x1
  ServantVoiceCond_array *v128; // x28
  __int64 v129; // x11
  __int64 v130; // x23
  char v131; // w8
  char v132; // w10
  char v133; // w9
  ServantVoiceCond_o *v134; // x24
  unsigned int v135; // w11
  WebViewManager_o *v136; // x0
  __int64 v137; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v138; // x0
  __int64 v139; // x1
  WarEntity_o *v140; // x0
  __int64 v141; // x1
  int32_t value; // w24
  _BOOL8 v143; // x0
  __int64 v144; // x1
  __int64 v145; // x1
  __int64 v146; // x1
  UserServantCollectionEntity_o *v147; // x8
  __int64 v148; // x24
  __int64 v149; // x23
  __int64 v150; // x1
  int32_t condValue; // w24
  __int64 v152; // x1
  __int64 v153; // x1
  __int64 v154; // x1
  ServantVoiceCond_array *v155; // x12
  __int64 v156; // x10
  __int64 v157; // x24
  char v158; // w13
  char v159; // w9
  char v160; // w8
  ServantVoiceCond_o *v161; // x23
  unsigned int v162; // w10
  DataMasterBase_WarMaster__WarEntity__int__o *v163; // x0
  __int64 v164; // x1
  _BOOL8 v165; // x0
  __int64 v166; // x1
  int64_t v167; // x23
  char v168; // w10
  bool v169; // w8
  char v170; // w23
  UserGameEntity_o *SelfUserGame; // x0
  int64_t v172; // x1
  BalanceConfig_c *v173; // x0
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x24
  System_Func_int__bool__o *v175; // x23
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  BalanceConfig_c *v182; // x0
  __int64 v183; // x1
  const MethodInfo *v184; // x3
  int64_t VtReleaseAt; // x8
  int64_t createdAt; // x23
  bool isEnableBirthdayVoice; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0
  __int64 v189; // x1
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v191; // x3
  VoiceCondMaster_o *v192; // x8
  _BOOL8 v193; // x0
  char v194; // w26
  __int64 v195; // x23
  const MethodInfo *v196; // x1
  __int64 v197; // x0
  __int64 v198; // x1
  System_String_array **v199; // x2
  System_String_array **v200; // x3
  System_Boolean_array **v201; // x4
  System_Int32_array **v202; // x5
  System_Int32_array *v203; // x6
  System_Int32_array *v204; // x7
  System_Int32_array **v205; // x1
  System_String_array **v206; // x2
  System_String_array **v207; // x3
  System_Boolean_array **v208; // x4
  System_Int32_array **v209; // x5
  System_Int32_array *v210; // x6
  System_Int32_array *v211; // x7
  System_Int32_array **v212; // x1
  System_String_array **v213; // x2
  System_String_array **v214; // x3
  System_Boolean_array **v215; // x4
  System_Int32_array **v216; // x5
  System_Int32_array *v217; // x6
  System_Int32_array *v218; // x7
  System_Int32_array **v219; // x1
  System_String_array **v220; // x2
  System_String_array **v221; // x3
  System_Boolean_array **v222; // x4
  System_Int32_array **v223; // x5
  System_Int32_array *v224; // x6
  System_Int32_array *v225; // x7
  __int64 v226; // x1
  System_Collections_Generic_IEnumerator_T__c *v227; // x8
  unsigned __int64 v228; // x10
  int32_t *v229; // x11
  __int64 v230; // x0
  __int64 v232; // x0
  __int64 v233; // x0
  __int64 v234; // x0
  __int64 v235; // x0
  const MethodInfo *isMateriala; // [xsp+0h] [xbp-120h]
  char v237; // [xsp+18h] [xbp-108h]
  char v238; // [xsp+18h] [xbp-108h]
  char v239; // [xsp+18h] [xbp-108h]
  ServantVoiceCond_array *v240; // [xsp+20h] [xbp-100h]
  int32_t v241; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v242; // [xsp+20h] [xbp-100h]
  int32_t voicePrefix; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixa; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixb; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixc; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixd; // [xsp+28h] [xbp-F8h]
  int64_t voicePrefixe; // [xsp+28h] [xbp-F8h]
  Il2CppObject *object; // [xsp+30h] [xbp-F0h]
  BattleServantConfConponent_o *v250; // [xsp+38h] [xbp-E8h]
  int items_low; // [xsp+40h] [xbp-E0h]
  UserServantCollectionEntity_o **v252; // [xsp+48h] [xbp-D8h]
  int64_t Time; // [xsp+50h] [xbp-D0h]
  char v254; // [xsp+58h] [xbp-C8h]
  int32_t svtVoiceId; // [xsp+5Ch] [xbp-C4h]
  VoiceCondMaster_o *v256; // [xsp+60h] [xbp-C0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v257; // [xsp+68h] [xbp-B8h]
  bool svtIda; // [xsp+70h] [xbp-B0h]
  WarEntity_o *entity; // [xsp+88h] [xbp-98h] BYREF
  WarEntity_o *v262; // [xsp+90h] [xbp-90h] BYREF
  int32_t overwritePriority[2]; // [xsp+98h] [xbp-88h] BYREF
  System_String_o *overwriteNameDefault; // [xsp+A0h] [xbp-80h] BYREF
  System_String_o *overwriteName; // [xsp+A8h] [xbp-78h] BYREF
  bool isInvalidVoiceList; // [xsp+B4h] [xbp-6Ch] BYREF
  ServantVoiceCond_array *conds; // [xsp+B8h] [xbp-68h] BYREF
  int32_t v268; // [xsp+C4h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v269; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v270; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v271; // 0:x0.16

  if ( (byte_418D2D8 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, v13);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v14);
    sub_B2C35C(&CondType_TypeInfo, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v20);
    sub_B2C35C(&Method_DataManager_GetMasterData_VoiceCondMaster___, v21);
    sub_B2C35C(&Method_DataManager_GetMaster_BeforeBirthDayMaster___, v22);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, v23);
    sub_B2C35C(&DataManager_TypeInfo, v24);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v25);
    sub_B2C35C(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__, v26);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v27);
    sub_B2C35C(
      &Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__,
      v28);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v29);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v30);
    sub_B2C35C(&System_IDisposable_TypeInfo, v31);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v32);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v33);
    sub_B2C35C(&Method_System_Collections_Generic_List_VoiceInfo__Add__, v34);
    sub_B2C35C(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__, v35);
    sub_B2C35C(&Method_System_Collections_Generic_List_VoiceInfo___ctor__, v36);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v37);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v38);
    sub_B2C35C(&System_Collections_Generic_List_VoiceInfo__TypeInfo, v39);
    sub_B2C35C(&NetworkManager_TypeInfo, v40);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v42);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_B2C35C(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__, v44);
    sub_B2C35C(&VoiceMaster___c__DisplayClass2_0_TypeInfo, v45);
    sub_B2C35C(&VoiceEntity_TypeInfo, v46);
    sub_B2C35C(&VoiceInfo_TypeInfo, v47);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v48);
    byte_418D2D8 = 1;
  }
  v268 = 0;
  conds = 0LL;
  isInvalidVoiceList = 0;
  overwriteNameDefault = 0LL;
  overwriteName = 0LL;
  *(_QWORD *)overwritePriority = 0LL;
  entity = 0LL;
  v262 = 0LL;
  v49 = sub_B2C42C(VoiceMaster___c__DisplayClass2_0_TypeInfo);
  VoiceMaster___c__DisplayClass2_0___ctor((VoiceMaster___c__DisplayClass2_0_o *)v49, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  MasterData_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  v256 = (VoiceCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_277;
  v268 = ServantLimitAddMaster__getVoicePrefix((ServantLimitAddMaster_o *)Instance, changeSvtVoiceId, limitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  v53 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !v53 )
    goto LABEL_277;
  Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(v53, (int64_t)Instance, svtId, 0LL);
  if ( !v49 )
    goto LABEL_277;
  *(_QWORD *)(v49 + 16) = Instance;
  v252 = (UserServantCollectionEntity_o **)(v49 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v49 + 16), (System_Int32_array **)Instance, v54, v55, v56, v57, v58, v59);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_277;
  Entity_31384532 = ServantVoiceMaster__getEntity_31384532(
                      MasterData_WarQuestSelectionMaster,
                      changeSvtVoiceId,
                      limitCount,
                      0LL);
  Time = NetworkManager__getTime(0LL);
  v257 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v257,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_4185CE0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v51);
    byte_4185CE0 = 1;
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
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v62);
  v254 = 0;
  object = (Il2CppObject *)v49;
  v250 = (BattleServantConfConponent_o *)(v49 + 24);
  v65 = isCheckPlayCond;
  svtIda = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v67 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v67;
        p_offset += 4;
        if ( v67 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_26;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_26:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v63);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v71 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v72 = 0LL;
      v73 = &v71->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v73 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v72;
        v73 += 4;
        if ( v72 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_33;
      }
      v74 = (__int64)&v71->vtable[*v73].method;
    }
    else
    {
LABEL_33:
      v74 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v70);
    }
    v75 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v74)(
            Enumerator,
            *(_QWORD *)(v74 + 8));
    v77 = (VoiceEntity_o *)v75;
    if ( !v75
      || (v78 = *(&VoiceEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)v75 + 300LL) < (unsigned int)v78)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v75 + 200LL) + 8 * v78 - 8) != VoiceEntity_TypeInfo )
    {
      sub_B2C434(v75, v76);
    }
    if ( !Entity_31384532 )
      sub_B2C434(v75, v76);
    v79 = *(int *)(v75 + 28);
    if ( (unsigned int)v79 >= Entity_31384532->max_length )
    {
      v232 = sub_B2C460(v75);
      sub_B2C400(v232, 0LL);
    }
    v80 = Entity_31384532->m_Items[v79];
    if ( !v80 )
      continue;
    v81 = *(_QWORD *)(v75 + 16);
    if ( !v81 )
      sub_B2C434(0LL, v76);
    v82 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v81 + 360LL))(
                               v81,
                               *(_QWORD *)(*(_QWORD *)v81 + 368LL));
    v83 = System_Int32__ToString((int32_t)&v268, 0LL);
    v84 = System_String__Concat_44307816(v83, (System_String_o *)StringLiteral_15905/*"_"*/, v82, 0LL);
    VoiceList_31408724 = ServantVoiceEntity__getVoiceList_31408724(
                           v80,
                           v77->fields.svtVoiceType,
                           v84,
                           disableCondTypeList,
                           v65,
                           0LL);
    if ( !VoiceList_31408724 )
      continue;
    if ( VoiceList_31408724->fields._size < 1 )
      continue;
    if ( !VoiceList_31408724->fields._items->m_Items[0] )
      continue;
    ServantVoiceEntity__getOverwriteData(
      v80,
      v77->fields.svtVoiceType,
      v84,
      &conds,
      &isInvalidVoiceList,
      &overwriteName,
      &overwriteNameDefault,
      &overwritePriority[1],
      svtIda,
      0LL);
    if ( isInvalidVoiceList )
      continue;
    overwritePriority[0] = v77->fields.closedType;
    condType = v77->fields.condType;
    if ( condType > 54 )
    {
      if ( condType <= 92 )
      {
        if ( condType == 56 )
        {
          v128 = conds;
          if ( conds && (v129 = *(_QWORD *)&conds->max_length) != 0 )
          {
            if ( (int)v129 >= 1 )
            {
              v130 = 0LL;
              v131 = 0;
              v132 = 0;
              v133 = 0;
              voicePrefixc = conds->m_Items;
              do
              {
                if ( (unsigned int)v130 >= (unsigned int)v129 )
                {
                  v235 = sub_B2C460(IsEnable);
                  sub_B2C400(v235, 0LL);
                }
                v134 = voicePrefixc[v130];
                if ( !v134 )
                  sub_B2C434(IsEnable, v87);
                v135 = v134->fields.condType;
                if ( v135 <= 0x13 && ((1 << v135) & 0xCE000) != 0 && v134->fields.value >= 1 )
                {
                  v136 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v136 )
                    sub_B2C434(0LL, v137);
                  v138 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)v136,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v138 )
                    sub_B2C434(0LL, v139);
                  v140 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           v138,
                           v134->fields.value,
                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v140 && Time >= v140->fields.targetId )
                  {
                    value = v134->fields.value;
                    v241 = v268;
                    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CondType_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    }
                    v143 = CondType__IsServantGetBeforeEventEnd(svtId, value, 0LL);
                    if ( !v256 )
                      sub_B2C434(v143, v144);
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v256,
                                         overwritePriority,
                                         svtVoiceId,
                                         v82,
                                         v241,
                                         v143,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v131 = (unsigned __int8)IsEnable & 1;
                    v133 = 1;
                    v132 = 1;
                  }
                  else
                  {
                    if ( !v256 )
                      sub_B2C434(0LL, v141);
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v256,
                                         overwritePriority,
                                         svtVoiceId,
                                         v82,
                                         v268,
                                         0,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v132 = (unsigned __int8)IsEnable & 1;
                    v133 = 1;
                    v131 = (unsigned __int8)IsEnable & 1;
                  }
                }
                LODWORD(v129) = v128->max_length;
                ++v130;
              }
              while ( (int)v130 < (int)v129 );
              if ( (v133 & 1) != 0 )
              {
                v99 = v132 & 1;
                v100 = v131 & 1;
                goto LABEL_253;
              }
            }
            v101 = v256;
            if ( !v256 )
              sub_B2C434(0LL, v87);
          }
          else
          {
            v101 = v256;
            if ( !v256 )
              sub_B2C434(0LL, v87);
          }
          goto LABEL_245;
        }
        if ( condType == 92 )
        {
          if ( !v256 )
            sub_B2C434(0LL, v87);
          v95 = VoiceCondMaster__IsEnable(
                  v256,
                  overwritePriority,
                  svtVoiceId,
                  v82,
                  v268,
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
          v102 = *v252;
          if ( !*v252 )
            sub_B2C434(IsEnable, v87);
          v103 = *(_QWORD *)&v102->fields.friendshipRank.fields.currentCryptoKey;
          v104 = *(_QWORD *)&v102->fields.friendshipRank.fields.fakeValue;
          voicePrefixa = v268;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v270.fields.currentCryptoKey = v103;
          *(_QWORD *)&v270.fields.fakeValue = v104;
          v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v270, 0LL);
          if ( !v256 )
            sub_B2C434(v105, v106);
LABEL_74:
          v95 = VoiceCondMaster__IsEnable(
                  v256,
                  overwritePriority,
                  svtVoiceId,
                  v82,
                  voicePrefixa,
                  (int)v105 >= v77->fields.condValue,
                  svtId,
                  &overwriteNameDefault,
                  isMateriala);
          goto LABEL_252;
        }
        if ( condType == 99 )
        {
          v90 = *v252;
          if ( !*v252 )
            sub_B2C434(IsEnable, v87);
          v91 = *(_QWORD *)&v90->fields.friendshipRank.fields.currentCryptoKey;
          v92 = *(_QWORD *)&v90->fields.friendshipRank.fields.fakeValue;
          voicePrefix = v268;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v269.fields.currentCryptoKey = v91;
          *(_QWORD *)&v269.fields.fakeValue = v92;
          v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v269, 0LL);
          if ( !v256 )
            sub_B2C434(v93, v94);
          v95 = VoiceCondMaster__IsEnable(
                  v256,
                  overwritePriority,
                  svtVoiceId,
                  v82,
                  voicePrefix,
                  (int)v93 <= v77->fields.condValue,
                  svtId,
                  &overwriteNameDefault,
                  isMateriala);
          goto LABEL_252;
        }
      }
LABEL_227:
      v99 = 1;
LABEL_228:
      v100 = 1;
      goto LABEL_253;
    }
    if ( condType <= 21 )
    {
      v99 = 1;
      v100 = 1;
      switch ( condType )
      {
        case 0:
          v101 = v256;
          if ( !v256 )
            sub_B2C434(0LL, v87);
          goto LABEL_245;
        case 1:
          v96 = v268;
          condValue = v77->fields.condValue;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_25746984 = CondType__IsQuestClear_25746984(condValue, -1, 0, 0LL);
          if ( !v256 )
            sub_B2C434(IsQuestClear_25746984, v152);
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
          if ( !*v252 )
            sub_B2C434(IsEnable, v87);
          if ( !v256 )
            sub_B2C434(0LL, v87);
          v95 = VoiceCondMaster__IsEnable(
                  v256,
                  overwritePriority,
                  svtVoiceId,
                  v82,
                  v268,
                  (*v252)->fields.maxLv >= v77->fields.condValue,
                  svtId,
                  &overwriteNameDefault,
                  isMateriala);
          goto LABEL_252;
        case 7:
          if ( !*v252 )
            sub_B2C434(IsEnable, v87);
          if ( !v256 )
            sub_B2C434(0LL, v87);
          v95 = VoiceCondMaster__IsEnable(
                  v256,
                  overwritePriority,
                  svtVoiceId,
                  v82,
                  v268,
                  (*v252)->fields.maxLimitCount >= v77->fields.condValue,
                  svtId,
                  &overwriteNameDefault,
                  isMateriala);
          goto LABEL_252;
        case 8:
          if ( !*v252 )
            sub_B2C434(0LL, v87);
          v96 = v268;
          IsQuestClear_25746984 = UserServantCollectionEntity__IsGet(*v252, 0LL);
          if ( !v256 )
            sub_B2C434(IsQuestClear_25746984, v146);
          goto LABEL_164;
        case 9:
          v147 = *v252;
          if ( !*v252 )
            sub_B2C434(IsEnable, v87);
          v148 = *(_QWORD *)&v147->fields.friendshipRank.fields.currentCryptoKey;
          v149 = *(_QWORD *)&v147->fields.friendshipRank.fields.fakeValue;
          voicePrefixa = v268;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v271.fields.currentCryptoKey = v148;
          *(_QWORD *)&v271.fields.fakeValue = v149;
          v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v271, 0LL);
          if ( !v256 )
            sub_B2C434(v105, v150);
          goto LABEL_74;
        case 17:
          if ( !*v252 )
            sub_B2C434(0LL, v87);
          v96 = v268;
          IsQuestClear_25746984 = UserServantCollectionEntity__IsPlayed(*v252, v77->fields.condValue, 0LL);
          if ( !v256 )
            sub_B2C434(IsQuestClear_25746984, v153);
          goto LABEL_164;
        case 18:
          if ( !*v252 )
            sub_B2C434(0LL, v87);
          v96 = v268;
          IsQuestClear_25746984 = UserServantCollectionEntity__IsLimitCountMax(*v252, 0LL);
          if ( !v256 )
            sub_B2C434(IsQuestClear_25746984, v154);
          goto LABEL_164;
        case 19:
          SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
          if ( !SelfUserGame )
            sub_B2C434(0LL, v172);
          if ( SelfUserGame->fields.birthDay < 1 )
          {
            v193 = 0LL;
          }
          else
          {
            voicePrefixe = SelfUserGame->fields.birthDay;
            v173 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v173 = BalanceConfig_TypeInfo;
            }
            ServantIdsBirthdayBeforeValentine = v173->static_fields->ServantIdsBirthdayBeforeValentine;
            v175 = (System_Func_int__bool__o *)v250->klass;
            if ( !v250->klass )
            {
              v175 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
              System_Func_int__bool____ctor(
                v175,
                object,
                Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__,
                (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
              v250->klass = (BattleServantConfConponent_c *)v175;
              sub_B2C2F8(v250, (System_Int32_array **)v175, v176, v177, v178, v179, v180, v181);
            }
            v182 = (BalanceConfig_c *)BasicHelper__Any_int__24273940(
                                        ServantIdsBirthdayBeforeValentine,
                                        (System_Func_T__bool__o *)v175,
                                        (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496);
            if ( ((unsigned __int8)v182 & 1) != 0 )
            {
              v182 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v182 = BalanceConfig_TypeInfo;
              }
              VtReleaseAt = v182->static_fields->VtReleaseAt;
              if ( VtReleaseAt >= 1 )
              {
                if ( !*v252 )
                  sub_B2C434(v182, v183);
                createdAt = (*v252)->fields.createdAt;
                if ( (BYTE3(v182->vtable._0_Equals.methodPtr) & 4) != 0 && !v182->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v182);
                  VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
                }
                if ( createdAt < VtReleaseAt )
                  goto LABEL_227;
              }
            }
            if ( !*v252 )
              sub_B2C434(v182, v183);
            isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                      (VoiceMaster_o *)v182,
                                      voicePrefixe,
                                      (*v252)->fields.createdAt,
                                      v184);
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
            if ( !Master_WarQuestSelectionMaster )
              sub_B2C434(0LL, v189);
            SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                             Master_WarQuestSelectionMaster,
                             (const MethodInfo_24E43BC *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
            v192 = v256;
            if ( isEnableBirthdayVoice )
            {
              v193 = 1LL;
              if ( !v256 )
LABEL_261:
                sub_B2C434(v193, v172);
LABEL_251:
              v95 = VoiceCondMaster__IsEnable(
                      v192,
                      overwritePriority,
                      svtVoiceId,
                      v82,
                      v268,
                      v193,
                      svtId,
                      &overwriteNameDefault,
                      isMateriala);
LABEL_252:
              v100 = v95;
              v99 = 1;
              goto LABEL_253;
            }
            if ( !SingleEntity )
              sub_B2C434(0LL, v172);
            v172 = (int64_t)SingleEntity[1].klass;
            if ( v172 < 1 )
            {
              v193 = 0LL;
              if ( !v256 )
                goto LABEL_261;
              goto LABEL_251;
            }
            if ( !*v252 )
              sub_B2C434(SingleEntity, v172);
            v193 = VoiceMaster__isEnableBirthdayVoice(
                     (VoiceMaster_o *)SingleEntity,
                     v172,
                     (*v252)->fields.createdAt,
                     v191);
          }
          v192 = v256;
          if ( !v256 )
            goto LABEL_261;
          goto LABEL_251;
        case 20:
          v155 = conds;
          if ( conds && (v156 = *(_QWORD *)&conds->max_length) != 0 )
          {
            if ( (int)v156 >= 1 )
            {
              v157 = 0LL;
              v158 = 0;
              v159 = 0;
              v160 = 0;
              v242 = conds;
              voicePrefixd = conds->m_Items;
              do
              {
                if ( (unsigned int)v157 >= (unsigned int)v156 )
                {
                  v233 = sub_B2C460(IsEnable);
                  sub_B2C400(v233, 0LL);
                }
                v161 = voicePrefixd[v157];
                if ( !v161 )
                  sub_B2C434(IsEnable, v87);
                v162 = v161->fields.condType;
                if ( v162 <= 0x13 && ((1 << v162) & 0xCE000) != 0 && v161->fields.value >= 1 )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  v163 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
                  if ( !v163 )
                    sub_B2C434(0LL, v164);
                  v165 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           v163,
                           &v262,
                           v161->fields.value,
                           (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
                  if ( !v165 )
                    goto LABEL_181;
                  if ( !v262 )
                    sub_B2C434(v165, v166);
                  if ( Time >= v262->fields.targetId )
                  {
                    if ( !v256 )
                      sub_B2C434(0LL, v166);
                    v167 = *(_QWORD *)&v262->fields.eventId;
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v256,
                                         overwritePriority,
                                         svtVoiceId,
                                         v82,
                                         v268,
                                         Time >= v167,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v168 = (char)IsEnable;
                    if ( (items_low != 0) | v254 & 1 )
                    {
                      v169 = 0;
                    }
                    else
                    {
                      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        v237 = (char)IsEnable;
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                        v168 = v237;
                      }
                      if ( !byte_418D2FB )
                      {
                        v238 = v168;
                        sub_B2C35C(&NetworkManager_TypeInfo, v87);
                        v168 = v238;
                        byte_418D2FB = 1;
                      }
                      IsEnable = NetworkManager_TypeInfo;
                      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        v239 = v168;
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                        v168 = v239;
                        IsEnable = NetworkManager_TypeInfo;
                      }
                      if ( !v262 )
                        sub_B2C434(IsEnable, v87);
                      v169 = *(_QWORD *)(*((_QWORD *)IsEnable + 23) + 24LL) < *(_QWORD *)&v262->fields.eventId;
                    }
                    v155 = v242;
                    v158 = v168 & 1;
                    if ( v169 && Time >= v167 )
                    {
                      v170 = v168 & 1;
                      if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
                        sub_B2C434(0LL, v87);
                      if ( !byte_418847C )
                      {
                        sub_B2C35C(&DataManager_TypeInfo, v87);
                        byte_418847C = 1;
                      }
                      IsEnable = DataManager_TypeInfo;
                      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !DataManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                        IsEnable = DataManager_TypeInfo;
                      }
                      if ( !v262 )
                        sub_B2C434(IsEnable, v87);
                      v155 = v242;
                      v160 = 1;
                      v158 = v170;
                      v254 |= *(_QWORD *)(*((_QWORD *)IsEnable + 23) + 24LL) < *(_QWORD *)&v262->fields.eventId;
                    }
                    else
                    {
                      v160 = 1;
                    }
                    v159 = 1;
                  }
                  else
                  {
LABEL_181:
                    if ( !v256 )
                      sub_B2C434(0LL, v166);
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v256,
                                         overwritePriority,
                                         svtVoiceId,
                                         v82,
                                         v268,
                                         0,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v155 = v242;
                    v159 = (unsigned __int8)IsEnable & 1;
                    v160 = 1;
                    v158 = (unsigned __int8)IsEnable & 1;
                  }
                }
                LODWORD(v156) = v155->max_length;
                ++v157;
              }
              while ( (int)v157 < (int)v156 );
              if ( (v160 & 1) != 0 )
              {
                v99 = v159 & 1;
                v100 = v158 & 1;
                goto LABEL_253;
              }
            }
            v101 = v256;
            if ( !v256 )
              sub_B2C434(0LL, v87);
          }
          else
          {
            v101 = v256;
            if ( !v256 )
              sub_B2C434(0LL, v87);
          }
          goto LABEL_245;
        case 21:
          if ( !*v252 )
            sub_B2C434(0LL, v87);
          v96 = v268;
          IsQuestClear_25746984 = UserServantCollectionEntity__IsFinded(*v252, 0LL);
          if ( !v256 )
            sub_B2C434(IsQuestClear_25746984, v145);
          goto LABEL_164;
        default:
          goto LABEL_228;
      }
    }
    if ( condType != 31 )
    {
      if ( condType == 54 )
      {
        if ( !*v252 )
          sub_B2C434(0LL, v87);
        v96 = v268;
        IsQuestClear_25746984 = UserServantCollectionEntity__IsCostumeGet(*v252, limitCount, 0LL);
        if ( !v256 )
          sub_B2C434(IsQuestClear_25746984, v98);
LABEL_164:
        v95 = VoiceCondMaster__IsEnable(
                v256,
                overwritePriority,
                svtVoiceId,
                v82,
                v96,
                IsQuestClear_25746984,
                svtId,
                &overwriteNameDefault,
                isMateriala);
        goto LABEL_252;
      }
      goto LABEL_227;
    }
    v107 = conds;
    if ( !conds || (v108 = *(_QWORD *)&conds->max_length) == 0 )
    {
      v101 = v256;
      if ( !v256 )
        sub_B2C434(0LL, v87);
      goto LABEL_245;
    }
    if ( (int)v108 < 1 )
      goto LABEL_231;
    v109 = 0LL;
    v110 = 0;
    v111 = 0;
    v112 = 0;
    v240 = conds;
    voicePrefixb = conds->m_Items;
    do
    {
      if ( (unsigned int)v109 >= (unsigned int)v108 )
      {
        v234 = sub_B2C460(IsEnable);
        sub_B2C400(v234, 0LL);
      }
      v113 = voicePrefixb[v109];
      if ( !v113 )
        sub_B2C434(IsEnable, v87);
      v114 = v113->fields.condType;
      if ( v114 <= 0x13 )
      {
        if ( ((1 << v114) & 0xCE000) != 0 )
        {
          if ( v113->fields.value < 1 )
            goto LABEL_103;
          v115 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v115 )
            sub_B2C434(0LL, v116);
          v117 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)v115,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v117 )
            sub_B2C434(0LL, v118);
          v119 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v117,
                   v113->fields.value,
                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !v119 || Time < v119->fields.targetId )
          {
            v121 = v256;
            if ( !v256 )
              sub_B2C434(0LL, v120);
            goto LABEL_89;
          }
          if ( !v256 )
            sub_B2C434(v119, v120);
          IsEnable = (void *)VoiceCondMaster__IsEnable(
                               v256,
                               overwritePriority,
                               svtVoiceId,
                               v82,
                               v268,
                               Time >= *(_QWORD *)&v119->fields.eventId,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
          goto LABEL_101;
        }
        if ( v114 == 16 && v113->fields.value >= 1 )
        {
          v122 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v122 )
            sub_B2C434(0LL, v123);
          v124 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)v122,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
          if ( !v124 )
            sub_B2C434(0LL, v125);
          v126 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v124,
                   &entity,
                   v113->fields.value,
                   (const MethodInfo_24E412C *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
          if ( !v126 )
            goto LABEL_97;
          if ( !entity )
            sub_B2C434(v126, v127);
          if ( Time < (__int64)entity->fields.longName )
          {
LABEL_97:
            v121 = v256;
            if ( !v256 )
              sub_B2C434(0LL, v127);
LABEL_89:
            IsEnable = (void *)VoiceCondMaster__IsEnable(
                                 v121,
                                 overwritePriority,
                                 svtVoiceId,
                                 v82,
                                 v268,
                                 0,
                                 svtId,
                                 &overwriteNameDefault,
                                 isMateriala);
            v111 = (unsigned __int8)IsEnable & 1;
            v112 = 1;
            v110 = (unsigned __int8)IsEnable & 1;
LABEL_102:
            v107 = v240;
            goto LABEL_103;
          }
          if ( !v256 )
            sub_B2C434(0LL, v127);
          IsEnable = (void *)VoiceCondMaster__IsEnable(
                               v256,
                               overwritePriority,
                               svtVoiceId,
                               v82,
                               v268,
                               1,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
LABEL_101:
          v110 = (unsigned __int8)IsEnable & 1;
          v112 = 1;
          v111 = 1;
          goto LABEL_102;
        }
      }
LABEL_103:
      LODWORD(v108) = v107->max_length;
      ++v109;
    }
    while ( (int)v109 < (int)v108 );
    if ( (v112 & 1) != 0 )
    {
      v99 = v111 & 1;
      v100 = v110 & 1;
      goto LABEL_253;
    }
LABEL_231:
    v101 = v256;
    if ( !v256 )
      sub_B2C434(0LL, v87);
LABEL_245:
    v99 = 1;
    v100 = VoiceCondMaster__IsEnable(
             v101,
             overwritePriority,
             svtVoiceId,
             v82,
             v268,
             1,
             svtId,
             &overwriteNameDefault,
             isMateriala);
LABEL_253:
    v194 = v100 & VoiceEntity__IsCondEnable(v77, svtId, v88);
    if ( (v194 & 1) != 0 )
    {
      if ( v99 )
      {
LABEL_257:
        v195 = sub_B2C42C(VoiceInfo_TypeInfo);
        VoiceInfo___ctor((VoiceInfo_o *)v195, v196);
        if ( !v195 )
          sub_B2C434(v197, v198);
        *(_QWORD *)(v195 + 16) = v77;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v195 + 16),
          (System_Int32_array **)v77,
          v199,
          v200,
          v201,
          v202,
          v203,
          v204);
        *(_BYTE *)(v195 + 24) = v194 & 1;
        v205 = (System_Int32_array **)overwriteName;
        *(_QWORD *)(v195 + 32) = overwriteName;
        sub_B2C2F8((BattleServantConfConponent_o *)(v195 + 32), v205, v206, v207, v208, v209, v210, v211);
        v212 = (System_Int32_array **)overwriteNameDefault;
        *(_QWORD *)(v195 + 40) = overwriteNameDefault;
        sub_B2C2F8((BattleServantConfConponent_o *)(v195 + 40), v212, v213, v214, v215, v216, v217, v218);
        *(_DWORD *)(v195 + 48) = overwritePriority[1];
        *(_DWORD *)(v195 + 52) = v268;
        v219 = (System_Int32_array **)conds;
        *(_QWORD *)(v195 + 56) = conds;
        sub_B2C2F8((BattleServantConfConponent_o *)(v195 + 56), v219, v220, v221, v222, v223, v224, v225);
        if ( !v257 )
          sub_B2C434(0LL, v226);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v257,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v195,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_VoiceInfo__Add__);
      }
    }
    else if ( ((unsigned __int8)v99 & (overwritePriority[0] != 2)) != 0 )
    {
      goto LABEL_257;
    }
  }
  v227 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v228 = 0LL;
    v229 = &v227->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v229 - 1) != System_IDisposable_TypeInfo )
    {
      ++v228;
      v229 += 4;
      if ( v228 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_266;
    }
    v230 = (__int64)&v227->vtable[*v229].method;
  }
  else
  {
LABEL_266:
    v230 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v70);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v230)(
    Enumerator,
    *(_QWORD *)(v230 + 8));
  if ( (v254 & 1) != 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_277;
    NetworkManager__GoToTitleDialog((NetworkManager_o *)Instance, 0LL);
  }
  Instance = (DataManager_o *)v257;
  if ( !v257 )
LABEL_277:
    sub_B2C434(Instance, v51);
  return (VoiceInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v257,
                              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall VoiceMaster__getFirstPlayPriority(
        VoiceMaster_o *this,
        int32_t svtId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v14; // x1
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  _QWORD *v25; // x0
  __int64 v26; // x1
  _QWORD *v27; // x21
  __int64 v28; // x10
  __int64 v29; // x0
  System_String_o *v30; // x1
  System_String_o *v31; // x0
  int v32; // w8
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  int v38; // [xsp+0h] [xbp-50h]

  if ( (byte_418D2DA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&VoiceEntity_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v10);
    byte_418D2DA = 1;
  }
  v12 = 0;
  if ( !System_String__IsNullOrEmpty(labelName, 0LL) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      sub_B2C434(0LL, v11);
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B2C434(0LL, v14);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v18 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v18;
          p_offset += 4;
          if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v21 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v22 = 0LL;
        v23 = &v21->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v22;
          v23 += 4;
          if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v24 = (__int64)&v21->vtable[*v23].method;
      }
      else
      {
LABEL_17:
        v24 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
      }
      v25 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                        Enumerator,
                        *(_QWORD *)(v24 + 8));
      v27 = v25;
      if ( !v25
        || (v28 = *(&VoiceEntity_TypeInfo->_2.bitflags2 + 1), *(unsigned __int8 *)(*v25 + 300LL) < (unsigned int)v28)
        || *(VoiceEntity_c **)(*(_QWORD *)(*v25 + 200LL) + 8 * v28 - 8) != VoiceEntity_TypeInfo )
      {
        sub_B2C434(v25, v26);
      }
      v29 = v25[2];
      if ( !v29 )
        sub_B2C434(0LL, v26);
      v30 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v29 + 360LL))(
                                 v29,
                                 *(_QWORD *)(*(_QWORD *)v29 + 368LL));
      v31 = System_String__Concat_44305532((System_String_o *)StringLiteral_15905/*"_"*/, v30, 0LL);
      if ( !labelName )
        sub_B2C434(v31, v31);
      if ( System_String__EndsWith(labelName, v31, 0LL) )
      {
        v12 = *((_DWORD *)v27 + 15);
        v32 = 98;
        goto LABEL_27;
      }
    }
    v32 = 96;
    v12 = 0;
LABEL_27:
    v38 = v32;
    v33 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_31:
      v36 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
      Enumerator,
      *(_QWORD *)(v36 + 8));
    if ( v38 == 96 )
      return 0;
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall VoiceMaster__getFlagRequestNumber(
        VoiceMaster_o *this,
        int32_t svtId,
        System_String_o *labelName,
        bool isUpdate,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int32_t v18; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  _QWORD *v31; // x0
  __int64 v32; // x1
  _DWORD *v33; // x23
  __int64 v34; // x10
  __int64 v35; // x0
  System_String_o *v36; // x1
  System_String_o *v37; // x0
  WebViewManager_o *Instance; // x0
  __int64 v39; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v43; // x1
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  unsigned __int64 v45; // x10
  int32_t *v46; // x11
  __int64 v47; // x0
  int v49; // [xsp+0h] [xbp-60h]

  if ( (byte_418D2D9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B2C35C(&System_IDisposable_TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&VoiceEntity_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v16);
    byte_418D2D9 = 1;
  }
  v18 = 0;
  if ( !System_String__IsNullOrEmpty(labelName, 0LL) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      sub_B2C434(0LL, v17);
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B2C434(0LL, v20);
    do
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v24 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v24;
          p_offset += 4;
          if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        goto LABEL_35;
      v27 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v28 = 0LL;
        v29 = &v27->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v28;
          v29 += 4;
          if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v30 = (__int64)&v27->vtable[*v29].method;
      }
      else
      {
LABEL_17:
        v30 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
      }
      v31 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                        Enumerator,
                        *(_QWORD *)(v30 + 8));
      v33 = v31;
      if ( !v31
        || (v34 = *(&VoiceEntity_TypeInfo->_2.bitflags2 + 1), *(unsigned __int8 *)(*v31 + 300LL) < (unsigned int)v34)
        || *(VoiceEntity_c **)(*(_QWORD *)(*v31 + 200LL) + 8 * v34 - 8) != VoiceEntity_TypeInfo )
      {
        sub_B2C434(v31, v32);
      }
      v35 = v31[2];
      if ( !v35 )
        sub_B2C434(0LL, v32);
      v36 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v35 + 360LL))(
                                 v35,
                                 *(_QWORD *)(*(_QWORD *)v35 + 368LL));
      v37 = System_String__Concat_44305532((System_String_o *)StringLiteral_15905/*"_"*/, v36, 0LL);
      if ( !labelName )
        sub_B2C434(v37, v37);
    }
    while ( !System_String__EndsWith(labelName, v37, 0LL) );
    if ( v33[12] != 17 && v33[7] != 1 )
    {
LABEL_35:
      v18 = 0;
      v49 = 178;
      goto LABEL_36;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v39);
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B2C434(UserId, UserId);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                         MasterData_WarQuestSelectionMaster,
                         UserId,
                         svtId,
                         0LL);
    v43 = (unsigned int)v33[14];
    if ( isUpdate )
    {
      if ( !EntityDefinitely )
        sub_B2C434(0LL, v43);
      if ( !UserServantCollectionEntity__SetPlayed(EntityDefinitely, v43, 0LL) )
        goto LABEL_35;
    }
    else
    {
      if ( !EntityDefinitely )
        sub_B2C434(0LL, v43);
      if ( UserServantCollectionEntity__IsPlayed(EntityDefinitely, v43, 0LL) )
        goto LABEL_35;
    }
    v18 = v33[14];
    v49 = 180;
LABEL_36:
    v44 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v45 = 0LL;
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        ++v45;
        v46 += 4;
        if ( v45 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_40;
      }
      v47 = (__int64)&v44->vtable[*v46].method;
    }
    else
    {
LABEL_40:
      v47 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v21);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(
      Enumerator,
      *(_QWORD *)(v47 + 8));
    if ( v49 == 178 )
      return 0;
  }
  return v18;
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
  int64_t Time_26270684; // x21
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

  if ( (byte_418D2D7 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, userBirthDay);
    byte_418D2D7 = 1;
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
  dateData = NetworkManager__getServerDateTime_26271756(createDay, 0LL).fields.dateData;
  v18 = NetworkManager__getDateTime_26271468(userBirthDay, 0LL).fields.dateData;
  v20.fields.dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v20, 0LL);
  v21.fields.dateData = (uint64_t)&v18;
  Month = System_DateTime__get_Month(v21, 0LL);
  v22.fields.dateData = (uint64_t)&v18;
  Day = System_DateTime__get_Day(v22, 0LL);
  v15 = 0LL;
  v23.fields.dateData = (uint64_t)&v15;
  System_DateTime___ctor_15270084(v23, Year, Month, Day, 0LL);
  dateTime.fields.dateData = v15;
  v24.fields.dateData = (uint64_t)&dateData;
  v9 = System_DateTime__get_Year(v24, 0LL);
  v25.fields.dateData = (uint64_t)&v18;
  v10 = System_DateTime__get_Month(v25, 0LL);
  v26.fields.dateData = (uint64_t)&v18;
  v11 = System_DateTime__get_Day(v26, 0LL);
  v15 = 0LL;
  v27.fields.dateData = (uint64_t)&v15;
  System_DateTime___ctor_15270084(v27, v9 + 1, v10, v11, 0LL);
  v16.fields.dateData = v15;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  ServerTime = NetworkManager__getServerTime(0LL);
  v28.fields.dateData = dateTime.fields.dateData;
  Time_26270684 = NetworkManager__getTime_26270684(v28, 0LL);
  v29.fields.dateData = v16.fields.dateData;
  return NetworkManager__getTime_26270684(v29, 0LL) <= ServerTime
      || Time_26270684 + 86400 >= createDay && Time_26270684 <= ServerTime;
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
  VoiceMaster___c__DisplayClass2_0_o *v4; // x20
  struct UserServantCollectionEntity_o *userStvCollectionEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_41856DE & 1) == 0 )
  {
    this = (VoiceMaster___c__DisplayClass2_0_o *)sub_B2C35C(
                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                   *(_QWORD *)&id);
    byte_41856DE = 1;
  }
  userStvCollectionEntity = v4->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_B2C434(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v9, 0LL) == id;
}