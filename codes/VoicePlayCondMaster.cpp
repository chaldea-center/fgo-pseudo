void __fastcall VoicePlayCondMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418D2EF & 1) == 0 )
  {
    sub_B2C35C(&VoicePlayCondMaster_TypeInfo, v1);
    byte_418D2EF = 1;
  }
  VoicePlayCondMaster_TypeInfo->static_fields->VOICE_PREFIX_NONE = -1;
}


void __fastcall VoicePlayCondMaster___ctor(VoicePlayCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418D2EB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__, method);
    byte_418D2EB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    220,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
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

  if ( (byte_418D2EE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9);
    sub_B2C35C(&VoicePlayCondEntity_TypeInfo, v10);
    sub_B2C35C(&VoicePlayCondMaster_TypeInfo, v11);
    byte_418D2EE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B2C434(list, *(_QWORD *)&svtId);
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 1;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v13,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v26, 0LL) == svtId )
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
  __int64 v15; // x1
  __int64 v16; // x23
  int32_t v17; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v19; // x24
  __int64 v20; // x10
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v23; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v24; // x0
  __int64 v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_418D2ED & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v11);
    sub_B2C35C(&VoicePlayCondEntity_TypeInfo, v12);
    sub_B2C35C(&VoicePlayCondMaster_TypeInfo, v13);
    byte_418D2ED = 1;
  }
  if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
  }
  list = sub_B2C374(char___TypeInfo, 1LL);
  if ( !list )
    goto LABEL_30;
  v15 = list;
  if ( !*(_DWORD *)(list + 24) )
    goto LABEL_33;
  *(_WORD *)(list + 32) = 95;
  if ( !voiceId || (list = (__int64)System_String__Split(voiceId, (System_Char_array *)list, 0LL)) == 0 )
LABEL_30:
    sub_B2C434(list, v15);
  v16 = list;
  if ( *(int *)(list + 24) < 2 )
    goto LABEL_13;
  list = System_Int32__Parse(*(System_String_o **)(list + 32), 0LL);
  if ( *(_DWORD *)(v16 + 24) <= 1u )
  {
LABEL_33:
    v26 = sub_B2C460(list);
    sub_B2C400(v26, 0LL);
  }
  voiceId = *(System_String_o **)(v16 + 40);
LABEL_13:
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_30;
  v17 = 0;
  while ( 1 )
  {
    if ( v17 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (__int64)this->fields.list;
    if ( !list )
      goto LABEL_30;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v17,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v19 = Item;
      v20 = *(&VoicePlayCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20
        && (VoicePlayCondEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] == VoicePlayCondEntity_TypeInfo )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v28.fields.currentCryptoKey = klass;
        *(_QWORD *)&v28.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v28, 0LL) == svtId )
        {
          v23 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v19[2].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v23, v24, 0LL)
            && LODWORD(v19[3].monitor) == cond )
          {
            return 1;
          }
        }
      }
    }
    list = (__int64)this->fields.list;
    ++v17;
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
  return VoicePlayCondMaster__isVoicePlay_34396788(
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
bool __fastcall VoicePlayCondMaster__isVoicePlay_34396788(
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
  __int64 v20; // x1
  const MethodInfo *v21; // x4
  __int64 v22; // x20
  bool IsOpen; // w0
  int condGroup; // w22
  int32_t v25; // w27
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x20
  unsigned __int64 v29; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v30; // x11
  __int64 v31; // x0
  VoicePlayCondEntity_o *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  VoicePlayCondEntity_o *v39; // x28
  __int64 v40; // x10
  const MethodInfo *v41; // x1
  int32_t condType; // w20
  bool v43; // w8
  int32_t v44; // w28
  int32_t targetId; // w21
  int32_t CondValue; // w0
  int32_t v47; // w20
  int32_t v48; // w28
  bool v49; // w21
  const MethodInfo *v50; // x4
  VoicePlayCondMaster_c *v51; // x0
  System_String_o *PK; // x28
  __int64 v53; // x3
  __int64 v54; // x8
  __int64 v55; // x20
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x0

  v9 = voiceId;
  if ( (byte_418D2EC & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&CondType_TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_CondType_Kind__Contains__, v14);
    sub_B2C35C(&VoicePlayCondEntity_TypeInfo, v15);
    sub_B2C35C(&VoicePlayCondMaster_TypeInfo, v16);
    byte_418D2EC = 1;
  }
  *condEntity = 0LL;
  sub_B2C2F8(
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
  lookup = sub_B2C374(char___TypeInfo, 1LL);
  if ( !lookup )
    goto LABEL_64;
  v20 = lookup;
  if ( !*(_DWORD *)(lookup + 24) )
    goto LABEL_65;
  *(_WORD *)(lookup + 32) = 95;
  if ( !v9 || (lookup = (__int64)System_String__Split(v9, (System_Char_array *)lookup, 0LL)) == 0 )
LABEL_64:
    sub_B2C434(lookup, v20);
  v22 = lookup;
  if ( *(int *)(lookup + 24) >= 2 )
  {
    lookup = System_Int32__Parse(*(System_String_o **)(lookup + 32), 0LL);
    if ( *(_DWORD *)(v22 + 24) > 1u )
    {
      v9 = *(System_String_o **)(v22 + 40);
      VOICE_PREFIX_NONE = lookup;
      goto LABEL_13;
    }
LABEL_65:
    v62 = sub_B2C460(lookup);
    sub_B2C400(v62, 0LL);
  }
LABEL_13:
  IsOpen = 1;
  condGroup = 1;
  v25 = 1;
  while ( 1 )
  {
    v49 = IsOpen;
    if ( VoicePlayCondMaster__IsNotPrefix(this, svtId, v9, v25, v21) )
    {
      v51 = VoicePlayCondMaster_TypeInfo;
      if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
        v51 = VoicePlayCondMaster_TypeInfo;
      }
      VOICE_PREFIX_NONE = v51->static_fields->VOICE_PREFIX_NONE;
    }
    PK = VoicePlayCondEntity__CreatePK(svtId, VOICE_PREFIX_NONE, v9, v25, v50);
    lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_64;
    v54 = *(_QWORD *)lookup;
    v55 = lookup;
    if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
    {
      v56 = 0LL;
      v57 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v57 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v56;
        v57 += 4;
        if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
          goto LABEL_59;
      }
      v58 = v54 + 16LL * *v57 + 312;
    }
    else
    {
LABEL_59:
      v58 = sub_AC5258(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              0LL,
              v53);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v58)(v55, PK, *(_QWORD *)(v58 + 8)) & 1) == 0 )
      return v49;
    lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_64;
    v27 = *(_QWORD *)lookup;
    v28 = lookup;
    if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
    {
      v29 = 0LL;
      v30 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *(v30 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v29;
        v30 += 2;
        if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
          goto LABEL_19;
      }
      v31 = v27 + 16LL * (*(_DWORD *)v30 + 2) + 312;
    }
    else
    {
LABEL_19:
      v31 = sub_AC5258(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              2LL,
              v26);
    }
    v32 = (VoicePlayCondEntity_o *)(*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v31)(
                                     v28,
                                     PK,
                                     *(_QWORD *)(v31 + 8));
    if ( !v32
      || (v39 = v32,
          v40 = *(&VoicePlayCondEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v32->klass->_2.bitflags2 + 1) < (unsigned int)v40)
      || (VoicePlayCondEntity_c *)v32->klass->_2.typeHierarchy[v40 - 1] != VoicePlayCondEntity_TypeInfo )
    {
      *condEntity = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)condEntity, 0LL, v33, v34, v35, v36, v37, v38);
      sub_B2C434(v60, v61);
    }
    ++v25;
    *condEntity = v32;
    sub_B2C2F8((BattleServantConfConponent_o *)condEntity, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
    if ( condGroup == v39->fields.condGroup )
    {
      IsOpen = 0;
      if ( v49 )
        goto LABEL_28;
    }
    else
    {
      condGroup = v39->fields.condGroup;
      if ( v49 )
        return v49;
LABEL_28:
      condType = v39->fields.condType;
      if ( !disableCondTypeList
        || (v43 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                    (System_Collections_Generic_List_VoiceCondType_Type__o *)disableCondTypeList,
                    condType,
                    (const MethodInfo_2F6A424 *)Method_System_Collections_Generic_List_CondType_Kind__Contains__),
            IsOpen = 1,
            !v43) )
      {
        if ( (userSvtId & 0x8000000000000000LL) != 0 )
          goto LABEL_39;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsLimitCountCondType(condType, 0LL) )
        {
LABEL_39:
          targetId = v39->fields.targetId;
          CondValue = VoicePlayCondEntity__getCondValue(v39, v41);
          if ( genderType >= 1 && condType == 81 )
          {
            if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              v47 = CondValue;
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              CondValue = v47;
            }
            CondType__IsOpen(81, targetId, CondValue, 0, 0LL);
            IsOpen = v39->fields.targetId == genderType;
          }
          else
          {
            if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              v48 = CondValue;
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              CondValue = v48;
            }
            IsOpen = CondType__IsOpen(condType, targetId, CondValue, 0, 0LL);
          }
        }
        else
        {
          v44 = VoicePlayCondEntity__getCondValue(v39, v41);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpenForUsrSvt(condType, v44, userSvtId, 0LL);
        }
      }
    }
  }
}