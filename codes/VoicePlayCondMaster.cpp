void __fastcall VoicePlayCondMaster___cctor(const MethodInfo *method)
{
  if ( (byte_42AE014 & 1) == 0 )
  {
    sub_B52984(&VoicePlayCondMaster_TypeInfo);
    byte_42AE014 = 1;
  }
  VoicePlayCondMaster_TypeInfo->static_fields->VOICE_PREFIX_NONE = -1;
}


void __fastcall VoicePlayCondMaster___ctor(VoicePlayCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AE010 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
    byte_42AE010 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    221,
    (const MethodInfo_23E268C *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
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

  if ( (byte_42AE013 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B52984(&VoicePlayCondEntity_TypeInfo);
    sub_B52984(&VoicePlayCondMaster_TypeInfo);
    byte_42AE013 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B52A5C(list, *(_QWORD *)&svtId);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 1;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v8,
             (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v21, 0LL) == svtId )
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

  if ( (byte_42AE012 & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B52984(&VoicePlayCondEntity_TypeInfo);
    sub_B52984(&VoicePlayCondMaster_TypeInfo);
    byte_42AE012 = 1;
  }
  if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
  }
  list = sub_B5299C(char___TypeInfo, 1LL);
  if ( !list )
    goto LABEL_30;
  v9 = list;
  if ( !*(_DWORD *)(list + 24) )
    goto LABEL_33;
  *(_WORD *)(list + 32) = 95;
  if ( !voiceId || (list = (__int64)System_String__Split(voiceId, (System_Char_array *)list, 0LL)) == 0 )
LABEL_30:
    sub_B52A5C(list, v9);
  v10 = list;
  if ( *(int *)(list + 24) < 2 )
    goto LABEL_13;
  list = System_Int32__Parse(*(System_String_o **)(list + 32), 0LL);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
  {
LABEL_33:
    v20 = sub_B52A88(list);
    sub_B52A28(v20, 0LL);
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
                  (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (__int64)this->fields.list;
    if ( !list )
      goto LABEL_30;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v11,
             (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v22, 0LL) == svtId )
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
  const MethodInfo *v7; // x7
  VoicePlayCondEntity_o *condEntity; // [xsp+8h] [xbp-8h] BYREF

  condEntity = 0LL;
  return VoicePlayCondMaster__isVoicePlay_21293516(
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
bool __fastcall VoicePlayCondMaster__isVoicePlay_21293516(
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
  VoicePlayCondMaster_c *v12; // x0
  int32_t VOICE_PREFIX_NONE; // w26
  __int64 lookup; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x4
  __int64 v17; // x20
  bool IsOpen; // w0
  int condGroup; // w22
  int32_t v20; // w27
  __int64 v21; // x3
  __int64 v22; // x8
  __int64 v23; // x20
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
  VoicePlayCondEntity_o *v34; // x28
  __int64 v35; // x10
  int32_t condType; // w20
  bool v37; // w8
  int32_t v38; // w28
  int32_t targetId; // w21
  int32_t CondValue; // w0
  int32_t v41; // w20
  int32_t v42; // w28
  bool v43; // w21
  VoicePlayCondMaster_c *v44; // x0
  System_String_o *PK; // x28
  __int64 v46; // x3
  __int64 v47; // x8
  __int64 v48; // x20
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x0

  v9 = voiceId;
  if ( (byte_42AE011 & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_CondType_Kind__Contains__);
    sub_B52984(&VoicePlayCondEntity_TypeInfo);
    sub_B52984(&VoicePlayCondMaster_TypeInfo);
    byte_42AE011 = 1;
  }
  *condEntity = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)condEntity,
    0LL,
    (System_String_array **)voiceId,
    (System_String_array **)condEntity,
    (System_Boolean_array **)disableCondTypeList,
    (System_Int32_array **)userSvtId,
    *(System_Int32_array **)&genderType,
    (System_Int32_array *)method);
  v12 = VoicePlayCondMaster_TypeInfo;
  if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
    v12 = VoicePlayCondMaster_TypeInfo;
  }
  VOICE_PREFIX_NONE = v12->static_fields->VOICE_PREFIX_NONE;
  lookup = sub_B5299C(char___TypeInfo, 1LL);
  if ( !lookup )
    goto LABEL_64;
  v15 = lookup;
  if ( !*(_DWORD *)(lookup + 24) )
    goto LABEL_65;
  *(_WORD *)(lookup + 32) = 95;
  if ( !v9 || (lookup = (__int64)System_String__Split(v9, (System_Char_array *)lookup, 0LL)) == 0 )
LABEL_64:
    sub_B52A5C(lookup, v15);
  v17 = lookup;
  if ( *(int *)(lookup + 24) >= 2 )
  {
    lookup = System_Int32__Parse(*(System_String_o **)(lookup + 32), 0LL);
    if ( *(_DWORD *)(v17 + 24) > 1u )
    {
      v9 = *(System_String_o **)(v17 + 40);
      VOICE_PREFIX_NONE = lookup;
      goto LABEL_13;
    }
LABEL_65:
    v55 = sub_B52A88(lookup);
    sub_B52A28(v55, 0LL);
  }
LABEL_13:
  IsOpen = 1;
  condGroup = 1;
  v20 = 1;
  while ( 1 )
  {
    v43 = IsOpen;
    if ( VoicePlayCondMaster__IsNotPrefix(this, svtId, v9, v20, v16) )
    {
      v44 = VoicePlayCondMaster_TypeInfo;
      if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
        v44 = VoicePlayCondMaster_TypeInfo;
      }
      VOICE_PREFIX_NONE = v44->static_fields->VOICE_PREFIX_NONE;
    }
    PK = VoicePlayCondEntity__CreatePK(svtId, VOICE_PREFIX_NONE, v9, v20, 0LL);
    lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_64;
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
          goto LABEL_59;
      }
      v51 = v47 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_59:
      v51 = sub_AEB880(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              0LL,
              v46);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v51)(v48, PK, *(_QWORD *)(v51 + 8)) & 1) == 0 )
      return v43;
    lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_64;
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
      v26 = sub_AEB880(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              2LL,
              v21);
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
      sub_B52920((BattleServantConfConponent_o *)condEntity, 0LL, v28, v29, v30, v31, v32, v33);
      sub_B52A5C(v53, v54);
    }
    ++v20;
    *condEntity = v27;
    sub_B52920((BattleServantConfConponent_o *)condEntity, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    if ( condGroup == v34->fields.condGroup )
    {
      IsOpen = 0;
      if ( v43 )
        goto LABEL_28;
    }
    else
    {
      condGroup = v34->fields.condGroup;
      if ( v43 )
        return v43;
LABEL_28:
      condType = v34->fields.condType;
      if ( !disableCondTypeList
        || (v37 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                    (System_Collections_Generic_List_VoiceCondType_Type__o *)disableCondTypeList,
                    condType,
                    (const MethodInfo_305A3DC *)Method_System_Collections_Generic_List_CondType_Kind__Contains__),
            IsOpen = 1,
            !v37) )
      {
        if ( (userSvtId & 0x8000000000000000LL) != 0 )
          goto LABEL_39;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsLimitCountCondType(condType, 0LL) )
        {
LABEL_39:
          targetId = v34->fields.targetId;
          CondValue = VoicePlayCondEntity__getCondValue(v34, 0LL);
          if ( genderType >= 1 && condType == 81 )
          {
            if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              v41 = CondValue;
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              CondValue = v41;
            }
            CondType__IsOpen(81, targetId, CondValue, 0, 0LL);
            IsOpen = v34->fields.targetId == genderType;
          }
          else
          {
            if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              v42 = CondValue;
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              CondValue = v42;
            }
            IsOpen = CondType__IsOpen(condType, targetId, CondValue, 0, 0LL);
          }
        }
        else
        {
          v38 = VoicePlayCondEntity__getCondValue(v34, 0LL);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpenForUsrSvt(condType, v38, userSvtId, 0LL);
        }
      }
    }
  }
}