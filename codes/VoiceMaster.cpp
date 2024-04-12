void __fastcall VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B5EB3 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
    byte_42B5EB3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    131,
    (const MethodInfo_23E268C *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
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
  ServantVoiceEntity_array *Entity_30952508; // x27
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  __int64 v26; // x1
  __int64 v27; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v29; // w22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  VoiceEntity_o *v41; // x19
  __int64 v42; // x10
  __int64 v43; // x8
  ServantVoiceEntity_o *v44; // x23
  __int64 v45; // x0
  System_String_o *v46; // x26
  System_String_o *v47; // x0
  System_String_o *v48; // x24
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_30976504; // x0
  void *IsEnable; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x2
  int condType; // w8
  UserServantCollectionEntity_o *v54; // x8
  __int64 v55; // x24
  __int64 v56; // x23
  __int64 v57; // x0
  __int64 v58; // x1
  bool v59; // w0
  int32_t v60; // w23
  _BOOL8 IsQuestClear_25987760; // x0
  __int64 v62; // x1
  int v63; // w24
  char v64; // w23
  VoiceCondMaster_o *v65; // x0
  UserServantCollectionEntity_o *v66; // x8
  __int64 v67; // x24
  __int64 v68; // x23
  __int64 v69; // x0
  __int64 v70; // x1
  ServantVoiceCond_array *v71; // x14
  __int64 v72; // x11
  __int64 v73; // x24
  char v74; // w9
  char v75; // w10
  char v76; // w8
  ServantVoiceCond_o *v77; // x23
  unsigned int v78; // w11
  WebViewManager_o *v79; // x0
  __int64 v80; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v81; // x0
  __int64 v82; // x1
  WarEntity_o *v83; // x0
  __int64 v84; // x1
  VoiceCondMaster_o *v85; // x0
  WebViewManager_o *v86; // x0
  __int64 v87; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v88; // x0
  __int64 v89; // x1
  _BOOL8 v90; // x0
  __int64 v91; // x1
  ServantVoiceCond_array *v92; // x28
  __int64 v93; // x11
  __int64 v94; // x23
  char v95; // w8
  char v96; // w10
  char v97; // w9
  ServantVoiceCond_o *v98; // x24
  unsigned int v99; // w11
  WebViewManager_o *v100; // x0
  __int64 v101; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v102; // x0
  __int64 v103; // x1
  WarEntity_o *v104; // x0
  __int64 v105; // x1
  int32_t value; // w24
  _BOOL8 v107; // x0
  __int64 v108; // x1
  __int64 v109; // x1
  __int64 v110; // x1
  UserServantCollectionEntity_o *v111; // x8
  __int64 v112; // x24
  __int64 v113; // x23
  __int64 v114; // x1
  int32_t condValue; // w24
  __int64 v116; // x1
  __int64 v117; // x1
  __int64 v118; // x1
  ServantVoiceCond_array *v119; // x12
  __int64 v120; // x10
  __int64 v121; // x24
  char v122; // w13
  char v123; // w9
  char v124; // w8
  ServantVoiceCond_o *v125; // x23
  unsigned int v126; // w10
  DataMasterBase_WarMaster__WarEntity__int__o *v127; // x0
  __int64 v128; // x1
  _BOOL8 v129; // x0
  __int64 v130; // x1
  int64_t v131; // x23
  char v132; // w10
  bool v133; // w8
  char v134; // w23
  UserGameEntity_o *SelfUserGame; // x0
  int64_t v136; // x1
  BalanceConfig_c *v137; // x0
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x24
  System_Func_int__bool__o *v139; // x23
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  BalanceConfig_c *v146; // x0
  __int64 v147; // x1
  const MethodInfo *v148; // x3
  int64_t VtReleaseAt; // x8
  int64_t createdAt; // x23
  bool isEnableBirthdayVoice; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0
  __int64 v153; // x1
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v155; // x3
  VoiceCondMaster_o *v156; // x8
  _BOOL8 v157; // x0
  char v158; // w26
  __int64 v159; // x23
  const MethodInfo *v160; // x1
  __int64 v161; // x0
  __int64 v162; // x1
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  System_Int32_array **v169; // x1
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  System_Int32_array **v176; // x1
  System_String_array **v177; // x2
  System_String_array **v178; // x3
  System_Boolean_array **v179; // x4
  System_Int32_array **v180; // x5
  System_Int32_array *v181; // x6
  System_Int32_array *v182; // x7
  System_Int32_array **v183; // x1
  System_String_array **v184; // x2
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7
  __int64 v190; // x1
  System_Collections_Generic_IEnumerator_T__c *v191; // x8
  unsigned __int64 v192; // x10
  int32_t *v193; // x11
  __int64 v194; // x0
  __int64 v196; // x0
  __int64 v197; // x0
  __int64 v198; // x0
  __int64 v199; // x0
  const MethodInfo *isMateriala; // [xsp+0h] [xbp-120h]
  char v201; // [xsp+18h] [xbp-108h]
  char v202; // [xsp+18h] [xbp-108h]
  char v203; // [xsp+18h] [xbp-108h]
  ServantVoiceCond_array *v204; // [xsp+20h] [xbp-100h]
  int32_t v205; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v206; // [xsp+20h] [xbp-100h]
  int32_t voicePrefix; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixa; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixb; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixc; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixd; // [xsp+28h] [xbp-F8h]
  int64_t voicePrefixe; // [xsp+28h] [xbp-F8h]
  Il2CppObject *object; // [xsp+30h] [xbp-F0h]
  BattleServantConfConponent_o *v214; // [xsp+38h] [xbp-E8h]
  int items_low; // [xsp+40h] [xbp-E0h]
  UserServantCollectionEntity_o **v216; // [xsp+48h] [xbp-D8h]
  int64_t Time; // [xsp+50h] [xbp-D0h]
  char v218; // [xsp+58h] [xbp-C8h]
  int32_t svtVoiceId; // [xsp+5Ch] [xbp-C4h]
  VoiceCondMaster_o *v220; // [xsp+60h] [xbp-C0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v221; // [xsp+68h] [xbp-B8h]
  bool svtIda; // [xsp+70h] [xbp-B0h]
  WarEntity_o *entity; // [xsp+88h] [xbp-98h] BYREF
  WarEntity_o *v226; // [xsp+90h] [xbp-90h] BYREF
  int32_t overwritePriority[2]; // [xsp+98h] [xbp-88h] BYREF
  System_String_o *overwriteNameDefault; // [xsp+A0h] [xbp-80h] BYREF
  System_String_o *overwriteName; // [xsp+A8h] [xbp-78h] BYREF
  bool isInvalidVoiceList; // [xsp+B4h] [xbp-6Ch] BYREF
  ServantVoiceCond_array *conds; // [xsp+B8h] [xbp-68h] BYREF
  int32_t v232; // [xsp+C4h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v233; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v234; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v235; // 0:x0.16

  if ( (byte_42B5EB5 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_BasicHelper_Any_int____68582832);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_VoiceCondMaster___);
    sub_B52984(&Method_DataManager_GetMaster_BeforeBirthDayMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_VoiceInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_VoiceInfo___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_B52984(&System_Collections_Generic_List_VoiceInfo__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__);
    sub_B52984(&VoiceMaster___c__DisplayClass2_0_TypeInfo);
    sub_B52984(&VoiceEntity_TypeInfo);
    sub_B52984(&VoiceInfo_TypeInfo);
    sub_B52984(&StringLiteral_16011/*"_"*/);
    byte_42B5EB5 = 1;
  }
  v232 = 0;
  conds = 0LL;
  isInvalidVoiceList = 0;
  overwriteNameDefault = 0LL;
  overwriteName = 0LL;
  *(_QWORD *)overwritePriority = 0LL;
  entity = 0LL;
  v226 = 0LL;
  v13 = sub_B52A54(VoiceMaster___c__DisplayClass2_0_TypeInfo);
  VoiceMaster___c__DisplayClass2_0___ctor((VoiceMaster___c__DisplayClass2_0_o *)v13, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  MasterData_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  v220 = (VoiceCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_277;
  v232 = ServantLimitAddMaster__getVoicePrefix((ServantLimitAddMaster_o *)Instance, changeSvtVoiceId, limitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_277;
  v17 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  v216 = (UserServantCollectionEntity_o **)(v13 + 16);
  sub_B52920((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)Instance, v18, v19, v20, v21, v22, v23);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_277;
  Entity_30952508 = ServantVoiceMaster__getEntity_30952508(
                      MasterData_WarQuestSelectionMaster,
                      changeSvtVoiceId,
                      limitCount,
                      0LL);
  Time = NetworkManager__getTime(0LL);
  v221 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v221,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_42ADD1E )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42ADD1E = 1;
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
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v26);
  v218 = 0;
  object = (Il2CppObject *)v13;
  v214 = (BattleServantConfConponent_o *)(v13 + 24);
  v29 = isCheckPlayCond;
  svtIda = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_26;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_26:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v27);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v35 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v37 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_33;
      }
      v38 = (__int64)&v35->vtable[*v37].method;
    }
    else
    {
LABEL_33:
      v38 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v34);
    }
    v39 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
            Enumerator,
            *(_QWORD *)(v38 + 8));
    v41 = (VoiceEntity_o *)v39;
    if ( !v39
      || (v42 = *(&VoiceEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)v39 + 300LL) < (unsigned int)v42)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v39 + 200LL) + 8 * v42 - 8) != VoiceEntity_TypeInfo )
    {
      sub_B52A5C(v39, v40);
    }
    if ( !Entity_30952508 )
      sub_B52A5C(v39, v40);
    v43 = *(int *)(v39 + 28);
    if ( (unsigned int)v43 >= Entity_30952508->max_length )
    {
      v196 = sub_B52A88(v39);
      sub_B52A28(v196, 0LL);
    }
    v44 = Entity_30952508->m_Items[v43];
    if ( !v44 )
      continue;
    v45 = *(_QWORD *)(v39 + 16);
    if ( !v45 )
      sub_B52A5C(0LL, v40);
    v46 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v45 + 360LL))(
                               v45,
                               *(_QWORD *)(*(_QWORD *)v45 + 368LL));
    v47 = System_Int32__ToString((int32_t)&v232, 0LL);
    v48 = System_String__Concat_44570600(v47, (System_String_o *)StringLiteral_16011/*"_"*/, v46, 0LL);
    VoiceList_30976504 = ServantVoiceEntity__getVoiceList_30976504(
                           v44,
                           v41->fields.svtVoiceType,
                           v48,
                           disableCondTypeList,
                           v29,
                           0LL);
    if ( !VoiceList_30976504 )
      continue;
    if ( VoiceList_30976504->fields._size < 1 )
      continue;
    if ( !VoiceList_30976504->fields._items->m_Items[0] )
      continue;
    ServantVoiceEntity__getOverwriteData(
      v44,
      v41->fields.svtVoiceType,
      v48,
      &conds,
      &isInvalidVoiceList,
      &overwriteName,
      &overwriteNameDefault,
      &overwritePriority[1],
      svtIda,
      0LL);
    if ( isInvalidVoiceList )
      continue;
    overwritePriority[0] = v41->fields.closedType;
    condType = v41->fields.condType;
    if ( condType > 54 )
    {
      if ( condType <= 92 )
      {
        if ( condType == 56 )
        {
          v92 = conds;
          if ( conds && (v93 = *(_QWORD *)&conds->max_length) != 0 )
          {
            if ( (int)v93 >= 1 )
            {
              v94 = 0LL;
              v95 = 0;
              v96 = 0;
              v97 = 0;
              voicePrefixc = conds->m_Items;
              do
              {
                if ( (unsigned int)v94 >= (unsigned int)v93 )
                {
                  v199 = sub_B52A88(IsEnable);
                  sub_B52A28(v199, 0LL);
                }
                v98 = voicePrefixc[v94];
                if ( !v98 )
                  sub_B52A5C(IsEnable, v51);
                v99 = v98->fields.condType;
                if ( v99 <= 0x13 && ((1 << v99) & 0xCE000) != 0 && v98->fields.value >= 1 )
                {
                  v100 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v100 )
                    sub_B52A5C(0LL, v101);
                  v102 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)v100,
                                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v102 )
                    sub_B52A5C(0LL, v103);
                  v104 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           v102,
                           v98->fields.value,
                           (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v104 && Time >= v104->fields.targetId )
                  {
                    value = v98->fields.value;
                    v205 = v232;
                    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CondType_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    }
                    v107 = CondType__IsServantGetBeforeEventEnd(svtId, value, 0LL);
                    if ( !v220 )
                      sub_B52A5C(v107, v108);
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v220,
                                         overwritePriority,
                                         svtVoiceId,
                                         v46,
                                         v205,
                                         v107,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v95 = (unsigned __int8)IsEnable & 1;
                    v97 = 1;
                    v96 = 1;
                  }
                  else
                  {
                    if ( !v220 )
                      sub_B52A5C(0LL, v105);
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v220,
                                         overwritePriority,
                                         svtVoiceId,
                                         v46,
                                         v232,
                                         0,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v96 = (unsigned __int8)IsEnable & 1;
                    v97 = 1;
                    v95 = (unsigned __int8)IsEnable & 1;
                  }
                }
                LODWORD(v93) = v92->max_length;
                ++v94;
              }
              while ( (int)v94 < (int)v93 );
              if ( (v97 & 1) != 0 )
              {
                v63 = v96 & 1;
                v64 = v95 & 1;
                goto LABEL_253;
              }
            }
            v65 = v220;
            if ( !v220 )
              sub_B52A5C(0LL, v51);
          }
          else
          {
            v65 = v220;
            if ( !v220 )
              sub_B52A5C(0LL, v51);
          }
          goto LABEL_245;
        }
        if ( condType == 92 )
        {
          if ( !v220 )
            sub_B52A5C(0LL, v51);
          v59 = VoiceCondMaster__IsEnable(
                  v220,
                  overwritePriority,
                  svtVoiceId,
                  v46,
                  v232,
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
          v66 = *v216;
          if ( !*v216 )
            sub_B52A5C(IsEnable, v51);
          v67 = *(_QWORD *)&v66->fields.friendshipRank.fields.currentCryptoKey;
          v68 = *(_QWORD *)&v66->fields.friendshipRank.fields.fakeValue;
          voicePrefixa = v232;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v234.fields.currentCryptoKey = v67;
          *(_QWORD *)&v234.fields.fakeValue = v68;
          v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v234, 0LL);
          if ( !v220 )
            sub_B52A5C(v69, v70);
LABEL_74:
          v59 = VoiceCondMaster__IsEnable(
                  v220,
                  overwritePriority,
                  svtVoiceId,
                  v46,
                  voicePrefixa,
                  (int)v69 >= v41->fields.condValue,
                  svtId,
                  &overwriteNameDefault,
                  isMateriala);
          goto LABEL_252;
        }
        if ( condType == 99 )
        {
          v54 = *v216;
          if ( !*v216 )
            sub_B52A5C(IsEnable, v51);
          v55 = *(_QWORD *)&v54->fields.friendshipRank.fields.currentCryptoKey;
          v56 = *(_QWORD *)&v54->fields.friendshipRank.fields.fakeValue;
          voicePrefix = v232;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v233.fields.currentCryptoKey = v55;
          *(_QWORD *)&v233.fields.fakeValue = v56;
          v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v233, 0LL);
          if ( !v220 )
            sub_B52A5C(v57, v58);
          v59 = VoiceCondMaster__IsEnable(
                  v220,
                  overwritePriority,
                  svtVoiceId,
                  v46,
                  voicePrefix,
                  (int)v57 <= v41->fields.condValue,
                  svtId,
                  &overwriteNameDefault,
                  isMateriala);
          goto LABEL_252;
        }
      }
LABEL_227:
      v63 = 1;
LABEL_228:
      v64 = 1;
      goto LABEL_253;
    }
    if ( condType <= 21 )
    {
      v63 = 1;
      v64 = 1;
      switch ( condType )
      {
        case 0:
          v65 = v220;
          if ( !v220 )
            sub_B52A5C(0LL, v51);
          goto LABEL_245;
        case 1:
          v60 = v232;
          condValue = v41->fields.condValue;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_25987760 = CondType__IsQuestClear_25987760(condValue, -1, 0, 0LL);
          if ( !v220 )
            sub_B52A5C(IsQuestClear_25987760, v116);
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
          if ( !*v216 )
            sub_B52A5C(IsEnable, v51);
          if ( !v220 )
            sub_B52A5C(0LL, v51);
          v59 = VoiceCondMaster__IsEnable(
                  v220,
                  overwritePriority,
                  svtVoiceId,
                  v46,
                  v232,
                  (*v216)->fields.maxLv >= v41->fields.condValue,
                  svtId,
                  &overwriteNameDefault,
                  isMateriala);
          goto LABEL_252;
        case 7:
          if ( !*v216 )
            sub_B52A5C(IsEnable, v51);
          if ( !v220 )
            sub_B52A5C(0LL, v51);
          v59 = VoiceCondMaster__IsEnable(
                  v220,
                  overwritePriority,
                  svtVoiceId,
                  v46,
                  v232,
                  (*v216)->fields.maxLimitCount >= v41->fields.condValue,
                  svtId,
                  &overwriteNameDefault,
                  isMateriala);
          goto LABEL_252;
        case 8:
          if ( !*v216 )
            sub_B52A5C(0LL, v51);
          v60 = v232;
          IsQuestClear_25987760 = UserServantCollectionEntity__IsGet(*v216, 0LL);
          if ( !v220 )
            sub_B52A5C(IsQuestClear_25987760, v110);
          goto LABEL_164;
        case 9:
          v111 = *v216;
          if ( !*v216 )
            sub_B52A5C(IsEnable, v51);
          v112 = *(_QWORD *)&v111->fields.friendshipRank.fields.currentCryptoKey;
          v113 = *(_QWORD *)&v111->fields.friendshipRank.fields.fakeValue;
          voicePrefixa = v232;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v235.fields.currentCryptoKey = v112;
          *(_QWORD *)&v235.fields.fakeValue = v113;
          v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v235, 0LL);
          if ( !v220 )
            sub_B52A5C(v69, v114);
          goto LABEL_74;
        case 17:
          if ( !*v216 )
            sub_B52A5C(0LL, v51);
          v60 = v232;
          IsQuestClear_25987760 = UserServantCollectionEntity__IsPlayed(*v216, v41->fields.condValue, 0LL);
          if ( !v220 )
            sub_B52A5C(IsQuestClear_25987760, v117);
          goto LABEL_164;
        case 18:
          if ( !*v216 )
            sub_B52A5C(0LL, v51);
          v60 = v232;
          IsQuestClear_25987760 = UserServantCollectionEntity__IsLimitCountMax(*v216, 0LL);
          if ( !v220 )
            sub_B52A5C(IsQuestClear_25987760, v118);
          goto LABEL_164;
        case 19:
          SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
          if ( !SelfUserGame )
            sub_B52A5C(0LL, v136);
          if ( SelfUserGame->fields.birthDay < 1 )
          {
            v157 = 0LL;
          }
          else
          {
            voicePrefixe = SelfUserGame->fields.birthDay;
            v137 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v137 = BalanceConfig_TypeInfo;
            }
            ServantIdsBirthdayBeforeValentine = v137->static_fields->ServantIdsBirthdayBeforeValentine;
            v139 = (System_Func_int__bool__o *)v214->klass;
            if ( !v214->klass )
            {
              v139 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
              System_Func_int__bool____ctor(
                v139,
                object,
                Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__,
                (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
              v214->klass = (BattleServantConfConponent_c *)v139;
              sub_B52920(v214, (System_Int32_array **)v139, v140, v141, v142, v143, v144, v145);
            }
            v146 = (BalanceConfig_c *)BasicHelper__Any_int__27531732(
                                        ServantIdsBirthdayBeforeValentine,
                                        (System_Func_T__bool__o *)v139,
                                        (const MethodInfo_1A419D4 *)Method_BasicHelper_Any_int____68582832);
            if ( ((unsigned __int8)v146 & 1) != 0 )
            {
              v146 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v146 = BalanceConfig_TypeInfo;
              }
              VtReleaseAt = v146->static_fields->VtReleaseAt;
              if ( VtReleaseAt >= 1 )
              {
                if ( !*v216 )
                  sub_B52A5C(v146, v147);
                createdAt = (*v216)->fields.createdAt;
                if ( (BYTE3(v146->vtable._0_Equals.methodPtr) & 4) != 0 && !v146->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v146);
                  VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
                }
                if ( createdAt < VtReleaseAt )
                  goto LABEL_227;
              }
            }
            if ( !*v216 )
              sub_B52A5C(v146, v147);
            isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                      (VoiceMaster_o *)v146,
                                      voicePrefixe,
                                      (*v216)->fields.createdAt,
                                      v148);
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
            if ( !Master_WarQuestSelectionMaster )
              sub_B52A5C(0LL, v153);
            SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                             Master_WarQuestSelectionMaster,
                             (const MethodInfo_23E25C4 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
            v156 = v220;
            if ( isEnableBirthdayVoice )
            {
              v157 = 1LL;
              if ( !v220 )
LABEL_261:
                sub_B52A5C(v157, v136);
LABEL_251:
              v59 = VoiceCondMaster__IsEnable(
                      v156,
                      overwritePriority,
                      svtVoiceId,
                      v46,
                      v232,
                      v157,
                      svtId,
                      &overwriteNameDefault,
                      isMateriala);
LABEL_252:
              v64 = v59;
              v63 = 1;
              goto LABEL_253;
            }
            if ( !SingleEntity )
              sub_B52A5C(0LL, v136);
            v136 = (int64_t)SingleEntity[1].klass;
            if ( v136 < 1 )
            {
              v157 = 0LL;
              if ( !v220 )
                goto LABEL_261;
              goto LABEL_251;
            }
            if ( !*v216 )
              sub_B52A5C(SingleEntity, v136);
            v157 = VoiceMaster__isEnableBirthdayVoice(
                     (VoiceMaster_o *)SingleEntity,
                     v136,
                     (*v216)->fields.createdAt,
                     v155);
          }
          v156 = v220;
          if ( !v220 )
            goto LABEL_261;
          goto LABEL_251;
        case 20:
          v119 = conds;
          if ( conds && (v120 = *(_QWORD *)&conds->max_length) != 0 )
          {
            if ( (int)v120 >= 1 )
            {
              v121 = 0LL;
              v122 = 0;
              v123 = 0;
              v124 = 0;
              v206 = conds;
              voicePrefixd = conds->m_Items;
              do
              {
                if ( (unsigned int)v121 >= (unsigned int)v120 )
                {
                  v197 = sub_B52A88(IsEnable);
                  sub_B52A28(v197, 0LL);
                }
                v125 = voicePrefixd[v121];
                if ( !v125 )
                  sub_B52A5C(IsEnable, v51);
                v126 = v125->fields.condType;
                if ( v126 <= 0x13 && ((1 << v126) & 0xCE000) != 0 && v125->fields.value >= 1 )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  v127 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventMaster___);
                  if ( !v127 )
                    sub_B52A5C(0LL, v128);
                  v129 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           v127,
                           &v226,
                           v125->fields.value,
                           (const MethodInfo_23E2334 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
                  if ( !v129 )
                    goto LABEL_181;
                  if ( !v226 )
                    sub_B52A5C(v129, v130);
                  if ( Time >= v226->fields.targetId )
                  {
                    if ( !v220 )
                      sub_B52A5C(0LL, v130);
                    v131 = *(_QWORD *)&v226->fields.eventId;
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v220,
                                         overwritePriority,
                                         svtVoiceId,
                                         v46,
                                         v232,
                                         Time >= v131,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v132 = (char)IsEnable;
                    if ( (items_low != 0) | v218 & 1 )
                    {
                      v133 = 0;
                    }
                    else
                    {
                      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        v201 = (char)IsEnable;
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                        v132 = v201;
                      }
                      if ( !byte_42B5EC8 )
                      {
                        v202 = v132;
                        sub_B52984(&NetworkManager_TypeInfo);
                        v132 = v202;
                        byte_42B5EC8 = 1;
                      }
                      IsEnable = NetworkManager_TypeInfo;
                      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        v203 = v132;
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                        v132 = v203;
                        IsEnable = NetworkManager_TypeInfo;
                      }
                      if ( !v226 )
                        sub_B52A5C(IsEnable, v51);
                      v133 = *(_QWORD *)(*((_QWORD *)IsEnable + 23) + 24LL) < *(_QWORD *)&v226->fields.eventId;
                    }
                    v119 = v206;
                    v122 = v132 & 1;
                    if ( v133 && Time >= v131 )
                    {
                      v134 = v132 & 1;
                      if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
                        sub_B52A5C(0LL, v51);
                      if ( !byte_42AF75E )
                      {
                        sub_B52984(&DataManager_TypeInfo);
                        byte_42AF75E = 1;
                      }
                      IsEnable = DataManager_TypeInfo;
                      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !DataManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                        IsEnable = DataManager_TypeInfo;
                      }
                      if ( !v226 )
                        sub_B52A5C(IsEnable, v51);
                      v119 = v206;
                      v124 = 1;
                      v122 = v134;
                      v218 |= *(_QWORD *)(*((_QWORD *)IsEnable + 23) + 24LL) < *(_QWORD *)&v226->fields.eventId;
                    }
                    else
                    {
                      v124 = 1;
                    }
                    v123 = 1;
                  }
                  else
                  {
LABEL_181:
                    if ( !v220 )
                      sub_B52A5C(0LL, v130);
                    IsEnable = (void *)VoiceCondMaster__IsEnable(
                                         v220,
                                         overwritePriority,
                                         svtVoiceId,
                                         v46,
                                         v232,
                                         0,
                                         svtId,
                                         &overwriteNameDefault,
                                         isMateriala);
                    v119 = v206;
                    v123 = (unsigned __int8)IsEnable & 1;
                    v124 = 1;
                    v122 = (unsigned __int8)IsEnable & 1;
                  }
                }
                LODWORD(v120) = v119->max_length;
                ++v121;
              }
              while ( (int)v121 < (int)v120 );
              if ( (v124 & 1) != 0 )
              {
                v63 = v123 & 1;
                v64 = v122 & 1;
                goto LABEL_253;
              }
            }
            v65 = v220;
            if ( !v220 )
              sub_B52A5C(0LL, v51);
          }
          else
          {
            v65 = v220;
            if ( !v220 )
              sub_B52A5C(0LL, v51);
          }
          goto LABEL_245;
        case 21:
          if ( !*v216 )
            sub_B52A5C(0LL, v51);
          v60 = v232;
          IsQuestClear_25987760 = UserServantCollectionEntity__IsFinded(*v216, 0LL);
          if ( !v220 )
            sub_B52A5C(IsQuestClear_25987760, v109);
          goto LABEL_164;
        default:
          goto LABEL_228;
      }
    }
    if ( condType != 31 )
    {
      if ( condType == 54 )
      {
        if ( !*v216 )
          sub_B52A5C(0LL, v51);
        v60 = v232;
        IsQuestClear_25987760 = UserServantCollectionEntity__IsCostumeGet(*v216, limitCount, 0LL);
        if ( !v220 )
          sub_B52A5C(IsQuestClear_25987760, v62);
LABEL_164:
        v59 = VoiceCondMaster__IsEnable(
                v220,
                overwritePriority,
                svtVoiceId,
                v46,
                v60,
                IsQuestClear_25987760,
                svtId,
                &overwriteNameDefault,
                isMateriala);
        goto LABEL_252;
      }
      goto LABEL_227;
    }
    v71 = conds;
    if ( !conds || (v72 = *(_QWORD *)&conds->max_length) == 0 )
    {
      v65 = v220;
      if ( !v220 )
        sub_B52A5C(0LL, v51);
      goto LABEL_245;
    }
    if ( (int)v72 < 1 )
      goto LABEL_231;
    v73 = 0LL;
    v74 = 0;
    v75 = 0;
    v76 = 0;
    v204 = conds;
    voicePrefixb = conds->m_Items;
    do
    {
      if ( (unsigned int)v73 >= (unsigned int)v72 )
      {
        v198 = sub_B52A88(IsEnable);
        sub_B52A28(v198, 0LL);
      }
      v77 = voicePrefixb[v73];
      if ( !v77 )
        sub_B52A5C(IsEnable, v51);
      v78 = v77->fields.condType;
      if ( v78 <= 0x13 )
      {
        if ( ((1 << v78) & 0xCE000) != 0 )
        {
          if ( v77->fields.value < 1 )
            goto LABEL_103;
          v79 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v79 )
            sub_B52A5C(0LL, v80);
          v81 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)v79,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v81 )
            sub_B52A5C(0LL, v82);
          v83 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                  v81,
                  v77->fields.value,
                  (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !v83 || Time < v83->fields.targetId )
          {
            v85 = v220;
            if ( !v220 )
              sub_B52A5C(0LL, v84);
            goto LABEL_89;
          }
          if ( !v220 )
            sub_B52A5C(v83, v84);
          IsEnable = (void *)VoiceCondMaster__IsEnable(
                               v220,
                               overwritePriority,
                               svtVoiceId,
                               v46,
                               v232,
                               Time >= *(_QWORD *)&v83->fields.eventId,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
          goto LABEL_101;
        }
        if ( v78 == 16 && v77->fields.value >= 1 )
        {
          v86 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v86 )
            sub_B52A5C(0LL, v87);
          v88 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)v86,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
          if ( !v88 )
            sub_B52A5C(0LL, v89);
          v90 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  v88,
                  &entity,
                  v77->fields.value,
                  (const MethodInfo_23E2334 *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
          if ( !v90 )
            goto LABEL_97;
          if ( !entity )
            sub_B52A5C(v90, v91);
          if ( Time < (__int64)entity->fields.longName )
          {
LABEL_97:
            v85 = v220;
            if ( !v220 )
              sub_B52A5C(0LL, v91);
LABEL_89:
            IsEnable = (void *)VoiceCondMaster__IsEnable(
                                 v85,
                                 overwritePriority,
                                 svtVoiceId,
                                 v46,
                                 v232,
                                 0,
                                 svtId,
                                 &overwriteNameDefault,
                                 isMateriala);
            v75 = (unsigned __int8)IsEnable & 1;
            v76 = 1;
            v74 = (unsigned __int8)IsEnable & 1;
LABEL_102:
            v71 = v204;
            goto LABEL_103;
          }
          if ( !v220 )
            sub_B52A5C(0LL, v91);
          IsEnable = (void *)VoiceCondMaster__IsEnable(
                               v220,
                               overwritePriority,
                               svtVoiceId,
                               v46,
                               v232,
                               1,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
LABEL_101:
          v74 = (unsigned __int8)IsEnable & 1;
          v76 = 1;
          v75 = 1;
          goto LABEL_102;
        }
      }
LABEL_103:
      LODWORD(v72) = v71->max_length;
      ++v73;
    }
    while ( (int)v73 < (int)v72 );
    if ( (v76 & 1) != 0 )
    {
      v63 = v75 & 1;
      v64 = v74 & 1;
      goto LABEL_253;
    }
LABEL_231:
    v65 = v220;
    if ( !v220 )
      sub_B52A5C(0LL, v51);
LABEL_245:
    v63 = 1;
    v64 = VoiceCondMaster__IsEnable(
            v65,
            overwritePriority,
            svtVoiceId,
            v46,
            v232,
            1,
            svtId,
            &overwriteNameDefault,
            isMateriala);
LABEL_253:
    v158 = v64 & VoiceEntity__IsCondEnable(v41, svtId, v52);
    if ( (v158 & 1) != 0 )
    {
      if ( v63 )
      {
LABEL_257:
        v159 = sub_B52A54(VoiceInfo_TypeInfo);
        VoiceInfo___ctor((VoiceInfo_o *)v159, v160);
        if ( !v159 )
          sub_B52A5C(v161, v162);
        *(_QWORD *)(v159 + 16) = v41;
        sub_B52920(
          (BattleServantConfConponent_o *)(v159 + 16),
          (System_Int32_array **)v41,
          v163,
          v164,
          v165,
          v166,
          v167,
          v168);
        *(_BYTE *)(v159 + 24) = v158 & 1;
        v169 = (System_Int32_array **)overwriteName;
        *(_QWORD *)(v159 + 32) = overwriteName;
        sub_B52920((BattleServantConfConponent_o *)(v159 + 32), v169, v170, v171, v172, v173, v174, v175);
        v176 = (System_Int32_array **)overwriteNameDefault;
        *(_QWORD *)(v159 + 40) = overwriteNameDefault;
        sub_B52920((BattleServantConfConponent_o *)(v159 + 40), v176, v177, v178, v179, v180, v181, v182);
        *(_DWORD *)(v159 + 48) = overwritePriority[1];
        *(_DWORD *)(v159 + 52) = v232;
        v183 = (System_Int32_array **)conds;
        *(_QWORD *)(v159 + 56) = conds;
        sub_B52920((BattleServantConfConponent_o *)(v159 + 56), v183, v184, v185, v186, v187, v188, v189);
        if ( !v221 )
          sub_B52A5C(0LL, v190);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v221,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v159,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_VoiceInfo__Add__);
      }
    }
    else if ( ((unsigned __int8)v63 & (overwritePriority[0] != 2)) != 0 )
    {
      goto LABEL_257;
    }
  }
  v191 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v192 = 0LL;
    v193 = &v191->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v193 - 1) != System_IDisposable_TypeInfo )
    {
      ++v192;
      v193 += 4;
      if ( v192 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_266;
    }
    v194 = (__int64)&v191->vtable[*v193].method;
  }
  else
  {
LABEL_266:
    v194 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v34);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v194)(
    Enumerator,
    *(_QWORD *)(v194 + 8));
  if ( (v218 & 1) != 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_277;
    NetworkManager__GoToTitleDialog((NetworkManager_o *)Instance, 0LL);
  }
  Instance = (DataManager_o *)v221;
  if ( !v221 )
LABEL_277:
    sub_B52A5C(Instance, v15);
  return (VoiceInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v221,
                              (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
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
  __int64 v10; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  _QWORD *v20; // x0
  __int64 v21; // x1
  _QWORD *v22; // x21
  __int64 v23; // x10
  __int64 v24; // x0
  System_String_o *v25; // x1
  System_String_o *v26; // x0
  int v27; // w8
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  int v33; // [xsp+0h] [xbp-50h]

  if ( (byte_42B5EB7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&VoiceEntity_TypeInfo);
    sub_B52984(&StringLiteral_16011/*"_"*/);
    byte_42B5EB7 = 1;
  }
  v7 = 0;
  if ( !System_String__IsNullOrEmpty(labelName, 0LL) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      sub_B52A5C(0LL, v6);
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B52A5C(0LL, v9);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v13 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v13;
          p_offset += 4;
          if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v10);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v16 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v17 = 0LL;
        v18 = &v16->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v17;
          v18 += 4;
          if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v19 = (__int64)&v16->vtable[*v18].method;
      }
      else
      {
LABEL_17:
        v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v10);
      }
      v20 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                        Enumerator,
                        *(_QWORD *)(v19 + 8));
      v22 = v20;
      if ( !v20
        || (v23 = *(&VoiceEntity_TypeInfo->_2.bitflags2 + 1), *(unsigned __int8 *)(*v20 + 300LL) < (unsigned int)v23)
        || *(VoiceEntity_c **)(*(_QWORD *)(*v20 + 200LL) + 8 * v23 - 8) != VoiceEntity_TypeInfo )
      {
        sub_B52A5C(v20, v21);
      }
      v24 = v20[2];
      if ( !v24 )
        sub_B52A5C(0LL, v21);
      v25 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 360LL))(
                                 v24,
                                 *(_QWORD *)(*(_QWORD *)v24 + 368LL));
      v26 = System_String__Concat_44568316((System_String_o *)StringLiteral_16011/*"_"*/, v25, 0LL);
      if ( !labelName )
        sub_B52A5C(v26, v26);
      if ( System_String__EndsWith(labelName, v26, 0LL) )
      {
        v7 = *((_DWORD *)v22 + 15);
        v27 = 98;
        goto LABEL_27;
      }
    }
    v27 = 96;
    v7 = 0;
LABEL_27:
    v33 = v27;
    v28 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_31:
      v31 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v10);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
      Enumerator,
      *(_QWORD *)(v31 + 8));
    if ( v33 == 96 )
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
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  _QWORD *v23; // x0
  __int64 v24; // x1
  _DWORD *v25; // x23
  __int64 v26; // x10
  __int64 v27; // x0
  System_String_o *v28; // x1
  System_String_o *v29; // x0
  WebViewManager_o *Instance; // x0
  __int64 v31; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v35; // x1
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  int v41; // [xsp+0h] [xbp-60h]

  if ( (byte_42B5EB6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&VoiceEntity_TypeInfo);
    sub_B52984(&StringLiteral_16011/*"_"*/);
    byte_42B5EB6 = 1;
  }
  v10 = 0;
  if ( !System_String__IsNullOrEmpty(labelName, 0LL) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      sub_B52A5C(0LL, v9);
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B52A5C(0LL, v12);
    do
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v16 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v16;
          p_offset += 4;
          if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        goto LABEL_35;
      v19 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v20 = 0LL;
        v21 = &v19->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v20;
          v21 += 4;
          if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v22 = (__int64)&v19->vtable[*v21].method;
      }
      else
      {
LABEL_17:
        v22 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v13);
      }
      v23 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                        Enumerator,
                        *(_QWORD *)(v22 + 8));
      v25 = v23;
      if ( !v23
        || (v26 = *(&VoiceEntity_TypeInfo->_2.bitflags2 + 1), *(unsigned __int8 *)(*v23 + 300LL) < (unsigned int)v26)
        || *(VoiceEntity_c **)(*(_QWORD *)(*v23 + 200LL) + 8 * v26 - 8) != VoiceEntity_TypeInfo )
      {
        sub_B52A5C(v23, v24);
      }
      v27 = v23[2];
      if ( !v27 )
        sub_B52A5C(0LL, v24);
      v28 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 360LL))(
                                 v27,
                                 *(_QWORD *)(*(_QWORD *)v27 + 368LL));
      v29 = System_String__Concat_44568316((System_String_o *)StringLiteral_16011/*"_"*/, v28, 0LL);
      if ( !labelName )
        sub_B52A5C(v29, v29);
    }
    while ( !System_String__EndsWith(labelName, v29, 0LL) );
    if ( v25[12] != 17 && v25[7] != 1 )
    {
LABEL_35:
      v10 = 0;
      v41 = 178;
      goto LABEL_36;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B52A5C(0LL, v31);
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B52A5C(UserId, UserId);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                         MasterData_WarQuestSelectionMaster,
                         UserId,
                         svtId,
                         0LL);
    v35 = (unsigned int)v25[14];
    if ( isUpdate )
    {
      if ( !EntityDefinitely )
        sub_B52A5C(0LL, v35);
      if ( !UserServantCollectionEntity__SetPlayed(EntityDefinitely, v35, 0LL) )
        goto LABEL_35;
    }
    else
    {
      if ( !EntityDefinitely )
        sub_B52A5C(0LL, v35);
      if ( UserServantCollectionEntity__IsPlayed(EntityDefinitely, v35, 0LL) )
        goto LABEL_35;
    }
    v10 = v25[14];
    v41 = 180;
LABEL_36:
    v36 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_40;
      }
      v39 = (__int64)&v36->vtable[*v38].method;
    }
    else
    {
LABEL_40:
      v39 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v13);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
      Enumerator,
      *(_QWORD *)(v39 + 8));
    if ( v41 == 178 )
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
  int64_t Time_25741128; // x21
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

  if ( (byte_42B5EB4 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B5EB4 = 1;
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
  dateData = NetworkManager__getServerDateTime_25742200(createDay, 0LL).fields.dateData;
  v18 = NetworkManager__getDateTime_25741912(userBirthDay, 0LL).fields.dateData;
  v20.fields.dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v20, 0LL);
  v21.fields.dateData = (uint64_t)&v18;
  Month = System_DateTime__get_Month(v21, 0LL);
  v22.fields.dateData = (uint64_t)&v18;
  Day = System_DateTime__get_Day(v22, 0LL);
  v15 = 0LL;
  v23.fields.dateData = (uint64_t)&v15;
  System_DateTime___ctor_15505916(v23, Year, Month, Day, 0LL);
  dateTime.fields.dateData = v15;
  v24.fields.dateData = (uint64_t)&dateData;
  v9 = System_DateTime__get_Year(v24, 0LL);
  v25.fields.dateData = (uint64_t)&v18;
  v10 = System_DateTime__get_Month(v25, 0LL);
  v26.fields.dateData = (uint64_t)&v18;
  v11 = System_DateTime__get_Day(v26, 0LL);
  v15 = 0LL;
  v27.fields.dateData = (uint64_t)&v15;
  System_DateTime___ctor_15505916(v27, v9 + 1, v10, v11, 0LL);
  v16.fields.dateData = v15;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  ServerTime = NetworkManager__getServerTime(0LL);
  v28.fields.dateData = dateTime.fields.dateData;
  Time_25741128 = NetworkManager__getTime_25741128(v28, 0LL);
  v29.fields.dateData = v16.fields.dateData;
  return NetworkManager__getTime_25741128(v29, 0LL) <= ServerTime
      || Time_25741128 + 86400 >= createDay && Time_25741128 <= ServerTime;
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
  if ( (byte_42AE5BD & 1) == 0 )
  {
    this = (VoiceMaster___c__DisplayClass2_0_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE5BD = 1;
  }
  userStvCollectionEntity = v4->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_B52A5C(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v9, 0LL) == id;
}