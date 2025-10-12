void VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C38AB6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
    byte_4C38AB6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    136,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
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
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  ServantVoiceEntity_array *Entity_42714556; // x29
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v25; // w26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  VoiceEntity_o *v35; // x24
  __int64 naturalAligment; // x10
  __int64 v37; // x8
  ServantVoiceEntity_o *v38; // x27
  __int64 v39; // x0
  System_String_o *v40; // x19
  System_String_o *v41; // x0
  System_String_o *v42; // x22
  System_Collections_Generic_List_object__o *VoiceList_42697784; // x0
  DataManager_c *v44; // x0
  const MethodInfo *v45; // x2
  int condType; // w8
  UserServantCollectionEntity_o *v47; // x8
  __int64 v48; // x27
  __int64 v49; // x22
  __int64 v50; // x0
  _BOOL4 IsEnable; // w0
  int32_t v52; // w22
  _BOOL8 IsQuestClear_40225464; // x0
  int v54; // w22
  int v55; // w27
  VoiceCondMaster_o *v56; // x0
  UserServantCollectionEntity_o *v57; // x8
  __int64 v58; // x27
  __int64 v59; // x22
  __int64 v60; // x0
  ServantVoiceCond_array *v61; // x14
  il2cpp_array_size_t v62; // x11
  __int64 v63; // x27
  char v64; // w9
  char v65; // w10
  char v66; // w8
  ServantVoiceCond_o *v67; // x22
  unsigned int v68; // w11
  Il2CppObject *v69; // x0
  Il2CppObject *v70; // x0
  Il2CppObject *v71; // x0
  VoiceCondMaster_o *v72; // x0
  Il2CppObject *v73; // x0
  Il2CppObject *v74; // x0
  _BOOL8 v75; // x0
  ServantVoiceCond_array *v76; // x13
  il2cpp_array_size_t v77; // x11
  __int64 v78; // x22
  char v79; // w8
  char v80; // w10
  char v81; // w9
  ServantVoiceCond_o *v82; // x27
  unsigned int v83; // w11
  Il2CppObject *v84; // x0
  Il2CppObject *v85; // x0
  Il2CppObject *v86; // x0
  int32_t value; // w27
  _BOOL8 v88; // x0
  UserServantCollectionEntity_o *v89; // x8
  __int64 v90; // x27
  __int64 v91; // x22
  int32_t condValue; // w27
  ServantVoiceCond_array *v93; // x12
  il2cpp_array_size_t max_length; // x10
  __int64 v95; // x22
  char v96; // w13
  char v97; // w9
  char v98; // w8
  ServantVoiceCond_o *v99; // x27
  unsigned int v100; // w10
  Il2CppObject *v101; // x0
  _BOOL8 v102; // x0
  Il2CppClass *v103; // x27
  bool v104; // w8
  NetworkManager_c *v105; // x0
  struct NetworkManager_StaticFields *static_fields; // x9
  char v107; // w27
  UserGameEntity_o *SelfUserGame; // x0
  BalanceConfig_c *v109; // x0
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x22
  System_Func_int__bool__o *v111; // x27
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  BalanceConfig_c *v114; // x0
  const MethodInfo *v115; // x3
  int64_t VtReleaseAt; // x8
  int64_t createdAt; // x22
  bool isEnableBirthdayVoice; // w22
  Il2CppObject *Master_object; // x0
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v121; // x3
  _BOOL8 v122; // x0
  int64_t v123; // x1
  int v124; // w27
  __int64 v125; // x19
  __int64 v126; // x0
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  int32_t v129; // w1
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  int32_t v132; // w1
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  int32_t v135; // w8
  int32_t v136; // w1
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  __int64 v139; // x0
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  struct System_Object_array *items; // x8
  _QWORD *v143; // x9
  __int64 size; // x10
  Il2CppClass **v145; // x0
  System_Collections_Generic_IEnumerator_T__c *v146; // x8
  __int64 v147; // x9
  int32_t *v148; // x10
  __int64 v149; // x0
  VoiceInfo_array *result; // x0
  const MethodInfo *isMateriala; // [xsp+0h] [xbp-120h]
  unsigned int v152; // [xsp+18h] [xbp-108h]
  int32_t v153; // [xsp+1Ch] [xbp-104h]
  ServantVoiceCond_array *v154; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v155; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v156; // [xsp+20h] [xbp-100h]
  int32_t voicePrefix; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixa; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixb; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixc; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixd; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixe[2]; // [xsp+28h] [xbp-F8h]
  CGThumbnailListItem_o *p_monitor; // [xsp+30h] [xbp-F0h]
  int v164; // [xsp+38h] [xbp-E8h]
  UserServantCollectionEntity_o **v165; // [xsp+40h] [xbp-E0h]
  int64_t Time; // [xsp+48h] [xbp-D8h]
  int32_t svtVoiceId; // [xsp+54h] [xbp-CCh]
  char v168; // [xsp+64h] [xbp-BCh]
  System_Collections_Generic_List_object__o *v169; // [xsp+68h] [xbp-B8h]
  Il2CppObject *object; // [xsp+70h] [xbp-B0h]
  _DWORD v171[3]; // [xsp+7Ch] [xbp-A4h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-98h] BYREF
  int32_t overwritePriority[2]; // [xsp+90h] [xbp-90h] BYREF
  System_String_o *overwriteNameDefault; // [xsp+98h] [xbp-88h] BYREF
  System_String_o *overwriteName; // [xsp+A0h] [xbp-80h] BYREF
  bool isInvalidVoiceList; // [xsp+ACh] [xbp-74h] BYREF
  ServantVoiceCond_array *conds; // [xsp+B0h] [xbp-70h] BYREF
  int32_t v178; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v179; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v181; // 0:x0.16

  if ( (byte_4C38AB8 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_BasicHelper_Any_int____78062168);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_VoiceCondMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_BeforeBirthDayMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_VoiceInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_VoiceInfo___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_VoiceInfo__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C32C20(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__);
    sub_1C32C20(&VoiceMaster___c__DisplayClass2_0_TypeInfo);
    sub_1C32C20(&VoiceEntity_TypeInfo);
    sub_1C32C20(&VoiceInfo_TypeInfo);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    byte_4C38AB8 = 1;
  }
  v178 = 0;
  conds = 0;
  isInvalidVoiceList = 0;
  overwriteNameDefault = 0;
  overwriteName = 0;
  entity = 0;
  *(_QWORD *)overwritePriority = 0;
  *(_QWORD *)&v171[1] = 0;
  v15 = (Il2CppObject *)sub_1C32E6C(VoiceMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v15, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  v18 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_264;
  v178 = ServantLimitAddMaster__getVoicePrefix((ServantLimitAddMaster_o *)Instance, changeSvtVoiceId, limitCount, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_264;
  object = v15;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v19 )
    goto LABEL_264;
  Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                (UserServantCollectionMaster_o *)v19,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                svtId,
                                0);
  if ( !object )
    goto LABEL_264;
  object[1].klass = (Il2CppClass *)Instance;
  v165 = (UserServantCollectionEntity_o **)&object[1];
  sub_1C32BC4((CGThumbnailListItem_o *)&object[1], (int32_t)Instance, v20, v21);
  if ( !MasterData_object )
    goto LABEL_264;
  Entity_42714556 = ServantVoiceMaster__getEntity_42714556(
                      (ServantVoiceMaster_o *)MasterData_object,
                      changeSvtVoiceId,
                      limitCount,
                      0);
  Time = NetworkManager__getTime(0);
  v169 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v169,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_4C32D4E )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C32D4E = 1;
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
  v164 = *(unsigned __int8 *)(*(_QWORD *)&Instance[1].fields._DispLog + 144LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  v168 = 0;
  v25 = isCheckPlayCond;
  p_monitor = (CGThumbnailListItem_o *)&object[1].monitor;
  LOBYTE(v171[0]) = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        p_offset += 4;
        if ( !v27 )
          goto LABEL_28;
      }
      v29 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_28:
      v29 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
            Enumerator,
            *(_QWORD *)(v29 + 8))
        & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    v31 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_VoiceEntity__c **)v32 - 1) != System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_35;
      }
      v33 = (__int64)&v30->vtable[*v32];
    }
    else
    {
LABEL_35:
      v33 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0);
    }
    v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
            Enumerator,
            *(_QWORD *)(v33 + 8));
    v35 = (VoiceEntity_o *)v34;
    if ( !v34
      || (naturalAligment = VoiceEntity_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)v34 + 304LL) < (unsigned int)naturalAligment)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v34 + 200LL) + 8 * naturalAligment - 8) != VoiceEntity_TypeInfo )
    {
      sub_1C32E7C(v34);
    }
    if ( !Entity_42714556 )
      sub_1C32E7C(v34);
    v37 = *(int *)(v34 + 28);
    if ( (unsigned int)v37 >= LODWORD(Entity_42714556->max_length) )
      sub_1C32E84(v34);
    v38 = Entity_42714556->m_Items[v37];
    if ( v38 )
    {
      v39 = *(_QWORD *)(v34 + 16);
      if ( !v39 )
        sub_1C32E7C(0);
      v40 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v39 + 360LL))(
                                 v39,
                                 *(_QWORD *)(*(_QWORD *)v39 + 368LL));
      v41 = System_Int32__ToString((int32_t)&v178, 0);
      v42 = System_String__Concat_63556792(v41, (System_String_o *)StringLiteral_16107/*"_"*/, v40, 0);
      VoiceList_42697784 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getVoiceList_42697784(
                                                                          v38,
                                                                          v35->fields.svtVoiceType,
                                                                          v42,
                                                                          disableCondTypeList,
                                                                          v25,
                                                                          0);
      if ( VoiceList_42697784 )
      {
        if ( VoiceList_42697784->fields._size >= 1 )
        {
          if ( System_Collections_Generic_List_object___get_Item(
                 VoiceList_42697784,
                 0,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__) )
          {
            ServantVoiceEntity__getOverwriteData(
              v38,
              v35->fields.svtVoiceType,
              v42,
              &conds,
              &isInvalidVoiceList,
              &overwriteName,
              &overwriteNameDefault,
              &overwritePriority[1],
              v171[0],
              0);
            if ( !isInvalidVoiceList )
            {
              overwritePriority[0] = v35->fields.closedType;
              condType = v35->fields.condType;
              if ( condType <= 54 )
              {
                if ( condType <= 21 )
                {
                  v54 = 1;
                  v55 = 1;
                  switch ( condType )
                  {
                    case 0:
                      v56 = (VoiceCondMaster_o *)v18;
                      if ( !v18 )
                        sub_1C32E7C(0);
                      goto LABEL_233;
                    case 1:
                      v52 = v178;
                      condValue = v35->fields.condValue;
                      if ( !CondType_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                      IsQuestClear_40225464 = CondType__IsQuestClear_40225464(condValue, -1, 0, 0);
                      if ( !v18 )
                        sub_1C32E7C(IsQuestClear_40225464);
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
                      if ( !*v165 )
                        sub_1C32E7C(v44);
                      if ( !v18 )
                        sub_1C32E7C(0);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   (VoiceCondMaster_o *)v18,
                                   overwritePriority,
                                   svtVoiceId,
                                   v40,
                                   v178,
                                   (*v165)->fields.maxLv >= v35->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_241;
                    case 7:
                      if ( !*v165 )
                        sub_1C32E7C(v44);
                      if ( !v18 )
                        sub_1C32E7C(0);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   (VoiceCondMaster_o *)v18,
                                   overwritePriority,
                                   svtVoiceId,
                                   v40,
                                   v178,
                                   (*v165)->fields.maxLimitCount >= v35->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_241;
                    case 8:
                      if ( !*v165 )
                        sub_1C32E7C(0);
                      v52 = v178;
                      IsQuestClear_40225464 = UserServantCollectionEntity__IsGet(*v165, 0);
                      if ( !v18 )
                        sub_1C32E7C(IsQuestClear_40225464);
                      goto LABEL_162;
                    case 9:
                      v89 = *v165;
                      if ( !*v165 )
                        sub_1C32E7C(v44);
                      v90 = *(_QWORD *)&v89->fields.friendshipRank.fields.currentCryptoKey;
                      v91 = *(_QWORD *)&v89->fields.friendshipRank.fields.fakeValue;
                      voicePrefixa = v178;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v181.fields.currentCryptoKey = v90;
                      *(_QWORD *)&v181.fields.fakeValue = v91;
                      v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v181, 0);
                      if ( !v18 )
                        sub_1C32E7C(v60);
                      goto LABEL_74;
                    case 17:
                      if ( !*v165 )
                        sub_1C32E7C(0);
                      v52 = v178;
                      IsQuestClear_40225464 = UserServantCollectionEntity__IsPlayed(*v165, v35->fields.condValue, 0);
                      if ( !v18 )
                        sub_1C32E7C(IsQuestClear_40225464);
                      goto LABEL_162;
                    case 18:
                      if ( !*v165 )
                        sub_1C32E7C(0);
                      v52 = v178;
                      IsQuestClear_40225464 = UserServantCollectionEntity__IsLimitCountMax(*v165, 0);
                      if ( !v18 )
                        sub_1C32E7C(IsQuestClear_40225464);
                      goto LABEL_162;
                    case 19:
                      SelfUserGame = UserGameMaster__getSelfUserGame(0);
                      if ( !SelfUserGame )
                        sub_1C32E7C(0);
                      if ( SelfUserGame->fields.birthDay < 1 )
                        goto LABEL_238;
                      *(_QWORD *)voicePrefixe = SelfUserGame->fields.birthDay;
                      v109 = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v109 = BalanceConfig_TypeInfo;
                      }
                      ServantIdsBirthdayBeforeValentine = v109->static_fields->ServantIdsBirthdayBeforeValentine;
                      v111 = (System_Func_int__bool__o *)p_monitor->klass;
                      if ( !p_monitor->klass )
                      {
                        v111 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
                        System_Func_int__bool____ctor(
                          v111,
                          object,
                          Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__,
                          0);
                        p_monitor->klass = (CGThumbnailListItem_c *)v111;
                        sub_1C32BC4(p_monitor, (int32_t)v111, v112, v113);
                      }
                      v114 = (BalanceConfig_c *)BasicHelper__Any_int__51143952(
                                                  ServantIdsBirthdayBeforeValentine,
                                                  (System_Func_T__bool__o *)v111,
                                                  (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168);
                      if ( ((unsigned __int8)v114 & 1) != 0 )
                      {
                        v114 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v114 = BalanceConfig_TypeInfo;
                        }
                        VtReleaseAt = v114->static_fields->VtReleaseAt;
                        if ( VtReleaseAt >= 1 )
                        {
                          if ( !*v165 )
                            sub_1C32E7C(v114);
                          createdAt = (*v165)->fields.createdAt;
                          if ( !v114->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v114);
                            VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
                          }
                          if ( createdAt < VtReleaseAt )
                            goto LABEL_218;
                        }
                      }
                      if ( !*v165 )
                        sub_1C32E7C(v114);
                      isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                                (VoiceMaster_o *)v114,
                                                *(int64_t *)voicePrefixe,
                                                (*v165)->fields.createdAt,
                                                v115);
                      if ( !DataManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
                      if ( !Master_object )
                        sub_1C32E7C(0);
                      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       (const MethodInfo_3398E40 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
                      if ( isEnableBirthdayVoice )
                      {
                        v122 = 1;
                      }
                      else
                      {
                        if ( !SingleEntity )
                          sub_1C32E7C(0);
                        v123 = (int64_t)SingleEntity[1].klass;
                        if ( v123 < 1 )
                        {
LABEL_238:
                          v122 = 0;
                        }
                        else
                        {
                          if ( !*v165 )
                            sub_1C32E7C(SingleEntity);
                          v122 = VoiceMaster__isEnableBirthdayVoice(
                                   (VoiceMaster_o *)SingleEntity,
                                   v123,
                                   (*v165)->fields.createdAt,
                                   v121);
                        }
                      }
                      if ( !v18 )
                        sub_1C32E7C(v122);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   (VoiceCondMaster_o *)v18,
                                   overwritePriority,
                                   svtVoiceId,
                                   v40,
                                   v178,
                                   v122,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_241;
                    case 20:
                      v93 = conds;
                      if ( conds && (max_length = conds->max_length) != 0 )
                      {
                        if ( (int)max_length >= 1 )
                        {
                          v95 = 0;
                          v96 = 0;
                          v97 = 0;
                          v98 = 0;
                          v156 = conds;
                          voicePrefixd = conds->m_Items;
                          do
                          {
                            if ( (unsigned int)v95 >= (unsigned int)max_length )
                              sub_1C32E84(v44);
                            v99 = voicePrefixd[v95];
                            if ( !v99 )
                              sub_1C32E7C(v44);
                            v100 = v99->fields.condType;
                            if ( v100 <= 0x13 && ((1 << v100) & 0xCE000) != 0 && v99->fields.value >= 1 )
                            {
                              if ( !DataManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                              v101 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
                              if ( !v101 )
                                sub_1C32E7C(0);
                              v102 = DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v101,
                                       &entity,
                                       v99->fields.value,
                                       (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
                              if ( !v102 )
                                goto LABEL_178;
                              if ( !entity )
                                sub_1C32E7C(v102);
                              if ( Time >= (__int64)entity[5].monitor )
                              {
                                if ( !v18 )
                                  sub_1C32E7C(0);
                                v103 = entity[6].klass;
                                v44 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         (VoiceCondMaster_o *)v18,
                                                         overwritePriority,
                                                         svtVoiceId,
                                                         v40,
                                                         v178,
                                                         Time >= (__int64)v103,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                if ( (v164 != 0) | v168 & 1 )
                                {
                                  v93 = v156;
                                  v104 = 0;
                                }
                                else
                                {
                                  v152 = (unsigned int)v44;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  if ( !byte_4C38BD3 )
                                  {
                                    sub_1C32C20(&NetworkManager_TypeInfo);
                                    byte_4C38BD3 = 1;
                                  }
                                  v105 = NetworkManager_TypeInfo;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                    v105 = NetworkManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1C32E7C(v105);
                                  static_fields = v105->static_fields;
                                  v93 = v156;
                                  v44 = (DataManager_c *)v152;
                                  v104 = static_fields->serverTime < (__int64)entity[6].klass;
                                }
                                v96 = (unsigned __int8)v44 & 1;
                                if ( v104 && Time >= (__int64)v103 )
                                {
                                  v107 = (unsigned __int8)v44 & 1;
                                  if ( !SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
                                    sub_1C32E7C(0);
                                  if ( !byte_4C34F43 )
                                  {
                                    sub_1C32C20(&DataManager_TypeInfo);
                                    byte_4C34F43 = 1;
                                  }
                                  v44 = DataManager_TypeInfo;
                                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                    v44 = DataManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1C32E7C(v44);
                                  v93 = v156;
                                  v98 = 1;
                                  v96 = v107;
                                  v168 |= v44->static_fields->dateVersion < (__int64)entity[6].klass;
                                }
                                else
                                {
                                  v98 = 1;
                                }
                                v97 = 1;
                              }
                              else
                              {
LABEL_178:
                                if ( !v18 )
                                  sub_1C32E7C(0);
                                v44 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         (VoiceCondMaster_o *)v18,
                                                         overwritePriority,
                                                         svtVoiceId,
                                                         v40,
                                                         v178,
                                                         0,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                v93 = v156;
                                v97 = (unsigned __int8)v44 & 1;
                                v98 = 1;
                                v96 = (unsigned __int8)v44 & 1;
                              }
                            }
                            LODWORD(max_length) = v93->max_length;
                            ++v95;
                          }
                          while ( (int)v95 < (int)max_length );
                          if ( (v98 & 1) != 0 )
                          {
                            v54 = v97 & 1;
                            v55 = v96 & 1;
                            goto LABEL_242;
                          }
                        }
                        v56 = (VoiceCondMaster_o *)v18;
                        if ( !v18 )
                          sub_1C32E7C(0);
                      }
                      else
                      {
                        v56 = (VoiceCondMaster_o *)v18;
                        if ( !v18 )
                          sub_1C32E7C(0);
                      }
                      return result;
                    case 21:
                      if ( !*v165 )
                        sub_1C32E7C(0);
                      v52 = v178;
                      IsQuestClear_40225464 = UserServantCollectionEntity__IsFinded(*v165, 0);
                      if ( !v18 )
                        sub_1C32E7C(IsQuestClear_40225464);
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
                    if ( !*v165 )
                      sub_1C32E7C(0);
                    v52 = v178;
                    IsQuestClear_40225464 = UserServantCollectionEntity__IsCostumeGet(*v165, limitCount, 0);
                    if ( !v18 )
                      sub_1C32E7C(IsQuestClear_40225464);
LABEL_162:
                    IsEnable = VoiceCondMaster__IsEnable(
                                 (VoiceCondMaster_o *)v18,
                                 overwritePriority,
                                 svtVoiceId,
                                 v40,
                                 v52,
                                 IsQuestClear_40225464,
                                 svtId,
                                 &overwriteNameDefault,
                                 isMateriala);
                    goto LABEL_241;
                  }
LABEL_218:
                  v54 = 1;
LABEL_219:
                  v55 = 1;
                  goto LABEL_242;
                }
                v61 = conds;
                if ( !conds || (v62 = conds->max_length) == 0 )
                {
                  v56 = (VoiceCondMaster_o *)v18;
                  if ( !v18 )
                    sub_1C32E7C(0);
                  goto LABEL_233;
                }
                if ( (int)v62 < 1 )
                  goto LABEL_222;
                v63 = 0;
                v64 = 0;
                v65 = 0;
                v66 = 0;
                v154 = conds;
                voicePrefixb = conds->m_Items;
                while ( 2 )
                {
                  if ( (unsigned int)v63 >= (unsigned int)v62 )
                    sub_1C32E84(v44);
                  v67 = voicePrefixb[v63];
                  if ( !v67 )
                    sub_1C32E7C(v44);
                  v68 = v67->fields.condType;
                  if ( v68 <= 0x13 )
                  {
                    if ( ((1 << v68) & 0xCE000) != 0 )
                    {
                      if ( v67->fields.value >= 1 )
                      {
                        v69 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !v69 )
                          sub_1C32E7C(0);
                        v70 = DataManager__GetMasterData_object_(
                                (DataManager_o *)v69,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
                        if ( !v70 )
                          sub_1C32E7C(0);
                        v71 = DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v70,
                                v67->fields.value,
                                (const MethodInfo_3396838 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                        if ( !v71 || Time < (__int64)v71[5].monitor )
                        {
                          v72 = (VoiceCondMaster_o *)v18;
                          if ( !v18 )
                            sub_1C32E7C(0);
                          goto LABEL_89;
                        }
                        if ( !v18 )
                          sub_1C32E7C(v71);
                        v44 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                 (VoiceCondMaster_o *)v18,
                                                 overwritePriority,
                                                 svtVoiceId,
                                                 v40,
                                                 v178,
                                                 Time >= (__int64)v71[6].klass,
                                                 svtId,
                                                 &overwriteNameDefault,
                                                 isMateriala);
LABEL_101:
                        v64 = (unsigned __int8)v44 & 1;
                        v66 = 1;
                        v65 = 1;
                        goto LABEL_102;
                      }
                    }
                    else if ( v68 == 16 && v67->fields.value >= 1 )
                    {
                      v73 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !v73 )
                        sub_1C32E7C(0);
                      v74 = DataManager__GetMasterData_object_(
                              (DataManager_o *)v73,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
                      if ( !v74 )
                        sub_1C32E7C(0);
                      v75 = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v74,
                              (Il2CppObject **)&v171[1],
                              v67->fields.value,
                              (const MethodInfo_3396884 *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
                      if ( v75 )
                      {
                        if ( !*(_QWORD *)&v171[1] )
                          sub_1C32E7C(v75);
                        if ( Time >= *(_QWORD *)(*(_QWORD *)&v171[1] + 40LL) )
                        {
                          if ( !v18 )
                            sub_1C32E7C(0);
                          v44 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                   (VoiceCondMaster_o *)v18,
                                                   overwritePriority,
                                                   svtVoiceId,
                                                   v40,
                                                   v178,
                                                   1,
                                                   svtId,
                                                   &overwriteNameDefault,
                                                   isMateriala);
                          goto LABEL_101;
                        }
                      }
                      v72 = (VoiceCondMaster_o *)v18;
                      if ( !v18 )
                        sub_1C32E7C(0);
LABEL_89:
                      v44 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                               v72,
                                               overwritePriority,
                                               svtVoiceId,
                                               v40,
                                               v178,
                                               0,
                                               svtId,
                                               &overwriteNameDefault,
                                               isMateriala);
                      v65 = (unsigned __int8)v44 & 1;
                      v66 = 1;
                      v64 = (unsigned __int8)v44 & 1;
LABEL_102:
                      v61 = v154;
                    }
                  }
                  LODWORD(v62) = v61->max_length;
                  if ( (int)++v63 >= (int)v62 )
                  {
                    if ( (v66 & 1) != 0 )
                    {
                      v54 = v65 & 1;
                      v55 = v64 & 1;
                      goto LABEL_242;
                    }
LABEL_222:
                    v56 = (VoiceCondMaster_o *)v18;
                    if ( !v18 )
                      sub_1C32E7C(0);
LABEL_233:
                    v54 = 1;
                    v55 = VoiceCondMaster__IsEnable(
                            v56,
                            overwritePriority,
                            svtVoiceId,
                            v40,
                            v178,
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
                  v57 = *v165;
                  if ( !*v165 )
                    sub_1C32E7C(v44);
                  v58 = *(_QWORD *)&v57->fields.friendshipRank.fields.currentCryptoKey;
                  v59 = *(_QWORD *)&v57->fields.friendshipRank.fields.fakeValue;
                  voicePrefixa = v178;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v180.fields.currentCryptoKey = v58;
                  *(_QWORD *)&v180.fields.fakeValue = v59;
                  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v180, 0);
                  if ( !v18 )
                    sub_1C32E7C(v60);
LABEL_74:
                  IsEnable = VoiceCondMaster__IsEnable(
                               (VoiceCondMaster_o *)v18,
                               overwritePriority,
                               svtVoiceId,
                               v40,
                               voicePrefixa,
                               (int)v60 >= v35->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_241;
                }
                if ( condType == 99 )
                {
                  v47 = *v165;
                  if ( !*v165 )
                    sub_1C32E7C(v44);
                  v48 = *(_QWORD *)&v47->fields.friendshipRank.fields.currentCryptoKey;
                  v49 = *(_QWORD *)&v47->fields.friendshipRank.fields.fakeValue;
                  voicePrefix = v178;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v179.fields.currentCryptoKey = v48;
                  *(_QWORD *)&v179.fields.fakeValue = v49;
                  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v179, 0);
                  if ( !v18 )
                    sub_1C32E7C(v50);
                  IsEnable = VoiceCondMaster__IsEnable(
                               (VoiceCondMaster_o *)v18,
                               overwritePriority,
                               svtVoiceId,
                               v40,
                               voicePrefix,
                               (int)v50 <= v35->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
LABEL_241:
                  v55 = IsEnable;
                  v54 = 1;
                  goto LABEL_242;
                }
                goto LABEL_218;
              }
              if ( condType != 56 )
              {
                if ( condType == 92 )
                {
                  if ( !v18 )
                    sub_1C32E7C(0);
                  IsEnable = VoiceCondMaster__IsEnable(
                               (VoiceCondMaster_o *)v18,
                               overwritePriority,
                               svtVoiceId,
                               v40,
                               v178,
                               0,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_241;
                }
                goto LABEL_218;
              }
              v76 = conds;
              if ( !conds || (v77 = conds->max_length) == 0 )
              {
                v56 = (VoiceCondMaster_o *)v18;
                if ( !v18 )
                  sub_1C32E7C(0);
                goto LABEL_233;
              }
              if ( (int)v77 < 1 )
                goto LABEL_134;
              v78 = 0;
              v79 = 0;
              v80 = 0;
              v81 = 0;
              v155 = conds;
              voicePrefixc = conds->m_Items;
              do
              {
                if ( (unsigned int)v78 >= (unsigned int)v77 )
                  sub_1C32E84(v44);
                v82 = voicePrefixc[v78];
                if ( !v82 )
                  sub_1C32E7C(v44);
                v83 = v82->fields.condType;
                if ( v83 <= 0x13 && ((1 << v83) & 0xCE000) != 0 && v82->fields.value >= 1 )
                {
                  v84 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v84 )
                    sub_1C32E7C(0);
                  v85 = DataManager__GetMasterData_object_(
                          (DataManager_o *)v84,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v85 )
                    sub_1C32E7C(0);
                  v86 = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)v85,
                          v82->fields.value,
                          (const MethodInfo_3396838 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v86 && Time >= (__int64)v86[5].monitor )
                  {
                    value = v82->fields.value;
                    v153 = v178;
                    if ( !CondType_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    v88 = CondType__IsServantGetBeforeEventEnd(svtId, value, 0);
                    if ( !v18 )
                      sub_1C32E7C(v88);
                    v44 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             (VoiceCondMaster_o *)v18,
                                             overwritePriority,
                                             svtVoiceId,
                                             v40,
                                             v153,
                                             v88,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v79 = (unsigned __int8)v44 & 1;
                    v81 = 1;
                    v80 = 1;
                  }
                  else
                  {
                    if ( !v18 )
                      sub_1C32E7C(0);
                    v44 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             (VoiceCondMaster_o *)v18,
                                             overwritePriority,
                                             svtVoiceId,
                                             v40,
                                             v178,
                                             0,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v80 = (unsigned __int8)v44 & 1;
                    v81 = 1;
                    v79 = (unsigned __int8)v44 & 1;
                  }
                  v76 = v155;
                }
                LODWORD(v77) = v76->max_length;
                ++v78;
              }
              while ( (int)v78 < (int)v77 );
              if ( (v81 & 1) == 0 )
              {
LABEL_134:
                v56 = (VoiceCondMaster_o *)v18;
                if ( !v18 )
                  sub_1C32E7C(0);
                goto LABEL_233;
              }
              v54 = v80 & 1;
              v55 = v79 & 1;
LABEL_242:
              v124 = v55 & VoiceEntity__IsCondEnable(v35, svtId, v45);
              if ( (v54 & (v124 | (overwritePriority[0] != 2)) & 1) != 0 )
              {
                v125 = sub_1C32E6C(VoiceInfo_TypeInfo);
                VoiceInfo___ctor((VoiceInfo_o *)v125, 0);
                if ( !v125 )
                  sub_1C32E7C(v126);
                *(_QWORD *)(v125 + 16) = v35;
                sub_1C32BC4((CGThumbnailListItem_o *)(v125 + 16), (int32_t)v35, v127, v128);
                *(_BYTE *)(v125 + 24) = v124 & 1;
                v129 = (int)overwriteName;
                *(_QWORD *)(v125 + 32) = overwriteName;
                sub_1C32BC4((CGThumbnailListItem_o *)(v125 + 32), v129, v130, v131);
                v132 = (int)overwriteNameDefault;
                *(_QWORD *)(v125 + 40) = overwriteNameDefault;
                sub_1C32BC4((CGThumbnailListItem_o *)(v125 + 40), v132, v133, v134);
                v135 = v178;
                *(_DWORD *)(v125 + 48) = overwritePriority[1];
                *(_DWORD *)(v125 + 52) = v135;
                v136 = (int)conds;
                *(_QWORD *)(v125 + 56) = conds;
                sub_1C32BC4((CGThumbnailListItem_o *)(v125 + 56), v136, v137, v138);
                if ( !v169 )
                  sub_1C32E7C(v139);
                items = v169->fields._items;
                v143 = Method_System_Collections_Generic_List_VoiceInfo__Add__;
                ++v169->fields._version;
                if ( !items )
                  sub_1C32E7C(v139);
                size = v169->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v169,
                    (Il2CppObject *)v125,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
                }
                else
                {
                  v145 = &items->obj.klass + size;
                  v169->fields._size = size + 1;
                  v145[4] = (Il2CppClass *)v125;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v145 + 4), v125, v140, v141);
                }
              }
            }
          }
        }
      }
    }
  }
  v146 = Enumerator->klass;
  v147 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v148 = &v146->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v148 - 1) != System_IDisposable_TypeInfo )
    {
      --v147;
      v148 += 4;
      if ( !v147 )
        goto LABEL_253;
    }
    v149 = (__int64)&v146->vtable[*v148];
  }
  else
  {
LABEL_253:
    v149 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v149)(
                                Enumerator,
                                *(_QWORD *)(v149 + 8));
  if ( (v168 & 1) != 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_264;
    NetworkManager__GoToTitleDialog((NetworkManager_o *)Instance, 0);
  }
  if ( !v169 )
LABEL_264:
    sub_1C32E7C(Instance);
  return (VoiceInfo_array *)System_Collections_Generic_List_object___ToArray(
                              v169,
                              (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
}


int32_t VoiceMaster__getFirstPlayPriority(
        VoiceMaster_o *this,
        int32_t svtId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  int32_t v6; // w21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  _QWORD *v17; // x0
  _QWORD *v18; // x21
  __int64 naturalAligment; // x10
  __int64 v20; // x0
  System_String_o *v21; // x1
  System_String_o *v22; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4C38ABA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&VoiceEntity_TypeInfo);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    byte_4C38ABA = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v12 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_VoiceEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_18:
      v16 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0);
    }
    v17 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                      Enumerator,
                      *(_QWORD *)(v16 + 8));
    v18 = v17;
    if ( !v17
      || (naturalAligment = VoiceEntity_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*v17 + 304LL) < (unsigned int)naturalAligment)
      || *(VoiceEntity_c **)(*(_QWORD *)(*v17 + 200LL) + 8 * naturalAligment - 8) != VoiceEntity_TypeInfo )
    {
      sub_1C32E7C(v17);
    }
    v20 = v17[2];
    if ( !v20 )
      sub_1C32E7C(0);
    v21 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 360LL))(
                               v20,
                               *(_QWORD *)(*(_QWORD *)v20 + 368LL));
    v22 = System_String__Concat_63518544((System_String_o *)StringLiteral_16107/*"_"*/, v21, 0);
    if ( !labelName )
      sub_1C32E7C(v22);
    if ( System_String__EndsWith(labelName, v22, 0) )
    {
      v6 = *((_DWORD *)v18 + 15);
      goto LABEL_28;
    }
  }
  v6 = 0;
LABEL_28:
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_32;
    }
    v26 = (__int64)&v23->vtable[*v25];
  }
  else
  {
LABEL_32:
    v26 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v6;
}


int32_t VoiceMaster__getFlagRequestNumber(
        VoiceMaster_o *this,
        int32_t svtId,
        System_String_o *labelName,
        bool isUpdate,
        const MethodInfo *method)
{
  int32_t v9; // w20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  _QWORD *v20; // x0
  _DWORD *v21; // x23
  __int64 naturalAligment; // x10
  __int64 v23; // x0
  System_String_o *v24; // x1
  System_String_o *v25; // x0
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  NetworkManager_c *v28; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v30; // w1
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4C38AB9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&VoiceEntity_TypeInfo);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    byte_4C38AB9 = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_VoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  do
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_11;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v15 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      goto LABEL_39;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_VoiceEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_18;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_18:
      v19 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_VoiceEntity__TypeInfo, 0);
    }
    v20 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                      Enumerator,
                      *(_QWORD *)(v19 + 8));
    v21 = v20;
    if ( !v20
      || (naturalAligment = VoiceEntity_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*v20 + 304LL) < (unsigned int)naturalAligment)
      || *(VoiceEntity_c **)(*(_QWORD *)(*v20 + 200LL) + 8 * naturalAligment - 8) != VoiceEntity_TypeInfo )
    {
      sub_1C32E7C(v20);
    }
    v23 = v20[2];
    if ( !v23 )
      sub_1C32E7C(0);
    v24 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 360LL))(
                               v23,
                               *(_QWORD *)(*(_QWORD *)v23 + 368LL));
    v25 = System_String__Concat_63518544((System_String_o *)StringLiteral_16107/*"_"*/, v24, 0);
    if ( !labelName )
      sub_1C32E7C(v25);
  }
  while ( !System_String__EndsWith(labelName, v25, 0) );
  if ( v21[12] != 17 && (unsigned int)(v21[7] - 1) > 1 )
  {
LABEL_39:
    v9 = 0;
    goto LABEL_40;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v28 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v28 = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    sub_1C32E7C(v28);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       v28->static_fields->userIdNumber,
                       svtId,
                       0);
  v30 = v21[14];
  if ( isUpdate )
  {
    if ( !EntityDefinitely )
      sub_1C32E7C(0);
    if ( !UserServantCollectionEntity__SetPlayed(EntityDefinitely, v30, 0) )
      goto LABEL_39;
  }
  else
  {
    if ( !EntityDefinitely )
      sub_1C32E7C(0);
    if ( UserServantCollectionEntity__IsPlayed(EntityDefinitely, v30, 0) )
      goto LABEL_39;
  }
  v9 = v21[14];
LABEL_40:
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_44;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_44:
    v34 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return v9;
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
  int64_t Time_41266888; // x21
  System_DateTime_o v23; // x0
  uint64_t v25; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v26; // [xsp+10h] [xbp-50h]
  System_DateTime_o dateTime; // [xsp+18h] [xbp-48h]
  uint64_t v28; // [xsp+20h] [xbp-40h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4C38AB7 & 1) == 0 )
  {
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C38AB7 = 1;
  }
  v26.fields._dateData = 0;
  dateTime.fields._dateData = 0;
  if ( userBirthDay < 1 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_41267996(createDay, 0).fields._dateData;
  v28 = NetworkManager__getDateTime_41267668(userBirthDay, 0).fields._dateData;
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
  System_DateTime___ctor_64904320(v12, Year, Month, Day, 0);
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
  System_DateTime___ctor_64904320(v19, v14 + 1, v16, v18, 0);
  v26.fields._dateData = v25;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  ServerTime = NetworkManager__getServerTime(0);
  v21.fields._dateData = dateTime.fields._dateData;
  Time_41266888 = NetworkManager__getTime_41266888(v21, 0);
  v23.fields._dateData = v26.fields._dateData;
  return (Time_41266888 <= ServerTime && Time_41266888 + 86400 >= createDay)
       | (NetworkManager__getTime_41266888(v23, 0) <= ServerTime);
}


void VoiceMaster___c__DisplayClass2_0___ctor(VoiceMaster___c__DisplayClass2_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


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
  if ( (byte_4C38ABB & 1) == 0 )
  {
    this = (VoiceMaster___c__DisplayClass2_0_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C38ABB = 1;
  }
  userStvCollectionEntity = v4->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_1C32E7C(this);
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v9, 0) == id;
}