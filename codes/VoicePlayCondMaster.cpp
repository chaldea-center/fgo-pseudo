void __fastcall VoicePlayCondMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421A2DE & 1) == 0 )
  {
    sub_B0D8A4(&VoicePlayCondMaster_TypeInfo, v1);
    byte_421A2DE = 1;
  }
  VoicePlayCondMaster_TypeInfo->static_fields->VOICE_PREFIX_NONE = -1;
}


void __fastcall VoicePlayCondMaster___ctor(VoicePlayCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421A2DA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__, method);
    byte_421A2DA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    220,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall VoicePlayCondMaster__GetWeight(
        VoicePlayCondMaster_o *this,
        VoicePlayCondEntity_o *condEnt,
        int32_t defVal,
        const MethodInfo *method)
{
  if ( condEnt )
    return VoicePlayCondEntity__GetWeight(condEnt, defVal, *(const MethodInfo **)&defVal);
  else
    return defVal;
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
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v15; // x24
  __int64 v16; // x10
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v19; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v20; // x0
  int v22; // w19
  VoicePlayCondMaster_c *v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_421A2DD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9);
    sub_B0D8A4(&VoicePlayCondEntity_TypeInfo, v10);
    sub_B0D8A4(&VoicePlayCondMaster_TypeInfo, v11);
    byte_421A2DD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B0D97C(list);
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 1;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v13,
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v15 = Item;
      v16 = *(&VoicePlayCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v16
        && (VoicePlayCondEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] == VoicePlayCondEntity_TypeInfo )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v26.fields.currentCryptoKey = klass;
        *(_QWORD *)&v26.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v26, 0LL) == svtId )
        {
          v19 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v15[2].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v19, v20, 0LL)
            && LODWORD(v15[3].klass) == idx )
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
  v22 = (int)v15[2].klass;
  v23 = VoicePlayCondMaster_TypeInfo;
  if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
    v23 = VoicePlayCondMaster_TypeInfo;
  }
  return v22 == v23->static_fields->VOICE_PREFIX_NONE;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoicePlayCondMaster__isVoiceCond(
        VoicePlayCondMaster_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        int32_t cond,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 list; // x0
  __int64 v15; // x23
  int32_t v16; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v18; // x24
  __int64 v19; // x10
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v22; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v23; // x0
  __int64 v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_421A2DC & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v11);
    sub_B0D8A4(&VoicePlayCondEntity_TypeInfo, v12);
    sub_B0D8A4(&VoicePlayCondMaster_TypeInfo, v13);
    byte_421A2DC = 1;
  }
  if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
  }
  list = sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !list )
    goto LABEL_30;
  if ( !*(_DWORD *)(list + 24) )
    goto LABEL_33;
  *(_WORD *)(list + 32) = 95;
  if ( !voiceId || (list = (__int64)System_String__Split(voiceId, (System_Char_array *)list, 0LL)) == 0 )
LABEL_30:
    sub_B0D97C(list);
  v15 = list;
  if ( *(int *)(list + 24) < 2 )
    goto LABEL_13;
  list = System_Int32__Parse(*(System_String_o **)(list + 32), 0LL);
  if ( *(_DWORD *)(v15 + 24) <= 1u )
  {
LABEL_33:
    v25 = sub_B0D9A8(list);
    sub_B0D948(v25, 0LL);
  }
  voiceId = *(System_String_o **)(v15 + 40);
LABEL_13:
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_30;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (__int64)this->fields.list;
    if ( !list )
      goto LABEL_30;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v16,
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v18 = Item;
      v19 = *(&VoicePlayCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19
        && (VoicePlayCondEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] == VoicePlayCondEntity_TypeInfo )
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v27, 0LL) == svtId )
        {
          v22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v18[2].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v22, v23, 0LL)
            && LODWORD(v18[3].monitor) == cond )
          {
            return 1;
          }
        }
      }
    }
    list = (__int64)this->fields.list;
    ++v16;
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
  return VoicePlayCondMaster__isVoicePlay_34380364(
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
bool __fastcall VoicePlayCondMaster__isVoicePlay_34380364(
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
  VoicePlayCondMaster_c *v17; // x0
  int32_t VOICE_PREFIX_NONE; // w26
  __int64 lookup; // x0
  const MethodInfo *v20; // x4
  __int64 v21; // x20
  bool IsOpen; // w0
  int condGroup; // w22
  int32_t v24; // w27
  __int64 v25; // x8
  __int64 v26; // x20
  unsigned __int64 v27; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v28; // x11
  __int64 v29; // x0
  VoicePlayCondEntity_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  VoicePlayCondEntity_o *v37; // x28
  __int64 v38; // x10
  const MethodInfo *v39; // x1
  int32_t condType; // w20
  bool v41; // w8
  int32_t v42; // w28
  int32_t targetId; // w21
  int32_t CondValue; // w0
  int32_t v45; // w20
  int32_t v46; // w28
  bool v47; // w21
  const MethodInfo *v48; // x4
  VoicePlayCondMaster_c *v49; // x0
  System_String_o *PK; // x28
  __int64 v51; // x8
  __int64 v52; // x20
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  __int64 v57; // x0
  __int64 v58; // x0

  v9 = voiceId;
  if ( (byte_421A2DB & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&CondType_TypeInfo, v12);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CondType_Kind__Contains__, v14);
    sub_B0D8A4(&VoicePlayCondEntity_TypeInfo, v15);
    sub_B0D8A4(&VoicePlayCondMaster_TypeInfo, v16);
    byte_421A2DB = 1;
  }
  *condEntity = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)condEntity,
    0LL,
    (System_String_array **)voiceId,
    (System_String_array **)condEntity,
    (System_Boolean_array **)disableCondTypeList,
    (System_Int32_array **)userSvtId,
    *(System_Int32_array **)&genderType,
    (System_Int32_array *)method);
  v17 = VoicePlayCondMaster_TypeInfo;
  if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
    v17 = VoicePlayCondMaster_TypeInfo;
  }
  VOICE_PREFIX_NONE = v17->static_fields->VOICE_PREFIX_NONE;
  lookup = sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !lookup )
    goto LABEL_64;
  if ( !*(_DWORD *)(lookup + 24) )
    goto LABEL_65;
  *(_WORD *)(lookup + 32) = 95;
  if ( !v9 || (lookup = (__int64)System_String__Split(v9, (System_Char_array *)lookup, 0LL)) == 0 )
LABEL_64:
    sub_B0D97C(lookup);
  v21 = lookup;
  if ( *(int *)(lookup + 24) >= 2 )
  {
    lookup = System_Int32__Parse(*(System_String_o **)(lookup + 32), 0LL);
    if ( *(_DWORD *)(v21 + 24) > 1u )
    {
      v9 = *(System_String_o **)(v21 + 40);
      VOICE_PREFIX_NONE = lookup;
      goto LABEL_13;
    }
LABEL_65:
    v58 = sub_B0D9A8(lookup);
    sub_B0D948(v58, 0LL);
  }
LABEL_13:
  IsOpen = 1;
  condGroup = 1;
  v24 = 1;
  while ( 1 )
  {
    v47 = IsOpen;
    if ( VoicePlayCondMaster__IsNotPrefix(this, svtId, v9, v24, v20) )
    {
      v49 = VoicePlayCondMaster_TypeInfo;
      if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
        v49 = VoicePlayCondMaster_TypeInfo;
      }
      VOICE_PREFIX_NONE = v49->static_fields->VOICE_PREFIX_NONE;
    }
    PK = VoicePlayCondEntity__CreatePK(svtId, VOICE_PREFIX_NONE, v9, v24, v48);
    lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_64;
    v51 = *(_QWORD *)lookup;
    v52 = lookup;
    if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
    {
      v53 = 0LL;
      v54 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v54 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v53;
        v54 += 4;
        if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
          goto LABEL_59;
      }
      v55 = v51 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_59:
      v55 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v55)(v52, PK, *(_QWORD *)(v55 + 8)) & 1) == 0 )
      return v47;
    lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_64;
    v25 = *(_QWORD *)lookup;
    v26 = lookup;
    if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
    {
      v27 = 0LL;
      v28 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *(v28 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v27;
        v28 += 2;
        if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
          goto LABEL_19;
      }
      v29 = v25 + 16LL * (*(_DWORD *)v28 + 2) + 312;
    }
    else
    {
LABEL_19:
      v29 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    v30 = (VoicePlayCondEntity_o *)(*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v29)(
                                     v26,
                                     PK,
                                     *(_QWORD *)(v29 + 8));
    if ( !v30
      || (v37 = v30,
          v38 = *(&VoicePlayCondEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v38)
      || (VoicePlayCondEntity_c *)v30->klass->_2.typeHierarchy[v38 - 1] != VoicePlayCondEntity_TypeInfo )
    {
      *condEntity = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)condEntity, 0LL, v31, v32, v33, v34, v35, v36);
      sub_B0D97C(v57);
    }
    ++v24;
    *condEntity = v30;
    sub_B0D840((BattleServantConfConponent_o *)condEntity, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
    if ( condGroup == v37->fields.condGroup )
    {
      IsOpen = 0;
      if ( v47 )
        goto LABEL_28;
    }
    else
    {
      condGroup = v37->fields.condGroup;
      if ( v47 )
        return v47;
LABEL_28:
      condType = v37->fields.condType;
      if ( !disableCondTypeList
        || (v41 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                    (System_Collections_Generic_List_VoiceCondType_Type__o *)disableCondTypeList,
                    condType,
                    (const MethodInfo_2FB332C *)Method_System_Collections_Generic_List_CondType_Kind__Contains__),
            IsOpen = 1,
            !v41) )
      {
        if ( (userSvtId & 0x8000000000000000LL) != 0 )
          goto LABEL_39;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsLimitCountCondType(condType, 0LL) )
        {
LABEL_39:
          targetId = v37->fields.targetId;
          CondValue = VoicePlayCondEntity__getCondValue(v37, v39);
          if ( genderType >= 1 && condType == 81 )
          {
            if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              v45 = CondValue;
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              CondValue = v45;
            }
            CondType__IsOpen(81, targetId, CondValue, 0, 0LL);
            IsOpen = v37->fields.targetId == genderType;
          }
          else
          {
            if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              v46 = CondValue;
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              CondValue = v46;
            }
            IsOpen = CondType__IsOpen(condType, targetId, CondValue, 0, 0LL);
          }
        }
        else
        {
          v42 = VoicePlayCondEntity__getCondValue(v37, v39);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpenForUsrSvt(condType, v42, userSvtId, 0LL);
        }
      }
    }
  }
}