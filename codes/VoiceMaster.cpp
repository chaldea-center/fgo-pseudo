void __fastcall VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4357C30 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
    byte_4357C30 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    131,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
}


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
  __int64 v13; // x28
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  ServantVoiceMaster_o *MasterData_WarQuestSelectionMaster; // x23
  UserServantCollectionMaster_o *v17; // x24
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  ServantVoiceEntity_array *Entity_29774712; // x27
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v28; // w22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  VoiceEntity_o *v39; // x19
  __int64 v40; // x10
  __int64 v41; // x8
  ServantVoiceEntity_o *v42; // x23
  __int64 v43; // x0
  System_String_o *v44; // x26
  System_String_o *v45; // x0
  System_String_o *v46; // x24
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_29798688; // x0
  void *IsEnable; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x2
  int condType; // w8
  UserServantCollectionEntity_o *v52; // x8
  __int64 v53; // x24
  __int64 v54; // x23
  __int64 v55; // x0
  __int64 v56; // x1
  bool v57; // w0
  int32_t v58; // w23
  _BOOL8 IsQuestClear_24296868; // x0
  __int64 v60; // x1
  int v61; // w24
  char v62; // w23
  VoiceCondMaster_o *v63; // x0
  UserServantCollectionEntity_o *v64; // x8
  __int64 v65; // x24
  __int64 v66; // x23
  __int64 v67; // x0
  __int64 v68; // x1
  ServantVoiceCond_array *v69; // x14
  __int64 v70; // x11
  __int64 v71; // x24
  char v72; // w9
  char v73; // w10
  char v74; // w8
  ServantVoiceCond_o *v75; // x23
  unsigned int v76; // w11
  WebViewManager_o *v77; // x0
  __int64 v78; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v79; // x0
  __int64 v80; // x1
  WarEntity_o *v81; // x0
  __int64 v82; // x1
  VoiceCondMaster_o *v83; // x0
  WebViewManager_o *v84; // x0
  __int64 v85; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v86; // x0
  __int64 v87; // x1
  _BOOL8 v88; // x0
  __int64 v89; // x1
  ServantVoiceCond_array *v90; // x28
  __int64 v91; // x11
  __int64 v92; // x23
  char v93; // w8
  char v94; // w10
  char v95; // w9
  ServantVoiceCond_o *v96; // x24
  unsigned int v97; // w11
  WebViewManager_o *v98; // x0
  __int64 v99; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v100; // x0
  __int64 v101; // x1
  WarEntity_o *v102; // x0
  __int64 v103; // x1
  int32_t value; // w24
  _BOOL8 v105; // x0
  __int64 v106; // x1
  __int64 v107; // x1
  __int64 v108; // x1
  UserServantCollectionEntity_o *v109; // x8
  __int64 v110; // x24
  __int64 v111; // x23
  __int64 v112; // x1
  int32_t condValue; // w24
  __int64 v114; // x1
  __int64 v115; // x1
  __int64 v116; // x1
  ServantVoiceCond_array *v117; // x12
  __int64 v118; // x10
  __int64 v119; // x24
  char v120; // w13
  char v121; // w9
  char v122; // w8
  ServantVoiceCond_o *v123; // x23
  unsigned int v124; // w10
  DataMasterBase_WarMaster__WarEntity__int__o *v125; // x0
  __int64 v126; // x1
  _BOOL8 v127; // x0
  __int64 v128; // x1
  int64_t v129; // x23
  char v130; // w10
  bool v131; // w8
  char v132; // w23
  UserGameEntity_o *SelfUserGame; // x0
  int64_t v134; // x1
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x24
  System_Func_int__bool__o *v136; // x23
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  BalanceConfig_c *v143; // x0
  __int64 v144; // x1
  const MethodInfo *v145; // x3
  int64_t VtReleaseAt; // x8
  int64_t createdAt; // x23
  bool isEnableBirthdayVoice; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0
  __int64 v150; // x1
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v152; // x3
  VoiceCondMaster_o *v153; // x8
  _BOOL8 v154; // x0
  char v155; // w26
  __int64 v156; // x23
  const MethodInfo *v157; // x1
  __int64 v158; // x0
  __int64 v159; // x1
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  System_Int32_array **v166; // x1
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_Int32_array **v173; // x1
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  System_Int32_array **v180; // x1
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  __int64 v187; // x1
  System_Collections_Generic_IEnumerator_T__c *v188; // x8
  unsigned __int64 v189; // x10
  int32_t *v190; // x11
  __int64 v191; // x0
  __int64 v193; // x0
  __int64 v194; // x0
  __int64 v195; // x0
  __int64 v196; // x0
  BalanceConfig_c *v197; // x0
  const MethodInfo *isMateriala; // [xsp+0h] [xbp-120h]
  char v199; // [xsp+18h] [xbp-108h]
  char v200; // [xsp+18h] [xbp-108h]
  char v201; // [xsp+18h] [xbp-108h]
  ServantVoiceCond_array *v202; // [xsp+20h] [xbp-100h]
  int32_t v203; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v204; // [xsp+20h] [xbp-100h]
  int32_t voicePrefix; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixa; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixb; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixc; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixd; // [xsp+28h] [xbp-F8h]
  int64_t voicePrefixe; // [xsp+28h] [xbp-F8h]
  Il2CppObject *object; // [xsp+30h] [xbp-F0h]
  BattleServantConfConponent_o *v212; // [xsp+38h] [xbp-E8h]
  int items_low; // [xsp+40h] [xbp-E0h]
  UserServantCollectionEntity_o **v214; // [xsp+48h] [xbp-D8h]
  int64_t Time; // [xsp+50h] [xbp-D0h]
  char v216; // [xsp+58h] [xbp-C8h]
  int32_t svtVoiceId; // [xsp+5Ch] [xbp-C4h]
  VoiceCondMaster_o *v218; // [xsp+60h] [xbp-C0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v219; // [xsp+68h] [xbp-B8h]
  bool svtIda; // [xsp+70h] [xbp-B0h]
  WarEntity_o *entity; // [xsp+88h] [xbp-98h] BYREF
  WarEntity_o *v224; // [xsp+90h] [xbp-90h] BYREF
  int32_t overwritePriority[2]; // [xsp+98h] [xbp-88h] BYREF
  System_String_o *overwriteNameDefault; // [xsp+A0h] [xbp-80h] BYREF
  System_String_o *overwriteName; // [xsp+A8h] [xbp-78h] BYREF
  bool isInvalidVoiceList; // [xsp+B4h] [xbp-6Ch] BYREF
  ServantVoiceCond_array *conds; // [xsp+B8h] [xbp-68h] BYREF
  int32_t v230; // [xsp+C4h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v231; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v232; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v233; // 0:x0.16

  if ( (byte_4357C32 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_BasicHelper_Any_int____69235616);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_VoiceCondMaster___);
    sub_B70694(&Method_DataManager_GetMaster_BeforeBirthDayMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_VoiceInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_VoiceInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_B70694(&System_Collections_Generic_List_VoiceInfo__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__);
    sub_B70694(&VoiceMaster___c__DisplayClass2_0_TypeInfo);
    sub_B70694(&VoiceEntity_TypeInfo);
    sub_B70694(&VoiceInfo_TypeInfo);
    sub_B70694(&StringLiteral_16127/*"_"*/);
    byte_4357C32 = 1;
  }
  v230 = 0;
  conds = 0LL;
  isInvalidVoiceList = 0;
  overwriteNameDefault = 0LL;
  overwriteName = 0LL;
  *(_QWORD *)overwritePriority = 0LL;
  entity = 0LL;
  v224 = 0LL;
  v13 = sub_B70764(VoiceMaster___c__DisplayClass2_0_TypeInfo);
  VoiceMaster___c__DisplayClass2_0___ctor((VoiceMaster___c__DisplayClass2_0_o *)v13, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  MasterData_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  v218 = (VoiceCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_277;
  v230 = ServantLimitAddMaster__getVoicePrefix((ServantLimitAddMaster_o *)Instance, changeSvtVoiceId, limitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  v17 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !v17 )
    goto LABEL_277;
  Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(v17, (int64_t)Instance, svtId, 0LL);
  if ( !v13 )
    goto LABEL_277;
  *(_QWORD *)(v13 + 16) = Instance;
  v214 = (UserServantCollectionEntity_o **)(v13 + 16);
  sub_B70630((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)Instance, v18, v19, v20, v21, v22, v23);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_277;
  Entity_29774712 = ServantVoiceMaster__getEntity_29774712(
                      MasterData_WarQuestSelectionMaster,
                      changeSvtVoiceId,
                      limitCount,
                      0LL);
  Time = NetworkManager__getTime(0LL);
  v219 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v219,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_434F41F )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_434F41F = 1;
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
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v26);
  v216 = 0;
  object = (Il2CppObject *)v13;
  v212 = (BattleServantConfConponent_o *)(v13 + 24);
  v28 = isCheckPlayCond;
  svtIda = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v30;
        p_offset += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_26;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_26:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v33 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_33;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_33:
      v36 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v37 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
            Enumerator,
            *(_QWORD *)(v36 + 8));
    v39 = (VoiceEntity_o *)v37;
    if ( !v37
      || (v40 = *(&VoiceEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)v37 + 300LL) < (unsigned int)v40)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * v40 - 8) != VoiceEntity_TypeInfo )
    {
      sub_B7076C(v37, v38);
    }
    if ( !Entity_29774712 )
      sub_B7076C(v37, v38);
    v41 = *(int *)(v37 + 28);
    if ( (unsigned int)v41 >= Entity_29774712->max_length )
    {
      v193 = sub_B70798(v37);
      sub_B70738(v193, 0LL);
    }
    v42 = Entity_29774712->m_Items[v41];
    if ( !v42 )
      continue;
    v43 = *(_QWORD *)(v37 + 16);
    if ( !v43 )
      sub_B7076C(0LL, v38);
    v44 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v43 + 360LL))(
                               v43,
                               *(_QWORD *)(*(_QWORD *)v43 + 368LL));
    v45 = System_Int32__ToString((int32_t)&v230, 0LL);
    v46 = System_String__Concat_44760452(v45, (System_String_o *)StringLiteral_16127/*"_"*/, v44, 0LL);
    VoiceList_29798688 = ServantVoiceEntity__getVoiceList_29798688(
                           v42,
                           v39->fields.svtVoiceType,
                           v46,
                           disableCondTypeList,
                           v28,
                           0LL);
    if ( !VoiceList_29798688 )
      continue;
    if ( VoiceList_29798688->fields._size < 1 )
      continue;
    if ( !VoiceList_29798688->fields._items->m_Items[0] )
      continue;
    ServantVoiceEntity__getOverwriteData(
      v42,
      v39->fields.svtVoiceType,
      v46,
      &conds,
      &isInvalidVoiceList,
      &overwriteName,
      &overwriteNameDefault,
      &overwritePriority[1],
      svtIda,
      0LL);
    if ( isInvalidVoiceList )
      continue;
    overwritePriority[0] = v39->fields.closedType;
    condType = v39->fields.condType;
    if ( condType > 54 )
    {
      if ( condType <= 92 )
      {
        if ( condType == 56 )
        {
          v90 = conds;
          if ( conds && (v91 = *(_QWORD *)&conds->max_length) != 0 )
          {
            if ( (int)v91 >= 1 )
            {
              v92 = 0LL;
              v93 = 0;
              v94 = 0;
              v95 = 0;
              voicePrefixc = conds->m_Items;
              do
              {
                if ( (unsigned int)v92 >= (unsigned int)v91 )
                {
                  v196 = sub_B70798(IsEnable);
                  sub_B70738(v196, 0LL);
                }
                v96 = voicePrefixc[v92];
                if ( !v96 )
                  sub_B7076C(IsEnable, v49);
                v97 = v96->fields.condType;
                if ( v97 <= 0x13 && ((1 << v97) & 0xCE000) != 0 && v96->fields.value >= 1 )
                {
                  v98 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v98 )
                    sub_B7076C(0LL, v99);
                  v100 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)v98,
                                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v100 )
                    sub_B7076C(0LL, v101);
                  v102 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           v100,
                           v96->fields.value,
                           (const MethodInfo_21C0440 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v102 && Time >= v102->fields.targetId )
                  {
                    value = v96->fields.value;
                    v203 = v230;
                    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CondType_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    }
                    v105 = CondType__IsServantGetBeforeEventEnd(svtId, value, 0LL);
                    if ( !v218 )
                      sub_B7076C(v105, v106);
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v218,
                                         overwritePriority,
                                         svtVoiceId,
                                         v44,
                                         v203,
                                         v105,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v93 = (unsigned __int8)IsEnable & 1;
                    v95 = 1;
                    v94 = 1;
                  }
                  else
                  {
                    if ( !v218 )
                      sub_B7076C(0LL, v103);
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v218,
                                         overwritePriority,
                                         svtVoiceId,
                                         v44,
                                         v230,
                                         0,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v94 = (unsigned __int8)IsEnable & 1;
                    v95 = 1;
                    v93 = (unsigned __int8)IsEnable & 1;
                  }
                }
                LODWORD(v91) = v90->max_length;
                ++v92;
              }
              while ( (int)v92 < (int)v91 );
              if ( (v95 & 1) != 0 )
              {
                v61 = v94 & 1;
                v62 = v93 & 1;
                goto LABEL_253;
              }
            }
            v63 = v218;
            if ( !v218 )
              sub_B7076C(0LL, v49);
          }
          else
          {
            v63 = v218;
            if ( !v218 )
              sub_B7076C(0LL, v49);
          }
          goto LABEL_245;
        }
        if ( condType == 92 )
        {
          if ( !v218 )
            sub_B7076C(0LL, v49);
          v57 = VoiceCondMaster__IsEnable(
                  v218,
                  overwritePriority,
                  svtVoiceId,
                  v44,
                  v230,
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
          v64 = *v214;
          if ( !*v214 )
            sub_B7076C(IsEnable, v49);
          v65 = *(_QWORD *)&v64->fields.friendshipRank.fields.currentCryptoKey;
          v66 = *(_QWORD *)&v64->fields.friendshipRank.fields.fakeValue;
          voicePrefixa = v230;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v232.fields.currentCryptoKey = v65;
          *(_QWORD *)&v232.fields.fakeValue = v66;
          v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v232, 0LL);
          if ( !v218 )
            sub_B7076C(v67, v68);
LABEL_74:
          v57 = VoiceCondMaster__IsEnable(
                  v218,
                  overwritePriority,
                  svtVoiceId,
                  v44,
                  voicePrefixa,
                  (int)v67 >= v39->fields.condValue,
                  svtId,
                  &overwriteNameDefault,
                  isMateriala);
          goto LABEL_252;
        }
        if ( condType == 99 )
        {
          v52 = *v214;
          if ( !*v214 )
            sub_B7076C(IsEnable, v49);
          v53 = *(_QWORD *)&v52->fields.friendshipRank.fields.currentCryptoKey;
          v54 = *(_QWORD *)&v52->fields.friendshipRank.fields.fakeValue;
          voicePrefix = v230;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v231.fields.currentCryptoKey = v53;
          *(_QWORD *)&v231.fields.fakeValue = v54;
          v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v231, 0LL);
          if ( !v218 )
            sub_B7076C(v55, v56);
          v57 = VoiceCondMaster__IsEnable(
                  v218,
                  overwritePriority,
                  svtVoiceId,
                  v44,
                  voicePrefix,
                  (int)v55 <= v39->fields.condValue,
                  svtId,
                  &overwriteNameDefault,
                  isMateriala);
          goto LABEL_252;
        }
      }
LABEL_227:
      v61 = 1;
LABEL_228:
      v62 = 1;
      goto LABEL_253;
    }
    if ( condType <= 21 )
    {
      v61 = 1;
      v62 = 1;
      switch ( condType )
      {
        case 0:
          v63 = v218;
          if ( !v218 )
            sub_B7076C(0LL, v49);
          goto LABEL_245;
        case 1:
          v58 = v230;
          condValue = v39->fields.condValue;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_24296868 = CondType__IsQuestClear_24296868(condValue, -1, 0, 0LL);
          if ( !v218 )
            sub_B7076C(IsQuestClear_24296868, v114);
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
          if ( !*v214 )
            sub_B7076C(IsEnable, v49);
          if ( !v218 )
            sub_B7076C(0LL, v49);
          v57 = VoiceCondMaster__IsEnable(
                  v218,
                  overwritePriority,
                  svtVoiceId,
                  v44,
                  v230,
                  (*v214)->fields.maxLv >= v39->fields.condValue,
                  svtId,
                  &overwriteNameDefault,
                  isMateriala);
          goto LABEL_252;
        case 7:
          if ( !*v214 )
            sub_B7076C(IsEnable, v49);
          if ( !v218 )
            sub_B7076C(0LL, v49);
          v57 = VoiceCondMaster__IsEnable(
                  v218,
                  overwritePriority,
                  svtVoiceId,
                  v44,
                  v230,
                  (*v214)->fields.maxLimitCount >= v39->fields.condValue,
                  svtId,
                  &overwriteNameDefault,
                  isMateriala);
          goto LABEL_252;
        case 8:
          if ( !*v214 )
            sub_B7076C(0LL, v49);
          v58 = v230;
          IsQuestClear_24296868 = UserServantCollectionEntity__IsGet(*v214, 0LL);
          if ( !v218 )
            sub_B7076C(IsQuestClear_24296868, v108);
          goto LABEL_164;
        case 9:
          v109 = *v214;
          if ( !*v214 )
            sub_B7076C(IsEnable, v49);
          v110 = *(_QWORD *)&v109->fields.friendshipRank.fields.currentCryptoKey;
          v111 = *(_QWORD *)&v109->fields.friendshipRank.fields.fakeValue;
          voicePrefixa = v230;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v233.fields.currentCryptoKey = v110;
          *(_QWORD *)&v233.fields.fakeValue = v111;
          v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v233, 0LL);
          if ( !v218 )
            sub_B7076C(v67, v112);
          goto LABEL_74;
        case 17:
          if ( !*v214 )
            sub_B7076C(0LL, v49);
          v58 = v230;
          IsQuestClear_24296868 = UserServantCollectionEntity__IsPlayed(*v214, v39->fields.condValue, 0LL);
          if ( !v218 )
            sub_B7076C(IsQuestClear_24296868, v115);
          goto LABEL_164;
        case 18:
          if ( !*v214 )
            sub_B7076C(0LL, v49);
          v58 = v230;
          IsQuestClear_24296868 = UserServantCollectionEntity__IsLimitCountMax(*v214, 0LL);
          if ( !v218 )
            sub_B7076C(IsQuestClear_24296868, v116);
          goto LABEL_164;
        case 19:
          SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
          if ( !SelfUserGame )
            sub_B7076C(0LL, v134);
          if ( SelfUserGame->fields.birthDay < 1 )
          {
            v154 = 0LL;
          }
          else
          {
            voicePrefixe = SelfUserGame->fields.birthDay;
            v197 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v197 = BalanceConfig_TypeInfo;
            }
            ServantIdsBirthdayBeforeValentine = v197->static_fields->ServantIdsBirthdayBeforeValentine;
            v136 = (System_Func_int__bool__o *)v212->klass;
            if ( !v212->klass )
            {
              v136 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
              System_Func_int__bool____ctor(
                v136,
                object,
                Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__,
                (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
              v212->klass = (BattleServantConfConponent_c *)v136;
              sub_B70630(v212, (System_Int32_array **)v136, v137, v138, v139, v140, v141, v142);
            }
            v143 = (BalanceConfig_c *)BasicHelper__Any_int__29214704(
                                        ServantIdsBirthdayBeforeValentine,
                                        (System_Func_T__bool__o *)v136,
                                        (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616);
            if ( ((unsigned __int8)v143 & 1) != 0 )
            {
              v143 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v143 = BalanceConfig_TypeInfo;
              }
              VtReleaseAt = v143->static_fields->VtReleaseAt;
              if ( VtReleaseAt >= 1 )
              {
                if ( !*v214 )
                  sub_B7076C(v143, v144);
                createdAt = (*v214)->fields.createdAt;
                if ( (BYTE3(v143->vtable._0_Equals.methodPtr) & 4) != 0 && !v143->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v143);
                  VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
                }
                if ( createdAt < VtReleaseAt )
                  goto LABEL_227;
              }
            }
            if ( !*v214 )
              sub_B7076C(v143, v144);
            isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                      (VoiceMaster_o *)v143,
                                      voicePrefixe,
                                      (*v214)->fields.createdAt,
                                      v145);
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
            if ( !Master_WarQuestSelectionMaster )
              sub_B7076C(0LL, v150);
            SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                             Master_WarQuestSelectionMaster,
                             (const MethodInfo_21C072C *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
            v153 = v218;
            if ( isEnableBirthdayVoice )
            {
              v154 = 1LL;
              if ( !v218 )
LABEL_261:
                sub_B7076C(v154, v134);
LABEL_251:
              v57 = VoiceCondMaster__IsEnable(
                      v153,
                      overwritePriority,
                      svtVoiceId,
                      v44,
                      v230,
                      v154,
                      svtId,
                      &overwriteNameDefault,
                      isMateriala);
LABEL_252:
              v62 = v57;
              v61 = 1;
              goto LABEL_253;
            }
            if ( !SingleEntity )
              sub_B7076C(0LL, v134);
            v134 = (int64_t)SingleEntity[1].klass;
            if ( v134 < 1 )
            {
              v154 = 0LL;
              if ( !v218 )
                goto LABEL_261;
              goto LABEL_251;
            }
            if ( !*v214 )
              sub_B7076C(SingleEntity, v134);
            v154 = VoiceMaster__isEnableBirthdayVoice(
                     (VoiceMaster_o *)SingleEntity,
                     v134,
                     (*v214)->fields.createdAt,
                     v152);
          }
          v153 = v218;
          if ( !v218 )
            goto LABEL_261;
          goto LABEL_251;
        case 20:
          v117 = conds;
          if ( conds && (v118 = *(_QWORD *)&conds->max_length) != 0 )
          {
            if ( (int)v118 >= 1 )
            {
              v119 = 0LL;
              v120 = 0;
              v121 = 0;
              v122 = 0;
              v204 = conds;
              voicePrefixd = conds->m_Items;
              do
              {
                if ( (unsigned int)v119 >= (unsigned int)v118 )
                {
                  v194 = sub_B70798(IsEnable);
                  sub_B70738(v194, 0LL);
                }
                v123 = voicePrefixd[v119];
                if ( !v123 )
                  sub_B7076C(IsEnable, v49);
                v124 = v123->fields.condType;
                if ( v124 <= 0x13 && ((1 << v124) & 0xCE000) != 0 && v123->fields.value >= 1 )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  v125 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMaster___);
                  if ( !v125 )
                    sub_B7076C(0LL, v126);
                  v127 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           v125,
                           &v224,
                           v123->fields.value,
                           (const MethodInfo_21C049C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
                  if ( !v127 )
                    goto LABEL_181;
                  if ( !v224 )
                    sub_B7076C(v127, v128);
                  if ( Time >= v224->fields.targetId )
                  {
                    if ( !v218 )
                      sub_B7076C(0LL, v128);
                    v129 = *(_QWORD *)&v224->fields.eventId;
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v218,
                                         overwritePriority,
                                         svtVoiceId,
                                         v44,
                                         v230,
                                         Time >= v129,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v130 = (char)IsEnable;
                    if ( (items_low != 0) | v216 & 1 )
                    {
                      v131 = 0;
                    }
                    else
                    {
                      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        v199 = (char)IsEnable;
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                        v130 = v199;
                      }
                      if ( !byte_4357C45 )
                      {
                        v200 = v130;
                        sub_B70694(&NetworkManager_TypeInfo);
                        v130 = v200;
                        byte_4357C45 = 1;
                      }
                      IsEnable = NetworkManager_TypeInfo;
                      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        v201 = v130;
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                        v130 = v201;
                        IsEnable = NetworkManager_TypeInfo;
                      }
                      if ( !v224 )
                        sub_B7076C(IsEnable, v49);
                      v131 = *(_QWORD *)(*((_QWORD *)IsEnable + 23) + 24LL) < *(_QWORD *)&v224->fields.eventId;
                    }
                    v117 = v204;
                    v120 = v130 & 1;
                    if ( v131 && Time >= v129 )
                    {
                      v132 = v130 & 1;
                      if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
                        sub_B7076C(0LL, v49);
                      if ( !byte_4352452 )
                      {
                        sub_B70694(&DataManager_TypeInfo);
                        byte_4352452 = 1;
                      }
                      IsEnable = DataManager_TypeInfo;
                      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !DataManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                        IsEnable = DataManager_TypeInfo;
                      }
                      if ( !v224 )
                        sub_B7076C(IsEnable, v49);
                      v117 = v204;
                      v122 = 1;
                      v120 = v132;
                      v216 |= *(_QWORD *)(*((_QWORD *)IsEnable + 23) + 24LL) < *(_QWORD *)&v224->fields.eventId;
                    }
                    else
                    {
                      v122 = 1;
                    }
                    v121 = 1;
                  }
                  else
                  {
LABEL_181:
                    if ( !v218 )
                      sub_B7076C(0LL, v128);
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v218,
                                         overwritePriority,
                                         svtVoiceId,
                                         v44,
                                         v230,
                                         0,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v117 = v204;
                    v121 = (unsigned __int8)IsEnable & 1;
                    v122 = 1;
                    v120 = (unsigned __int8)IsEnable & 1;
                  }
                }
                LODWORD(v118) = v117->max_length;
                ++v119;
              }
              while ( (int)v119 < (int)v118 );
              if ( (v122 & 1) != 0 )
              {
                v61 = v121 & 1;
                v62 = v120 & 1;
                goto LABEL_253;
              }
            }
            v63 = v218;
            if ( !v218 )
              sub_B7076C(0LL, v49);
          }
          else
          {
            v63 = v218;
            if ( !v218 )
              sub_B7076C(0LL, v49);
          }
          goto LABEL_245;
        case 21:
          if ( !*v214 )
            sub_B7076C(0LL, v49);
          v58 = v230;
          IsQuestClear_24296868 = UserServantCollectionEntity__IsFinded(*v214, 0LL);
          if ( !v218 )
            sub_B7076C(IsQuestClear_24296868, v107);
          goto LABEL_164;
        default:
          goto LABEL_228;
      }
    }
    if ( condType != 31 )
    {
      if ( condType == 54 )
      {
        if ( !*v214 )
          sub_B7076C(0LL, v49);
        v58 = v230;
        IsQuestClear_24296868 = UserServantCollectionEntity__IsCostumeGet(*v214, limitCount, 0LL);
        if ( !v218 )
          sub_B7076C(IsQuestClear_24296868, v60);
LABEL_164:
        v57 = VoiceCondMaster__IsEnable(
                v218,
                overwritePriority,
                svtVoiceId,
                v44,
                v58,
                IsQuestClear_24296868,
                svtId,
                &overwriteNameDefault,
                isMateriala);
        goto LABEL_252;
      }
      goto LABEL_227;
    }
    v69 = conds;
    if ( !conds || (v70 = *(_QWORD *)&conds->max_length) == 0 )
    {
      v63 = v218;
      if ( !v218 )
        sub_B7076C(0LL, v49);
      goto LABEL_245;
    }
    if ( (int)v70 < 1 )
      goto LABEL_231;
    v71 = 0LL;
    v72 = 0;
    v73 = 0;
    v74 = 0;
    v202 = conds;
    voicePrefixb = conds->m_Items;
    do
    {
      if ( (unsigned int)v71 >= (unsigned int)v70 )
      {
        v195 = sub_B70798(IsEnable);
        sub_B70738(v195, 0LL);
      }
      v75 = voicePrefixb[v71];
      if ( !v75 )
        sub_B7076C(IsEnable, v49);
      v76 = v75->fields.condType;
      if ( v76 <= 0x13 )
      {
        if ( ((1 << v76) & 0xCE000) != 0 )
        {
          if ( v75->fields.value < 1 )
            goto LABEL_103;
          v77 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v77 )
            sub_B7076C(0LL, v78);
          v79 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)v77,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v79 )
            sub_B7076C(0LL, v80);
          v81 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                  v79,
                  v75->fields.value,
                  (const MethodInfo_21C0440 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !v81 || Time < v81->fields.targetId )
          {
            v83 = v218;
            if ( !v218 )
              sub_B7076C(0LL, v82);
            goto LABEL_89;
          }
          if ( !v218 )
            sub_B7076C(v81, v82);
          IsEnable = (void *)VoiceCondMaster__IsEnable(
                               v218,
                               overwritePriority,
                               svtVoiceId,
                               v44,
                               v230,
                               Time >= *(_QWORD *)&v81->fields.eventId,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
          goto LABEL_101;
        }
        if ( v76 == 16 && v75->fields.value >= 1 )
        {
          v84 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v84 )
            sub_B7076C(0LL, v85);
          v86 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)v84,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
          if ( !v86 )
            sub_B7076C(0LL, v87);
          v88 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  v86,
                  &entity,
                  v75->fields.value,
                  (const MethodInfo_21C049C *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
          if ( !v88 )
            goto LABEL_97;
          if ( !entity )
            sub_B7076C(v88, v89);
          if ( Time < (__int64)entity->fields.longName )
          {
LABEL_97:
            v83 = v218;
            if ( !v218 )
              sub_B7076C(0LL, v89);
LABEL_89:
            IsEnable = (void *)VoiceCondMaster__IsEnable(
                                 v83,
                                 overwritePriority,
                                 svtVoiceId,
                                 v44,
                                 v230,
                                 0,
                                 svtId,
                                 &overwriteNameDefault,
                                 isMateriala);
            v73 = (unsigned __int8)IsEnable & 1;
            v74 = 1;
            v72 = (unsigned __int8)IsEnable & 1;
LABEL_102:
            v69 = v202;
            goto LABEL_103;
          }
          if ( !v218 )
            sub_B7076C(0LL, v89);
          IsEnable = (void *)VoiceCondMaster__IsEnable(
                               v218,
                               overwritePriority,
                               svtVoiceId,
                               v44,
                               v230,
                               1,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
LABEL_101:
          v72 = (unsigned __int8)IsEnable & 1;
          v74 = 1;
          v73 = 1;
          goto LABEL_102;
        }
      }
LABEL_103:
      LODWORD(v70) = v69->max_length;
      ++v71;
    }
    while ( (int)v71 < (int)v70 );
    if ( (v74 & 1) != 0 )
    {
      v61 = v73 & 1;
      v62 = v72 & 1;
      goto LABEL_253;
    }
LABEL_231:
    v63 = v218;
    if ( !v218 )
      sub_B7076C(0LL, v49);
LABEL_245:
    v61 = 1;
    v62 = VoiceCondMaster__IsEnable(
            v63,
            overwritePriority,
            svtVoiceId,
            v44,
            v230,
            1,
            svtId,
            &overwriteNameDefault,
            isMateriala);
LABEL_253:
    v155 = v62 & VoiceEntity__IsCondEnable(v39, svtId, v50);
    if ( (v155 & 1) != 0 )
    {
      if ( v61 )
      {
LABEL_257:
        v156 = sub_B70764(VoiceInfo_TypeInfo);
        VoiceInfo___ctor((VoiceInfo_o *)v156, v157);
        if ( !v156 )
          sub_B7076C(v158, v159);
        *(_QWORD *)(v156 + 16) = v39;
        sub_B70630(
          (BattleServantConfConponent_o *)(v156 + 16),
          (System_Int32_array **)v39,
          v160,
          v161,
          v162,
          v163,
          v164,
          v165);
        *(_BYTE *)(v156 + 24) = v155 & 1;
        v166 = (System_Int32_array **)overwriteName;
        *(_QWORD *)(v156 + 32) = overwriteName;
        sub_B70630((BattleServantConfConponent_o *)(v156 + 32), v166, v167, v168, v169, v170, v171, v172);
        v173 = (System_Int32_array **)overwriteNameDefault;
        *(_QWORD *)(v156 + 40) = overwriteNameDefault;
        sub_B70630((BattleServantConfConponent_o *)(v156 + 40), v173, v174, v175, v176, v177, v178, v179);
        *(_DWORD *)(v156 + 48) = overwritePriority[1];
        *(_DWORD *)(v156 + 52) = v230;
        v180 = (System_Int32_array **)conds;
        *(_QWORD *)(v156 + 56) = conds;
        sub_B70630((BattleServantConfConponent_o *)(v156 + 56), v180, v181, v182, v183, v184, v185, v186);
        if ( !v219 )
          sub_B7076C(0LL, v187);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v219,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v156,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_VoiceInfo__Add__);
      }
    }
    else if ( ((unsigned __int8)v61 & (overwritePriority[0] != 2)) != 0 )
    {
      goto LABEL_257;
    }
  }
  v188 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v189 = 0LL;
    v190 = &v188->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v190 - 1) != System_IDisposable_TypeInfo )
    {
      ++v189;
      v190 += 4;
      if ( v189 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_266;
    }
    v191 = (__int64)&v188->vtable[*v190].method;
  }
  else
  {
LABEL_266:
    v191 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v191)(
    Enumerator,
    *(_QWORD *)(v191 + 8));
  if ( (v216 & 1) != 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_277;
    NetworkManager__GoToTitleDialog((NetworkManager_o *)Instance, 0LL);
  }
  Instance = (DataManager_o *)v219;
  if ( !v219 )
LABEL_277:
    sub_B7076C(Instance, v15);
  return (VoiceInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v219,
                              (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
}


int32_t __fastcall VoiceMaster__getFirstPlayPriority(
        VoiceMaster_o *this,
        int32_t svtId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  __int64 v6; // x1
  int32_t v7; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  _QWORD *v19; // x0
  __int64 v20; // x1
  _QWORD *v21; // x21
  __int64 v22; // x10
  __int64 v23; // x0
  System_String_o *v24; // x1
  System_String_o *v25; // x0
  int v26; // w8
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  int v32; // [xsp+0h] [xbp-50h]

  if ( (byte_4357C34 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&VoiceEntity_TypeInfo);
    sub_B70694(&StringLiteral_16127/*"_"*/);
    byte_4357C34 = 1;
  }
  v7 = 0;
  if ( !System_String__IsNullOrEmpty(labelName, 0LL) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      sub_B7076C(0LL, v6);
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B7076C(0LL, v9);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v12 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v12;
          p_offset += 4;
          if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v15 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v16 = 0LL;
        v17 = &v15->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v16;
          v17 += 4;
          if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v18 = (__int64)&v15->vtable[*v17].method;
      }
      else
      {
LABEL_17:
        v18 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v19 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                        Enumerator,
                        *(_QWORD *)(v18 + 8));
      v21 = v19;
      if ( !v19
        || (v22 = *(&VoiceEntity_TypeInfo->_2.bitflags2 + 1), *(unsigned __int8 *)(*v19 + 300LL) < (unsigned int)v22)
        || *(VoiceEntity_c **)(*(_QWORD *)(*v19 + 200LL) + 8 * v22 - 8) != VoiceEntity_TypeInfo )
      {
        sub_B7076C(v19, v20);
      }
      v23 = v19[2];
      if ( !v23 )
        sub_B7076C(0LL, v20);
      v24 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 360LL))(
                                 v23,
                                 *(_QWORD *)(*(_QWORD *)v23 + 368LL));
      v25 = System_String__Concat_44758168((System_String_o *)StringLiteral_16127/*"_"*/, v24, 0LL);
      if ( !labelName )
        sub_B7076C(v25, v25);
      if ( System_String__EndsWith(labelName, v25, 0LL) )
      {
        v7 = *((_DWORD *)v21 + 15);
        v26 = 98;
        goto LABEL_27;
      }
    }
    v26 = 96;
    v7 = 0;
LABEL_27:
    v32 = v26;
    v27 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_31:
      v30 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
      Enumerator,
      *(_QWORD *)(v30 + 8));
    if ( v32 == 96 )
      return 0;
  }
  return v7;
}


int32_t __fastcall VoiceMaster__getFlagRequestNumber(
        VoiceMaster_o *this,
        int32_t svtId,
        System_String_o *labelName,
        bool isUpdate,
        const MethodInfo *method)
{
  __int64 v9; // x1
  int32_t v10; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v12; // x1
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
  __int64 v23; // x1
  _DWORD *v24; // x23
  __int64 v25; // x10
  __int64 v26; // x0
  System_String_o *v27; // x1
  System_String_o *v28; // x0
  WebViewManager_o *Instance; // x0
  __int64 v30; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v34; // x1
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  int v40; // [xsp+0h] [xbp-60h]

  if ( (byte_4357C33 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&VoiceEntity_TypeInfo);
    sub_B70694(&StringLiteral_16127/*"_"*/);
    byte_4357C33 = 1;
  }
  v10 = 0;
  if ( !System_String__IsNullOrEmpty(labelName, 0LL) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      sub_B7076C(0LL, v9);
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B7076C(0LL, v12);
    do
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
        p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        goto LABEL_35;
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
        v21 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v22 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                        Enumerator,
                        *(_QWORD *)(v21 + 8));
      v24 = v22;
      if ( !v22
        || (v25 = *(&VoiceEntity_TypeInfo->_2.bitflags2 + 1), *(unsigned __int8 *)(*v22 + 300LL) < (unsigned int)v25)
        || *(VoiceEntity_c **)(*(_QWORD *)(*v22 + 200LL) + 8 * v25 - 8) != VoiceEntity_TypeInfo )
      {
        sub_B7076C(v22, v23);
      }
      v26 = v22[2];
      if ( !v26 )
        sub_B7076C(0LL, v23);
      v27 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 360LL))(
                                 v26,
                                 *(_QWORD *)(*(_QWORD *)v26 + 368LL));
      v28 = System_String__Concat_44758168((System_String_o *)StringLiteral_16127/*"_"*/, v27, 0LL);
      if ( !labelName )
        sub_B7076C(v28, v28);
    }
    while ( !System_String__EndsWith(labelName, v28, 0LL) );
    if ( v24[12] != 17 && v24[7] != 1 )
    {
LABEL_35:
      v10 = 0;
      v40 = 178;
      goto LABEL_36;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v30);
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B7076C(UserId, UserId);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                         MasterData_WarQuestSelectionMaster,
                         UserId,
                         svtId,
                         0LL);
    v34 = (unsigned int)v24[14];
    if ( isUpdate )
    {
      if ( !EntityDefinitely )
        sub_B7076C(0LL, v34);
      if ( !UserServantCollectionEntity__SetPlayed(EntityDefinitely, v34, 0LL) )
        goto LABEL_35;
    }
    else
    {
      if ( !EntityDefinitely )
        sub_B7076C(0LL, v34);
      if ( UserServantCollectionEntity__IsPlayed(EntityDefinitely, v34, 0LL) )
        goto LABEL_35;
    }
    v10 = v24[14];
    v40 = 180;
LABEL_36:
    v35 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_40;
      }
      v38 = (__int64)&v35->vtable[*v37].method;
    }
    else
    {
LABEL_40:
      v38 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
      Enumerator,
      *(_QWORD *)(v38 + 8));
    if ( v40 == 178 )
      return 0;
  }
  return v10;
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
  int64_t Time_25947024; // x21
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

  if ( (byte_4357C31 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4357C31 = 1;
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
  dateData = NetworkManager__getServerDateTime_25948096(createDay, 0LL).fields.dateData;
  v18 = NetworkManager__getDateTime_25947808(userBirthDay, 0LL).fields.dateData;
  v20.fields.dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v20, 0LL);
  v21.fields.dateData = (uint64_t)&v18;
  Month = System_DateTime__get_Month(v21, 0LL);
  v22.fields.dateData = (uint64_t)&v18;
  Day = System_DateTime__get_Day(v22, 0LL);
  v15 = 0LL;
  v23.fields.dateData = (uint64_t)&v15;
  System_DateTime___ctor_42968960(v23, Year, Month, Day, 0LL);
  dateTime.fields.dateData = v15;
  v24.fields.dateData = (uint64_t)&dateData;
  v9 = System_DateTime__get_Year(v24, 0LL);
  v25.fields.dateData = (uint64_t)&v18;
  v10 = System_DateTime__get_Month(v25, 0LL);
  v26.fields.dateData = (uint64_t)&v18;
  v11 = System_DateTime__get_Day(v26, 0LL);
  v15 = 0LL;
  v27.fields.dateData = (uint64_t)&v15;
  System_DateTime___ctor_42968960(v27, v9 + 1, v10, v11, 0LL);
  v16.fields.dateData = v15;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  ServerTime = NetworkManager__getServerTime(0LL);
  v28.fields.dateData = dateTime.fields.dateData;
  Time_25947024 = NetworkManager__getTime_25947024(v28, 0LL);
  v29.fields.dateData = v16.fields.dateData;
  return NetworkManager__getTime_25947024(v29, 0LL) <= ServerTime
      || Time_25947024 + 86400 >= createDay && Time_25947024 <= ServerTime;
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
  if ( (byte_434F33F & 1) == 0 )
  {
    this = (VoiceMaster___c__DisplayClass2_0_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F33F = 1;
  }
  userStvCollectionEntity = v4->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_B7076C(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v9, 0LL) == id;
}