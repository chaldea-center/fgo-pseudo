void __fastcall VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD2FE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__, method);
    byte_49FD2FE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    132,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
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
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v53; // x22
  const MethodInfo *v54; // x3
  int32_t v55; // w2
  int32_t v56; // w3
  ServantVoiceEntity_array *Entity_39457476; // x29
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v63; // w26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v65; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v68; // x8
  __int64 v69; // x9
  int32_t *v70; // x10
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x1
  VoiceEntity_o *v74; // x27
  __int64 methodPtr_low; // x10
  __int64 v76; // x8
  ServantVoiceEntity_o *v77; // x24
  __int64 v78; // x0
  System_String_o *v79; // x19
  System_String_o *v80; // x0
  System_String_o *v81; // x22
  System_Collections_Generic_List_object__o *VoiceList_39440700; // x0
  DataManager_c *v83; // x0
  __int64 v84; // x1
  const MethodInfo *v85; // x2
  int condType; // w8
  UserServantCollectionEntity_o *v87; // x8
  __int64 v88; // x24
  __int64 v89; // x22
  __int64 v90; // x0
  _BOOL4 IsEnable; // w0
  int32_t v92; // w22
  _BOOL8 IsQuestClear_37285996; // x0
  int v94; // w22
  int v95; // w24
  VoiceCondMaster_o *v96; // x0
  UserServantCollectionEntity_o *v97; // x8
  __int64 v98; // x24
  __int64 v99; // x22
  __int64 v100; // x0
  ServantVoiceCond_array *v101; // x14
  __int64 v102; // x11
  __int64 v103; // x24
  char v104; // w9
  char v105; // w10
  char v106; // w8
  ServantVoiceCond_o *v107; // x22
  unsigned int v108; // w11
  Il2CppObject *v109; // x0
  Il2CppObject *v110; // x0
  Il2CppObject *v111; // x0
  VoiceCondMaster_o *v112; // x0
  Il2CppObject *v113; // x0
  Il2CppObject *v114; // x0
  _BOOL8 v115; // x0
  ServantVoiceCond_array *v116; // x13
  __int64 v117; // x11
  __int64 v118; // x22
  char v119; // w8
  char v120; // w10
  char v121; // w9
  ServantVoiceCond_o *v122; // x24
  unsigned int v123; // w11
  Il2CppObject *v124; // x0
  Il2CppObject *v125; // x0
  Il2CppObject *v126; // x0
  int32_t value; // w24
  _BOOL8 v128; // x0
  UserServantCollectionEntity_o *v129; // x8
  __int64 v130; // x24
  __int64 v131; // x22
  int32_t condValue; // w24
  ServantVoiceCond_array *v133; // x12
  __int64 v134; // x10
  __int64 v135; // x22
  char v136; // w13
  char v137; // w9
  char v138; // w8
  ServantVoiceCond_o *v139; // x24
  unsigned int v140; // w10
  Il2CppObject *v141; // x0
  _BOOL8 v142; // x0
  Il2CppClass *v143; // x24
  bool v144; // w8
  NetworkManager_c *v145; // x0
  struct NetworkManager_StaticFields *static_fields; // x9
  char v147; // w24
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v149; // x1
  __int64 v150; // x2
  BalanceConfig_c *v151; // x0
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x22
  System_Func_int__bool__o *v153; // x24
  int32_t v154; // w2
  int32_t v155; // w3
  BalanceConfig_c *v156; // x0
  const MethodInfo *v157; // x3
  int64_t VtReleaseAt; // x8
  int64_t createdAt; // x22
  bool isEnableBirthdayVoice; // w22
  Il2CppObject *Master_object; // x0
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v163; // x3
  _BOOL8 v164; // x0
  int64_t v165; // x1
  __int64 v166; // x1
  __int64 v167; // x2
  int v168; // w24
  __int64 v169; // x19
  __int64 v170; // x0
  int32_t v171; // w2
  int32_t v172; // w3
  int32_t v173; // w1
  int32_t v174; // w2
  int32_t v175; // w3
  int32_t v176; // w1
  int32_t v177; // w2
  int32_t v178; // w3
  int32_t v179; // w8
  int32_t v180; // w1
  int32_t v181; // w2
  int32_t v182; // w3
  __int64 v183; // x0
  int32_t v184; // w2
  int32_t v185; // w3
  struct System_Object_array *items; // x8
  _QWORD *v187; // x9
  __int64 size; // x10
  Il2CppClass **v189; // x0
  System_Collections_Generic_IEnumerator_T__c *v190; // x8
  __int64 v191; // x9
  int32_t *v192; // x10
  __int64 v193; // x0
  VoiceInfo_array *result; // x0
  const MethodInfo *isMateriala; // [xsp+0h] [xbp-120h]
  unsigned int v196; // [xsp+18h] [xbp-108h]
  int32_t v197; // [xsp+1Ch] [xbp-104h]
  ServantVoiceCond_array *v198; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v199; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v200; // [xsp+20h] [xbp-100h]
  int32_t voicePrefix; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixa; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixb; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixc; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixd; // [xsp+28h] [xbp-F8h]
  int64_t voicePrefixe; // [xsp+28h] [xbp-F8h]
  ServantStatusBattleListViewItem_o *v207; // [xsp+30h] [xbp-F0h]
  int v208; // [xsp+38h] [xbp-E8h]
  UserServantCollectionEntity_o **v209; // [xsp+40h] [xbp-E0h]
  int64_t Time; // [xsp+48h] [xbp-D8h]
  int32_t svtVoiceId; // [xsp+54h] [xbp-CCh]
  VoiceCondMaster_o *v212; // [xsp+58h] [xbp-C8h]
  char v213; // [xsp+64h] [xbp-BCh]
  System_Collections_Generic_List_object__o *v214; // [xsp+68h] [xbp-B8h]
  _DWORD v215[3]; // [xsp+7Ch] [xbp-A4h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-98h] BYREF
  __int64 closedType; // [xsp+90h] [xbp-90h] BYREF
  System_String_o *overwriteNameDefault; // [xsp+98h] [xbp-88h] BYREF
  System_String_o *overwriteName; // [xsp+A0h] [xbp-80h] BYREF
  bool isInvalidVoiceList; // [xsp+ACh] [xbp-74h] BYREF
  ServantVoiceCond_array *conds; // [xsp+B0h] [xbp-70h] BYREF
  int32_t v222; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v223; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v224; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v225; // 0:x0.16

  if ( (byte_49FD300 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_BasicHelper_Any_int____75709408, v15);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v16);
    sub_1B640C8(&CondType_TypeInfo, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___, v19);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v20);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v21);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v22);
    sub_1B640C8(&Method_DataManager_GetMasterData_VoiceCondMaster___, v23);
    sub_1B640C8(&Method_DataManager_GetMaster_BeforeBirthDayMaster___, v24);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v25);
    sub_1B640C8(&DataManager_TypeInfo, v26);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v27);
    sub_1B640C8(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__, v28);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v29);
    sub_1B640C8(
      &Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__,
      v30);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v31);
    sub_1B640C8(&System_IDisposable_TypeInfo, v32);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v33);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v34);
    sub_1B640C8(&Method_System_Collections_Generic_List_VoiceInfo__Add__, v35);
    sub_1B640C8(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__, v36);
    sub_1B640C8(&Method_System_Collections_Generic_List_VoiceInfo___ctor__, v37);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v38);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v39);
    sub_1B640C8(&System_Collections_Generic_List_VoiceInfo__TypeInfo, v40);
    sub_1B640C8(&NetworkManager_TypeInfo, v41);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_1B640C8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v44);
    sub_1B640C8(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__, v45);
    sub_1B640C8(&VoiceMaster___c__DisplayClass2_0_TypeInfo, v46);
    sub_1B640C8(&VoiceEntity_TypeInfo, v47);
    sub_1B640C8(&VoiceInfo_TypeInfo, v48);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v49);
    byte_49FD300 = 1;
  }
  v222 = 0;
  conds = 0LL;
  isInvalidVoiceList = 0;
  overwriteNameDefault = 0LL;
  overwriteName = 0LL;
  entity = 0LL;
  closedType = 0LL;
  *(_QWORD *)&v215[1] = 0LL;
  v50 = sub_1B64314(VoiceMaster___c__DisplayClass2_0_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&changeSvtVoiceId);
  VoiceMaster___c__DisplayClass2_0___ctor((VoiceMaster___c__DisplayClass2_0_o *)v50, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  v212 = (VoiceCondMaster_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_260;
  v222 = ServantLimitAddMaster__getVoicePrefix((ServantLimitAddMaster_o *)Instance, changeSvtVoiceId, limitCount, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  v53 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v53 )
    goto LABEL_260;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                        (UserServantCollectionMaster_o *)v53,
                        Instance,
                        svtId,
                        v54);
  if ( !v50 )
    goto LABEL_260;
  *(_QWORD *)(v50 + 16) = Instance;
  v209 = (UserServantCollectionEntity_o **)(v50 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 16), Instance, v55, v56);
  if ( !MasterData_object )
    goto LABEL_260;
  Entity_39457476 = ServantVoiceMaster__getEntity_39457476(
                      (ServantVoiceMaster_o *)MasterData_object,
                      changeSvtVoiceId,
                      limitCount,
                      0LL);
  Time = NetworkManager__getTime(0LL);
  v214 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_VoiceInfo__TypeInfo,
                                                        v58,
                                                        v59);
  System_Collections_Generic_List_object____ctor(
    v214,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_49F7D6C )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v60);
    byte_49F7D6C = 1;
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
  v208 = *(unsigned __int8 *)(*(_QWORD *)(Instance + 184) + 136LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  v213 = 0;
  v63 = isCheckPlayCond;
  v207 = (ServantStatusBattleListViewItem_o *)(v50 + 24);
  LOBYTE(v215[0]) = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v65 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v65;
        p_offset += 4;
        if ( !v65 )
          goto LABEL_24;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_24:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v68 = Enumerator->klass;
    v69 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v70 = &v68->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v70 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v69;
        v70 += 4;
        if ( !v69 )
          goto LABEL_31;
      }
      v71 = (__int64)&v68->vtable[*v70].method;
    }
    else
    {
LABEL_31:
      v71 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v72 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v71)(
            Enumerator,
            *(_QWORD *)(v71 + 8));
    v74 = (VoiceEntity_o *)v72;
    if ( !v72
      || (methodPtr_low = LOBYTE(VoiceEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v72 + 304LL) < (unsigned int)methodPtr_low)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v72 + 200LL) + 8 * methodPtr_low - 8) != VoiceEntity_TypeInfo )
    {
      sub_1B64324(v72);
    }
    if ( !Entity_39457476 )
      sub_1B64324(v72);
    v76 = *(int *)(v72 + 28);
    if ( (unsigned int)v76 >= Entity_39457476->max_length )
      sub_1B6432C(v72, v73);
    v77 = Entity_39457476->m_Items[v76];
    if ( v77 )
    {
      v78 = *(_QWORD *)(v72 + 16);
      if ( !v78 )
        sub_1B64324(0LL);
      v79 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v78 + 360LL))(
                                 v78,
                                 *(_QWORD *)(*(_QWORD *)v78 + 368LL));
      v80 = System_Int32__ToString((int32_t)&v222, 0LL);
      v81 = System_String__Concat_61386656(v80, (System_String_o *)StringLiteral_16054/*"_"*/, v79, 0LL);
      VoiceList_39440700 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getVoiceList_39440700(
                                                                          v77,
                                                                          v74->fields.svtVoiceType,
                                                                          v81,
                                                                          disableCondTypeList,
                                                                          v63,
                                                                          0LL);
      if ( VoiceList_39440700 )
      {
        if ( VoiceList_39440700->fields._size >= 1 )
        {
          if ( System_Collections_Generic_List_object___get_Item(
                 VoiceList_39440700,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__) )
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
              v215[0],
              0LL);
            if ( !isInvalidVoiceList )
            {
              LODWORD(closedType) = v74->fields.closedType;
              condType = v74->fields.condType;
              if ( condType <= 54 )
              {
                if ( condType <= 21 )
                {
                  v94 = 1;
                  v95 = 1;
                  switch ( condType )
                  {
                    case 0:
                      v96 = v212;
                      if ( !v212 )
                        sub_1B64324(0LL);
                      goto LABEL_229;
                    case 1:
                      v92 = v222;
                      condValue = v74->fields.condValue;
                      if ( !CondType_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                      IsQuestClear_37285996 = CondType__IsQuestClear_37285996(condValue, -1, 0, 0LL);
                      if ( !v212 )
                        sub_1B64324(IsQuestClear_37285996);
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
                      if ( !*v209 )
                        sub_1B64324(v83);
                      if ( !v212 )
                        sub_1B64324(0LL);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   v212,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v79,
                                   v222,
                                   (*v209)->fields.maxLv >= v74->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_237;
                    case 7:
                      if ( !*v209 )
                        sub_1B64324(v83);
                      if ( !v212 )
                        sub_1B64324(0LL);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   v212,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v79,
                                   v222,
                                   (*v209)->fields.maxLimitCount >= v74->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_237;
                    case 8:
                      if ( !*v209 )
                        sub_1B64324(0LL);
                      v92 = v222;
                      IsQuestClear_37285996 = UserServantCollectionEntity__IsGet(*v209, 0LL);
                      if ( !v212 )
                        sub_1B64324(IsQuestClear_37285996);
                      goto LABEL_158;
                    case 9:
                      v129 = *v209;
                      if ( !*v209 )
                        sub_1B64324(v83);
                      v130 = *(_QWORD *)&v129->fields.friendshipRank.fields.currentCryptoKey;
                      v131 = *(_QWORD *)&v129->fields.friendshipRank.fields.fakeValue;
                      voicePrefixa = v222;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v225.fields.currentCryptoKey = v130;
                      *(_QWORD *)&v225.fields.fakeValue = v131;
                      v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v225, 0LL);
                      if ( !v212 )
                        sub_1B64324(v100);
                      goto LABEL_70;
                    case 17:
                      if ( !*v209 )
                        sub_1B64324(0LL);
                      v92 = v222;
                      IsQuestClear_37285996 = UserServantCollectionEntity__IsPlayed(*v209, v74->fields.condValue, 0LL);
                      if ( !v212 )
                        sub_1B64324(IsQuestClear_37285996);
                      goto LABEL_158;
                    case 18:
                      if ( !*v209 )
                        sub_1B64324(0LL);
                      v92 = v222;
                      IsQuestClear_37285996 = UserServantCollectionEntity__IsLimitCountMax(*v209, 0LL);
                      if ( !v212 )
                        sub_1B64324(IsQuestClear_37285996);
                      goto LABEL_158;
                    case 19:
                      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
                      if ( !SelfUserGame )
                        sub_1B64324(0LL);
                      if ( SelfUserGame->fields.birthDay < 1 )
                        goto LABEL_234;
                      voicePrefixe = SelfUserGame->fields.birthDay;
                      v151 = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v151 = BalanceConfig_TypeInfo;
                      }
                      ServantIdsBirthdayBeforeValentine = v151->static_fields->ServantIdsBirthdayBeforeValentine;
                      v153 = (System_Func_int__bool__o *)v207->klass;
                      if ( !v207->klass )
                      {
                        v153 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v149, v150);
                        System_Func_int__bool____ctor(
                          v153,
                          (Il2CppObject *)v50,
                          Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__,
                          0LL);
                        v207->klass = (ServantStatusBattleListViewItem_c *)v153;
                        sub_1B6406C(v207, (int32_t)v153, v154, v155);
                      }
                      v156 = (BalanceConfig_c *)BasicHelper__Any_int__48383472(
                                                  ServantIdsBirthdayBeforeValentine,
                                                  (System_Func_T__bool__o *)v153,
                                                  (const MethodInfo_2E245F0 *)Method_BasicHelper_Any_int____75709408);
                      if ( ((unsigned __int8)v156 & 1) != 0 )
                      {
                        v156 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v156 = BalanceConfig_TypeInfo;
                        }
                        VtReleaseAt = v156->static_fields->VtReleaseAt;
                        if ( VtReleaseAt >= 1 )
                        {
                          if ( !*v209 )
                            sub_1B64324(v156);
                          createdAt = (*v209)->fields.createdAt;
                          if ( !v156->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v156);
                            VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
                          }
                          if ( createdAt < VtReleaseAt )
                            goto LABEL_214;
                        }
                      }
                      if ( !*v209 )
                        sub_1B64324(v156);
                      isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                                (VoiceMaster_o *)v156,
                                                voicePrefixe,
                                                (*v209)->fields.createdAt,
                                                v157);
                      if ( !DataManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
                      if ( !Master_object )
                        sub_1B64324(0LL);
                      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       (const MethodInfo_30D410C *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
                      if ( isEnableBirthdayVoice )
                      {
                        v164 = 1LL;
                      }
                      else
                      {
                        if ( !SingleEntity )
                          sub_1B64324(0LL);
                        v165 = (int64_t)SingleEntity[1].klass;
                        if ( v165 < 1 )
                        {
LABEL_234:
                          v164 = 0LL;
                        }
                        else
                        {
                          if ( !*v209 )
                            sub_1B64324(SingleEntity);
                          v164 = VoiceMaster__isEnableBirthdayVoice(
                                   (VoiceMaster_o *)SingleEntity,
                                   v165,
                                   (*v209)->fields.createdAt,
                                   v163);
                        }
                      }
                      if ( !v212 )
                        sub_1B64324(v164);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   v212,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v79,
                                   v222,
                                   v164,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_237;
                    case 20:
                      v133 = conds;
                      if ( conds && (v134 = *(_QWORD *)&conds->max_length) != 0 )
                      {
                        if ( (int)v134 >= 1 )
                        {
                          v135 = 0LL;
                          v136 = 0;
                          v137 = 0;
                          v138 = 0;
                          v200 = conds;
                          voicePrefixd = conds->m_Items;
                          do
                          {
                            if ( (unsigned int)v135 >= (unsigned int)v134 )
                              sub_1B6432C(v83, v84);
                            v139 = voicePrefixd[v135];
                            if ( !v139 )
                              sub_1B64324(v83);
                            v140 = v139->fields.condType;
                            if ( v140 <= 0x13 && ((1 << v140) & 0xCE000) != 0 && v139->fields.value >= 1 )
                            {
                              if ( !DataManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                              v141 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
                              if ( !v141 )
                                sub_1B64324(0LL);
                              v142 = DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v141,
                                       &entity,
                                       v139->fields.value,
                                       (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
                              if ( !v142 )
                                goto LABEL_174;
                              if ( !entity )
                                sub_1B64324(v142);
                              if ( Time >= (__int64)entity[5].monitor )
                              {
                                if ( !v212 )
                                  sub_1B64324(0LL);
                                v143 = entity[6].klass;
                                v83 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         v212,
                                                         (int32_t *)&closedType,
                                                         svtVoiceId,
                                                         v79,
                                                         v222,
                                                         Time >= (__int64)v143,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                if ( (v208 != 0) | v213 & 1 )
                                {
                                  v133 = v200;
                                  v144 = 0;
                                }
                                else
                                {
                                  v196 = (unsigned int)v83;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  if ( !byte_49FD303 )
                                  {
                                    sub_1B640C8(&NetworkManager_TypeInfo, v84);
                                    byte_49FD303 = 1;
                                  }
                                  v145 = NetworkManager_TypeInfo;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                    v145 = NetworkManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1B64324(v145);
                                  static_fields = v145->static_fields;
                                  v133 = v200;
                                  v83 = (DataManager_c *)v196;
                                  v144 = static_fields->serverTime < (__int64)entity[6].klass;
                                }
                                v136 = (unsigned __int8)v83 & 1;
                                if ( v144 && Time >= (__int64)v143 )
                                {
                                  v147 = (unsigned __int8)v83 & 1;
                                  if ( !SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
                                    sub_1B64324(0LL);
                                  if ( !byte_49F9C03 )
                                  {
                                    sub_1B640C8(&DataManager_TypeInfo, v84);
                                    byte_49F9C03 = 1;
                                  }
                                  v83 = DataManager_TypeInfo;
                                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                    v83 = DataManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1B64324(v83);
                                  v133 = v200;
                                  v138 = 1;
                                  v136 = v147;
                                  v213 |= v83->static_fields->dateVersion < (__int64)entity[6].klass;
                                }
                                else
                                {
                                  v138 = 1;
                                }
                                v137 = 1;
                              }
                              else
                              {
LABEL_174:
                                if ( !v212 )
                                  sub_1B64324(0LL);
                                v83 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         v212,
                                                         (int32_t *)&closedType,
                                                         svtVoiceId,
                                                         v79,
                                                         v222,
                                                         0,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                v133 = v200;
                                v137 = (unsigned __int8)v83 & 1;
                                v138 = 1;
                                v136 = (unsigned __int8)v83 & 1;
                              }
                            }
                            LODWORD(v134) = v133->max_length;
                            ++v135;
                          }
                          while ( (int)v135 < (int)v134 );
                          if ( (v138 & 1) != 0 )
                          {
                            v94 = v137 & 1;
                            v95 = v136 & 1;
                            goto LABEL_238;
                          }
                        }
                        v96 = v212;
                        if ( !v212 )
                          sub_1B64324(0LL);
                      }
                      else
                      {
                        v96 = v212;
                        if ( !v212 )
                          sub_1B64324(0LL);
                      }
                      return result;
                    case 21:
                      if ( !*v209 )
                        sub_1B64324(0LL);
                      v92 = v222;
                      IsQuestClear_37285996 = UserServantCollectionEntity__IsFinded(*v209, 0LL);
                      if ( !v212 )
                        sub_1B64324(IsQuestClear_37285996);
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
                    if ( !*v209 )
                      sub_1B64324(0LL);
                    v92 = v222;
                    IsQuestClear_37285996 = UserServantCollectionEntity__IsCostumeGet(*v209, limitCount, 0LL);
                    if ( !v212 )
                      sub_1B64324(IsQuestClear_37285996);
LABEL_158:
                    IsEnable = VoiceCondMaster__IsEnable(
                                 v212,
                                 (int32_t *)&closedType,
                                 svtVoiceId,
                                 v79,
                                 v92,
                                 IsQuestClear_37285996,
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
                v101 = conds;
                if ( !conds || (v102 = *(_QWORD *)&conds->max_length) == 0 )
                {
                  v96 = v212;
                  if ( !v212 )
                    sub_1B64324(0LL);
                  goto LABEL_229;
                }
                if ( (int)v102 < 1 )
                  goto LABEL_218;
                v103 = 0LL;
                v104 = 0;
                v105 = 0;
                v106 = 0;
                v198 = conds;
                voicePrefixb = conds->m_Items;
                while ( 2 )
                {
                  if ( (unsigned int)v103 >= (unsigned int)v102 )
                    sub_1B6432C(v83, v84);
                  v107 = voicePrefixb[v103];
                  if ( !v107 )
                    sub_1B64324(v83);
                  v108 = v107->fields.condType;
                  if ( v108 <= 0x13 )
                  {
                    if ( ((1 << v108) & 0xCE000) != 0 )
                    {
                      if ( v107->fields.value >= 1 )
                      {
                        v109 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !v109 )
                          sub_1B64324(0LL);
                        v110 = DataManager__GetMasterData_object_(
                                 (DataManager_o *)v109,
                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
                        if ( !v110 )
                          sub_1B64324(0LL);
                        v111 = DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v110,
                                 v107->fields.value,
                                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                        if ( !v111 || Time < (__int64)v111[5].monitor )
                        {
                          v112 = v212;
                          if ( !v212 )
                            sub_1B64324(0LL);
                          goto LABEL_85;
                        }
                        if ( !v212 )
                          sub_1B64324(v111);
                        v83 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                 v212,
                                                 (int32_t *)&closedType,
                                                 svtVoiceId,
                                                 v79,
                                                 v222,
                                                 Time >= (__int64)v111[6].klass,
                                                 svtId,
                                                 &overwriteNameDefault,
                                                 isMateriala);
LABEL_97:
                        v104 = (unsigned __int8)v83 & 1;
                        v106 = 1;
                        v105 = 1;
                        goto LABEL_98;
                      }
                    }
                    else if ( v108 == 16 && v107->fields.value >= 1 )
                    {
                      v113 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !v113 )
                        sub_1B64324(0LL);
                      v114 = DataManager__GetMasterData_object_(
                               (DataManager_o *)v113,
                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
                      if ( !v114 )
                        sub_1B64324(0LL);
                      v115 = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v114,
                               (Il2CppObject **)&v215[1],
                               v107->fields.value,
                               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
                      if ( v115 )
                      {
                        if ( !*(_QWORD *)&v215[1] )
                          sub_1B64324(v115);
                        if ( Time >= *(_QWORD *)(*(_QWORD *)&v215[1] + 40LL) )
                        {
                          if ( !v212 )
                            sub_1B64324(0LL);
                          v83 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                   v212,
                                                   (int32_t *)&closedType,
                                                   svtVoiceId,
                                                   v79,
                                                   v222,
                                                   1,
                                                   svtId,
                                                   &overwriteNameDefault,
                                                   isMateriala);
                          goto LABEL_97;
                        }
                      }
                      v112 = v212;
                      if ( !v212 )
                        sub_1B64324(0LL);
LABEL_85:
                      v83 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                               v112,
                                               (int32_t *)&closedType,
                                               svtVoiceId,
                                               v79,
                                               v222,
                                               0,
                                               svtId,
                                               &overwriteNameDefault,
                                               isMateriala);
                      v105 = (unsigned __int8)v83 & 1;
                      v106 = 1;
                      v104 = (unsigned __int8)v83 & 1;
LABEL_98:
                      v101 = v198;
                    }
                  }
                  LODWORD(v102) = v101->max_length;
                  if ( (int)++v103 >= (int)v102 )
                  {
                    if ( (v106 & 1) != 0 )
                    {
                      v94 = v105 & 1;
                      v95 = v104 & 1;
                      goto LABEL_238;
                    }
LABEL_218:
                    v96 = v212;
                    if ( !v212 )
                      sub_1B64324(0LL);
LABEL_229:
                    v94 = 1;
                    v95 = VoiceCondMaster__IsEnable(
                            v96,
                            (int32_t *)&closedType,
                            svtVoiceId,
                            v79,
                            v222,
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
                  v97 = *v209;
                  if ( !*v209 )
                    sub_1B64324(v83);
                  v98 = *(_QWORD *)&v97->fields.friendshipRank.fields.currentCryptoKey;
                  v99 = *(_QWORD *)&v97->fields.friendshipRank.fields.fakeValue;
                  voicePrefixa = v222;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v224.fields.currentCryptoKey = v98;
                  *(_QWORD *)&v224.fields.fakeValue = v99;
                  v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v224, 0LL);
                  if ( !v212 )
                    sub_1B64324(v100);
LABEL_70:
                  IsEnable = VoiceCondMaster__IsEnable(
                               v212,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v79,
                               voicePrefixa,
                               (int)v100 >= v74->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_237;
                }
                if ( condType == 99 )
                {
                  v87 = *v209;
                  if ( !*v209 )
                    sub_1B64324(v83);
                  v88 = *(_QWORD *)&v87->fields.friendshipRank.fields.currentCryptoKey;
                  v89 = *(_QWORD *)&v87->fields.friendshipRank.fields.fakeValue;
                  voicePrefix = v222;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v223.fields.currentCryptoKey = v88;
                  *(_QWORD *)&v223.fields.fakeValue = v89;
                  v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v223, 0LL);
                  if ( !v212 )
                    sub_1B64324(v90);
                  IsEnable = VoiceCondMaster__IsEnable(
                               v212,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v79,
                               voicePrefix,
                               (int)v90 <= v74->fields.condValue,
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
                  if ( !v212 )
                    sub_1B64324(0LL);
                  IsEnable = VoiceCondMaster__IsEnable(
                               v212,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v79,
                               v222,
                               0,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_237;
                }
                goto LABEL_214;
              }
              v116 = conds;
              if ( !conds || (v117 = *(_QWORD *)&conds->max_length) == 0 )
              {
                v96 = v212;
                if ( !v212 )
                  sub_1B64324(0LL);
                goto LABEL_229;
              }
              if ( (int)v117 < 1 )
                goto LABEL_130;
              v118 = 0LL;
              v119 = 0;
              v120 = 0;
              v121 = 0;
              v199 = conds;
              voicePrefixc = conds->m_Items;
              do
              {
                if ( (unsigned int)v118 >= (unsigned int)v117 )
                  sub_1B6432C(v83, v84);
                v122 = voicePrefixc[v118];
                if ( !v122 )
                  sub_1B64324(v83);
                v123 = v122->fields.condType;
                if ( v123 <= 0x13 && ((1 << v123) & 0xCE000) != 0 && v122->fields.value >= 1 )
                {
                  v124 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v124 )
                    sub_1B64324(0LL);
                  v125 = DataManager__GetMasterData_object_(
                           (DataManager_o *)v124,
                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v125 )
                    sub_1B64324(0LL);
                  v126 = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v125,
                           v122->fields.value,
                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v126 && Time >= (__int64)v126[5].monitor )
                  {
                    value = v122->fields.value;
                    v197 = v222;
                    if ( !CondType_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    v128 = CondType__IsServantGetBeforeEventEnd(svtId, value, 0LL);
                    if ( !v212 )
                      sub_1B64324(v128);
                    v83 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             v212,
                                             (int32_t *)&closedType,
                                             svtVoiceId,
                                             v79,
                                             v197,
                                             v128,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v119 = (unsigned __int8)v83 & 1;
                    v121 = 1;
                    v120 = 1;
                  }
                  else
                  {
                    if ( !v212 )
                      sub_1B64324(0LL);
                    v83 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             v212,
                                             (int32_t *)&closedType,
                                             svtVoiceId,
                                             v79,
                                             v222,
                                             0,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v120 = (unsigned __int8)v83 & 1;
                    v121 = 1;
                    v119 = (unsigned __int8)v83 & 1;
                  }
                  v116 = v199;
                }
                LODWORD(v117) = v116->max_length;
                ++v118;
              }
              while ( (int)v118 < (int)v117 );
              if ( (v121 & 1) == 0 )
              {
LABEL_130:
                v96 = v212;
                if ( !v212 )
                  sub_1B64324(0LL);
                goto LABEL_229;
              }
              v94 = v120 & 1;
              v95 = v119 & 1;
LABEL_238:
              v168 = v95 & VoiceEntity__IsCondEnable(v74, svtId, v85);
              if ( (v94 & (v168 | ((_DWORD)closedType != 2)) & 1) != 0 )
              {
                v169 = sub_1B64314(VoiceInfo_TypeInfo, v166, v167);
                VoiceInfo___ctor((VoiceInfo_o *)v169, 0LL);
                if ( !v169 )
                  sub_1B64324(v170);
                *(_QWORD *)(v169 + 16) = v74;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v169 + 16), (int32_t)v74, v171, v172);
                *(_BYTE *)(v169 + 24) = v168 & 1;
                v173 = (int)overwriteName;
                *(_QWORD *)(v169 + 32) = overwriteName;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v169 + 32), v173, v174, v175);
                v176 = (int)overwriteNameDefault;
                *(_QWORD *)(v169 + 40) = overwriteNameDefault;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v169 + 40), v176, v177, v178);
                v179 = v222;
                *(_DWORD *)(v169 + 48) = HIDWORD(closedType);
                *(_DWORD *)(v169 + 52) = v179;
                v180 = (int)conds;
                *(_QWORD *)(v169 + 56) = conds;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v169 + 56), v180, v181, v182);
                if ( !v214 )
                  sub_1B64324(v183);
                items = v214->fields._items;
                v187 = Method_System_Collections_Generic_List_VoiceInfo__Add__;
                ++v214->fields._version;
                if ( !items )
                  sub_1B64324(v183);
                size = v214->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v214,
                    (Il2CppObject *)v169,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v187[4] + 192LL) + 112LL));
                }
                else
                {
                  v189 = &items->obj.klass + size;
                  v214->fields._size = size + 1;
                  v189[4] = (Il2CppClass *)v169;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v189 + 4), v169, v184, v185);
                }
              }
            }
          }
        }
      }
    }
  }
  v190 = Enumerator->klass;
  v191 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v192 = &v190->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v192 - 1) != System_IDisposable_TypeInfo )
    {
      --v191;
      v192 += 4;
      if ( !v191 )
        goto LABEL_249;
    }
    v193 = (__int64)&v190->vtable[*v192].method;
  }
  else
  {
LABEL_249:
    v193 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v193)(
               Enumerator,
               *(_QWORD *)(v193 + 8));
  if ( (v213 & 1) != 0 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_260;
    NetworkManager__GoToTitleDialog((NetworkManager_o *)Instance, 0LL);
  }
  if ( !v214 )
LABEL_260:
    sub_1B64324(Instance);
  return (VoiceInfo_array *)System_Collections_Generic_List_object___ToArray(
                              v214,
                              (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
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
  int32_t v11; // w21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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
  _QWORD *v23; // x21
  __int64 methodPtr_low; // x10
  __int64 v25; // x0
  System_String_o *v26; // x1
  System_String_o *v27; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_49FD302 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&VoiceEntity_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v10);
    byte_49FD302 = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0LL) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
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
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
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
      v21 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v22 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                      Enumerator,
                      *(_QWORD *)(v21 + 8));
    v23 = v22;
    if ( !v22
      || (methodPtr_low = LOBYTE(VoiceEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*v22 + 304LL) < (unsigned int)methodPtr_low)
      || *(VoiceEntity_c **)(*(_QWORD *)(*v22 + 200LL) + 8 * methodPtr_low - 8) != VoiceEntity_TypeInfo )
    {
      sub_1B64324(v22);
    }
    v25 = v22[2];
    if ( !v25 )
      sub_1B64324(0LL);
    v26 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 360LL))(
                               v25,
                               *(_QWORD *)(*(_QWORD *)v25 + 368LL));
    v27 = System_String__Concat_61375396((System_String_o *)StringLiteral_16054/*"_"*/, v26, 0LL);
    if ( !labelName )
      sub_1B64324(v27);
    if ( System_String__EndsWith(labelName, v27, 0LL) )
    {
      v11 = *((_DWORD *)v23 + 15);
      goto LABEL_28;
    }
  }
  v11 = 0;
LABEL_28:
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_32;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_32:
    v31 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v11;
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
  int32_t v17; // w20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  _QWORD *v28; // x0
  _DWORD *v29; // x23
  __int64 methodPtr_low; // x10
  __int64 v31; // x0
  System_String_o *v32; // x1
  System_String_o *v33; // x0
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  int64_t UserId; // x0
  const MethodInfo *v37; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v39; // w1
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_49FD301 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_1B640C8(&System_IDisposable_TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B640C8(&NetworkManager_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&VoiceEntity_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v16);
    byte_49FD301 = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0LL) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  do
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      goto LABEL_35;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_18;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_18:
      v27 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v28 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                      Enumerator,
                      *(_QWORD *)(v27 + 8));
    v29 = v28;
    if ( !v28
      || (methodPtr_low = LOBYTE(VoiceEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*v28 + 304LL) < (unsigned int)methodPtr_low)
      || *(VoiceEntity_c **)(*(_QWORD *)(*v28 + 200LL) + 8 * methodPtr_low - 8) != VoiceEntity_TypeInfo )
    {
      sub_1B64324(v28);
    }
    v31 = v28[2];
    if ( !v31 )
      sub_1B64324(0LL);
    v32 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 360LL))(
                               v31,
                               *(_QWORD *)(*(_QWORD *)v31 + 368LL));
    v33 = System_String__Concat_61375396((System_String_o *)StringLiteral_16054/*"_"*/, v32, 0LL);
    if ( !labelName )
      sub_1B64324(v33);
  }
  while ( !System_String__EndsWith(labelName, v33, 0LL) );
  if ( v29[12] != 17 && v29[7] != 1 )
  {
LABEL_35:
    v17 = 0;
    goto LABEL_36;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    sub_1B64324(UserId);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       UserId,
                       svtId,
                       v37);
  v39 = v29[14];
  if ( isUpdate )
  {
    if ( !EntityDefinitely )
      sub_1B64324(0LL);
    if ( !UserServantCollectionEntity__SetPlayed(EntityDefinitely, v39, 0LL) )
      goto LABEL_35;
  }
  else
  {
    if ( !EntityDefinitely )
      sub_1B64324(0LL);
    if ( UserServantCollectionEntity__IsPlayed(EntityDefinitely, v39, 0LL) )
      goto LABEL_35;
  }
  v17 = v29[14];
LABEL_36:
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_40;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_40:
    v43 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  return v17;
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
  int64_t Time_38161648; // x21
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

  if ( (byte_49FD2FF & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, userBirthDay);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    byte_49FD2FF = 1;
  }
  v17.fields._dateData = 0LL;
  dateTime.fields._dateData = 0LL;
  if ( userBirthDay < 1 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_38078100(createDay, 0LL).fields._dateData;
  v19 = NetworkManager__getDateTime_38073412(userBirthDay, 0LL).fields._dateData;
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
  System_DateTime___ctor_62053268(v24, Year, Month, Day, 0LL);
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
  System_DateTime___ctor_62053268(v28, v10 + 1, v11, v12, 0LL);
  v17.fields._dateData = v16;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  ServerTime = NetworkManager__getServerTime(0LL);
  v29.fields._dateData = dateTime.fields._dateData;
  Time_38161648 = NetworkManager__getTime_38161648(v29, 0LL);
  v30.fields._dateData = v17.fields._dateData;
  return (Time_38161648 <= ServerTime && Time_38161648 + 86400 >= createDay) | (NetworkManager__getTime_38161648(
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
  if ( (byte_49FD304 & 1) == 0 )
  {
    this = (VoiceMaster___c__DisplayClass2_0_o *)sub_1B640C8(
                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                   *(_QWORD *)&id);
    byte_49FD304 = 1;
  }
  userStvCollectionEntity = v4->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_1B64324(this);
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v9, 0LL) == id;
}