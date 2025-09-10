void VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C283B2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
    byte_4C283B2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    136,
    (const MethodInfo_338A52C *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
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
  ServantVoiceEntity_array *Entity_42581868; // x29
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
  __int64 v38; // x2
  VoiceEntity_o *v39; // x24
  __int64 naturalAligment; // x10
  __int64 v41; // x8
  ServantVoiceEntity_o *v42; // x27
  __int64 v43; // x0
  System_String_o *v44; // x19
  System_String_o *v45; // x0
  System_String_o *v46; // x22
  System_Collections_Generic_List_object__o *VoiceList_42565096; // x0
  DataManager_c *v48; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x2
  int condType; // w8
  UserServantCollectionEntity_o *v52; // x8
  __int64 v53; // x27
  __int64 v54; // x22
  __int64 v55; // x0
  __int64 v56; // x1
  _BOOL4 IsEnable; // w0
  int32_t v58; // w22
  _BOOL8 IsQuestClear_40102980; // x0
  __int64 v60; // x1
  int v61; // w22
  int v62; // w27
  VoiceCondMaster_o *v63; // x0
  UserServantCollectionEntity_o *v64; // x8
  __int64 v65; // x27
  __int64 v66; // x22
  __int64 v67; // x0
  __int64 v68; // x1
  ServantVoiceCond_array *v69; // x14
  il2cpp_array_size_t v70; // x11
  __int64 v71; // x27
  char v72; // w9
  char v73; // w10
  char v74; // w8
  ServantVoiceCond_o *v75; // x22
  unsigned int v76; // w11
  Il2CppObject *v77; // x0
  __int64 v78; // x1
  Il2CppObject *v79; // x0
  __int64 v80; // x1
  Il2CppObject *v81; // x0
  __int64 v82; // x1
  VoiceCondMaster_o *v83; // x0
  Il2CppObject *v84; // x0
  __int64 v85; // x1
  Il2CppObject *v86; // x0
  __int64 v87; // x1
  _BOOL8 v88; // x0
  __int64 v89; // x1
  ServantVoiceCond_array *v90; // x13
  il2cpp_array_size_t v91; // x11
  __int64 v92; // x22
  char v93; // w8
  char v94; // w10
  char v95; // w9
  ServantVoiceCond_o *v96; // x27
  unsigned int v97; // w11
  Il2CppObject *v98; // x0
  __int64 v99; // x1
  Il2CppObject *v100; // x0
  __int64 v101; // x1
  Il2CppObject *v102; // x0
  __int64 v103; // x1
  int32_t value; // w27
  _BOOL8 v105; // x0
  __int64 v106; // x1
  __int64 v107; // x1
  __int64 v108; // x1
  UserServantCollectionEntity_o *v109; // x8
  __int64 v110; // x27
  __int64 v111; // x22
  __int64 v112; // x1
  int32_t condValue; // w27
  __int64 v114; // x1
  __int64 v115; // x1
  __int64 v116; // x1
  ServantVoiceCond_array *v117; // x12
  il2cpp_array_size_t max_length; // x10
  __int64 v119; // x22
  char v120; // w13
  char v121; // w9
  char v122; // w8
  ServantVoiceCond_o *v123; // x27
  unsigned int v124; // w10
  Il2CppObject *v125; // x0
  __int64 v126; // x1
  _BOOL8 v127; // x0
  __int64 v128; // x1
  Il2CppClass *v129; // x27
  bool v130; // w8
  NetworkManager_c *v131; // x0
  struct NetworkManager_StaticFields *static_fields; // x9
  char v133; // w27
  UserGameEntity_o *SelfUserGame; // x0
  int64_t v135; // x1
  BalanceConfig_c *v136; // x0
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x22
  System_Func_int__bool__o *v138; // x27
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  BalanceConfig_c *v141; // x0
  __int64 v142; // x1
  const MethodInfo *v143; // x3
  int64_t VtReleaseAt; // x8
  int64_t createdAt; // x22
  bool isEnableBirthdayVoice; // w22
  Il2CppObject *Master_object; // x0
  __int64 v148; // x1
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v150; // x3
  _BOOL8 v151; // x0
  int v152; // w27
  __int64 v153; // x19
  __int64 v154; // x0
  __int64 v155; // x1
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  int32_t v158; // w1
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  int32_t v161; // w1
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  int32_t v164; // w8
  int32_t v165; // w1
  int32_t v166; // w2
  const MethodInfo *v167; // x3
  __int64 v168; // x0
  __int64 v169; // x1
  int32_t v170; // w2
  const MethodInfo *v171; // x3
  struct System_Object_array *items; // x8
  _QWORD *v173; // x9
  __int64 size; // x10
  Il2CppClass **v175; // x0
  System_Collections_Generic_IEnumerator_T__c *v176; // x8
  __int64 v177; // x9
  int32_t *v178; // x10
  __int64 v179; // x0
  VoiceInfo_array *result; // x0
  const MethodInfo *isMateriala; // [xsp+0h] [xbp-120h]
  unsigned int v182; // [xsp+18h] [xbp-108h]
  int32_t v183; // [xsp+1Ch] [xbp-104h]
  ServantVoiceCond_array *v184; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v185; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v186; // [xsp+20h] [xbp-100h]
  int32_t voicePrefix; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixa; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixb; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixc; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixd; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixe[2]; // [xsp+28h] [xbp-F8h]
  CGThumbnailListItem_o *p_monitor; // [xsp+30h] [xbp-F0h]
  int v194; // [xsp+38h] [xbp-E8h]
  UserServantCollectionEntity_o **v195; // [xsp+40h] [xbp-E0h]
  int64_t Time; // [xsp+48h] [xbp-D8h]
  int32_t svtVoiceId; // [xsp+54h] [xbp-CCh]
  char v198; // [xsp+64h] [xbp-BCh]
  System_Collections_Generic_List_object__o *v199; // [xsp+68h] [xbp-B8h]
  Il2CppObject *object; // [xsp+70h] [xbp-B0h]
  _DWORD v201[3]; // [xsp+7Ch] [xbp-A4h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-98h] BYREF
  int32_t overwritePriority[2]; // [xsp+90h] [xbp-90h] BYREF
  System_String_o *overwriteNameDefault; // [xsp+98h] [xbp-88h] BYREF
  System_String_o *overwriteName; // [xsp+A0h] [xbp-80h] BYREF
  bool isInvalidVoiceList; // [xsp+ACh] [xbp-74h] BYREF
  ServantVoiceCond_array *conds; // [xsp+B0h] [xbp-70h] BYREF
  int32_t v208; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v209; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v210; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v211; // 0:x0.16

  if ( (byte_4C283B4 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_BasicHelper_Any_int____77996856);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_VoiceCondMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_BeforeBirthDayMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_VoiceInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_VoiceInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_VoiceInfo__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C2D490(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__);
    sub_1C2D490(&VoiceMaster___c__DisplayClass2_0_TypeInfo);
    sub_1C2D490(&VoiceEntity_TypeInfo);
    sub_1C2D490(&VoiceInfo_TypeInfo);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    byte_4C283B4 = 1;
  }
  v208 = 0;
  conds = 0;
  isInvalidVoiceList = 0;
  overwriteNameDefault = 0;
  overwriteName = 0;
  entity = 0;
  *(_QWORD *)overwritePriority = 0;
  *(_QWORD *)&v201[1] = 0;
  v15 = (Il2CppObject *)sub_1C2D6DC(VoiceMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v15, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_264;
  v208 = ServantLimitAddMaster__getVoicePrefix((ServantLimitAddMaster_o *)Instance, changeSvtVoiceId, limitCount, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  object = v15;
  v20 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
  v195 = (UserServantCollectionEntity_o **)&object[1];
  sub_1C2D434((CGThumbnailListItem_o *)&object[1], (int32_t)Instance, v21, v22);
  if ( !MasterData_object )
    goto LABEL_264;
  Entity_42581868 = ServantVoiceMaster__getEntity_42581868(
                      (ServantVoiceMaster_o *)MasterData_object,
                      changeSvtVoiceId,
                      limitCount,
                      0);
  Time = NetworkManager__getTime(0);
  v199 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v199,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_4C2267F )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C2267F = 1;
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
  v194 = *(unsigned __int8 *)(*(_QWORD *)&Instance[1].fields._DispLog + 144LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v25);
  v198 = 0;
  v27 = isCheckPlayCond;
  p_monitor = (CGThumbnailListItem_o *)&object[1].monitor;
  LOBYTE(v201[0]) = isMaterial;
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
      v31 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v35 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0);
    }
    v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
            Enumerator,
            *(_QWORD *)(v35 + 8));
    v39 = (VoiceEntity_o *)v36;
    if ( !v36
      || (naturalAligment = VoiceEntity_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)v36 + 304LL) < (unsigned int)naturalAligment)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v36 + 200LL) + 8 * naturalAligment - 8) != VoiceEntity_TypeInfo )
    {
      sub_1C2D6EC(v36, v37);
    }
    if ( !Entity_42581868 )
      sub_1C2D6EC(v36, v37);
    v41 = *(int *)(v36 + 28);
    if ( (unsigned int)v41 >= LODWORD(Entity_42581868->max_length) )
      sub_1C2D6F4(v36, v37, v38);
    v42 = Entity_42581868->m_Items[v41];
    if ( v42 )
    {
      v43 = *(_QWORD *)(v36 + 16);
      if ( !v43 )
        sub_1C2D6EC(0, v37);
      v44 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v43 + 360LL))(
                                 v43,
                                 *(_QWORD *)(*(_QWORD *)v43 + 368LL));
      v45 = System_Int32__ToString((int32_t)&v208, 0);
      v46 = System_String__Concat_63496112(v45, (System_String_o *)StringLiteral_16105/*"_"*/, v44, 0);
      VoiceList_42565096 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getVoiceList_42565096(
                                                                          v42,
                                                                          v39->fields.svtVoiceType,
                                                                          v46,
                                                                          disableCondTypeList,
                                                                          v27,
                                                                          0);
      if ( VoiceList_42565096 )
      {
        if ( VoiceList_42565096->fields._size >= 1 )
        {
          if ( System_Collections_Generic_List_object___get_Item(
                 VoiceList_42565096,
                 0,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__) )
          {
            ServantVoiceEntity__getOverwriteData(
              v42,
              v39->fields.svtVoiceType,
              v46,
              &conds,
              &isInvalidVoiceList,
              &overwriteName,
              &overwriteNameDefault,
              &overwritePriority[1],
              v201[0],
              0);
            if ( !isInvalidVoiceList )
            {
              overwritePriority[0] = v39->fields.closedType;
              condType = v39->fields.condType;
              if ( condType <= 54 )
              {
                if ( condType <= 21 )
                {
                  v61 = 1;
                  v62 = 1;
                  switch ( condType )
                  {
                    case 0:
                      v63 = (VoiceCondMaster_o *)v19;
                      if ( !v19 )
                        sub_1C2D6EC(0, v49);
                      goto LABEL_233;
                    case 1:
                      v58 = v208;
                      condValue = v39->fields.condValue;
                      if ( !CondType_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                      IsQuestClear_40102980 = CondType__IsQuestClear_40102980(condValue, -1, 0, 0);
                      if ( !v19 )
                        sub_1C2D6EC(IsQuestClear_40102980, v114);
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
                      if ( !*v195 )
                        sub_1C2D6EC(v48, v49);
                      if ( !v19 )
                        sub_1C2D6EC(0, v49);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   (VoiceCondMaster_o *)v19,
                                   overwritePriority,
                                   svtVoiceId,
                                   v44,
                                   v208,
                                   (*v195)->fields.maxLv >= v39->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_241;
                    case 7:
                      if ( !*v195 )
                        sub_1C2D6EC(v48, v49);
                      if ( !v19 )
                        sub_1C2D6EC(0, v49);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   (VoiceCondMaster_o *)v19,
                                   overwritePriority,
                                   svtVoiceId,
                                   v44,
                                   v208,
                                   (*v195)->fields.maxLimitCount >= v39->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_241;
                    case 8:
                      if ( !*v195 )
                        sub_1C2D6EC(0, v49);
                      v58 = v208;
                      IsQuestClear_40102980 = UserServantCollectionEntity__IsGet(*v195, 0);
                      if ( !v19 )
                        sub_1C2D6EC(IsQuestClear_40102980, v108);
                      goto LABEL_162;
                    case 9:
                      v109 = *v195;
                      if ( !*v195 )
                        sub_1C2D6EC(v48, v49);
                      v110 = *(_QWORD *)&v109->fields.friendshipRank.fields.currentCryptoKey;
                      v111 = *(_QWORD *)&v109->fields.friendshipRank.fields.fakeValue;
                      voicePrefixa = v208;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v211.fields.currentCryptoKey = v110;
                      *(_QWORD *)&v211.fields.fakeValue = v111;
                      v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v211, 0);
                      if ( !v19 )
                        sub_1C2D6EC(v67, v112);
                      goto LABEL_74;
                    case 17:
                      if ( !*v195 )
                        sub_1C2D6EC(0, v49);
                      v58 = v208;
                      IsQuestClear_40102980 = UserServantCollectionEntity__IsPlayed(*v195, v39->fields.condValue, 0);
                      if ( !v19 )
                        sub_1C2D6EC(IsQuestClear_40102980, v115);
                      goto LABEL_162;
                    case 18:
                      if ( !*v195 )
                        sub_1C2D6EC(0, v49);
                      v58 = v208;
                      IsQuestClear_40102980 = UserServantCollectionEntity__IsLimitCountMax(*v195, 0);
                      if ( !v19 )
                        sub_1C2D6EC(IsQuestClear_40102980, v116);
                      goto LABEL_162;
                    case 19:
                      SelfUserGame = UserGameMaster__getSelfUserGame(0);
                      if ( !SelfUserGame )
                        sub_1C2D6EC(0, v135);
                      if ( SelfUserGame->fields.birthDay < 1 )
                        goto LABEL_238;
                      *(_QWORD *)voicePrefixe = SelfUserGame->fields.birthDay;
                      v136 = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v136 = BalanceConfig_TypeInfo;
                      }
                      ServantIdsBirthdayBeforeValentine = v136->static_fields->ServantIdsBirthdayBeforeValentine;
                      v138 = (System_Func_int__bool__o *)p_monitor->klass;
                      if ( !p_monitor->klass )
                      {
                        v138 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
                        System_Func_int__bool____ctor(
                          v138,
                          object,
                          Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__,
                          0);
                        p_monitor->klass = (CGThumbnailListItem_c *)v138;
                        sub_1C2D434(p_monitor, (int32_t)v138, v139, v140);
                      }
                      v141 = (BalanceConfig_c *)BasicHelper__Any_int__51083888(
                                                  ServantIdsBirthdayBeforeValentine,
                                                  (System_Func_T__bool__o *)v138,
                                                  (const MethodInfo_30B7A70 *)Method_BasicHelper_Any_int____77996856);
                      if ( ((unsigned __int8)v141 & 1) != 0 )
                      {
                        v141 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v141 = BalanceConfig_TypeInfo;
                        }
                        VtReleaseAt = v141->static_fields->VtReleaseAt;
                        if ( VtReleaseAt >= 1 )
                        {
                          if ( !*v195 )
                            sub_1C2D6EC(v141, v142);
                          createdAt = (*v195)->fields.createdAt;
                          if ( !v141->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v141);
                            VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
                          }
                          if ( createdAt < VtReleaseAt )
                            goto LABEL_218;
                        }
                      }
                      if ( !*v195 )
                        sub_1C2D6EC(v141, v142);
                      isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                                (VoiceMaster_o *)v141,
                                                *(int64_t *)voicePrefixe,
                                                (*v195)->fields.createdAt,
                                                v143);
                      if ( !DataManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
                      if ( !Master_object )
                        sub_1C2D6EC(0, v148);
                      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       (const MethodInfo_338A3A0 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
                      if ( isEnableBirthdayVoice )
                      {
                        v151 = 1;
                      }
                      else
                      {
                        if ( !SingleEntity )
                          sub_1C2D6EC(0, v135);
                        v135 = (int64_t)SingleEntity[1].klass;
                        if ( v135 < 1 )
                        {
LABEL_238:
                          v151 = 0;
                        }
                        else
                        {
                          if ( !*v195 )
                            sub_1C2D6EC(SingleEntity, v135);
                          v151 = VoiceMaster__isEnableBirthdayVoice(
                                   (VoiceMaster_o *)SingleEntity,
                                   v135,
                                   (*v195)->fields.createdAt,
                                   v150);
                        }
                      }
                      if ( !v19 )
                        sub_1C2D6EC(v151, v135);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   (VoiceCondMaster_o *)v19,
                                   overwritePriority,
                                   svtVoiceId,
                                   v44,
                                   v208,
                                   v151,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_241;
                    case 20:
                      v117 = conds;
                      if ( conds && (max_length = conds->max_length) != 0 )
                      {
                        if ( (int)max_length >= 1 )
                        {
                          v119 = 0;
                          v120 = 0;
                          v121 = 0;
                          v122 = 0;
                          v186 = conds;
                          voicePrefixd = conds->m_Items;
                          do
                          {
                            if ( (unsigned int)v119 >= (unsigned int)max_length )
                              sub_1C2D6F4(v48, v49, v50);
                            v123 = voicePrefixd[v119];
                            if ( !v123 )
                              sub_1C2D6EC(v48, v49);
                            v124 = v123->fields.condType;
                            if ( v124 <= 0x13 && ((1 << v124) & 0xCE000) != 0 && v123->fields.value >= 1 )
                            {
                              if ( !DataManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                              v125 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
                              if ( !v125 )
                                sub_1C2D6EC(0, v126);
                              v127 = DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v125,
                                       &entity,
                                       v123->fields.value,
                                       (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
                              if ( !v127 )
                                goto LABEL_178;
                              if ( !entity )
                                sub_1C2D6EC(v127, v128);
                              if ( Time >= (__int64)entity[5].monitor )
                              {
                                if ( !v19 )
                                  sub_1C2D6EC(0, v128);
                                v129 = entity[6].klass;
                                v48 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         (VoiceCondMaster_o *)v19,
                                                         overwritePriority,
                                                         svtVoiceId,
                                                         v44,
                                                         v208,
                                                         Time >= (__int64)v129,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                if ( (v194 != 0) | v198 & 1 )
                                {
                                  v117 = v186;
                                  v130 = 0;
                                }
                                else
                                {
                                  v182 = (unsigned int)v48;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  if ( !byte_4C284CF )
                                  {
                                    sub_1C2D490(&NetworkManager_TypeInfo);
                                    byte_4C284CF = 1;
                                  }
                                  v131 = NetworkManager_TypeInfo;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                    v131 = NetworkManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1C2D6EC(v131, v49);
                                  static_fields = v131->static_fields;
                                  v117 = v186;
                                  v48 = (DataManager_c *)v182;
                                  v130 = static_fields->serverTime < (__int64)entity[6].klass;
                                }
                                v120 = (unsigned __int8)v48 & 1;
                                if ( v130 && Time >= (__int64)v129 )
                                {
                                  v133 = (unsigned __int8)v48 & 1;
                                  if ( !SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
                                    sub_1C2D6EC(0, v49);
                                  if ( !byte_4C2486F )
                                  {
                                    sub_1C2D490(&DataManager_TypeInfo);
                                    byte_4C2486F = 1;
                                  }
                                  v48 = DataManager_TypeInfo;
                                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                    v48 = DataManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1C2D6EC(v48, v49);
                                  v117 = v186;
                                  v122 = 1;
                                  v120 = v133;
                                  v198 |= v48->static_fields->dateVersion < (__int64)entity[6].klass;
                                }
                                else
                                {
                                  v122 = 1;
                                }
                                v121 = 1;
                              }
                              else
                              {
LABEL_178:
                                if ( !v19 )
                                  sub_1C2D6EC(0, v128);
                                v48 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         (VoiceCondMaster_o *)v19,
                                                         overwritePriority,
                                                         svtVoiceId,
                                                         v44,
                                                         v208,
                                                         0,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                v117 = v186;
                                v121 = (unsigned __int8)v48 & 1;
                                v122 = 1;
                                v120 = (unsigned __int8)v48 & 1;
                              }
                            }
                            LODWORD(max_length) = v117->max_length;
                            ++v119;
                          }
                          while ( (int)v119 < (int)max_length );
                          if ( (v122 & 1) != 0 )
                          {
                            v61 = v121 & 1;
                            v62 = v120 & 1;
                            goto LABEL_242;
                          }
                        }
                        v63 = (VoiceCondMaster_o *)v19;
                        if ( !v19 )
                          sub_1C2D6EC(0, v49);
                      }
                      else
                      {
                        v63 = (VoiceCondMaster_o *)v19;
                        if ( !v19 )
                          sub_1C2D6EC(0, v49);
                      }
                      return result;
                    case 21:
                      if ( !*v195 )
                        sub_1C2D6EC(0, v49);
                      v58 = v208;
                      IsQuestClear_40102980 = UserServantCollectionEntity__IsFinded(*v195, 0);
                      if ( !v19 )
                        sub_1C2D6EC(IsQuestClear_40102980, v107);
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
                    if ( !*v195 )
                      sub_1C2D6EC(0, v49);
                    v58 = v208;
                    IsQuestClear_40102980 = UserServantCollectionEntity__IsCostumeGet(*v195, limitCount, 0);
                    if ( !v19 )
                      sub_1C2D6EC(IsQuestClear_40102980, v60);
LABEL_162:
                    IsEnable = VoiceCondMaster__IsEnable(
                                 (VoiceCondMaster_o *)v19,
                                 overwritePriority,
                                 svtVoiceId,
                                 v44,
                                 v58,
                                 IsQuestClear_40102980,
                                 svtId,
                                 &overwriteNameDefault,
                                 isMateriala);
                    goto LABEL_241;
                  }
LABEL_218:
                  v61 = 1;
LABEL_219:
                  v62 = 1;
                  goto LABEL_242;
                }
                v69 = conds;
                if ( !conds || (v70 = conds->max_length) == 0 )
                {
                  v63 = (VoiceCondMaster_o *)v19;
                  if ( !v19 )
                    sub_1C2D6EC(0, v49);
                  goto LABEL_233;
                }
                if ( (int)v70 < 1 )
                  goto LABEL_222;
                v71 = 0;
                v72 = 0;
                v73 = 0;
                v74 = 0;
                v184 = conds;
                voicePrefixb = conds->m_Items;
                while ( 2 )
                {
                  if ( (unsigned int)v71 >= (unsigned int)v70 )
                    sub_1C2D6F4(v48, v49, v50);
                  v75 = voicePrefixb[v71];
                  if ( !v75 )
                    sub_1C2D6EC(v48, v49);
                  v76 = v75->fields.condType;
                  if ( v76 <= 0x13 )
                  {
                    if ( ((1 << v76) & 0xCE000) != 0 )
                    {
                      if ( v75->fields.value >= 1 )
                      {
                        v77 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !v77 )
                          sub_1C2D6EC(0, v78);
                        v79 = DataManager__GetMasterData_object_(
                                (DataManager_o *)v77,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
                        if ( !v79 )
                          sub_1C2D6EC(0, v80);
                        v81 = DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v79,
                                v75->fields.value,
                                (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                        if ( !v81 || Time < (__int64)v81[5].monitor )
                        {
                          v83 = (VoiceCondMaster_o *)v19;
                          if ( !v19 )
                            sub_1C2D6EC(0, v82);
                          goto LABEL_89;
                        }
                        if ( !v19 )
                          sub_1C2D6EC(v81, v82);
                        v48 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                 (VoiceCondMaster_o *)v19,
                                                 overwritePriority,
                                                 svtVoiceId,
                                                 v44,
                                                 v208,
                                                 Time >= (__int64)v81[6].klass,
                                                 svtId,
                                                 &overwriteNameDefault,
                                                 isMateriala);
LABEL_101:
                        v72 = (unsigned __int8)v48 & 1;
                        v74 = 1;
                        v73 = 1;
                        goto LABEL_102;
                      }
                    }
                    else if ( v76 == 16 && v75->fields.value >= 1 )
                    {
                      v84 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !v84 )
                        sub_1C2D6EC(0, v85);
                      v86 = DataManager__GetMasterData_object_(
                              (DataManager_o *)v84,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
                      if ( !v86 )
                        sub_1C2D6EC(0, v87);
                      v88 = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v86,
                              (Il2CppObject **)&v201[1],
                              v75->fields.value,
                              (const MethodInfo_3387DE4 *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
                      if ( v88 )
                      {
                        if ( !*(_QWORD *)&v201[1] )
                          sub_1C2D6EC(v88, v89);
                        if ( Time >= *(_QWORD *)(*(_QWORD *)&v201[1] + 40LL) )
                        {
                          if ( !v19 )
                            sub_1C2D6EC(0, v89);
                          v48 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                   (VoiceCondMaster_o *)v19,
                                                   overwritePriority,
                                                   svtVoiceId,
                                                   v44,
                                                   v208,
                                                   1,
                                                   svtId,
                                                   &overwriteNameDefault,
                                                   isMateriala);
                          goto LABEL_101;
                        }
                      }
                      v83 = (VoiceCondMaster_o *)v19;
                      if ( !v19 )
                        sub_1C2D6EC(0, v89);
LABEL_89:
                      v48 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                               v83,
                                               overwritePriority,
                                               svtVoiceId,
                                               v44,
                                               v208,
                                               0,
                                               svtId,
                                               &overwriteNameDefault,
                                               isMateriala);
                      v73 = (unsigned __int8)v48 & 1;
                      v74 = 1;
                      v72 = (unsigned __int8)v48 & 1;
LABEL_102:
                      v69 = v184;
                    }
                  }
                  LODWORD(v70) = v69->max_length;
                  if ( (int)++v71 >= (int)v70 )
                  {
                    if ( (v74 & 1) != 0 )
                    {
                      v61 = v73 & 1;
                      v62 = v72 & 1;
                      goto LABEL_242;
                    }
LABEL_222:
                    v63 = (VoiceCondMaster_o *)v19;
                    if ( !v19 )
                      sub_1C2D6EC(0, v49);
LABEL_233:
                    v61 = 1;
                    v62 = VoiceCondMaster__IsEnable(
                            v63,
                            overwritePriority,
                            svtVoiceId,
                            v44,
                            v208,
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
                  v64 = *v195;
                  if ( !*v195 )
                    sub_1C2D6EC(v48, v49);
                  v65 = *(_QWORD *)&v64->fields.friendshipRank.fields.currentCryptoKey;
                  v66 = *(_QWORD *)&v64->fields.friendshipRank.fields.fakeValue;
                  voicePrefixa = v208;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v210.fields.currentCryptoKey = v65;
                  *(_QWORD *)&v210.fields.fakeValue = v66;
                  v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v210, 0);
                  if ( !v19 )
                    sub_1C2D6EC(v67, v68);
LABEL_74:
                  IsEnable = VoiceCondMaster__IsEnable(
                               (VoiceCondMaster_o *)v19,
                               overwritePriority,
                               svtVoiceId,
                               v44,
                               voicePrefixa,
                               (int)v67 >= v39->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_241;
                }
                if ( condType == 99 )
                {
                  v52 = *v195;
                  if ( !*v195 )
                    sub_1C2D6EC(v48, v49);
                  v53 = *(_QWORD *)&v52->fields.friendshipRank.fields.currentCryptoKey;
                  v54 = *(_QWORD *)&v52->fields.friendshipRank.fields.fakeValue;
                  voicePrefix = v208;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v209.fields.currentCryptoKey = v53;
                  *(_QWORD *)&v209.fields.fakeValue = v54;
                  v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v209, 0);
                  if ( !v19 )
                    sub_1C2D6EC(v55, v56);
                  IsEnable = VoiceCondMaster__IsEnable(
                               (VoiceCondMaster_o *)v19,
                               overwritePriority,
                               svtVoiceId,
                               v44,
                               voicePrefix,
                               (int)v55 <= v39->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
LABEL_241:
                  v62 = IsEnable;
                  v61 = 1;
                  goto LABEL_242;
                }
                goto LABEL_218;
              }
              if ( condType != 56 )
              {
                if ( condType == 92 )
                {
                  if ( !v19 )
                    sub_1C2D6EC(0, v49);
                  IsEnable = VoiceCondMaster__IsEnable(
                               (VoiceCondMaster_o *)v19,
                               overwritePriority,
                               svtVoiceId,
                               v44,
                               v208,
                               0,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_241;
                }
                goto LABEL_218;
              }
              v90 = conds;
              if ( !conds || (v91 = conds->max_length) == 0 )
              {
                v63 = (VoiceCondMaster_o *)v19;
                if ( !v19 )
                  sub_1C2D6EC(0, v49);
                goto LABEL_233;
              }
              if ( (int)v91 < 1 )
                goto LABEL_134;
              v92 = 0;
              v93 = 0;
              v94 = 0;
              v95 = 0;
              v185 = conds;
              voicePrefixc = conds->m_Items;
              do
              {
                if ( (unsigned int)v92 >= (unsigned int)v91 )
                  sub_1C2D6F4(v48, v49, v50);
                v96 = voicePrefixc[v92];
                if ( !v96 )
                  sub_1C2D6EC(v48, v49);
                v97 = v96->fields.condType;
                if ( v97 <= 0x13 && ((1 << v97) & 0xCE000) != 0 && v96->fields.value >= 1 )
                {
                  v98 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v98 )
                    sub_1C2D6EC(0, v99);
                  v100 = DataManager__GetMasterData_object_(
                           (DataManager_o *)v98,
                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v100 )
                    sub_1C2D6EC(0, v101);
                  v102 = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v100,
                           v96->fields.value,
                           (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v102 && Time >= (__int64)v102[5].monitor )
                  {
                    value = v96->fields.value;
                    v183 = v208;
                    if ( !CondType_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    v105 = CondType__IsServantGetBeforeEventEnd(svtId, value, 0);
                    if ( !v19 )
                      sub_1C2D6EC(v105, v106);
                    v48 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             (VoiceCondMaster_o *)v19,
                                             overwritePriority,
                                             svtVoiceId,
                                             v44,
                                             v183,
                                             v105,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v93 = (unsigned __int8)v48 & 1;
                    v95 = 1;
                    v94 = 1;
                  }
                  else
                  {
                    if ( !v19 )
                      sub_1C2D6EC(0, v103);
                    v48 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             (VoiceCondMaster_o *)v19,
                                             overwritePriority,
                                             svtVoiceId,
                                             v44,
                                             v208,
                                             0,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v94 = (unsigned __int8)v48 & 1;
                    v95 = 1;
                    v93 = (unsigned __int8)v48 & 1;
                  }
                  v90 = v185;
                }
                LODWORD(v91) = v90->max_length;
                ++v92;
              }
              while ( (int)v92 < (int)v91 );
              if ( (v95 & 1) == 0 )
              {
LABEL_134:
                v63 = (VoiceCondMaster_o *)v19;
                if ( !v19 )
                  sub_1C2D6EC(0, v49);
                goto LABEL_233;
              }
              v61 = v94 & 1;
              v62 = v93 & 1;
LABEL_242:
              v152 = v62 & VoiceEntity__IsCondEnable(v39, svtId, v50);
              if ( (v61 & (v152 | (overwritePriority[0] != 2)) & 1) != 0 )
              {
                v153 = sub_1C2D6DC(VoiceInfo_TypeInfo);
                VoiceInfo___ctor((VoiceInfo_o *)v153, 0);
                if ( !v153 )
                  sub_1C2D6EC(v154, v155);
                *(_QWORD *)(v153 + 16) = v39;
                sub_1C2D434((CGThumbnailListItem_o *)(v153 + 16), (int32_t)v39, v156, v157);
                *(_BYTE *)(v153 + 24) = v152 & 1;
                v158 = (int)overwriteName;
                *(_QWORD *)(v153 + 32) = overwriteName;
                sub_1C2D434((CGThumbnailListItem_o *)(v153 + 32), v158, v159, v160);
                v161 = (int)overwriteNameDefault;
                *(_QWORD *)(v153 + 40) = overwriteNameDefault;
                sub_1C2D434((CGThumbnailListItem_o *)(v153 + 40), v161, v162, v163);
                v164 = v208;
                *(_DWORD *)(v153 + 48) = overwritePriority[1];
                *(_DWORD *)(v153 + 52) = v164;
                v165 = (int)conds;
                *(_QWORD *)(v153 + 56) = conds;
                sub_1C2D434((CGThumbnailListItem_o *)(v153 + 56), v165, v166, v167);
                if ( !v199 )
                  sub_1C2D6EC(v168, v169);
                items = v199->fields._items;
                v173 = Method_System_Collections_Generic_List_VoiceInfo__Add__;
                ++v199->fields._version;
                if ( !items )
                  sub_1C2D6EC(v168, v169);
                size = v199->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v199,
                    (Il2CppObject *)v153,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v173[4] + 192LL) + 112LL));
                }
                else
                {
                  v175 = &items->obj.klass + size;
                  v199->fields._size = size + 1;
                  v175[4] = (Il2CppClass *)v153;
                  sub_1C2D434((CGThumbnailListItem_o *)(v175 + 4), v153, v170, v171);
                }
              }
            }
          }
        }
      }
    }
  }
  v176 = Enumerator->klass;
  v177 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v178 = &v176->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v178 - 1) != System_IDisposable_TypeInfo )
    {
      --v177;
      v178 += 4;
      if ( !v177 )
        goto LABEL_253;
    }
    v179 = (__int64)&v176->vtable[*v178];
  }
  else
  {
LABEL_253:
    v179 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v179)(
                                Enumerator,
                                *(_QWORD *)(v179 + 8));
  if ( (v198 & 1) != 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_264;
    NetworkManager__GoToTitleDialog((NetworkManager_o *)Instance, 0);
  }
  if ( !v199 )
LABEL_264:
    sub_1C2D6EC(Instance, v17);
  return (VoiceInfo_array *)System_Collections_Generic_List_object___ToArray(
                              v199,
                              (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
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

  if ( (byte_4C283B6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&VoiceEntity_TypeInfo);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    byte_4C283B6 = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v9);
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
      v14 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v18 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0);
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
      sub_1C2D6EC(v19, v20);
    }
    v23 = v19[2];
    if ( !v23 )
      sub_1C2D6EC(0, v20);
    v24 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 360LL))(
                               v23,
                               *(_QWORD *)(*(_QWORD *)v23 + 368LL));
    v25 = System_String__Concat_63457864((System_String_o *)StringLiteral_16105/*"_"*/, v24, 0);
    if ( !labelName )
      sub_1C2D6EC(v25, v25);
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
    v29 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_4C283B5 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&VoiceEntity_TypeInfo);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    byte_4C283B5 = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v9);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v12);
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
      v17 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v21 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0);
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
      sub_1C2D6EC(v22, v23);
    }
    v26 = v22[2];
    if ( !v26 )
      sub_1C2D6EC(0, v23);
    v27 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 360LL))(
                               v26,
                               *(_QWORD *)(*(_QWORD *)v26 + 368LL));
    v28 = System_String__Concat_63457864((System_String_o *)StringLiteral_16105/*"_"*/, v27, 0);
    if ( !labelName )
      sub_1C2D6EC(v28, v28);
  }
  while ( !System_String__EndsWith(labelName, v28, 0) );
  if ( v24[12] != 17 && (unsigned int)(v24[7] - 1) > 1 )
  {
LABEL_39:
    v10 = 0;
    goto LABEL_40;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v30);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v33 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v33 = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    sub_1C2D6EC(v33, v31);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       v33->static_fields->userIdNumber,
                       svtId,
                       0);
  v35 = (unsigned int)v24[14];
  if ( isUpdate )
  {
    if ( !EntityDefinitely )
      sub_1C2D6EC(0, v35);
    if ( !UserServantCollectionEntity__SetPlayed(EntityDefinitely, v35, 0) )
      goto LABEL_39;
  }
  else
  {
    if ( !EntityDefinitely )
      sub_1C2D6EC(0, v35);
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
    v39 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
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
  int64_t Time_41144944; // x21
  System_DateTime_o v23; // x0
  uint64_t v25; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v26; // [xsp+10h] [xbp-50h]
  System_DateTime_o dateTime; // [xsp+18h] [xbp-48h]
  uint64_t v28; // [xsp+20h] [xbp-40h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4C283B3 & 1) == 0 )
  {
    sub_1C2D490(&System_DateTime_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C283B3 = 1;
  }
  v26.fields._dateData = 0;
  dateTime.fields._dateData = 0;
  if ( userBirthDay < 1 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_41146052(createDay, 0).fields._dateData;
  v28 = NetworkManager__getDateTime_41145724(userBirthDay, 0).fields._dateData;
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
  System_DateTime___ctor_64844384(v12, Year, Month, Day, 0);
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
  System_DateTime___ctor_64844384(v19, v14 + 1, v16, v18, 0);
  v26.fields._dateData = v25;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  ServerTime = NetworkManager__getServerTime(0);
  v21.fields._dateData = dateTime.fields._dateData;
  Time_41144944 = NetworkManager__getTime_41144944(v21, 0);
  v23.fields._dateData = v26.fields._dateData;
  return (Time_41144944 <= ServerTime && Time_41144944 + 86400 >= createDay)
       | (NetworkManager__getTime_41144944(v23, 0) <= ServerTime);
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
  if ( (byte_4C283B7 & 1) == 0 )
  {
    this = (VoiceMaster___c__DisplayClass2_0_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C283B7 = 1;
  }
  userStvCollectionEntity = v4->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_1C2D6EC(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v9, 0) == id;
}