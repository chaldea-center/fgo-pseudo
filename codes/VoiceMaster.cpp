void VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB73E5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
    byte_4CB73E5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    136,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
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
  const MethodInfo *v22; // x3
  ServantVoiceEntity_array *Entity_43058520; // x29
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v27; // w26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  VoiceEntity_o *v38; // x24
  __int64 naturalAligment; // x10
  __int64 v40; // x8
  ServantVoiceEntity_o *v41; // x27
  __int64 v42; // x0
  System_String_o *v43; // x19
  System_String_o *v44; // x0
  System_String_o *v45; // x22
  System_Collections_Generic_List_object__o *VoiceList_43041808; // x0
  DataManager_c *v47; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x2
  int condType; // w8
  UserServantCollectionEntity_o *v51; // x8
  __int64 v52; // x27
  __int64 v53; // x22
  __int64 v54; // x0
  __int64 v55; // x1
  _BOOL4 IsEnable; // w0
  int32_t v57; // w22
  _BOOL8 IsQuestClear_40554260; // x0
  __int64 v59; // x1
  int v60; // w22
  int v61; // w27
  VoiceCondMaster_o *v62; // x0
  UserServantCollectionEntity_o *v63; // x8
  __int64 v64; // x27
  __int64 v65; // x22
  __int64 v66; // x0
  __int64 v67; // x1
  ServantVoiceCond_array *v68; // x14
  il2cpp_array_size_t v69; // x11
  __int64 v70; // x27
  char v71; // w9
  char v72; // w10
  char v73; // w8
  ServantVoiceCond_o *v74; // x22
  unsigned int v75; // w11
  Il2CppObject *v76; // x0
  __int64 v77; // x1
  Il2CppObject *v78; // x0
  __int64 v79; // x1
  Il2CppObject *v80; // x0
  __int64 v81; // x1
  VoiceCondMaster_o *v82; // x0
  Il2CppObject *v83; // x0
  __int64 v84; // x1
  Il2CppObject *v85; // x0
  __int64 v86; // x1
  _BOOL8 v87; // x0
  __int64 v88; // x1
  ServantVoiceCond_array *v89; // x13
  il2cpp_array_size_t v90; // x11
  __int64 v91; // x22
  char v92; // w8
  char v93; // w10
  char v94; // w9
  ServantVoiceCond_o *v95; // x27
  unsigned int v96; // w11
  Il2CppObject *v97; // x0
  __int64 v98; // x1
  Il2CppObject *v99; // x0
  __int64 v100; // x1
  Il2CppObject *v101; // x0
  __int64 v102; // x1
  int32_t value; // w27
  _BOOL8 v104; // x0
  __int64 v105; // x1
  __int64 v106; // x1
  __int64 v107; // x1
  UserServantCollectionEntity_o *v108; // x8
  __int64 v109; // x27
  __int64 v110; // x22
  __int64 v111; // x1
  int32_t condValue; // w27
  __int64 v113; // x1
  __int64 v114; // x1
  __int64 v115; // x1
  ServantVoiceCond_array *v116; // x12
  il2cpp_array_size_t max_length; // x10
  __int64 v118; // x22
  char v119; // w13
  char v120; // w9
  char v121; // w8
  ServantVoiceCond_o *v122; // x27
  unsigned int v123; // w10
  Il2CppObject *v124; // x0
  __int64 v125; // x1
  _BOOL8 v126; // x0
  __int64 v127; // x1
  Il2CppClass *v128; // x27
  bool v129; // w8
  NetworkManager_c *v130; // x0
  struct NetworkManager_StaticFields *static_fields; // x9
  char v132; // w27
  UserGameEntity_o *SelfUserGame; // x0
  int64_t v134; // x1
  BalanceConfig_c *v135; // x0
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x22
  System_Func_int__bool__o *v137; // x27
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  BalanceConfig_c *v140; // x0
  __int64 v141; // x1
  const MethodInfo *v142; // x3
  int64_t VtReleaseAt; // x8
  int64_t createdAt; // x22
  bool isEnableBirthdayVoice; // w22
  Il2CppObject *Master_object; // x0
  __int64 v147; // x1
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v149; // x3
  _BOOL8 v150; // x0
  int v151; // w27
  __int64 v152; // x19
  __int64 v153; // x0
  __int64 v154; // x1
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  int32_t v157; // w1
  int32_t v158; // w2
  const MethodInfo *v159; // x3
  int32_t v160; // w1
  int32_t v161; // w2
  const MethodInfo *v162; // x3
  int32_t v163; // w8
  int32_t v164; // w1
  int32_t v165; // w2
  const MethodInfo *v166; // x3
  __int64 v167; // x0
  __int64 v168; // x1
  int32_t v169; // w2
  const MethodInfo *v170; // x3
  struct System_Object_array *items; // x8
  _QWORD *v172; // x9
  __int64 size; // x10
  Il2CppClass **v174; // x0
  System_Collections_Generic_IEnumerator_T__c *v175; // x8
  __int64 v176; // x9
  int32_t *v177; // x10
  __int64 v178; // x0
  VoiceInfo_array *result; // x0
  const MethodInfo *isMateriala; // [xsp+0h] [xbp-120h]
  unsigned int v181; // [xsp+18h] [xbp-108h]
  int32_t v182; // [xsp+1Ch] [xbp-104h]
  ServantVoiceCond_array *v183; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v184; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v185; // [xsp+20h] [xbp-100h]
  int32_t voicePrefix; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixa; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixb; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixc; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixd; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixe[2]; // [xsp+28h] [xbp-F8h]
  CGThumbnailListItem_o *p_monitor; // [xsp+30h] [xbp-F0h]
  int v193; // [xsp+38h] [xbp-E8h]
  UserServantCollectionEntity_o **v194; // [xsp+40h] [xbp-E0h]
  int64_t Time; // [xsp+48h] [xbp-D8h]
  int32_t svtVoiceId; // [xsp+54h] [xbp-CCh]
  char v197; // [xsp+64h] [xbp-BCh]
  System_Collections_Generic_List_object__o *v198; // [xsp+68h] [xbp-B8h]
  Il2CppObject *object; // [xsp+70h] [xbp-B0h]
  _DWORD v200[3]; // [xsp+7Ch] [xbp-A4h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-98h] BYREF
  int32_t overwritePriority[2]; // [xsp+90h] [xbp-90h] BYREF
  System_String_o *overwriteNameDefault; // [xsp+98h] [xbp-88h] BYREF
  System_String_o *overwriteName; // [xsp+A0h] [xbp-80h] BYREF
  bool isInvalidVoiceList; // [xsp+ACh] [xbp-74h] BYREF
  ServantVoiceCond_array *conds; // [xsp+B0h] [xbp-70h] BYREF
  int32_t v207; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v208; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v209; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v210; // 0:x0.16

  if ( (byte_4CB73E7 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_Any_int____78570976);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_VoiceCondMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_BeforeBirthDayMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
    sub_1C6BA08(&System_Func_int__bool__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_VoiceInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_VoiceInfo___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_VoiceInfo__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C6BA08(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__);
    sub_1C6BA08(&VoiceMaster___c__DisplayClass2_0_TypeInfo);
    sub_1C6BA08(&VoiceEntity_TypeInfo);
    sub_1C6BA08(&VoiceInfo_TypeInfo);
    sub_1C6BA08(&StringLiteral_16102/*"_"*/);
    byte_4CB73E7 = 1;
  }
  v207 = 0;
  conds = 0;
  isInvalidVoiceList = 0;
  overwriteNameDefault = 0;
  overwriteName = 0;
  entity = 0;
  *(_QWORD *)overwritePriority = 0;
  *(_QWORD *)&v200[1] = 0;
  v15 = (Il2CppObject *)sub_1C6BC54(VoiceMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v15, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_264;
  v207 = ServantLimitAddMaster__getVoicePrefix((ServantLimitAddMaster_o *)Instance, changeSvtVoiceId, limitCount, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  object = v15;
  v20 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
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
  v194 = (UserServantCollectionEntity_o **)&object[1];
  sub_1C6B9AC((CGThumbnailListItem_o *)&object[1], (int32_t)Instance, v21, v22);
  if ( !MasterData_object )
    goto LABEL_264;
  Entity_43058520 = ServantVoiceMaster__getEntity_43058520(
                      (ServantVoiceMaster_o *)MasterData_object,
                      changeSvtVoiceId,
                      limitCount,
                      0);
  Time = NetworkManager__getTime(0);
  v198 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v198,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_4CB16DC )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB16DC = 1;
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
  v193 = *(unsigned __int8 *)(*(_QWORD *)&Instance[1].fields._DispLog + 144LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v25);
  v197 = 0;
  v27 = isCheckPlayCond;
  p_monitor = (CGThumbnailListItem_o *)&object[1].monitor;
  LOBYTE(v200[0]) = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v29 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_28;
      }
      v31 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_28:
      v31 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
            Enumerator,
            *(_QWORD *)(v31 + 8))
        & 1) == 0 )
      break;
    v32 = Enumerator->klass;
    v33 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_VoiceEntity__c **)v34 - 1) != System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_35;
      }
      v35 = (__int64)&v32->vtable[*v34];
    }
    else
    {
LABEL_35:
      v35 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0);
    }
    v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
            Enumerator,
            *(_QWORD *)(v35 + 8));
    v38 = (VoiceEntity_o *)v36;
    if ( !v36
      || (naturalAligment = VoiceEntity_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)v36 + 304LL) < (unsigned int)naturalAligment)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v36 + 200LL) + 8 * naturalAligment - 8) != VoiceEntity_TypeInfo )
    {
      sub_1C6BC60(v36, v37);
    }
    if ( !Entity_43058520 )
      sub_1C6BC60(v36, v37);
    v40 = *(int *)(v36 + 28);
    if ( (unsigned int)v40 >= LODWORD(Entity_43058520->max_length) )
      sub_1C6BC68(v36);
    v41 = Entity_43058520->m_Items[v40];
    if ( v41 )
    {
      v42 = *(_QWORD *)(v36 + 16);
      if ( !v42 )
        sub_1C6BC60(0, v37);
      v43 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v42 + 360LL))(
                                 v42,
                                 *(_QWORD *)(*(_QWORD *)v42 + 368LL));
      v44 = System_Int32__ToString((int32_t)&v207, 0);
      v45 = System_String__Concat_64005056(v44, (System_String_o *)StringLiteral_16102/*"_"*/, v43, 0);
      VoiceList_43041808 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getVoiceList_43041808(
                                                                          v41,
                                                                          v38->fields.svtVoiceType,
                                                                          v45,
                                                                          disableCondTypeList,
                                                                          v27,
                                                                          0);
      if ( VoiceList_43041808 )
      {
        if ( VoiceList_43041808->fields._size >= 1 )
        {
          if ( System_Collections_Generic_List_object___get_Item(
                 VoiceList_43041808,
                 0,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__) )
          {
            ServantVoiceEntity__getOverwriteData(
              v41,
              v38->fields.svtVoiceType,
              v45,
              &conds,
              &isInvalidVoiceList,
              &overwriteName,
              &overwriteNameDefault,
              &overwritePriority[1],
              v200[0],
              0);
            if ( !isInvalidVoiceList )
            {
              overwritePriority[0] = v38->fields.closedType;
              condType = v38->fields.condType;
              if ( condType <= 54 )
              {
                if ( condType <= 21 )
                {
                  v60 = 1;
                  v61 = 1;
                  switch ( condType )
                  {
                    case 0:
                      v62 = (VoiceCondMaster_o *)v19;
                      if ( !v19 )
                        sub_1C6BC60(0, v48);
                      goto LABEL_233;
                    case 1:
                      v57 = v207;
                      condValue = v38->fields.condValue;
                      if ( !CondType_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                      IsQuestClear_40554260 = CondType__IsQuestClear_40554260(condValue, -1, 0, 0);
                      if ( !v19 )
                        sub_1C6BC60(IsQuestClear_40554260, v113);
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
                      if ( !*v194 )
                        sub_1C6BC60(v47, v48);
                      if ( !v19 )
                        sub_1C6BC60(0, v48);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   (VoiceCondMaster_o *)v19,
                                   overwritePriority,
                                   svtVoiceId,
                                   v43,
                                   v207,
                                   (*v194)->fields.maxLv >= v38->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_241;
                    case 7:
                      if ( !*v194 )
                        sub_1C6BC60(v47, v48);
                      if ( !v19 )
                        sub_1C6BC60(0, v48);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   (VoiceCondMaster_o *)v19,
                                   overwritePriority,
                                   svtVoiceId,
                                   v43,
                                   v207,
                                   (*v194)->fields.maxLimitCount >= v38->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_241;
                    case 8:
                      if ( !*v194 )
                        sub_1C6BC60(0, v48);
                      v57 = v207;
                      IsQuestClear_40554260 = UserServantCollectionEntity__IsGet(*v194, 0);
                      if ( !v19 )
                        sub_1C6BC60(IsQuestClear_40554260, v107);
                      goto LABEL_162;
                    case 9:
                      v108 = *v194;
                      if ( !*v194 )
                        sub_1C6BC60(v47, v48);
                      v109 = *(_QWORD *)&v108->fields.friendshipRank.fields.currentCryptoKey;
                      v110 = *(_QWORD *)&v108->fields.friendshipRank.fields.fakeValue;
                      voicePrefixa = v207;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v210.fields.currentCryptoKey = v109;
                      *(_QWORD *)&v210.fields.fakeValue = v110;
                      v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v210, 0);
                      if ( !v19 )
                        sub_1C6BC60(v66, v111);
                      goto LABEL_74;
                    case 17:
                      if ( !*v194 )
                        sub_1C6BC60(0, v48);
                      v57 = v207;
                      IsQuestClear_40554260 = UserServantCollectionEntity__IsPlayed(*v194, v38->fields.condValue, 0);
                      if ( !v19 )
                        sub_1C6BC60(IsQuestClear_40554260, v114);
                      goto LABEL_162;
                    case 18:
                      if ( !*v194 )
                        sub_1C6BC60(0, v48);
                      v57 = v207;
                      IsQuestClear_40554260 = UserServantCollectionEntity__IsLimitCountMax(*v194, 0);
                      if ( !v19 )
                        sub_1C6BC60(IsQuestClear_40554260, v115);
                      goto LABEL_162;
                    case 19:
                      SelfUserGame = UserGameMaster__getSelfUserGame(0);
                      if ( !SelfUserGame )
                        sub_1C6BC60(0, v134);
                      if ( SelfUserGame->fields.birthDay < 1 )
                        goto LABEL_238;
                      *(_QWORD *)voicePrefixe = SelfUserGame->fields.birthDay;
                      v135 = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v135 = BalanceConfig_TypeInfo;
                      }
                      ServantIdsBirthdayBeforeValentine = v135->static_fields->ServantIdsBirthdayBeforeValentine;
                      v137 = (System_Func_int__bool__o *)p_monitor->klass;
                      if ( !p_monitor->klass )
                      {
                        v137 = (System_Func_int__bool__o *)sub_1C6BC54(System_Func_int__bool__TypeInfo);
                        System_Func_int__bool____ctor(
                          v137,
                          object,
                          Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__,
                          0);
                        p_monitor->klass = (CGThumbnailListItem_c *)v137;
                        sub_1C6B9AC(p_monitor, (int32_t)v137, v138, v139);
                      }
                      v140 = (BalanceConfig_c *)BasicHelper__Any_int__51528112(
                                                  ServantIdsBirthdayBeforeValentine,
                                                  (System_Func_T__bool__o *)v137,
                                                  (const MethodInfo_31241B0 *)Method_BasicHelper_Any_int____78570976);
                      if ( ((unsigned __int8)v140 & 1) != 0 )
                      {
                        v140 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v140 = BalanceConfig_TypeInfo;
                        }
                        VtReleaseAt = v140->static_fields->VtReleaseAt;
                        if ( VtReleaseAt >= 1 )
                        {
                          if ( !*v194 )
                            sub_1C6BC60(v140, v141);
                          createdAt = (*v194)->fields.createdAt;
                          if ( !v140->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v140);
                            VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
                          }
                          if ( createdAt < VtReleaseAt )
                            goto LABEL_218;
                        }
                      }
                      if ( !*v194 )
                        sub_1C6BC60(v140, v141);
                      isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                                (VoiceMaster_o *)v140,
                                                *(int64_t *)voicePrefixe,
                                                (*v194)->fields.createdAt,
                                                v142);
                      if ( !DataManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
                      if ( !Master_object )
                        sub_1C6BC60(0, v147);
                      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       (const MethodInfo_33FB6E4 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
                      if ( isEnableBirthdayVoice )
                      {
                        v150 = 1;
                      }
                      else
                      {
                        if ( !SingleEntity )
                          sub_1C6BC60(0, v134);
                        v134 = (int64_t)SingleEntity[1].klass;
                        if ( v134 < 1 )
                        {
LABEL_238:
                          v150 = 0;
                        }
                        else
                        {
                          if ( !*v194 )
                            sub_1C6BC60(SingleEntity, v134);
                          v150 = VoiceMaster__isEnableBirthdayVoice(
                                   (VoiceMaster_o *)SingleEntity,
                                   v134,
                                   (*v194)->fields.createdAt,
                                   v149);
                        }
                      }
                      if ( !v19 )
                        sub_1C6BC60(v150, v134);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   (VoiceCondMaster_o *)v19,
                                   overwritePriority,
                                   svtVoiceId,
                                   v43,
                                   v207,
                                   v150,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_241;
                    case 20:
                      v116 = conds;
                      if ( conds && (max_length = conds->max_length) != 0 )
                      {
                        if ( (int)max_length >= 1 )
                        {
                          v118 = 0;
                          v119 = 0;
                          v120 = 0;
                          v121 = 0;
                          v185 = conds;
                          voicePrefixd = conds->m_Items;
                          do
                          {
                            if ( (unsigned int)v118 >= (unsigned int)max_length )
                              sub_1C6BC68(v47);
                            v122 = voicePrefixd[v118];
                            if ( !v122 )
                              sub_1C6BC60(v47, v48);
                            v123 = v122->fields.condType;
                            if ( v123 <= 0x13 && ((1 << v123) & 0xCE000) != 0 && v122->fields.value >= 1 )
                            {
                              if ( !DataManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                              v124 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventMaster___);
                              if ( !v124 )
                                sub_1C6BC60(0, v125);
                              v126 = DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v124,
                                       &entity,
                                       v122->fields.value,
                                       (const MethodInfo_33F9128 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
                              if ( !v126 )
                                goto LABEL_178;
                              if ( !entity )
                                sub_1C6BC60(v126, v127);
                              if ( Time >= (__int64)entity[5].monitor )
                              {
                                if ( !v19 )
                                  sub_1C6BC60(0, v127);
                                v128 = entity[6].klass;
                                v47 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         (VoiceCondMaster_o *)v19,
                                                         overwritePriority,
                                                         svtVoiceId,
                                                         v43,
                                                         v207,
                                                         Time >= (__int64)v128,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                if ( (v193 != 0) | v197 & 1 )
                                {
                                  v116 = v185;
                                  v129 = 0;
                                }
                                else
                                {
                                  v181 = (unsigned int)v47;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  if ( !byte_4CB74F9 )
                                  {
                                    sub_1C6BA08(&NetworkManager_TypeInfo);
                                    byte_4CB74F9 = 1;
                                  }
                                  v130 = NetworkManager_TypeInfo;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                    v130 = NetworkManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1C6BC60(v130, v48);
                                  static_fields = v130->static_fields;
                                  v116 = v185;
                                  v47 = (DataManager_c *)v181;
                                  v129 = static_fields->serverTime < (__int64)entity[6].klass;
                                }
                                v119 = (unsigned __int8)v47 & 1;
                                if ( v129 && Time >= (__int64)v128 )
                                {
                                  v132 = (unsigned __int8)v47 & 1;
                                  if ( !SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
                                    sub_1C6BC60(0, v48);
                                  if ( !byte_4CB381D )
                                  {
                                    sub_1C6BA08(&DataManager_TypeInfo);
                                    byte_4CB381D = 1;
                                  }
                                  v47 = DataManager_TypeInfo;
                                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                    v47 = DataManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1C6BC60(v47, v48);
                                  v116 = v185;
                                  v121 = 1;
                                  v119 = v132;
                                  v197 |= v47->static_fields->dateVersion < (__int64)entity[6].klass;
                                }
                                else
                                {
                                  v121 = 1;
                                }
                                v120 = 1;
                              }
                              else
                              {
LABEL_178:
                                if ( !v19 )
                                  sub_1C6BC60(0, v127);
                                v47 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         (VoiceCondMaster_o *)v19,
                                                         overwritePriority,
                                                         svtVoiceId,
                                                         v43,
                                                         v207,
                                                         0,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                v116 = v185;
                                v120 = (unsigned __int8)v47 & 1;
                                v121 = 1;
                                v119 = (unsigned __int8)v47 & 1;
                              }
                            }
                            LODWORD(max_length) = v116->max_length;
                            ++v118;
                          }
                          while ( (int)v118 < (int)max_length );
                          if ( (v121 & 1) != 0 )
                          {
                            v60 = v120 & 1;
                            v61 = v119 & 1;
                            goto LABEL_242;
                          }
                        }
                        v62 = (VoiceCondMaster_o *)v19;
                        if ( !v19 )
                          sub_1C6BC60(0, v48);
                      }
                      else
                      {
                        v62 = (VoiceCondMaster_o *)v19;
                        if ( !v19 )
                          sub_1C6BC60(0, v48);
                      }
                      return result;
                    case 21:
                      if ( !*v194 )
                        sub_1C6BC60(0, v48);
                      v57 = v207;
                      IsQuestClear_40554260 = UserServantCollectionEntity__IsFinded(*v194, 0);
                      if ( !v19 )
                        sub_1C6BC60(IsQuestClear_40554260, v106);
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
                    if ( !*v194 )
                      sub_1C6BC60(0, v48);
                    v57 = v207;
                    IsQuestClear_40554260 = UserServantCollectionEntity__IsCostumeGet(*v194, limitCount, 0);
                    if ( !v19 )
                      sub_1C6BC60(IsQuestClear_40554260, v59);
LABEL_162:
                    IsEnable = VoiceCondMaster__IsEnable(
                                 (VoiceCondMaster_o *)v19,
                                 overwritePriority,
                                 svtVoiceId,
                                 v43,
                                 v57,
                                 IsQuestClear_40554260,
                                 svtId,
                                 &overwriteNameDefault,
                                 isMateriala);
                    goto LABEL_241;
                  }
LABEL_218:
                  v60 = 1;
LABEL_219:
                  v61 = 1;
                  goto LABEL_242;
                }
                v68 = conds;
                if ( !conds || (v69 = conds->max_length) == 0 )
                {
                  v62 = (VoiceCondMaster_o *)v19;
                  if ( !v19 )
                    sub_1C6BC60(0, v48);
                  goto LABEL_233;
                }
                if ( (int)v69 < 1 )
                  goto LABEL_222;
                v70 = 0;
                v71 = 0;
                v72 = 0;
                v73 = 0;
                v183 = conds;
                voicePrefixb = conds->m_Items;
                while ( 2 )
                {
                  if ( (unsigned int)v70 >= (unsigned int)v69 )
                    sub_1C6BC68(v47);
                  v74 = voicePrefixb[v70];
                  if ( !v74 )
                    sub_1C6BC60(v47, v48);
                  v75 = v74->fields.condType;
                  if ( v75 <= 0x13 )
                  {
                    if ( ((1 << v75) & 0xCE000) != 0 )
                    {
                      if ( v74->fields.value >= 1 )
                      {
                        v76 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !v76 )
                          sub_1C6BC60(0, v77);
                        v78 = DataManager__GetMasterData_object_(
                                (DataManager_o *)v76,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___);
                        if ( !v78 )
                          sub_1C6BC60(0, v79);
                        v80 = DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v78,
                                v74->fields.value,
                                (const MethodInfo_33F90DC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                        if ( !v80 || Time < (__int64)v80[5].monitor )
                        {
                          v82 = (VoiceCondMaster_o *)v19;
                          if ( !v19 )
                            sub_1C6BC60(0, v81);
                          goto LABEL_89;
                        }
                        if ( !v19 )
                          sub_1C6BC60(v80, v81);
                        v47 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                 (VoiceCondMaster_o *)v19,
                                                 overwritePriority,
                                                 svtVoiceId,
                                                 v43,
                                                 v207,
                                                 Time >= (__int64)v80[6].klass,
                                                 svtId,
                                                 &overwriteNameDefault,
                                                 isMateriala);
LABEL_101:
                        v71 = (unsigned __int8)v47 & 1;
                        v73 = 1;
                        v72 = 1;
                        goto LABEL_102;
                      }
                    }
                    else if ( v75 == 16 && v74->fields.value >= 1 )
                    {
                      v83 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !v83 )
                        sub_1C6BC60(0, v84);
                      v85 = DataManager__GetMasterData_object_(
                              (DataManager_o *)v83,
                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
                      if ( !v85 )
                        sub_1C6BC60(0, v86);
                      v87 = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v85,
                              (Il2CppObject **)&v200[1],
                              v74->fields.value,
                              (const MethodInfo_33F9128 *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
                      if ( v87 )
                      {
                        if ( !*(_QWORD *)&v200[1] )
                          sub_1C6BC60(v87, v88);
                        if ( Time >= *(_QWORD *)(*(_QWORD *)&v200[1] + 40LL) )
                        {
                          if ( !v19 )
                            sub_1C6BC60(0, v88);
                          v47 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                   (VoiceCondMaster_o *)v19,
                                                   overwritePriority,
                                                   svtVoiceId,
                                                   v43,
                                                   v207,
                                                   1,
                                                   svtId,
                                                   &overwriteNameDefault,
                                                   isMateriala);
                          goto LABEL_101;
                        }
                      }
                      v82 = (VoiceCondMaster_o *)v19;
                      if ( !v19 )
                        sub_1C6BC60(0, v88);
LABEL_89:
                      v47 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                               v82,
                                               overwritePriority,
                                               svtVoiceId,
                                               v43,
                                               v207,
                                               0,
                                               svtId,
                                               &overwriteNameDefault,
                                               isMateriala);
                      v72 = (unsigned __int8)v47 & 1;
                      v73 = 1;
                      v71 = (unsigned __int8)v47 & 1;
LABEL_102:
                      v68 = v183;
                    }
                  }
                  LODWORD(v69) = v68->max_length;
                  if ( (int)++v70 >= (int)v69 )
                  {
                    if ( (v73 & 1) != 0 )
                    {
                      v60 = v72 & 1;
                      v61 = v71 & 1;
                      goto LABEL_242;
                    }
LABEL_222:
                    v62 = (VoiceCondMaster_o *)v19;
                    if ( !v19 )
                      sub_1C6BC60(0, v48);
LABEL_233:
                    v60 = 1;
                    v61 = VoiceCondMaster__IsEnable(
                            v62,
                            overwritePriority,
                            svtVoiceId,
                            v43,
                            v207,
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
                  v63 = *v194;
                  if ( !*v194 )
                    sub_1C6BC60(v47, v48);
                  v64 = *(_QWORD *)&v63->fields.friendshipRank.fields.currentCryptoKey;
                  v65 = *(_QWORD *)&v63->fields.friendshipRank.fields.fakeValue;
                  voicePrefixa = v207;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v209.fields.currentCryptoKey = v64;
                  *(_QWORD *)&v209.fields.fakeValue = v65;
                  v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v209, 0);
                  if ( !v19 )
                    sub_1C6BC60(v66, v67);
LABEL_74:
                  IsEnable = VoiceCondMaster__IsEnable(
                               (VoiceCondMaster_o *)v19,
                               overwritePriority,
                               svtVoiceId,
                               v43,
                               voicePrefixa,
                               (int)v66 >= v38->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_241;
                }
                if ( condType == 99 )
                {
                  v51 = *v194;
                  if ( !*v194 )
                    sub_1C6BC60(v47, v48);
                  v52 = *(_QWORD *)&v51->fields.friendshipRank.fields.currentCryptoKey;
                  v53 = *(_QWORD *)&v51->fields.friendshipRank.fields.fakeValue;
                  voicePrefix = v207;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v208.fields.currentCryptoKey = v52;
                  *(_QWORD *)&v208.fields.fakeValue = v53;
                  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v208, 0);
                  if ( !v19 )
                    sub_1C6BC60(v54, v55);
                  IsEnable = VoiceCondMaster__IsEnable(
                               (VoiceCondMaster_o *)v19,
                               overwritePriority,
                               svtVoiceId,
                               v43,
                               voicePrefix,
                               (int)v54 <= v38->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
LABEL_241:
                  v61 = IsEnable;
                  v60 = 1;
                  goto LABEL_242;
                }
                goto LABEL_218;
              }
              if ( condType != 56 )
              {
                if ( condType == 92 )
                {
                  if ( !v19 )
                    sub_1C6BC60(0, v48);
                  IsEnable = VoiceCondMaster__IsEnable(
                               (VoiceCondMaster_o *)v19,
                               overwritePriority,
                               svtVoiceId,
                               v43,
                               v207,
                               0,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_241;
                }
                goto LABEL_218;
              }
              v89 = conds;
              if ( !conds || (v90 = conds->max_length) == 0 )
              {
                v62 = (VoiceCondMaster_o *)v19;
                if ( !v19 )
                  sub_1C6BC60(0, v48);
                goto LABEL_233;
              }
              if ( (int)v90 < 1 )
                goto LABEL_134;
              v91 = 0;
              v92 = 0;
              v93 = 0;
              v94 = 0;
              v184 = conds;
              voicePrefixc = conds->m_Items;
              do
              {
                if ( (unsigned int)v91 >= (unsigned int)v90 )
                  sub_1C6BC68(v47);
                v95 = voicePrefixc[v91];
                if ( !v95 )
                  sub_1C6BC60(v47, v48);
                v96 = v95->fields.condType;
                if ( v96 <= 0x13 && ((1 << v96) & 0xCE000) != 0 && v95->fields.value >= 1 )
                {
                  v97 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v97 )
                    sub_1C6BC60(0, v98);
                  v99 = DataManager__GetMasterData_object_(
                          (DataManager_o *)v97,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v99 )
                    sub_1C6BC60(0, v100);
                  v101 = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v99,
                           v95->fields.value,
                           (const MethodInfo_33F90DC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v101 && Time >= (__int64)v101[5].monitor )
                  {
                    value = v95->fields.value;
                    v182 = v207;
                    if ( !CondType_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    v104 = CondType__IsServantGetBeforeEventEnd(svtId, value, 0);
                    if ( !v19 )
                      sub_1C6BC60(v104, v105);
                    v47 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             (VoiceCondMaster_o *)v19,
                                             overwritePriority,
                                             svtVoiceId,
                                             v43,
                                             v182,
                                             v104,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v92 = (unsigned __int8)v47 & 1;
                    v94 = 1;
                    v93 = 1;
                  }
                  else
                  {
                    if ( !v19 )
                      sub_1C6BC60(0, v102);
                    v47 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             (VoiceCondMaster_o *)v19,
                                             overwritePriority,
                                             svtVoiceId,
                                             v43,
                                             v207,
                                             0,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v93 = (unsigned __int8)v47 & 1;
                    v94 = 1;
                    v92 = (unsigned __int8)v47 & 1;
                  }
                  v89 = v184;
                }
                LODWORD(v90) = v89->max_length;
                ++v91;
              }
              while ( (int)v91 < (int)v90 );
              if ( (v94 & 1) == 0 )
              {
LABEL_134:
                v62 = (VoiceCondMaster_o *)v19;
                if ( !v19 )
                  sub_1C6BC60(0, v48);
                goto LABEL_233;
              }
              v60 = v93 & 1;
              v61 = v92 & 1;
LABEL_242:
              v151 = v61 & VoiceEntity__IsCondEnable(v38, svtId, v49);
              if ( (v60 & (v151 | (overwritePriority[0] != 2)) & 1) != 0 )
              {
                v152 = sub_1C6BC54(VoiceInfo_TypeInfo);
                VoiceInfo___ctor((VoiceInfo_o *)v152, 0);
                if ( !v152 )
                  sub_1C6BC60(v153, v154);
                *(_QWORD *)(v152 + 16) = v38;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v152 + 16), (int32_t)v38, v155, v156);
                *(_BYTE *)(v152 + 24) = v151 & 1;
                v157 = (int)overwriteName;
                *(_QWORD *)(v152 + 32) = overwriteName;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v152 + 32), v157, v158, v159);
                v160 = (int)overwriteNameDefault;
                *(_QWORD *)(v152 + 40) = overwriteNameDefault;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v152 + 40), v160, v161, v162);
                v163 = v207;
                *(_DWORD *)(v152 + 48) = overwritePriority[1];
                *(_DWORD *)(v152 + 52) = v163;
                v164 = (int)conds;
                *(_QWORD *)(v152 + 56) = conds;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v152 + 56), v164, v165, v166);
                if ( !v198 )
                  sub_1C6BC60(v167, v168);
                items = v198->fields._items;
                v172 = Method_System_Collections_Generic_List_VoiceInfo__Add__;
                ++v198->fields._version;
                if ( !items )
                  sub_1C6BC60(v167, v168);
                size = v198->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v198,
                    (Il2CppObject *)v152,
                    *(const MethodInfo_3800974 **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
                }
                else
                {
                  v174 = &items->obj.klass + size;
                  v198->fields._size = size + 1;
                  v174[4] = (Il2CppClass *)v152;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v174 + 4), v152, v169, v170);
                }
              }
            }
          }
        }
      }
    }
  }
  v175 = Enumerator->klass;
  v176 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v177 = &v175->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v177 - 1) != System_IDisposable_TypeInfo )
    {
      --v176;
      v177 += 4;
      if ( !v176 )
        goto LABEL_253;
    }
    v178 = (__int64)&v175->vtable[*v177];
  }
  else
  {
LABEL_253:
    v178 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v178)(
                                Enumerator,
                                *(_QWORD *)(v178 + 8));
  if ( (v197 & 1) != 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_264;
    NetworkManager__GoToTitleDialog((NetworkManager_o *)Instance, 0);
  }
  if ( !v198 )
LABEL_264:
    sub_1C6BC60(Instance, v17);
  return (VoiceInfo_array *)System_Collections_Generic_List_object___ToArray(
                              v198,
                              (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
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

  if ( (byte_4CB73E9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&VoiceEntity_TypeInfo);
    sub_1C6BA08(&StringLiteral_16102/*"_"*/);
    byte_4CB73E9 = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C6BC60(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v9);
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
      v14 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v18 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0);
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
      sub_1C6BC60(v19, v20);
    }
    v23 = v19[2];
    if ( !v23 )
      sub_1C6BC60(0, v20);
    v24 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 360LL))(
                               v23,
                               *(_QWORD *)(*(_QWORD *)v23 + 368LL));
    v25 = System_String__Concat_63966792((System_String_o *)StringLiteral_16102/*"_"*/, v24, 0);
    if ( !labelName )
      sub_1C6BC60(v25, v25);
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
    v29 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_4CB73E8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&VoiceEntity_TypeInfo);
    sub_1C6BA08(&StringLiteral_16102/*"_"*/);
    byte_4CB73E8 = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C6BC60(0, v9);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v12);
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
      v17 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v21 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0);
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
      sub_1C6BC60(v22, v23);
    }
    v26 = v22[2];
    if ( !v26 )
      sub_1C6BC60(0, v23);
    v27 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 360LL))(
                               v26,
                               *(_QWORD *)(*(_QWORD *)v26 + 368LL));
    v28 = System_String__Concat_63966792((System_String_o *)StringLiteral_16102/*"_"*/, v27, 0);
    if ( !labelName )
      sub_1C6BC60(v28, v28);
  }
  while ( !System_String__EndsWith(labelName, v28, 0) );
  if ( v24[12] != 17 && (unsigned int)(v24[7] - 1) > 1 )
  {
LABEL_39:
    v10 = 0;
    goto LABEL_40;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v30);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  v33 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v33 = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    sub_1C6BC60(v33, v31);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       v33->static_fields->userIdNumber,
                       svtId,
                       0);
  v35 = (unsigned int)v24[14];
  if ( isUpdate )
  {
    if ( !EntityDefinitely )
      sub_1C6BC60(0, v35);
    if ( !UserServantCollectionEntity__SetPlayed(EntityDefinitely, v35, 0) )
      goto LABEL_39;
  }
  else
  {
    if ( !EntityDefinitely )
      sub_1C6BC60(0, v35);
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
    v39 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
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
  int64_t Time_41599764; // x21
  System_DateTime_o v23; // x0
  uint64_t v25; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v26; // [xsp+10h] [xbp-50h]
  System_DateTime_o dateTime; // [xsp+18h] [xbp-48h]
  uint64_t v28; // [xsp+20h] [xbp-40h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4CB73E6 & 1) == 0 )
  {
    sub_1C6BA08(&System_DateTime_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB73E6 = 1;
  }
  v26.fields._dateData = 0;
  dateTime.fields._dateData = 0;
  if ( userBirthDay < 1 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_41600872(createDay, 0).fields._dateData;
  v28 = NetworkManager__getDateTime_41600544(userBirthDay, 0).fields._dateData;
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
  System_DateTime___ctor_65350956(v12, Year, Month, Day, 0);
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
  System_DateTime___ctor_65350956(v19, v14 + 1, v16, v18, 0);
  v26.fields._dateData = v25;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  ServerTime = NetworkManager__getServerTime(0);
  v21.fields._dateData = dateTime.fields._dateData;
  Time_41599764 = NetworkManager__getTime_41599764(v21, 0);
  v23.fields._dateData = v26.fields._dateData;
  return (Time_41599764 <= ServerTime && Time_41599764 + 86400 >= createDay)
       | (NetworkManager__getTime_41599764(v23, 0) <= ServerTime);
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
  if ( (byte_4CB73EA & 1) == 0 )
  {
    this = (VoiceMaster___c__DisplayClass2_0_o *)sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB73EA = 1;
  }
  userStvCollectionEntity = v4->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_1C6BC60(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v9, 0) == id;
}