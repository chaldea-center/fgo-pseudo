void __fastcall VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A209D6 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__, method);
    byte_4A209D6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    132,
    (const MethodInfo_30F8A78 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
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
  __int64 v50; // x23
  __int64 Instance; // x0
  __int64 v52; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v54; // x22
  int32_t v55; // w2
  int32_t v56; // w3
  ServantVoiceEntity_array *Entity_39575420; // x29
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  __int64 v59; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v61; // w26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v63; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v66; // x8
  __int64 v67; // x9
  int32_t *v68; // x10
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x1
  VoiceEntity_o *v72; // x27
  __int64 methodPtr_low; // x10
  __int64 v74; // x8
  ServantVoiceEntity_o *v75; // x24
  __int64 v76; // x0
  System_String_o *v77; // x19
  System_String_o *v78; // x0
  System_String_o *v79; // x22
  System_Collections_Generic_List_object__o *VoiceList_39558584; // x0
  DataManager_c *v81; // x0
  __int64 v82; // x1
  const MethodInfo *v83; // x2
  int condType; // w8
  UserServantCollectionEntity_o *v85; // x8
  __int64 v86; // x24
  __int64 v87; // x22
  __int64 v88; // x0
  __int64 v89; // x1
  _BOOL4 IsEnable; // w0
  int32_t v91; // w22
  _BOOL8 IsQuestClear_37394868; // x0
  __int64 v93; // x1
  int v94; // w22
  int v95; // w24
  VoiceCondMaster_o *v96; // x0
  UserServantCollectionEntity_o *v97; // x8
  __int64 v98; // x24
  __int64 v99; // x22
  __int64 v100; // x0
  __int64 v101; // x1
  ServantVoiceCond_array *v102; // x14
  __int64 v103; // x11
  __int64 v104; // x24
  char v105; // w9
  char v106; // w10
  char v107; // w8
  ServantVoiceCond_o *v108; // x22
  unsigned int v109; // w11
  Il2CppObject *v110; // x0
  __int64 v111; // x1
  Il2CppObject *v112; // x0
  __int64 v113; // x1
  Il2CppObject *v114; // x0
  __int64 v115; // x1
  VoiceCondMaster_o *v116; // x0
  Il2CppObject *v117; // x0
  __int64 v118; // x1
  Il2CppObject *v119; // x0
  __int64 v120; // x1
  _BOOL8 v121; // x0
  __int64 v122; // x1
  ServantVoiceCond_array *v123; // x13
  __int64 v124; // x11
  __int64 v125; // x22
  char v126; // w8
  char v127; // w10
  char v128; // w9
  ServantVoiceCond_o *v129; // x24
  unsigned int v130; // w11
  Il2CppObject *v131; // x0
  __int64 v132; // x1
  Il2CppObject *v133; // x0
  __int64 v134; // x1
  Il2CppObject *v135; // x0
  __int64 v136; // x1
  int32_t value; // w24
  _BOOL8 v138; // x0
  __int64 v139; // x1
  __int64 v140; // x1
  __int64 v141; // x1
  UserServantCollectionEntity_o *v142; // x8
  __int64 v143; // x24
  __int64 v144; // x22
  __int64 v145; // x1
  int32_t condValue; // w24
  __int64 v147; // x1
  __int64 v148; // x1
  __int64 v149; // x1
  ServantVoiceCond_array *v150; // x12
  __int64 v151; // x10
  __int64 v152; // x22
  char v153; // w13
  char v154; // w9
  char v155; // w8
  ServantVoiceCond_o *v156; // x24
  unsigned int v157; // w10
  Il2CppObject *v158; // x0
  __int64 v159; // x1
  _BOOL8 v160; // x0
  __int64 v161; // x1
  Il2CppClass *v162; // x24
  bool v163; // w8
  NetworkManager_c *v164; // x0
  struct NetworkManager_StaticFields *static_fields; // x9
  char v166; // w24
  UserGameEntity_o *SelfUserGame; // x0
  int64_t v168; // x1
  BalanceConfig_c *v169; // x0
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x22
  System_Func_int__bool__o *v171; // x24
  int32_t v172; // w2
  int32_t v173; // w3
  BalanceConfig_c *v174; // x0
  __int64 v175; // x1
  const MethodInfo *v176; // x3
  int64_t VtReleaseAt; // x8
  int64_t createdAt; // x22
  bool isEnableBirthdayVoice; // w22
  Il2CppObject *Master_object; // x0
  __int64 v181; // x1
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v183; // x3
  _BOOL8 v184; // x0
  int v185; // w24
  __int64 v186; // x19
  __int64 v187; // x0
  __int64 v188; // x1
  int32_t v189; // w2
  int32_t v190; // w3
  int32_t v191; // w1
  int32_t v192; // w2
  int32_t v193; // w3
  int32_t v194; // w1
  int32_t v195; // w2
  int32_t v196; // w3
  int32_t v197; // w8
  int32_t v198; // w1
  int32_t v199; // w2
  int32_t v200; // w3
  __int64 v201; // x0
  __int64 v202; // x1
  int32_t v203; // w2
  int32_t v204; // w3
  struct System_Object_array *items; // x8
  _QWORD *v206; // x9
  __int64 size; // x10
  Il2CppClass **v208; // x0
  System_Collections_Generic_IEnumerator_T__c *v209; // x8
  __int64 v210; // x9
  int32_t *v211; // x10
  __int64 v212; // x0
  VoiceInfo_array *result; // x0
  const MethodInfo *isMateriala; // [xsp+0h] [xbp-120h]
  unsigned int v215; // [xsp+18h] [xbp-108h]
  int32_t v216; // [xsp+1Ch] [xbp-104h]
  ServantVoiceCond_array *v217; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v218; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v219; // [xsp+20h] [xbp-100h]
  int32_t voicePrefix; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixa; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixb; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixc; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixd; // [xsp+28h] [xbp-F8h]
  int64_t voicePrefixe; // [xsp+28h] [xbp-F8h]
  ServantStatusBattleListViewItem_o *v226; // [xsp+30h] [xbp-F0h]
  int v227; // [xsp+38h] [xbp-E8h]
  UserServantCollectionEntity_o **v228; // [xsp+40h] [xbp-E0h]
  int64_t Time; // [xsp+48h] [xbp-D8h]
  int32_t svtVoiceId; // [xsp+54h] [xbp-CCh]
  VoiceCondMaster_o *v231; // [xsp+58h] [xbp-C8h]
  char v232; // [xsp+64h] [xbp-BCh]
  System_Collections_Generic_List_object__o *v233; // [xsp+68h] [xbp-B8h]
  _DWORD v234[3]; // [xsp+7Ch] [xbp-A4h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-98h] BYREF
  __int64 closedType; // [xsp+90h] [xbp-90h] BYREF
  System_String_o *overwriteNameDefault; // [xsp+98h] [xbp-88h] BYREF
  System_String_o *overwriteName; // [xsp+A0h] [xbp-80h] BYREF
  bool isInvalidVoiceList; // [xsp+ACh] [xbp-74h] BYREF
  ServantVoiceCond_array *conds; // [xsp+B0h] [xbp-70h] BYREF
  int32_t v241; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v242; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v243; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v244; // 0:x0.16

  if ( (byte_4A209D8 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B715CC(&Method_BasicHelper_Any_int____75850432, v15);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v16);
    sub_1B715CC(&CondType_TypeInfo, v17);
    sub_1B715CC(&Method_DataManager_GetMasterData_EventMaster___, v18);
    sub_1B715CC(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___, v19);
    sub_1B715CC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v20);
    sub_1B715CC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v21);
    sub_1B715CC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v22);
    sub_1B715CC(&Method_DataManager_GetMasterData_VoiceCondMaster___, v23);
    sub_1B715CC(&Method_DataManager_GetMaster_BeforeBirthDayMaster___, v24);
    sub_1B715CC(&Method_DataManager_GetMaster_EventMaster___, v25);
    sub_1B715CC(&DataManager_TypeInfo, v26);
    sub_1B715CC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v27);
    sub_1B715CC(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__, v28);
    sub_1B715CC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v29);
    sub_1B715CC(
      &Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__,
      v30);
    sub_1B715CC(&System_Func_int__bool__TypeInfo, v31);
    sub_1B715CC(&System_IDisposable_TypeInfo, v32);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v33);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v34);
    sub_1B715CC(&Method_System_Collections_Generic_List_VoiceInfo__Add__, v35);
    sub_1B715CC(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__, v36);
    sub_1B715CC(&Method_System_Collections_Generic_List_VoiceInfo___ctor__, v37);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v38);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v39);
    sub_1B715CC(&System_Collections_Generic_List_VoiceInfo__TypeInfo, v40);
    sub_1B715CC(&NetworkManager_TypeInfo, v41);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_1B715CC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v44);
    sub_1B715CC(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__, v45);
    sub_1B715CC(&VoiceMaster___c__DisplayClass2_0_TypeInfo, v46);
    sub_1B715CC(&VoiceEntity_TypeInfo, v47);
    sub_1B715CC(&VoiceInfo_TypeInfo, v48);
    sub_1B715CC(&StringLiteral_16073/*"_"*/, v49);
    byte_4A209D8 = 1;
  }
  v241 = 0;
  conds = 0LL;
  isInvalidVoiceList = 0;
  overwriteNameDefault = 0LL;
  overwriteName = 0LL;
  entity = 0LL;
  closedType = 0LL;
  *(_QWORD *)&v234[1] = 0LL;
  v50 = sub_1B71818(VoiceMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v50, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  v231 = (VoiceCondMaster_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_260;
  v241 = ServantLimitAddMaster__getVoicePrefix((ServantLimitAddMaster_o *)Instance, changeSvtVoiceId, limitCount, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  v54 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v54 )
    goto LABEL_260;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                        (UserServantCollectionMaster_o *)v54,
                        Instance,
                        svtId,
                        0LL);
  if ( !v50 )
    goto LABEL_260;
  *(_QWORD *)(v50 + 16) = Instance;
  v228 = (UserServantCollectionEntity_o **)(v50 + 16);
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v50 + 16), Instance, v55, v56);
  if ( !MasterData_object )
    goto LABEL_260;
  Entity_39575420 = ServantVoiceMaster__getEntity_39575420(
                      (ServantVoiceMaster_o *)MasterData_object,
                      changeSvtVoiceId,
                      limitCount,
                      0LL);
  Time = NetworkManager__getTime(0LL);
  v233 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v233,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_4A1B3C0 )
  {
    sub_1B715CC(&NetworkManager_TypeInfo, v52);
    byte_4A1B3C0 = 1;
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
  v227 = *(unsigned __int8 *)(*(_QWORD *)(Instance + 184) + 136LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3096080 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B71828(0LL, v59);
  v232 = 0;
  v61 = isCheckPlayCond;
  v226 = (ServantStatusBattleListViewItem_o *)(v50 + 24);
  LOBYTE(v234[0]) = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v63 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v63;
        p_offset += 4;
        if ( !v63 )
          goto LABEL_24;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_24:
      p_method = sub_1BC35AC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v66 = Enumerator->klass;
    v67 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v68 = &v66->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v68 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v67;
        v68 += 4;
        if ( !v67 )
          goto LABEL_31;
      }
      v69 = (__int64)&v66->vtable[*v68].method;
    }
    else
    {
LABEL_31:
      v69 = sub_1BC35AC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v70 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v69)(
            Enumerator,
            *(_QWORD *)(v69 + 8));
    v72 = (VoiceEntity_o *)v70;
    if ( !v70
      || (methodPtr_low = LOBYTE(VoiceEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v70 + 304LL) < (unsigned int)methodPtr_low)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v70 + 200LL) + 8 * methodPtr_low - 8) != VoiceEntity_TypeInfo )
    {
      sub_1B71828(v70, v71);
    }
    if ( !Entity_39575420 )
      sub_1B71828(v70, v71);
    v74 = *(int *)(v70 + 28);
    if ( (unsigned int)v74 >= Entity_39575420->max_length )
      sub_1B71830(v70, v71);
    v75 = Entity_39575420->m_Items[v74];
    if ( v75 )
    {
      v76 = *(_QWORD *)(v70 + 16);
      if ( !v76 )
        sub_1B71828(0LL, v71);
      v77 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v76 + 360LL))(
                                 v76,
                                 *(_QWORD *)(*(_QWORD *)v76 + 368LL));
      v78 = System_Int32__ToString((int32_t)&v241, 0LL);
      v79 = System_String__Concat_61516764(v78, (System_String_o *)StringLiteral_16073/*"_"*/, v77, 0LL);
      VoiceList_39558584 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getVoiceList_39558584(
                                                                          v75,
                                                                          v72->fields.svtVoiceType,
                                                                          v79,
                                                                          disableCondTypeList,
                                                                          v61,
                                                                          0LL);
      if ( VoiceList_39558584 )
      {
        if ( VoiceList_39558584->fields._size >= 1 )
        {
          if ( System_Collections_Generic_List_object___get_Item(
                 VoiceList_39558584,
                 0,
                 (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__) )
          {
            ServantVoiceEntity__getOverwriteData(
              v75,
              v72->fields.svtVoiceType,
              v79,
              &conds,
              &isInvalidVoiceList,
              &overwriteName,
              &overwriteNameDefault,
              (int32_t *)&closedType + 1,
              v234[0],
              0LL);
            if ( !isInvalidVoiceList )
            {
              LODWORD(closedType) = v72->fields.closedType;
              condType = v72->fields.condType;
              if ( condType <= 54 )
              {
                if ( condType <= 21 )
                {
                  v94 = 1;
                  v95 = 1;
                  switch ( condType )
                  {
                    case 0:
                      v96 = v231;
                      if ( !v231 )
                        sub_1B71828(0LL, v82);
                      goto LABEL_229;
                    case 1:
                      v91 = v241;
                      condValue = v72->fields.condValue;
                      if ( !CondType_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                      IsQuestClear_37394868 = CondType__IsQuestClear_37394868(condValue, -1, 0, 0LL);
                      if ( !v231 )
                        sub_1B71828(IsQuestClear_37394868, v147);
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
                      if ( !*v228 )
                        sub_1B71828(v81, v82);
                      if ( !v231 )
                        sub_1B71828(0LL, v82);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   v231,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v77,
                                   v241,
                                   (*v228)->fields.maxLv >= v72->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_237;
                    case 7:
                      if ( !*v228 )
                        sub_1B71828(v81, v82);
                      if ( !v231 )
                        sub_1B71828(0LL, v82);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   v231,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v77,
                                   v241,
                                   (*v228)->fields.maxLimitCount >= v72->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_237;
                    case 8:
                      if ( !*v228 )
                        sub_1B71828(0LL, v82);
                      v91 = v241;
                      IsQuestClear_37394868 = UserServantCollectionEntity__IsGet(*v228, 0LL);
                      if ( !v231 )
                        sub_1B71828(IsQuestClear_37394868, v141);
                      goto LABEL_158;
                    case 9:
                      v142 = *v228;
                      if ( !*v228 )
                        sub_1B71828(v81, v82);
                      v143 = *(_QWORD *)&v142->fields.friendshipRank.fields.currentCryptoKey;
                      v144 = *(_QWORD *)&v142->fields.friendshipRank.fields.fakeValue;
                      voicePrefixa = v241;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v244.fields.currentCryptoKey = v143;
                      *(_QWORD *)&v244.fields.fakeValue = v144;
                      v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v244, 0LL);
                      if ( !v231 )
                        sub_1B71828(v100, v145);
                      goto LABEL_70;
                    case 17:
                      if ( !*v228 )
                        sub_1B71828(0LL, v82);
                      v91 = v241;
                      IsQuestClear_37394868 = UserServantCollectionEntity__IsPlayed(*v228, v72->fields.condValue, 0LL);
                      if ( !v231 )
                        sub_1B71828(IsQuestClear_37394868, v148);
                      goto LABEL_158;
                    case 18:
                      if ( !*v228 )
                        sub_1B71828(0LL, v82);
                      v91 = v241;
                      IsQuestClear_37394868 = UserServantCollectionEntity__IsLimitCountMax(*v228, 0LL);
                      if ( !v231 )
                        sub_1B71828(IsQuestClear_37394868, v149);
                      goto LABEL_158;
                    case 19:
                      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
                      if ( !SelfUserGame )
                        sub_1B71828(0LL, v168);
                      if ( SelfUserGame->fields.birthDay < 1 )
                        goto LABEL_234;
                      voicePrefixe = SelfUserGame->fields.birthDay;
                      v169 = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v169 = BalanceConfig_TypeInfo;
                      }
                      ServantIdsBirthdayBeforeValentine = v169->static_fields->ServantIdsBirthdayBeforeValentine;
                      v171 = (System_Func_int__bool__o *)v226->klass;
                      if ( !v226->klass )
                      {
                        v171 = (System_Func_int__bool__o *)sub_1B71818(System_Func_int__bool__TypeInfo);
                        System_Func_int__bool____ctor(
                          v171,
                          (Il2CppObject *)v50,
                          Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__,
                          0LL);
                        v226->klass = (ServantStatusBattleListViewItem_c *)v171;
                        sub_1B71570(v226, (int32_t)v171, v172, v173);
                      }
                      v174 = (BalanceConfig_c *)BasicHelper__Any_int__48522544(
                                                  ServantIdsBirthdayBeforeValentine,
                                                  (System_Func_T__bool__o *)v171,
                                                  (const MethodInfo_2E46530 *)Method_BasicHelper_Any_int____75850432);
                      if ( ((unsigned __int8)v174 & 1) != 0 )
                      {
                        v174 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v174 = BalanceConfig_TypeInfo;
                        }
                        VtReleaseAt = v174->static_fields->VtReleaseAt;
                        if ( VtReleaseAt >= 1 )
                        {
                          if ( !*v228 )
                            sub_1B71828(v174, v175);
                          createdAt = (*v228)->fields.createdAt;
                          if ( !v174->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v174);
                            VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
                          }
                          if ( createdAt < VtReleaseAt )
                            goto LABEL_214;
                        }
                      }
                      if ( !*v228 )
                        sub_1B71828(v174, v175);
                      isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                                (VoiceMaster_o *)v174,
                                                voicePrefixe,
                                                (*v228)->fields.createdAt,
                                                v176);
                      if ( !DataManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
                      if ( !Master_object )
                        sub_1B71828(0LL, v181);
                      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       (const MethodInfo_30F89C8 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
                      if ( isEnableBirthdayVoice )
                      {
                        v184 = 1LL;
                      }
                      else
                      {
                        if ( !SingleEntity )
                          sub_1B71828(0LL, v168);
                        v168 = (int64_t)SingleEntity[1].klass;
                        if ( v168 < 1 )
                        {
LABEL_234:
                          v184 = 0LL;
                        }
                        else
                        {
                          if ( !*v228 )
                            sub_1B71828(SingleEntity, v168);
                          v184 = VoiceMaster__isEnableBirthdayVoice(
                                   (VoiceMaster_o *)SingleEntity,
                                   v168,
                                   (*v228)->fields.createdAt,
                                   v183);
                        }
                      }
                      if ( !v231 )
                        sub_1B71828(v184, v168);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   v231,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v77,
                                   v241,
                                   v184,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_237;
                    case 20:
                      v150 = conds;
                      if ( conds && (v151 = *(_QWORD *)&conds->max_length) != 0 )
                      {
                        if ( (int)v151 >= 1 )
                        {
                          v152 = 0LL;
                          v153 = 0;
                          v154 = 0;
                          v155 = 0;
                          v219 = conds;
                          voicePrefixd = conds->m_Items;
                          do
                          {
                            if ( (unsigned int)v152 >= (unsigned int)v151 )
                              sub_1B71830(v81, v82);
                            v156 = voicePrefixd[v152];
                            if ( !v156 )
                              sub_1B71828(v81, v82);
                            v157 = v156->fields.condType;
                            if ( v157 <= 0x13 && ((1 << v157) & 0xCE000) != 0 && v156->fields.value >= 1 )
                            {
                              if ( !DataManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                              v158 = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_EventMaster___);
                              if ( !v158 )
                                sub_1B71828(0LL, v159);
                              v160 = DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v158,
                                       &entity,
                                       v156->fields.value,
                                       (const MethodInfo_30F87B4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
                              if ( !v160 )
                                goto LABEL_174;
                              if ( !entity )
                                sub_1B71828(v160, v161);
                              if ( Time >= (__int64)entity[5].monitor )
                              {
                                if ( !v231 )
                                  sub_1B71828(0LL, v161);
                                v162 = entity[6].klass;
                                v81 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         v231,
                                                         (int32_t *)&closedType,
                                                         svtVoiceId,
                                                         v77,
                                                         v241,
                                                         Time >= (__int64)v162,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                if ( (v227 != 0) | v232 & 1 )
                                {
                                  v150 = v219;
                                  v163 = 0;
                                }
                                else
                                {
                                  v215 = (unsigned int)v81;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  if ( !byte_4A20BD6 )
                                  {
                                    sub_1B715CC(&NetworkManager_TypeInfo, v82);
                                    byte_4A20BD6 = 1;
                                  }
                                  v164 = NetworkManager_TypeInfo;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                    v164 = NetworkManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1B71828(v164, v82);
                                  static_fields = v164->static_fields;
                                  v150 = v219;
                                  v81 = (DataManager_c *)v215;
                                  v163 = static_fields->serverTime < (__int64)entity[6].klass;
                                }
                                v153 = (unsigned __int8)v81 & 1;
                                if ( v163 && Time >= (__int64)v162 )
                                {
                                  v166 = (unsigned __int8)v81 & 1;
                                  if ( !SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
                                    sub_1B71828(0LL, v82);
                                  if ( !byte_4A1D392 )
                                  {
                                    sub_1B715CC(&DataManager_TypeInfo, v82);
                                    byte_4A1D392 = 1;
                                  }
                                  v81 = DataManager_TypeInfo;
                                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                    v81 = DataManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1B71828(v81, v82);
                                  v150 = v219;
                                  v155 = 1;
                                  v153 = v166;
                                  v232 |= v81->static_fields->dateVersion < (__int64)entity[6].klass;
                                }
                                else
                                {
                                  v155 = 1;
                                }
                                v154 = 1;
                              }
                              else
                              {
LABEL_174:
                                if ( !v231 )
                                  sub_1B71828(0LL, v161);
                                v81 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         v231,
                                                         (int32_t *)&closedType,
                                                         svtVoiceId,
                                                         v77,
                                                         v241,
                                                         0,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                v150 = v219;
                                v154 = (unsigned __int8)v81 & 1;
                                v155 = 1;
                                v153 = (unsigned __int8)v81 & 1;
                              }
                            }
                            LODWORD(v151) = v150->max_length;
                            ++v152;
                          }
                          while ( (int)v152 < (int)v151 );
                          if ( (v155 & 1) != 0 )
                          {
                            v94 = v154 & 1;
                            v95 = v153 & 1;
                            goto LABEL_238;
                          }
                        }
                        v96 = v231;
                        if ( !v231 )
                          sub_1B71828(0LL, v82);
                      }
                      else
                      {
                        v96 = v231;
                        if ( !v231 )
                          sub_1B71828(0LL, v82);
                      }
                      return result;
                    case 21:
                      if ( !*v228 )
                        sub_1B71828(0LL, v82);
                      v91 = v241;
                      IsQuestClear_37394868 = UserServantCollectionEntity__IsFinded(*v228, 0LL);
                      if ( !v231 )
                        sub_1B71828(IsQuestClear_37394868, v140);
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
                    if ( !*v228 )
                      sub_1B71828(0LL, v82);
                    v91 = v241;
                    IsQuestClear_37394868 = UserServantCollectionEntity__IsCostumeGet(*v228, limitCount, 0LL);
                    if ( !v231 )
                      sub_1B71828(IsQuestClear_37394868, v93);
LABEL_158:
                    IsEnable = VoiceCondMaster__IsEnable(
                                 v231,
                                 (int32_t *)&closedType,
                                 svtVoiceId,
                                 v77,
                                 v91,
                                 IsQuestClear_37394868,
                                 svtId,
                                 &overwriteNameDefault,
                                 isMateriala);
                    goto LABEL_237;
                  }
LABEL_214:
                  v94 = 1;
LABEL_215:
                  v95 = 1;
                  goto LABEL_238;
                }
                v102 = conds;
                if ( !conds || (v103 = *(_QWORD *)&conds->max_length) == 0 )
                {
                  v96 = v231;
                  if ( !v231 )
                    sub_1B71828(0LL, v82);
                  goto LABEL_229;
                }
                if ( (int)v103 < 1 )
                  goto LABEL_218;
                v104 = 0LL;
                v105 = 0;
                v106 = 0;
                v107 = 0;
                v217 = conds;
                voicePrefixb = conds->m_Items;
                while ( 2 )
                {
                  if ( (unsigned int)v104 >= (unsigned int)v103 )
                    sub_1B71830(v81, v82);
                  v108 = voicePrefixb[v104];
                  if ( !v108 )
                    sub_1B71828(v81, v82);
                  v109 = v108->fields.condType;
                  if ( v109 <= 0x13 )
                  {
                    if ( ((1 << v109) & 0xCE000) != 0 )
                    {
                      if ( v108->fields.value >= 1 )
                      {
                        v110 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !v110 )
                          sub_1B71828(0LL, v111);
                        v112 = DataManager__GetMasterData_object_(
                                 (DataManager_o *)v110,
                                 (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EventMaster___);
                        if ( !v112 )
                          sub_1B71828(0LL, v113);
                        v114 = DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v112,
                                 v108->fields.value,
                                 (const MethodInfo_30F8760 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                        if ( !v114 || Time < (__int64)v114[5].monitor )
                        {
                          v116 = v231;
                          if ( !v231 )
                            sub_1B71828(0LL, v115);
                          goto LABEL_85;
                        }
                        if ( !v231 )
                          sub_1B71828(v114, v115);
                        v81 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                 v231,
                                                 (int32_t *)&closedType,
                                                 svtVoiceId,
                                                 v77,
                                                 v241,
                                                 Time >= (__int64)v114[6].klass,
                                                 svtId,
                                                 &overwriteNameDefault,
                                                 isMateriala);
LABEL_97:
                        v105 = (unsigned __int8)v81 & 1;
                        v107 = 1;
                        v106 = 1;
                        goto LABEL_98;
                      }
                    }
                    else if ( v109 == 16 && v108->fields.value >= 1 )
                    {
                      v117 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !v117 )
                        sub_1B71828(0LL, v118);
                      v119 = DataManager__GetMasterData_object_(
                               (DataManager_o *)v117,
                               (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
                      if ( !v119 )
                        sub_1B71828(0LL, v120);
                      v121 = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v119,
                               (Il2CppObject **)&v234[1],
                               v108->fields.value,
                               (const MethodInfo_30F87B4 *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
                      if ( v121 )
                      {
                        if ( !*(_QWORD *)&v234[1] )
                          sub_1B71828(v121, v122);
                        if ( Time >= *(_QWORD *)(*(_QWORD *)&v234[1] + 40LL) )
                        {
                          if ( !v231 )
                            sub_1B71828(0LL, v122);
                          v81 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                   v231,
                                                   (int32_t *)&closedType,
                                                   svtVoiceId,
                                                   v77,
                                                   v241,
                                                   1,
                                                   svtId,
                                                   &overwriteNameDefault,
                                                   isMateriala);
                          goto LABEL_97;
                        }
                      }
                      v116 = v231;
                      if ( !v231 )
                        sub_1B71828(0LL, v122);
LABEL_85:
                      v81 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                               v116,
                                               (int32_t *)&closedType,
                                               svtVoiceId,
                                               v77,
                                               v241,
                                               0,
                                               svtId,
                                               &overwriteNameDefault,
                                               isMateriala);
                      v106 = (unsigned __int8)v81 & 1;
                      v107 = 1;
                      v105 = (unsigned __int8)v81 & 1;
LABEL_98:
                      v102 = v217;
                    }
                  }
                  LODWORD(v103) = v102->max_length;
                  if ( (int)++v104 >= (int)v103 )
                  {
                    if ( (v107 & 1) != 0 )
                    {
                      v94 = v106 & 1;
                      v95 = v105 & 1;
                      goto LABEL_238;
                    }
LABEL_218:
                    v96 = v231;
                    if ( !v231 )
                      sub_1B71828(0LL, v82);
LABEL_229:
                    v94 = 1;
                    v95 = VoiceCondMaster__IsEnable(
                            v96,
                            (int32_t *)&closedType,
                            svtVoiceId,
                            v77,
                            v241,
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
                  v97 = *v228;
                  if ( !*v228 )
                    sub_1B71828(v81, v82);
                  v98 = *(_QWORD *)&v97->fields.friendshipRank.fields.currentCryptoKey;
                  v99 = *(_QWORD *)&v97->fields.friendshipRank.fields.fakeValue;
                  voicePrefixa = v241;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v243.fields.currentCryptoKey = v98;
                  *(_QWORD *)&v243.fields.fakeValue = v99;
                  v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v243, 0LL);
                  if ( !v231 )
                    sub_1B71828(v100, v101);
LABEL_70:
                  IsEnable = VoiceCondMaster__IsEnable(
                               v231,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v77,
                               voicePrefixa,
                               (int)v100 >= v72->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_237;
                }
                if ( condType == 99 )
                {
                  v85 = *v228;
                  if ( !*v228 )
                    sub_1B71828(v81, v82);
                  v86 = *(_QWORD *)&v85->fields.friendshipRank.fields.currentCryptoKey;
                  v87 = *(_QWORD *)&v85->fields.friendshipRank.fields.fakeValue;
                  voicePrefix = v241;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v242.fields.currentCryptoKey = v86;
                  *(_QWORD *)&v242.fields.fakeValue = v87;
                  v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v242, 0LL);
                  if ( !v231 )
                    sub_1B71828(v88, v89);
                  IsEnable = VoiceCondMaster__IsEnable(
                               v231,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v77,
                               voicePrefix,
                               (int)v88 <= v72->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
LABEL_237:
                  v95 = IsEnable;
                  v94 = 1;
                  goto LABEL_238;
                }
                goto LABEL_214;
              }
              if ( condType != 56 )
              {
                if ( condType == 92 )
                {
                  if ( !v231 )
                    sub_1B71828(0LL, v82);
                  IsEnable = VoiceCondMaster__IsEnable(
                               v231,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v77,
                               v241,
                               0,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_237;
                }
                goto LABEL_214;
              }
              v123 = conds;
              if ( !conds || (v124 = *(_QWORD *)&conds->max_length) == 0 )
              {
                v96 = v231;
                if ( !v231 )
                  sub_1B71828(0LL, v82);
                goto LABEL_229;
              }
              if ( (int)v124 < 1 )
                goto LABEL_130;
              v125 = 0LL;
              v126 = 0;
              v127 = 0;
              v128 = 0;
              v218 = conds;
              voicePrefixc = conds->m_Items;
              do
              {
                if ( (unsigned int)v125 >= (unsigned int)v124 )
                  sub_1B71830(v81, v82);
                v129 = voicePrefixc[v125];
                if ( !v129 )
                  sub_1B71828(v81, v82);
                v130 = v129->fields.condType;
                if ( v130 <= 0x13 && ((1 << v130) & 0xCE000) != 0 && v129->fields.value >= 1 )
                {
                  v131 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v131 )
                    sub_1B71828(0LL, v132);
                  v133 = DataManager__GetMasterData_object_(
                           (DataManager_o *)v131,
                           (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v133 )
                    sub_1B71828(0LL, v134);
                  v135 = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v133,
                           v129->fields.value,
                           (const MethodInfo_30F8760 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v135 && Time >= (__int64)v135[5].monitor )
                  {
                    value = v129->fields.value;
                    v216 = v241;
                    if ( !CondType_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    v138 = CondType__IsServantGetBeforeEventEnd(svtId, value, 0LL);
                    if ( !v231 )
                      sub_1B71828(v138, v139);
                    v81 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             v231,
                                             (int32_t *)&closedType,
                                             svtVoiceId,
                                             v77,
                                             v216,
                                             v138,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v126 = (unsigned __int8)v81 & 1;
                    v128 = 1;
                    v127 = 1;
                  }
                  else
                  {
                    if ( !v231 )
                      sub_1B71828(0LL, v136);
                    v81 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             v231,
                                             (int32_t *)&closedType,
                                             svtVoiceId,
                                             v77,
                                             v241,
                                             0,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v127 = (unsigned __int8)v81 & 1;
                    v128 = 1;
                    v126 = (unsigned __int8)v81 & 1;
                  }
                  v123 = v218;
                }
                LODWORD(v124) = v123->max_length;
                ++v125;
              }
              while ( (int)v125 < (int)v124 );
              if ( (v128 & 1) == 0 )
              {
LABEL_130:
                v96 = v231;
                if ( !v231 )
                  sub_1B71828(0LL, v82);
                goto LABEL_229;
              }
              v94 = v127 & 1;
              v95 = v126 & 1;
LABEL_238:
              v185 = v95 & VoiceEntity__IsCondEnable(v72, svtId, v83);
              if ( (v94 & (v185 | ((_DWORD)closedType != 2)) & 1) != 0 )
              {
                v186 = sub_1B71818(VoiceInfo_TypeInfo);
                VoiceInfo___ctor((VoiceInfo_o *)v186, 0LL);
                if ( !v186 )
                  sub_1B71828(v187, v188);
                *(_QWORD *)(v186 + 16) = v72;
                sub_1B71570((ServantStatusBattleListViewItem_o *)(v186 + 16), (int32_t)v72, v189, v190);
                *(_BYTE *)(v186 + 24) = v185 & 1;
                v191 = (int)overwriteName;
                *(_QWORD *)(v186 + 32) = overwriteName;
                sub_1B71570((ServantStatusBattleListViewItem_o *)(v186 + 32), v191, v192, v193);
                v194 = (int)overwriteNameDefault;
                *(_QWORD *)(v186 + 40) = overwriteNameDefault;
                sub_1B71570((ServantStatusBattleListViewItem_o *)(v186 + 40), v194, v195, v196);
                v197 = v241;
                *(_DWORD *)(v186 + 48) = HIDWORD(closedType);
                *(_DWORD *)(v186 + 52) = v197;
                v198 = (int)conds;
                *(_QWORD *)(v186 + 56) = conds;
                sub_1B71570((ServantStatusBattleListViewItem_o *)(v186 + 56), v198, v199, v200);
                if ( !v233 )
                  sub_1B71828(v201, v202);
                items = v233->fields._items;
                v206 = Method_System_Collections_Generic_List_VoiceInfo__Add__;
                ++v233->fields._version;
                if ( !items )
                  sub_1B71828(v201, v202);
                size = v233->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v233,
                    (Il2CppObject *)v186,
                    *(const MethodInfo_34D0260 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
                }
                else
                {
                  v208 = &items->obj.klass + size;
                  v233->fields._size = size + 1;
                  v208[4] = (Il2CppClass *)v186;
                  sub_1B71570((ServantStatusBattleListViewItem_o *)(v208 + 4), v186, v203, v204);
                }
              }
            }
          }
        }
      }
    }
  }
  v209 = Enumerator->klass;
  v210 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v211 = &v209->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v211 - 1) != System_IDisposable_TypeInfo )
    {
      --v210;
      v211 += 4;
      if ( !v210 )
        goto LABEL_249;
    }
    v212 = (__int64)&v209->vtable[*v211].method;
  }
  else
  {
LABEL_249:
    v212 = sub_1BC35AC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v212)(
               Enumerator,
               *(_QWORD *)(v212 + 8));
  if ( (v232 & 1) != 0 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_260;
    NetworkManager__GoToTitleDialog((NetworkManager_o *)Instance, 0LL);
  }
  if ( !v233 )
LABEL_260:
    sub_1B71828(Instance, v52);
  return (VoiceInfo_array *)System_Collections_Generic_List_object___ToArray(
                              v233,
                              (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
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

  if ( (byte_4A209DA & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1B715CC(&System_IDisposable_TypeInfo, v6);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B715CC(&VoiceEntity_TypeInfo, v9);
    sub_1B715CC(&StringLiteral_16073/*"_"*/, v10);
    byte_4A209DA = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0LL) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B71828(0LL, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3096080 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B71828(0LL, v14);
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
      p_method = sub_1BC35AC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v23 = sub_1BC35AC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
      sub_1B71828(v24, v25);
    }
    v28 = v24[2];
    if ( !v28 )
      sub_1B71828(0LL, v25);
    v29 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 360LL))(
                               v28,
                               *(_QWORD *)(*(_QWORD *)v28 + 368LL));
    v30 = System_String__Concat_61505504((System_String_o *)StringLiteral_16073/*"_"*/, v29, 0LL);
    if ( !labelName )
      sub_1B71828(v30, v30);
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
    v34 = sub_1BC35AC(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  Il2CppObject *MasterData_object; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v42; // x1
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0

  if ( (byte_4A209D9 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1B715CC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_1B715CC(&System_IDisposable_TypeInfo, v10);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B715CC(&NetworkManager_TypeInfo, v13);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B715CC(&VoiceEntity_TypeInfo, v15);
    sub_1B715CC(&StringLiteral_16073/*"_"*/, v16);
    byte_4A209D9 = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0LL) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B71828(0LL, v17);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3096080 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B71828(0LL, v20);
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
      p_method = sub_1BC35AC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      goto LABEL_35;
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v29 = sub_1BC35AC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
      sub_1B71828(v30, v31);
    }
    v34 = v30[2];
    if ( !v34 )
      sub_1B71828(0LL, v31);
    v35 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v34 + 360LL))(
                               v34,
                               *(_QWORD *)(*(_QWORD *)v34 + 368LL));
    v36 = System_String__Concat_61505504((System_String_o *)StringLiteral_16073/*"_"*/, v35, 0LL);
    if ( !labelName )
      sub_1B71828(v36, v36);
  }
  while ( !System_String__EndsWith(labelName, v36, 0LL) );
  if ( v32[12] != 17 && v32[7] != 1 )
  {
LABEL_35:
    v18 = 0;
    goto LABEL_36;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B71828(0LL, v38);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    sub_1B71828(UserId, UserId);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       UserId,
                       svtId,
                       0LL);
  v42 = (unsigned int)v32[14];
  if ( isUpdate )
  {
    if ( !EntityDefinitely )
      sub_1B71828(0LL, v42);
    if ( !UserServantCollectionEntity__SetPlayed(EntityDefinitely, v42, 0LL) )
      goto LABEL_35;
  }
  else
  {
    if ( !EntityDefinitely )
      sub_1B71828(0LL, v42);
    if ( UserServantCollectionEntity__IsPlayed(EntityDefinitely, v42, 0LL) )
      goto LABEL_35;
  }
  v18 = v32[14];
LABEL_36:
  v43 = Enumerator->klass;
  v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_40;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_40:
    v46 = sub_1BC35AC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
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
  int64_t Time_38271424; // x21
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

  if ( (byte_4A209D7 & 1) == 0 )
  {
    sub_1B715CC(&System_DateTime_TypeInfo, userBirthDay);
    sub_1B715CC(&NetworkManager_TypeInfo, v6);
    byte_4A209D7 = 1;
  }
  v17.fields._dateData = 0LL;
  dateTime.fields._dateData = 0LL;
  if ( userBirthDay < 1 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_38187940(createDay, 0LL).fields._dateData;
  v19 = NetworkManager__getDateTime_38183252(userBirthDay, 0LL).fields._dateData;
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
  System_DateTime___ctor_62183384(v24, Year, Month, Day, 0LL);
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
  System_DateTime___ctor_62183384(v28, v10 + 1, v11, v12, 0LL);
  v17.fields._dateData = v16;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  ServerTime = NetworkManager__getServerTime(0LL);
  v29.fields._dateData = dateTime.fields._dateData;
  Time_38271424 = NetworkManager__getTime_38271424(v29, 0LL);
  v30.fields._dateData = v17.fields._dateData;
  return (Time_38271424 <= ServerTime && Time_38271424 + 86400 >= createDay) | (NetworkManager__getTime_38271424(
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
  if ( (byte_4A209DB & 1) == 0 )
  {
    this = (VoiceMaster___c__DisplayClass2_0_o *)sub_1B715CC(
                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                   *(_QWORD *)&id);
    byte_4A209DB = 1;
  }
  userStvCollectionEntity = v4->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_1B71828(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v9, 0LL) == id;
}