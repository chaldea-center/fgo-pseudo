void __fastcall VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421A2C5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__, method);
    byte_421A2C5 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    130,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
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
  ServantVoiceMaster_o *MasterData_WarQuestSelectionMaster; // x23
  UserServantCollectionMaster_o *v52; // x24
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  ServantVoiceEntity_array *Entity_29921476; // x27
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v65; // w22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v67; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v70; // x8
  unsigned __int64 v71; // x10
  int32_t *v72; // x11
  __int64 v73; // x0
  __int64 v74; // x0
  VoiceEntity_o *v75; // x19
  __int64 v76; // x10
  __int64 v77; // x8
  ServantVoiceEntity_o *v78; // x23
  __int64 v79; // x0
  System_String_o *v80; // x26
  System_String_o *v81; // x0
  System_String_o *v82; // x24
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_29945472; // x0
  void *IsEnable; // x0
  const MethodInfo *v85; // x2
  int condType; // w8
  UserServantCollectionEntity_o *v87; // x8
  __int64 v88; // x24
  __int64 v89; // x23
  __int64 v90; // x0
  bool v91; // w0
  int32_t v92; // w23
  _BOOL8 IsQuestClear_25410236; // x0
  int v94; // w24
  char v95; // w23
  VoiceCondMaster_o *v96; // x0
  UserServantCollectionEntity_o *v97; // x8
  __int64 v98; // x24
  __int64 v99; // x23
  __int64 v100; // x0
  ServantVoiceCond_array *v101; // x14
  __int64 v102; // x11
  __int64 v103; // x24
  char v104; // w9
  char v105; // w10
  char v106; // w8
  ServantVoiceCond_o *v107; // x23
  unsigned int v108; // w11
  WebViewManager_o *v109; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v110; // x0
  WarEntity_o *v111; // x0
  VoiceCondMaster_o *v112; // x0
  WebViewManager_o *v113; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v114; // x0
  _BOOL8 v115; // x0
  ServantVoiceCond_array *v116; // x28
  __int64 v117; // x11
  __int64 v118; // x23
  char v119; // w8
  char v120; // w10
  char v121; // w9
  ServantVoiceCond_o *v122; // x24
  unsigned int v123; // w11
  WebViewManager_o *v124; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v125; // x0
  WarEntity_o *v126; // x0
  int32_t value; // w24
  _BOOL8 v128; // x0
  UserServantCollectionEntity_o *v129; // x8
  __int64 v130; // x24
  __int64 v131; // x23
  int32_t condValue; // w24
  ServantVoiceCond_array *v133; // x12
  __int64 v134; // x10
  __int64 v135; // x24
  char v136; // w13
  char v137; // w9
  char v138; // w8
  ServantVoiceCond_o *v139; // x23
  unsigned int v140; // w10
  DataMasterBase_WarMaster__WarEntity__int__o *v141; // x0
  _BOOL8 v142; // x0
  int64_t v143; // x23
  __int64 v144; // x1
  char v145; // w10
  bool v146; // w8
  char v147; // w23
  __int64 v148; // x1
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v150; // x1
  __int64 v151; // x2
  BalanceConfig_c *v152; // x0
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x24
  System_Func_int__bool__o *v154; // x23
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  BalanceConfig_c *v161; // x0
  const MethodInfo *v162; // x3
  int64_t VtReleaseAt; // x8
  int64_t createdAt; // x23
  bool isEnableBirthdayVoice; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v168; // x3
  VoiceCondMaster_o *v169; // x8
  _BOOL8 v170; // x0
  int64_t v171; // x1
  __int64 v172; // x1
  __int64 v173; // x2
  char v174; // w26
  __int64 v175; // x23
  const MethodInfo *v176; // x1
  __int64 v177; // x0
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  System_Int32_array **v184; // x1
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  System_Int32_array **v191; // x1
  System_String_array **v192; // x2
  System_String_array **v193; // x3
  System_Boolean_array **v194; // x4
  System_Int32_array **v195; // x5
  System_Int32_array *v196; // x6
  System_Int32_array *v197; // x7
  System_Int32_array **v198; // x1
  System_String_array **v199; // x2
  System_String_array **v200; // x3
  System_Boolean_array **v201; // x4
  System_Int32_array **v202; // x5
  System_Int32_array *v203; // x6
  System_Int32_array *v204; // x7
  System_Collections_Generic_IEnumerator_T__c *v205; // x8
  unsigned __int64 v206; // x10
  int32_t *v207; // x11
  __int64 v208; // x0
  __int64 v210; // x0
  __int64 v211; // x0
  __int64 v212; // x0
  __int64 v213; // x0
  const MethodInfo *isMateriala; // [xsp+0h] [xbp-120h]
  char v215; // [xsp+18h] [xbp-108h]
  char v216; // [xsp+18h] [xbp-108h]
  char v217; // [xsp+18h] [xbp-108h]
  ServantVoiceCond_array *v218; // [xsp+20h] [xbp-100h]
  int32_t v219; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v220; // [xsp+20h] [xbp-100h]
  int32_t voicePrefix; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixa; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixb; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixc; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixd; // [xsp+28h] [xbp-F8h]
  int64_t voicePrefixe; // [xsp+28h] [xbp-F8h]
  Il2CppObject *object; // [xsp+30h] [xbp-F0h]
  BattleServantConfConponent_o *v228; // [xsp+38h] [xbp-E8h]
  int items_low; // [xsp+40h] [xbp-E0h]
  UserServantCollectionEntity_o **v230; // [xsp+48h] [xbp-D8h]
  int64_t Time; // [xsp+50h] [xbp-D0h]
  char v232; // [xsp+58h] [xbp-C8h]
  int32_t svtVoiceId; // [xsp+5Ch] [xbp-C4h]
  VoiceCondMaster_o *v234; // [xsp+60h] [xbp-C0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v235; // [xsp+68h] [xbp-B8h]
  bool svtIda; // [xsp+70h] [xbp-B0h]
  WarEntity_o *entity; // [xsp+88h] [xbp-98h] BYREF
  WarEntity_o *v240; // [xsp+90h] [xbp-90h] BYREF
  int32_t overwritePriority[2]; // [xsp+98h] [xbp-88h] BYREF
  System_String_o *overwriteNameDefault; // [xsp+A0h] [xbp-80h] BYREF
  System_String_o *overwriteName; // [xsp+A8h] [xbp-78h] BYREF
  bool isInvalidVoiceList; // [xsp+B4h] [xbp-6Ch] BYREF
  ServantVoiceCond_array *conds; // [xsp+B8h] [xbp-68h] BYREF
  int32_t v246; // [xsp+C4h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v247; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v248; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v249; // 0:x0.16

  if ( (byte_421A2C7 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, v13);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v14);
    sub_B0D8A4(&CondType_TypeInfo, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v20);
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoiceCondMaster___, v21);
    sub_B0D8A4(&Method_DataManager_GetMaster_BeforeBirthDayMaster___, v22);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, v23);
    sub_B0D8A4(&DataManager_TypeInfo, v24);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v25);
    sub_B0D8A4(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__, v26);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v27);
    sub_B0D8A4(
      &Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__,
      v28);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v29);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v30);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v31);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v32);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v33);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VoiceInfo__Add__, v34);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__, v35);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VoiceInfo___ctor__, v36);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v37);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v38);
    sub_B0D8A4(&System_Collections_Generic_List_VoiceInfo__TypeInfo, v39);
    sub_B0D8A4(&NetworkManager_TypeInfo, v40);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v42);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_B0D8A4(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__, v44);
    sub_B0D8A4(&VoiceMaster___c__DisplayClass2_0_TypeInfo, v45);
    sub_B0D8A4(&VoiceEntity_TypeInfo, v46);
    sub_B0D8A4(&VoiceInfo_TypeInfo, v47);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v48);
    byte_421A2C7 = 1;
  }
  v246 = 0;
  conds = 0LL;
  isInvalidVoiceList = 0;
  overwriteNameDefault = 0LL;
  overwriteName = 0LL;
  *(_QWORD *)overwritePriority = 0LL;
  entity = 0LL;
  v240 = 0LL;
  v49 = sub_B0D974(VoiceMaster___c__DisplayClass2_0_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&changeSvtVoiceId);
  VoiceMaster___c__DisplayClass2_0___ctor((VoiceMaster___c__DisplayClass2_0_o *)v49, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  MasterData_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  v234 = (VoiceCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_277;
  v246 = ServantLimitAddMaster__getVoicePrefix((ServantLimitAddMaster_o *)Instance, changeSvtVoiceId, limitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  v52 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !v52 )
    goto LABEL_277;
  Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(v52, (int64_t)Instance, svtId, 0LL);
  if ( !v49 )
    goto LABEL_277;
  *(_QWORD *)(v49 + 16) = Instance;
  v230 = (UserServantCollectionEntity_o **)(v49 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v49 + 16), (System_Int32_array **)Instance, v53, v54, v55, v56, v57, v58);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_277;
  Entity_29921476 = ServantVoiceMaster__getEntity_29921476(
                      MasterData_WarQuestSelectionMaster,
                      changeSvtVoiceId,
                      limitCount,
                      0LL);
  Time = NetworkManager__getTime(0LL);
  v235 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_VoiceInfo__TypeInfo,
                                                                                                   v60,
                                                                                                   v61);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v235,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_42124CA )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v62);
    byte_42124CA = 1;
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
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  v232 = 0;
  object = (Il2CppObject *)v49;
  v228 = (BattleServantConfConponent_o *)(v49 + 24);
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
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v70 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v71 = 0LL;
      v72 = &v70->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v72 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v71;
        v72 += 4;
        if ( v71 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_33;
      }
      v73 = (__int64)&v70->vtable[*v72].method;
    }
    else
    {
LABEL_33:
      v73 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v74 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v73)(
            Enumerator,
            *(_QWORD *)(v73 + 8));
    v75 = (VoiceEntity_o *)v74;
    if ( !v74
      || (v76 = *(&VoiceEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)v74 + 300LL) < (unsigned int)v76)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v74 + 200LL) + 8 * v76 - 8) != VoiceEntity_TypeInfo )
    {
      sub_B0D97C(v74);
    }
    if ( !Entity_29921476 )
      sub_B0D97C(v74);
    v77 = *(int *)(v74 + 28);
    if ( (unsigned int)v77 >= Entity_29921476->max_length )
    {
      v210 = sub_B0D9A8(v74);
      sub_B0D948(v210, 0LL);
    }
    v78 = Entity_29921476->m_Items[v77];
    if ( !v78 )
      continue;
    v79 = *(_QWORD *)(v74 + 16);
    if ( !v79 )
      sub_B0D97C(0LL);
    v80 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v79 + 360LL))(
                               v79,
                               *(_QWORD *)(*(_QWORD *)v79 + 368LL));
    v81 = System_Int32__ToString((int32_t)&v246, 0LL);
    v82 = System_String__Concat_43852188(v81, (System_String_o *)StringLiteral_15952/*"_"*/, v80, 0LL);
    VoiceList_29945472 = ServantVoiceEntity__getVoiceList_29945472(
                           v78,
                           v75->fields.svtVoiceType,
                           v82,
                           disableCondTypeList,
                           v65,
                           0LL);
    if ( !VoiceList_29945472 )
      continue;
    if ( VoiceList_29945472->fields._size < 1 )
      continue;
    if ( !VoiceList_29945472->fields._items->m_Items[0] )
      continue;
    ServantVoiceEntity__getOverwriteData(
      v78,
      v75->fields.svtVoiceType,
      v82,
      &conds,
      &isInvalidVoiceList,
      &overwriteName,
      &overwriteNameDefault,
      &overwritePriority[1],
      svtIda,
      0LL);
    if ( isInvalidVoiceList )
      continue;
    overwritePriority[0] = v75->fields.closedType;
    condType = v75->fields.condType;
    if ( condType > 54 )
    {
      if ( condType <= 92 )
      {
        if ( condType == 56 )
        {
          v116 = conds;
          if ( conds && (v117 = *(_QWORD *)&conds->max_length) != 0 )
          {
            if ( (int)v117 >= 1 )
            {
              v118 = 0LL;
              v119 = 0;
              v120 = 0;
              v121 = 0;
              voicePrefixc = conds->m_Items;
              do
              {
                if ( (unsigned int)v118 >= (unsigned int)v117 )
                {
                  v213 = sub_B0D9A8(IsEnable);
                  sub_B0D948(v213, 0LL);
                }
                v122 = voicePrefixc[v118];
                if ( !v122 )
                  sub_B0D97C(IsEnable);
                v123 = v122->fields.condType;
                if ( v123 <= 0x13 && ((1 << v123) & 0xCE000) != 0 && v122->fields.value >= 1 )
                {
                  v124 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v124 )
                    sub_B0D97C(0LL);
                  v125 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)v124,
                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v125 )
                    sub_B0D97C(0LL);
                  v126 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           v125,
                           v122->fields.value,
                           (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v126 && Time >= v126->fields.targetId )
                  {
                    value = v122->fields.value;
                    v219 = v246;
                    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CondType_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    }
                    v128 = CondType__IsServantGetBeforeEventEnd(svtId, value, 0LL);
                    if ( !v234 )
                      sub_B0D97C(v128);
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v234,
                                         overwritePriority,
                                         svtVoiceId,
                                         v80,
                                         v219,
                                         v128,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v119 = (unsigned __int8)IsEnable & 1;
                    v121 = 1;
                    v120 = 1;
                  }
                  else
                  {
                    if ( !v234 )
                      sub_B0D97C(0LL);
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v234,
                                         overwritePriority,
                                         svtVoiceId,
                                         v80,
                                         v246,
                                         0,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v120 = (unsigned __int8)IsEnable & 1;
                    v121 = 1;
                    v119 = (unsigned __int8)IsEnable & 1;
                  }
                }
                LODWORD(v117) = v116->max_length;
                ++v118;
              }
              while ( (int)v118 < (int)v117 );
              if ( (v121 & 1) != 0 )
              {
                v94 = v120 & 1;
                v95 = v119 & 1;
                goto LABEL_253;
              }
            }
            v96 = v234;
            if ( !v234 )
              sub_B0D97C(0LL);
          }
          else
          {
            v96 = v234;
            if ( !v234 )
              sub_B0D97C(0LL);
          }
          goto LABEL_245;
        }
        if ( condType == 92 )
        {
          if ( !v234 )
            sub_B0D97C(0LL);
          v91 = VoiceCondMaster__IsEnable(
                  v234,
                  overwritePriority,
                  svtVoiceId,
                  v80,
                  v246,
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
          v97 = *v230;
          if ( !*v230 )
            sub_B0D97C(IsEnable);
          v98 = *(_QWORD *)&v97->fields.friendshipRank.fields.currentCryptoKey;
          v99 = *(_QWORD *)&v97->fields.friendshipRank.fields.fakeValue;
          voicePrefixa = v246;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v248.fields.currentCryptoKey = v98;
          *(_QWORD *)&v248.fields.fakeValue = v99;
          v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v248, 0LL);
          if ( !v234 )
            sub_B0D97C(v100);
LABEL_74:
          v91 = VoiceCondMaster__IsEnable(
                  v234,
                  overwritePriority,
                  svtVoiceId,
                  v80,
                  voicePrefixa,
                  (int)v100 >= v75->fields.condValue,
                  svtId,
                  &overwriteNameDefault,
                  isMateriala);
          goto LABEL_252;
        }
        if ( condType == 99 )
        {
          v87 = *v230;
          if ( !*v230 )
            sub_B0D97C(IsEnable);
          v88 = *(_QWORD *)&v87->fields.friendshipRank.fields.currentCryptoKey;
          v89 = *(_QWORD *)&v87->fields.friendshipRank.fields.fakeValue;
          voicePrefix = v246;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v247.fields.currentCryptoKey = v88;
          *(_QWORD *)&v247.fields.fakeValue = v89;
          v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v247, 0LL);
          if ( !v234 )
            sub_B0D97C(v90);
          v91 = VoiceCondMaster__IsEnable(
                  v234,
                  overwritePriority,
                  svtVoiceId,
                  v80,
                  voicePrefix,
                  (int)v90 <= v75->fields.condValue,
                  svtId,
                  &overwriteNameDefault,
                  isMateriala);
          goto LABEL_252;
        }
      }
LABEL_227:
      v94 = 1;
LABEL_228:
      v95 = 1;
      goto LABEL_253;
    }
    if ( condType <= 21 )
    {
      v94 = 1;
      v95 = 1;
      switch ( condType )
      {
        case 0:
          v96 = v234;
          if ( !v234 )
            sub_B0D97C(0LL);
          goto LABEL_245;
        case 1:
          v92 = v246;
          condValue = v75->fields.condValue;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_25410236 = CondType__IsQuestClear_25410236(condValue, -1, 0, 0LL);
          if ( !v234 )
            sub_B0D97C(IsQuestClear_25410236);
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
          if ( !*v230 )
            sub_B0D97C(IsEnable);
          if ( !v234 )
            sub_B0D97C(0LL);
          v91 = VoiceCondMaster__IsEnable(
                  v234,
                  overwritePriority,
                  svtVoiceId,
                  v80,
                  v246,
                  (*v230)->fields.maxLv >= v75->fields.condValue,
                  svtId,
                  &overwriteNameDefault,
                  isMateriala);
          goto LABEL_252;
        case 7:
          if ( !*v230 )
            sub_B0D97C(IsEnable);
          if ( !v234 )
            sub_B0D97C(0LL);
          v91 = VoiceCondMaster__IsEnable(
                  v234,
                  overwritePriority,
                  svtVoiceId,
                  v80,
                  v246,
                  (*v230)->fields.maxLimitCount >= v75->fields.condValue,
                  svtId,
                  &overwriteNameDefault,
                  isMateriala);
          goto LABEL_252;
        case 8:
          if ( !*v230 )
            sub_B0D97C(0LL);
          v92 = v246;
          IsQuestClear_25410236 = UserServantCollectionEntity__IsGet(*v230, 0LL);
          if ( !v234 )
            sub_B0D97C(IsQuestClear_25410236);
          goto LABEL_164;
        case 9:
          v129 = *v230;
          if ( !*v230 )
            sub_B0D97C(IsEnable);
          v130 = *(_QWORD *)&v129->fields.friendshipRank.fields.currentCryptoKey;
          v131 = *(_QWORD *)&v129->fields.friendshipRank.fields.fakeValue;
          voicePrefixa = v246;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v249.fields.currentCryptoKey = v130;
          *(_QWORD *)&v249.fields.fakeValue = v131;
          v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v249, 0LL);
          if ( !v234 )
            sub_B0D97C(v100);
          goto LABEL_74;
        case 17:
          if ( !*v230 )
            sub_B0D97C(0LL);
          v92 = v246;
          IsQuestClear_25410236 = UserServantCollectionEntity__IsPlayed(*v230, v75->fields.condValue, 0LL);
          if ( !v234 )
            sub_B0D97C(IsQuestClear_25410236);
          goto LABEL_164;
        case 18:
          if ( !*v230 )
            sub_B0D97C(0LL);
          v92 = v246;
          IsQuestClear_25410236 = UserServantCollectionEntity__IsLimitCountMax(*v230, 0LL);
          if ( !v234 )
            sub_B0D97C(IsQuestClear_25410236);
          goto LABEL_164;
        case 19:
          SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
          if ( !SelfUserGame )
            sub_B0D97C(0LL);
          if ( SelfUserGame->fields.birthDay < 1 )
          {
            v170 = 0LL;
          }
          else
          {
            voicePrefixe = SelfUserGame->fields.birthDay;
            v152 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v152 = BalanceConfig_TypeInfo;
            }
            ServantIdsBirthdayBeforeValentine = v152->static_fields->ServantIdsBirthdayBeforeValentine;
            v154 = (System_Func_int__bool__o *)v228->klass;
            if ( !v228->klass )
            {
              v154 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v150, v151);
              System_Func_int__bool____ctor(
                v154,
                object,
                Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__,
                (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
              v228->klass = (BattleServantConfConponent_c *)v154;
              sub_B0D840(v228, (System_Int32_array **)v154, v155, v156, v157, v158, v159, v160);
            }
            v161 = (BalanceConfig_c *)BasicHelper__Any_int__24145568(
                                        ServantIdsBirthdayBeforeValentine,
                                        (System_Func_T__bool__o *)v154,
                                        (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
            if ( ((unsigned __int8)v161 & 1) != 0 )
            {
              v161 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v161 = BalanceConfig_TypeInfo;
              }
              VtReleaseAt = v161->static_fields->VtReleaseAt;
              if ( VtReleaseAt >= 1 )
              {
                if ( !*v230 )
                  sub_B0D97C(v161);
                createdAt = (*v230)->fields.createdAt;
                if ( (BYTE3(v161->vtable._0_Equals.methodPtr) & 4) != 0 && !v161->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v161);
                  VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
                }
                if ( createdAt < VtReleaseAt )
                  goto LABEL_227;
              }
            }
            if ( !*v230 )
              sub_B0D97C(v161);
            isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                      (VoiceMaster_o *)v161,
                                      voicePrefixe,
                                      (*v230)->fields.createdAt,
                                      v162);
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
            if ( !Master_WarQuestSelectionMaster )
              sub_B0D97C(0LL);
            SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                             Master_WarQuestSelectionMaster,
                             (const MethodInfo_2669EC0 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
            v169 = v234;
            if ( isEnableBirthdayVoice )
            {
              v170 = 1LL;
              if ( !v234 )
LABEL_261:
                sub_B0D97C(v170);
LABEL_251:
              v91 = VoiceCondMaster__IsEnable(
                      v169,
                      overwritePriority,
                      svtVoiceId,
                      v80,
                      v246,
                      v170,
                      svtId,
                      &overwriteNameDefault,
                      isMateriala);
LABEL_252:
              v95 = v91;
              v94 = 1;
              goto LABEL_253;
            }
            if ( !SingleEntity )
              sub_B0D97C(0LL);
            v171 = (int64_t)SingleEntity[1].klass;
            if ( v171 < 1 )
            {
              v170 = 0LL;
              if ( !v234 )
                goto LABEL_261;
              goto LABEL_251;
            }
            if ( !*v230 )
              sub_B0D97C(SingleEntity);
            v170 = VoiceMaster__isEnableBirthdayVoice(
                     (VoiceMaster_o *)SingleEntity,
                     v171,
                     (*v230)->fields.createdAt,
                     v168);
          }
          v169 = v234;
          if ( !v234 )
            goto LABEL_261;
          goto LABEL_251;
        case 20:
          v133 = conds;
          if ( conds && (v134 = *(_QWORD *)&conds->max_length) != 0 )
          {
            if ( (int)v134 >= 1 )
            {
              v135 = 0LL;
              v136 = 0;
              v137 = 0;
              v138 = 0;
              v220 = conds;
              voicePrefixd = conds->m_Items;
              do
              {
                if ( (unsigned int)v135 >= (unsigned int)v134 )
                {
                  v211 = sub_B0D9A8(IsEnable);
                  sub_B0D948(v211, 0LL);
                }
                v139 = voicePrefixd[v135];
                if ( !v139 )
                  sub_B0D97C(IsEnable);
                v140 = v139->fields.condType;
                if ( v140 <= 0x13 && ((1 << v140) & 0xCE000) != 0 && v139->fields.value >= 1 )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  v141 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
                  if ( !v141 )
                    sub_B0D97C(0LL);
                  v142 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           v141,
                           &v240,
                           v139->fields.value,
                           (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
                  if ( !v142 )
                    goto LABEL_181;
                  if ( !v240 )
                    sub_B0D97C(v142);
                  if ( Time >= v240->fields.targetId )
                  {
                    if ( !v234 )
                      sub_B0D97C(0LL);
                    v143 = *(_QWORD *)&v240->fields.eventId;
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v234,
                                         overwritePriority,
                                         svtVoiceId,
                                         v80,
                                         v246,
                                         Time >= v143,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v145 = (char)IsEnable;
                    if ( (items_low != 0) | v232 & 1 )
                    {
                      v146 = 0;
                    }
                    else
                    {
                      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        v215 = (char)IsEnable;
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                        v145 = v215;
                      }
                      if ( !byte_421A2DF )
                      {
                        v216 = v145;
                        sub_B0D8A4(&NetworkManager_TypeInfo, v144);
                        v145 = v216;
                        byte_421A2DF = 1;
                      }
                      IsEnable = NetworkManager_TypeInfo;
                      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        v217 = v145;
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                        v145 = v217;
                        IsEnable = NetworkManager_TypeInfo;
                      }
                      if ( !v240 )
                        sub_B0D97C(IsEnable);
                      v146 = *(_QWORD *)(*((_QWORD *)IsEnable + 23) + 24LL) < *(_QWORD *)&v240->fields.eventId;
                    }
                    v133 = v220;
                    v136 = v145 & 1;
                    if ( v146 && Time >= v143 )
                    {
                      v147 = v145 & 1;
                      if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
                        sub_B0D97C(0LL);
                      if ( !byte_421507F )
                      {
                        sub_B0D8A4(&DataManager_TypeInfo, v148);
                        byte_421507F = 1;
                      }
                      IsEnable = DataManager_TypeInfo;
                      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !DataManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                        IsEnable = DataManager_TypeInfo;
                      }
                      if ( !v240 )
                        sub_B0D97C(IsEnable);
                      v133 = v220;
                      v138 = 1;
                      v136 = v147;
                      v232 |= *(_QWORD *)(*((_QWORD *)IsEnable + 23) + 24LL) < *(_QWORD *)&v240->fields.eventId;
                    }
                    else
                    {
                      v138 = 1;
                    }
                    v137 = 1;
                  }
                  else
                  {
LABEL_181:
                    if ( !v234 )
                      sub_B0D97C(0LL);
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v234,
                                         overwritePriority,
                                         svtVoiceId,
                                         v80,
                                         v246,
                                         0,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v133 = v220;
                    v137 = (unsigned __int8)IsEnable & 1;
                    v138 = 1;
                    v136 = (unsigned __int8)IsEnable & 1;
                  }
                }
                LODWORD(v134) = v133->max_length;
                ++v135;
              }
              while ( (int)v135 < (int)v134 );
              if ( (v138 & 1) != 0 )
              {
                v94 = v137 & 1;
                v95 = v136 & 1;
                goto LABEL_253;
              }
            }
            v96 = v234;
            if ( !v234 )
              sub_B0D97C(0LL);
          }
          else
          {
            v96 = v234;
            if ( !v234 )
              sub_B0D97C(0LL);
          }
          goto LABEL_245;
        case 21:
          if ( !*v230 )
            sub_B0D97C(0LL);
          v92 = v246;
          IsQuestClear_25410236 = UserServantCollectionEntity__IsFinded(*v230, 0LL);
          if ( !v234 )
            sub_B0D97C(IsQuestClear_25410236);
          goto LABEL_164;
        default:
          goto LABEL_228;
      }
    }
    if ( condType != 31 )
    {
      if ( condType == 54 )
      {
        if ( !*v230 )
          sub_B0D97C(0LL);
        v92 = v246;
        IsQuestClear_25410236 = UserServantCollectionEntity__IsCostumeGet(*v230, limitCount, 0LL);
        if ( !v234 )
          sub_B0D97C(IsQuestClear_25410236);
LABEL_164:
        v91 = VoiceCondMaster__IsEnable(
                v234,
                overwritePriority,
                svtVoiceId,
                v80,
                v92,
                IsQuestClear_25410236,
                svtId,
                &overwriteNameDefault,
                isMateriala);
        goto LABEL_252;
      }
      goto LABEL_227;
    }
    v101 = conds;
    if ( !conds || (v102 = *(_QWORD *)&conds->max_length) == 0 )
    {
      v96 = v234;
      if ( !v234 )
        sub_B0D97C(0LL);
      goto LABEL_245;
    }
    if ( (int)v102 < 1 )
      goto LABEL_231;
    v103 = 0LL;
    v104 = 0;
    v105 = 0;
    v106 = 0;
    v218 = conds;
    voicePrefixb = conds->m_Items;
    do
    {
      if ( (unsigned int)v103 >= (unsigned int)v102 )
      {
        v212 = sub_B0D9A8(IsEnable);
        sub_B0D948(v212, 0LL);
      }
      v107 = voicePrefixb[v103];
      if ( !v107 )
        sub_B0D97C(IsEnable);
      v108 = v107->fields.condType;
      if ( v108 <= 0x13 )
      {
        if ( ((1 << v108) & 0xCE000) != 0 )
        {
          if ( v107->fields.value < 1 )
            goto LABEL_103;
          v109 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v109 )
            sub_B0D97C(0LL);
          v110 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)v109,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v110 )
            sub_B0D97C(0LL);
          v111 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v110,
                   v107->fields.value,
                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !v111 || Time < v111->fields.targetId )
          {
            v112 = v234;
            if ( !v234 )
              sub_B0D97C(0LL);
            goto LABEL_89;
          }
          if ( !v234 )
            sub_B0D97C(v111);
          IsEnable = (void *)VoiceCondMaster__IsEnable(
                               v234,
                               overwritePriority,
                               svtVoiceId,
                               v80,
                               v246,
                               Time >= *(_QWORD *)&v111->fields.eventId,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
          goto LABEL_101;
        }
        if ( v108 == 16 && v107->fields.value >= 1 )
        {
          v113 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v113 )
            sub_B0D97C(0LL);
          v114 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)v113,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
          if ( !v114 )
            sub_B0D97C(0LL);
          v115 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v114,
                   &entity,
                   v107->fields.value,
                   (const MethodInfo_2669C30 *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
          if ( !v115 )
            goto LABEL_97;
          if ( !entity )
            sub_B0D97C(v115);
          if ( Time < (__int64)entity->fields.longName )
          {
LABEL_97:
            v112 = v234;
            if ( !v234 )
              sub_B0D97C(0LL);
LABEL_89:
            IsEnable = (void *)VoiceCondMaster__IsEnable(
                                 v112,
                                 overwritePriority,
                                 svtVoiceId,
                                 v80,
                                 v246,
                                 0,
                                 svtId,
                                 &overwriteNameDefault,
                                 isMateriala);
            v105 = (unsigned __int8)IsEnable & 1;
            v106 = 1;
            v104 = (unsigned __int8)IsEnable & 1;
LABEL_102:
            v101 = v218;
            goto LABEL_103;
          }
          if ( !v234 )
            sub_B0D97C(0LL);
          IsEnable = (void *)VoiceCondMaster__IsEnable(
                               v234,
                               overwritePriority,
                               svtVoiceId,
                               v80,
                               v246,
                               1,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
LABEL_101:
          v104 = (unsigned __int8)IsEnable & 1;
          v106 = 1;
          v105 = 1;
          goto LABEL_102;
        }
      }
LABEL_103:
      LODWORD(v102) = v101->max_length;
      ++v103;
    }
    while ( (int)v103 < (int)v102 );
    if ( (v106 & 1) != 0 )
    {
      v94 = v105 & 1;
      v95 = v104 & 1;
      goto LABEL_253;
    }
LABEL_231:
    v96 = v234;
    if ( !v234 )
      sub_B0D97C(0LL);
LABEL_245:
    v94 = 1;
    v95 = VoiceCondMaster__IsEnable(
            v96,
            overwritePriority,
            svtVoiceId,
            v80,
            v246,
            1,
            svtId,
            &overwriteNameDefault,
            isMateriala);
LABEL_253:
    v174 = v95 & VoiceEntity__IsCondEnable(v75, svtId, v85);
    if ( (v174 & 1) != 0 )
    {
      if ( v94 )
      {
LABEL_257:
        v175 = sub_B0D974(VoiceInfo_TypeInfo, v172, v173);
        VoiceInfo___ctor((VoiceInfo_o *)v175, v176);
        if ( !v175 )
          sub_B0D97C(v177);
        *(_QWORD *)(v175 + 16) = v75;
        sub_B0D840(
          (BattleServantConfConponent_o *)(v175 + 16),
          (System_Int32_array **)v75,
          v178,
          v179,
          v180,
          v181,
          v182,
          v183);
        *(_BYTE *)(v175 + 24) = v174 & 1;
        v184 = (System_Int32_array **)overwriteName;
        *(_QWORD *)(v175 + 32) = overwriteName;
        sub_B0D840((BattleServantConfConponent_o *)(v175 + 32), v184, v185, v186, v187, v188, v189, v190);
        v191 = (System_Int32_array **)overwriteNameDefault;
        *(_QWORD *)(v175 + 40) = overwriteNameDefault;
        sub_B0D840((BattleServantConfConponent_o *)(v175 + 40), v191, v192, v193, v194, v195, v196, v197);
        *(_DWORD *)(v175 + 48) = overwritePriority[1];
        *(_DWORD *)(v175 + 52) = v246;
        v198 = (System_Int32_array **)conds;
        *(_QWORD *)(v175 + 56) = conds;
        sub_B0D840((BattleServantConfConponent_o *)(v175 + 56), v198, v199, v200, v201, v202, v203, v204);
        if ( !v235 )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v235,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v175,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_VoiceInfo__Add__);
      }
    }
    else if ( ((unsigned __int8)v94 & (overwritePriority[0] != 2)) != 0 )
    {
      goto LABEL_257;
    }
  }
  v205 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v206 = 0LL;
    v207 = &v205->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v207 - 1) != System_IDisposable_TypeInfo )
    {
      ++v206;
      v207 += 4;
      if ( v206 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_266;
    }
    v208 = (__int64)&v205->vtable[*v207].method;
  }
  else
  {
LABEL_266:
    v208 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v208)(
    Enumerator,
    *(_QWORD *)(v208 + 8));
  if ( (v232 & 1) != 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_277;
    NetworkManager__GoToTitleDialog((NetworkManager_o *)Instance, 0LL);
  }
  Instance = (DataManager_o *)v235;
  if ( !v235 )
LABEL_277:
    sub_B0D97C(Instance);
  return (VoiceInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v235,
                              (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
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
  System_String_o *v27; // x0
  int v28; // w8
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  int v34; // [xsp+0h] [xbp-50h]

  if ( (byte_421A2C9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B0D8A4(&VoiceEntity_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v10);
    byte_421A2C9 = 1;
  }
  v11 = 0;
  if ( !System_String__IsNullOrEmpty(labelName, 0LL) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      sub_B0D97C(0LL);
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B0D97C(0LL);
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
        p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        v21 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v22 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                        Enumerator,
                        *(_QWORD *)(v21 + 8));
      v23 = v22;
      if ( !v22
        || (v24 = *(&VoiceEntity_TypeInfo->_2.bitflags2 + 1), *(unsigned __int8 *)(*v22 + 300LL) < (unsigned int)v24)
        || *(VoiceEntity_c **)(*(_QWORD *)(*v22 + 200LL) + 8 * v24 - 8) != VoiceEntity_TypeInfo )
      {
        sub_B0D97C(v22);
      }
      v25 = v22[2];
      if ( !v25 )
        sub_B0D97C(0LL);
      v26 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 360LL))(
                                 v25,
                                 *(_QWORD *)(*(_QWORD *)v25 + 368LL));
      v27 = System_String__Concat_43849904((System_String_o *)StringLiteral_15952/*"_"*/, v26, 0LL);
      if ( !labelName )
        sub_B0D97C(v27);
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
      v32 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  System_String_o *v33; // x0
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v38; // w1
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  int v44; // [xsp+0h] [xbp-60h]

  if ( (byte_421A2C8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&VoiceEntity_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v16);
    byte_421A2C8 = 1;
  }
  v17 = 0;
  if ( !System_String__IsNullOrEmpty(labelName, 0LL) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      sub_B0D97C(0LL);
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B0D97C(0LL);
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
        p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        v27 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v28 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                        Enumerator,
                        *(_QWORD *)(v27 + 8));
      v29 = v28;
      if ( !v28
        || (v30 = *(&VoiceEntity_TypeInfo->_2.bitflags2 + 1), *(unsigned __int8 *)(*v28 + 300LL) < (unsigned int)v30)
        || *(VoiceEntity_c **)(*(_QWORD *)(*v28 + 200LL) + 8 * v30 - 8) != VoiceEntity_TypeInfo )
      {
        sub_B0D97C(v28);
      }
      v31 = v28[2];
      if ( !v31 )
        sub_B0D97C(0LL);
      v32 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 360LL))(
                                 v31,
                                 *(_QWORD *)(*(_QWORD *)v31 + 368LL));
      v33 = System_String__Concat_43849904((System_String_o *)StringLiteral_15952/*"_"*/, v32, 0LL);
      if ( !labelName )
        sub_B0D97C(v33);
    }
    while ( !System_String__EndsWith(labelName, v33, 0LL) );
    if ( v29[12] != 17 && v29[7] != 1 )
    {
LABEL_35:
      v17 = 0;
      v44 = 178;
      goto LABEL_36;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B0D97C(UserId);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                         MasterData_WarQuestSelectionMaster,
                         UserId,
                         svtId,
                         0LL);
    v38 = v29[14];
    if ( isUpdate )
    {
      if ( !EntityDefinitely )
        sub_B0D97C(0LL);
      if ( !UserServantCollectionEntity__SetPlayed(EntityDefinitely, v38, 0LL) )
        goto LABEL_35;
    }
    else
    {
      if ( !EntityDefinitely )
        sub_B0D97C(0LL);
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
      v42 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  int64_t Time_25503776; // x21
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

  if ( (byte_421A2C6 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, userBirthDay);
    byte_421A2C6 = 1;
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
  dateData = NetworkManager__getServerDateTime_25504848(createDay, 0LL).fields.dateData;
  v18 = NetworkManager__getDateTime_25504560(userBirthDay, 0LL).fields.dateData;
  v20.fields.dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v20, 0LL);
  v21.fields.dateData = (uint64_t)&v18;
  Month = System_DateTime__get_Month(v21, 0LL);
  v22.fields.dateData = (uint64_t)&v18;
  Day = System_DateTime__get_Day(v22, 0LL);
  v15 = 0LL;
  v23.fields.dateData = (uint64_t)&v15;
  System_DateTime___ctor_15033292(v23, Year, Month, Day, 0LL);
  dateTime.fields.dateData = v15;
  v24.fields.dateData = (uint64_t)&dateData;
  v9 = System_DateTime__get_Year(v24, 0LL);
  v25.fields.dateData = (uint64_t)&v18;
  v10 = System_DateTime__get_Month(v25, 0LL);
  v26.fields.dateData = (uint64_t)&v18;
  v11 = System_DateTime__get_Day(v26, 0LL);
  v15 = 0LL;
  v27.fields.dateData = (uint64_t)&v15;
  System_DateTime___ctor_15033292(v27, v9 + 1, v10, v11, 0LL);
  v16.fields.dateData = v15;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  ServerTime = NetworkManager__getServerTime(0LL);
  v28.fields.dateData = dateTime.fields.dateData;
  Time_25503776 = NetworkManager__getTime_25503776(v28, 0LL);
  v29.fields.dateData = v16.fields.dateData;
  return NetworkManager__getTime_25503776(v29, 0LL) <= ServerTime
      || Time_25503776 + 86400 >= createDay && Time_25503776 <= ServerTime;
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
  if ( (byte_4212655 & 1) == 0 )
  {
    this = (VoiceMaster___c__DisplayClass2_0_o *)sub_B0D8A4(
                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                   *(_QWORD *)&id);
    byte_4212655 = 1;
  }
  userStvCollectionEntity = v4->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_B0D97C(this);
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v9, 0LL) == id;
}