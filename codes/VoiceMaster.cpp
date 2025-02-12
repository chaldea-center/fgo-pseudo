void __fastcall VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5657 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__, method);
    byte_4BB5657 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    136,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
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
  __int64 v49; // x1
  Il2CppObject *v50; // x22
  DataManager_o *Instance; // x0
  __int64 v52; // x1
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v54; // x23
  Il2CppObject *v55; // x22
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  ServantVoiceEntity_array *Entity_41036780; // x29
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  __int64 v64; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v66; // w26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v68; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v71; // x8
  __int64 v72; // x9
  int32_t *v73; // x10
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x1
  VoiceEntity_o *v77; // x24
  __int64 methodPtr_low; // x10
  __int64 v79; // x8
  ServantVoiceEntity_o *v80; // x27
  __int64 v81; // x0
  System_String_o *v82; // x19
  System_String_o *v83; // x0
  System_String_o *v84; // x22
  System_Collections_Generic_List_object__o *VoiceList_41020088; // x0
  DataManager_c *v86; // x0
  __int64 v87; // x1
  const MethodInfo *v88; // x2
  int condType; // w8
  UserServantCollectionEntity_o *v90; // x8
  __int64 v91; // x27
  __int64 v92; // x22
  __int64 v93; // x0
  __int64 v94; // x1
  _BOOL4 IsEnable; // w0
  int32_t v96; // w22
  _BOOL8 IsQuestClear_38735352; // x0
  __int64 v98; // x1
  int v99; // w22
  int v100; // w27
  VoiceCondMaster_o *v101; // x0
  UserServantCollectionEntity_o *v102; // x8
  __int64 v103; // x27
  __int64 v104; // x22
  __int64 v105; // x0
  __int64 v106; // x1
  ServantVoiceCond_array *v107; // x14
  __int64 v108; // x11
  __int64 v109; // x27
  char v110; // w9
  char v111; // w10
  char v112; // w8
  ServantVoiceCond_o *v113; // x22
  unsigned int v114; // w11
  Il2CppObject *v115; // x0
  __int64 v116; // x1
  Il2CppObject *v117; // x0
  __int64 v118; // x1
  Il2CppObject *v119; // x0
  __int64 v120; // x1
  VoiceCondMaster_o *v121; // x0
  Il2CppObject *v122; // x0
  __int64 v123; // x1
  Il2CppObject *v124; // x0
  __int64 v125; // x1
  _BOOL8 v126; // x0
  __int64 v127; // x1
  ServantVoiceCond_array *v128; // x13
  __int64 v129; // x11
  __int64 v130; // x22
  char v131; // w8
  char v132; // w10
  char v133; // w9
  ServantVoiceCond_o *v134; // x27
  unsigned int v135; // w11
  Il2CppObject *v136; // x0
  __int64 v137; // x1
  Il2CppObject *v138; // x0
  __int64 v139; // x1
  Il2CppObject *v140; // x0
  __int64 v141; // x1
  int32_t value; // w27
  _BOOL8 v143; // x0
  __int64 v144; // x1
  __int64 v145; // x1
  __int64 v146; // x1
  UserServantCollectionEntity_o *v147; // x8
  __int64 v148; // x27
  __int64 v149; // x22
  __int64 v150; // x1
  int32_t condValue; // w27
  __int64 v152; // x1
  __int64 v153; // x1
  __int64 v154; // x1
  ServantVoiceCond_array *v155; // x12
  __int64 v156; // x10
  __int64 v157; // x22
  char v158; // w13
  char v159; // w9
  char v160; // w8
  ServantVoiceCond_o *v161; // x27
  unsigned int v162; // w10
  Il2CppObject *v163; // x0
  __int64 v164; // x1
  _BOOL8 v165; // x0
  __int64 v166; // x1
  Il2CppClass *v167; // x27
  bool v168; // w8
  NetworkManager_c *v169; // x0
  struct NetworkManager_StaticFields *static_fields; // x9
  char v171; // w27
  UserGameEntity_o *SelfUserGame; // x0
  int64_t v173; // x1
  BalanceConfig_c *v174; // x0
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x22
  System_Func_int__bool__o *v176; // x27
  int64_t v177; // x2
  int32_t v178; // w3
  System_String_o *v179; // x4
  BattleSetupInfo_o *v180; // x5
  FollowerInfo_o *v181; // x6
  PartyListViewItem_o *v182; // x7
  BalanceConfig_c *v183; // x0
  __int64 v184; // x1
  const MethodInfo *v185; // x3
  int64_t VtReleaseAt; // x8
  int64_t createdAt; // x22
  bool isEnableBirthdayVoice; // w22
  Il2CppObject *Master_object; // x0
  __int64 v190; // x1
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v192; // x3
  _BOOL8 v193; // x0
  int v194; // w27
  int64_t v195; // x19
  __int64 v196; // x0
  __int64 v197; // x1
  int64_t v198; // x2
  int32_t v199; // w3
  System_String_o *v200; // x4
  BattleSetupInfo_o *v201; // x5
  FollowerInfo_o *v202; // x6
  PartyListViewItem_o *v203; // x7
  System_String_o *v204; // x1
  int64_t v205; // x2
  int32_t v206; // w3
  System_String_o *v207; // x4
  BattleSetupInfo_o *v208; // x5
  FollowerInfo_o *v209; // x6
  PartyListViewItem_o *v210; // x7
  System_String_o *v211; // x1
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  int32_t v218; // w8
  ServantVoiceCond_array *v219; // x1
  int64_t v220; // x2
  int32_t v221; // w3
  System_String_o *v222; // x4
  BattleSetupInfo_o *v223; // x5
  FollowerInfo_o *v224; // x6
  PartyListViewItem_o *v225; // x7
  __int64 v226; // x0
  __int64 v227; // x1
  int64_t v228; // x2
  int32_t v229; // w3
  System_String_o *v230; // x4
  BattleSetupInfo_o *v231; // x5
  FollowerInfo_o *v232; // x6
  PartyListViewItem_o *v233; // x7
  struct System_Object_array *items; // x8
  _QWORD *v235; // x9
  __int64 size; // x10
  Il2CppClass **v237; // x0
  System_Collections_Generic_IEnumerator_T__c *v238; // x8
  __int64 v239; // x9
  int32_t *v240; // x10
  __int64 v241; // x0
  VoiceInfo_array *result; // x0
  const MethodInfo *isMateriala; // [xsp+0h] [xbp-120h]
  unsigned int v244; // [xsp+18h] [xbp-108h]
  int32_t v245; // [xsp+1Ch] [xbp-104h]
  ServantVoiceCond_array *v246; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v247; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v248; // [xsp+20h] [xbp-100h]
  int32_t voicePrefix; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixa; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixb; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixc; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixd; // [xsp+28h] [xbp-F8h]
  int64_t voicePrefixe; // [xsp+28h] [xbp-F8h]
  PartyOrganizationUtility_o *p_monitor; // [xsp+30h] [xbp-F0h]
  int v256; // [xsp+38h] [xbp-E8h]
  UserServantCollectionEntity_o **v257; // [xsp+40h] [xbp-E0h]
  int64_t Time; // [xsp+48h] [xbp-D8h]
  int32_t svtVoiceId; // [xsp+54h] [xbp-CCh]
  char v260; // [xsp+64h] [xbp-BCh]
  System_Collections_Generic_List_object__o *v261; // [xsp+68h] [xbp-B8h]
  Il2CppObject *object; // [xsp+70h] [xbp-B0h]
  _DWORD v263[3]; // [xsp+7Ch] [xbp-A4h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-98h] BYREF
  __int64 closedType; // [xsp+90h] [xbp-90h] BYREF
  System_String_o *overwriteNameDefault; // [xsp+98h] [xbp-88h] BYREF
  System_String_o *overwriteName; // [xsp+A0h] [xbp-80h] BYREF
  bool isInvalidVoiceList; // [xsp+ACh] [xbp-74h] BYREF
  ServantVoiceCond_array *conds; // [xsp+B0h] [xbp-70h] BYREF
  int32_t v270; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v271; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v272; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v273; // 0:x0.16

  if ( (byte_4BB5659 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_BasicHelper_Any_int____77470256, v15);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__, v16);
    sub_1C13D24(&CondType_TypeInfo, v17);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMaster___, v18);
    sub_1C13D24(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___, v19);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v20);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v21);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v22);
    sub_1C13D24(&Method_DataManager_GetMasterData_VoiceCondMaster___, v23);
    sub_1C13D24(&Method_DataManager_GetMaster_BeforeBirthDayMaster___, v24);
    sub_1C13D24(&Method_DataManager_GetMaster_EventMaster___, v25);
    sub_1C13D24(&DataManager_TypeInfo, v26);
    sub_1C13D24(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v27);
    sub_1C13D24(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__, v28);
    sub_1C13D24(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v29);
    sub_1C13D24(
      &Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__,
      v30);
    sub_1C13D24(&System_Func_int__bool__TypeInfo, v31);
    sub_1C13D24(&System_IDisposable_TypeInfo, v32);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, v33);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v34);
    sub_1C13D24(&Method_System_Collections_Generic_List_VoiceInfo__Add__, v35);
    sub_1C13D24(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__, v36);
    sub_1C13D24(&Method_System_Collections_Generic_List_VoiceInfo___ctor__, v37);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v38);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v39);
    sub_1C13D24(&System_Collections_Generic_List_VoiceInfo__TypeInfo, v40);
    sub_1C13D24(&NetworkManager_TypeInfo, v41);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_1C13D24(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v44);
    sub_1C13D24(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__, v45);
    sub_1C13D24(&VoiceMaster___c__DisplayClass2_0_TypeInfo, v46);
    sub_1C13D24(&VoiceEntity_TypeInfo, v47);
    sub_1C13D24(&VoiceInfo_TypeInfo, v48);
    sub_1C13D24(&StringLiteral_16374/*"^c"*/, v49);
    byte_4BB5659 = 1;
  }
  v270 = 0;
  conds = 0LL;
  isInvalidVoiceList = 0;
  overwriteNameDefault = 0LL;
  overwriteName = 0LL;
  entity = 0LL;
  closedType = 0LL;
  *(_QWORD *)&v263[1] = 0LL;
  v50 = (Il2CppObject *)sub_1C13F70(VoiceMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v50, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  v54 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_264;
  v270 = ServantLimitAddMaster__getVoicePrefix((ServantLimitAddMaster_o *)Instance, changeSvtVoiceId, limitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  object = v50;
  v55 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v52);
    byte_4BAF1E5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v55 )
    goto LABEL_264;
  Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                (UserServantCollectionMaster_o *)v55,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                svtId,
                                0LL);
  if ( !object )
    goto LABEL_264;
  object[1].klass = (Il2CppClass *)Instance;
  v257 = (UserServantCollectionEntity_o **)&object[1];
  sub_1C13CC8((PartyOrganizationUtility_o *)&object[1], (int64_t)Instance, v56, v57, v58, v59, v60, v61);
  if ( !MasterData_object )
    goto LABEL_264;
  Entity_41036780 = ServantVoiceMaster__getEntity_41036780(
                      (ServantVoiceMaster_o *)MasterData_object,
                      changeSvtVoiceId,
                      limitCount,
                      0LL);
  Time = NetworkManager__getTime(0LL);
  v261 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v261,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_4BAFD9B )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v52);
    byte_4BAFD9B = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_264;
  svtVoiceId = changeSvtVoiceId;
  v256 = *(unsigned __int8 *)(*(_QWORD *)&Instance[1].fields._DispLog + 144LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v64);
  v260 = 0;
  v66 = isCheckPlayCond;
  p_monitor = (PartyOrganizationUtility_o *)&object[1].monitor;
  LOBYTE(v263[0]) = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v68 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v68;
        p_offset += 4;
        if ( !v68 )
          goto LABEL_28;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_28:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v71 = Enumerator->klass;
    v72 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v73 = &v71->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_VoiceEntity__c **)v73 - 1) != System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo )
      {
        --v72;
        v73 += 4;
        if ( !v72 )
          goto LABEL_35;
      }
      v74 = (__int64)&v71->vtable[*v73].method;
    }
    else
    {
LABEL_35:
      v74 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0LL);
    }
    v75 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v74)(
            Enumerator,
            *(_QWORD *)(v74 + 8));
    v77 = (VoiceEntity_o *)v75;
    if ( !v75
      || (methodPtr_low = LOBYTE(VoiceEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v75 + 304LL) < (unsigned int)methodPtr_low)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v75 + 200LL) + 8 * methodPtr_low - 8) != VoiceEntity_TypeInfo )
    {
      sub_1C13F80(v75, v76);
    }
    if ( !Entity_41036780 )
      sub_1C13F80(v75, v76);
    v79 = *(int *)(v75 + 28);
    if ( (unsigned int)v79 >= Entity_41036780->max_length )
      sub_1C13F88(v75, v76);
    v80 = Entity_41036780->m_Items[v79];
    if ( v80 )
    {
      v81 = *(_QWORD *)(v75 + 16);
      if ( !v81 )
        sub_1C13F80(0LL, v76);
      v82 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v81 + 360LL))(
                                 v81,
                                 *(_QWORD *)(*(_QWORD *)v81 + 368LL));
      v83 = System_Int32__ToString((int32_t)&v270, 0LL);
      v84 = System_String__Concat_62979204(v83, (System_String_o *)StringLiteral_16374/*"^c"*/, v82, 0LL);
      VoiceList_41020088 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getVoiceList_41020088(
                                                                          v80,
                                                                          v77->fields.svtVoiceType,
                                                                          v84,
                                                                          disableCondTypeList,
                                                                          v66,
                                                                          0LL);
      if ( VoiceList_41020088 )
      {
        if ( VoiceList_41020088->fields._size >= 1 )
        {
          if ( System_Collections_Generic_List_object___get_Item(
                 VoiceList_41020088,
                 0,
                 (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__) )
          {
            ServantVoiceEntity__getOverwriteData(
              v80,
              v77->fields.svtVoiceType,
              v84,
              &conds,
              &isInvalidVoiceList,
              &overwriteName,
              &overwriteNameDefault,
              (int32_t *)&closedType + 1,
              v263[0],
              0LL);
            if ( !isInvalidVoiceList )
            {
              LODWORD(closedType) = v77->fields.closedType;
              condType = v77->fields.condType;
              if ( condType <= 54 )
              {
                if ( condType <= 21 )
                {
                  v99 = 1;
                  v100 = 1;
                  switch ( condType )
                  {
                    case 0:
                      v101 = (VoiceCondMaster_o *)v54;
                      if ( !v54 )
                        sub_1C13F80(0LL, v87);
                      goto LABEL_233;
                    case 1:
                      v96 = v270;
                      condValue = v77->fields.condValue;
                      if ( !CondType_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                      IsQuestClear_38735352 = CondType__IsQuestClear_38735352(condValue, -1, 0, 0LL);
                      if ( !v54 )
                        sub_1C13F80(IsQuestClear_38735352, v152);
                      goto LABEL_162;
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
                      goto LABEL_242;
                    case 6:
                      if ( !*v257 )
                        sub_1C13F80(v86, v87);
                      if ( !v54 )
                        sub_1C13F80(0LL, v87);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   (VoiceCondMaster_o *)v54,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v82,
                                   v270,
                                   (*v257)->fields.maxLv >= v77->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_241;
                    case 7:
                      if ( !*v257 )
                        sub_1C13F80(v86, v87);
                      if ( !v54 )
                        sub_1C13F80(0LL, v87);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   (VoiceCondMaster_o *)v54,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v82,
                                   v270,
                                   (*v257)->fields.maxLimitCount >= v77->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_241;
                    case 8:
                      if ( !*v257 )
                        sub_1C13F80(0LL, v87);
                      v96 = v270;
                      IsQuestClear_38735352 = UserServantCollectionEntity__IsGet(*v257, 0LL);
                      if ( !v54 )
                        sub_1C13F80(IsQuestClear_38735352, v146);
                      goto LABEL_162;
                    case 9:
                      v147 = *v257;
                      if ( !*v257 )
                        sub_1C13F80(v86, v87);
                      v148 = *(_QWORD *)&v147->fields.friendshipRank.fields.currentCryptoKey;
                      v149 = *(_QWORD *)&v147->fields.friendshipRank.fields.fakeValue;
                      voicePrefixa = v270;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v273.fields.currentCryptoKey = v148;
                      *(_QWORD *)&v273.fields.fakeValue = v149;
                      v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v273, 0LL);
                      if ( !v54 )
                        sub_1C13F80(v105, v150);
                      goto LABEL_74;
                    case 17:
                      if ( !*v257 )
                        sub_1C13F80(0LL, v87);
                      v96 = v270;
                      IsQuestClear_38735352 = UserServantCollectionEntity__IsPlayed(*v257, v77->fields.condValue, 0LL);
                      if ( !v54 )
                        sub_1C13F80(IsQuestClear_38735352, v153);
                      goto LABEL_162;
                    case 18:
                      if ( !*v257 )
                        sub_1C13F80(0LL, v87);
                      v96 = v270;
                      IsQuestClear_38735352 = UserServantCollectionEntity__IsLimitCountMax(*v257, 0LL);
                      if ( !v54 )
                        sub_1C13F80(IsQuestClear_38735352, v154);
                      goto LABEL_162;
                    case 19:
                      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
                      if ( !SelfUserGame )
                        sub_1C13F80(0LL, v173);
                      if ( SelfUserGame->fields.birthDay < 1 )
                        goto LABEL_238;
                      voicePrefixe = SelfUserGame->fields.birthDay;
                      v174 = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v174 = BalanceConfig_TypeInfo;
                      }
                      ServantIdsBirthdayBeforeValentine = v174->static_fields->ServantIdsBirthdayBeforeValentine;
                      v176 = (System_Func_int__bool__o *)p_monitor->klass;
                      if ( !p_monitor->klass )
                      {
                        v176 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
                        System_Func_int__bool____ctor(
                          v176,
                          object,
                          Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__,
                          0LL);
                        p_monitor->klass = (PartyOrganizationUtility_c *)v176;
                        sub_1C13CC8(p_monitor, (int64_t)v176, v177, v178, v179, v180, v181, v182);
                      }
                      v183 = (BalanceConfig_c *)BasicHelper__Any_int__49783128(
                                                  ServantIdsBirthdayBeforeValentine,
                                                  (System_Func_T__bool__o *)v176,
                                                  (const MethodInfo_2F7A158 *)Method_BasicHelper_Any_int____77470256);
                      if ( ((unsigned __int8)v183 & 1) != 0 )
                      {
                        v183 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v183 = BalanceConfig_TypeInfo;
                        }
                        VtReleaseAt = v183->static_fields->VtReleaseAt;
                        if ( VtReleaseAt >= 1 )
                        {
                          if ( !*v257 )
                            sub_1C13F80(v183, v184);
                          createdAt = (*v257)->fields.createdAt;
                          if ( !v183->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v183);
                            VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
                          }
                          if ( createdAt < VtReleaseAt )
                            goto LABEL_218;
                        }
                      }
                      if ( !*v257 )
                        sub_1C13F80(v183, v184);
                      isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                                (VoiceMaster_o *)v183,
                                                voicePrefixe,
                                                (*v257)->fields.createdAt,
                                                v185);
                      if ( !DataManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
                      if ( !Master_object )
                        sub_1C13F80(0LL, v190);
                      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       (const MethodInfo_323AC2C *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
                      if ( isEnableBirthdayVoice )
                      {
                        v193 = 1LL;
                      }
                      else
                      {
                        if ( !SingleEntity )
                          sub_1C13F80(0LL, v173);
                        v173 = (int64_t)SingleEntity[1].klass;
                        if ( v173 < 1 )
                        {
LABEL_238:
                          v193 = 0LL;
                        }
                        else
                        {
                          if ( !*v257 )
                            sub_1C13F80(SingleEntity, v173);
                          v193 = VoiceMaster__isEnableBirthdayVoice(
                                   (VoiceMaster_o *)SingleEntity,
                                   v173,
                                   (*v257)->fields.createdAt,
                                   v192);
                        }
                      }
                      if ( !v54 )
                        sub_1C13F80(v193, v173);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   (VoiceCondMaster_o *)v54,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v82,
                                   v270,
                                   v193,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_241;
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
                          v248 = conds;
                          voicePrefixd = conds->m_Items;
                          do
                          {
                            if ( (unsigned int)v157 >= (unsigned int)v156 )
                              sub_1C13F88(v86, v87);
                            v161 = voicePrefixd[v157];
                            if ( !v161 )
                              sub_1C13F80(v86, v87);
                            v162 = v161->fields.condType;
                            if ( v162 <= 0x13 && ((1 << v162) & 0xCE000) != 0 && v161->fields.value >= 1 )
                            {
                              if ( !DataManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                              v163 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventMaster___);
                              if ( !v163 )
                                sub_1C13F80(0LL, v164);
                              v165 = DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v163,
                                       &entity,
                                       v161->fields.value,
                                       (const MethodInfo_3238670 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
                              if ( !v165 )
                                goto LABEL_178;
                              if ( !entity )
                                sub_1C13F80(v165, v166);
                              if ( Time >= (__int64)entity[5].monitor )
                              {
                                if ( !v54 )
                                  sub_1C13F80(0LL, v166);
                                v167 = entity[6].klass;
                                v86 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         (VoiceCondMaster_o *)v54,
                                                         (int32_t *)&closedType,
                                                         svtVoiceId,
                                                         v82,
                                                         v270,
                                                         Time >= (__int64)v167,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                if ( (v256 != 0) | v260 & 1 )
                                {
                                  v155 = v248;
                                  v168 = 0;
                                }
                                else
                                {
                                  v244 = (unsigned int)v86;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  if ( !byte_4BB586B )
                                  {
                                    sub_1C13D24(&NetworkManager_TypeInfo, v87);
                                    byte_4BB586B = 1;
                                  }
                                  v169 = NetworkManager_TypeInfo;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                    v169 = NetworkManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1C13F80(v169, v87);
                                  static_fields = v169->static_fields;
                                  v155 = v248;
                                  v86 = (DataManager_c *)v244;
                                  v168 = static_fields->serverTime < (__int64)entity[6].klass;
                                }
                                v158 = (unsigned __int8)v86 & 1;
                                if ( v168 && Time >= (__int64)v167 )
                                {
                                  v171 = (unsigned __int8)v86 & 1;
                                  if ( !SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
                                    sub_1C13F80(0LL, v87);
                                  if ( !byte_4BB1DE9 )
                                  {
                                    sub_1C13D24(&DataManager_TypeInfo, v87);
                                    byte_4BB1DE9 = 1;
                                  }
                                  v86 = DataManager_TypeInfo;
                                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                    v86 = DataManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1C13F80(v86, v87);
                                  v155 = v248;
                                  v160 = 1;
                                  v158 = v171;
                                  v260 |= v86->static_fields->dateVersion < (__int64)entity[6].klass;
                                }
                                else
                                {
                                  v160 = 1;
                                }
                                v159 = 1;
                              }
                              else
                              {
LABEL_178:
                                if ( !v54 )
                                  sub_1C13F80(0LL, v166);
                                v86 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         (VoiceCondMaster_o *)v54,
                                                         (int32_t *)&closedType,
                                                         svtVoiceId,
                                                         v82,
                                                         v270,
                                                         0,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                v155 = v248;
                                v159 = (unsigned __int8)v86 & 1;
                                v160 = 1;
                                v158 = (unsigned __int8)v86 & 1;
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
                            goto LABEL_242;
                          }
                        }
                        v101 = (VoiceCondMaster_o *)v54;
                        if ( !v54 )
                          sub_1C13F80(0LL, v87);
                      }
                      else
                      {
                        v101 = (VoiceCondMaster_o *)v54;
                        if ( !v54 )
                          sub_1C13F80(0LL, v87);
                      }
                      return result;
                    case 21:
                      if ( !*v257 )
                        sub_1C13F80(0LL, v87);
                      v96 = v270;
                      IsQuestClear_38735352 = UserServantCollectionEntity__IsFinded(*v257, 0LL);
                      if ( !v54 )
                        sub_1C13F80(IsQuestClear_38735352, v145);
                      goto LABEL_162;
                    default:
                      goto LABEL_219;
                  }
                  goto LABEL_233;
                }
                if ( condType != 31 )
                {
                  if ( condType == 54 )
                  {
                    if ( !*v257 )
                      sub_1C13F80(0LL, v87);
                    v96 = v270;
                    IsQuestClear_38735352 = UserServantCollectionEntity__IsCostumeGet(*v257, limitCount, 0LL);
                    if ( !v54 )
                      sub_1C13F80(IsQuestClear_38735352, v98);
LABEL_162:
                    IsEnable = VoiceCondMaster__IsEnable(
                                 (VoiceCondMaster_o *)v54,
                                 (int32_t *)&closedType,
                                 svtVoiceId,
                                 v82,
                                 v96,
                                 IsQuestClear_38735352,
                                 svtId,
                                 &overwriteNameDefault,
                                 isMateriala);
                    goto LABEL_241;
                  }
LABEL_218:
                  v99 = 1;
LABEL_219:
                  v100 = 1;
                  goto LABEL_242;
                }
                v107 = conds;
                if ( !conds || (v108 = *(_QWORD *)&conds->max_length) == 0 )
                {
                  v101 = (VoiceCondMaster_o *)v54;
                  if ( !v54 )
                    sub_1C13F80(0LL, v87);
                  goto LABEL_233;
                }
                if ( (int)v108 < 1 )
                  goto LABEL_222;
                v109 = 0LL;
                v110 = 0;
                v111 = 0;
                v112 = 0;
                v246 = conds;
                voicePrefixb = conds->m_Items;
                while ( 2 )
                {
                  if ( (unsigned int)v109 >= (unsigned int)v108 )
                    sub_1C13F88(v86, v87);
                  v113 = voicePrefixb[v109];
                  if ( !v113 )
                    sub_1C13F80(v86, v87);
                  v114 = v113->fields.condType;
                  if ( v114 <= 0x13 )
                  {
                    if ( ((1 << v114) & 0xCE000) != 0 )
                    {
                      if ( v113->fields.value >= 1 )
                      {
                        v115 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !v115 )
                          sub_1C13F80(0LL, v116);
                        v117 = DataManager__GetMasterData_object_(
                                 (DataManager_o *)v115,
                                 (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMaster___);
                        if ( !v117 )
                          sub_1C13F80(0LL, v118);
                        v119 = DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v117,
                                 v113->fields.value,
                                 (const MethodInfo_3238624 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                        if ( !v119 || Time < (__int64)v119[5].monitor )
                        {
                          v121 = (VoiceCondMaster_o *)v54;
                          if ( !v54 )
                            sub_1C13F80(0LL, v120);
                          goto LABEL_89;
                        }
                        if ( !v54 )
                          sub_1C13F80(v119, v120);
                        v86 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                 (VoiceCondMaster_o *)v54,
                                                 (int32_t *)&closedType,
                                                 svtVoiceId,
                                                 v82,
                                                 v270,
                                                 Time >= (__int64)v119[6].klass,
                                                 svtId,
                                                 &overwriteNameDefault,
                                                 isMateriala);
LABEL_101:
                        v110 = (unsigned __int8)v86 & 1;
                        v112 = 1;
                        v111 = 1;
                        goto LABEL_102;
                      }
                    }
                    else if ( v114 == 16 && v113->fields.value >= 1 )
                    {
                      v122 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !v122 )
                        sub_1C13F80(0LL, v123);
                      v124 = DataManager__GetMasterData_object_(
                               (DataManager_o *)v122,
                               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
                      if ( !v124 )
                        sub_1C13F80(0LL, v125);
                      v126 = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v124,
                               (Il2CppObject **)&v263[1],
                               v113->fields.value,
                               (const MethodInfo_3238670 *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
                      if ( v126 )
                      {
                        if ( !*(_QWORD *)&v263[1] )
                          sub_1C13F80(v126, v127);
                        if ( Time >= *(_QWORD *)(*(_QWORD *)&v263[1] + 40LL) )
                        {
                          if ( !v54 )
                            sub_1C13F80(0LL, v127);
                          v86 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                   (VoiceCondMaster_o *)v54,
                                                   (int32_t *)&closedType,
                                                   svtVoiceId,
                                                   v82,
                                                   v270,
                                                   1,
                                                   svtId,
                                                   &overwriteNameDefault,
                                                   isMateriala);
                          goto LABEL_101;
                        }
                      }
                      v121 = (VoiceCondMaster_o *)v54;
                      if ( !v54 )
                        sub_1C13F80(0LL, v127);
LABEL_89:
                      v86 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                               v121,
                                               (int32_t *)&closedType,
                                               svtVoiceId,
                                               v82,
                                               v270,
                                               0,
                                               svtId,
                                               &overwriteNameDefault,
                                               isMateriala);
                      v111 = (unsigned __int8)v86 & 1;
                      v112 = 1;
                      v110 = (unsigned __int8)v86 & 1;
LABEL_102:
                      v107 = v246;
                    }
                  }
                  LODWORD(v108) = v107->max_length;
                  if ( (int)++v109 >= (int)v108 )
                  {
                    if ( (v112 & 1) != 0 )
                    {
                      v99 = v111 & 1;
                      v100 = v110 & 1;
                      goto LABEL_242;
                    }
LABEL_222:
                    v101 = (VoiceCondMaster_o *)v54;
                    if ( !v54 )
                      sub_1C13F80(0LL, v87);
LABEL_233:
                    v99 = 1;
                    v100 = VoiceCondMaster__IsEnable(
                             v101,
                             (int32_t *)&closedType,
                             svtVoiceId,
                             v82,
                             v270,
                             1,
                             svtId,
                             &overwriteNameDefault,
                             isMateriala);
                    goto LABEL_242;
                  }
                  continue;
                }
              }
              if ( condType > 92 )
              {
                if ( condType == 98 )
                {
                  v102 = *v257;
                  if ( !*v257 )
                    sub_1C13F80(v86, v87);
                  v103 = *(_QWORD *)&v102->fields.friendshipRank.fields.currentCryptoKey;
                  v104 = *(_QWORD *)&v102->fields.friendshipRank.fields.fakeValue;
                  voicePrefixa = v270;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v272.fields.currentCryptoKey = v103;
                  *(_QWORD *)&v272.fields.fakeValue = v104;
                  v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v272, 0LL);
                  if ( !v54 )
                    sub_1C13F80(v105, v106);
LABEL_74:
                  IsEnable = VoiceCondMaster__IsEnable(
                               (VoiceCondMaster_o *)v54,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v82,
                               voicePrefixa,
                               (int)v105 >= v77->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_241;
                }
                if ( condType == 99 )
                {
                  v90 = *v257;
                  if ( !*v257 )
                    sub_1C13F80(v86, v87);
                  v91 = *(_QWORD *)&v90->fields.friendshipRank.fields.currentCryptoKey;
                  v92 = *(_QWORD *)&v90->fields.friendshipRank.fields.fakeValue;
                  voicePrefix = v270;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v271.fields.currentCryptoKey = v91;
                  *(_QWORD *)&v271.fields.fakeValue = v92;
                  v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v271, 0LL);
                  if ( !v54 )
                    sub_1C13F80(v93, v94);
                  IsEnable = VoiceCondMaster__IsEnable(
                               (VoiceCondMaster_o *)v54,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v82,
                               voicePrefix,
                               (int)v93 <= v77->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
LABEL_241:
                  v100 = IsEnable;
                  v99 = 1;
                  goto LABEL_242;
                }
                goto LABEL_218;
              }
              if ( condType != 56 )
              {
                if ( condType == 92 )
                {
                  if ( !v54 )
                    sub_1C13F80(0LL, v87);
                  IsEnable = VoiceCondMaster__IsEnable(
                               (VoiceCondMaster_o *)v54,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v82,
                               v270,
                               0,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_241;
                }
                goto LABEL_218;
              }
              v128 = conds;
              if ( !conds || (v129 = *(_QWORD *)&conds->max_length) == 0 )
              {
                v101 = (VoiceCondMaster_o *)v54;
                if ( !v54 )
                  sub_1C13F80(0LL, v87);
                goto LABEL_233;
              }
              if ( (int)v129 < 1 )
                goto LABEL_134;
              v130 = 0LL;
              v131 = 0;
              v132 = 0;
              v133 = 0;
              v247 = conds;
              voicePrefixc = conds->m_Items;
              do
              {
                if ( (unsigned int)v130 >= (unsigned int)v129 )
                  sub_1C13F88(v86, v87);
                v134 = voicePrefixc[v130];
                if ( !v134 )
                  sub_1C13F80(v86, v87);
                v135 = v134->fields.condType;
                if ( v135 <= 0x13 && ((1 << v135) & 0xCE000) != 0 && v134->fields.value >= 1 )
                {
                  v136 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v136 )
                    sub_1C13F80(0LL, v137);
                  v138 = DataManager__GetMasterData_object_(
                           (DataManager_o *)v136,
                           (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v138 )
                    sub_1C13F80(0LL, v139);
                  v140 = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v138,
                           v134->fields.value,
                           (const MethodInfo_3238624 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v140 && Time >= (__int64)v140[5].monitor )
                  {
                    value = v134->fields.value;
                    v245 = v270;
                    if ( !CondType_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    v143 = CondType__IsServantGetBeforeEventEnd(svtId, value, 0LL);
                    if ( !v54 )
                      sub_1C13F80(v143, v144);
                    v86 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             (VoiceCondMaster_o *)v54,
                                             (int32_t *)&closedType,
                                             svtVoiceId,
                                             v82,
                                             v245,
                                             v143,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v131 = (unsigned __int8)v86 & 1;
                    v133 = 1;
                    v132 = 1;
                  }
                  else
                  {
                    if ( !v54 )
                      sub_1C13F80(0LL, v141);
                    v86 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             (VoiceCondMaster_o *)v54,
                                             (int32_t *)&closedType,
                                             svtVoiceId,
                                             v82,
                                             v270,
                                             0,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v132 = (unsigned __int8)v86 & 1;
                    v133 = 1;
                    v131 = (unsigned __int8)v86 & 1;
                  }
                  v128 = v247;
                }
                LODWORD(v129) = v128->max_length;
                ++v130;
              }
              while ( (int)v130 < (int)v129 );
              if ( (v133 & 1) == 0 )
              {
LABEL_134:
                v101 = (VoiceCondMaster_o *)v54;
                if ( !v54 )
                  sub_1C13F80(0LL, v87);
                goto LABEL_233;
              }
              v99 = v132 & 1;
              v100 = v131 & 1;
LABEL_242:
              v194 = v100 & VoiceEntity__IsCondEnable(v77, svtId, v88);
              if ( (v99 & (v194 | ((_DWORD)closedType != 2)) & 1) != 0 )
              {
                v195 = sub_1C13F70(VoiceInfo_TypeInfo);
                VoiceInfo___ctor((VoiceInfo_o *)v195, 0LL);
                if ( !v195 )
                  sub_1C13F80(v196, v197);
                *(_QWORD *)(v195 + 16) = v77;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v195 + 16), (int64_t)v77, v198, v199, v200, v201, v202, v203);
                *(_BYTE *)(v195 + 24) = v194 & 1;
                v204 = overwriteName;
                *(_QWORD *)(v195 + 32) = overwriteName;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)(v195 + 32),
                  (int64_t)v204,
                  v205,
                  v206,
                  v207,
                  v208,
                  v209,
                  v210);
                v211 = overwriteNameDefault;
                *(_QWORD *)(v195 + 40) = overwriteNameDefault;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)(v195 + 40),
                  (int64_t)v211,
                  v212,
                  v213,
                  v214,
                  v215,
                  v216,
                  v217);
                v218 = v270;
                *(_DWORD *)(v195 + 48) = HIDWORD(closedType);
                *(_DWORD *)(v195 + 52) = v218;
                v219 = conds;
                *(_QWORD *)(v195 + 56) = conds;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)(v195 + 56),
                  (int64_t)v219,
                  v220,
                  v221,
                  v222,
                  v223,
                  v224,
                  v225);
                if ( !v261 )
                  sub_1C13F80(v226, v227);
                items = v261->fields._items;
                v235 = Method_System_Collections_Generic_List_VoiceInfo__Add__;
                ++v261->fields._version;
                if ( !items )
                  sub_1C13F80(v226, v227);
                size = v261->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v261,
                    (Il2CppObject *)v195,
                    *(const MethodInfo_362D1CC **)(*(_QWORD *)(v235[4] + 192LL) + 112LL));
                }
                else
                {
                  v237 = &items->obj.klass + size;
                  v261->fields._size = size + 1;
                  v237[4] = (Il2CppClass *)v195;
                  sub_1C13CC8((PartyOrganizationUtility_o *)(v237 + 4), v195, v228, v229, v230, v231, v232, v233);
                }
              }
            }
          }
        }
      }
    }
  }
  v238 = Enumerator->klass;
  v239 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v240 = &v238->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v240 - 1) != System_IDisposable_TypeInfo )
    {
      --v239;
      v240 += 4;
      if ( !v239 )
        goto LABEL_253;
    }
    v241 = (__int64)&v238->vtable[*v240].method;
  }
  else
  {
LABEL_253:
    v241 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v241)(
                                Enumerator,
                                *(_QWORD *)(v241 + 8));
  if ( (v260 & 1) != 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_264;
    NetworkManager__GoToTitleDialog((NetworkManager_o *)Instance, 0LL);
  }
  if ( !v261 )
LABEL_264:
    sub_1C13F80(Instance, v52);
  return (VoiceInfo_array *)System_Collections_Generic_List_object___ToArray(
                              v261,
                              (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  _QWORD *v24; // x0
  __int64 v25; // x1
  _QWORD *v26; // x21
  __int64 methodPtr_low; // x10
  __int64 v28; // x0
  System_String_o *v29; // x1
  System_String_o *v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4BB565B & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1C13D24(&System_IDisposable_TypeInfo, v6);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, v7);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1C13D24(&VoiceEntity_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_16374/*"^c"*/, v10);
    byte_4BB565B = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0LL) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C13F80(0LL, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_VoiceEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_18;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_18:
      v23 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0LL);
    }
    v24 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                      Enumerator,
                      *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24
      || (methodPtr_low = LOBYTE(VoiceEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*v24 + 304LL) < (unsigned int)methodPtr_low)
      || *(VoiceEntity_c **)(*(_QWORD *)(*v24 + 200LL) + 8 * methodPtr_low - 8) != VoiceEntity_TypeInfo )
    {
      sub_1C13F80(v24, v25);
    }
    v28 = v24[2];
    if ( !v28 )
      sub_1C13F80(0LL, v25);
    v29 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 360LL))(
                               v28,
                               *(_QWORD *)(*(_QWORD *)v28 + 368LL));
    v30 = System_String__Concat_62967944((System_String_o *)StringLiteral_16374/*"^c"*/, v29, 0LL);
    if ( !labelName )
      sub_1C13F80(v30, v30);
    if ( System_String__EndsWith(labelName, v30, 0LL) )
    {
      v12 = *((_DWORD *)v26 + 15);
      goto LABEL_28;
    }
  }
  v12 = 0;
LABEL_28:
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_32;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_32:
    v34 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
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
  int32_t v18; // w20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  _QWORD *v30; // x0
  __int64 v31; // x1
  _DWORD *v32; // x23
  __int64 methodPtr_low; // x10
  __int64 v34; // x0
  System_String_o *v35; // x1
  System_String_o *v36; // x0
  Il2CppObject *Instance; // x0
  __int64 v38; // x1
  __int64 v39; // x1
  Il2CppObject *MasterData_object; // x22
  NetworkManager_c *v41; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v43; // x1
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0

  if ( (byte_4BB565A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_1C13D24(&System_IDisposable_TypeInfo, v10);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, v11);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1C13D24(&NetworkManager_TypeInfo, v13);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1C13D24(&VoiceEntity_TypeInfo, v15);
    sub_1C13D24(&StringLiteral_16374/*"^c"*/, v16);
    byte_4BB565A = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0LL) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C13F80(0LL, v17);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v20);
  do
  {
    klass = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      goto LABEL_39;
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_VoiceEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_18;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_18:
      v29 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0LL);
    }
    v30 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                      Enumerator,
                      *(_QWORD *)(v29 + 8));
    v32 = v30;
    if ( !v30
      || (methodPtr_low = LOBYTE(VoiceEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*v30 + 304LL) < (unsigned int)methodPtr_low)
      || *(VoiceEntity_c **)(*(_QWORD *)(*v30 + 200LL) + 8 * methodPtr_low - 8) != VoiceEntity_TypeInfo )
    {
      sub_1C13F80(v30, v31);
    }
    v34 = v30[2];
    if ( !v34 )
      sub_1C13F80(0LL, v31);
    v35 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v34 + 360LL))(
                               v34,
                               *(_QWORD *)(*(_QWORD *)v34 + 368LL));
    v36 = System_String__Concat_62967944((System_String_o *)StringLiteral_16374/*"^c"*/, v35, 0LL);
    if ( !labelName )
      sub_1C13F80(v36, v36);
  }
  while ( !System_String__EndsWith(labelName, v36, 0LL) );
  if ( v32[12] != 17 && (unsigned int)(v32[7] - 1) > 1 )
  {
LABEL_39:
    v18 = 0;
    goto LABEL_40;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v38);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v39);
    byte_4BAF1E5 = 1;
  }
  v41 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v41 = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    sub_1C13F80(v41, v39);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       v41->static_fields->userIdNumber,
                       svtId,
                       0LL);
  v43 = (unsigned int)v32[14];
  if ( isUpdate )
  {
    if ( !EntityDefinitely )
      sub_1C13F80(0LL, v43);
    if ( !UserServantCollectionEntity__SetPlayed(EntityDefinitely, v43, 0LL) )
      goto LABEL_39;
  }
  else
  {
    if ( !EntityDefinitely )
      sub_1C13F80(0LL, v43);
    if ( UserServantCollectionEntity__IsPlayed(EntityDefinitely, v43, 0LL) )
      goto LABEL_39;
  }
  v18 = v32[14];
LABEL_40:
  v44 = Enumerator->klass;
  v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_44;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_44:
    v47 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8));
  return v18;
}


bool __fastcall VoiceMaster__isEnableBirthdayVoice(
        VoiceMaster_o *this,
        int64_t userBirthDay,
        int64_t createDay,
        const MethodInfo *method)
{
  __int64 v6; // x1
  int32_t Year; // w20
  int32_t Month; // w21
  int32_t Day; // w3
  int32_t v10; // w20
  int32_t v11; // w21
  int32_t v12; // w3
  int64_t ServerTime; // x20
  int64_t Time_39706024; // x21
  uint64_t v16; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v17; // [xsp+10h] [xbp-50h]
  System_DateTime_o dateTime; // [xsp+18h] [xbp-48h]
  uint64_t v19; // [xsp+20h] [xbp-40h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-38h] BYREF
  System_DateTime_o v21; // 0:x0.8
  System_DateTime_o v22; // 0:x0.8
  System_DateTime_o v23; // 0:x0.8
  System_DateTime_o v24; // 0:x0.8
  System_DateTime_o v25; // 0:x0.8
  System_DateTime_o v26; // 0:x0.8
  System_DateTime_o v27; // 0:x0.8
  System_DateTime_o v28; // 0:x0.8
  System_DateTime_o v29; // 0:x0.8
  System_DateTime_o v30; // 0:x0.8

  if ( (byte_4BB5658 & 1) == 0 )
  {
    sub_1C13D24(&System_DateTime_TypeInfo, userBirthDay);
    sub_1C13D24(&NetworkManager_TypeInfo, v6);
    byte_4BB5658 = 1;
  }
  v17.fields._dateData = 0LL;
  dateTime.fields._dateData = 0LL;
  if ( userBirthDay < 1 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_39707132(createDay, 0LL).fields._dateData;
  v19 = NetworkManager__getDateTime_39706804(userBirthDay, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v21.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v21, 0LL);
  v22.fields._dateData = (uint64_t)&v19;
  Month = System_DateTime__get_Month(v22, 0LL);
  v23.fields._dateData = (uint64_t)&v19;
  Day = System_DateTime__get_Day(v23, 0LL);
  v16 = 0LL;
  v24.fields._dateData = (uint64_t)&v16;
  System_DateTime___ctor_63646152(v24, Year, Month, Day, 0LL);
  dateTime.fields._dateData = v16;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v25.fields._dateData = (uint64_t)&dateData;
  v10 = System_DateTime__get_Year(v25, 0LL);
  v26.fields._dateData = (uint64_t)&v19;
  v11 = System_DateTime__get_Month(v26, 0LL);
  v27.fields._dateData = (uint64_t)&v19;
  v12 = System_DateTime__get_Day(v27, 0LL);
  v16 = 0LL;
  v28.fields._dateData = (uint64_t)&v16;
  System_DateTime___ctor_63646152(v28, v10 + 1, v11, v12, 0LL);
  v17.fields._dateData = v16;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  ServerTime = NetworkManager__getServerTime(0LL);
  v29.fields._dateData = dateTime.fields._dateData;
  Time_39706024 = NetworkManager__getTime_39706024(v29, 0LL);
  v30.fields._dateData = v17.fields._dateData;
  return (Time_39706024 <= ServerTime && Time_39706024 + 86400 >= createDay) | (NetworkManager__getTime_39706024(
                                                                                  v30,
                                                                                  0LL) <= ServerTime);
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
  if ( (byte_4BB565C & 1) == 0 )
  {
    this = (VoiceMaster___c__DisplayClass2_0_o *)sub_1C13D24(
                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                   *(_QWORD *)&id);
    byte_4BB565C = 1;
  }
  userStvCollectionEntity = v4->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_1C13F80(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v9, 0LL) == id;
}