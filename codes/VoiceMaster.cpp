void __fastcall VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FF748 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__, method);
    byte_40FF748 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    130,
    (const MethodInfo_266F73C *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
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
  WebViewManager_o *Instance; // x0
  ServantVoiceMaster_o *MasterData_WarQuestSelectionMaster; // x23
  WebViewManager_o *v52; // x0
  WebViewManager_o *v53; // x0
  ServantLimitAddMaster_o *v54; // x0
  WebViewManager_o *v55; // x0
  UserServantCollectionMaster_o *v56; // x24
  int64_t UserId; // x0
  System_Int32_array **EntityDefinitely; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  ServantVoiceEntity_array *Entity_30014400; // x27
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  __int64 v70; // x1
  NetworkManager_c *v71; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v74; // w22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v76; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v79; // x8
  unsigned __int64 v80; // x10
  int32_t *v81; // x11
  __int64 v82; // x0
  __int64 v83; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  VoiceEntity_o *v86; // x19
  __int64 v87; // x10
  __int64 v88; // x8
  ServantVoiceEntity_o *v89; // x23
  __int64 v90; // x0
  System_String_o *v91; // x26
  System_String_o *v92; // x0
  System_String_o *v93; // x24
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_30036932; // x0
  void *IsEnable; // x0
  __int64 v96; // x1
  const MethodInfo *v97; // x2
  int condType; // w8
  UserServantCollectionEntity_o *v99; // x8
  __int64 v100; // x24
  __int64 v101; // x23
  int32_t v102; // w0
  bool v103; // w0
  int32_t v104; // w23
  bool IsQuestClear_25438860; // w0
  int v106; // w24
  char v107; // w23
  VoiceCondMaster_o *v108; // x0
  UserServantCollectionEntity_o *v109; // x8
  __int64 v110; // x24
  __int64 v111; // x23
  int32_t v112; // w0
  ServantVoiceCond_array *v113; // x14
  __int64 v114; // x11
  __int64 v115; // x24
  char v116; // w9
  char v117; // w10
  char v118; // w8
  ServantVoiceCond_o *v119; // x23
  unsigned int v120; // w11
  WebViewManager_o *v121; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v122; // x0
  WarEntity_o *v123; // x0
  VoiceCondMaster_o *v124; // x0
  WebViewManager_o *v125; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v126; // x0
  ServantVoiceCond_array *v127; // x28
  __int64 v128; // x11
  __int64 v129; // x23
  char v130; // w8
  char v131; // w10
  char v132; // w9
  ServantVoiceCond_o *v133; // x24
  unsigned int v134; // w11
  WebViewManager_o *v135; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v136; // x0
  WarEntity_o *v137; // x0
  int32_t value; // w24
  bool v139; // w0
  UserServantCollectionEntity_o *v140; // x8
  __int64 v141; // x24
  __int64 v142; // x23
  int32_t condValue; // w24
  ServantVoiceCond_array *v144; // x12
  __int64 v145; // x10
  __int64 v146; // x24
  char v147; // w13
  char v148; // w9
  char v149; // w8
  ServantVoiceCond_o *v150; // x23
  unsigned int v151; // w10
  DataMasterBase_WarMaster__WarEntity__int__o *v152; // x0
  int64_t v153; // x23
  char v154; // w10
  bool v155; // w8
  char v156; // w23
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v158; // x1
  __int64 v159; // x2
  __int64 v160; // x3
  __int64 v161; // x4
  BalanceConfig_c *v162; // x0
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x24
  System_Func_int__bool__o *v164; // x23
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  BalanceConfig_c *v171; // x0
  const MethodInfo *v172; // x3
  int64_t VtReleaseAt; // x8
  int64_t createdAt; // x23
  bool isEnableBirthdayVoice; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v178; // x3
  VoiceCondMaster_o *v179; // x8
  bool v180; // w0
  int64_t v181; // x1
  __int64 v182; // x1
  __int64 v183; // x2
  __int64 v184; // x3
  __int64 v185; // x4
  char v186; // w26
  __int64 v187; // x23
  const MethodInfo *v188; // x1
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  System_Int32_array **v195; // x1
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  System_Int32_array **v202; // x1
  System_String_array **v203; // x2
  System_String_array **v204; // x3
  System_Boolean_array **v205; // x4
  System_Int32_array **v206; // x5
  System_Int32_array *v207; // x6
  System_Int32_array *v208; // x7
  System_Int32_array **v209; // x1
  System_String_array **v210; // x2
  System_String_array **v211; // x3
  System_Boolean_array **v212; // x4
  System_Int32_array **v213; // x5
  System_Int32_array *v214; // x6
  System_Int32_array *v215; // x7
  System_Collections_Generic_IEnumerator_T__c *v216; // x8
  unsigned __int64 v217; // x10
  int32_t *v218; // x11
  __int64 v219; // x0
  NetworkManager_o *v220; // x0
  const MethodInfo *isMateriala; // [xsp+0h] [xbp-120h]
  char v223; // [xsp+18h] [xbp-108h]
  char v224; // [xsp+18h] [xbp-108h]
  char v225; // [xsp+18h] [xbp-108h]
  ServantVoiceCond_array *v226; // [xsp+20h] [xbp-100h]
  int32_t v227; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v228; // [xsp+20h] [xbp-100h]
  int32_t voicePrefix; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixa; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixb; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixc; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixd; // [xsp+28h] [xbp-F8h]
  int64_t voicePrefixe; // [xsp+28h] [xbp-F8h]
  Il2CppObject *object; // [xsp+30h] [xbp-F0h]
  BattleServantConfConponent_o *v236; // [xsp+38h] [xbp-E8h]
  _BOOL4 isRebootBlock; // [xsp+40h] [xbp-E0h]
  UserServantCollectionEntity_o **v238; // [xsp+48h] [xbp-D8h]
  int64_t Time; // [xsp+50h] [xbp-D0h]
  char v240; // [xsp+58h] [xbp-C8h]
  int32_t svtVoiceId; // [xsp+5Ch] [xbp-C4h]
  VoiceCondMaster_o *v242; // [xsp+60h] [xbp-C0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v243; // [xsp+68h] [xbp-B8h]
  bool svtIda; // [xsp+70h] [xbp-B0h]
  WarEntity_o *entity; // [xsp+88h] [xbp-98h] BYREF
  WarEntity_o *v248; // [xsp+90h] [xbp-90h] BYREF
  int32_t overwritePriority[2]; // [xsp+98h] [xbp-88h] BYREF
  System_String_o *overwriteNameDefault; // [xsp+A0h] [xbp-80h] BYREF
  System_String_o *overwriteName; // [xsp+A8h] [xbp-78h] BYREF
  bool isInvalidVoiceList; // [xsp+B4h] [xbp-6Ch] BYREF
  ServantVoiceCond_array *conds; // [xsp+B8h] [xbp-68h] BYREF
  int32_t v254; // [xsp+C4h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v255; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v256; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v257; // 0:x0.16

  if ( (byte_40FF74A & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, v13);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v14);
    sub_B16FFC(&CondType_TypeInfo, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMasterData_VoiceCondMaster___, v21);
    sub_B16FFC(&Method_DataManager_GetMaster_BeforeBirthDayMaster___, v22);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v23);
    sub_B16FFC(&DataManager_TypeInfo, v24);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v25);
    sub_B16FFC(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__, v26);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v27);
    sub_B16FFC(
      &Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__,
      v28);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v29);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v30);
    sub_B16FFC(&System_IDisposable_TypeInfo, v31);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v32);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v33);
    sub_B16FFC(&Method_System_Collections_Generic_List_VoiceInfo__Add__, v34);
    sub_B16FFC(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__, v35);
    sub_B16FFC(&Method_System_Collections_Generic_List_VoiceInfo___ctor__, v36);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v37);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v38);
    sub_B16FFC(&System_Collections_Generic_List_VoiceInfo__TypeInfo, v39);
    sub_B16FFC(&NetworkManager_TypeInfo, v40);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v42);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_B16FFC(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__, v44);
    sub_B16FFC(&VoiceMaster___c__DisplayClass2_0_TypeInfo, v45);
    sub_B16FFC(&VoiceEntity_TypeInfo, v46);
    sub_B16FFC(&VoiceInfo_TypeInfo, v47);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v48);
    byte_40FF74A = 1;
  }
  v254 = 0;
  conds = 0LL;
  isInvalidVoiceList = 0;
  overwriteNameDefault = 0LL;
  overwriteName = 0LL;
  *(_QWORD *)overwritePriority = 0LL;
  entity = 0LL;
  v248 = 0LL;
  v49 = sub_B170CC(
          VoiceMaster___c__DisplayClass2_0_TypeInfo,
          *(_QWORD *)&svtId,
          *(_QWORD *)&changeSvtVoiceId,
          *(_QWORD *)&limitCount,
          disableCondTypeList);
  VoiceMaster___c__DisplayClass2_0___ctor((VoiceMaster___c__DisplayClass2_0_o *)v49, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  MasterData_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  v52 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v52 )
    goto LABEL_277;
  v242 = (VoiceCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v52,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  v53 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v53 )
    goto LABEL_277;
  v54 = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v53,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !v54 )
    goto LABEL_277;
  v254 = ServantLimitAddMaster__getVoicePrefix(v54, changeSvtVoiceId, limitCount, 0LL);
  v55 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v55 )
    goto LABEL_277;
  v56 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v55,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v56 )
    goto LABEL_277;
  EntityDefinitely = (System_Int32_array **)UserServantCollectionMaster__GetEntityDefinitely(v56, UserId, svtId, 0LL);
  if ( !v49 )
    goto LABEL_277;
  *(_QWORD *)(v49 + 16) = EntityDefinitely;
  v238 = (UserServantCollectionEntity_o **)(v49 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v49 + 16), EntityDefinitely, v59, v60, v61, v62, v63, v64);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_277;
  Entity_30014400 = ServantVoiceMaster__getEntity_30014400(
                      MasterData_WarQuestSelectionMaster,
                      changeSvtVoiceId,
                      limitCount,
                      0LL);
  Time = NetworkManager__getTime(0LL);
  v243 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_VoiceInfo__TypeInfo,
                                                                                                   v66,
                                                                                                   v67,
                                                                                                   v68,
                                                                                                   v69);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v243,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_40F7166 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v70);
    byte_40F7166 = 1;
  }
  v71 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v71 = NetworkManager_TypeInfo;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_277;
  svtVoiceId = changeSvtVoiceId;
  isRebootBlock = v71->static_fields->isRebootBlock;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  v240 = 0;
  object = (Il2CppObject *)v49;
  v236 = (BattleServantConfConponent_o *)(v49 + 24);
  v74 = isCheckPlayCond;
  svtIda = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v76 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v76;
        p_offset += 4;
        if ( v76 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_26;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_26:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v79 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v80 = 0LL;
      v81 = &v79->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v81 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v80;
        v81 += 4;
        if ( v80 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_33;
      }
      v82 = (__int64)&v79->vtable[*v81].method;
    }
    else
    {
LABEL_33:
      v82 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v83 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v82)(
            Enumerator,
            *(_QWORD *)(v82 + 8));
    v86 = (VoiceEntity_o *)v83;
    if ( !v83
      || (v87 = *(&VoiceEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)v83 + 300LL) < (unsigned int)v87)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v83 + 200LL) + 8 * v87 - 8) != VoiceEntity_TypeInfo )
    {
      sub_B170D4();
    }
    if ( !Entity_30014400 )
      sub_B170D4();
    v88 = *(int *)(v83 + 28);
    if ( (unsigned int)v88 >= Entity_30014400->max_length )
    {
      sub_B17100(v83, v84, v85);
      sub_B170A0();
    }
    v89 = Entity_30014400->m_Items[v88];
    if ( !v89 )
      continue;
    v90 = *(_QWORD *)(v83 + 16);
    if ( !v90 )
      sub_B170D4();
    v91 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v90 + 360LL))(
                               v90,
                               *(_QWORD *)(*(_QWORD *)v90 + 368LL));
    v92 = System_Int32__ToString((int32_t)&v254, 0LL);
    v93 = System_String__Concat_43746016(v92, (System_String_o *)StringLiteral_15842/*"_"*/, v91, 0LL);
    VoiceList_30036932 = ServantVoiceEntity__getVoiceList_30036932(
                           v89,
                           v86->fields.svtVoiceType,
                           v93,
                           disableCondTypeList,
                           v74,
                           0LL);
    if ( !VoiceList_30036932 )
      continue;
    if ( VoiceList_30036932->fields._size < 1 )
      continue;
    if ( !VoiceList_30036932->fields._items->m_Items[0] )
      continue;
    ServantVoiceEntity__getOverwriteData(
      v89,
      v86->fields.svtVoiceType,
      v93,
      &conds,
      &isInvalidVoiceList,
      &overwriteName,
      &overwriteNameDefault,
      &overwritePriority[1],
      svtIda,
      0LL);
    if ( isInvalidVoiceList )
      continue;
    overwritePriority[0] = v86->fields.closedType;
    condType = v86->fields.condType;
    if ( condType > 54 )
    {
      if ( condType <= 92 )
      {
        if ( condType == 56 )
        {
          v127 = conds;
          if ( conds && (v128 = *(_QWORD *)&conds->max_length) != 0 )
          {
            if ( (int)v128 >= 1 )
            {
              v129 = 0LL;
              v130 = 0;
              v131 = 0;
              v132 = 0;
              voicePrefixc = conds->m_Items;
              do
              {
                if ( (unsigned int)v129 >= (unsigned int)v128 )
                {
                  sub_B17100(IsEnable, v96, v97);
                  sub_B170A0();
                }
                v133 = voicePrefixc[v129];
                if ( !v133 )
                  sub_B170D4();
                v134 = v133->fields.condType;
                if ( v134 <= 0x13 && ((1 << v134) & 0xCE000) != 0 && v133->fields.value >= 1 )
                {
                  v135 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v135 )
                    sub_B170D4();
                  v136 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)v135,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v136 )
                    sub_B170D4();
                  v137 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           v136,
                           v133->fields.value,
                           (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v137 && Time >= v137->fields.targetId )
                  {
                    value = v133->fields.value;
                    v227 = v254;
                    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CondType_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    }
                    v139 = CondType__IsServantGetBeforeEventEnd(svtId, value, 0LL);
                    if ( !v242 )
                      sub_B170D4();
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v242,
                                         overwritePriority,
                                         svtVoiceId,
                                         v91,
                                         v227,
                                         v139,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v130 = (unsigned __int8)IsEnable & 1;
                    v132 = 1;
                    v131 = 1;
                  }
                  else
                  {
                    if ( !v242 )
                      sub_B170D4();
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v242,
                                         overwritePriority,
                                         svtVoiceId,
                                         v91,
                                         v254,
                                         0,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v131 = (unsigned __int8)IsEnable & 1;
                    v132 = 1;
                    v130 = (unsigned __int8)IsEnable & 1;
                  }
                }
                LODWORD(v128) = v127->max_length;
                ++v129;
              }
              while ( (int)v129 < (int)v128 );
              if ( (v132 & 1) != 0 )
              {
                v106 = v131 & 1;
                v107 = v130 & 1;
                goto LABEL_253;
              }
            }
            v108 = v242;
            if ( !v242 )
              sub_B170D4();
          }
          else
          {
            v108 = v242;
            if ( !v242 )
              sub_B170D4();
          }
          goto LABEL_245;
        }
        if ( condType == 92 )
        {
          if ( !v242 )
            sub_B170D4();
          v103 = VoiceCondMaster__IsEnable(
                   v242,
                   overwritePriority,
                   svtVoiceId,
                   v91,
                   v254,
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
          v109 = *v238;
          if ( !*v238 )
            sub_B170D4();
          v110 = *(_QWORD *)&v109->fields.friendshipRank.fields.currentCryptoKey;
          v111 = *(_QWORD *)&v109->fields.friendshipRank.fields.fakeValue;
          voicePrefixa = v254;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v256.fields.currentCryptoKey = v110;
          *(_QWORD *)&v256.fields.fakeValue = v111;
          v112 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v256, 0LL);
          if ( !v242 )
            sub_B170D4();
LABEL_74:
          v103 = VoiceCondMaster__IsEnable(
                   v242,
                   overwritePriority,
                   svtVoiceId,
                   v91,
                   voicePrefixa,
                   v112 >= v86->fields.condValue,
                   svtId,
                   &overwriteNameDefault,
                   isMateriala);
          goto LABEL_252;
        }
        if ( condType == 99 )
        {
          v99 = *v238;
          if ( !*v238 )
            sub_B170D4();
          v100 = *(_QWORD *)&v99->fields.friendshipRank.fields.currentCryptoKey;
          v101 = *(_QWORD *)&v99->fields.friendshipRank.fields.fakeValue;
          voicePrefix = v254;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v255.fields.currentCryptoKey = v100;
          *(_QWORD *)&v255.fields.fakeValue = v101;
          v102 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v255, 0LL);
          if ( !v242 )
            sub_B170D4();
          v103 = VoiceCondMaster__IsEnable(
                   v242,
                   overwritePriority,
                   svtVoiceId,
                   v91,
                   voicePrefix,
                   v102 <= v86->fields.condValue,
                   svtId,
                   &overwriteNameDefault,
                   isMateriala);
          goto LABEL_252;
        }
      }
LABEL_227:
      v106 = 1;
LABEL_228:
      v107 = 1;
      goto LABEL_253;
    }
    if ( condType <= 21 )
    {
      v106 = 1;
      v107 = 1;
      switch ( condType )
      {
        case 0:
          v108 = v242;
          if ( !v242 )
            sub_B170D4();
          goto LABEL_245;
        case 1:
          v104 = v254;
          condValue = v86->fields.condValue;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_25438860 = CondType__IsQuestClear_25438860(condValue, -1, 0, 0LL);
          if ( !v242 )
            sub_B170D4();
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
          if ( !*v238 )
            sub_B170D4();
          if ( !v242 )
            sub_B170D4();
          v103 = VoiceCondMaster__IsEnable(
                   v242,
                   overwritePriority,
                   svtVoiceId,
                   v91,
                   v254,
                   (*v238)->fields.maxLv >= v86->fields.condValue,
                   svtId,
                   &overwriteNameDefault,
                   isMateriala);
          goto LABEL_252;
        case 7:
          if ( !*v238 )
            sub_B170D4();
          if ( !v242 )
            sub_B170D4();
          v103 = VoiceCondMaster__IsEnable(
                   v242,
                   overwritePriority,
                   svtVoiceId,
                   v91,
                   v254,
                   (*v238)->fields.maxLimitCount >= v86->fields.condValue,
                   svtId,
                   &overwriteNameDefault,
                   isMateriala);
          goto LABEL_252;
        case 8:
          if ( !*v238 )
            sub_B170D4();
          v104 = v254;
          IsQuestClear_25438860 = UserServantCollectionEntity__IsGet(*v238, 0LL);
          if ( !v242 )
            sub_B170D4();
          goto LABEL_164;
        case 9:
          v140 = *v238;
          if ( !*v238 )
            sub_B170D4();
          v141 = *(_QWORD *)&v140->fields.friendshipRank.fields.currentCryptoKey;
          v142 = *(_QWORD *)&v140->fields.friendshipRank.fields.fakeValue;
          voicePrefixa = v254;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v257.fields.currentCryptoKey = v141;
          *(_QWORD *)&v257.fields.fakeValue = v142;
          v112 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v257, 0LL);
          if ( !v242 )
            sub_B170D4();
          goto LABEL_74;
        case 17:
          if ( !*v238 )
            sub_B170D4();
          v104 = v254;
          IsQuestClear_25438860 = UserServantCollectionEntity__IsPlayed(*v238, v86->fields.condValue, 0LL);
          if ( !v242 )
            sub_B170D4();
          goto LABEL_164;
        case 18:
          if ( !*v238 )
            sub_B170D4();
          v104 = v254;
          IsQuestClear_25438860 = UserServantCollectionEntity__IsLimitCountMax(*v238, 0LL);
          if ( !v242 )
            sub_B170D4();
          goto LABEL_164;
        case 19:
          SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
          if ( !SelfUserGame )
            sub_B170D4();
          if ( SelfUserGame->fields.birthDay < 1 )
          {
            v180 = 0;
          }
          else
          {
            voicePrefixe = SelfUserGame->fields.birthDay;
            v162 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v162 = BalanceConfig_TypeInfo;
            }
            ServantIdsBirthdayBeforeValentine = v162->static_fields->ServantIdsBirthdayBeforeValentine;
            v164 = (System_Func_int__bool__o *)v236->klass;
            if ( !v236->klass )
            {
              v164 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v158, v159, v160, v161);
              System_Func_int__bool____ctor(
                v164,
                object,
                Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__,
                (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
              v236->klass = (BattleServantConfConponent_c *)v164;
              sub_B16F98(v236, (System_Int32_array **)v164, v165, v166, v167, v168, v169, v170);
            }
            v171 = (BalanceConfig_c *)BasicHelper__Any_int__25910576(
                                        ServantIdsBirthdayBeforeValentine,
                                        (System_Func_T__bool__o *)v164,
                                        (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
            if ( ((unsigned __int8)v171 & 1) != 0 )
            {
              v171 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v171 = BalanceConfig_TypeInfo;
              }
              VtReleaseAt = v171->static_fields->VtReleaseAt;
              if ( VtReleaseAt >= 1 )
              {
                if ( !*v238 )
                  sub_B170D4();
                createdAt = (*v238)->fields.createdAt;
                if ( (BYTE3(v171->vtable._0_Equals.methodPtr) & 4) != 0 && !v171->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v171);
                  VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
                }
                if ( createdAt < VtReleaseAt )
                  goto LABEL_227;
              }
            }
            if ( !*v238 )
              sub_B170D4();
            isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                      (VoiceMaster_o *)v171,
                                      voicePrefixe,
                                      (*v238)->fields.createdAt,
                                      v172);
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
            if ( !Master_WarQuestSelectionMaster )
              sub_B170D4();
            SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                             Master_WarQuestSelectionMaster,
                             (const MethodInfo_266F674 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
            v179 = v242;
            if ( isEnableBirthdayVoice )
            {
              v180 = 1;
              if ( !v242 )
LABEL_261:
                sub_B170D4();
LABEL_251:
              v103 = VoiceCondMaster__IsEnable(
                       v179,
                       overwritePriority,
                       svtVoiceId,
                       v91,
                       v254,
                       v180,
                       svtId,
                       &overwriteNameDefault,
                       isMateriala);
LABEL_252:
              v107 = v103;
              v106 = 1;
              goto LABEL_253;
            }
            if ( !SingleEntity )
              sub_B170D4();
            v181 = (int64_t)SingleEntity[1].klass;
            if ( v181 < 1 )
            {
              v180 = 0;
              if ( !v242 )
                goto LABEL_261;
              goto LABEL_251;
            }
            if ( !*v238 )
              sub_B170D4();
            v180 = VoiceMaster__isEnableBirthdayVoice(
                     (VoiceMaster_o *)SingleEntity,
                     v181,
                     (*v238)->fields.createdAt,
                     v178);
          }
          v179 = v242;
          if ( !v242 )
            goto LABEL_261;
          goto LABEL_251;
        case 20:
          v144 = conds;
          if ( conds && (v145 = *(_QWORD *)&conds->max_length) != 0 )
          {
            if ( (int)v145 >= 1 )
            {
              v146 = 0LL;
              v147 = 0;
              v148 = 0;
              v149 = 0;
              v228 = conds;
              voicePrefixd = conds->m_Items;
              do
              {
                if ( (unsigned int)v146 >= (unsigned int)v145 )
                {
                  sub_B17100(IsEnable, v96, v97);
                  sub_B170A0();
                }
                v150 = voicePrefixd[v146];
                if ( !v150 )
                  sub_B170D4();
                v151 = v150->fields.condType;
                if ( v151 <= 0x13 && ((1 << v151) & 0xCE000) != 0 && v150->fields.value >= 1 )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  v152 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
                  if ( !v152 )
                    sub_B170D4();
                  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                          v152,
                          &v248,
                          v150->fields.value,
                          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
                    goto LABEL_181;
                  if ( !v248 )
                    sub_B170D4();
                  if ( Time >= v248->fields.targetId )
                  {
                    if ( !v242 )
                      sub_B170D4();
                    v153 = *(_QWORD *)&v248->fields.eventId;
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v242,
                                         overwritePriority,
                                         svtVoiceId,
                                         v91,
                                         v254,
                                         Time >= v153,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v154 = (char)IsEnable;
                    if ( isRebootBlock | v240 & 1 )
                    {
                      v155 = 0;
                    }
                    else
                    {
                      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        v223 = (char)IsEnable;
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                        v154 = v223;
                      }
                      if ( !byte_40FF76D )
                      {
                        v224 = v154;
                        sub_B16FFC(&NetworkManager_TypeInfo, v96);
                        v154 = v224;
                        byte_40FF76D = 1;
                      }
                      IsEnable = NetworkManager_TypeInfo;
                      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        v225 = v154;
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                        v154 = v225;
                        IsEnable = NetworkManager_TypeInfo;
                      }
                      if ( !v248 )
                        sub_B170D4();
                      v155 = *(_QWORD *)(*((_QWORD *)IsEnable + 23) + 24LL) < *(_QWORD *)&v248->fields.eventId;
                    }
                    v144 = v228;
                    v147 = v154 & 1;
                    if ( v155 && Time >= v153 )
                    {
                      v156 = v154 & 1;
                      if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
                        sub_B170D4();
                      if ( !byte_40F93BF )
                      {
                        sub_B16FFC(&DataManager_TypeInfo, v96);
                        byte_40F93BF = 1;
                      }
                      IsEnable = DataManager_TypeInfo;
                      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !DataManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                        IsEnable = DataManager_TypeInfo;
                      }
                      if ( !v248 )
                        sub_B170D4();
                      v144 = v228;
                      v149 = 1;
                      v147 = v156;
                      v240 |= *(_QWORD *)(*((_QWORD *)IsEnable + 23) + 24LL) < *(_QWORD *)&v248->fields.eventId;
                    }
                    else
                    {
                      v149 = 1;
                    }
                    v148 = 1;
                  }
                  else
                  {
LABEL_181:
                    if ( !v242 )
                      sub_B170D4();
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v242,
                                         overwritePriority,
                                         svtVoiceId,
                                         v91,
                                         v254,
                                         0,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v144 = v228;
                    v148 = (unsigned __int8)IsEnable & 1;
                    v149 = 1;
                    v147 = (unsigned __int8)IsEnable & 1;
                  }
                }
                LODWORD(v145) = v144->max_length;
                ++v146;
              }
              while ( (int)v146 < (int)v145 );
              if ( (v149 & 1) != 0 )
              {
                v106 = v148 & 1;
                v107 = v147 & 1;
                goto LABEL_253;
              }
            }
            v108 = v242;
            if ( !v242 )
              sub_B170D4();
          }
          else
          {
            v108 = v242;
            if ( !v242 )
              sub_B170D4();
          }
          goto LABEL_245;
        case 21:
          if ( !*v238 )
            sub_B170D4();
          v104 = v254;
          IsQuestClear_25438860 = UserServantCollectionEntity__IsFinded(*v238, 0LL);
          if ( !v242 )
            sub_B170D4();
          goto LABEL_164;
        default:
          goto LABEL_228;
      }
    }
    if ( condType != 31 )
    {
      if ( condType == 54 )
      {
        if ( !*v238 )
          sub_B170D4();
        v104 = v254;
        IsQuestClear_25438860 = UserServantCollectionEntity__IsCostumeGet(*v238, limitCount, 0LL);
        if ( !v242 )
          sub_B170D4();
LABEL_164:
        v103 = VoiceCondMaster__IsEnable(
                 v242,
                 overwritePriority,
                 svtVoiceId,
                 v91,
                 v104,
                 IsQuestClear_25438860,
                 svtId,
                 &overwriteNameDefault,
                 isMateriala);
        goto LABEL_252;
      }
      goto LABEL_227;
    }
    v113 = conds;
    if ( !conds || (v114 = *(_QWORD *)&conds->max_length) == 0 )
    {
      v108 = v242;
      if ( !v242 )
        sub_B170D4();
      goto LABEL_245;
    }
    if ( (int)v114 < 1 )
      goto LABEL_231;
    v115 = 0LL;
    v116 = 0;
    v117 = 0;
    v118 = 0;
    v226 = conds;
    voicePrefixb = conds->m_Items;
    do
    {
      if ( (unsigned int)v115 >= (unsigned int)v114 )
      {
        sub_B17100(IsEnable, v96, v97);
        sub_B170A0();
      }
      v119 = voicePrefixb[v115];
      if ( !v119 )
        sub_B170D4();
      v120 = v119->fields.condType;
      if ( v120 <= 0x13 )
      {
        if ( ((1 << v120) & 0xCE000) != 0 )
        {
          if ( v119->fields.value < 1 )
            goto LABEL_103;
          v121 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v121 )
            sub_B170D4();
          v122 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)v121,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v122 )
            sub_B170D4();
          v123 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v122,
                   v119->fields.value,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !v123 || Time < v123->fields.targetId )
          {
            v124 = v242;
            if ( !v242 )
              sub_B170D4();
            goto LABEL_89;
          }
          if ( !v242 )
            sub_B170D4();
          IsEnable = (void *)VoiceCondMaster__IsEnable(
                               v242,
                               overwritePriority,
                               svtVoiceId,
                               v91,
                               v254,
                               Time >= *(_QWORD *)&v123->fields.eventId,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
          goto LABEL_101;
        }
        if ( v120 == 16 && v119->fields.value >= 1 )
        {
          v125 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v125 )
            sub_B170D4();
          v126 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)v125,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
          if ( !v126 )
            sub_B170D4();
          if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  v126,
                  &entity,
                  v119->fields.value,
                  (const MethodInfo_266F3E4 *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__) )
            goto LABEL_97;
          if ( !entity )
            sub_B170D4();
          if ( Time < (__int64)entity->fields.longName )
          {
LABEL_97:
            v124 = v242;
            if ( !v242 )
              sub_B170D4();
LABEL_89:
            IsEnable = (void *)VoiceCondMaster__IsEnable(
                                 v124,
                                 overwritePriority,
                                 svtVoiceId,
                                 v91,
                                 v254,
                                 0,
                                 svtId,
                                 &overwriteNameDefault,
                                 isMateriala);
            v117 = (unsigned __int8)IsEnable & 1;
            v118 = 1;
            v116 = (unsigned __int8)IsEnable & 1;
LABEL_102:
            v113 = v226;
            goto LABEL_103;
          }
          if ( !v242 )
            sub_B170D4();
          IsEnable = (void *)VoiceCondMaster__IsEnable(
                               v242,
                               overwritePriority,
                               svtVoiceId,
                               v91,
                               v254,
                               1,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
LABEL_101:
          v116 = (unsigned __int8)IsEnable & 1;
          v118 = 1;
          v117 = 1;
          goto LABEL_102;
        }
      }
LABEL_103:
      LODWORD(v114) = v113->max_length;
      ++v115;
    }
    while ( (int)v115 < (int)v114 );
    if ( (v118 & 1) != 0 )
    {
      v106 = v117 & 1;
      v107 = v116 & 1;
      goto LABEL_253;
    }
LABEL_231:
    v108 = v242;
    if ( !v242 )
      sub_B170D4();
LABEL_245:
    v106 = 1;
    v107 = VoiceCondMaster__IsEnable(
             v108,
             overwritePriority,
             svtVoiceId,
             v91,
             v254,
             1,
             svtId,
             &overwriteNameDefault,
             isMateriala);
LABEL_253:
    v186 = v107 & VoiceEntity__IsCondEnable(v86, svtId, v97);
    if ( (v186 & 1) != 0 )
    {
      if ( v106 )
      {
LABEL_257:
        v187 = sub_B170CC(VoiceInfo_TypeInfo, v182, v183, v184, v185);
        VoiceInfo___ctor((VoiceInfo_o *)v187, v188);
        if ( !v187 )
          sub_B170D4();
        *(_QWORD *)(v187 + 16) = v86;
        sub_B16F98(
          (BattleServantConfConponent_o *)(v187 + 16),
          (System_Int32_array **)v86,
          v189,
          v190,
          v191,
          v192,
          v193,
          v194);
        *(_BYTE *)(v187 + 24) = v186 & 1;
        v195 = (System_Int32_array **)overwriteName;
        *(_QWORD *)(v187 + 32) = overwriteName;
        sub_B16F98((BattleServantConfConponent_o *)(v187 + 32), v195, v196, v197, v198, v199, v200, v201);
        v202 = (System_Int32_array **)overwriteNameDefault;
        *(_QWORD *)(v187 + 40) = overwriteNameDefault;
        sub_B16F98((BattleServantConfConponent_o *)(v187 + 40), v202, v203, v204, v205, v206, v207, v208);
        *(_DWORD *)(v187 + 48) = overwritePriority[1];
        *(_DWORD *)(v187 + 52) = v254;
        v209 = (System_Int32_array **)conds;
        *(_QWORD *)(v187 + 56) = conds;
        sub_B16F98((BattleServantConfConponent_o *)(v187 + 56), v209, v210, v211, v212, v213, v214, v215);
        if ( !v243 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v243,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v187,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_VoiceInfo__Add__);
      }
    }
    else if ( ((unsigned __int8)v106 & (overwritePriority[0] != 2)) != 0 )
    {
      goto LABEL_257;
    }
  }
  v216 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v217 = 0LL;
    v218 = &v216->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v218 - 1) != System_IDisposable_TypeInfo )
    {
      ++v217;
      v218 += 4;
      if ( v217 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_266;
    }
    v219 = (__int64)&v216->vtable[*v218].method;
  }
  else
  {
LABEL_266:
    v219 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v219)(
    Enumerator,
    *(_QWORD *)(v219 + 8));
  if ( (v240 & 1) != 0 )
  {
    v220 = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !v220 )
      goto LABEL_277;
    NetworkManager__GoToTitleDialog(v220, 0LL);
  }
  if ( !v243 )
LABEL_277:
    sub_B170D4();
  return (VoiceInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v243,
                              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
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
  int32_t v11; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  _QWORD *v22; // x0
  _QWORD *v23; // x21
  __int64 v24; // x10
  __int64 v25; // x0
  System_String_o *v26; // x1
  System_String_o *v27; // x1
  int v28; // w8
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  int v34; // [xsp+0h] [xbp-50h]

  if ( (byte_40FF74C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B16FFC(&System_IDisposable_TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B16FFC(&VoiceEntity_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v10);
    byte_40FF74C = 1;
  }
  v11 = 0;
  if ( !System_String__IsNullOrEmpty(labelName, 0LL) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      sub_B170D4();
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B170D4();
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v15 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v15;
          p_offset += 4;
          if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v18 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v19 = 0LL;
        v20 = &v18->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v19;
          v20 += 4;
          if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v21 = (__int64)&v18->vtable[*v20].method;
      }
      else
      {
LABEL_17:
        v21 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v22 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                        Enumerator,
                        *(_QWORD *)(v21 + 8));
      v23 = v22;
      if ( !v22
        || (v24 = *(&VoiceEntity_TypeInfo->_2.bitflags2 + 1), *(unsigned __int8 *)(*v22 + 300LL) < (unsigned int)v24)
        || *(VoiceEntity_c **)(*(_QWORD *)(*v22 + 200LL) + 8 * v24 - 8) != VoiceEntity_TypeInfo )
      {
        sub_B170D4();
      }
      v25 = v22[2];
      if ( !v25 )
        sub_B170D4();
      v26 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 360LL))(
                                 v25,
                                 *(_QWORD *)(*(_QWORD *)v25 + 368LL));
      v27 = System_String__Concat_43743732((System_String_o *)StringLiteral_15842/*"_"*/, v26, 0LL);
      if ( !labelName )
        sub_B170D4();
      if ( System_String__EndsWith(labelName, v27, 0LL) )
      {
        v11 = *((_DWORD *)v23 + 15);
        v28 = 98;
        goto LABEL_27;
      }
    }
    v28 = 96;
    v11 = 0;
LABEL_27:
    v34 = v28;
    v29 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_31:
      v32 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
      Enumerator,
      *(_QWORD *)(v32 + 8));
    if ( v34 == 96 )
      return 0;
  }
  return v11;
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
  int32_t v17; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  _QWORD *v28; // x0
  _DWORD *v29; // x23
  __int64 v30; // x10
  __int64 v31; // x0
  System_String_o *v32; // x1
  System_String_o *v33; // x1
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v38; // w1
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  int v44; // [xsp+0h] [xbp-60h]

  if ( (byte_40FF74B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B16FFC(&System_IDisposable_TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&VoiceEntity_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v16);
    byte_40FF74B = 1;
  }
  v17 = 0;
  if ( !System_String__IsNullOrEmpty(labelName, 0LL) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      sub_B170D4();
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B170D4();
    do
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v21 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v21;
          p_offset += 4;
          if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        goto LABEL_35;
      v24 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v25 = 0LL;
        v26 = &v24->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v25;
          v26 += 4;
          if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v27 = (__int64)&v24->vtable[*v26].method;
      }
      else
      {
LABEL_17:
        v27 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v28 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                        Enumerator,
                        *(_QWORD *)(v27 + 8));
      v29 = v28;
      if ( !v28
        || (v30 = *(&VoiceEntity_TypeInfo->_2.bitflags2 + 1), *(unsigned __int8 *)(*v28 + 300LL) < (unsigned int)v30)
        || *(VoiceEntity_c **)(*(_QWORD *)(*v28 + 200LL) + 8 * v30 - 8) != VoiceEntity_TypeInfo )
      {
        sub_B170D4();
      }
      v31 = v28[2];
      if ( !v31 )
        sub_B170D4();
      v32 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 360LL))(
                                 v31,
                                 *(_QWORD *)(*(_QWORD *)v31 + 368LL));
      v33 = System_String__Concat_43743732((System_String_o *)StringLiteral_15842/*"_"*/, v32, 0LL);
      if ( !labelName )
        sub_B170D4();
    }
    while ( !System_String__EndsWith(labelName, v33, 0LL) );
    if ( v29[12] != 17 && v29[7] != 1 )
    {
LABEL_35:
      v17 = 0;
      v44 = 178;
      goto LABEL_36;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B170D4();
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                         MasterData_WarQuestSelectionMaster,
                         UserId,
                         svtId,
                         0LL);
    v38 = v29[14];
    if ( isUpdate )
    {
      if ( !EntityDefinitely )
        sub_B170D4();
      if ( !UserServantCollectionEntity__SetPlayed(EntityDefinitely, v38, 0LL) )
        goto LABEL_35;
    }
    else
    {
      if ( !EntityDefinitely )
        sub_B170D4();
      if ( UserServantCollectionEntity__IsPlayed(EntityDefinitely, v38, 0LL) )
        goto LABEL_35;
    }
    v17 = v29[14];
    v44 = 180;
LABEL_36:
    v39 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_40;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_40:
      v42 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
      Enumerator,
      *(_QWORD *)(v42 + 8));
    if ( v44 == 178 )
      return 0;
  }
  return v17;
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
  int64_t Time_23684488; // x21
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

  if ( (byte_40FF749 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, userBirthDay);
    byte_40FF749 = 1;
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
  dateData = NetworkManager__getServerDateTime_23685560(createDay, 0LL).fields.dateData;
  v18 = NetworkManager__getDateTime_23685272(userBirthDay, 0LL).fields.dateData;
  v20.fields.dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v20, 0LL);
  v21.fields.dateData = (uint64_t)&v18;
  Month = System_DateTime__get_Month(v21, 0LL);
  v22.fields.dateData = (uint64_t)&v18;
  Day = System_DateTime__get_Day(v22, 0LL);
  v15 = 0LL;
  v23.fields.dateData = (uint64_t)&v15;
  System_DateTime___ctor_15184400(v23, Year, Month, Day, 0LL);
  dateTime.fields.dateData = v15;
  v24.fields.dateData = (uint64_t)&dateData;
  v9 = System_DateTime__get_Year(v24, 0LL);
  v25.fields.dateData = (uint64_t)&v18;
  v10 = System_DateTime__get_Month(v25, 0LL);
  v26.fields.dateData = (uint64_t)&v18;
  v11 = System_DateTime__get_Day(v26, 0LL);
  v15 = 0LL;
  v27.fields.dateData = (uint64_t)&v15;
  System_DateTime___ctor_15184400(v27, v9 + 1, v10, v11, 0LL);
  v16.fields.dateData = v15;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  ServerTime = NetworkManager__getServerTime(0LL);
  v28.fields.dateData = dateTime.fields.dateData;
  Time_23684488 = NetworkManager__getTime_23684488(v28, 0LL);
  v29.fields.dateData = v16.fields.dateData;
  return NetworkManager__getTime_23684488(v29, 0LL) <= ServerTime
      || Time_23684488 + 86400 >= createDay && Time_23684488 <= ServerTime;
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
  struct UserServantCollectionEntity_o *userStvCollectionEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_40F79B6 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&id);
    byte_40F79B6 = 1;
  }
  userStvCollectionEntity = this->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_B170D4();
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v9, 0LL) == id;
}