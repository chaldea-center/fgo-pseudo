void VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC850E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
    byte_4CC850E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    136,
    (const MethodInfo_340B614 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
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
  Il2CppObject *v15; // x22
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v19; // x23
  Il2CppObject *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  ServantVoiceEntity_array *Entity_43102584; // x29
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  __int64 v29; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v31; // w26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  VoiceEntity_o *v42; // x24
  __int64 naturalAligment; // x10
  __int64 v44; // x8
  ServantVoiceEntity_o *v45; // x27
  __int64 v46; // x0
  System_String_o *v47; // x19
  System_String_o *v48; // x0
  System_String_o *v49; // x22
  System_Collections_Generic_List_object__o *VoiceList_43085872; // x0
  DataManager_c *v51; // x0
  __int64 v52; // x1
  const MethodInfo *v53; // x2
  int condType; // w8
  UserServantCollectionEntity_o *v55; // x8
  __int64 v56; // x27
  __int64 v57; // x22
  __int64 v58; // x0
  __int64 v59; // x1
  _BOOL4 IsEnable; // w0
  int32_t v61; // w22
  _BOOL8 IsQuestClear_40596552; // x0
  __int64 v63; // x1
  int v64; // w22
  int v65; // w27
  VoiceCondMaster_o *v66; // x0
  UserServantCollectionEntity_o *v67; // x8
  __int64 v68; // x27
  __int64 v69; // x22
  __int64 v70; // x0
  __int64 v71; // x1
  ServantVoiceCond_array *v72; // x14
  il2cpp_array_size_t v73; // x11
  __int64 v74; // x27
  char v75; // w9
  char v76; // w10
  char v77; // w8
  ServantVoiceCond_o *v78; // x22
  unsigned int v79; // w11
  Il2CppObject *v80; // x0
  __int64 v81; // x1
  Il2CppObject *v82; // x0
  __int64 v83; // x1
  Il2CppObject *v84; // x0
  __int64 v85; // x1
  VoiceCondMaster_o *v86; // x0
  Il2CppObject *v87; // x0
  __int64 v88; // x1
  Il2CppObject *v89; // x0
  __int64 v90; // x1
  _BOOL8 v91; // x0
  __int64 v92; // x1
  ServantVoiceCond_array *v93; // x13
  il2cpp_array_size_t v94; // x11
  __int64 v95; // x22
  char v96; // w8
  char v97; // w10
  char v98; // w9
  ServantVoiceCond_o *v99; // x27
  unsigned int v100; // w11
  Il2CppObject *v101; // x0
  __int64 v102; // x1
  Il2CppObject *v103; // x0
  __int64 v104; // x1
  Il2CppObject *v105; // x0
  __int64 v106; // x1
  int32_t value; // w27
  _BOOL8 v108; // x0
  __int64 v109; // x1
  __int64 v110; // x1
  __int64 v111; // x1
  UserServantCollectionEntity_o *v112; // x8
  __int64 v113; // x27
  __int64 v114; // x22
  __int64 v115; // x1
  int32_t condValue; // w27
  __int64 v117; // x1
  __int64 v118; // x1
  __int64 v119; // x1
  ServantVoiceCond_array *v120; // x12
  il2cpp_array_size_t max_length; // x10
  __int64 v122; // x22
  char v123; // w13
  char v124; // w9
  char v125; // w8
  ServantVoiceCond_o *v126; // x27
  unsigned int v127; // w10
  Il2CppObject *v128; // x0
  __int64 v129; // x1
  _BOOL8 v130; // x0
  __int64 v131; // x1
  Il2CppClass *v132; // x27
  bool v133; // w8
  NetworkManager_c *v134; // x0
  struct NetworkManager_StaticFields *static_fields; // x9
  char v136; // w27
  UserGameEntity_o *SelfUserGame; // x0
  int64_t v138; // x1
  BalanceConfig_c *v139; // x0
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x22
  System_Func_int__bool__o *v141; // x27
  int32_t v142; // w2
  int32_t v143; // w3
  System_String_o *v144; // x4
  int32_t v145; // w5
  int64_t v146; // x6
  System_String_o *v147; // x7
  BalanceConfig_c *v148; // x0
  __int64 v149; // x1
  const MethodInfo *v150; // x3
  int64_t VtReleaseAt; // x8
  int64_t createdAt; // x22
  bool isEnableBirthdayVoice; // w22
  Il2CppObject *Master_object; // x0
  __int64 v155; // x1
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v157; // x3
  _BOOL8 v158; // x0
  int v159; // w27
  __int64 v160; // x19
  __int64 v161; // x0
  __int64 v162; // x1
  int32_t v163; // w2
  int32_t v164; // w3
  System_String_o *v165; // x4
  int32_t v166; // w5
  int64_t v167; // x6
  System_String_o *v168; // x7
  int32_t v169; // w1
  int32_t v170; // w2
  int32_t v171; // w3
  System_String_o *v172; // x4
  int32_t v173; // w5
  int64_t v174; // x6
  System_String_o *v175; // x7
  int32_t v176; // w1
  int32_t v177; // w2
  int32_t v178; // w3
  System_String_o *v179; // x4
  int32_t v180; // w5
  int64_t v181; // x6
  System_String_o *v182; // x7
  int32_t v183; // w8
  int32_t v184; // w1
  int32_t v185; // w2
  int32_t v186; // w3
  System_String_o *v187; // x4
  int32_t v188; // w5
  int64_t v189; // x6
  System_String_o *v190; // x7
  __int64 v191; // x0
  __int64 v192; // x1
  int32_t v193; // w2
  int32_t v194; // w3
  System_String_o *v195; // x4
  int32_t v196; // w5
  int64_t v197; // x6
  System_String_o *v198; // x7
  struct System_Object_array *items; // x8
  _QWORD *v200; // x9
  __int64 size; // x10
  Il2CppClass **v202; // x0
  System_Collections_Generic_IEnumerator_T__c *v203; // x8
  __int64 v204; // x9
  int32_t *v205; // x10
  __int64 v206; // x0
  VoiceInfo_array *result; // x0
  const MethodInfo *isMateriala; // [xsp+0h] [xbp-120h]
  unsigned int v209; // [xsp+18h] [xbp-108h]
  int32_t v210; // [xsp+1Ch] [xbp-104h]
  ServantVoiceCond_array *v211; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v212; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v213; // [xsp+20h] [xbp-100h]
  int32_t voicePrefix; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixa; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixb; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixc; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixd; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixe[2]; // [xsp+28h] [xbp-F8h]
  GrandQuestFolderBoardItem_o *p_monitor; // [xsp+30h] [xbp-F0h]
  int v221; // [xsp+38h] [xbp-E8h]
  UserServantCollectionEntity_o **v222; // [xsp+40h] [xbp-E0h]
  int64_t Time; // [xsp+48h] [xbp-D8h]
  int32_t svtVoiceId; // [xsp+54h] [xbp-CCh]
  char v225; // [xsp+64h] [xbp-BCh]
  System_Collections_Generic_List_object__o *v226; // [xsp+68h] [xbp-B8h]
  Il2CppObject *object; // [xsp+70h] [xbp-B0h]
  _DWORD v228[3]; // [xsp+7Ch] [xbp-A4h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-98h] BYREF
  int32_t overwritePriority[2]; // [xsp+90h] [xbp-90h] BYREF
  System_String_o *overwriteNameDefault; // [xsp+98h] [xbp-88h] BYREF
  System_String_o *overwriteName; // [xsp+A0h] [xbp-80h] BYREF
  bool isInvalidVoiceList; // [xsp+ACh] [xbp-74h] BYREF
  ServantVoiceCond_array *conds; // [xsp+B0h] [xbp-70h] BYREF
  int32_t v235; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v236; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v237; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v238; // 0:x0.16

  if ( (byte_4CC8510 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_BasicHelper_Any_int____78639760);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_VoiceCondMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_BeforeBirthDayMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
    sub_1C713B0(&System_Func_int__bool__TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_VoiceInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_VoiceInfo___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_VoiceInfo__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C713B0(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__);
    sub_1C713B0(&VoiceMaster___c__DisplayClass2_0_TypeInfo);
    sub_1C713B0(&VoiceEntity_TypeInfo);
    sub_1C713B0(&VoiceInfo_TypeInfo);
    sub_1C713B0(&StringLiteral_16109/*"_"*/);
    byte_4CC8510 = 1;
  }
  v235 = 0;
  conds = 0;
  isInvalidVoiceList = 0;
  overwriteNameDefault = 0;
  overwriteName = 0;
  entity = 0;
  *(_QWORD *)overwritePriority = 0;
  *(_QWORD *)&v228[1] = 0;
  v15 = (Il2CppObject *)sub_1C715FC(VoiceMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v15, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_264;
  v235 = ServantLimitAddMaster__getVoicePrefix((ServantLimitAddMaster_o *)Instance, changeSvtVoiceId, limitCount, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  object = v15;
  v20 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v20 )
    goto LABEL_264;
  Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                (UserServantCollectionMaster_o *)v20,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                svtId,
                                0);
  if ( !object )
    goto LABEL_264;
  object[1].klass = (Il2CppClass *)Instance;
  v222 = (UserServantCollectionEntity_o **)&object[1];
  sub_1C71354((GrandQuestFolderBoardItem_o *)&object[1], (int32_t)Instance, v21, v22, v23, v24, v25, v26);
  if ( !MasterData_object )
    goto LABEL_264;
  Entity_43102584 = ServantVoiceMaster__getEntity_43102584(
                      (ServantVoiceMaster_o *)MasterData_object,
                      changeSvtVoiceId,
                      limitCount,
                      0);
  Time = NetworkManager__getTime(0);
  v226 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v226,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_4CC27E9 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC27E9 = 1;
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
  v221 = *(unsigned __int8 *)(*(_QWORD *)&Instance[1].fields._DispLog + 144LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v29);
  v225 = 0;
  v31 = isCheckPlayCond;
  p_monitor = (GrandQuestFolderBoardItem_o *)&object[1].monitor;
  LOBYTE(v228[0]) = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v33 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v33;
        p_offset += 4;
        if ( !v33 )
          goto LABEL_28;
      }
      v35 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_28:
      v35 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
            Enumerator,
            *(_QWORD *)(v35 + 8))
        & 1) == 0 )
      break;
    v36 = Enumerator->klass;
    v37 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_VoiceEntity__c **)v38 - 1) != System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_35;
      }
      v39 = (__int64)&v36->vtable[*v38];
    }
    else
    {
LABEL_35:
      v39 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0);
    }
    v40 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
            Enumerator,
            *(_QWORD *)(v39 + 8));
    v42 = (VoiceEntity_o *)v40;
    if ( !v40
      || (naturalAligment = VoiceEntity_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)v40 + 304LL) < (unsigned int)naturalAligment)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v40 + 200LL) + 8 * naturalAligment - 8) != VoiceEntity_TypeInfo )
    {
      sub_1C71608(v40, v41);
    }
    if ( !Entity_43102584 )
      sub_1C71608(v40, v41);
    v44 = *(int *)(v40 + 28);
    if ( (unsigned int)v44 >= LODWORD(Entity_43102584->max_length) )
      sub_1C71610(v40);
    v45 = Entity_43102584->m_Items[v44];
    if ( v45 )
    {
      v46 = *(_QWORD *)(v40 + 16);
      if ( !v46 )
        sub_1C71608(0, v41);
      v47 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v46 + 360LL))(
                                 v46,
                                 *(_QWORD *)(*(_QWORD *)v46 + 368LL));
      v48 = System_Int32__ToString((int32_t)&v235, 0);
      v49 = System_String__Concat_64069988(v48, (System_String_o *)StringLiteral_16109/*"_"*/, v47, 0);
      VoiceList_43085872 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getVoiceList_43085872(
                                                                          v45,
                                                                          v42->fields.svtVoiceType,
                                                                          v49,
                                                                          disableCondTypeList,
                                                                          v31,
                                                                          0);
      if ( VoiceList_43085872 )
      {
        if ( VoiceList_43085872->fields._size >= 1 )
        {
          if ( System_Collections_Generic_List_object___get_Item(
                 VoiceList_43085872,
                 0,
                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__) )
          {
            ServantVoiceEntity__getOverwriteData(
              v45,
              v42->fields.svtVoiceType,
              v49,
              &conds,
              &isInvalidVoiceList,
              &overwriteName,
              &overwriteNameDefault,
              &overwritePriority[1],
              v228[0],
              0);
            if ( !isInvalidVoiceList )
            {
              overwritePriority[0] = v42->fields.closedType;
              condType = v42->fields.condType;
              if ( condType <= 54 )
              {
                if ( condType <= 21 )
                {
                  v64 = 1;
                  v65 = 1;
                  switch ( condType )
                  {
                    case 0:
                      v66 = (VoiceCondMaster_o *)v19;
                      if ( !v19 )
                        sub_1C71608(0, v52);
                      goto LABEL_233;
                    case 1:
                      v61 = v235;
                      condValue = v42->fields.condValue;
                      if ( !CondType_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                      IsQuestClear_40596552 = CondType__IsQuestClear_40596552(condValue, -1, 0, 0);
                      if ( !v19 )
                        sub_1C71608(IsQuestClear_40596552, v117);
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
                      if ( !*v222 )
                        sub_1C71608(v51, v52);
                      if ( !v19 )
                        sub_1C71608(0, v52);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   (VoiceCondMaster_o *)v19,
                                   overwritePriority,
                                   svtVoiceId,
                                   v47,
                                   v235,
                                   (*v222)->fields.maxLv >= v42->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_241;
                    case 7:
                      if ( !*v222 )
                        sub_1C71608(v51, v52);
                      if ( !v19 )
                        sub_1C71608(0, v52);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   (VoiceCondMaster_o *)v19,
                                   overwritePriority,
                                   svtVoiceId,
                                   v47,
                                   v235,
                                   (*v222)->fields.maxLimitCount >= v42->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_241;
                    case 8:
                      if ( !*v222 )
                        sub_1C71608(0, v52);
                      v61 = v235;
                      IsQuestClear_40596552 = UserServantCollectionEntity__IsGet(*v222, 0);
                      if ( !v19 )
                        sub_1C71608(IsQuestClear_40596552, v111);
                      goto LABEL_162;
                    case 9:
                      v112 = *v222;
                      if ( !*v222 )
                        sub_1C71608(v51, v52);
                      v113 = *(_QWORD *)&v112->fields.friendshipRank.fields.currentCryptoKey;
                      v114 = *(_QWORD *)&v112->fields.friendshipRank.fields.fakeValue;
                      voicePrefixa = v235;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v238.fields.currentCryptoKey = v113;
                      *(_QWORD *)&v238.fields.fakeValue = v114;
                      v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v238, 0);
                      if ( !v19 )
                        sub_1C71608(v70, v115);
                      goto LABEL_74;
                    case 17:
                      if ( !*v222 )
                        sub_1C71608(0, v52);
                      v61 = v235;
                      IsQuestClear_40596552 = UserServantCollectionEntity__IsPlayed(*v222, v42->fields.condValue, 0);
                      if ( !v19 )
                        sub_1C71608(IsQuestClear_40596552, v118);
                      goto LABEL_162;
                    case 18:
                      if ( !*v222 )
                        sub_1C71608(0, v52);
                      v61 = v235;
                      IsQuestClear_40596552 = UserServantCollectionEntity__IsLimitCountMax(*v222, 0);
                      if ( !v19 )
                        sub_1C71608(IsQuestClear_40596552, v119);
                      goto LABEL_162;
                    case 19:
                      SelfUserGame = UserGameMaster__getSelfUserGame(0);
                      if ( !SelfUserGame )
                        sub_1C71608(0, v138);
                      if ( SelfUserGame->fields.birthDay < 1 )
                        goto LABEL_238;
                      *(_QWORD *)voicePrefixe = SelfUserGame->fields.birthDay;
                      v139 = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v139 = BalanceConfig_TypeInfo;
                      }
                      ServantIdsBirthdayBeforeValentine = v139->static_fields->ServantIdsBirthdayBeforeValentine;
                      v141 = (System_Func_int__bool__o *)p_monitor->klass;
                      if ( !p_monitor->klass )
                      {
                        v141 = (System_Func_int__bool__o *)sub_1C715FC(System_Func_int__bool__TypeInfo);
                        System_Func_int__bool____ctor(
                          v141,
                          object,
                          Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__,
                          0);
                        p_monitor->klass = (GrandQuestFolderBoardItem_c *)v141;
                        sub_1C71354(p_monitor, (int32_t)v141, v142, v143, v144, v145, v146, v147);
                      }
                      v148 = (BalanceConfig_c *)BasicHelper__Any_int__51593044(
                                                  ServantIdsBirthdayBeforeValentine,
                                                  (System_Func_T__bool__o *)v141,
                                                  (const MethodInfo_3133F54 *)Method_BasicHelper_Any_int____78639760);
                      if ( ((unsigned __int8)v148 & 1) != 0 )
                      {
                        v148 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v148 = BalanceConfig_TypeInfo;
                        }
                        VtReleaseAt = v148->static_fields->VtReleaseAt;
                        if ( VtReleaseAt >= 1 )
                        {
                          if ( !*v222 )
                            sub_1C71608(v148, v149);
                          createdAt = (*v222)->fields.createdAt;
                          if ( !v148->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v148);
                            VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
                          }
                          if ( createdAt < VtReleaseAt )
                            goto LABEL_218;
                        }
                      }
                      if ( !*v222 )
                        sub_1C71608(v148, v149);
                      isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                                (VoiceMaster_o *)v148,
                                                *(int64_t *)voicePrefixe,
                                                (*v222)->fields.createdAt,
                                                v150);
                      if ( !DataManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                      Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
                      if ( !Master_object )
                        sub_1C71608(0, v155);
                      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       (const MethodInfo_340B488 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
                      if ( isEnableBirthdayVoice )
                      {
                        v158 = 1;
                      }
                      else
                      {
                        if ( !SingleEntity )
                          sub_1C71608(0, v138);
                        v138 = (int64_t)SingleEntity[1].klass;
                        if ( v138 < 1 )
                        {
LABEL_238:
                          v158 = 0;
                        }
                        else
                        {
                          if ( !*v222 )
                            sub_1C71608(SingleEntity, v138);
                          v158 = VoiceMaster__isEnableBirthdayVoice(
                                   (VoiceMaster_o *)SingleEntity,
                                   v138,
                                   (*v222)->fields.createdAt,
                                   v157);
                        }
                      }
                      if ( !v19 )
                        sub_1C71608(v158, v138);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   (VoiceCondMaster_o *)v19,
                                   overwritePriority,
                                   svtVoiceId,
                                   v47,
                                   v235,
                                   v158,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_241;
                    case 20:
                      v120 = conds;
                      if ( conds && (max_length = conds->max_length) != 0 )
                      {
                        if ( (int)max_length >= 1 )
                        {
                          v122 = 0;
                          v123 = 0;
                          v124 = 0;
                          v125 = 0;
                          v213 = conds;
                          voicePrefixd = conds->m_Items;
                          do
                          {
                            if ( (unsigned int)v122 >= (unsigned int)max_length )
                              sub_1C71610(v51);
                            v126 = voicePrefixd[v122];
                            if ( !v126 )
                              sub_1C71608(v51, v52);
                            v127 = v126->fields.condType;
                            if ( v127 <= 0x13 && ((1 << v127) & 0xCE000) != 0 && v126->fields.value >= 1 )
                            {
                              if ( !DataManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                              v128 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventMaster___);
                              if ( !v128 )
                                sub_1C71608(0, v129);
                              v130 = DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v128,
                                       &entity,
                                       v126->fields.value,
                                       (const MethodInfo_3408ECC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
                              if ( !v130 )
                                goto LABEL_178;
                              if ( !entity )
                                sub_1C71608(v130, v131);
                              if ( Time >= (__int64)entity[5].monitor )
                              {
                                if ( !v19 )
                                  sub_1C71608(0, v131);
                                v132 = entity[6].klass;
                                v51 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         (VoiceCondMaster_o *)v19,
                                                         overwritePriority,
                                                         svtVoiceId,
                                                         v47,
                                                         v235,
                                                         Time >= (__int64)v132,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                if ( (v221 != 0) | v225 & 1 )
                                {
                                  v120 = v213;
                                  v133 = 0;
                                }
                                else
                                {
                                  v209 = (unsigned int)v51;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  if ( !byte_4CC8622 )
                                  {
                                    sub_1C713B0(&NetworkManager_TypeInfo);
                                    byte_4CC8622 = 1;
                                  }
                                  v134 = NetworkManager_TypeInfo;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                    v134 = NetworkManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1C71608(v134, v52);
                                  static_fields = v134->static_fields;
                                  v120 = v213;
                                  v51 = (DataManager_c *)v209;
                                  v133 = static_fields->serverTime < (__int64)entity[6].klass;
                                }
                                v123 = (unsigned __int8)v51 & 1;
                                if ( v133 && Time >= (__int64)v132 )
                                {
                                  v136 = (unsigned __int8)v51 & 1;
                                  if ( !SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
                                    sub_1C71608(0, v52);
                                  if ( !byte_4CC4935 )
                                  {
                                    sub_1C713B0(&DataManager_TypeInfo);
                                    byte_4CC4935 = 1;
                                  }
                                  v51 = DataManager_TypeInfo;
                                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                    v51 = DataManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1C71608(v51, v52);
                                  v120 = v213;
                                  v125 = 1;
                                  v123 = v136;
                                  v225 |= v51->static_fields->dateVersion < (__int64)entity[6].klass;
                                }
                                else
                                {
                                  v125 = 1;
                                }
                                v124 = 1;
                              }
                              else
                              {
LABEL_178:
                                if ( !v19 )
                                  sub_1C71608(0, v131);
                                v51 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         (VoiceCondMaster_o *)v19,
                                                         overwritePriority,
                                                         svtVoiceId,
                                                         v47,
                                                         v235,
                                                         0,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                v120 = v213;
                                v124 = (unsigned __int8)v51 & 1;
                                v125 = 1;
                                v123 = (unsigned __int8)v51 & 1;
                              }
                            }
                            LODWORD(max_length) = v120->max_length;
                            ++v122;
                          }
                          while ( (int)v122 < (int)max_length );
                          if ( (v125 & 1) != 0 )
                          {
                            v64 = v124 & 1;
                            v65 = v123 & 1;
                            goto LABEL_242;
                          }
                        }
                        v66 = (VoiceCondMaster_o *)v19;
                        if ( !v19 )
                          sub_1C71608(0, v52);
                      }
                      else
                      {
                        v66 = (VoiceCondMaster_o *)v19;
                        if ( !v19 )
                          sub_1C71608(0, v52);
                      }
                      return result;
                    case 21:
                      if ( !*v222 )
                        sub_1C71608(0, v52);
                      v61 = v235;
                      IsQuestClear_40596552 = UserServantCollectionEntity__IsFinded(*v222, 0);
                      if ( !v19 )
                        sub_1C71608(IsQuestClear_40596552, v110);
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
                    if ( !*v222 )
                      sub_1C71608(0, v52);
                    v61 = v235;
                    IsQuestClear_40596552 = UserServantCollectionEntity__IsCostumeGet(*v222, limitCount, 0);
                    if ( !v19 )
                      sub_1C71608(IsQuestClear_40596552, v63);
LABEL_162:
                    IsEnable = VoiceCondMaster__IsEnable(
                                 (VoiceCondMaster_o *)v19,
                                 overwritePriority,
                                 svtVoiceId,
                                 v47,
                                 v61,
                                 IsQuestClear_40596552,
                                 svtId,
                                 &overwriteNameDefault,
                                 isMateriala);
                    goto LABEL_241;
                  }
LABEL_218:
                  v64 = 1;
LABEL_219:
                  v65 = 1;
                  goto LABEL_242;
                }
                v72 = conds;
                if ( !conds || (v73 = conds->max_length) == 0 )
                {
                  v66 = (VoiceCondMaster_o *)v19;
                  if ( !v19 )
                    sub_1C71608(0, v52);
                  goto LABEL_233;
                }
                if ( (int)v73 < 1 )
                  goto LABEL_222;
                v74 = 0;
                v75 = 0;
                v76 = 0;
                v77 = 0;
                v211 = conds;
                voicePrefixb = conds->m_Items;
                while ( 2 )
                {
                  if ( (unsigned int)v74 >= (unsigned int)v73 )
                    sub_1C71610(v51);
                  v78 = voicePrefixb[v74];
                  if ( !v78 )
                    sub_1C71608(v51, v52);
                  v79 = v78->fields.condType;
                  if ( v79 <= 0x13 )
                  {
                    if ( ((1 << v79) & 0xCE000) != 0 )
                    {
                      if ( v78->fields.value >= 1 )
                      {
                        v80 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !v80 )
                          sub_1C71608(0, v81);
                        v82 = DataManager__GetMasterData_object_(
                                (DataManager_o *)v80,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMaster___);
                        if ( !v82 )
                          sub_1C71608(0, v83);
                        v84 = DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v82,
                                v78->fields.value,
                                (const MethodInfo_3408E80 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                        if ( !v84 || Time < (__int64)v84[5].monitor )
                        {
                          v86 = (VoiceCondMaster_o *)v19;
                          if ( !v19 )
                            sub_1C71608(0, v85);
                          goto LABEL_89;
                        }
                        if ( !v19 )
                          sub_1C71608(v84, v85);
                        v51 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                 (VoiceCondMaster_o *)v19,
                                                 overwritePriority,
                                                 svtVoiceId,
                                                 v47,
                                                 v235,
                                                 Time >= (__int64)v84[6].klass,
                                                 svtId,
                                                 &overwriteNameDefault,
                                                 isMateriala);
LABEL_101:
                        v75 = (unsigned __int8)v51 & 1;
                        v77 = 1;
                        v76 = 1;
                        goto LABEL_102;
                      }
                    }
                    else if ( v79 == 16 && v78->fields.value >= 1 )
                    {
                      v87 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !v87 )
                        sub_1C71608(0, v88);
                      v89 = DataManager__GetMasterData_object_(
                              (DataManager_o *)v87,
                              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
                      if ( !v89 )
                        sub_1C71608(0, v90);
                      v91 = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v89,
                              (Il2CppObject **)&v228[1],
                              v78->fields.value,
                              (const MethodInfo_3408ECC *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
                      if ( v91 )
                      {
                        if ( !*(_QWORD *)&v228[1] )
                          sub_1C71608(v91, v92);
                        if ( Time >= *(_QWORD *)(*(_QWORD *)&v228[1] + 40LL) )
                        {
                          if ( !v19 )
                            sub_1C71608(0, v92);
                          v51 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                   (VoiceCondMaster_o *)v19,
                                                   overwritePriority,
                                                   svtVoiceId,
                                                   v47,
                                                   v235,
                                                   1,
                                                   svtId,
                                                   &overwriteNameDefault,
                                                   isMateriala);
                          goto LABEL_101;
                        }
                      }
                      v86 = (VoiceCondMaster_o *)v19;
                      if ( !v19 )
                        sub_1C71608(0, v92);
LABEL_89:
                      v51 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                               v86,
                                               overwritePriority,
                                               svtVoiceId,
                                               v47,
                                               v235,
                                               0,
                                               svtId,
                                               &overwriteNameDefault,
                                               isMateriala);
                      v76 = (unsigned __int8)v51 & 1;
                      v77 = 1;
                      v75 = (unsigned __int8)v51 & 1;
LABEL_102:
                      v72 = v211;
                    }
                  }
                  LODWORD(v73) = v72->max_length;
                  if ( (int)++v74 >= (int)v73 )
                  {
                    if ( (v77 & 1) != 0 )
                    {
                      v64 = v76 & 1;
                      v65 = v75 & 1;
                      goto LABEL_242;
                    }
LABEL_222:
                    v66 = (VoiceCondMaster_o *)v19;
                    if ( !v19 )
                      sub_1C71608(0, v52);
LABEL_233:
                    v64 = 1;
                    v65 = VoiceCondMaster__IsEnable(
                            v66,
                            overwritePriority,
                            svtVoiceId,
                            v47,
                            v235,
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
                  v67 = *v222;
                  if ( !*v222 )
                    sub_1C71608(v51, v52);
                  v68 = *(_QWORD *)&v67->fields.friendshipRank.fields.currentCryptoKey;
                  v69 = *(_QWORD *)&v67->fields.friendshipRank.fields.fakeValue;
                  voicePrefixa = v235;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v237.fields.currentCryptoKey = v68;
                  *(_QWORD *)&v237.fields.fakeValue = v69;
                  v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v237, 0);
                  if ( !v19 )
                    sub_1C71608(v70, v71);
LABEL_74:
                  IsEnable = VoiceCondMaster__IsEnable(
                               (VoiceCondMaster_o *)v19,
                               overwritePriority,
                               svtVoiceId,
                               v47,
                               voicePrefixa,
                               (int)v70 >= v42->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_241;
                }
                if ( condType == 99 )
                {
                  v55 = *v222;
                  if ( !*v222 )
                    sub_1C71608(v51, v52);
                  v56 = *(_QWORD *)&v55->fields.friendshipRank.fields.currentCryptoKey;
                  v57 = *(_QWORD *)&v55->fields.friendshipRank.fields.fakeValue;
                  voicePrefix = v235;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v236.fields.currentCryptoKey = v56;
                  *(_QWORD *)&v236.fields.fakeValue = v57;
                  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v236, 0);
                  if ( !v19 )
                    sub_1C71608(v58, v59);
                  IsEnable = VoiceCondMaster__IsEnable(
                               (VoiceCondMaster_o *)v19,
                               overwritePriority,
                               svtVoiceId,
                               v47,
                               voicePrefix,
                               (int)v58 <= v42->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
LABEL_241:
                  v65 = IsEnable;
                  v64 = 1;
                  goto LABEL_242;
                }
                goto LABEL_218;
              }
              if ( condType != 56 )
              {
                if ( condType == 92 )
                {
                  if ( !v19 )
                    sub_1C71608(0, v52);
                  IsEnable = VoiceCondMaster__IsEnable(
                               (VoiceCondMaster_o *)v19,
                               overwritePriority,
                               svtVoiceId,
                               v47,
                               v235,
                               0,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_241;
                }
                goto LABEL_218;
              }
              v93 = conds;
              if ( !conds || (v94 = conds->max_length) == 0 )
              {
                v66 = (VoiceCondMaster_o *)v19;
                if ( !v19 )
                  sub_1C71608(0, v52);
                goto LABEL_233;
              }
              if ( (int)v94 < 1 )
                goto LABEL_134;
              v95 = 0;
              v96 = 0;
              v97 = 0;
              v98 = 0;
              v212 = conds;
              voicePrefixc = conds->m_Items;
              do
              {
                if ( (unsigned int)v95 >= (unsigned int)v94 )
                  sub_1C71610(v51);
                v99 = voicePrefixc[v95];
                if ( !v99 )
                  sub_1C71608(v51, v52);
                v100 = v99->fields.condType;
                if ( v100 <= 0x13 && ((1 << v100) & 0xCE000) != 0 && v99->fields.value >= 1 )
                {
                  v101 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v101 )
                    sub_1C71608(0, v102);
                  v103 = DataManager__GetMasterData_object_(
                           (DataManager_o *)v101,
                           (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v103 )
                    sub_1C71608(0, v104);
                  v105 = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v103,
                           v99->fields.value,
                           (const MethodInfo_3408E80 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v105 && Time >= (__int64)v105[5].monitor )
                  {
                    value = v99->fields.value;
                    v210 = v235;
                    if ( !CondType_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    v108 = CondType__IsServantGetBeforeEventEnd(svtId, value, 0);
                    if ( !v19 )
                      sub_1C71608(v108, v109);
                    v51 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             (VoiceCondMaster_o *)v19,
                                             overwritePriority,
                                             svtVoiceId,
                                             v47,
                                             v210,
                                             v108,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v96 = (unsigned __int8)v51 & 1;
                    v98 = 1;
                    v97 = 1;
                  }
                  else
                  {
                    if ( !v19 )
                      sub_1C71608(0, v106);
                    v51 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             (VoiceCondMaster_o *)v19,
                                             overwritePriority,
                                             svtVoiceId,
                                             v47,
                                             v235,
                                             0,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v97 = (unsigned __int8)v51 & 1;
                    v98 = 1;
                    v96 = (unsigned __int8)v51 & 1;
                  }
                  v93 = v212;
                }
                LODWORD(v94) = v93->max_length;
                ++v95;
              }
              while ( (int)v95 < (int)v94 );
              if ( (v98 & 1) == 0 )
              {
LABEL_134:
                v66 = (VoiceCondMaster_o *)v19;
                if ( !v19 )
                  sub_1C71608(0, v52);
                goto LABEL_233;
              }
              v64 = v97 & 1;
              v65 = v96 & 1;
LABEL_242:
              v159 = v65 & VoiceEntity__IsCondEnable(v42, svtId, v53);
              if ( (v64 & (v159 | (overwritePriority[0] != 2)) & 1) != 0 )
              {
                v160 = sub_1C715FC(VoiceInfo_TypeInfo);
                VoiceInfo___ctor((VoiceInfo_o *)v160, 0);
                if ( !v160 )
                  sub_1C71608(v161, v162);
                *(_QWORD *)(v160 + 16) = v42;
                sub_1C71354(
                  (GrandQuestFolderBoardItem_o *)(v160 + 16),
                  (int32_t)v42,
                  v163,
                  v164,
                  v165,
                  v166,
                  v167,
                  v168);
                *(_BYTE *)(v160 + 24) = v159 & 1;
                v169 = (int)overwriteName;
                *(_QWORD *)(v160 + 32) = overwriteName;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v160 + 32), v169, v170, v171, v172, v173, v174, v175);
                v176 = (int)overwriteNameDefault;
                *(_QWORD *)(v160 + 40) = overwriteNameDefault;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v160 + 40), v176, v177, v178, v179, v180, v181, v182);
                v183 = v235;
                *(_DWORD *)(v160 + 48) = overwritePriority[1];
                *(_DWORD *)(v160 + 52) = v183;
                v184 = (int)conds;
                *(_QWORD *)(v160 + 56) = conds;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v160 + 56), v184, v185, v186, v187, v188, v189, v190);
                if ( !v226 )
                  sub_1C71608(v191, v192);
                items = v226->fields._items;
                v200 = Method_System_Collections_Generic_List_VoiceInfo__Add__;
                ++v226->fields._version;
                if ( !items )
                  sub_1C71608(v191, v192);
                size = v226->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v226,
                    (Il2CppObject *)v160,
                    *(const MethodInfo_3810718 **)(*(_QWORD *)(v200[4] + 192LL) + 112LL));
                }
                else
                {
                  v202 = &items->obj.klass + size;
                  v226->fields._size = size + 1;
                  v202[4] = (Il2CppClass *)v160;
                  sub_1C71354((GrandQuestFolderBoardItem_o *)(v202 + 4), v160, v193, v194, v195, v196, v197, v198);
                }
              }
            }
          }
        }
      }
    }
  }
  v203 = Enumerator->klass;
  v204 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v205 = &v203->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v205 - 1) != System_IDisposable_TypeInfo )
    {
      --v204;
      v205 += 4;
      if ( !v204 )
        goto LABEL_253;
    }
    v206 = (__int64)&v203->vtable[*v205];
  }
  else
  {
LABEL_253:
    v206 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v206)(
                                Enumerator,
                                *(_QWORD *)(v206 + 8));
  if ( (v225 & 1) != 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_264;
    NetworkManager__GoToTitleDialog((NetworkManager_o *)Instance, 0);
  }
  if ( !v226 )
LABEL_264:
    sub_1C71608(Instance, v17);
  return (VoiceInfo_array *)System_Collections_Generic_List_object___ToArray(
                              v226,
                              (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
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

  if ( (byte_4CC8512 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&VoiceEntity_TypeInfo);
    sub_1C713B0(&StringLiteral_16109/*"_"*/);
    byte_4CC8512 = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C71608(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v9);
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
      v14 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v18 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0);
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
      sub_1C71608(v19, v20);
    }
    v23 = v19[2];
    if ( !v23 )
      sub_1C71608(0, v20);
    v24 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 360LL))(
                               v23,
                               *(_QWORD *)(*(_QWORD *)v23 + 368LL));
    v25 = System_String__Concat_64031724((System_String_o *)StringLiteral_16109/*"_"*/, v24, 0);
    if ( !labelName )
      sub_1C71608(v25, v25);
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
    v29 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
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
  _DWORD *v24; // x23
  __int64 naturalAligment; // x10
  __int64 v26; // x0
  System_String_o *v27; // x1
  System_String_o *v28; // x0
  Il2CppObject *Instance; // x0
  __int64 v30; // x1
  __int64 v31; // x1
  Il2CppObject *MasterData_object; // x22
  NetworkManager_c *v33; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v35; // x1
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4CC8511 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&VoiceEntity_TypeInfo);
    sub_1C713B0(&StringLiteral_16109/*"_"*/);
    byte_4CC8511 = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C71608(0, v9);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v12);
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
      v17 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8))
        & 1) == 0 )
      goto LABEL_39;
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
      v21 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0);
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
      sub_1C71608(v22, v23);
    }
    v26 = v22[2];
    if ( !v26 )
      sub_1C71608(0, v23);
    v27 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 360LL))(
                               v26,
                               *(_QWORD *)(*(_QWORD *)v26 + 368LL));
    v28 = System_String__Concat_64031724((System_String_o *)StringLiteral_16109/*"_"*/, v27, 0);
    if ( !labelName )
      sub_1C71608(v28, v28);
  }
  while ( !System_String__EndsWith(labelName, v28, 0) );
  if ( v24[12] != 17 && (unsigned int)(v24[7] - 1) > 1 )
  {
LABEL_39:
    v10 = 0;
    goto LABEL_40;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v30);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  v33 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v33 = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    sub_1C71608(v33, v31);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       v33->static_fields->userIdNumber,
                       svtId,
                       0);
  v35 = (unsigned int)v24[14];
  if ( isUpdate )
  {
    if ( !EntityDefinitely )
      sub_1C71608(0, v35);
    if ( !UserServantCollectionEntity__SetPlayed(EntityDefinitely, v35, 0) )
      goto LABEL_39;
  }
  else
  {
    if ( !EntityDefinitely )
      sub_1C71608(0, v35);
    if ( UserServantCollectionEntity__IsPlayed(EntityDefinitely, v35, 0) )
      goto LABEL_39;
  }
  v10 = v24[14];
LABEL_40:
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_44;
    }
    v39 = (__int64)&v36->vtable[*v38];
  }
  else
  {
LABEL_44:
    v39 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
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
  int64_t Time_41642924; // x21
  System_DateTime_o v23; // x0
  uint64_t v25; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v26; // [xsp+10h] [xbp-50h]
  System_DateTime_o dateTime; // [xsp+18h] [xbp-48h]
  uint64_t v28; // [xsp+20h] [xbp-40h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4CC850F & 1) == 0 )
  {
    sub_1C713B0(&System_DateTime_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC850F = 1;
  }
  v26.fields._dateData = 0;
  dateTime.fields._dateData = 0;
  if ( userBirthDay < 1 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_41644032(createDay, 0).fields._dateData;
  v28 = NetworkManager__getDateTime_41643704(userBirthDay, 0).fields._dateData;
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
  System_DateTime___ctor_65415888(v12, Year, Month, Day, 0);
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
  System_DateTime___ctor_65415888(v19, v14 + 1, v16, v18, 0);
  v26.fields._dateData = v25;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  ServerTime = NetworkManager__getServerTime(0);
  v21.fields._dateData = dateTime.fields._dateData;
  Time_41642924 = NetworkManager__getTime_41642924(v21, 0);
  v23.fields._dateData = v26.fields._dateData;
  return (Time_41642924 <= ServerTime && Time_41642924 + 86400 >= createDay)
       | (NetworkManager__getTime_41642924(v23, 0) <= ServerTime);
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
  if ( (byte_4CC8513 & 1) == 0 )
  {
    this = (VoiceMaster___c__DisplayClass2_0_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC8513 = 1;
  }
  userStvCollectionEntity = v4->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_1C71608(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v9, 0) == id;
}