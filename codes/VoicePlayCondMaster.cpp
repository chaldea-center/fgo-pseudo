void __fastcall VoicePlayCondMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FF761 & 1) == 0 )
  {
    sub_B16FFC(&VoicePlayCondMaster_TypeInfo, v1);
    byte_40FF761 = 1;
  }
  VoicePlayCondMaster_TypeInfo->static_fields->VOICE_PREFIX_NONE = -1;
}


void __fastcall VoicePlayCondMaster___ctor(VoicePlayCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FF75D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__, method);
    byte_40FF75D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    220,
    (const MethodInfo_266F73C *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoicePlayCondMaster__IsNotPrefix(
        VoicePlayCondMaster_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v13; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v16; // x24
  __int64 v17; // x10
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v20; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v21; // x0
  int v23; // w19
  VoicePlayCondMaster_c *v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_40FF760 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9);
    sub_B16FFC(&VoicePlayCondEntity_TypeInfo, v10);
    sub_B16FFC(&VoicePlayCondMaster_TypeInfo, v11);
    byte_40FF760 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B170D4();
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 1;
    v14 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v14 )
      goto LABEL_20;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v14,
             v13,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v16 = Item;
      v17 = *(&VoicePlayCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17
        && (VoicePlayCondEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] == VoicePlayCondEntity_TypeInfo )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v27.fields.currentCryptoKey = klass;
        *(_QWORD *)&v27.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v27, 0LL) == svtId )
        {
          v20 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v16[2].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v20, v21, 0LL)
            && LODWORD(v16[3].klass) == idx )
          {
            break;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_20;
  }
  v23 = (int)v16[2].klass;
  v24 = VoicePlayCondMaster_TypeInfo;
  if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
    v24 = VoicePlayCondMaster_TypeInfo;
  }
  return v23 == v24->static_fields->VOICE_PREFIX_NONE;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoicePlayCondMaster__isVoiceCond(
        VoicePlayCondMaster_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        int32_t cond,
        const MethodInfo *method)
{
  System_String_o *v5; // x22
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Char_array *v14; // x0
  __int64 v15; // x2
  System_Char_array *v16; // x1
  System_String_array *v17; // x0
  System_String_array *v18; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v20; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v21; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v23; // x24
  __int64 v24; // x10
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v27; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  v5 = voiceId;
  if ( (byte_40FF75F & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v11);
    sub_B16FFC(&VoicePlayCondEntity_TypeInfo, v12);
    sub_B16FFC(&VoicePlayCondMaster_TypeInfo, v13);
    byte_40FF75F = 1;
  }
  if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
  }
  v14 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, voiceId);
  if ( !v14 )
    goto LABEL_30;
  v16 = v14;
  if ( !v14->max_length )
    goto LABEL_33;
  v14->m_Items[2] = 95;
  if ( !v5 || (v17 = System_String__Split(v5, v14, 0LL)) == 0LL )
LABEL_30:
    sub_B170D4();
  v18 = v17;
  if ( (int)v17->max_length < 2 )
    goto LABEL_13;
  v14 = (System_Char_array *)System_Int32__Parse(v17->m_Items[0], 0LL);
  if ( v18->max_length <= 1 )
  {
LABEL_33:
    sub_B17100(v14, v16, v15);
    sub_B170A0();
  }
  v5 = v18->m_Items[1];
LABEL_13:
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_30;
  v20 = 0;
  while ( 1 )
  {
    if ( v20 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    v21 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v21 )
      goto LABEL_30;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v21,
             v20,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v23 = Item;
      v24 = *(&VoicePlayCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v24
        && (VoicePlayCondEntity_c *)Item->klass->_2.typeHierarchy[v24 - 1] == VoicePlayCondEntity_TypeInfo )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v31.fields.currentCryptoKey = klass;
        *(_QWORD *)&v31.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v31, 0LL) == svtId )
        {
          v27 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v23[2].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v5, 0LL);
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v27, v28, 0LL)
            && LODWORD(v23[3].monitor) == cond )
          {
            return 1;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v20;
    if ( !list )
      goto LABEL_30;
  }
}


bool __fastcall VoicePlayCondMaster__isVoicePlay(
        VoicePlayCondMaster_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList,
        int64_t userSvtId,
        int32_t genderType,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x7
  VoicePlayCondEntity_o *condEntity; // [xsp+8h] [xbp-8h] BYREF

  condEntity = 0LL;
  return VoicePlayCondMaster__isVoicePlay_34404920(
           this,
           svtId,
           voiceId,
           &condEntity,
           disableCondTypeList,
           userSvtId,
           genderType,
           v7);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoicePlayCondMaster__isVoicePlay_34404920(
        VoicePlayCondMaster_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        VoicePlayCondEntity_o **condEntity,
        System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList,
        int64_t userSvtId,
        int32_t genderType,
        const MethodInfo *method)
{
  System_String_o *v9; // x25
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  VoicePlayCondMaster_c *v18; // x0
  int32_t VOICE_PREFIX_NONE; // w26
  System_Char_array *v20; // x0
  __int64 v21; // x2
  System_Char_array *v22; // x1
  System_String_array *v23; // x0
  const MethodInfo *v24; // x4
  System_String_array *v25; // x20
  bool IsOpen; // w0
  int condGroup; // w22
  int32_t v28; // w27
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v29; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v30; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v31; // x20
  unsigned __int64 v32; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v33; // x11
  __int64 v34; // x0
  VoicePlayCondEntity_o *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  VoicePlayCondEntity_o *v42; // x28
  __int64 v43; // x10
  const MethodInfo *v44; // x1
  int32_t condType; // w20
  bool v46; // w8
  int32_t v47; // w28
  int32_t targetId; // w21
  int32_t CondValue; // w0
  int32_t v50; // w20
  int32_t v51; // w28
  bool v52; // w21
  const MethodInfo *v53; // x4
  VoicePlayCondMaster_c *v54; // x0
  System_String_o *PK; // x28
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v58; // x20
  unsigned __int64 v59; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  v9 = voiceId;
  if ( (byte_40FF75E & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&CondType_TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_CondType_Kind__Contains__, v14);
    sub_B16FFC(&VoicePlayCondEntity_TypeInfo, v15);
    sub_B16FFC(&VoicePlayCondMaster_TypeInfo, v16);
    byte_40FF75E = 1;
  }
  *condEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)condEntity,
    0LL,
    (System_String_array **)voiceId,
    (System_String_array **)condEntity,
    (System_Boolean_array **)disableCondTypeList,
    (System_Int32_array **)userSvtId,
    *(System_Int32_array **)&genderType,
    (System_Int32_array *)method);
  v18 = VoicePlayCondMaster_TypeInfo;
  if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
    v18 = VoicePlayCondMaster_TypeInfo;
  }
  VOICE_PREFIX_NONE = v18->static_fields->VOICE_PREFIX_NONE;
  v20 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v17);
  if ( !v20 )
    goto LABEL_64;
  v22 = v20;
  if ( !v20->max_length )
    goto LABEL_65;
  v20->m_Items[2] = 95;
  if ( !v9 || (v23 = System_String__Split(v9, v20, 0LL)) == 0LL )
LABEL_64:
    sub_B170D4();
  v25 = v23;
  if ( (int)v23->max_length >= 2 )
  {
    v20 = (System_Char_array *)System_Int32__Parse(v23->m_Items[0], 0LL);
    if ( v25->max_length > 1 )
    {
      v9 = v25->m_Items[1];
      VOICE_PREFIX_NONE = (int)v20;
      goto LABEL_13;
    }
LABEL_65:
    sub_B17100(v20, v22, v21);
    sub_B170A0();
  }
LABEL_13:
  IsOpen = 1;
  condGroup = 1;
  v28 = 1;
  while ( 1 )
  {
    v52 = IsOpen;
    if ( VoicePlayCondMaster__IsNotPrefix(this, svtId, v9, v28, v24) )
    {
      v54 = VoicePlayCondMaster_TypeInfo;
      if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
        v54 = VoicePlayCondMaster_TypeInfo;
      }
      VOICE_PREFIX_NONE = v54->static_fields->VOICE_PREFIX_NONE;
    }
    PK = VoicePlayCondEntity__CreatePK(svtId, VOICE_PREFIX_NONE, v9, v28, v53);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_64;
    klass = lookup->klass;
    v58 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v59 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v59;
        p_offset += 4;
        if ( v59 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_59;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_59:
      p_method = sub_AAFEF8(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
            v58,
            PK,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      return v52;
    v29 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !v29 )
      goto LABEL_64;
    v30 = v29->klass;
    v31 = v29;
    if ( *(_WORD *)&v29->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      v33 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v30->_1.interfaceOffsets->offset;
      while ( *(v33 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v32;
        v33 += 2;
        if ( v32 >= *(unsigned __int16 *)&v29->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v34 = (__int64)&v30->vtable[*(_DWORD *)v33 + 2].method;
    }
    else
    {
LABEL_19:
      v34 = sub_AAFEF8(v29, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    v35 = (VoicePlayCondEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v34)(
                                     v31,
                                     PK,
                                     *(_QWORD *)(v34 + 8));
    if ( !v35
      || (v42 = v35,
          v43 = *(&VoicePlayCondEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v35->klass->_2.bitflags2 + 1) < (unsigned int)v43)
      || (VoicePlayCondEntity_c *)v35->klass->_2.typeHierarchy[v43 - 1] != VoicePlayCondEntity_TypeInfo )
    {
      *condEntity = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)condEntity, 0LL, v36, v37, v38, v39, v40, v41);
      sub_B170D4();
    }
    ++v28;
    *condEntity = v35;
    sub_B16F98((BattleServantConfConponent_o *)condEntity, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    if ( condGroup == v42->fields.condGroup )
    {
      IsOpen = 0;
      if ( v52 )
        goto LABEL_28;
    }
    else
    {
      condGroup = v42->fields.condGroup;
      if ( v52 )
        return v52;
LABEL_28:
      condType = v42->fields.condType;
      if ( !disableCondTypeList
        || (v46 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                    (System_Collections_Generic_List_VoiceCondType_Type__o *)disableCondTypeList,
                    condType,
                    (const MethodInfo_2F1391C *)Method_System_Collections_Generic_List_CondType_Kind__Contains__),
            IsOpen = 1,
            !v46) )
      {
        if ( (userSvtId & 0x8000000000000000LL) != 0 )
          goto LABEL_39;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsLimitCountCondType(condType, 0LL) )
        {
LABEL_39:
          targetId = v42->fields.targetId;
          CondValue = VoicePlayCondEntity__getCondValue(v42, v44);
          if ( genderType >= 1 && condType == 81 )
          {
            if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              v50 = CondValue;
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              CondValue = v50;
            }
            CondType__IsOpen(81, targetId, CondValue, 0, 0LL);
            IsOpen = v42->fields.targetId == genderType;
          }
          else
          {
            if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              v51 = CondValue;
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              CondValue = v51;
            }
            IsOpen = CondType__IsOpen(condType, targetId, CondValue, 0, 0LL);
          }
        }
        else
        {
          v47 = VoicePlayCondEntity__getCondValue(v42, v44);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpenForUsrSvt(condType, v47, userSvtId, 0LL);
        }
      }
    }
  }
}