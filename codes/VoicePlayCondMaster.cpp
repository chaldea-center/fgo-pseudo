void __fastcall VoicePlayCondMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E68A0 & 1) == 0 )
  {
    sub_B5D5C4(&VoicePlayCondMaster_TypeInfo, v1, v2, v3);
    byte_42E68A0 = 1;
  }
  VoicePlayCondMaster_TypeInfo->static_fields->VOICE_PREFIX_NONE = -1;
}


void __fastcall VoicePlayCondMaster___ctor(VoicePlayCondMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E689C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E689C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    221,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v23; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v25; // x24
  __int64 v26; // x10
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v29; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v30; // x0
  int v32; // w19
  VoicePlayCondMaster_c *v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_42E689F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      svtId,
      (_DWORD)voiceId,
      *(_QWORD *)&idx);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&VoicePlayCondEntity_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&VoicePlayCondMaster_TypeInfo, v19, v20, v21);
    byte_42E689F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B5D69C(list, *(_QWORD *)&svtId);
  v23 = 0;
  while ( 1 )
  {
    if ( v23 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 1;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v23,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v25 = Item;
      v26 = *(&VoicePlayCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v26
        && (VoicePlayCondEntity_c *)Item->klass->_2.typeHierarchy[v26 - 1] == VoicePlayCondEntity_TypeInfo )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v36.fields.currentCryptoKey = klass;
        *(_QWORD *)&v36.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v36, 0LL) == svtId )
        {
          v29 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v25[2].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v29, v30, 0LL)
            && LODWORD(v25[3].klass) == idx )
          {
            break;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v23;
    if ( !list )
      goto LABEL_20;
  }
  v32 = (int)v25[2].klass;
  v33 = VoicePlayCondMaster_TypeInfo;
  if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
    v33 = VoicePlayCondMaster_TypeInfo;
  }
  return v32 == v33->static_fields->VOICE_PREFIX_NONE;
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 list; // x0
  __int64 v27; // x1
  __int64 v28; // x23
  int32_t v29; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v31; // x24
  __int64 v32; // x10
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v35; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v36; // x0
  __int64 v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  v5 = voiceId;
  if ( (byte_42E689E & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, svtId, (_DWORD)voiceId, *(_QWORD *)&cond);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&VoicePlayCondEntity_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&VoicePlayCondMaster_TypeInfo, v23, v24, v25);
    byte_42E689E = 1;
  }
  if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
  }
  list = sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !list )
    goto LABEL_30;
  v27 = list;
  if ( !*(_DWORD *)(list + 24) )
    goto LABEL_33;
  *(_WORD *)(list + 32) = 95;
  if ( !v5 || (list = (__int64)System_String__Split(v5, (System_Char_array *)list, 0LL)) == 0 )
LABEL_30:
    sub_B5D69C(list, v27);
  v28 = list;
  if ( *(int *)(list + 24) < 2 )
    goto LABEL_13;
  list = System_Int32__Parse(*(System_String_o **)(list + 32), 0LL);
  if ( *(_DWORD *)(v28 + 24) <= 1u )
  {
LABEL_33:
    v38 = sub_B5D6C8(list);
    sub_B5D668(v38, 0LL);
  }
  v5 = *(System_String_o **)(v28 + 40);
LABEL_13:
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_30;
  v29 = 0;
  while ( 1 )
  {
    if ( v29 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (__int64)this->fields.list;
    if ( !list )
      goto LABEL_30;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v29,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v31 = Item;
      v32 = *(&VoicePlayCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v32
        && (VoicePlayCondEntity_c *)Item->klass->_2.typeHierarchy[v32 - 1] == VoicePlayCondEntity_TypeInfo )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v40.fields.currentCryptoKey = klass;
        *(_QWORD *)&v40.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v40, 0LL) == svtId )
        {
          v35 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v31[2].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v5, 0LL);
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v35, v36, 0LL)
            && LODWORD(v31[3].monitor) == cond )
          {
            return 1;
          }
        }
      }
    }
    list = (__int64)this->fields.list;
    ++v29;
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
  return VoicePlayCondMaster__isVoicePlay_21340036(
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
bool __fastcall VoicePlayCondMaster__isVoicePlay_21340036(
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  VoicePlayCondMaster_c *v27; // x0
  int32_t VOICE_PREFIX_NONE; // w26
  __int64 lookup; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x4
  __int64 v32; // x20
  bool IsOpen; // w0
  int condGroup; // w22
  int32_t v35; // w27
  __int64 v36; // x3
  __int64 v37; // x8
  __int64 v38; // x20
  unsigned __int64 v39; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v40; // x11
  __int64 v41; // x0
  VoicePlayCondEntity_o *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  VoicePlayCondEntity_o *v49; // x28
  __int64 v50; // x10
  int32_t condType; // w20
  bool v52; // w8
  int32_t v53; // w28
  int32_t targetId; // w21
  int32_t CondValue; // w0
  int32_t v56; // w20
  int32_t v57; // w28
  bool v58; // w21
  VoicePlayCondMaster_c *v59; // x0
  System_String_o *PK; // x28
  __int64 v61; // x3
  __int64 v62; // x8
  __int64 v63; // x20
  unsigned __int64 v64; // x10
  int *v65; // x11
  __int64 v66; // x0
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 v70; // x0

  v9 = voiceId;
  if ( (byte_42E689D & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, svtId, (_DWORD)voiceId, condEntity);
    sub_B5D5C4(&CondType_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CondType_Kind__Contains__, v18, v19, v20);
    sub_B5D5C4(&VoicePlayCondEntity_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&VoicePlayCondMaster_TypeInfo, v24, v25, v26);
    byte_42E689D = 1;
  }
  *condEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)condEntity,
    0LL,
    (System_String_array **)voiceId,
    (System_String_array **)condEntity,
    (System_Boolean_array **)disableCondTypeList,
    (System_Int32_array **)userSvtId,
    *(System_Int32_array **)&genderType,
    (System_Int32_array *)method);
  v27 = VoicePlayCondMaster_TypeInfo;
  if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
    v27 = VoicePlayCondMaster_TypeInfo;
  }
  VOICE_PREFIX_NONE = v27->static_fields->VOICE_PREFIX_NONE;
  lookup = sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !lookup )
    goto LABEL_64;
  v30 = lookup;
  if ( !*(_DWORD *)(lookup + 24) )
    goto LABEL_65;
  *(_WORD *)(lookup + 32) = 95;
  if ( !v9 || (lookup = (__int64)System_String__Split(v9, (System_Char_array *)lookup, 0LL)) == 0 )
LABEL_64:
    sub_B5D69C(lookup, v30);
  v32 = lookup;
  if ( *(int *)(lookup + 24) >= 2 )
  {
    lookup = System_Int32__Parse(*(System_String_o **)(lookup + 32), 0LL);
    if ( *(_DWORD *)(v32 + 24) > 1u )
    {
      v9 = *(System_String_o **)(v32 + 40);
      VOICE_PREFIX_NONE = lookup;
      goto LABEL_13;
    }
LABEL_65:
    v70 = sub_B5D6C8(lookup);
    sub_B5D668(v70, 0LL);
  }
LABEL_13:
  IsOpen = 1;
  condGroup = 1;
  v35 = 1;
  while ( 1 )
  {
    v58 = IsOpen;
    if ( VoicePlayCondMaster__IsNotPrefix(this, svtId, v9, v35, v31) )
    {
      v59 = VoicePlayCondMaster_TypeInfo;
      if ( (BYTE3(VoicePlayCondMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
        v59 = VoicePlayCondMaster_TypeInfo;
      }
      VOICE_PREFIX_NONE = v59->static_fields->VOICE_PREFIX_NONE;
    }
    PK = VoicePlayCondEntity__CreatePK(svtId, VOICE_PREFIX_NONE, v9, v35, 0LL);
    lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_64;
    v62 = *(_QWORD *)lookup;
    v63 = lookup;
    if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
    {
      v64 = 0LL;
      v65 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v65 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v64;
        v65 += 4;
        if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
          goto LABEL_59;
      }
      v66 = v62 + 16LL * *v65 + 312;
    }
    else
    {
LABEL_59:
      v66 = sub_AF54C0(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              0LL,
              v61);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v66)(v63, PK, *(_QWORD *)(v66 + 8)) & 1) == 0 )
      return v58;
    lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_64;
    v37 = *(_QWORD *)lookup;
    v38 = lookup;
    if ( *(_WORD *)(*(_QWORD *)lookup + 298LL) )
    {
      v39 = 0LL;
      v40 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *(v40 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v39;
        v40 += 2;
        if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)lookup + 298LL) )
          goto LABEL_19;
      }
      v41 = v37 + 16LL * (*(_DWORD *)v40 + 2) + 312;
    }
    else
    {
LABEL_19:
      v41 = sub_AF54C0(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              2LL,
              v36);
    }
    v42 = (VoicePlayCondEntity_o *)(*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v41)(
                                     v38,
                                     PK,
                                     *(_QWORD *)(v41 + 8));
    if ( !v42
      || (v49 = v42,
          v50 = *(&VoicePlayCondEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v50)
      || (VoicePlayCondEntity_c *)v42->klass->_2.typeHierarchy[v50 - 1] != VoicePlayCondEntity_TypeInfo )
    {
      *condEntity = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)condEntity, 0LL, v43, v44, v45, v46, v47, v48);
      sub_B5D69C(v68, v69);
    }
    ++v35;
    *condEntity = v42;
    sub_B5D560((BattleServantConfConponent_o *)condEntity, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
    if ( condGroup == v49->fields.condGroup )
    {
      IsOpen = 0;
      if ( v58 )
        goto LABEL_28;
    }
    else
    {
      condGroup = v49->fields.condGroup;
      if ( v58 )
        return v58;
LABEL_28:
      condType = v49->fields.condType;
      if ( !disableCondTypeList
        || (v52 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                    (System_Collections_Generic_List_VoiceCondType_Type__o *)disableCondTypeList,
                    condType,
                    (const MethodInfo_3044C04 *)Method_System_Collections_Generic_List_CondType_Kind__Contains__),
            IsOpen = 1,
            !v52) )
      {
        if ( (userSvtId & 0x8000000000000000LL) != 0 )
          goto LABEL_39;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsLimitCountCondType(condType, 0LL) )
        {
LABEL_39:
          targetId = v49->fields.targetId;
          CondValue = VoicePlayCondEntity__getCondValue(v49, 0LL);
          if ( genderType >= 1 && condType == 81 )
          {
            if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              v56 = CondValue;
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              CondValue = v56;
            }
            CondType__IsOpen(81, targetId, CondValue, 0, 0LL);
            IsOpen = v49->fields.targetId == genderType;
          }
          else
          {
            if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              v57 = CondValue;
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              CondValue = v57;
            }
            IsOpen = CondType__IsOpen(condType, targetId, CondValue, 0, 0LL);
          }
        }
        else
        {
          v53 = VoicePlayCondEntity__getCondValue(v49, 0LL);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpenForUsrSvt(condType, v53, userSvtId, 0LL);
        }
      }
    }
  }
}