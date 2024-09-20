void __fastcall VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C078 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
    byte_4A5C078 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    132,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
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
  __int64 v15; // x23
  __int64 Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  ServantVoiceEntity_array *Entity_39787432; // x29
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v26; // w26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  VoiceEntity_o *v37; // x27
  __int64 methodPtr_low; // x10
  __int64 v39; // x8
  ServantVoiceEntity_o *v40; // x24
  __int64 v41; // x0
  System_String_o *v42; // x19
  System_String_o *v43; // x0
  System_String_o *v44; // x22
  System_Collections_Generic_List_object__o *VoiceList_39770596; // x0
  DataManager_c *v46; // x0
  __int64 v47; // x1
  const MethodInfo *v48; // x2
  int condType; // w8
  UserServantCollectionEntity_o *v50; // x8
  __int64 v51; // x24
  __int64 v52; // x22
  __int64 v53; // x0
  __int64 v54; // x1
  _BOOL4 IsEnable; // w0
  int32_t v56; // w22
  _BOOL8 IsQuestClear_37596684; // x0
  __int64 v58; // x1
  int v59; // w22
  int v60; // w24
  VoiceCondMaster_o *v61; // x0
  UserServantCollectionEntity_o *v62; // x8
  __int64 v63; // x24
  __int64 v64; // x22
  __int64 v65; // x0
  __int64 v66; // x1
  ServantVoiceCond_array *v67; // x14
  __int64 v68; // x11
  __int64 v69; // x24
  char v70; // w9
  char v71; // w10
  char v72; // w8
  ServantVoiceCond_o *v73; // x22
  unsigned int v74; // w11
  Il2CppObject *v75; // x0
  __int64 v76; // x1
  Il2CppObject *v77; // x0
  __int64 v78; // x1
  Il2CppObject *v79; // x0
  __int64 v80; // x1
  VoiceCondMaster_o *v81; // x0
  Il2CppObject *v82; // x0
  __int64 v83; // x1
  Il2CppObject *v84; // x0
  __int64 v85; // x1
  _BOOL8 v86; // x0
  __int64 v87; // x1
  ServantVoiceCond_array *v88; // x13
  __int64 v89; // x11
  __int64 v90; // x22
  char v91; // w8
  char v92; // w10
  char v93; // w9
  ServantVoiceCond_o *v94; // x24
  unsigned int v95; // w11
  Il2CppObject *v96; // x0
  __int64 v97; // x1
  Il2CppObject *v98; // x0
  __int64 v99; // x1
  Il2CppObject *v100; // x0
  __int64 v101; // x1
  int32_t value; // w24
  _BOOL8 v103; // x0
  __int64 v104; // x1
  __int64 v105; // x1
  __int64 v106; // x1
  UserServantCollectionEntity_o *v107; // x8
  __int64 v108; // x24
  __int64 v109; // x22
  __int64 v110; // x1
  int32_t condValue; // w24
  __int64 v112; // x1
  __int64 v113; // x1
  __int64 v114; // x1
  ServantVoiceCond_array *v115; // x12
  __int64 v116; // x10
  __int64 v117; // x22
  char v118; // w13
  char v119; // w9
  char v120; // w8
  ServantVoiceCond_o *v121; // x24
  unsigned int v122; // w10
  Il2CppObject *v123; // x0
  __int64 v124; // x1
  _BOOL8 v125; // x0
  __int64 v126; // x1
  Il2CppClass *v127; // x24
  bool v128; // w8
  NetworkManager_c *v129; // x0
  struct NetworkManager_StaticFields *static_fields; // x9
  char v131; // w24
  UserGameEntity_o *SelfUserGame; // x0
  int64_t v133; // x1
  BalanceConfig_c *v134; // x0
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x22
  System_Func_int__bool__o *v136; // x24
  int32_t v137; // w2
  int32_t v138; // w3
  BalanceConfig_c *v139; // x0
  __int64 v140; // x1
  const MethodInfo *v141; // x3
  int64_t VtReleaseAt; // x8
  int64_t createdAt; // x22
  bool isEnableBirthdayVoice; // w22
  Il2CppObject *Master_object; // x0
  __int64 v146; // x1
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v148; // x3
  _BOOL8 v149; // x0
  int v150; // w24
  __int64 v151; // x19
  __int64 v152; // x0
  __int64 v153; // x1
  int32_t v154; // w2
  int32_t v155; // w3
  int32_t v156; // w1
  int32_t v157; // w2
  int32_t v158; // w3
  int32_t v159; // w1
  int32_t v160; // w2
  int32_t v161; // w3
  int32_t v162; // w8
  int32_t v163; // w1
  int32_t v164; // w2
  int32_t v165; // w3
  __int64 v166; // x0
  __int64 v167; // x1
  int32_t v168; // w2
  int32_t v169; // w3
  struct System_Object_array *items; // x8
  _QWORD *v171; // x9
  __int64 size; // x10
  Il2CppClass **v173; // x0
  System_Collections_Generic_IEnumerator_T__c *v174; // x8
  __int64 v175; // x9
  int32_t *v176; // x10
  __int64 v177; // x0
  VoiceInfo_array *result; // x0
  const MethodInfo *isMateriala; // [xsp+0h] [xbp-120h]
  unsigned int v180; // [xsp+18h] [xbp-108h]
  int32_t v181; // [xsp+1Ch] [xbp-104h]
  ServantVoiceCond_array *v182; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v183; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v184; // [xsp+20h] [xbp-100h]
  int32_t voicePrefix; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixa; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixb; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixc; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixd; // [xsp+28h] [xbp-F8h]
  int64_t voicePrefixe; // [xsp+28h] [xbp-F8h]
  ServantStatusBattleListViewItem_o *v191; // [xsp+30h] [xbp-F0h]
  int v192; // [xsp+38h] [xbp-E8h]
  UserServantCollectionEntity_o **v193; // [xsp+40h] [xbp-E0h]
  int64_t Time; // [xsp+48h] [xbp-D8h]
  int32_t svtVoiceId; // [xsp+54h] [xbp-CCh]
  VoiceCondMaster_o *v196; // [xsp+58h] [xbp-C8h]
  char v197; // [xsp+64h] [xbp-BCh]
  System_Collections_Generic_List_object__o *v198; // [xsp+68h] [xbp-B8h]
  _DWORD v199[3]; // [xsp+7Ch] [xbp-A4h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-98h] BYREF
  __int64 closedType; // [xsp+90h] [xbp-90h] BYREF
  System_String_o *overwriteNameDefault; // [xsp+98h] [xbp-88h] BYREF
  System_String_o *overwriteName; // [xsp+A0h] [xbp-80h] BYREF
  bool isInvalidVoiceList; // [xsp+ACh] [xbp-74h] BYREF
  ServantVoiceCond_array *conds; // [xsp+B0h] [xbp-70h] BYREF
  int32_t v206; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v207; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v208; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v209; // 0:x0.16

  if ( (byte_4A5C07A & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_VoiceCondMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_BeforeBirthDayMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoiceInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoiceInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_VoiceInfo__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1B885B0(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__);
    sub_1B885B0(&VoiceMaster___c__DisplayClass2_0_TypeInfo);
    sub_1B885B0(&VoiceEntity_TypeInfo);
    sub_1B885B0(&VoiceInfo_TypeInfo);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A5C07A = 1;
  }
  v206 = 0;
  conds = 0LL;
  isInvalidVoiceList = 0;
  overwriteNameDefault = 0LL;
  overwriteName = 0LL;
  entity = 0LL;
  closedType = 0LL;
  *(_QWORD *)&v199[1] = 0LL;
  v15 = sub_1B887FC(VoiceMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  v196 = (VoiceCondMaster_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_260;
  v206 = ServantLimitAddMaster__getVoicePrefix((ServantLimitAddMaster_o *)Instance, changeSvtVoiceId, limitCount, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  v19 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v19 )
    goto LABEL_260;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                        (UserServantCollectionMaster_o *)v19,
                        Instance,
                        svtId,
                        0LL);
  if ( !v15 )
    goto LABEL_260;
  *(_QWORD *)(v15 + 16) = Instance;
  v193 = (UserServantCollectionEntity_o **)(v15 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 16), Instance, v20, v21);
  if ( !MasterData_object )
    goto LABEL_260;
  Entity_39787432 = ServantVoiceMaster__getEntity_39787432(
                      (ServantVoiceMaster_o *)MasterData_object,
                      changeSvtVoiceId,
                      limitCount,
                      0LL);
  Time = NetworkManager__getTime(0LL);
  v198 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v198,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_4A56A2F )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A56A2F = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_260;
  svtVoiceId = changeSvtVoiceId;
  v192 = *(unsigned __int8 *)(*(_QWORD *)(Instance + 184) + 136LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v24);
  v197 = 0;
  v26 = isCheckPlayCond;
  v191 = (ServantStatusBattleListViewItem_o *)(v15 + 24);
  LOBYTE(v199[0]) = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_24;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_24:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_31;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_31:
      v34 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
            Enumerator,
            *(_QWORD *)(v34 + 8));
    v37 = (VoiceEntity_o *)v35;
    if ( !v35
      || (methodPtr_low = LOBYTE(VoiceEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v35 + 304LL) < (unsigned int)methodPtr_low)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * methodPtr_low - 8) != VoiceEntity_TypeInfo )
    {
      sub_1B8880C(v35, v36);
    }
    if ( !Entity_39787432 )
      sub_1B8880C(v35, v36);
    v39 = *(int *)(v35 + 28);
    if ( (unsigned int)v39 >= Entity_39787432->max_length )
      sub_1B88814(v35, v36);
    v40 = Entity_39787432->m_Items[v39];
    if ( v40 )
    {
      v41 = *(_QWORD *)(v35 + 16);
      if ( !v41 )
        sub_1B8880C(0LL, v36);
      v42 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v41 + 360LL))(
                                 v41,
                                 *(_QWORD *)(*(_QWORD *)v41 + 368LL));
      v43 = System_Int32__ToString((int32_t)&v206, 0LL);
      v44 = System_String__Concat_61718292(v43, (System_String_o *)StringLiteral_16123/*"_"*/, v42, 0LL);
      VoiceList_39770596 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getVoiceList_39770596(
                                                                          v40,
                                                                          v37->fields.svtVoiceType,
                                                                          v44,
                                                                          disableCondTypeList,
                                                                          v26,
                                                                          0LL);
      if ( VoiceList_39770596 )
      {
        if ( VoiceList_39770596->fields._size >= 1 )
        {
          if ( System_Collections_Generic_List_object___get_Item(
                 VoiceList_39770596,
                 0,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__) )
          {
            ServantVoiceEntity__getOverwriteData(
              v40,
              v37->fields.svtVoiceType,
              v44,
              &conds,
              &isInvalidVoiceList,
              &overwriteName,
              &overwriteNameDefault,
              (int32_t *)&closedType + 1,
              v199[0],
              0LL);
            if ( !isInvalidVoiceList )
            {
              LODWORD(closedType) = v37->fields.closedType;
              condType = v37->fields.condType;
              if ( condType <= 54 )
              {
                if ( condType <= 21 )
                {
                  v59 = 1;
                  v60 = 1;
                  switch ( condType )
                  {
                    case 0:
                      v61 = v196;
                      if ( !v196 )
                        sub_1B8880C(0LL, v47);
                      goto LABEL_229;
                    case 1:
                      v56 = v206;
                      condValue = v37->fields.condValue;
                      if ( !CondType_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                      IsQuestClear_37596684 = CondType__IsQuestClear_37596684(condValue, -1, 0, 0LL);
                      if ( !v196 )
                        sub_1B8880C(IsQuestClear_37596684, v112);
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
                      if ( !*v193 )
                        sub_1B8880C(v46, v47);
                      if ( !v196 )
                        sub_1B8880C(0LL, v47);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   v196,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v42,
                                   v206,
                                   (*v193)->fields.maxLv >= v37->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_237;
                    case 7:
                      if ( !*v193 )
                        sub_1B8880C(v46, v47);
                      if ( !v196 )
                        sub_1B8880C(0LL, v47);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   v196,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v42,
                                   v206,
                                   (*v193)->fields.maxLimitCount >= v37->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_237;
                    case 8:
                      if ( !*v193 )
                        sub_1B8880C(0LL, v47);
                      v56 = v206;
                      IsQuestClear_37596684 = UserServantCollectionEntity__IsGet(*v193, 0LL);
                      if ( !v196 )
                        sub_1B8880C(IsQuestClear_37596684, v106);
                      goto LABEL_158;
                    case 9:
                      v107 = *v193;
                      if ( !*v193 )
                        sub_1B8880C(v46, v47);
                      v108 = *(_QWORD *)&v107->fields.friendshipRank.fields.currentCryptoKey;
                      v109 = *(_QWORD *)&v107->fields.friendshipRank.fields.fakeValue;
                      voicePrefixa = v206;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v209.fields.currentCryptoKey = v108;
                      *(_QWORD *)&v209.fields.fakeValue = v109;
                      v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v209, 0LL);
                      if ( !v196 )
                        sub_1B8880C(v65, v110);
                      goto LABEL_70;
                    case 17:
                      if ( !*v193 )
                        sub_1B8880C(0LL, v47);
                      v56 = v206;
                      IsQuestClear_37596684 = UserServantCollectionEntity__IsPlayed(*v193, v37->fields.condValue, 0LL);
                      if ( !v196 )
                        sub_1B8880C(IsQuestClear_37596684, v113);
                      goto LABEL_158;
                    case 18:
                      if ( !*v193 )
                        sub_1B8880C(0LL, v47);
                      v56 = v206;
                      IsQuestClear_37596684 = UserServantCollectionEntity__IsLimitCountMax(*v193, 0LL);
                      if ( !v196 )
                        sub_1B8880C(IsQuestClear_37596684, v114);
                      goto LABEL_158;
                    case 19:
                      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
                      if ( !SelfUserGame )
                        sub_1B8880C(0LL, v133);
                      if ( SelfUserGame->fields.birthDay < 1 )
                        goto LABEL_234;
                      voicePrefixe = SelfUserGame->fields.birthDay;
                      v134 = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v134 = BalanceConfig_TypeInfo;
                      }
                      ServantIdsBirthdayBeforeValentine = v134->static_fields->ServantIdsBirthdayBeforeValentine;
                      v136 = (System_Func_int__bool__o *)v191->klass;
                      if ( !v191->klass )
                      {
                        v136 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
                        System_Func_int__bool____ctor(
                          v136,
                          (Il2CppObject *)v15,
                          Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__,
                          0LL);
                        v191->klass = (ServantStatusBattleListViewItem_c *)v136;
                        sub_1B88554(v191, (int32_t)v136, v137, v138);
                      }
                      v139 = (BalanceConfig_c *)BasicHelper__Any_int__48671312(
                                                  ServantIdsBirthdayBeforeValentine,
                                                  (System_Func_T__bool__o *)v136,
                                                  (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
                      if ( ((unsigned __int8)v139 & 1) != 0 )
                      {
                        v139 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v139 = BalanceConfig_TypeInfo;
                        }
                        VtReleaseAt = v139->static_fields->VtReleaseAt;
                        if ( VtReleaseAt >= 1 )
                        {
                          if ( !*v193 )
                            sub_1B8880C(v139, v140);
                          createdAt = (*v193)->fields.createdAt;
                          if ( !v139->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v139);
                            VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
                          }
                          if ( createdAt < VtReleaseAt )
                            goto LABEL_214;
                        }
                      }
                      if ( !*v193 )
                        sub_1B8880C(v139, v140);
                      isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                                (VoiceMaster_o *)v139,
                                                voicePrefixe,
                                                (*v193)->fields.createdAt,
                                                v141);
                      if ( !DataManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
                      if ( !Master_object )
                        sub_1B8880C(0LL, v146);
                      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       (const MethodInfo_311DB9C *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
                      if ( isEnableBirthdayVoice )
                      {
                        v149 = 1LL;
                      }
                      else
                      {
                        if ( !SingleEntity )
                          sub_1B8880C(0LL, v133);
                        v133 = (int64_t)SingleEntity[1].klass;
                        if ( v133 < 1 )
                        {
LABEL_234:
                          v149 = 0LL;
                        }
                        else
                        {
                          if ( !*v193 )
                            sub_1B8880C(SingleEntity, v133);
                          v149 = VoiceMaster__isEnableBirthdayVoice(
                                   (VoiceMaster_o *)SingleEntity,
                                   v133,
                                   (*v193)->fields.createdAt,
                                   v148);
                        }
                      }
                      if ( !v196 )
                        sub_1B8880C(v149, v133);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   v196,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v42,
                                   v206,
                                   v149,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_237;
                    case 20:
                      v115 = conds;
                      if ( conds && (v116 = *(_QWORD *)&conds->max_length) != 0 )
                      {
                        if ( (int)v116 >= 1 )
                        {
                          v117 = 0LL;
                          v118 = 0;
                          v119 = 0;
                          v120 = 0;
                          v184 = conds;
                          voicePrefixd = conds->m_Items;
                          do
                          {
                            if ( (unsigned int)v117 >= (unsigned int)v116 )
                              sub_1B88814(v46, v47);
                            v121 = voicePrefixd[v117];
                            if ( !v121 )
                              sub_1B8880C(v46, v47);
                            v122 = v121->fields.condType;
                            if ( v122 <= 0x13 && ((1 << v122) & 0xCE000) != 0 && v121->fields.value >= 1 )
                            {
                              if ( !DataManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                              v123 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
                              if ( !v123 )
                                sub_1B8880C(0LL, v124);
                              v125 = DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v123,
                                       &entity,
                                       v121->fields.value,
                                       (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
                              if ( !v125 )
                                goto LABEL_174;
                              if ( !entity )
                                sub_1B8880C(v125, v126);
                              if ( Time >= (__int64)entity[5].monitor )
                              {
                                if ( !v196 )
                                  sub_1B8880C(0LL, v126);
                                v127 = entity[6].klass;
                                v46 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         v196,
                                                         (int32_t *)&closedType,
                                                         svtVoiceId,
                                                         v42,
                                                         v206,
                                                         Time >= (__int64)v127,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                if ( (v192 != 0) | v197 & 1 )
                                {
                                  v115 = v184;
                                  v128 = 0;
                                }
                                else
                                {
                                  v180 = (unsigned int)v46;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  if ( !byte_4A5C27D )
                                  {
                                    sub_1B885B0(&NetworkManager_TypeInfo);
                                    byte_4A5C27D = 1;
                                  }
                                  v129 = NetworkManager_TypeInfo;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                    v129 = NetworkManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1B8880C(v129, v47);
                                  static_fields = v129->static_fields;
                                  v115 = v184;
                                  v46 = (DataManager_c *)v180;
                                  v128 = static_fields->serverTime < (__int64)entity[6].klass;
                                }
                                v118 = (unsigned __int8)v46 & 1;
                                if ( v128 && Time >= (__int64)v127 )
                                {
                                  v131 = (unsigned __int8)v46 & 1;
                                  if ( !SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
                                    sub_1B8880C(0LL, v47);
                                  if ( !byte_4A589FD )
                                  {
                                    sub_1B885B0(&DataManager_TypeInfo);
                                    byte_4A589FD = 1;
                                  }
                                  v46 = DataManager_TypeInfo;
                                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                    v46 = DataManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1B8880C(v46, v47);
                                  v115 = v184;
                                  v120 = 1;
                                  v118 = v131;
                                  v197 |= v46->static_fields->dateVersion < (__int64)entity[6].klass;
                                }
                                else
                                {
                                  v120 = 1;
                                }
                                v119 = 1;
                              }
                              else
                              {
LABEL_174:
                                if ( !v196 )
                                  sub_1B8880C(0LL, v126);
                                v46 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         v196,
                                                         (int32_t *)&closedType,
                                                         svtVoiceId,
                                                         v42,
                                                         v206,
                                                         0,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                v115 = v184;
                                v119 = (unsigned __int8)v46 & 1;
                                v120 = 1;
                                v118 = (unsigned __int8)v46 & 1;
                              }
                            }
                            LODWORD(v116) = v115->max_length;
                            ++v117;
                          }
                          while ( (int)v117 < (int)v116 );
                          if ( (v120 & 1) != 0 )
                          {
                            v59 = v119 & 1;
                            v60 = v118 & 1;
                            goto LABEL_238;
                          }
                        }
                        v61 = v196;
                        if ( !v196 )
                          sub_1B8880C(0LL, v47);
                      }
                      else
                      {
                        v61 = v196;
                        if ( !v196 )
                          sub_1B8880C(0LL, v47);
                      }
                      return result;
                    case 21:
                      if ( !*v193 )
                        sub_1B8880C(0LL, v47);
                      v56 = v206;
                      IsQuestClear_37596684 = UserServantCollectionEntity__IsFinded(*v193, 0LL);
                      if ( !v196 )
                        sub_1B8880C(IsQuestClear_37596684, v105);
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
                    if ( !*v193 )
                      sub_1B8880C(0LL, v47);
                    v56 = v206;
                    IsQuestClear_37596684 = UserServantCollectionEntity__IsCostumeGet(*v193, limitCount, 0LL);
                    if ( !v196 )
                      sub_1B8880C(IsQuestClear_37596684, v58);
LABEL_158:
                    IsEnable = VoiceCondMaster__IsEnable(
                                 v196,
                                 (int32_t *)&closedType,
                                 svtVoiceId,
                                 v42,
                                 v56,
                                 IsQuestClear_37596684,
                                 svtId,
                                 &overwriteNameDefault,
                                 isMateriala);
                    goto LABEL_237;
                  }
LABEL_214:
                  v59 = 1;
LABEL_215:
                  v60 = 1;
                  goto LABEL_238;
                }
                v67 = conds;
                if ( !conds || (v68 = *(_QWORD *)&conds->max_length) == 0 )
                {
                  v61 = v196;
                  if ( !v196 )
                    sub_1B8880C(0LL, v47);
                  goto LABEL_229;
                }
                if ( (int)v68 < 1 )
                  goto LABEL_218;
                v69 = 0LL;
                v70 = 0;
                v71 = 0;
                v72 = 0;
                v182 = conds;
                voicePrefixb = conds->m_Items;
                while ( 2 )
                {
                  if ( (unsigned int)v69 >= (unsigned int)v68 )
                    sub_1B88814(v46, v47);
                  v73 = voicePrefixb[v69];
                  if ( !v73 )
                    sub_1B8880C(v46, v47);
                  v74 = v73->fields.condType;
                  if ( v74 <= 0x13 )
                  {
                    if ( ((1 << v74) & 0xCE000) != 0 )
                    {
                      if ( v73->fields.value >= 1 )
                      {
                        v75 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !v75 )
                          sub_1B8880C(0LL, v76);
                        v77 = DataManager__GetMasterData_object_(
                                (DataManager_o *)v75,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
                        if ( !v77 )
                          sub_1B8880C(0LL, v78);
                        v79 = DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v77,
                                v73->fields.value,
                                (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                        if ( !v79 || Time < (__int64)v79[5].monitor )
                        {
                          v81 = v196;
                          if ( !v196 )
                            sub_1B8880C(0LL, v80);
                          goto LABEL_85;
                        }
                        if ( !v196 )
                          sub_1B8880C(v79, v80);
                        v46 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                 v196,
                                                 (int32_t *)&closedType,
                                                 svtVoiceId,
                                                 v42,
                                                 v206,
                                                 Time >= (__int64)v79[6].klass,
                                                 svtId,
                                                 &overwriteNameDefault,
                                                 isMateriala);
LABEL_97:
                        v70 = (unsigned __int8)v46 & 1;
                        v72 = 1;
                        v71 = 1;
                        goto LABEL_98;
                      }
                    }
                    else if ( v74 == 16 && v73->fields.value >= 1 )
                    {
                      v82 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !v82 )
                        sub_1B8880C(0LL, v83);
                      v84 = DataManager__GetMasterData_object_(
                              (DataManager_o *)v82,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
                      if ( !v84 )
                        sub_1B8880C(0LL, v85);
                      v86 = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v84,
                              (Il2CppObject **)&v199[1],
                              v73->fields.value,
                              (const MethodInfo_311D988 *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
                      if ( v86 )
                      {
                        if ( !*(_QWORD *)&v199[1] )
                          sub_1B8880C(v86, v87);
                        if ( Time >= *(_QWORD *)(*(_QWORD *)&v199[1] + 40LL) )
                        {
                          if ( !v196 )
                            sub_1B8880C(0LL, v87);
                          v46 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                   v196,
                                                   (int32_t *)&closedType,
                                                   svtVoiceId,
                                                   v42,
                                                   v206,
                                                   1,
                                                   svtId,
                                                   &overwriteNameDefault,
                                                   isMateriala);
                          goto LABEL_97;
                        }
                      }
                      v81 = v196;
                      if ( !v196 )
                        sub_1B8880C(0LL, v87);
LABEL_85:
                      v46 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                               v81,
                                               (int32_t *)&closedType,
                                               svtVoiceId,
                                               v42,
                                               v206,
                                               0,
                                               svtId,
                                               &overwriteNameDefault,
                                               isMateriala);
                      v71 = (unsigned __int8)v46 & 1;
                      v72 = 1;
                      v70 = (unsigned __int8)v46 & 1;
LABEL_98:
                      v67 = v182;
                    }
                  }
                  LODWORD(v68) = v67->max_length;
                  if ( (int)++v69 >= (int)v68 )
                  {
                    if ( (v72 & 1) != 0 )
                    {
                      v59 = v71 & 1;
                      v60 = v70 & 1;
                      goto LABEL_238;
                    }
LABEL_218:
                    v61 = v196;
                    if ( !v196 )
                      sub_1B8880C(0LL, v47);
LABEL_229:
                    v59 = 1;
                    v60 = VoiceCondMaster__IsEnable(
                            v61,
                            (int32_t *)&closedType,
                            svtVoiceId,
                            v42,
                            v206,
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
                  v62 = *v193;
                  if ( !*v193 )
                    sub_1B8880C(v46, v47);
                  v63 = *(_QWORD *)&v62->fields.friendshipRank.fields.currentCryptoKey;
                  v64 = *(_QWORD *)&v62->fields.friendshipRank.fields.fakeValue;
                  voicePrefixa = v206;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v208.fields.currentCryptoKey = v63;
                  *(_QWORD *)&v208.fields.fakeValue = v64;
                  v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v208, 0LL);
                  if ( !v196 )
                    sub_1B8880C(v65, v66);
LABEL_70:
                  IsEnable = VoiceCondMaster__IsEnable(
                               v196,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v42,
                               voicePrefixa,
                               (int)v65 >= v37->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_237;
                }
                if ( condType == 99 )
                {
                  v50 = *v193;
                  if ( !*v193 )
                    sub_1B8880C(v46, v47);
                  v51 = *(_QWORD *)&v50->fields.friendshipRank.fields.currentCryptoKey;
                  v52 = *(_QWORD *)&v50->fields.friendshipRank.fields.fakeValue;
                  voicePrefix = v206;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v207.fields.currentCryptoKey = v51;
                  *(_QWORD *)&v207.fields.fakeValue = v52;
                  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v207, 0LL);
                  if ( !v196 )
                    sub_1B8880C(v53, v54);
                  IsEnable = VoiceCondMaster__IsEnable(
                               v196,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v42,
                               voicePrefix,
                               (int)v53 <= v37->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
LABEL_237:
                  v60 = IsEnable;
                  v59 = 1;
                  goto LABEL_238;
                }
                goto LABEL_214;
              }
              if ( condType != 56 )
              {
                if ( condType == 92 )
                {
                  if ( !v196 )
                    sub_1B8880C(0LL, v47);
                  IsEnable = VoiceCondMaster__IsEnable(
                               v196,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v42,
                               v206,
                               0,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_237;
                }
                goto LABEL_214;
              }
              v88 = conds;
              if ( !conds || (v89 = *(_QWORD *)&conds->max_length) == 0 )
              {
                v61 = v196;
                if ( !v196 )
                  sub_1B8880C(0LL, v47);
                goto LABEL_229;
              }
              if ( (int)v89 < 1 )
                goto LABEL_130;
              v90 = 0LL;
              v91 = 0;
              v92 = 0;
              v93 = 0;
              v183 = conds;
              voicePrefixc = conds->m_Items;
              do
              {
                if ( (unsigned int)v90 >= (unsigned int)v89 )
                  sub_1B88814(v46, v47);
                v94 = voicePrefixc[v90];
                if ( !v94 )
                  sub_1B8880C(v46, v47);
                v95 = v94->fields.condType;
                if ( v95 <= 0x13 && ((1 << v95) & 0xCE000) != 0 && v94->fields.value >= 1 )
                {
                  v96 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v96 )
                    sub_1B8880C(0LL, v97);
                  v98 = DataManager__GetMasterData_object_(
                          (DataManager_o *)v96,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v98 )
                    sub_1B8880C(0LL, v99);
                  v100 = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v98,
                           v94->fields.value,
                           (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v100 && Time >= (__int64)v100[5].monitor )
                  {
                    value = v94->fields.value;
                    v181 = v206;
                    if ( !CondType_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    v103 = CondType__IsServantGetBeforeEventEnd(svtId, value, 0LL);
                    if ( !v196 )
                      sub_1B8880C(v103, v104);
                    v46 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             v196,
                                             (int32_t *)&closedType,
                                             svtVoiceId,
                                             v42,
                                             v181,
                                             v103,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v91 = (unsigned __int8)v46 & 1;
                    v93 = 1;
                    v92 = 1;
                  }
                  else
                  {
                    if ( !v196 )
                      sub_1B8880C(0LL, v101);
                    v46 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             v196,
                                             (int32_t *)&closedType,
                                             svtVoiceId,
                                             v42,
                                             v206,
                                             0,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v92 = (unsigned __int8)v46 & 1;
                    v93 = 1;
                    v91 = (unsigned __int8)v46 & 1;
                  }
                  v88 = v183;
                }
                LODWORD(v89) = v88->max_length;
                ++v90;
              }
              while ( (int)v90 < (int)v89 );
              if ( (v93 & 1) == 0 )
              {
LABEL_130:
                v61 = v196;
                if ( !v196 )
                  sub_1B8880C(0LL, v47);
                goto LABEL_229;
              }
              v59 = v92 & 1;
              v60 = v91 & 1;
LABEL_238:
              v150 = v60 & VoiceEntity__IsCondEnable(v37, svtId, v48);
              if ( (v59 & (v150 | ((_DWORD)closedType != 2)) & 1) != 0 )
              {
                v151 = sub_1B887FC(VoiceInfo_TypeInfo);
                VoiceInfo___ctor((VoiceInfo_o *)v151, 0LL);
                if ( !v151 )
                  sub_1B8880C(v152, v153);
                *(_QWORD *)(v151 + 16) = v37;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v151 + 16), (int32_t)v37, v154, v155);
                *(_BYTE *)(v151 + 24) = v150 & 1;
                v156 = (int)overwriteName;
                *(_QWORD *)(v151 + 32) = overwriteName;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v151 + 32), v156, v157, v158);
                v159 = (int)overwriteNameDefault;
                *(_QWORD *)(v151 + 40) = overwriteNameDefault;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v151 + 40), v159, v160, v161);
                v162 = v206;
                *(_DWORD *)(v151 + 48) = HIDWORD(closedType);
                *(_DWORD *)(v151 + 52) = v162;
                v163 = (int)conds;
                *(_QWORD *)(v151 + 56) = conds;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v151 + 56), v163, v164, v165);
                if ( !v198 )
                  sub_1B8880C(v166, v167);
                items = v198->fields._items;
                v171 = Method_System_Collections_Generic_List_VoiceInfo__Add__;
                ++v198->fields._version;
                if ( !items )
                  sub_1B8880C(v166, v167);
                size = v198->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v198,
                    (Il2CppObject *)v151,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
                }
                else
                {
                  v173 = &items->obj.klass + size;
                  v198->fields._size = size + 1;
                  v173[4] = (Il2CppClass *)v151;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v173 + 4), v151, v168, v169);
                }
              }
            }
          }
        }
      }
    }
  }
  v174 = Enumerator->klass;
  v175 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v176 = &v174->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v176 - 1) != System_IDisposable_TypeInfo )
    {
      --v175;
      v176 += 4;
      if ( !v175 )
        goto LABEL_249;
    }
    v177 = (__int64)&v174->vtable[*v176].method;
  }
  else
  {
LABEL_249:
    v177 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v177)(
               Enumerator,
               *(_QWORD *)(v177 + 8));
  if ( (v197 & 1) != 0 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_260;
    NetworkManager__GoToTitleDialog((NetworkManager_o *)Instance, 0LL);
  }
  if ( !v198 )
LABEL_260:
    sub_1B8880C(Instance, v17);
  return (VoiceInfo_array *)System_Collections_Generic_List_object___ToArray(
                              v198,
                              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
}


int32_t __fastcall VoiceMaster__getFirstPlayPriority(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  _QWORD *v19; // x0
  __int64 v20; // x1
  _QWORD *v21; // x21
  __int64 methodPtr_low; // x10
  __int64 v23; // x0
  System_String_o *v24; // x1
  System_String_o *v25; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4A5C07C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&VoiceEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A5C07C = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0LL) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_18:
      v18 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                      Enumerator,
                      *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19
      || (methodPtr_low = LOBYTE(VoiceEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*v19 + 304LL) < (unsigned int)methodPtr_low)
      || *(VoiceEntity_c **)(*(_QWORD *)(*v19 + 200LL) + 8 * methodPtr_low - 8) != VoiceEntity_TypeInfo )
    {
      sub_1B8880C(v19, v20);
    }
    v23 = v19[2];
    if ( !v23 )
      sub_1B8880C(0LL, v20);
    v24 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 360LL))(
                               v23,
                               *(_QWORD *)(*(_QWORD *)v23 + 368LL));
    v25 = System_String__Concat_61707032((System_String_o *)StringLiteral_16123/*"_"*/, v24, 0LL);
    if ( !labelName )
      sub_1B8880C(v25, v25);
    if ( System_String__EndsWith(labelName, v25, 0LL) )
    {
      v7 = *((_DWORD *)v21 + 15);
      goto LABEL_28;
    }
  }
  v7 = 0;
LABEL_28:
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_32;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_32:
    v29 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
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
  int32_t v10; // w20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  _QWORD *v22; // x0
  __int64 v23; // x1
  _DWORD *v24; // x23
  __int64 methodPtr_low; // x10
  __int64 v26; // x0
  System_String_o *v27; // x1
  System_String_o *v28; // x0
  Il2CppObject *Instance; // x0
  __int64 v30; // x1
  Il2CppObject *MasterData_object; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v34; // x1
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_4A5C07B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&VoiceEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A5C07B = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0LL) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v9);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v12);
  do
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      goto LABEL_35;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_18;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_18:
      v21 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v22 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                      Enumerator,
                      *(_QWORD *)(v21 + 8));
    v24 = v22;
    if ( !v22
      || (methodPtr_low = LOBYTE(VoiceEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*v22 + 304LL) < (unsigned int)methodPtr_low)
      || *(VoiceEntity_c **)(*(_QWORD *)(*v22 + 200LL) + 8 * methodPtr_low - 8) != VoiceEntity_TypeInfo )
    {
      sub_1B8880C(v22, v23);
    }
    v26 = v22[2];
    if ( !v26 )
      sub_1B8880C(0LL, v23);
    v27 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 360LL))(
                               v26,
                               *(_QWORD *)(*(_QWORD *)v26 + 368LL));
    v28 = System_String__Concat_61707032((System_String_o *)StringLiteral_16123/*"_"*/, v27, 0LL);
    if ( !labelName )
      sub_1B8880C(v28, v28);
  }
  while ( !System_String__EndsWith(labelName, v28, 0LL) );
  if ( v24[12] != 17 && v24[7] != 1 )
  {
LABEL_35:
    v10 = 0;
    goto LABEL_36;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v30);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    sub_1B8880C(UserId, UserId);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       UserId,
                       svtId,
                       0LL);
  v34 = (unsigned int)v24[14];
  if ( isUpdate )
  {
    if ( !EntityDefinitely )
      sub_1B8880C(0LL, v34);
    if ( !UserServantCollectionEntity__SetPlayed(EntityDefinitely, v34, 0LL) )
      goto LABEL_35;
  }
  else
  {
    if ( !EntityDefinitely )
      sub_1B8880C(0LL, v34);
    if ( UserServantCollectionEntity__IsPlayed(EntityDefinitely, v34, 0LL) )
      goto LABEL_35;
  }
  v10 = v24[14];
LABEL_36:
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_40;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_40:
    v38 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
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
  int64_t Time_38478060; // x21
  uint64_t v15; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v16; // [xsp+10h] [xbp-50h]
  System_DateTime_o dateTime; // [xsp+18h] [xbp-48h]
  uint64_t v18; // [xsp+20h] [xbp-40h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-38h] BYREF
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

  if ( (byte_4A5C079 & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5C079 = 1;
  }
  v16.fields._dateData = 0LL;
  dateTime.fields._dateData = 0LL;
  if ( userBirthDay < 1 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_38479168(createDay, 0LL).fields._dateData;
  v18 = NetworkManager__getDateTime_38478840(userBirthDay, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v20.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v20, 0LL);
  v21.fields._dateData = (uint64_t)&v18;
  Month = System_DateTime__get_Month(v21, 0LL);
  v22.fields._dateData = (uint64_t)&v18;
  Day = System_DateTime__get_Day(v22, 0LL);
  v15 = 0LL;
  v23.fields._dateData = (uint64_t)&v15;
  System_DateTime___ctor_62384912(v23, Year, Month, Day, 0LL);
  dateTime.fields._dateData = v15;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v24.fields._dateData = (uint64_t)&dateData;
  v9 = System_DateTime__get_Year(v24, 0LL);
  v25.fields._dateData = (uint64_t)&v18;
  v10 = System_DateTime__get_Month(v25, 0LL);
  v26.fields._dateData = (uint64_t)&v18;
  v11 = System_DateTime__get_Day(v26, 0LL);
  v15 = 0LL;
  v27.fields._dateData = (uint64_t)&v15;
  System_DateTime___ctor_62384912(v27, v9 + 1, v10, v11, 0LL);
  v16.fields._dateData = v15;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  ServerTime = NetworkManager__getServerTime(0LL);
  v28.fields._dateData = dateTime.fields._dateData;
  Time_38478060 = NetworkManager__getTime_38478060(v28, 0LL);
  v29.fields._dateData = v16.fields._dateData;
  return (Time_38478060 <= ServerTime && Time_38478060 + 86400 >= createDay) | (NetworkManager__getTime_38478060(
                                                                                  v29,
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
  if ( (byte_4A5C07D & 1) == 0 )
  {
    this = (VoiceMaster___c__DisplayClass2_0_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C07D = 1;
  }
  userStvCollectionEntity = v4->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_1B8880C(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL) == id;
}