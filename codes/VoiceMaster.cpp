void __fastcall VoiceMaster___ctor(VoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF3F7 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__, method);
    byte_49FF3F7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    132,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string___ctor__);
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
  const MethodInfo *v55; // x3
  int32_t v56; // w2
  int32_t v57; // w3
  ServantVoiceEntity_array *Entity_39461984; // x29
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
  VoiceEntity_o *v73; // x27
  __int64 methodPtr_low; // x10
  __int64 v75; // x8
  ServantVoiceEntity_o *v76; // x24
  __int64 v77; // x0
  System_String_o *v78; // x19
  System_String_o *v79; // x0
  System_String_o *v80; // x22
  System_Collections_Generic_List_object__o *VoiceList_39445208; // x0
  DataManager_c *v82; // x0
  __int64 v83; // x1
  const MethodInfo *v84; // x2
  int condType; // w8
  UserServantCollectionEntity_o *v86; // x8
  __int64 v87; // x24
  __int64 v88; // x22
  __int64 v89; // x0
  __int64 v90; // x1
  _BOOL4 IsEnable; // w0
  int32_t v92; // w22
  _BOOL8 IsQuestClear_37290360; // x0
  __int64 v94; // x1
  int v95; // w22
  int v96; // w24
  VoiceCondMaster_o *v97; // x0
  UserServantCollectionEntity_o *v98; // x8
  __int64 v99; // x24
  __int64 v100; // x22
  __int64 v101; // x0
  __int64 v102; // x1
  ServantVoiceCond_array *v103; // x14
  __int64 v104; // x11
  __int64 v105; // x24
  char v106; // w9
  char v107; // w10
  char v108; // w8
  ServantVoiceCond_o *v109; // x22
  unsigned int v110; // w11
  Il2CppObject *v111; // x0
  __int64 v112; // x1
  Il2CppObject *v113; // x0
  __int64 v114; // x1
  Il2CppObject *v115; // x0
  __int64 v116; // x1
  VoiceCondMaster_o *v117; // x0
  Il2CppObject *v118; // x0
  __int64 v119; // x1
  Il2CppObject *v120; // x0
  __int64 v121; // x1
  _BOOL8 v122; // x0
  __int64 v123; // x1
  ServantVoiceCond_array *v124; // x13
  __int64 v125; // x11
  __int64 v126; // x22
  char v127; // w8
  char v128; // w10
  char v129; // w9
  ServantVoiceCond_o *v130; // x24
  unsigned int v131; // w11
  Il2CppObject *v132; // x0
  __int64 v133; // x1
  Il2CppObject *v134; // x0
  __int64 v135; // x1
  Il2CppObject *v136; // x0
  __int64 v137; // x1
  int32_t value; // w24
  _BOOL8 v139; // x0
  __int64 v140; // x1
  __int64 v141; // x1
  __int64 v142; // x1
  UserServantCollectionEntity_o *v143; // x8
  __int64 v144; // x24
  __int64 v145; // x22
  __int64 v146; // x1
  int32_t condValue; // w24
  __int64 v148; // x1
  __int64 v149; // x1
  __int64 v150; // x1
  ServantVoiceCond_array *v151; // x12
  __int64 v152; // x10
  __int64 v153; // x22
  char v154; // w13
  char v155; // w9
  char v156; // w8
  ServantVoiceCond_o *v157; // x24
  unsigned int v158; // w10
  Il2CppObject *v159; // x0
  __int64 v160; // x1
  _BOOL8 v161; // x0
  __int64 v162; // x1
  Il2CppClass *v163; // x24
  bool v164; // w8
  NetworkManager_c *v165; // x0
  struct NetworkManager_StaticFields *static_fields; // x9
  char v167; // w24
  UserGameEntity_o *SelfUserGame; // x0
  int64_t v169; // x1
  BalanceConfig_c *v170; // x0
  System_Int32_array *ServantIdsBirthdayBeforeValentine; // x22
  System_Func_int__bool__o *v172; // x24
  int32_t v173; // w2
  int32_t v174; // w3
  BalanceConfig_c *v175; // x0
  __int64 v176; // x1
  const MethodInfo *v177; // x3
  int64_t VtReleaseAt; // x8
  int64_t createdAt; // x22
  bool isEnableBirthdayVoice; // w22
  Il2CppObject *Master_object; // x0
  __int64 v182; // x1
  Il2CppObject *SingleEntity; // x0
  const MethodInfo *v184; // x3
  _BOOL8 v185; // x0
  int v186; // w24
  __int64 v187; // x19
  __int64 v188; // x0
  __int64 v189; // x1
  int32_t v190; // w2
  int32_t v191; // w3
  int32_t v192; // w1
  int32_t v193; // w2
  int32_t v194; // w3
  int32_t v195; // w1
  int32_t v196; // w2
  int32_t v197; // w3
  int32_t v198; // w8
  int32_t v199; // w1
  int32_t v200; // w2
  int32_t v201; // w3
  __int64 v202; // x0
  __int64 v203; // x1
  int32_t v204; // w2
  int32_t v205; // w3
  struct System_Object_array *items; // x8
  _QWORD *v207; // x9
  __int64 size; // x10
  Il2CppClass **v209; // x0
  System_Collections_Generic_IEnumerator_T__c *v210; // x8
  __int64 v211; // x9
  int32_t *v212; // x10
  __int64 v213; // x0
  VoiceInfo_array *result; // x0
  const MethodInfo *isMateriala; // [xsp+0h] [xbp-120h]
  unsigned int v216; // [xsp+18h] [xbp-108h]
  int32_t v217; // [xsp+1Ch] [xbp-104h]
  ServantVoiceCond_array *v218; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v219; // [xsp+20h] [xbp-100h]
  ServantVoiceCond_array *v220; // [xsp+20h] [xbp-100h]
  int32_t voicePrefix; // [xsp+28h] [xbp-F8h]
  int32_t voicePrefixa; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixb; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixc; // [xsp+28h] [xbp-F8h]
  ServantVoiceCond_o **voicePrefixd; // [xsp+28h] [xbp-F8h]
  int64_t voicePrefixe; // [xsp+28h] [xbp-F8h]
  ServantStatusBattleListViewItem_o *v227; // [xsp+30h] [xbp-F0h]
  int v228; // [xsp+38h] [xbp-E8h]
  UserServantCollectionEntity_o **v229; // [xsp+40h] [xbp-E0h]
  int64_t Time; // [xsp+48h] [xbp-D8h]
  int32_t svtVoiceId; // [xsp+54h] [xbp-CCh]
  VoiceCondMaster_o *v232; // [xsp+58h] [xbp-C8h]
  char v233; // [xsp+64h] [xbp-BCh]
  System_Collections_Generic_List_object__o *v234; // [xsp+68h] [xbp-B8h]
  _DWORD v235[3]; // [xsp+7Ch] [xbp-A4h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-98h] BYREF
  __int64 closedType; // [xsp+90h] [xbp-90h] BYREF
  System_String_o *overwriteNameDefault; // [xsp+98h] [xbp-88h] BYREF
  System_String_o *overwriteName; // [xsp+A0h] [xbp-80h] BYREF
  bool isInvalidVoiceList; // [xsp+ACh] [xbp-74h] BYREF
  ServantVoiceCond_array *conds; // [xsp+B0h] [xbp-70h] BYREF
  int32_t v242; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v243; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v244; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v245; // 0:x0.16

  if ( (byte_49FF3F9 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B64870(&Method_BasicHelper_Any_int____75717888, v15);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v16);
    sub_1B64870(&CondType_TypeInfo, v17);
    sub_1B64870(&Method_DataManager_GetMasterData_EventMaster___, v18);
    sub_1B64870(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___, v19);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v20);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v21);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v22);
    sub_1B64870(&Method_DataManager_GetMasterData_VoiceCondMaster___, v23);
    sub_1B64870(&Method_DataManager_GetMaster_BeforeBirthDayMaster___, v24);
    sub_1B64870(&Method_DataManager_GetMaster_EventMaster___, v25);
    sub_1B64870(&DataManager_TypeInfo, v26);
    sub_1B64870(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v27);
    sub_1B64870(&Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__, v28);
    sub_1B64870(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v29);
    sub_1B64870(
      &Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__,
      v30);
    sub_1B64870(&System_Func_int__bool__TypeInfo, v31);
    sub_1B64870(&System_IDisposable_TypeInfo, v32);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v33);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v34);
    sub_1B64870(&Method_System_Collections_Generic_List_VoiceInfo__Add__, v35);
    sub_1B64870(&Method_System_Collections_Generic_List_VoiceInfo__ToArray__, v36);
    sub_1B64870(&Method_System_Collections_Generic_List_VoiceInfo___ctor__, v37);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v38);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v39);
    sub_1B64870(&System_Collections_Generic_List_VoiceInfo__TypeInfo, v40);
    sub_1B64870(&NetworkManager_TypeInfo, v41);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_1B64870(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v44);
    sub_1B64870(&Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__, v45);
    sub_1B64870(&VoiceMaster___c__DisplayClass2_0_TypeInfo, v46);
    sub_1B64870(&VoiceEntity_TypeInfo, v47);
    sub_1B64870(&VoiceInfo_TypeInfo, v48);
    sub_1B64870(&StringLiteral_16056/*"_"*/, v49);
    byte_49FF3F9 = 1;
  }
  v242 = 0;
  conds = 0LL;
  isInvalidVoiceList = 0;
  overwriteNameDefault = 0LL;
  overwriteName = 0LL;
  entity = 0LL;
  closedType = 0LL;
  *(_QWORD *)&v235[1] = 0LL;
  v50 = sub_1B64ABC(VoiceMaster___c__DisplayClass2_0_TypeInfo);
  VoiceMaster___c__DisplayClass2_0___ctor((VoiceMaster___c__DisplayClass2_0_o *)v50, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  v232 = (VoiceCondMaster_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_VoiceCondMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_260;
  v242 = ServantLimitAddMaster__getVoicePrefix((ServantLimitAddMaster_o *)Instance, changeSvtVoiceId, limitCount, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_260;
  v54 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v54 )
    goto LABEL_260;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                        (UserServantCollectionMaster_o *)v54,
                        Instance,
                        svtId,
                        v55);
  if ( !v50 )
    goto LABEL_260;
  *(_QWORD *)(v50 + 16) = Instance;
  v229 = (UserServantCollectionEntity_o **)(v50 + 16);
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v50 + 16), Instance, v56, v57);
  if ( !MasterData_object )
    goto LABEL_260;
  Entity_39461984 = ServantVoiceMaster__getEntity_39461984(
                      (ServantVoiceMaster_o *)MasterData_object,
                      changeSvtVoiceId,
                      limitCount,
                      0LL);
  Time = NetworkManager__getTime(0LL);
  v234 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v234,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_VoiceInfo___ctor__);
  if ( !byte_49F9E5C )
  {
    sub_1B64870(&NetworkManager_TypeInfo, v52);
    byte_49F9E5C = 1;
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
  v228 = *(unsigned __int8 *)(*(_QWORD *)(Instance + 184) + 136LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v60);
  v233 = 0;
  v62 = isCheckPlayCond;
  v227 = (ServantStatusBattleListViewItem_o *)(v50 + 24);
  LOBYTE(v235[0]) = isMaterial;
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
          goto LABEL_24;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_24:
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v69 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v68;
        v69 += 4;
        if ( !v68 )
          goto LABEL_31;
      }
      v70 = (__int64)&v67->vtable[*v69].method;
    }
    else
    {
LABEL_31:
      v70 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v71 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v70)(
            Enumerator,
            *(_QWORD *)(v70 + 8));
    v73 = (VoiceEntity_o *)v71;
    if ( !v71
      || (methodPtr_low = LOBYTE(VoiceEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v71 + 304LL) < (unsigned int)methodPtr_low)
      || *(VoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v71 + 200LL) + 8 * methodPtr_low - 8) != VoiceEntity_TypeInfo )
    {
      sub_1B64ACC(v71, v72);
    }
    if ( !Entity_39461984 )
      sub_1B64ACC(v71, v72);
    v75 = *(int *)(v71 + 28);
    if ( (unsigned int)v75 >= Entity_39461984->max_length )
      sub_1B64AD4(v71, v72);
    v76 = Entity_39461984->m_Items[v75];
    if ( v76 )
    {
      v77 = *(_QWORD *)(v71 + 16);
      if ( !v77 )
        sub_1B64ACC(0LL, v72);
      v78 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v77 + 360LL))(
                                 v77,
                                 *(_QWORD *)(*(_QWORD *)v77 + 368LL));
      v79 = System_Int32__ToString((int32_t)&v242, 0LL);
      v80 = System_String__Concat_61394836(v79, (System_String_o *)StringLiteral_16056/*"_"*/, v78, 0LL);
      VoiceList_39445208 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getVoiceList_39445208(
                                                                          v76,
                                                                          v73->fields.svtVoiceType,
                                                                          v80,
                                                                          disableCondTypeList,
                                                                          v62,
                                                                          0LL);
      if ( VoiceList_39445208 )
      {
        if ( VoiceList_39445208->fields._size >= 1 )
        {
          if ( System_Collections_Generic_List_object___get_Item(
                 VoiceList_39445208,
                 0,
                 (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__) )
          {
            ServantVoiceEntity__getOverwriteData(
              v76,
              v73->fields.svtVoiceType,
              v80,
              &conds,
              &isInvalidVoiceList,
              &overwriteName,
              &overwriteNameDefault,
              (int32_t *)&closedType + 1,
              v235[0],
              0LL);
            if ( !isInvalidVoiceList )
            {
              LODWORD(closedType) = v73->fields.closedType;
              condType = v73->fields.condType;
              if ( condType <= 54 )
              {
                if ( condType <= 21 )
                {
                  v95 = 1;
                  v96 = 1;
                  switch ( condType )
                  {
                    case 0:
                      v97 = v232;
                      if ( !v232 )
                        sub_1B64ACC(0LL, v83);
                      goto LABEL_229;
                    case 1:
                      v92 = v242;
                      condValue = v73->fields.condValue;
                      if ( !CondType_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                      IsQuestClear_37290360 = CondType__IsQuestClear_37290360(condValue, -1, 0, 0LL);
                      if ( !v232 )
                        sub_1B64ACC(IsQuestClear_37290360, v148);
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
                      if ( !*v229 )
                        sub_1B64ACC(v82, v83);
                      if ( !v232 )
                        sub_1B64ACC(0LL, v83);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   v232,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v78,
                                   v242,
                                   (*v229)->fields.maxLv >= v73->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_237;
                    case 7:
                      if ( !*v229 )
                        sub_1B64ACC(v82, v83);
                      if ( !v232 )
                        sub_1B64ACC(0LL, v83);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   v232,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v78,
                                   v242,
                                   (*v229)->fields.maxLimitCount >= v73->fields.condValue,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_237;
                    case 8:
                      if ( !*v229 )
                        sub_1B64ACC(0LL, v83);
                      v92 = v242;
                      IsQuestClear_37290360 = UserServantCollectionEntity__IsGet(*v229, 0LL);
                      if ( !v232 )
                        sub_1B64ACC(IsQuestClear_37290360, v142);
                      goto LABEL_158;
                    case 9:
                      v143 = *v229;
                      if ( !*v229 )
                        sub_1B64ACC(v82, v83);
                      v144 = *(_QWORD *)&v143->fields.friendshipRank.fields.currentCryptoKey;
                      v145 = *(_QWORD *)&v143->fields.friendshipRank.fields.fakeValue;
                      voicePrefixa = v242;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v245.fields.currentCryptoKey = v144;
                      *(_QWORD *)&v245.fields.fakeValue = v145;
                      v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v245, 0LL);
                      if ( !v232 )
                        sub_1B64ACC(v101, v146);
                      goto LABEL_70;
                    case 17:
                      if ( !*v229 )
                        sub_1B64ACC(0LL, v83);
                      v92 = v242;
                      IsQuestClear_37290360 = UserServantCollectionEntity__IsPlayed(*v229, v73->fields.condValue, 0LL);
                      if ( !v232 )
                        sub_1B64ACC(IsQuestClear_37290360, v149);
                      goto LABEL_158;
                    case 18:
                      if ( !*v229 )
                        sub_1B64ACC(0LL, v83);
                      v92 = v242;
                      IsQuestClear_37290360 = UserServantCollectionEntity__IsLimitCountMax(*v229, 0LL);
                      if ( !v232 )
                        sub_1B64ACC(IsQuestClear_37290360, v150);
                      goto LABEL_158;
                    case 19:
                      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
                      if ( !SelfUserGame )
                        sub_1B64ACC(0LL, v169);
                      if ( SelfUserGame->fields.birthDay < 1 )
                        goto LABEL_234;
                      voicePrefixe = SelfUserGame->fields.birthDay;
                      v170 = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v170 = BalanceConfig_TypeInfo;
                      }
                      ServantIdsBirthdayBeforeValentine = v170->static_fields->ServantIdsBirthdayBeforeValentine;
                      v172 = (System_Func_int__bool__o *)v227->klass;
                      if ( !v227->klass )
                      {
                        v172 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
                        System_Func_int__bool____ctor(
                          v172,
                          (Il2CppObject *)v50,
                          Method_VoiceMaster___c__DisplayClass2_0__getEnableInfo_b__0__,
                          0LL);
                        v227->klass = (ServantStatusBattleListViewItem_c *)v172;
                        sub_1B64814(v227, (int32_t)v172, v173, v174);
                      }
                      v175 = (BalanceConfig_c *)BasicHelper__Any_int__48392396(
                                                  ServantIdsBirthdayBeforeValentine,
                                                  (System_Func_T__bool__o *)v172,
                                                  (const MethodInfo_2E268CC *)Method_BasicHelper_Any_int____75717888);
                      if ( ((unsigned __int8)v175 & 1) != 0 )
                      {
                        v175 = BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v175 = BalanceConfig_TypeInfo;
                        }
                        VtReleaseAt = v175->static_fields->VtReleaseAt;
                        if ( VtReleaseAt >= 1 )
                        {
                          if ( !*v229 )
                            sub_1B64ACC(v175, v176);
                          createdAt = (*v229)->fields.createdAt;
                          if ( !v175->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v175);
                            VtReleaseAt = BalanceConfig_TypeInfo->static_fields->VtReleaseAt;
                          }
                          if ( createdAt < VtReleaseAt )
                            goto LABEL_214;
                        }
                      }
                      if ( !*v229 )
                        sub_1B64ACC(v175, v176);
                      isEnableBirthdayVoice = VoiceMaster__isEnableBirthdayVoice(
                                                (VoiceMaster_o *)v175,
                                                voicePrefixe,
                                                (*v229)->fields.createdAt,
                                                v177);
                      if ( !DataManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_BeforeBirthDayMaster___);
                      if ( !Master_object )
                        sub_1B64ACC(0LL, v182);
                      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       (const MethodInfo_30D63E8 *)Method_DataMasterBase_BeforeBirthDayMaster__BeforeBirthDayEntity__long__GetSingleEntity__);
                      if ( isEnableBirthdayVoice )
                      {
                        v185 = 1LL;
                      }
                      else
                      {
                        if ( !SingleEntity )
                          sub_1B64ACC(0LL, v169);
                        v169 = (int64_t)SingleEntity[1].klass;
                        if ( v169 < 1 )
                        {
LABEL_234:
                          v185 = 0LL;
                        }
                        else
                        {
                          if ( !*v229 )
                            sub_1B64ACC(SingleEntity, v169);
                          v185 = VoiceMaster__isEnableBirthdayVoice(
                                   (VoiceMaster_o *)SingleEntity,
                                   v169,
                                   (*v229)->fields.createdAt,
                                   v184);
                        }
                      }
                      if ( !v232 )
                        sub_1B64ACC(v185, v169);
                      IsEnable = VoiceCondMaster__IsEnable(
                                   v232,
                                   (int32_t *)&closedType,
                                   svtVoiceId,
                                   v78,
                                   v242,
                                   v185,
                                   svtId,
                                   &overwriteNameDefault,
                                   isMateriala);
                      goto LABEL_237;
                    case 20:
                      v151 = conds;
                      if ( conds && (v152 = *(_QWORD *)&conds->max_length) != 0 )
                      {
                        if ( (int)v152 >= 1 )
                        {
                          v153 = 0LL;
                          v154 = 0;
                          v155 = 0;
                          v156 = 0;
                          v220 = conds;
                          voicePrefixd = conds->m_Items;
                          do
                          {
                            if ( (unsigned int)v153 >= (unsigned int)v152 )
                              sub_1B64AD4(v82, v83);
                            v157 = voicePrefixd[v153];
                            if ( !v157 )
                              sub_1B64ACC(v82, v83);
                            v158 = v157->fields.condType;
                            if ( v158 <= 0x13 && ((1 << v158) & 0xCE000) != 0 && v157->fields.value >= 1 )
                            {
                              if ( !DataManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                              v159 = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventMaster___);
                              if ( !v159 )
                                sub_1B64ACC(0LL, v160);
                              v161 = DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v159,
                                       &entity,
                                       v157->fields.value,
                                       (const MethodInfo_30D61D4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
                              if ( !v161 )
                                goto LABEL_174;
                              if ( !entity )
                                sub_1B64ACC(v161, v162);
                              if ( Time >= (__int64)entity[5].monitor )
                              {
                                if ( !v232 )
                                  sub_1B64ACC(0LL, v162);
                                v163 = entity[6].klass;
                                v82 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         v232,
                                                         (int32_t *)&closedType,
                                                         svtVoiceId,
                                                         v78,
                                                         v242,
                                                         Time >= (__int64)v163,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                if ( (v228 != 0) | v233 & 1 )
                                {
                                  v151 = v220;
                                  v164 = 0;
                                }
                                else
                                {
                                  v216 = (unsigned int)v82;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  if ( !byte_49FF3FC )
                                  {
                                    sub_1B64870(&NetworkManager_TypeInfo, v83);
                                    byte_49FF3FC = 1;
                                  }
                                  v165 = NetworkManager_TypeInfo;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                    v165 = NetworkManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1B64ACC(v165, v83);
                                  static_fields = v165->static_fields;
                                  v151 = v220;
                                  v82 = (DataManager_c *)v216;
                                  v164 = static_fields->serverTime < (__int64)entity[6].klass;
                                }
                                v154 = (unsigned __int8)v82 & 1;
                                if ( v164 && Time >= (__int64)v163 )
                                {
                                  v167 = (unsigned __int8)v82 & 1;
                                  if ( !SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
                                    sub_1B64ACC(0LL, v83);
                                  if ( !byte_49FBCF8 )
                                  {
                                    sub_1B64870(&DataManager_TypeInfo, v83);
                                    byte_49FBCF8 = 1;
                                  }
                                  v82 = DataManager_TypeInfo;
                                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                    v82 = DataManager_TypeInfo;
                                  }
                                  if ( !entity )
                                    sub_1B64ACC(v82, v83);
                                  v151 = v220;
                                  v156 = 1;
                                  v154 = v167;
                                  v233 |= v82->static_fields->dateVersion < (__int64)entity[6].klass;
                                }
                                else
                                {
                                  v156 = 1;
                                }
                                v155 = 1;
                              }
                              else
                              {
LABEL_174:
                                if ( !v232 )
                                  sub_1B64ACC(0LL, v162);
                                v82 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                         v232,
                                                         (int32_t *)&closedType,
                                                         svtVoiceId,
                                                         v78,
                                                         v242,
                                                         0,
                                                         svtId,
                                                         &overwriteNameDefault,
                                                         isMateriala);
                                v151 = v220;
                                v155 = (unsigned __int8)v82 & 1;
                                v156 = 1;
                                v154 = (unsigned __int8)v82 & 1;
                              }
                            }
                            LODWORD(v152) = v151->max_length;
                            ++v153;
                          }
                          while ( (int)v153 < (int)v152 );
                          if ( (v156 & 1) != 0 )
                          {
                            v95 = v155 & 1;
                            v96 = v154 & 1;
                            goto LABEL_238;
                          }
                        }
                        v97 = v232;
                        if ( !v232 )
                          sub_1B64ACC(0LL, v83);
                      }
                      else
                      {
                        v97 = v232;
                        if ( !v232 )
                          sub_1B64ACC(0LL, v83);
                      }
                      return result;
                    case 21:
                      if ( !*v229 )
                        sub_1B64ACC(0LL, v83);
                      v92 = v242;
                      IsQuestClear_37290360 = UserServantCollectionEntity__IsFinded(*v229, 0LL);
                      if ( !v232 )
                        sub_1B64ACC(IsQuestClear_37290360, v141);
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
                    if ( !*v229 )
                      sub_1B64ACC(0LL, v83);
                    v92 = v242;
                    IsQuestClear_37290360 = UserServantCollectionEntity__IsCostumeGet(*v229, limitCount, 0LL);
                    if ( !v232 )
                      sub_1B64ACC(IsQuestClear_37290360, v94);
LABEL_158:
                    IsEnable = VoiceCondMaster__IsEnable(
                                 v232,
                                 (int32_t *)&closedType,
                                 svtVoiceId,
                                 v78,
                                 v92,
                                 IsQuestClear_37290360,
                                 svtId,
                                 &overwriteNameDefault,
                                 isMateriala);
                    goto LABEL_237;
                  }
LABEL_214:
                  v95 = 1;
LABEL_215:
                  v96 = 1;
                  goto LABEL_238;
                }
                v103 = conds;
                if ( !conds || (v104 = *(_QWORD *)&conds->max_length) == 0 )
                {
                  v97 = v232;
                  if ( !v232 )
                    sub_1B64ACC(0LL, v83);
                  goto LABEL_229;
                }
                if ( (int)v104 < 1 )
                  goto LABEL_218;
                v105 = 0LL;
                v106 = 0;
                v107 = 0;
                v108 = 0;
                v218 = conds;
                voicePrefixb = conds->m_Items;
                while ( 2 )
                {
                  if ( (unsigned int)v105 >= (unsigned int)v104 )
                    sub_1B64AD4(v82, v83);
                  v109 = voicePrefixb[v105];
                  if ( !v109 )
                    sub_1B64ACC(v82, v83);
                  v110 = v109->fields.condType;
                  if ( v110 <= 0x13 )
                  {
                    if ( ((1 << v110) & 0xCE000) != 0 )
                    {
                      if ( v109->fields.value >= 1 )
                      {
                        v111 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !v111 )
                          sub_1B64ACC(0LL, v112);
                        v113 = DataManager__GetMasterData_object_(
                                 (DataManager_o *)v111,
                                 (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMaster___);
                        if ( !v113 )
                          sub_1B64ACC(0LL, v114);
                        v115 = DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v113,
                                 v109->fields.value,
                                 (const MethodInfo_30D6180 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                        if ( !v115 || Time < (__int64)v115[5].monitor )
                        {
                          v117 = v232;
                          if ( !v232 )
                            sub_1B64ACC(0LL, v116);
                          goto LABEL_85;
                        }
                        if ( !v232 )
                          sub_1B64ACC(v115, v116);
                        v82 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                 v232,
                                                 (int32_t *)&closedType,
                                                 svtVoiceId,
                                                 v78,
                                                 v242,
                                                 Time >= (__int64)v115[6].klass,
                                                 svtId,
                                                 &overwriteNameDefault,
                                                 isMateriala);
LABEL_97:
                        v106 = (unsigned __int8)v82 & 1;
                        v108 = 1;
                        v107 = 1;
                        goto LABEL_98;
                      }
                    }
                    else if ( v110 == 16 && v109->fields.value >= 1 )
                    {
                      v118 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( !v118 )
                        sub_1B64ACC(0LL, v119);
                      v120 = DataManager__GetMasterData_object_(
                               (DataManager_o *)v118,
                               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
                      if ( !v120 )
                        sub_1B64ACC(0LL, v121);
                      v122 = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v120,
                               (Il2CppObject **)&v235[1],
                               v109->fields.value,
                               (const MethodInfo_30D61D4 *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__TryGetEntity__);
                      if ( v122 )
                      {
                        if ( !*(_QWORD *)&v235[1] )
                          sub_1B64ACC(v122, v123);
                        if ( Time >= *(_QWORD *)(*(_QWORD *)&v235[1] + 40LL) )
                        {
                          if ( !v232 )
                            sub_1B64ACC(0LL, v123);
                          v82 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                                   v232,
                                                   (int32_t *)&closedType,
                                                   svtVoiceId,
                                                   v78,
                                                   v242,
                                                   1,
                                                   svtId,
                                                   &overwriteNameDefault,
                                                   isMateriala);
                          goto LABEL_97;
                        }
                      }
                      v117 = v232;
                      if ( !v232 )
                        sub_1B64ACC(0LL, v123);
LABEL_85:
                      v82 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                               v117,
                                               (int32_t *)&closedType,
                                               svtVoiceId,
                                               v78,
                                               v242,
                                               0,
                                               svtId,
                                               &overwriteNameDefault,
                                               isMateriala);
                      v107 = (unsigned __int8)v82 & 1;
                      v108 = 1;
                      v106 = (unsigned __int8)v82 & 1;
LABEL_98:
                      v103 = v218;
                    }
                  }
                  LODWORD(v104) = v103->max_length;
                  if ( (int)++v105 >= (int)v104 )
                  {
                    if ( (v108 & 1) != 0 )
                    {
                      v95 = v107 & 1;
                      v96 = v106 & 1;
                      goto LABEL_238;
                    }
LABEL_218:
                    v97 = v232;
                    if ( !v232 )
                      sub_1B64ACC(0LL, v83);
LABEL_229:
                    v95 = 1;
                    v96 = VoiceCondMaster__IsEnable(
                            v97,
                            (int32_t *)&closedType,
                            svtVoiceId,
                            v78,
                            v242,
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
                  v98 = *v229;
                  if ( !*v229 )
                    sub_1B64ACC(v82, v83);
                  v99 = *(_QWORD *)&v98->fields.friendshipRank.fields.currentCryptoKey;
                  v100 = *(_QWORD *)&v98->fields.friendshipRank.fields.fakeValue;
                  voicePrefixa = v242;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v244.fields.currentCryptoKey = v99;
                  *(_QWORD *)&v244.fields.fakeValue = v100;
                  v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v244, 0LL);
                  if ( !v232 )
                    sub_1B64ACC(v101, v102);
LABEL_70:
                  IsEnable = VoiceCondMaster__IsEnable(
                               v232,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v78,
                               voicePrefixa,
                               (int)v101 >= v73->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_237;
                }
                if ( condType == 99 )
                {
                  v86 = *v229;
                  if ( !*v229 )
                    sub_1B64ACC(v82, v83);
                  v87 = *(_QWORD *)&v86->fields.friendshipRank.fields.currentCryptoKey;
                  v88 = *(_QWORD *)&v86->fields.friendshipRank.fields.fakeValue;
                  voicePrefix = v242;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v243.fields.currentCryptoKey = v87;
                  *(_QWORD *)&v243.fields.fakeValue = v88;
                  v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v243, 0LL);
                  if ( !v232 )
                    sub_1B64ACC(v89, v90);
                  IsEnable = VoiceCondMaster__IsEnable(
                               v232,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v78,
                               voicePrefix,
                               (int)v89 <= v73->fields.condValue,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
LABEL_237:
                  v96 = IsEnable;
                  v95 = 1;
                  goto LABEL_238;
                }
                goto LABEL_214;
              }
              if ( condType != 56 )
              {
                if ( condType == 92 )
                {
                  if ( !v232 )
                    sub_1B64ACC(0LL, v83);
                  IsEnable = VoiceCondMaster__IsEnable(
                               v232,
                               (int32_t *)&closedType,
                               svtVoiceId,
                               v78,
                               v242,
                               0,
                               svtId,
                               &overwriteNameDefault,
                               isMateriala);
                  goto LABEL_237;
                }
                goto LABEL_214;
              }
              v124 = conds;
              if ( !conds || (v125 = *(_QWORD *)&conds->max_length) == 0 )
              {
                v97 = v232;
                if ( !v232 )
                  sub_1B64ACC(0LL, v83);
                goto LABEL_229;
              }
              if ( (int)v125 < 1 )
                goto LABEL_130;
              v126 = 0LL;
              v127 = 0;
              v128 = 0;
              v129 = 0;
              v219 = conds;
              voicePrefixc = conds->m_Items;
              do
              {
                if ( (unsigned int)v126 >= (unsigned int)v125 )
                  sub_1B64AD4(v82, v83);
                v130 = voicePrefixc[v126];
                if ( !v130 )
                  sub_1B64ACC(v82, v83);
                v131 = v130->fields.condType;
                if ( v131 <= 0x13 && ((1 << v131) & 0xCE000) != 0 && v130->fields.value >= 1 )
                {
                  v132 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v132 )
                    sub_1B64ACC(0LL, v133);
                  v134 = DataManager__GetMasterData_object_(
                           (DataManager_o *)v132,
                           (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMaster___);
                  if ( !v134 )
                    sub_1B64ACC(0LL, v135);
                  v136 = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v134,
                           v130->fields.value,
                           (const MethodInfo_30D6180 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( v136 && Time >= (__int64)v136[5].monitor )
                  {
                    value = v130->fields.value;
                    v217 = v242;
                    if ( !CondType_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    v139 = CondType__IsServantGetBeforeEventEnd(svtId, value, 0LL);
                    if ( !v232 )
                      sub_1B64ACC(v139, v140);
                    v82 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             v232,
                                             (int32_t *)&closedType,
                                             svtVoiceId,
                                             v78,
                                             v217,
                                             v139,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v127 = (unsigned __int8)v82 & 1;
                    v129 = 1;
                    v128 = 1;
                  }
                  else
                  {
                    if ( !v232 )
                      sub_1B64ACC(0LL, v137);
                    v82 = (DataManager_c *)VoiceCondMaster__IsEnable(
                                             v232,
                                             (int32_t *)&closedType,
                                             svtVoiceId,
                                             v78,
                                             v242,
                                             0,
                                             svtId,
                                             &overwriteNameDefault,
                                             isMateriala);
                    v128 = (unsigned __int8)v82 & 1;
                    v129 = 1;
                    v127 = (unsigned __int8)v82 & 1;
                  }
                  v124 = v219;
                }
                LODWORD(v125) = v124->max_length;
                ++v126;
              }
              while ( (int)v126 < (int)v125 );
              if ( (v129 & 1) == 0 )
              {
LABEL_130:
                v97 = v232;
                if ( !v232 )
                  sub_1B64ACC(0LL, v83);
                goto LABEL_229;
              }
              v95 = v128 & 1;
              v96 = v127 & 1;
LABEL_238:
              v186 = v96 & VoiceEntity__IsCondEnable(v73, svtId, v84);
              if ( (v95 & (v186 | ((_DWORD)closedType != 2)) & 1) != 0 )
              {
                v187 = sub_1B64ABC(VoiceInfo_TypeInfo);
                VoiceInfo___ctor((VoiceInfo_o *)v187, 0LL);
                if ( !v187 )
                  sub_1B64ACC(v188, v189);
                *(_QWORD *)(v187 + 16) = v73;
                sub_1B64814((ServantStatusBattleListViewItem_o *)(v187 + 16), (int32_t)v73, v190, v191);
                *(_BYTE *)(v187 + 24) = v186 & 1;
                v192 = (int)overwriteName;
                *(_QWORD *)(v187 + 32) = overwriteName;
                sub_1B64814((ServantStatusBattleListViewItem_o *)(v187 + 32), v192, v193, v194);
                v195 = (int)overwriteNameDefault;
                *(_QWORD *)(v187 + 40) = overwriteNameDefault;
                sub_1B64814((ServantStatusBattleListViewItem_o *)(v187 + 40), v195, v196, v197);
                v198 = v242;
                *(_DWORD *)(v187 + 48) = HIDWORD(closedType);
                *(_DWORD *)(v187 + 52) = v198;
                v199 = (int)conds;
                *(_QWORD *)(v187 + 56) = conds;
                sub_1B64814((ServantStatusBattleListViewItem_o *)(v187 + 56), v199, v200, v201);
                if ( !v234 )
                  sub_1B64ACC(v202, v203);
                items = v234->fields._items;
                v207 = Method_System_Collections_Generic_List_VoiceInfo__Add__;
                ++v234->fields._version;
                if ( !items )
                  sub_1B64ACC(v202, v203);
                size = v234->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v234,
                    (Il2CppObject *)v187,
                    *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v207[4] + 192LL) + 112LL));
                }
                else
                {
                  v209 = &items->obj.klass + size;
                  v234->fields._size = size + 1;
                  v209[4] = (Il2CppClass *)v187;
                  sub_1B64814((ServantStatusBattleListViewItem_o *)(v209 + 4), v187, v204, v205);
                }
              }
            }
          }
        }
      }
    }
  }
  v210 = Enumerator->klass;
  v211 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v212 = &v210->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v212 - 1) != System_IDisposable_TypeInfo )
    {
      --v211;
      v212 += 4;
      if ( !v211 )
        goto LABEL_249;
    }
    v213 = (__int64)&v210->vtable[*v212].method;
  }
  else
  {
LABEL_249:
    v213 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v213)(
               Enumerator,
               *(_QWORD *)(v213 + 8));
  if ( (v233 & 1) != 0 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_260;
    NetworkManager__GoToTitleDialog((NetworkManager_o *)Instance, 0LL);
  }
  if ( !v234 )
LABEL_260:
    sub_1B64ACC(Instance, v52);
  return (VoiceInfo_array *)System_Collections_Generic_List_object___ToArray(
                              v234,
                              (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_VoiceInfo__ToArray__);
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

  if ( (byte_49FF3FB & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1B64870(&System_IDisposable_TypeInfo, v6);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B64870(&VoiceEntity_TypeInfo, v9);
    sub_1B64870(&StringLiteral_16056/*"_"*/, v10);
    byte_49FF3FB = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0LL) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64ACC(0LL, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v14);
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
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v23 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
      sub_1B64ACC(v24, v25);
    }
    v28 = v24[2];
    if ( !v28 )
      sub_1B64ACC(0LL, v25);
    v29 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 360LL))(
                               v28,
                               *(_QWORD *)(*(_QWORD *)v28 + 368LL));
    v30 = System_String__Concat_61383576((System_String_o *)StringLiteral_16056/*"_"*/, v29, 0LL);
    if ( !labelName )
      sub_1B64ACC(v30, v30);
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
    v34 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  const MethodInfo *v41; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v43; // x1
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0

  if ( (byte_49FF3FA & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_1B64870(&System_IDisposable_TypeInfo, v10);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B64870(&NetworkManager_TypeInfo, v13);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B64870(&VoiceEntity_TypeInfo, v15);
    sub_1B64870(&StringLiteral_16056/*"_"*/, v16);
    byte_49FF3FA = 1;
  }
  if ( System_String__IsNullOrEmpty(labelName, 0LL) )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64ACC(0LL, v17);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v20);
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
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v29 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
      sub_1B64ACC(v30, v31);
    }
    v34 = v30[2];
    if ( !v34 )
      sub_1B64ACC(0LL, v31);
    v35 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v34 + 360LL))(
                               v34,
                               *(_QWORD *)(*(_QWORD *)v34 + 368LL));
    v36 = System_String__Concat_61383576((System_String_o *)StringLiteral_16056/*"_"*/, v35, 0LL);
    if ( !labelName )
      sub_1B64ACC(v36, v36);
  }
  while ( !System_String__EndsWith(labelName, v36, 0LL) );
  if ( v32[12] != 17 && v32[7] != 1 )
  {
LABEL_35:
    v18 = 0;
    goto LABEL_36;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v38);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    sub_1B64ACC(UserId, UserId);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       UserId,
                       svtId,
                       v41);
  v43 = (unsigned int)v32[14];
  if ( isUpdate )
  {
    if ( !EntityDefinitely )
      sub_1B64ACC(0LL, v43);
    if ( !UserServantCollectionEntity__SetPlayed(EntityDefinitely, v43, 0LL) )
      goto LABEL_35;
  }
  else
  {
    if ( !EntityDefinitely )
      sub_1B64ACC(0LL, v43);
    if ( UserServantCollectionEntity__IsPlayed(EntityDefinitely, v43, 0LL) )
      goto LABEL_35;
  }
  v18 = v32[14];
LABEL_36:
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
        goto LABEL_40;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_40:
    v47 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  int64_t Time_38166012; // x21
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

  if ( (byte_49FF3F8 & 1) == 0 )
  {
    sub_1B64870(&System_DateTime_TypeInfo, userBirthDay);
    sub_1B64870(&NetworkManager_TypeInfo, v6);
    byte_49FF3F8 = 1;
  }
  v17.fields._dateData = 0LL;
  dateTime.fields._dateData = 0LL;
  if ( userBirthDay < 1 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_38082464(createDay, 0LL).fields._dateData;
  v19 = NetworkManager__getDateTime_38077776(userBirthDay, 0LL).fields._dateData;
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
  System_DateTime___ctor_62061448(v24, Year, Month, Day, 0LL);
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
  System_DateTime___ctor_62061448(v28, v10 + 1, v11, v12, 0LL);
  v17.fields._dateData = v16;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  ServerTime = NetworkManager__getServerTime(0LL);
  v29.fields._dateData = dateTime.fields._dateData;
  Time_38166012 = NetworkManager__getTime_38166012(v29, 0LL);
  v30.fields._dateData = v17.fields._dateData;
  return (Time_38166012 <= ServerTime && Time_38166012 + 86400 >= createDay) | (NetworkManager__getTime_38166012(
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
  if ( (byte_49FF3FD & 1) == 0 )
  {
    this = (VoiceMaster___c__DisplayClass2_0_o *)sub_1B64870(
                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                   *(_QWORD *)&id);
    byte_49FF3FD = 1;
  }
  userStvCollectionEntity = v4->fields.userStvCollectionEntity;
  if ( !userStvCollectionEntity )
    sub_1B64ACC(this, *(_QWORD *)&id);
  v7 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userStvCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v9, 0LL) == id;
}