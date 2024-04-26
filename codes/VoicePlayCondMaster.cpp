void __fastcall VoicePlayCondMaster___cctor(const MethodInfo *method)
{
  if ( (byte_434F9A7 & 1) == 0 )
  {
    sub_B70694(&VoicePlayCondMaster_TypeInfo);
    byte_434F9A7 = 1;
  }
  VoicePlayCondMaster_TypeInfo->static_fields->VOICE_PREFIX_NONE = -1;
}


void __fastcall VoicePlayCondMaster___ctor(VoicePlayCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_434F9A2 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
    byte_434F9A2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    221,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
}


System_Collections_Generic_List_VoicePlayCondEntity__o *__fastcall VoicePlayCondMaster__GetTargetGroupIdEntityList(
        VoicePlayCondMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 v11; // x10

  if ( (byte_434F9A6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_VoicePlayCondEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo);
    sub_B70694(&VoicePlayCondEntity_TypeInfo);
    byte_434F9A6 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v10,
                                                                                           (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = list;
      v11 = *(&VoicePlayCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (VoicePlayCondEntity_c *)list->klass->_2.typeHierarchy[v11 - 1] != VoicePlayCondEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list[1].fields._syncRoot) == groupId )
      {
        if ( !v5 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_VoicePlayCondEntity__Add__);
      }
      if ( ++v10 >= v9 )
        return (System_Collections_Generic_List_VoicePlayCondEntity__o *)v5;
    }
LABEL_15:
    sub_B7076C(list, v6);
  }
  return (System_Collections_Generic_List_VoicePlayCondEntity__o *)v5;
}


int32_t __fastcall VoicePlayCondMaster__GetWeight(
        VoicePlayCondMaster_o *this,
        VoicePlayCondEntity_o *condEnt,
        int32_t defVal,
        const MethodInfo *method)
{
  if ( condEnt )
    return VoicePlayCondEntity__GetWeight(condEnt, defVal, 0LL);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v10; // x24
  __int64 v11; // x10
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v14; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v15; // x0
  int v17; // w19
  VoicePlayCondMaster_c *v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_434F9A5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B70694(&VoicePlayCondEntity_TypeInfo);
    sub_B70694(&VoicePlayCondMaster_TypeInfo);
    byte_434F9A5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B7076C(list, *(_QWORD *)&svtId);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 1;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v8,
             (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v10 = Item;
      v11 = *(&VoicePlayCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (VoicePlayCondEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == VoicePlayCondEntity_TypeInfo )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v21.fields.currentCryptoKey = klass;
        *(_QWORD *)&v21.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v21, 0LL) == svtId )
        {
          v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v10[2].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v14, v15, 0LL)
            && LODWORD(v10[3].klass) == idx )
          {
            break;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_20;
  }
  v17 = (int)v10[2].klass;
  v18 = VoicePlayCondMaster_TypeInfo;
  if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
    v18 = VoicePlayCondMaster_TypeInfo;
  }
  return v17 == v18->static_fields->VOICE_PREFIX_NONE;
}


bool __fastcall VoicePlayCondMaster__isVoiceCond(
        VoicePlayCondMaster_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        int32_t cond,
        const MethodInfo *method)
{
  __int64 list; // x0
  __int64 v9; // x1
  __int64 v10; // x23
  int32_t v11; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v13; // x24
  __int64 v14; // x10
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v17; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v18; // x0
  __int64 v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_434F9A4 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B70694(&VoicePlayCondEntity_TypeInfo);
    sub_B70694(&VoicePlayCondMaster_TypeInfo);
    byte_434F9A4 = 1;
  }
  if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
  }
  list = sub_B706AC(char___TypeInfo, 1LL);
  if ( !list )
    goto LABEL_30;
  v9 = list;
  if ( !*(_DWORD *)(list + 24) )
    goto LABEL_33;
  *(_WORD *)(list + 32) = 95;
  if ( !voiceId || (list = (__int64)System_String__Split(voiceId, (System_Char_array *)list, 0LL)) == 0 )
LABEL_30:
    sub_B7076C(list, v9);
  v10 = list;
  if ( *(int *)(list + 24) < 2 )
    goto LABEL_13;
  list = System_Int32__Parse(*(System_String_o **)(list + 32), 0LL);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
  {
LABEL_33:
    v20 = sub_B70798(list);
    sub_B70738(v20, 0LL);
  }
  voiceId = *(System_String_o **)(v10 + 40);
LABEL_13:
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_30;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (__int64)this->fields.list;
    if ( !list )
      goto LABEL_30;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v11,
             (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v13 = Item;
      v14 = *(&VoicePlayCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (VoicePlayCondEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == VoicePlayCondEntity_TypeInfo )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v22.fields.currentCryptoKey = klass;
        *(_QWORD *)&v22.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v22, 0LL) == svtId )
        {
          v17 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v13[2].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v17, v18, 0LL)
            && LODWORD(v13[3].monitor) == cond )
          {
            return 1;
          }
        }
      }
    }
    list = (__int64)this->fields.list;
    ++v11;
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
  const MethodInfo *v8; // [xsp+0h] [xbp-10h]
  VoicePlayCondEntity_o *condEntity; // [xsp+8h] [xbp-8h] BYREF

  condEntity = 0LL;
  return VoicePlayCondMaster__isVoicePlay_21124464(
           this,
           svtId,
           voiceId,
           &condEntity,
           disableCondTypeList,
           userSvtId,
           genderType,
           0LL,
           v8);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoicePlayCondMaster__isVoicePlay_21124464(
        VoicePlayCondMaster_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        VoicePlayCondEntity_o **condEntity,
        System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList,
        int64_t userSvtId,
        int32_t genderType,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  System_String_o *v10; // x26
  VoicePlayCondMaster_c *v13; // x0
  int32_t VOICE_PREFIX_NONE; // w27
  __int64 lookup; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x4
  __int64 v18; // x20
  bool IsStartingMember; // w0
  int condGroup; // w22
  int32_t v21; // w28
  __int64 v22; // x8
  __int64 v23; // x21
  unsigned __int64 v24; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v25; // x11
  __int64 v26; // x0
  VoicePlayCondEntity_o *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  VoicePlayCondEntity_o *v34; // x20
  __int64 v35; // x10
  int32_t condType; // w21
  bool v37; // w8
  int32_t v38; // w20
  int32_t targetId; // w23
  int32_t CondValue; // w21
  bool v41; // w0
  int32_t v42; // w23
  int32_t v43; // w20
  bool v44; // w23
  VoicePlayCondMaster_c *v45; // x0
  System_String_o *PK; // x20
  __int64 v47; // x8
  __int64 v48; // x21
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x0
  bool v56; // [xsp+Ch] [xbp-74h]

  v10 = voiceId;
  if ( (byte_434F9A3 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_CondType_Kind__Contains__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&VoicePlayCondEntity_TypeInfo);
    sub_B70694(&VoicePlayCondMaster_TypeInfo);
    byte_434F9A3 = 1;
  }
  *condEntity = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)condEntity,
    0LL,
    (System_String_array **)voiceId,
    (System_String_array **)condEntity,
    (System_Boolean_array **)disableCondTypeList,
    (System_Int32_array **)userSvtId,
    *(System_Int32_array **)&genderType,
    (System_Int32_array *)battleData);
  v13 = VoicePlayCondMaster_TypeInfo;
  if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
    v13 = VoicePlayCondMaster_TypeInfo;
  }
  VOICE_PREFIX_NONE = v13->static_fields->VOICE_PREFIX_NONE;
  lookup = sub_B706AC(char___TypeInfo, 1LL);
  if ( !lookup )
    goto LABEL_73;
  v16 = lookup;
  if ( !*(_DWORD *)(lookup + 24) )
    goto LABEL_74;
  *(_WORD *)(lookup + 32) = 95;
  if ( !v10 || (lookup = (__int64)System_String__Split(v10, (System_Char_array *)lookup, 0LL)) == 0 )
LABEL_73:
    sub_B7076C(lookup, v16);
  v18 = lookup;
  if ( *(int *)(lookup + 24) >= 2 )
  {
    lookup = System_Int32__Parse(*(System_String_o **)(lookup + 32), 0LL);
    if ( *(_DWORD *)(v18 + 24) > 1u )
    {
      v10 = *(System_String_o **)(v18 + 40);
      VOICE_PREFIX_NONE = lookup;
      goto LABEL_13;
    }
LABEL_74:
    v55 = sub_B70798(lookup);
    sub_B70738(v55, 0LL);
  }
LABEL_13:
  IsStartingMember = 1;
  condGroup = 1;
  v21 = 1;
  while ( 1 )
  {
    v44 = IsStartingMember;
    if ( VoicePlayCondMaster__IsNotPrefix(this, svtId, v10, v21, v17) )
    {
      v45 = VoicePlayCondMaster_TypeInfo;
      if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
        v45 = VoicePlayCondMaster_TypeInfo;
      }
      VOICE_PREFIX_NONE = v45->static_fields->VOICE_PREFIX_NONE;
    }
    PK = VoicePlayCondEntity__CreatePK(svtId, VOICE_PREFIX_NONE, v10, v21, 0LL);
    lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_73;
    v47 = *(_QWORD *)lookup;
    v48 = lookup;
    if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
    {
      v49 = 0LL;
      v50 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v50 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
          goto LABEL_68;
      }
      v51 = v47 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_68:
      v51 = sub_B08590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v51)(v48, PK, *(_QWORD *)(v51 + 8)) & 1) == 0 )
      return v44;
    lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_73;
    v22 = *(_QWORD *)lookup;
    v23 = lookup;
    if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
    {
      v24 = 0LL;
      v25 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *(v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 2;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
          goto LABEL_19;
      }
      v26 = v22 + 16LL * (*(_DWORD *)v25 + 2) + 312;
    }
    else
    {
LABEL_19:
      v26 = sub_B08590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    v27 = (VoicePlayCondEntity_o *)(*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v26)(
                                     v23,
                                     PK,
                                     *(_QWORD *)(v26 + 8));
    if ( !v27
      || (v34 = v27,
          v35 = *(&VoicePlayCondEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v35)
      || (VoicePlayCondEntity_c *)v27->klass->_2.typeHierarchy[v35 - 1] != VoicePlayCondEntity_TypeInfo )
    {
      *condEntity = 0LL;
      sub_B70630((BattleServantConfConponent_o *)condEntity, 0LL, v28, v29, v30, v31, v32, v33);
      sub_B7076C(v53, v54);
    }
    ++v21;
    *condEntity = v27;
    sub_B70630((BattleServantConfConponent_o *)condEntity, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    if ( condGroup == v34->fields.condGroup )
    {
      IsStartingMember = 0;
      if ( v44 )
        goto LABEL_28;
    }
    else
    {
      condGroup = v34->fields.condGroup;
      if ( v44 )
        return v44;
LABEL_28:
      condType = v34->fields.condType;
      if ( !disableCondTypeList
        || (v37 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                    (System_Collections_Generic_List_VoiceCondType_Type__o *)disableCondTypeList,
                    condType,
                    (const MethodInfo_30B9604 *)Method_System_Collections_Generic_List_CondType_Kind__Contains__),
            IsStartingMember = 1,
            !v37) )
      {
        if ( (userSvtId & 0x8000000000000000LL) != 0 )
          goto LABEL_40;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsLimitCountCondType(condType, 0LL) )
        {
LABEL_40:
          if ( genderType >= 1 && condType == 81 )
          {
            targetId = v34->fields.targetId;
            CondValue = VoicePlayCondEntity__getCondValue(v34, 0LL);
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            CondType__IsOpen(81, targetId, CondValue, 0, 0LL);
            IsStartingMember = v34->fields.targetId == genderType;
          }
          else
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v41 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)battleData, 0LL, 0LL);
            v42 = v34->fields.targetId;
            v56 = v41;
            v43 = VoicePlayCondEntity__getCondValue(v34, 0LL);
            if ( condType == 216 && v56 )
            {
              if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !CondType_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              }
              IsStartingMember = CondType__IsStartingMember(v42, v43, battleData, 0LL);
            }
            else
            {
              if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !CondType_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              }
              IsStartingMember = CondType__IsOpen(condType, v42, v43, 0, 0LL);
            }
          }
        }
        else
        {
          v38 = VoicePlayCondEntity__getCondValue(v34, 0LL);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsStartingMember = CondType__IsOpenForUsrSvt(condType, v38, userSvtId, 0LL);
        }
      }
    }
  }
}