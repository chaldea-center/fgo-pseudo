void __fastcall VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17131 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__, method, v2);
    byte_4B17131 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    132,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x23
  __int64 Instance; // x0
  __int64 v87; // x1
  Il2CppObject *MasterData_object; // x24
  __int64 v89; // x1
  Il2CppObject *v90; // x22
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  ServantVoiceEntity_array *Entity_40601672; // x29
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  __int64 v103; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v105; // w26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v107; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v110; // x8
  __int64 v111; // x9
  int32_t *v112; // x10
  __int64 v113; // x0
  __int64 v114; // x0
  __int64 v115; // x1
  VoiceEntity_o *v116; // x27
  __int64 methodPtr_low; // x10
  __int64 v118; // x8
  ServantVoiceEntity_o *v119; // x24
  __int64 v120; // x0
  System_String_o *v121; // x19
  System_String_o *v122; // x0
  System_String_o *v123; // x22
  System_Collections_Generic_List_object__o *VoiceList_40584836; // x0
  DataManager_c *v125; // x0
  __int64 v126; // x1
  const MethodInfo *v127; // x2
  int condType; // w8
  UserServantCollectionEntity_o *v129; // x8
  __int64 v130; // x24
  __int64 v131; // x22
  __int64 v132; // x0
  __int64 v133; // x1
  _BOOL4 IsEnable; // w0
  int32_t v135; // w22
  _BOOL8 IsQuestClear_38310172; // x0
  __int64 v137; // x1
  int v138; // w22
  int v139; // w24
  VoiceCondMaster_o *v140; // x0
  UserServantCollectionEntity_o *v141; // x8
  __int64 v142; // x24
  __int64 v143; // x22
  __int64 v144; // x0
  __int64 v145; // x1
  ServantVoiceCond_array *v146; // x14
  __int64 v147; // x11
  __int64 v148; // x24
  char v149; // w9
  char v150; // w10
  char v151; // w8
  ServantVoiceCond_o *v152; // x22
  unsigned int v153; // w11
  Il2CppObject *v154; // x0
  __int64 v155; // x1
  Il2CppObject *v156; // x0
  __int64 v157; // x1
  Il2CppObject *v158; // x0
  __int64 v159; // x1
  VoiceCondMaster_o *v160; // x0
  Il2CppObject *v161; // x0
  __int64 v162; // x1
  Il2CppObject *v163; // x0
  __int64 v164; // x1
  _BOOL8 v165; // x0
  __int64 v166; // x1
  ServantVoiceCond_array *v167; // x13
  __int64 v168; // x11
  __int64 v169; // x22
  char v170; // w8
  char v171; // w10
  char v172; // w9
  ServantVoiceCond_o *v173; // x24
  unsigned int v174; // w11
  Il2CppObject *v175; // x0
  __int64 v176; // x1
  Il2CppObject *v177; // x0
  __int64 v178; // x1
  Il2CppObject *v179; // x0
  __int64 v180; // x1
  int32_t value; // w24
  _BOOL8 v182; // x0
  __int64 v183; // x1
  __int64 v184; // x1
  __int64 v185; // x1
  UserServantCollectionEntity_o *v186; // x8
  __int64 v187; // x24
  __int64 v188; // x22
  __int64 v189; // x1
  int32_t condValue; // w24
  __int64 v191; // x1
  __int64 v192; // x1
  __int64 v193; // x1
  ServantVoiceCond_array *v194; // x12
  __int64 v195; // x10
  __int64 v196; // x22
  char v197; // w13
  char v198; // w9
  char v199; // w8
  ServantVoiceCond_o *v200; // x24
  unsigned int v201; // w10
  Il2CppObject *v202; // x0
  __int64 v203; // x1
  _BOOL8 v204; // x0
  __int64 v205; // x1
  Il2CppClass *v206; // x24
  bool v207; // w8
  NetworkManager_c *v208; // x0
  struct NetworkManager_StaticFields *static_fields; // x9
  char v210; // w24
  UserGameEntity_o *SelfUserGame; // x0
  int64_t v212; // x1
  __int64 v213; // x2
  __int64 v214; // x3
  BalanceConfig_c *v215; // x0
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x22
  System_Func_int__bool__o *v217; // x24
  int64_t v218; // x2
  int32_t v219; // w3
  System_String_o *v220; // x4
  BattleSetupInfo_o *v221; // x5
  FollowerInfo_o *v222; // x6
  PartyListViewItem_o *v223; // x7
  BalanceConfig_c *v224; // x0
  __int64 v225; // x1
  const MethodInfo *v226; // x3
  int64_t VtReleaseAt; // x8
  int64_t createdAt; // x22
  __int64 v229; // x1
  bool isEnableBirthdayVoice; // w22
  Il2CppObject *Master_object; // x0
  __int64 v232; // x1
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v234; // x3
  _BOOL8 v235; // x0
  __int64 v236; // x1
  __int64 v237; // x2
  __int64 v238; // x3
  int v239; // w24
  int64_t v240; // x19
  __int64 v241; // x0
  __int64 v242; // x1
  int64_t v243; // x2
  int32_t v244; // w3
  System_String_o *v245; // x4
  BattleSetupInfo_o *v246; // x5
  FollowerInfo_o *v247; // x6
  PartyListViewItem_o *v248; // x7
  System_String_o *v249; // x1
  int64_t v250; // x2
  int32_t v251; // w3
  System_String_o *v252; // x4
  BattleSetupInfo_o *v253; // x5
  FollowerInfo_o *v254; // x6
  PartyListViewItem_o *v255; // x7
  System_String_o *v256; // x1
  int64_t v257; // x2
  int32_t v258; // w3
  System_String_o *v259; // x4
  BattleSetupInfo_o *v260; // x5
  FollowerInfo_o *v261; // x6
  PartyListViewItem_o *v262; // x7
  int32_t v263; // w8
  ServantVoiceCond_array *v264; // x1
  int64_t v265; // x2
  int32_t v266; // w3
  System_String_o *v267; // x4
  BattleSetupInfo_o *v268; // x5
  FollowerInfo_o *v269; // x6
  PartyListViewItem_o *v270; // x7
  __int64 v271; // x0
  __int64 v272; // x1
  int64_t v273; // x2
  int32_t v274; // w3
  System_String_o *v275; // x4
  BattleSetupInfo_o *v276; // x5
  FollowerInfo_o *v277; // x6
  PartyListViewItem_o *v278; // x7
  struct System_Object_array *items; // x8
  _QWORD *v280; // x9
  __int64 size; // x10
  Il2CppClass **v282; // x0
  System_Collections_Generic_IEnumerator_T__c *v283; // x8
  __int64 v284; // x9
  int32_t *v285; // x10
  __int64 v286; // x0
  VoiceInfo_array *result; // x0
  const MethodInfo *isMateriala; // [xsp+0h] [xbp-120h]
  unsigned int v289; // [xsp+18h] [xbp-108h]
  int32_t v290; // [xsp+1Ch] [xbp-104h]
  ServantVoiceCond_array *v291; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v292; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v293; // [xsp+20h] [xbp-100h]
  int32_t voicePrefix; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixa; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixb; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixc; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixd; // [xsp+28h] [xbp-F8h]
  int64_t voicePrefixe; // [xsp+28h] [xbp-F8h]
  PartyOrganizationUtility_o *v300; // [xsp+30h] [xbp-F0h]
  int v301; // [xsp+38h] [xbp-E8h]
  UserServantCollectionEntity_o **v302; // [xsp+40h] [xbp-E0h]
  int64_t Time; // [xsp+48h] [xbp-D8h]
  int32_t svtVoiceId; // [xsp+54h] [xbp-CCh]
  VoiceCondMaster_o *v305; // [xsp+58h] [xbp-C8h]
  char v306; // [xsp+64h] [xbp-BCh]
  System_Collections_Generic_List_object__o *v307; // [xsp+68h] [xbp-B8h]
  _DWORD v308[3]; // [xsp+7Ch] [xbp-A4h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-98h] BYREF
  __int64 closedType; // [xsp+90h] [xbp-90h] BYREF
  System_String_o *overwriteNameDefault; // [xsp+98h] [xbp-88h] BYREF
  System_String_o *overwriteName; // [xsp+A0h] [xbp-80h] BYREF
  bool isInvalidVoiceList; // [xsp+ACh] [xbp-74h] BYREF
  ServantVoiceCond_array *conds; // [xsp+B0h] [xbp-70h] BYREF
  int32_t v315; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v316; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v317; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v318; // 0:x0.16

  if ( (byte_4B17133 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&changeSvtVoiceId);
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&CondType_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v29, v30);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoiceCondMaster___, v31, v32);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BeforeBirthDayMaster___, v33, v34);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v35, v36);
    sub_1BCA7E0(&DataManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v39, v40);
    sub_1BCA7E0(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__, v41, v42);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v43, v44);
    sub_1BCA7E0(
      &Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__,
      v45,
      v46);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v47, v48);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v49, v50);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v51, v52);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v53, v54);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VoiceInfo__Add__, v55, v56);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__, v57, v58);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VoiceInfo___ctor__, v59, v60);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v61, v62);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v63, v64);
    sub_1BCA7E0(&System_Collections_Generic_List_VoiceInfo__TypeInfo, v65, v66);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v67, v68);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v69, v70);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v71, v72);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v73, v74);
    sub_1BCA7E0(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__, v75, v76);
    sub_1BCA7E0(&VoiceMaster___c__DisplayClass2_0_TypeInfo, v77, v78);
    sub_1BCA7E0(&VoiceEntity_TypeInfo, v79, v80);
    sub_1BCA7E0(&VoiceInfo_TypeInfo, v81, v82);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v83, v84);
    byte_4B17133 = 1;
  }
  v315 = 0;
  conds = 0LL;
  isInvalidVoiceList = 0;
  overwriteNameDefault = 0LL;
  overwriteName = 0LL;
  entity = 0LL;
  closedType = 0LL;
  *(_QWORD *)&v308[1] = 0LL;
  v85 = sub_1BCAA2C(
          VoiceMaster___c__DisplayClass2_0_TypeInfo,
          *(_QWORD *)&svtId,
          *(_QWORD *)&changeSvtVoiceId,
          *(_QWORD *)&limitCount);
  System_Object___ctor((Il2CppObject *)v85, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  v305 = (VoiceCondMaster_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_260;
  v315 = ServantLimitAddMaster__getVoicePrefix((ServantLimitAddMaster_o *)Instance, changeSvtVoiceId, limitCount, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  v90 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v89);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v90 )
    goto LABEL_260;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                        (UserServantCollectionMaster_o *)v90,
                        Instance,
                        svtId,
                        0LL);
  if ( !v85 )
    goto LABEL_260;
  *(_QWORD *)(v85 + 16) = Instance;
  v302 = (UserServantCollectionEntity_o **)(v85 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v85 + 16), Instance, v91, v92, v93, v94, v95, v96);
  if ( !MasterData_object )
    goto LABEL_260;
  Entity_40601672 = ServantVoiceMaster__getEntity_40601672(
                      (ServantVoiceMaster_o *)MasterData_object,
                      changeSvtVoiceId,
                      limitCount,
                      0LL);
  Time = NetworkManager__getTime(0LL);
  v307 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_VoiceInfo__TypeInfo,
                                                        v98,
                                                        v99,
                                                        v100);
  System_Collections_Generic_List_object____ctor(
    v307,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_4B1194F )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, v87, v101);
    byte_4B1194F = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v87);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_260;
  svtVoiceId = changeSvtVoiceId;
  v301 = *(unsigned __int8 *)(*(_QWORD *)(Instance + 184) + 136LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v103);
  v306 = 0;
  v105 = isCheckPlayCond;
  v300 = (PartyOrganizationUtility_o *)(v85 + 24);
  LOBYTE(v308[0]) = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v107 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v107;
        p_offset += 4;
        if ( !v107 )
          goto LABEL_24;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_24:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v110 = Enumerator->klass;
    v111 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v112 = &v110->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v112 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v111;
        v112 += 4;
        if ( !v111 )
          goto LABEL_31;
      }
      v113 = (__int64)&v110->vtable[*v112].method;
    }
    else
    {
LABEL_31:
      v113 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v114 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v113)(
             Enumerator,
             *(_QWORD *)(v113 + 8));
    v116 = (VoiceEntity_o *)v114;
    if ( !v114
      || (methodPtr_low = LOBYTE(VoiceEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v114 + 304LL) < (unsigned int)methodPtr_low)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v114 + 200LL) + 8 * methodPtr_low - 8) != VoiceEntity_TypeInfo )
    {
      sub_1BCAA3C(v114, v115);
    }
    if ( !Entity_40601672 )
      sub_1BCAA3C(v114, v115);
    v118 = *(int *)(v114 + 28);
    if ( (unsigned int)v118 >= Entity_40601672->max_length )
      sub_1BCAA44(v114, v115);
    v119 = Entity_40601672->m_Items[v118];
    if ( v119 )
    {
      v120 = *(_QWORD *)(v114 + 16);
      if ( !v120 )
        sub_1BCAA3C(0LL, v115);
      v121 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v120 + 360LL))(
                                  v120,
                                  *(_QWORD *)(*(_QWORD *)v120 + 368LL));
      v122 = System_Int32__ToString((int32_t)&v315, 0LL);
      v123 = System_String__Concat_62412480(v122, (System_String_o *)StringLiteral_16290/*"_"*/, v121, 0LL);
      VoiceList_40584836 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getVoiceList_40584836(
                                                                          v119,
                                                                          v116->fields.svtVoiceType,
                                                                          v123,
                                                                          disableCondTypeList,
                                                                          v105,
                                                                          0LL);
      if ( VoiceList_40584836 )
      {
        if ( VoiceList_40584836->fields._size >= 1 )
        {
          if ( System_Collections_Generic_List_object___get_Item(
                 VoiceList_40584836,
                 0,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__) )
          {
            ServantVoiceEntity__getOverwriteData(
              v119,
              v116->fields.svtVoiceType,
              v123,
              &conds,
              &isInvalidVoiceList,
              &overwriteName,
              &overwriteNameDefault,
              (int32_t *)&closedType + 1,
              v308[0],
              0LL);
            if ( !isInvalidVoiceList )
            {
              LODWORD(closedType) = v116->fields.closedType;
              condType = v116->fields.condType;
              if ( condType <= 54 )
              {
                if ( condType <= 21 )
                {
                  v138 = 1;
                  v139 = 1;
                  switch ( condType )
                  {
                    case 0:
                      v140 = v305;
                      if ( !v305 )
                        sub_1BCAA3C(0LL, v126);
                      goto LABEL_229;
                    case 1:
                      v135 = v315;
                      condValue = v116->fields.condValue;
                      if ( !CondType_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v126);
                      IsQuestClear_38310172 = CondType__IsQuestClear_38310172(condValue, -1, 0, 0LL);
                      if ( !v305 )
                        sub_1BCAA3C(IsQuestClear_38310172, v191);
                      goto LABEL_158;
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
                      goto LABEL_238;
                    case 6:
                      if ( !*v302 )
                        sub_1BCAA3C(v125, v126);
                      if ( !v305 )
                        sub_1BCAA3C(0LL, v126);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   v305,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v121,
                                   v315,
                                   (*v302)->fields.maxLv >= v116->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_237;
                    case 7:
                      if ( !*v302 )
                        sub_1BCAA3C(v125, v126);
                      if ( !v305 )
                        sub_1BCAA3C(0LL, v126);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   v305,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v121,
                                   v315,
                                   (*v302)->fields.maxLimitCount >= v116->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_237;
                    case 8:
                      if ( !*v302 )
                        sub_1BCAA3C(0LL, v126);
                      v135 = v315;
                      IsQuestClear_38310172 = UserServantCollectionEntity__IsGet(*v302, 0LL);
                      if ( !v305 )
                        sub_1BCAA3C(IsQuestClear_38310172, v185);
                      goto LABEL_158;
                    case 9:
                      v186 = *v302;
                      if ( !*v302 )
                        sub_1BCAA3C(v125, v126);
                      v187 = *(_QWORD *)&v186->fields.friendshipRank.fields.currentCryptoKey;
                      v188 = *(_QWORD *)&v186->fields.friendshipRank.fields.fakeValue;
                      voicePrefixa = v315;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v126);
                      *(_QWORD *)&v318.fields.currentCryptoKey = v187;
                      *(_QWORD *)&v318.fields.fakeValue = v188;
                      v144 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v318, 0LL);
                      if ( !v305 )
                        sub_1BCAA3C(v144, v189);
                      goto LABEL_70;
                    case 17:
                      if ( !*v302 )
                        sub_1BCAA3C(0LL, v126);
                      v135 = v315;
                      IsQuestClear_38310172 = UserServantCollectionEntity__IsPlayed(*v302, v116->fields.condValue, 0LL);
                      if ( !v305 )
                        sub_1BCAA3C(IsQuestClear_38310172, v192);
                      goto LABEL_158;
                    case 18:
                      if ( !*v302 )
                        sub_1BCAA3C(0LL, v126);
                      v135 = v315;
                      IsQuestClear_38310172 = UserServantCollectionEntity__IsLimitCountMax(*v302, 0LL);
                      if ( !v305 )
                        sub_1BCAA3C(IsQuestClear_38310172, v193);
                      goto LABEL_158;
                    case 19:
                      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
                      if ( !SelfUserGame )
                        sub_1BCAA3C(0LL, v212);
                      if ( SelfUserGame->fields.birthDay < 1 )
                        goto LABEL_234;
                      voicePrefixe = SelfUserGame->fields.birthDay;
                      v215 = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v212);
                        v215 = BalanceConfig_TypeInfo;
                      }
                      ServantIdsBirthdayBeforeValentine = v215->static_fields->ServantIdsBirthdayBeforeValentine;
                      v217 = (System_Func_int__bool__o *)v300->klass;
                      if ( !v300->klass )
                      {
                        v217 = (System_Func_int__bool__o *)sub_1BCAA2C(
                                                             System_Func_int__bool__TypeInfo,
                                                             v212,
                                                             v213,
                                                             v214);
                        System_Func_int__bool____ctor(
                          v217,
                          (Il2CppObject *)v85,
                          Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__,
                          0LL);
                        v300->klass = (PartyOrganizationUtility_c *)v217;
                        sub_1BCA784(v300, (int64_t)v217, v218, v219, v220, v221, v222, v223);
                      }
                      v224 = (BalanceConfig_c *)BasicHelper__Any_int__49273364(
                                                  ServantIdsBirthdayBeforeValentine,
                                                  (System_Func_T__bool__o *)v217,
                                                  (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
                      if ( ((unsigned __int8)v224 & 1) != 0 )
                      {
                        v224 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v225);
                          v224 = BalanceConfig_TypeInfo;
                        }
                        VtReleaseAt = v224->static_fields->VtReleaseAt;
                        if ( VtReleaseAt >= 1 )
                        {
                          if ( !*v302 )
                            sub_1BCAA3C(v224, v225);
                          createdAt = (*v302)->fields.createdAt;
                          if ( !v224->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v224, v225);
                            VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
                          }
                          if ( createdAt < VtReleaseAt )
                            goto LABEL_214;
                        }
                      }
                      if ( !*v302 )
                        sub_1BCAA3C(v224, v225);
                      isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                                (VoiceMaster_o *)v224,
                                                voicePrefixe,
                                                (*v302)->fields.createdAt,
                                                v226);
                      if ( !DataManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v229);
                      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
                      if ( !Master_object )
                        sub_1BCAA3C(0LL, v232);
                      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       (const MethodInfo_31B30A8 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
                      if ( isEnableBirthdayVoice )
                      {
                        v235 = 1LL;
                      }
                      else
                      {
                        if ( !SingleEntity )
                          sub_1BCAA3C(0LL, v212);
                        v212 = (int64_t)SingleEntity[1].klass;
                        if ( v212 < 1 )
                        {
LABEL_234:
                          v235 = 0LL;
                        }
                        else
                        {
                          if ( !*v302 )
                            sub_1BCAA3C(SingleEntity, v212);
                          v235 = VoiceMaster__isEnableBirthdayVoice(
                                   (VoiceMaster_o *)SingleEntity,
                                   v212,
                                   (*v302)->fields.createdAt,
                                   v234);
                        }
                      }
                      if ( !v305 )
                        sub_1BCAA3C(v235, v212);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   v305,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v121,
                                   v315,
                                   v235,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_237;
                    case 20:
                      v194 = conds;
                      if ( conds && (v195 = *(_QWORD *)&conds->max_length) != 0 )
                      {
                        if ( (int)v195 >= 1 )
                        {
                          v196 = 0LL;
                          v197 = 0;
                          v198 = 0;
                          v199 = 0;
                          v293 = conds;
                          voicePrefixd = conds->m_Items;
                          do
                          {
                            if ( (unsigned int)v196 >= (unsigned int)v195 )
                              sub_1BCAA44(v125, v126);
                            v200 = voicePrefixd[v196];
                            if ( !v200 )
                              sub_1BCAA3C(v125, v126);
                            v201 = v200->fields.condType;
                            if ( v201 <= 0x13 && ((1 << v201) & 0xCE000) != 0 && v200->fields.value >= 1 )
                            {
                              if ( !DataManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v126);
                              v202 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
                              if ( !v202 )
                                sub_1BCAA3C(0LL, v203);
                              v204 = DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v202,
                                       &entity,
                                       v200->fields.value,
                                       (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
                              if ( !v204 )
                                goto LABEL_174;
                              if ( !entity )
                                sub_1BCAA3C(v204, v205);
                              if ( Time >= (__int64)entity[5].monitor )
                              {
                                if ( !v305 )
                                  sub_1BCAA3C(0LL, v205);
                                v206 = entity[6].klass;
                                v125 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                          v305,
                                                          (int32_t *)&closedType,
                                                          svtVoiceId,
                                                          v121,
                                                          v315,
                                                          Time >= (__int64)v206,
                                                          svtId,
                                                          &overwriteNameDefault,
                                                          isMateriala);
                                if ( (v301 != 0) | v306 & 1 )
                                {
                                  v194 = v293;
                                  v207 = 0;
                                }
                                else
                                {
                                  v289 = (unsigned int)v125;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v126);
                                  if ( !byte_4B17339 )
                                  {
                                    sub_1BCA7E0(&NetworkManager_TypeInfo, v126, v127);
                                    byte_4B17339 = 1;
                                  }
                                  v208 = NetworkManager_TypeInfo;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v126);
                                    v208 = NetworkManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1BCAA3C(v208, v126);
                                  static_fields = v208->static_fields;
                                  v194 = v293;
                                  v125 = (DataManager_c *)v289;
                                  v207 = static_fields->serverTime < (__int64)entity[6].klass;
                                }
                                v197 = (unsigned __int8)v125 & 1;
                                if ( v207 && Time >= (__int64)v206 )
                                {
                                  v210 = (unsigned __int8)v125 & 1;
                                  if ( !SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
                                    sub_1BCAA3C(0LL, v126);
                                  if ( !byte_4B1394B )
                                  {
                                    sub_1BCA7E0(&DataManager_TypeInfo, v126, v127);
                                    byte_4B1394B = 1;
                                  }
                                  v125 = DataManager_TypeInfo;
                                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v126);
                                    v125 = DataManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1BCAA3C(v125, v126);
                                  v194 = v293;
                                  v199 = 1;
                                  v197 = v210;
                                  v306 |= v125->static_fields->dateVersion < (__int64)entity[6].klass;
                                }
                                else
                                {
                                  v199 = 1;
                                }
                                v198 = 1;
                              }
                              else
                              {
LABEL_174:
                                if ( !v305 )
                                  sub_1BCAA3C(0LL, v205);
                                v125 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                          v305,
                                                          (int32_t *)&closedType,
                                                          svtVoiceId,
                                                          v121,
                                                          v315,
                                                          0,
                                                          svtId,
                                                          &overwriteNameDefault,
                                                          isMateriala);
                                v194 = v293;
                                v198 = (unsigned __int8)v125 & 1;
                                v199 = 1;
                                v197 = (unsigned __int8)v125 & 1;
                              }
                            }
                            LODWORD(v195) = v194->max_length;
                            ++v196;
                          }
                          while ( (int)v196 < (int)v195 );
                          if ( (v199 & 1) != 0 )
                          {
                            v138 = v198 & 1;
                            v139 = v197 & 1;
                            goto LABEL_238;
                          }
                        }
                        v140 = v305;
                        if ( !v305 )
                          sub_1BCAA3C(0LL, v126);
                      }
                      else
                      {
                        v140 = v305;
                        if ( !v305 )
                          sub_1BCAA3C(0LL, v126);
                      }
                      return result;
                    case 21:
                      if ( !*v302 )
                        sub_1BCAA3C(0LL, v126);
                      v135 = v315;
                      IsQuestClear_38310172 = UserServantCollectionEntity__IsFinded(*v302, 0LL);
                      if ( !v305 )
                        sub_1BCAA3C(IsQuestClear_38310172, v184);
                      goto LABEL_158;
                    default:
                      goto LABEL_215;
                  }
                  goto LABEL_229;
                }
                if ( condType != 31 )
                {
                  if ( condType == 54 )
                  {
                    if ( !*v302 )
                      sub_1BCAA3C(0LL, v126);
                    v135 = v315;
                    IsQuestClear_38310172 = UserServantCollectionEntity__IsCostumeGet(*v302, limitCount, 0LL);
                    if ( !v305 )
                      sub_1BCAA3C(IsQuestClear_38310172, v137);
LABEL_158:
                    IsEnable = VoiceCondMaster__IsEnable(
                                 v305,
                                 (int32_t *)&closedType,
                                 svtVoiceId,
                                 v121,
                                 v135,
                                 IsQuestClear_38310172,
                                 svtId,
                                 &overwriteNameDefault,
                                 isMateriala);
                    goto LABEL_237;
                  }
LABEL_214:
                  v138 = 1;
LABEL_215:
                  v139 = 1;
                  goto LABEL_238;
                }
                v146 = conds;
                if ( !conds || (v147 = *(_QWORD *)&conds->max_length) == 0 )
                {
                  v140 = v305;
                  if ( !v305 )
                    sub_1BCAA3C(0LL, v126);
                  goto LABEL_229;
                }
                if ( (int)v147 < 1 )
                  goto LABEL_218;
                v148 = 0LL;
                v149 = 0;
                v150 = 0;
                v151 = 0;
                v291 = conds;
                voicePrefixb = conds->m_Items;
                while ( 2 )
                {
                  if ( (unsigned int)v148 >= (unsigned int)v147 )
                    sub_1BCAA44(v125, v126);
                  v152 = voicePrefixb[v148];
                  if ( !v152 )
                    sub_1BCAA3C(v125, v126);
                  v153 = v152->fields.condType;
                  if ( v153 <= 0x13 )
                  {
                    if ( ((1 << v153) & 0xCE000) != 0 )
                    {
                      if ( v152->fields.value >= 1 )
                      {
                        v154 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !v154 )
                          sub_1BCAA3C(0LL, v155);
                        v156 = DataManager__GetMasterData_object_(
                                 (DataManager_o *)v154,
                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
                        if ( !v156 )
                          sub_1BCAA3C(0LL, v157);
                        v158 = DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v156,
                                 v152->fields.value,
                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                        if ( !v158 || Time < (__int64)v158[5].monitor )
                        {
                          v160 = v305;
                          if ( !v305 )
                            sub_1BCAA3C(0LL, v159);
                          goto LABEL_85;
                        }
                        if ( !v305 )
                          sub_1BCAA3C(v158, v159);
                        v125 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                  v305,
                                                  (int32_t *)&closedType,
                                                  svtVoiceId,
                                                  v121,
                                                  v315,
                                                  Time >= (__int64)v158[6].klass,
                                                  svtId,
                                                  &overwriteNameDefault,
                                                  isMateriala);
LABEL_97:
                        v149 = (unsigned __int8)v125 & 1;
                        v151 = 1;
                        v150 = 1;
                        goto LABEL_98;
                      }
                    }
                    else if ( v153 == 16 && v152->fields.value >= 1 )
                    {
                      v161 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !v161 )
                        sub_1BCAA3C(0LL, v162);
                      v163 = DataManager__GetMasterData_object_(
                               (DataManager_o *)v161,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
                      if ( !v163 )
                        sub_1BCAA3C(0LL, v164);
                      v165 = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v163,
                               (Il2CppObject **)&v308[1],
                               v152->fields.value,
                               (const MethodInfo_31B2E94 *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
                      if ( v165 )
                      {
                        if ( !*(_QWORD *)&v308[1] )
                          sub_1BCAA3C(v165, v166);
                        if ( Time >= *(_QWORD *)(*(_QWORD *)&v308[1] + 40LL) )
                        {
                          if ( !v305 )
                            sub_1BCAA3C(0LL, v166);
                          v125 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                    v305,
                                                    (int32_t *)&closedType,
                                                    svtVoiceId,
                                                    v121,
                                                    v315,
                                                    1,
                                                    svtId,
                                                    &overwriteNameDefault,
                                                    isMateriala);
                          goto LABEL_97;
                        }
                      }
                      v160 = v305;
                      if ( !v305 )
                        sub_1BCAA3C(0LL, v166);
LABEL_85:
                      v125 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                v160,
                                                (int32_t *)&closedType,
                                                svtVoiceId,
                                                v121,
                                                v315,
                                                0,
                                                svtId,
                                                &overwriteNameDefault,
                                                isMateriala);
                      v150 = (unsigned __int8)v125 & 1;
                      v151 = 1;
                      v149 = (unsigned __int8)v125 & 1;
LABEL_98:
                      v146 = v291;
                    }
                  }
                  LODWORD(v147) = v146->max_length;
                  if ( (int)++v148 >= (int)v147 )
                  {
                    if ( (v151 & 1) != 0 )
                    {
                      v138 = v150 & 1;
                      v139 = v149 & 1;
                      goto LABEL_238;
                    }
LABEL_218:
                    v140 = v305;
                    if ( !v305 )
                      sub_1BCAA3C(0LL, v126);
LABEL_229:
                    v138 = 1;
                    v139 = VoiceCondMaster__IsEnable(
                             v140,
                             (int32_t *)&closedType,
                             svtVoiceId,
                             v121,
                             v315,
                             1,
                             svtId,
                             &overwriteNameDefault,
                             isMateriala);
                    goto LABEL_238;
                  }
                  continue;
                }
              }
              if ( condType > 92 )
              {
                if ( condType == 98 )
                {
                  v141 = *v302;
                  if ( !*v302 )
                    sub_1BCAA3C(v125, v126);
                  v142 = *(_QWORD *)&v141->fields.friendshipRank.fields.currentCryptoKey;
                  v143 = *(_QWORD *)&v141->fields.friendshipRank.fields.fakeValue;
                  voicePrefixa = v315;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v126);
                  *(_QWORD *)&v317.fields.currentCryptoKey = v142;
                  *(_QWORD *)&v317.fields.fakeValue = v143;
                  v144 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v317, 0LL);
                  if ( !v305 )
                    sub_1BCAA3C(v144, v145);
LABEL_70:
                  IsEnable = VoiceCondMaster__IsEnable(
                               v305,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v121,
                               voicePrefixa,
                               (int)v144 >= v116->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_237;
                }
                if ( condType == 99 )
                {
                  v129 = *v302;
                  if ( !*v302 )
                    sub_1BCAA3C(v125, v126);
                  v130 = *(_QWORD *)&v129->fields.friendshipRank.fields.currentCryptoKey;
                  v131 = *(_QWORD *)&v129->fields.friendshipRank.fields.fakeValue;
                  voicePrefix = v315;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v126);
                  *(_QWORD *)&v316.fields.currentCryptoKey = v130;
                  *(_QWORD *)&v316.fields.fakeValue = v131;
                  v132 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v316, 0LL);
                  if ( !v305 )
                    sub_1BCAA3C(v132, v133);
                  IsEnable = VoiceCondMaster__IsEnable(
                               v305,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v121,
                               voicePrefix,
                               (int)v132 <= v116->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
LABEL_237:
                  v139 = IsEnable;
                  v138 = 1;
                  goto LABEL_238;
                }
                goto LABEL_214;
              }
              if ( condType != 56 )
              {
                if ( condType == 92 )
                {
                  if ( !v305 )
                    sub_1BCAA3C(0LL, v126);
                  IsEnable = VoiceCondMaster__IsEnable(
                               v305,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v121,
                               v315,
                               0,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_237;
                }
                goto LABEL_214;
              }
              v167 = conds;
              if ( !conds || (v168 = *(_QWORD *)&conds->max_length) == 0 )
              {
                v140 = v305;
                if ( !v305 )
                  sub_1BCAA3C(0LL, v126);
                goto LABEL_229;
              }
              if ( (int)v168 < 1 )
                goto LABEL_130;
              v169 = 0LL;
              v170 = 0;
              v171 = 0;
              v172 = 0;
              v292 = conds;
              voicePrefixc = conds->m_Items;
              do
              {
                if ( (unsigned int)v169 >= (unsigned int)v168 )
                  sub_1BCAA44(v125, v126);
                v173 = voicePrefixc[v169];
                if ( !v173 )
                  sub_1BCAA3C(v125, v126);
                v174 = v173->fields.condType;
                if ( v174 <= 0x13 && ((1 << v174) & 0xCE000) != 0 && v173->fields.value >= 1 )
                {
                  v175 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v175 )
                    sub_1BCAA3C(0LL, v176);
                  v177 = DataManager__GetMasterData_object_(
                           (DataManager_o *)v175,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v177 )
                    sub_1BCAA3C(0LL, v178);
                  v179 = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v177,
                           v173->fields.value,
                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v179 && Time >= (__int64)v179[5].monitor )
                  {
                    value = v173->fields.value;
                    v290 = v315;
                    if ( !CondType_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v180);
                    v182 = CondType__IsServantGetBeforeEventEnd(svtId, value, 0LL);
                    if ( !v305 )
                      sub_1BCAA3C(v182, v183);
                    v125 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                              v305,
                                              (int32_t *)&closedType,
                                              svtVoiceId,
                                              v121,
                                              v290,
                                              v182,
                                              svtId,
                                              &overwriteNameDefault,
                                              isMateriala);
                    v170 = (unsigned __int8)v125 & 1;
                    v172 = 1;
                    v171 = 1;
                  }
                  else
                  {
                    if ( !v305 )
                      sub_1BCAA3C(0LL, v180);
                    v125 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                              v305,
                                              (int32_t *)&closedType,
                                              svtVoiceId,
                                              v121,
                                              v315,
                                              0,
                                              svtId,
                                              &overwriteNameDefault,
                                              isMateriala);
                    v171 = (unsigned __int8)v125 & 1;
                    v172 = 1;
                    v170 = (unsigned __int8)v125 & 1;
                  }
                  v167 = v292;
                }
                LODWORD(v168) = v167->max_length;
                ++v169;
              }
              while ( (int)v169 < (int)v168 );
              if ( (v172 & 1) == 0 )
              {
LABEL_130:
                v140 = v305;
                if ( !v305 )
                  sub_1BCAA3C(0LL, v126);
                goto LABEL_229;
              }
              v138 = v171 & 1;
              v139 = v170 & 1;
LABEL_238:
              v239 = v139 & VoiceEntity__IsCondEnable(v116, svtId, v127);
              if ( (v138 & (v239 | ((_DWORD)closedType != 2)) & 1) != 0 )
              {
                v240 = sub_1BCAA2C(VoiceInfo_TypeInfo, v236, v237, v238);
                VoiceInfo___ctor((VoiceInfo_o *)v240, 0LL);
                if ( !v240 )
                  sub_1BCAA3C(v241, v242);
                *(_QWORD *)(v240 + 16) = v116;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)(v240 + 16),
                  (int64_t)v116,
                  v243,
                  v244,
                  v245,
                  v246,
                  v247,
                  v248);
                *(_BYTE *)(v240 + 24) = v239 & 1;
                v249 = overwriteName;
                *(_QWORD *)(v240 + 32) = overwriteName;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)(v240 + 32),
                  (int64_t)v249,
                  v250,
                  v251,
                  v252,
                  v253,
                  v254,
                  v255);
                v256 = overwriteNameDefault;
                *(_QWORD *)(v240 + 40) = overwriteNameDefault;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)(v240 + 40),
                  (int64_t)v256,
                  v257,
                  v258,
                  v259,
                  v260,
                  v261,
                  v262);
                v263 = v315;
                *(_DWORD *)(v240 + 48) = HIDWORD(closedType);
                *(_DWORD *)(v240 + 52) = v263;
                v264 = conds;
                *(_QWORD *)(v240 + 56) = conds;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)(v240 + 56),
                  (int64_t)v264,
                  v265,
                  v266,
                  v267,
                  v268,
                  v269,
                  v270);
                if ( !v307 )
                  sub_1BCAA3C(v271, v272);
                items = v307->fields._items;
                v280 = Method_System_Collections_Generic_List_VoiceInfo__Add__;
                ++v307->fields._version;
                if ( !items )
                  sub_1BCAA3C(v271, v272);
                size = v307->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v307,
                    (Il2CppObject *)v240,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v280[4] + 192LL) + 112LL));
                }
                else
                {
                  v282 = &items->obj.klass + size;
                  v307->fields._size = size + 1;
                  v282[4] = (Il2CppClass *)v240;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v282 + 4), v240, v273, v274, v275, v276, v277, v278);
                }
              }
            }
          }
        }
      }
    }
  }
  v283 = Enumerator->klass;
  v284 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v285 = &v283->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v285 - 1) != System_IDisposable_TypeInfo )
    {
      --v284;
      v285 += 4;
      if ( !v284 )
        goto LABEL_249;
    }
    v286 = (__int64)&v283->vtable[*v285].method;
  }
  else
  {
LABEL_249:
    v286 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v286)(
               Enumerator,
               *(_QWORD *)(v286 + 8));
  if ( (v306 & 1) != 0 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_260;
    NetworkManager__GoToTitleDialog((NetworkManager_o *)Instance, 0LL);
  }
  if ( !v307 )
LABEL_260:
    sub_1BCAA3C(Instance, v87);
  return (VoiceInfo_array *)System_Collections_Generic_List_object___ToArray(
                              v307,
                              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall VoiceMaster__getFirstPlayPriority(
        VoiceMaster_o *this,
        int32_t svtId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  int32_t v17; // w21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  _QWORD *v29; // x0
  __int64 v30; // x1
  _QWORD *v31; // x21
  __int64 methodPtr_low; // x10
  __int64 v33; // x0
  System_String_o *v34; // x1
  System_String_o *v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4B17135 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&svtId,
      labelName);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&VoiceEntity_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v14, v15);
    byte_4B17135 = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0LL) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v16);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_18;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_18:
      v28 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v29 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                      Enumerator,
                      *(_QWORD *)(v28 + 8));
    v31 = v29;
    if ( !v29
      || (methodPtr_low = LOBYTE(VoiceEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*v29 + 304LL) < (unsigned int)methodPtr_low)
      || *(VoiceEntity_c **)(*(_QWORD *)(*v29 + 200LL) + 8 * methodPtr_low - 8) != VoiceEntity_TypeInfo )
    {
      sub_1BCAA3C(v29, v30);
    }
    v33 = v29[2];
    if ( !v33 )
      sub_1BCAA3C(0LL, v30);
    v34 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 360LL))(
                               v33,
                               *(_QWORD *)(*(_QWORD *)v33 + 368LL));
    v35 = System_String__Concat_62401220((System_String_o *)StringLiteral_16290/*"_"*/, v34, 0LL);
    if ( !labelName )
      sub_1BCAA3C(v35, v35);
    if ( System_String__EndsWith(labelName, v35, 0LL) )
    {
      v17 = *((_DWORD *)v31 + 15);
      goto LABEL_28;
    }
  }
  v17 = 0;
LABEL_28:
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_32;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_32:
    v39 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return v17;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  int32_t v26; // w20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v28; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  _QWORD *v38; // x0
  __int64 v39; // x1
  _DWORD *v40; // x23
  __int64 methodPtr_low; // x10
  __int64 v42; // x0
  System_String_o *v43; // x1
  System_String_o *v44; // x0
  Il2CppObject *Instance; // x0
  __int64 v46; // x1
  __int64 v47; // x1
  Il2CppObject *MasterData_object; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v51; // x1
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0

  if ( (byte_4B17134 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&svtId,
      labelName);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&VoiceEntity_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v23, v24);
    byte_4B17134 = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0LL) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v25);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v28);
  do
  {
    klass = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        p_offset += 4;
        if ( !v31 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      goto LABEL_35;
    v34 = Enumerator->klass;
    v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v36 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_18;
      }
      v37 = (__int64)&v34->vtable[*v36].method;
    }
    else
    {
LABEL_18:
      v37 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v38 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                      Enumerator,
                      *(_QWORD *)(v37 + 8));
    v40 = v38;
    if ( !v38
      || (methodPtr_low = LOBYTE(VoiceEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*v38 + 304LL) < (unsigned int)methodPtr_low)
      || *(VoiceEntity_c **)(*(_QWORD *)(*v38 + 200LL) + 8 * methodPtr_low - 8) != VoiceEntity_TypeInfo )
    {
      sub_1BCAA3C(v38, v39);
    }
    v42 = v38[2];
    if ( !v42 )
      sub_1BCAA3C(0LL, v39);
    v43 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v42 + 360LL))(
                               v42,
                               *(_QWORD *)(*(_QWORD *)v42 + 368LL));
    v44 = System_String__Concat_62401220((System_String_o *)StringLiteral_16290/*"_"*/, v43, 0LL);
    if ( !labelName )
      sub_1BCAA3C(v44, v44);
  }
  while ( !System_String__EndsWith(labelName, v44, 0LL) );
  if ( v40[12] != 17 && v40[7] != 1 )
  {
LABEL_35:
    v26 = 0;
    goto LABEL_36;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v46);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v47);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    sub_1BCAA3C(UserId, UserId);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       UserId,
                       svtId,
                       0LL);
  v51 = (unsigned int)v40[14];
  if ( isUpdate )
  {
    if ( !EntityDefinitely )
      sub_1BCAA3C(0LL, v51);
    if ( !UserServantCollectionEntity__SetPlayed(EntityDefinitely, v51, 0LL) )
      goto LABEL_35;
  }
  else
  {
    if ( !EntityDefinitely )
      sub_1BCAA3C(0LL, v51);
    if ( UserServantCollectionEntity__IsPlayed(EntityDefinitely, v51, 0LL) )
      goto LABEL_35;
  }
  v26 = v40[14];
LABEL_36:
  v52 = Enumerator->klass;
  v53 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v54 = &v52->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      --v53;
      v54 += 4;
      if ( !v53 )
        goto LABEL_40;
    }
    v55 = (__int64)&v52->vtable[*v54].method;
  }
  else
  {
LABEL_40:
    v55 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(Enumerator, *(_QWORD *)(v55 + 8));
  return v26;
}


bool __fastcall VoiceMaster__isEnableBirthdayVoice(
        VoiceMaster_o *this,
        int64_t userBirthDay,
        int64_t createDay,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  int32_t Year; // w20
  int32_t Month; // w21
  int32_t Day; // w3
  __int64 v12; // x1
  int32_t v13; // w20
  int32_t v14; // w21
  int32_t v15; // w3
  __int64 v16; // x1
  int64_t ServerTime; // x20
  int64_t Time_39269384; // x21
  uint64_t v20; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v21; // [xsp+10h] [xbp-50h]
  System_DateTime_o dateTime; // [xsp+18h] [xbp-48h]
  uint64_t v23; // [xsp+20h] [xbp-40h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-38h] BYREF
  System_DateTime_o v25; // 0:x0.8
  System_DateTime_o v26; // 0:x0.8
  System_DateTime_o v27; // 0:x0.8
  System_DateTime_o v28; // 0:x0.8
  System_DateTime_o v29; // 0:x0.8
  System_DateTime_o v30; // 0:x0.8
  System_DateTime_o v31; // 0:x0.8
  System_DateTime_o v32; // 0:x0.8
  System_DateTime_o v33; // 0:x0.8
  System_DateTime_o v34; // 0:x0.8

  if ( (byte_4B17132 & 1) == 0 )
  {
    sub_1BCA7E0(&System_DateTime_TypeInfo, userBirthDay, createDay);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    byte_4B17132 = 1;
  }
  v21.fields._dateData = 0LL;
  dateTime.fields._dateData = 0LL;
  if ( userBirthDay < 1 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, userBirthDay);
  dateData = NetworkManager__getServerDateTime_39270492(createDay, 0LL).fields._dateData;
  v23 = NetworkManager__getDateTime_39270164(userBirthDay, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v8);
  v25.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v25, 0LL);
  v26.fields._dateData = (uint64_t)&v23;
  Month = System_DateTime__get_Month(v26, 0LL);
  v27.fields._dateData = (uint64_t)&v23;
  Day = System_DateTime__get_Day(v27, 0LL);
  v20 = 0LL;
  v28.fields._dateData = (uint64_t)&v20;
  System_DateTime___ctor_63079428(v28, Year, Month, Day, 0LL);
  dateTime.fields._dateData = v20;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v12);
  v29.fields._dateData = (uint64_t)&dateData;
  v13 = System_DateTime__get_Year(v29, 0LL);
  v30.fields._dateData = (uint64_t)&v23;
  v14 = System_DateTime__get_Month(v30, 0LL);
  v31.fields._dateData = (uint64_t)&v23;
  v15 = System_DateTime__get_Day(v31, 0LL);
  v20 = 0LL;
  v32.fields._dateData = (uint64_t)&v20;
  System_DateTime___ctor_63079428(v32, v13 + 1, v14, v15, 0LL);
  v21.fields._dateData = v20;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
  ServerTime = NetworkManager__getServerTime(0LL);
  v33.fields._dateData = dateTime.fields._dateData;
  Time_39269384 = NetworkManager__getTime_39269384(v33, 0LL);
  v34.fields._dateData = v21.fields._dateData;
  return (Time_39269384 <= ServerTime && Time_39269384 + 86400 >= createDay) | (NetworkManager__getTime_39269384(
                                                                                  v34,
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
  if ( (byte_4B17136 & 1) == 0 )
  {
    this = (VoiceMaster___c__DisplayClass2_0_o *)sub_1BCA7E0(
                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                   *(_QWORD *)&id,
                                                   method);
    byte_4B17136 = 1;
  }
  userStvCollectionEntity = v4->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_1BCAA3C(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&id);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v9, 0LL) == id;
}