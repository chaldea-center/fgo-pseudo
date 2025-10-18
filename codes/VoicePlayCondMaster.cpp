void VoicePlayCondMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4C440CD & 1) == 0 )
  {
    sub_1C37058(&VoicePlayCondMaster_TypeInfo);
    byte_4C440CD = 1;
  }
  VoicePlayCondMaster_TypeInfo->static_fields->VOICE_PREFIX_NONE = -1;
}


void VoicePlayCondMaster___ctor(VoicePlayCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C440C8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
    byte_4C440C8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    228,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
}


System_Collections_Generic_List_VoicePlayCondEntity__o *VoicePlayCondMaster__GetTargetGroupIdEntityList(
        VoicePlayCondMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4C440CC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_VoicePlayCondEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo);
    byte_4C440CC = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
      if ( !list )
        break;
      v12 = list;
      if ( HIDWORD(list[2].monitor) == groupId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v14 = Method_System_Collections_Generic_List_VoicePlayCondEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v12;
          sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
        }
      }
      if ( v8 == ++v9 )
        return (System_Collections_Generic_List_VoicePlayCondEntity__o *)v5;
    }
LABEL_16:
    sub_1C372B4(list);
  }
  return (System_Collections_Generic_List_VoicePlayCondEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
int32_t VoicePlayCondMaster__GetWeight(
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


bool VoicePlayCondMaster__IsNotPrefix(
        VoicePlayCondMaster_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        int32_t idx,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v9; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v14; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v15; // x0
  int v17; // w19
  VoicePlayCondMaster_c *v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4C440CB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C37058(&VoicePlayCondMaster_TypeInfo);
    byte_4C440CB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1C372B4(list);
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__) )
      return 1;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v9,
             (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    if ( Item )
    {
      v11 = Item;
      klass = Item[1].klass;
      monitor = Item[1].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v20.fields.currentCryptoKey = klass;
      *(_QWORD *)&v20.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v20, 0) == svtId )
      {
        v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v11[2].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v14, v15, 0) && LODWORD(v11[3].klass) == idx )
          break;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v9;
    if ( !list )
      goto LABEL_16;
  }
  v17 = (int)v11[2].klass;
  v18 = VoicePlayCondMaster_TypeInfo;
  if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
    v18 = VoicePlayCondMaster_TypeInfo;
  }
  return v17 == v18->static_fields->VOICE_PREFIX_NONE;
}


bool VoicePlayCondMaster__isVoiceCond(
        VoicePlayCondMaster_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        int32_t cond,
        const MethodInfo *method)
{
  System_String_o **list; // x0
  System_String_o **v9; // x23
  __int64 v10; // x0
  int32_t v11; // w23
  int32_t Count; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v14; // x25
  void *monitor; // x26
  Il2CppClass *klass; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v17; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4C440CA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C37058(&VoicePlayCondMaster_TypeInfo);
    byte_4C440CA = 1;
  }
  list = (System_String_o **)VoicePlayCondMaster_TypeInfo;
  if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
  if ( !voiceId )
    goto LABEL_23;
  list = (System_String_o **)System_String__Split(voiceId, 0x5Fu, 0, 0);
  if ( !list )
    goto LABEL_23;
  v9 = list;
  if ( *((int *)list + 6) >= 2 )
  {
    v10 = System_Int32__Parse(list[4], 0);
    if ( *((_DWORD *)v9 + 6) <= 1u )
      sub_1C372BC(v10);
    voiceId = v9[5];
  }
  list = (System_String_o **)this->fields.list;
  if ( !list )
LABEL_23:
    sub_1C372B4(list);
  v11 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)list,
              (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
    if ( v11 >= Count )
      break;
    list = (System_String_o **)this->fields.list;
    if ( !list )
      goto LABEL_23;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v11,
             (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    if ( Item )
    {
      v14 = Item;
      klass = Item[1].klass;
      monitor = Item[1].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v21.fields.currentCryptoKey = klass;
      *(_QWORD *)&v21.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v21, 0) == svtId )
      {
        v17 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v14[2].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v17, v18, 0)
          && LODWORD(v14[3].monitor) == cond )
        {
          break;
        }
      }
    }
    list = (System_String_o **)this->fields.list;
    ++v11;
    if ( !list )
      goto LABEL_23;
  }
  return v11 < Count;
}


bool VoicePlayCondMaster__isVoicePlay(
        VoicePlayCondMaster_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList,
        int64_t userSvtId,
        int32_t genderType,
        BattleServantData_o *battleServantData,
        BattleVoicePlayCondArgs_o *battleCondArgs,
        const MethodInfo *method)
{
  const MethodInfo *v10; // [xsp+10h] [xbp-20h]
  VoicePlayCondEntity_o *condEntity; // [xsp+28h] [xbp-8h] BYREF

  return VoicePlayCondMaster__isVoicePlay_43286548(
           this,
           svtId,
           voiceId,
           &condEntity,
           disableCondTypeList,
           userSvtId,
           genderType,
           0,
           battleServantData,
           battleCondArgs,
           v10);
}


bool VoicePlayCondMaster__isVoicePlay_43286548(
        VoicePlayCondMaster_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        VoicePlayCondEntity_o **condEntity,
        System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList,
        int64_t userSvtId,
        int32_t genderType,
        BattleData_o *battleData,
        BattleServantData_o *battleServantData,
        BattleVoicePlayCondArgs_o *battleCondArgs,
        const MethodInfo *method)
{
  System_String_o *v12; // x26
  void *lookup; // x0
  int32_t VOICE_PREFIX_NONE; // w27
  const MethodInfo *v17; // x4
  void *v18; // x19
  __int64 v19; // x0
  bool IsStartingMember; // w0
  int condGroup; // w20
  int32_t v22; // w29
  bool v23; // w22
  const MethodInfo *v24; // x4
  VoicePlayCondMaster_c *v25; // x0
  System_String_o *PK; // x19
  _DWORD *v27; // x8
  void *v28; // x28
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  _DWORD *v32; // x8
  void *v33; // x28
  __int64 v34; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__c **v35; // x10
  __int64 v36; // x0
  VoicePlayCondEntity_o *v37; // x28
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x1
  int32_t condType; // w19
  bool v42; // w8
  int32_t v43; // w28
  int32_t targetId; // w22
  int32_t CondValue; // w19
  bool v46; // w0
  const MethodInfo *v47; // x1
  int32_t v48; // w19
  int32_t v49; // w28
  int32_t v50; // w22
  int32_t v51; // w28
  int32_t v52; // w22
  int32_t v53; // w28
  UnityEngine_Object_o *x; // [xsp+10h] [xbp-80h]

  v12 = voiceId;
  if ( (byte_4C440C9 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string__get_lookup__);
    sub_1C37058(&System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_CondType_Kind__Contains__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&VoicePlayCondMaster_TypeInfo);
    byte_4C440C9 = 1;
  }
  *condEntity = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)condEntity, 0, (int32_t)voiceId, (const MethodInfo *)condEntity);
  lookup = VoicePlayCondMaster_TypeInfo;
  if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
    lookup = VoicePlayCondMaster_TypeInfo;
  }
  if ( !v12 || (VOICE_PREFIX_NONE = **((_DWORD **)lookup + 23), (lookup = System_String__Split(v12, 0x5Fu, 0, 0)) == 0) )
LABEL_67:
    sub_1C372B4(lookup);
  v18 = lookup;
  if ( *((int *)lookup + 6) >= 2 )
  {
    v19 = System_Int32__Parse(*((System_String_o **)lookup + 4), 0);
    if ( *((_DWORD *)v18 + 6) <= 1u )
      sub_1C372BC(v19);
    v12 = (System_String_o *)*((_QWORD *)v18 + 5);
    VOICE_PREFIX_NONE = v19;
  }
  IsStartingMember = 1;
  condGroup = 1;
  v22 = 1;
  while ( 1 )
  {
    v23 = IsStartingMember;
    if ( VoicePlayCondMaster__IsNotPrefix(this, svtId, v12, v22, v17) )
    {
      v25 = VoicePlayCondMaster_TypeInfo;
      if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
        v25 = VoicePlayCondMaster_TypeInfo;
      }
      VOICE_PREFIX_NONE = v25->static_fields->VOICE_PREFIX_NONE;
    }
    PK = VoicePlayCondEntity__CreatePK(svtId, VOICE_PREFIX_NONE, v12, v22, v24);
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_33A394C *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_67;
    v27 = *(_DWORD **)lookup;
    v28 = lookup;
    v29 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
    if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
    {
      v30 = (int *)(*((_QWORD *)v27 + 22) + 8LL);
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__c **)v30 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_20;
      }
      v31 = (__int64)&v27[4 * *v30 + 78];
    }
    else
    {
LABEL_20:
      v31 = sub_1C87870(lookup, System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, _QWORD))v31)(v28, PK, *(_QWORD *)(v31 + 8)) & 1) == 0 )
      return v23;
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_33A394C *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_67;
    v32 = *(_DWORD **)lookup;
    v33 = lookup;
    v34 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
    if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
    {
      v35 = (System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__c **)(*((_QWORD *)v32 + 22)
                                                                                             + 8LL);
      while ( *(v35 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo )
      {
        --v34;
        v35 += 2;
        if ( !v34 )
          goto LABEL_28;
      }
      v36 = (__int64)&v32[4 * *(_DWORD *)v35 + 86];
    }
    else
    {
LABEL_28:
      v36 = sub_1C87870(lookup, System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo, 2);
    }
    v37 = (VoicePlayCondEntity_o *)(*(__int64 (__fastcall **)(void *, System_String_o *, _QWORD))v36)(
                                     v33,
                                     PK,
                                     *(_QWORD *)(v36 + 8));
    *condEntity = v37;
    sub_1C36FFC((CGThumbnailListItem_o *)condEntity, (int32_t)v37, v38, v39);
    if ( !v37 )
      goto LABEL_67;
    ++v22;
    if ( condGroup == v37->fields.condGroup )
    {
      IsStartingMember = 0;
      if ( v23 )
        goto LABEL_35;
    }
    else
    {
      condGroup = v37->fields.condGroup;
      if ( v23 )
        return v23;
LABEL_35:
      condType = v37->fields.condType;
      if ( !disableCondTypeList
        || (v42 = System_Collections_Generic_List_Int32Enum___Contains(
                    (System_Collections_Generic_List_T__o *)disableCondTypeList,
                    condType,
                    (const MethodInfo_3788BA4 *)Method_System_Collections_Generic_List_CondType_Kind__Contains__),
            IsStartingMember = 1,
            !v42) )
      {
        if ( userSvtId < 0 )
          goto LABEL_45;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsLimitCountCondType(condType, 0) )
        {
LABEL_45:
          if ( genderType >= 1 && condType == 81 )
          {
            targetId = v37->fields.targetId;
            CondValue = VoicePlayCondEntity__getCondValue(v37, v40);
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            CondType__IsOpen(81, targetId, CondValue, 0, 0, 0);
            IsStartingMember = v37->fields.targetId == genderType;
          }
          else
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v46 = UnityEngine_Object__op_Inequality(x, 0, 0);
            if ( condType == 216 && v46 )
            {
              v48 = v37->fields.targetId;
              v49 = VoicePlayCondEntity__getCondValue(v37, v47);
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              IsStartingMember = CondType__IsStartingMember(v48, v49, (BattleData_o *)x, 0);
            }
            else if ( (unsigned int)(condType - 225) <= 1 )
            {
              if ( !battleServantData && battleCondArgs )
                battleServantData = battleCondArgs->fields._ServantData_k__BackingField;
              v52 = v37->fields.targetId;
              v53 = VoicePlayCondEntity__getCondValue(v37, v47);
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              IsStartingMember = CondType__IsOpenBattlePoint(condType, v52, v53, battleServantData, 0);
            }
            else
            {
              v50 = v37->fields.targetId;
              v51 = VoicePlayCondEntity__getCondValue(v37, v47);
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              IsStartingMember = CondType__IsOpen(condType, v50, v51, 0, battleCondArgs, 0);
            }
          }
        }
        else
        {
          v43 = VoicePlayCondEntity__getCondValue(v37, v40);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsStartingMember = CondType__IsOpenForUsrSvt(condType, v43, userSvtId, 0);
        }
      }
    }
  }
}