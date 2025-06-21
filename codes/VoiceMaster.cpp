void __fastcall VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D5AF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__, method);
    byte_4B1D5AF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    136,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
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
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  ServantVoiceEntity_array *Entity_41959312; // x29
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  __int64 v60; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v62; // w26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v64; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v67; // x8
  __int64 v68; // x9
  int32_t *v69; // x10
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  VoiceEntity_o *v74; // x24
  __int64 methodPtr_low; // x10
  __int64 v76; // x8
  ServantVoiceEntity_o *v77; // x27
  __int64 v78; // x0
  System_String_o *v79; // x19
  System_String_o *v80; // x0
  System_String_o *v81; // x22
  System_Collections_Generic_List_object__o *VoiceList_41942612; // x0
  DataManager_c *v83; // x0
  __int64 v84; // x1
  const MethodInfo *v85; // x2
  int condType; // w8
  UserServantCollectionEntity_o *v87; // x8
  __int64 v88; // x27
  __int64 v89; // x22
  __int64 v90; // x0
  __int64 v91; // x1
  _BOOL4 IsEnable; // w0
  int32_t v93; // w22
  _BOOL8 IsQuestClear_39516796; // x0
  __int64 v95; // x1
  int v96; // w22
  int v97; // w27
  VoiceCondMaster_o *v98; // x0
  UserServantCollectionEntity_o *v99; // x8
  __int64 v100; // x27
  __int64 v101; // x22
  __int64 v102; // x0
  __int64 v103; // x1
  ServantVoiceCond_array *v104; // x14
  __int64 v105; // x11
  __int64 v106; // x27
  char v107; // w9
  char v108; // w10
  char v109; // w8
  ServantVoiceCond_o *v110; // x22
  unsigned int v111; // w11
  Il2CppObject *v112; // x0
  __int64 v113; // x1
  Il2CppObject *v114; // x0
  __int64 v115; // x1
  Il2CppObject *v116; // x0
  __int64 v117; // x1
  VoiceCondMaster_o *v118; // x0
  Il2CppObject *v119; // x0
  __int64 v120; // x1
  Il2CppObject *v121; // x0
  __int64 v122; // x1
  _BOOL8 v123; // x0
  __int64 v124; // x1
  ServantVoiceCond_array *v125; // x13
  __int64 v126; // x11
  __int64 v127; // x22
  char v128; // w8
  char v129; // w10
  char v130; // w9
  ServantVoiceCond_o *v131; // x27
  unsigned int v132; // w11
  Il2CppObject *v133; // x0
  __int64 v134; // x1
  Il2CppObject *v135; // x0
  __int64 v136; // x1
  Il2CppObject *v137; // x0
  __int64 v138; // x1
  int32_t value; // w27
  _BOOL8 v140; // x0
  __int64 v141; // x1
  __int64 v142; // x1
  __int64 v143; // x1
  UserServantCollectionEntity_o *v144; // x8
  __int64 v145; // x27
  __int64 v146; // x22
  __int64 v147; // x1
  int32_t condValue; // w27
  __int64 v149; // x1
  __int64 v150; // x1
  __int64 v151; // x1
  ServantVoiceCond_array *v152; // x12
  __int64 v153; // x10
  __int64 v154; // x22
  char v155; // w13
  char v156; // w9
  char v157; // w8
  ServantVoiceCond_o *v158; // x27
  unsigned int v159; // w10
  Il2CppObject *v160; // x0
  __int64 v161; // x1
  _BOOL8 v162; // x0
  __int64 v163; // x1
  Il2CppClass *v164; // x27
  bool v165; // w8
  NetworkManager_c *v166; // x0
  struct NetworkManager_StaticFields *static_fields; // x9
  char v168; // w27
  UserGameEntity_o *SelfUserGame; // x0
  int64_t v170; // x1
  BalanceConfig_c *v171; // x0
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x22
  System_Func_int__bool__o *v173; // x27
  int32_t v174; // w2
  const MethodInfo *v175; // x3
  BalanceConfig_c *v176; // x0
  __int64 v177; // x1
  const MethodInfo *v178; // x3
  int64_t VtReleaseAt; // x8
  int64_t createdAt; // x22
  bool isEnableBirthdayVoice; // w22
  Il2CppObject *Master_object; // x0
  __int64 v183; // x1
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v185; // x3
  _BOOL8 v186; // x0
  int v187; // w27
  __int64 v188; // x19
  __int64 v189; // x0
  __int64 v190; // x1
  int32_t v191; // w2
  const MethodInfo *v192; // x3
  int32_t v193; // w1
  int32_t v194; // w2
  const MethodInfo *v195; // x3
  int32_t v196; // w1
  int32_t v197; // w2
  const MethodInfo *v198; // x3
  int32_t v199; // w8
  int32_t v200; // w1
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  __int64 v203; // x0
  __int64 v204; // x1
  int32_t v205; // w2
  const MethodInfo *v206; // x3
  struct System_Object_array *items; // x8
  _QWORD *v208; // x9
  __int64 size; // x10
  Il2CppClass **v210; // x0
  System_Collections_Generic_IEnumerator_T__c *v211; // x8
  __int64 v212; // x9
  int32_t *v213; // x10
  __int64 v214; // x0
  VoiceInfo_array *result; // x0
  const MethodInfo *isMateriala; // [xsp+0h] [xbp-120h]
  unsigned int v217; // [xsp+18h] [xbp-108h]
  int32_t v218; // [xsp+1Ch] [xbp-104h]
  ServantVoiceCond_array *v219; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v220; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v221; // [xsp+20h] [xbp-100h]
  int32_t voicePrefix; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixa; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixb; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixc; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixd; // [xsp+28h] [xbp-F8h]
  int64_t voicePrefixe; // [xsp+28h] [xbp-F8h]
  CGThumbnailListItem_o *p_monitor; // [xsp+30h] [xbp-F0h]
  int v229; // [xsp+38h] [xbp-E8h]
  UserServantCollectionEntity_o **v230; // [xsp+40h] [xbp-E0h]
  int64_t Time; // [xsp+48h] [xbp-D8h]
  int32_t svtVoiceId; // [xsp+54h] [xbp-CCh]
  char v233; // [xsp+64h] [xbp-BCh]
  System_Collections_Generic_List_object__o *v234; // [xsp+68h] [xbp-B8h]
  Il2CppObject *object; // [xsp+70h] [xbp-B0h]
  _DWORD v236[3]; // [xsp+7Ch] [xbp-A4h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-98h] BYREF
  __int64 closedType; // [xsp+90h] [xbp-90h] BYREF
  System_String_o *overwriteNameDefault; // [xsp+98h] [xbp-88h] BYREF
  System_String_o *overwriteName; // [xsp+A0h] [xbp-80h] BYREF
  bool isInvalidVoiceList; // [xsp+ACh] [xbp-74h] BYREF
  ServantVoiceCond_array *conds; // [xsp+B0h] [xbp-70h] BYREF
  int32_t v243; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v244; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v245; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v246; // 0:x0.16

  if ( (byte_4B1D5B1 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_BasicHelper_Any_int____76918080, v15);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__, v16);
    sub_1BCAFF8(&CondType_TypeInfo, v17);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, v18);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___, v19);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v20);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v21);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v22);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_VoiceCondMaster___, v23);
    sub_1BCAFF8(&Method_DataManager_GetMaster_BeforeBirthDayMaster___, v24);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMaster___, v25);
    sub_1BCAFF8(&DataManager_TypeInfo, v26);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v27);
    sub_1BCAFF8(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__, v28);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v29);
    sub_1BCAFF8(
      &Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__,
      v30);
    sub_1BCAFF8(&System_Func_int__bool__TypeInfo, v31);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v32);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, v33);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v34);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_VoiceInfo__Add__, v35);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__, v36);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_VoiceInfo___ctor__, v37);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v38);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v39);
    sub_1BCAFF8(&System_Collections_Generic_List_VoiceInfo__TypeInfo, v40);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v41);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v44);
    sub_1BCAFF8(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__, v45);
    sub_1BCAFF8(&VoiceMaster___c__DisplayClass2_0_TypeInfo, v46);
    sub_1BCAFF8(&VoiceEntity_TypeInfo, v47);
    sub_1BCAFF8(&VoiceInfo_TypeInfo, v48);
    sub_1BCAFF8(&StringLiteral_15973/*"_"*/, v49);
    byte_4B1D5B1 = 1;
  }
  v243 = 0;
  conds = 0LL;
  isInvalidVoiceList = 0;
  overwriteNameDefault = 0LL;
  overwriteName = 0LL;
  entity = 0LL;
  closedType = 0LL;
  *(_QWORD *)&v236[1] = 0LL;
  v50 = (Il2CppObject *)sub_1BCB244(VoiceMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v50, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  v54 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_264;
  v243 = ServantLimitAddMaster__getVoicePrefix((ServantLimitAddMaster_o *)Instance, changeSvtVoiceId, limitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  object = v50;
  v55 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v52);
    byte_4B165D1 = 1;
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
  v230 = (UserServantCollectionEntity_o **)&object[1];
  sub_1BCAF9C((CGThumbnailListItem_o *)&object[1], (int32_t)Instance, v56, v57);
  if ( !MasterData_object )
    goto LABEL_264;
  Entity_41959312 = ServantVoiceMaster__getEntity_41959312(
                      (ServantVoiceMaster_o *)MasterData_object,
                      changeSvtVoiceId,
                      limitCount,
                      0LL);
  Time = NetworkManager__getTime(0LL);
  v234 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v234,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_4B17950 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v52);
    byte_4B17950 = 1;
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
  v229 = *(unsigned __int8 *)(*(_QWORD *)&Instance[1].fields._DispLog + 144LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v60);
  v233 = 0;
  v62 = isCheckPlayCond;
  p_monitor = (CGThumbnailListItem_o *)&object[1].monitor;
  LOBYTE(v236[0]) = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v64 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v64;
        p_offset += 4;
        if ( !v64 )
          goto LABEL_28;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_28:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v67 = Enumerator->klass;
    v68 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v69 = &v67->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_VoiceEntity__c **)v69 - 1) != System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo )
      {
        --v68;
        v69 += 4;
        if ( !v68 )
          goto LABEL_35;
      }
      v70 = (__int64)&v67->vtable[*v69].method;
    }
    else
    {
LABEL_35:
      v70 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0LL);
    }
    v71 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v70)(
            Enumerator,
            *(_QWORD *)(v70 + 8));
    v74 = (VoiceEntity_o *)v71;
    if ( !v71
      || (methodPtr_low = LOBYTE(VoiceEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v71 + 304LL) < (unsigned int)methodPtr_low)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v71 + 200LL) + 8 * methodPtr_low - 8) != VoiceEntity_TypeInfo )
    {
      sub_1BCB254(v71, v72);
    }
    if ( !Entity_41959312 )
      sub_1BCB254(v71, v72);
    v76 = *(int *)(v71 + 28);
    if ( (unsigned int)v76 >= Entity_41959312->max_length )
      sub_1BCB25C(v71, v72, v73);
    v77 = Entity_41959312->m_Items[v76];
    if ( v77 )
    {
      v78 = *(_QWORD *)(v71 + 16);
      if ( !v78 )
        sub_1BCB254(0LL, v72);
      v79 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v78 + 360LL))(
                                 v78,
                                 *(_QWORD *)(*(_QWORD *)v78 + 368LL));
      v80 = System_Int32__ToString((int32_t)&v243, 0LL);
      v81 = System_String__Concat_62488672(v80, (System_String_o *)StringLiteral_15973/*"_"*/, v79, 0LL);
      VoiceList_41942612 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getVoiceList_41942612(
                                                                          v77,
                                                                          v74->fields.svtVoiceType,
                                                                          v81,
                                                                          disableCondTypeList,
                                                                          v62,
                                                                          0LL);
      if ( VoiceList_41942612 )
      {
        if ( VoiceList_41942612->fields._size >= 1 )
        {
          if ( System_Collections_Generic_List_object___get_Item(
                 VoiceList_41942612,
                 0,
                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__) )
          {
            ServantVoiceEntity__getOverwriteData(
              v77,
              v74->fields.svtVoiceType,
              v81,
              &conds,
              &isInvalidVoiceList,
              &overwriteName,
              &overwriteNameDefault,
              (int32_t *)&closedType + 1,
              v236[0],
              0LL);
            if ( !isInvalidVoiceList )
            {
              LODWORD(closedType) = v74->fields.closedType;
              condType = v74->fields.condType;
              if ( condType <= 54 )
              {
                if ( condType <= 21 )
                {
                  v96 = 1;
                  v97 = 1;
                  switch ( condType )
                  {
                    case 0:
                      v98 = (VoiceCondMaster_o *)v54;
                      if ( !v54 )
                        sub_1BCB254(0LL, v84);
                      goto LABEL_233;
                    case 1:
                      v93 = v243;
                      condValue = v74->fields.condValue;
                      if ( !CondType_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                      IsQuestClear_39516796 = CondType__IsQuestClear_39516796(condValue, -1, 0, 0LL);
                      if ( !v54 )
                        sub_1BCB254(IsQuestClear_39516796, v149);
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
                      if ( !*v230 )
                        sub_1BCB254(v83, v84);
                      if ( !v54 )
                        sub_1BCB254(0LL, v84);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   (VoiceCondMaster_o *)v54,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v79,
                                   v243,
                                   (*v230)->fields.maxLv >= v74->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_241;
                    case 7:
                      if ( !*v230 )
                        sub_1BCB254(v83, v84);
                      if ( !v54 )
                        sub_1BCB254(0LL, v84);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   (VoiceCondMaster_o *)v54,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v79,
                                   v243,
                                   (*v230)->fields.maxLimitCount >= v74->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_241;
                    case 8:
                      if ( !*v230 )
                        sub_1BCB254(0LL, v84);
                      v93 = v243;
                      IsQuestClear_39516796 = UserServantCollectionEntity__IsGet(*v230, 0LL);
                      if ( !v54 )
                        sub_1BCB254(IsQuestClear_39516796, v143);
                      goto LABEL_162;
                    case 9:
                      v144 = *v230;
                      if ( !*v230 )
                        sub_1BCB254(v83, v84);
                      v145 = *(_QWORD *)&v144->fields.friendshipRank.fields.currentCryptoKey;
                      v146 = *(_QWORD *)&v144->fields.friendshipRank.fields.fakeValue;
                      voicePrefixa = v243;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v246.fields.currentCryptoKey = v145;
                      *(_QWORD *)&v246.fields.fakeValue = v146;
                      v102 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v246, 0LL);
                      if ( !v54 )
                        sub_1BCB254(v102, v147);
                      goto LABEL_74;
                    case 17:
                      if ( !*v230 )
                        sub_1BCB254(0LL, v84);
                      v93 = v243;
                      IsQuestClear_39516796 = UserServantCollectionEntity__IsPlayed(*v230, v74->fields.condValue, 0LL);
                      if ( !v54 )
                        sub_1BCB254(IsQuestClear_39516796, v150);
                      goto LABEL_162;
                    case 18:
                      if ( !*v230 )
                        sub_1BCB254(0LL, v84);
                      v93 = v243;
                      IsQuestClear_39516796 = UserServantCollectionEntity__IsLimitCountMax(*v230, 0LL);
                      if ( !v54 )
                        sub_1BCB254(IsQuestClear_39516796, v151);
                      goto LABEL_162;
                    case 19:
                      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
                      if ( !SelfUserGame )
                        sub_1BCB254(0LL, v170);
                      if ( SelfUserGame->fields.birthDay < 1 )
                        goto LABEL_238;
                      voicePrefixe = SelfUserGame->fields.birthDay;
                      v171 = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v171 = BalanceConfig_TypeInfo;
                      }
                      ServantIdsBirthdayBeforeValentine = v171->static_fields->ServantIdsBirthdayBeforeValentine;
                      v173 = (System_Func_int__bool__o *)p_monitor->klass;
                      if ( !p_monitor->klass )
                      {
                        v173 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo);
                        System_Func_int__bool____ctor(
                          v173,
                          object,
                          Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__,
                          0LL);
                        p_monitor->klass = (CGThumbnailListItem_c *)v173;
                        sub_1BCAF9C(p_monitor, (int32_t)v173, v174, v175);
                      }
                      v176 = (BalanceConfig_c *)BasicHelper__Any_int__50347164(
                                                  ServantIdsBirthdayBeforeValentine,
                                                  (System_Func_T__bool__o *)v173,
                                                  (const MethodInfo_3003C9C *)Method_BasicHelper_Any_int____76918080);
                      if ( ((unsigned __int8)v176 & 1) != 0 )
                      {
                        v176 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v176 = BalanceConfig_TypeInfo;
                        }
                        VtReleaseAt = v176->static_fields->VtReleaseAt;
                        if ( VtReleaseAt >= 1 )
                        {
                          if ( !*v230 )
                            sub_1BCB254(v176, v177);
                          createdAt = (*v230)->fields.createdAt;
                          if ( !v176->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v176);
                            VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
                          }
                          if ( createdAt < VtReleaseAt )
                            goto LABEL_218;
                        }
                      }
                      if ( !*v230 )
                        sub_1BCB254(v176, v177);
                      isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                                (VoiceMaster_o *)v176,
                                                voicePrefixe,
                                                (*v230)->fields.createdAt,
                                                v178);
                      if ( !DataManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                      Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
                      if ( !Master_object )
                        sub_1BCB254(0LL, v183);
                      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       (const MethodInfo_32CA408 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
                      if ( isEnableBirthdayVoice )
                      {
                        v186 = 1LL;
                      }
                      else
                      {
                        if ( !SingleEntity )
                          sub_1BCB254(0LL, v170);
                        v170 = (int64_t)SingleEntity[1].klass;
                        if ( v170 < 1 )
                        {
LABEL_238:
                          v186 = 0LL;
                        }
                        else
                        {
                          if ( !*v230 )
                            sub_1BCB254(SingleEntity, v170);
                          v186 = VoiceMaster__isEnableBirthdayVoice(
                                   (VoiceMaster_o *)SingleEntity,
                                   v170,
                                   (*v230)->fields.createdAt,
                                   v185);
                        }
                      }
                      if ( !v54 )
                        sub_1BCB254(v186, v170);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   (VoiceCondMaster_o *)v54,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v79,
                                   v243,
                                   v186,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_241;
                    case 20:
                      v152 = conds;
                      if ( conds && (v153 = *(_QWORD *)&conds->max_length) != 0 )
                      {
                        if ( (int)v153 >= 1 )
                        {
                          v154 = 0LL;
                          v155 = 0;
                          v156 = 0;
                          v157 = 0;
                          v221 = conds;
                          voicePrefixd = conds->m_Items;
                          do
                          {
                            if ( (unsigned int)v154 >= (unsigned int)v153 )
                              sub_1BCB25C(v83, v84, v85);
                            v158 = voicePrefixd[v154];
                            if ( !v158 )
                              sub_1BCB254(v83, v84);
                            v159 = v158->fields.condType;
                            if ( v159 <= 0x13 && ((1 << v159) & 0xCE000) != 0 && v158->fields.value >= 1 )
                            {
                              if ( !DataManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                              v160 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMaster___);
                              if ( !v160 )
                                sub_1BCB254(0LL, v161);
                              v162 = DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v160,
                                       &entity,
                                       v158->fields.value,
                                       (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
                              if ( !v162 )
                                goto LABEL_178;
                              if ( !entity )
                                sub_1BCB254(v162, v163);
                              if ( Time >= (__int64)entity[5].monitor )
                              {
                                if ( !v54 )
                                  sub_1BCB254(0LL, v163);
                                v164 = entity[6].klass;
                                v83 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         (VoiceCondMaster_o *)v54,
                                                         (int32_t *)&closedType,
                                                         svtVoiceId,
                                                         v79,
                                                         v243,
                                                         Time >= (__int64)v164,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                if ( (v229 != 0) | v233 & 1 )
                                {
                                  v152 = v221;
                                  v165 = 0;
                                }
                                else
                                {
                                  v217 = (unsigned int)v83;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  if ( !byte_4B1D7CF )
                                  {
                                    sub_1BCAFF8(&NetworkManager_TypeInfo, v84);
                                    byte_4B1D7CF = 1;
                                  }
                                  v166 = NetworkManager_TypeInfo;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                    v166 = NetworkManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1BCB254(v166, v84);
                                  static_fields = v166->static_fields;
                                  v152 = v221;
                                  v83 = (DataManager_c *)v217;
                                  v165 = static_fields->serverTime < (__int64)entity[6].klass;
                                }
                                v155 = (unsigned __int8)v83 & 1;
                                if ( v165 && Time >= (__int64)v164 )
                                {
                                  v168 = (unsigned __int8)v83 & 1;
                                  if ( !SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
                                    sub_1BCB254(0LL, v84);
                                  if ( !byte_4B19AEB )
                                  {
                                    sub_1BCAFF8(&DataManager_TypeInfo, v84);
                                    byte_4B19AEB = 1;
                                  }
                                  v83 = DataManager_TypeInfo;
                                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                    v83 = DataManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1BCB254(v83, v84);
                                  v152 = v221;
                                  v157 = 1;
                                  v155 = v168;
                                  v233 |= v83->static_fields->dateVersion < (__int64)entity[6].klass;
                                }
                                else
                                {
                                  v157 = 1;
                                }
                                v156 = 1;
                              }
                              else
                              {
LABEL_178:
                                if ( !v54 )
                                  sub_1BCB254(0LL, v163);
                                v83 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         (VoiceCondMaster_o *)v54,
                                                         (int32_t *)&closedType,
                                                         svtVoiceId,
                                                         v79,
                                                         v243,
                                                         0,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                v152 = v221;
                                v156 = (unsigned __int8)v83 & 1;
                                v157 = 1;
                                v155 = (unsigned __int8)v83 & 1;
                              }
                            }
                            LODWORD(v153) = v152->max_length;
                            ++v154;
                          }
                          while ( (int)v154 < (int)v153 );
                          if ( (v157 & 1) != 0 )
                          {
                            v96 = v156 & 1;
                            v97 = v155 & 1;
                            goto LABEL_242;
                          }
                        }
                        v98 = (VoiceCondMaster_o *)v54;
                        if ( !v54 )
                          sub_1BCB254(0LL, v84);
                      }
                      else
                      {
                        v98 = (VoiceCondMaster_o *)v54;
                        if ( !v54 )
                          sub_1BCB254(0LL, v84);
                      }
                      return result;
                    case 21:
                      if ( !*v230 )
                        sub_1BCB254(0LL, v84);
                      v93 = v243;
                      IsQuestClear_39516796 = UserServantCollectionEntity__IsFinded(*v230, 0LL);
                      if ( !v54 )
                        sub_1BCB254(IsQuestClear_39516796, v142);
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
                    if ( !*v230 )
                      sub_1BCB254(0LL, v84);
                    v93 = v243;
                    IsQuestClear_39516796 = UserServantCollectionEntity__IsCostumeGet(*v230, limitCount, 0LL);
                    if ( !v54 )
                      sub_1BCB254(IsQuestClear_39516796, v95);
LABEL_162:
                    IsEnable = VoiceCondMaster__IsEnable(
                                 (VoiceCondMaster_o *)v54,
                                 (int32_t *)&closedType,
                                 svtVoiceId,
                                 v79,
                                 v93,
                                 IsQuestClear_39516796,
                                 svtId,
                                 &overwriteNameDefault,
                                 isMateriala);
                    goto LABEL_241;
                  }
LABEL_218:
                  v96 = 1;
LABEL_219:
                  v97 = 1;
                  goto LABEL_242;
                }
                v104 = conds;
                if ( !conds || (v105 = *(_QWORD *)&conds->max_length) == 0 )
                {
                  v98 = (VoiceCondMaster_o *)v54;
                  if ( !v54 )
                    sub_1BCB254(0LL, v84);
                  goto LABEL_233;
                }
                if ( (int)v105 < 1 )
                  goto LABEL_222;
                v106 = 0LL;
                v107 = 0;
                v108 = 0;
                v109 = 0;
                v219 = conds;
                voicePrefixb = conds->m_Items;
                while ( 2 )
                {
                  if ( (unsigned int)v106 >= (unsigned int)v105 )
                    sub_1BCB25C(v83, v84, v85);
                  v110 = voicePrefixb[v106];
                  if ( !v110 )
                    sub_1BCB254(v83, v84);
                  v111 = v110->fields.condType;
                  if ( v111 <= 0x13 )
                  {
                    if ( ((1 << v111) & 0xCE000) != 0 )
                    {
                      if ( v110->fields.value >= 1 )
                      {
                        v112 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !v112 )
                          sub_1BCB254(0LL, v113);
                        v114 = DataManager__GetMasterData_object_(
                                 (DataManager_o *)v112,
                                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___);
                        if ( !v114 )
                          sub_1BCB254(0LL, v115);
                        v116 = DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v114,
                                 v110->fields.value,
                                 (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                        if ( !v116 || Time < (__int64)v116[5].monitor )
                        {
                          v118 = (VoiceCondMaster_o *)v54;
                          if ( !v54 )
                            sub_1BCB254(0LL, v117);
                          goto LABEL_89;
                        }
                        if ( !v54 )
                          sub_1BCB254(v116, v117);
                        v83 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                 (VoiceCondMaster_o *)v54,
                                                 (int32_t *)&closedType,
                                                 svtVoiceId,
                                                 v79,
                                                 v243,
                                                 Time >= (__int64)v116[6].klass,
                                                 svtId,
                                                 &overwriteNameDefault,
                                                 isMateriala);
LABEL_101:
                        v107 = (unsigned __int8)v83 & 1;
                        v109 = 1;
                        v108 = 1;
                        goto LABEL_102;
                      }
                    }
                    else if ( v111 == 16 && v110->fields.value >= 1 )
                    {
                      v119 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !v119 )
                        sub_1BCB254(0LL, v120);
                      v121 = DataManager__GetMasterData_object_(
                               (DataManager_o *)v119,
                               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
                      if ( !v121 )
                        sub_1BCB254(0LL, v122);
                      v123 = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v121,
                               (Il2CppObject **)&v236[1],
                               v110->fields.value,
                               (const MethodInfo_32C7E4C *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
                      if ( v123 )
                      {
                        if ( !*(_QWORD *)&v236[1] )
                          sub_1BCB254(v123, v124);
                        if ( Time >= *(_QWORD *)(*(_QWORD *)&v236[1] + 40LL) )
                        {
                          if ( !v54 )
                            sub_1BCB254(0LL, v124);
                          v83 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                   (VoiceCondMaster_o *)v54,
                                                   (int32_t *)&closedType,
                                                   svtVoiceId,
                                                   v79,
                                                   v243,
                                                   1,
                                                   svtId,
                                                   &overwriteNameDefault,
                                                   isMateriala);
                          goto LABEL_101;
                        }
                      }
                      v118 = (VoiceCondMaster_o *)v54;
                      if ( !v54 )
                        sub_1BCB254(0LL, v124);
LABEL_89:
                      v83 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                               v118,
                                               (int32_t *)&closedType,
                                               svtVoiceId,
                                               v79,
                                               v243,
                                               0,
                                               svtId,
                                               &overwriteNameDefault,
                                               isMateriala);
                      v108 = (unsigned __int8)v83 & 1;
                      v109 = 1;
                      v107 = (unsigned __int8)v83 & 1;
LABEL_102:
                      v104 = v219;
                    }
                  }
                  LODWORD(v105) = v104->max_length;
                  if ( (int)++v106 >= (int)v105 )
                  {
                    if ( (v109 & 1) != 0 )
                    {
                      v96 = v108 & 1;
                      v97 = v107 & 1;
                      goto LABEL_242;
                    }
LABEL_222:
                    v98 = (VoiceCondMaster_o *)v54;
                    if ( !v54 )
                      sub_1BCB254(0LL, v84);
LABEL_233:
                    v96 = 1;
                    v97 = VoiceCondMaster__IsEnable(
                            v98,
                            (int32_t *)&closedType,
                            svtVoiceId,
                            v79,
                            v243,
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
                  v99 = *v230;
                  if ( !*v230 )
                    sub_1BCB254(v83, v84);
                  v100 = *(_QWORD *)&v99->fields.friendshipRank.fields.currentCryptoKey;
                  v101 = *(_QWORD *)&v99->fields.friendshipRank.fields.fakeValue;
                  voicePrefixa = v243;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v245.fields.currentCryptoKey = v100;
                  *(_QWORD *)&v245.fields.fakeValue = v101;
                  v102 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v245, 0LL);
                  if ( !v54 )
                    sub_1BCB254(v102, v103);
LABEL_74:
                  IsEnable = VoiceCondMaster__IsEnable(
                               (VoiceCondMaster_o *)v54,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v79,
                               voicePrefixa,
                               (int)v102 >= v74->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_241;
                }
                if ( condType == 99 )
                {
                  v87 = *v230;
                  if ( !*v230 )
                    sub_1BCB254(v83, v84);
                  v88 = *(_QWORD *)&v87->fields.friendshipRank.fields.currentCryptoKey;
                  v89 = *(_QWORD *)&v87->fields.friendshipRank.fields.fakeValue;
                  voicePrefix = v243;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v244.fields.currentCryptoKey = v88;
                  *(_QWORD *)&v244.fields.fakeValue = v89;
                  v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v244, 0LL);
                  if ( !v54 )
                    sub_1BCB254(v90, v91);
                  IsEnable = VoiceCondMaster__IsEnable(
                               (VoiceCondMaster_o *)v54,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v79,
                               voicePrefix,
                               (int)v90 <= v74->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
LABEL_241:
                  v97 = IsEnable;
                  v96 = 1;
                  goto LABEL_242;
                }
                goto LABEL_218;
              }
              if ( condType != 56 )
              {
                if ( condType == 92 )
                {
                  if ( !v54 )
                    sub_1BCB254(0LL, v84);
                  IsEnable = VoiceCondMaster__IsEnable(
                               (VoiceCondMaster_o *)v54,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v79,
                               v243,
                               0,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_241;
                }
                goto LABEL_218;
              }
              v125 = conds;
              if ( !conds || (v126 = *(_QWORD *)&conds->max_length) == 0 )
              {
                v98 = (VoiceCondMaster_o *)v54;
                if ( !v54 )
                  sub_1BCB254(0LL, v84);
                goto LABEL_233;
              }
              if ( (int)v126 < 1 )
                goto LABEL_134;
              v127 = 0LL;
              v128 = 0;
              v129 = 0;
              v130 = 0;
              v220 = conds;
              voicePrefixc = conds->m_Items;
              do
              {
                if ( (unsigned int)v127 >= (unsigned int)v126 )
                  sub_1BCB25C(v83, v84, v85);
                v131 = voicePrefixc[v127];
                if ( !v131 )
                  sub_1BCB254(v83, v84);
                v132 = v131->fields.condType;
                if ( v132 <= 0x13 && ((1 << v132) & 0xCE000) != 0 && v131->fields.value >= 1 )
                {
                  v133 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v133 )
                    sub_1BCB254(0LL, v134);
                  v135 = DataManager__GetMasterData_object_(
                           (DataManager_o *)v133,
                           (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v135 )
                    sub_1BCB254(0LL, v136);
                  v137 = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v135,
                           v131->fields.value,
                           (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v137 && Time >= (__int64)v137[5].monitor )
                  {
                    value = v131->fields.value;
                    v218 = v243;
                    if ( !CondType_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    v140 = CondType__IsServantGetBeforeEventEnd(svtId, value, 0LL);
                    if ( !v54 )
                      sub_1BCB254(v140, v141);
                    v83 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             (VoiceCondMaster_o *)v54,
                                             (int32_t *)&closedType,
                                             svtVoiceId,
                                             v79,
                                             v218,
                                             v140,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v128 = (unsigned __int8)v83 & 1;
                    v130 = 1;
                    v129 = 1;
                  }
                  else
                  {
                    if ( !v54 )
                      sub_1BCB254(0LL, v138);
                    v83 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             (VoiceCondMaster_o *)v54,
                                             (int32_t *)&closedType,
                                             svtVoiceId,
                                             v79,
                                             v243,
                                             0,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v129 = (unsigned __int8)v83 & 1;
                    v130 = 1;
                    v128 = (unsigned __int8)v83 & 1;
                  }
                  v125 = v220;
                }
                LODWORD(v126) = v125->max_length;
                ++v127;
              }
              while ( (int)v127 < (int)v126 );
              if ( (v130 & 1) == 0 )
              {
LABEL_134:
                v98 = (VoiceCondMaster_o *)v54;
                if ( !v54 )
                  sub_1BCB254(0LL, v84);
                goto LABEL_233;
              }
              v96 = v129 & 1;
              v97 = v128 & 1;
LABEL_242:
              v187 = v97 & VoiceEntity__IsCondEnable(v74, svtId, v85);
              if ( (v96 & (v187 | ((_DWORD)closedType != 2)) & 1) != 0 )
              {
                v188 = sub_1BCB244(VoiceInfo_TypeInfo);
                VoiceInfo___ctor((VoiceInfo_o *)v188, 0LL);
                if ( !v188 )
                  sub_1BCB254(v189, v190);
                *(_QWORD *)(v188 + 16) = v74;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v188 + 16), (int32_t)v74, v191, v192);
                *(_BYTE *)(v188 + 24) = v187 & 1;
                v193 = (int)overwriteName;
                *(_QWORD *)(v188 + 32) = overwriteName;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v188 + 32), v193, v194, v195);
                v196 = (int)overwriteNameDefault;
                *(_QWORD *)(v188 + 40) = overwriteNameDefault;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v188 + 40), v196, v197, v198);
                v199 = v243;
                *(_DWORD *)(v188 + 48) = HIDWORD(closedType);
                *(_DWORD *)(v188 + 52) = v199;
                v200 = (int)conds;
                *(_QWORD *)(v188 + 56) = conds;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v188 + 56), v200, v201, v202);
                if ( !v234 )
                  sub_1BCB254(v203, v204);
                items = v234->fields._items;
                v208 = Method_System_Collections_Generic_List_VoiceInfo__Add__;
                ++v234->fields._version;
                if ( !items )
                  sub_1BCB254(v203, v204);
                size = v234->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v234,
                    (Il2CppObject *)v188,
                    *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v208[4] + 192LL) + 112LL));
                }
                else
                {
                  v210 = &items->obj.klass + size;
                  v234->fields._size = size + 1;
                  v210[4] = (Il2CppClass *)v188;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v210 + 4), v188, v205, v206);
                }
              }
            }
          }
        }
      }
    }
  }
  v211 = Enumerator->klass;
  v212 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v213 = &v211->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v213 - 1) != System_IDisposable_TypeInfo )
    {
      --v212;
      v213 += 4;
      if ( !v212 )
        goto LABEL_253;
    }
    v214 = (__int64)&v211->vtable[*v213].method;
  }
  else
  {
LABEL_253:
    v214 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v214)(
                                Enumerator,
                                *(_QWORD *)(v214 + 8));
  if ( (v233 & 1) != 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_264;
    NetworkManager__GoToTitleDialog((NetworkManager_o *)Instance, 0LL);
  }
  if ( !v234 )
LABEL_264:
    sub_1BCB254(Instance, v52);
  return (VoiceInfo_array *)System_Collections_Generic_List_object___ToArray(
                              v234,
                              (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
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

  if ( (byte_4B1D5B3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v6);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, v7);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BCAFF8(&VoiceEntity_TypeInfo, v9);
    sub_1BCAFF8(&StringLiteral_15973/*"_"*/, v10);
    byte_4B1D5B3 = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0LL) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCB254(0LL, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v14);
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
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v23 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0LL);
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
      sub_1BCB254(v24, v25);
    }
    v28 = v24[2];
    if ( !v28 )
      sub_1BCB254(0LL, v25);
    v29 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 360LL))(
                               v28,
                               *(_QWORD *)(*(_QWORD *)v28 + 368LL));
    v30 = System_String__Concat_62450424((System_String_o *)StringLiteral_15973/*"_"*/, v29, 0LL);
    if ( !labelName )
      sub_1BCB254(v30, v30);
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
    v34 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_4B1D5B2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v10);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, v11);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BCAFF8(&VoiceEntity_TypeInfo, v15);
    sub_1BCAFF8(&StringLiteral_15973/*"_"*/, v16);
    byte_4B1D5B2 = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0LL) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCB254(0LL, v17);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v20);
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
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v29 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0LL);
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
      sub_1BCB254(v30, v31);
    }
    v34 = v30[2];
    if ( !v34 )
      sub_1BCB254(0LL, v31);
    v35 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v34 + 360LL))(
                               v34,
                               *(_QWORD *)(*(_QWORD *)v34 + 368LL));
    v36 = System_String__Concat_62450424((System_String_o *)StringLiteral_15973/*"_"*/, v35, 0LL);
    if ( !labelName )
      sub_1BCB254(v36, v36);
  }
  while ( !System_String__EndsWith(labelName, v36, 0LL) );
  if ( v32[12] != 17 && (unsigned int)(v32[7] - 1) > 1 )
  {
LABEL_39:
    v18 = 0;
    goto LABEL_40;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v38);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v39);
    byte_4B165D1 = 1;
  }
  v41 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v41 = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    sub_1BCB254(v41, v39);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       v41->static_fields->userIdNumber,
                       svtId,
                       0LL);
  v43 = (unsigned int)v32[14];
  if ( isUpdate )
  {
    if ( !EntityDefinitely )
      sub_1BCB254(0LL, v43);
    if ( !UserServantCollectionEntity__SetPlayed(EntityDefinitely, v43, 0LL) )
      goto LABEL_39;
  }
  else
  {
    if ( !EntityDefinitely )
      sub_1BCB254(0LL, v43);
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
    v47 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  int64_t Time_40542184; // x21
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

  if ( (byte_4B1D5B0 & 1) == 0 )
  {
    sub_1BCAFF8(&System_DateTime_TypeInfo, userBirthDay);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    byte_4B1D5B0 = 1;
  }
  v17.fields._dateData = 0LL;
  dateTime.fields._dateData = 0LL;
  if ( userBirthDay < 1 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_40543292(createDay, 0LL).fields._dateData;
  v19 = NetworkManager__getDateTime_40542964(userBirthDay, 0LL).fields._dateData;
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
  System_DateTime___ctor_63834804(v24, Year, Month, Day, 0LL);
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
  System_DateTime___ctor_63834804(v28, v10 + 1, v11, v12, 0LL);
  v17.fields._dateData = v16;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  ServerTime = NetworkManager__getServerTime(0LL);
  v29.fields._dateData = dateTime.fields._dateData;
  Time_40542184 = NetworkManager__getTime_40542184(v29, 0LL);
  v30.fields._dateData = v17.fields._dateData;
  return (Time_40542184 <= ServerTime && Time_40542184 + 86400 >= createDay) | (NetworkManager__getTime_40542184(
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
  if ( (byte_4B1D5B4 & 1) == 0 )
  {
    this = (VoiceMaster___c__DisplayClass2_0_o *)sub_1BCAFF8(
                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                   *(_QWORD *)&id);
    byte_4B1D5B4 = 1;
  }
  userStvCollectionEntity = v4->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_1BCB254(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v9, 0LL) == id;
}