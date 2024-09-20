void __fastcall VoicePlayCondMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4A5C094 & 1) == 0 )
  {
    sub_1B885B0(&VoicePlayCondMaster_TypeInfo);
    byte_4A5C094 = 1;
  }
  VoicePlayCondMaster_TypeInfo->static_fields->VOICE_PREFIX_NONE = -1;
}


void __fastcall VoicePlayCondMaster___ctor(VoicePlayCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C08F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
    byte_4A5C08F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    222,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
}


System_Collections_Generic_List_VoicePlayCondEntity__o *__fastcall VoicePlayCondMaster__GetTargetGroupIdEntityList(
        VoicePlayCondMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4A5C093 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoicePlayCondEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo);
    sub_1B885B0(&VoicePlayCondEntity_TypeInfo);
    byte_4A5C093 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = list;
      methodPtr_low = LOBYTE(VoicePlayCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (VoicePlayCondEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != VoicePlayCondEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list[2].monitor) == groupId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v15 = Method_System_Collections_Generic_List_VoicePlayCondEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v6, v11, v12);
        }
      }
      if ( v9 == ++v10 )
        return (System_Collections_Generic_List_VoicePlayCondEntity__o *)v5;
    }
LABEL_18:
    sub_1B8880C(list, v6);
  }
  return (System_Collections_Generic_List_VoicePlayCondEntity__o *)v5;
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v9; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x24
  __int64 methodPtr_low; // x10
  void *monitor; // x25
  Il2CppClass *klass; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v15; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v16; // x0
  int v18; // w19
  VoicePlayCondMaster_c *v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4A5C092 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&VoicePlayCondEntity_TypeInfo);
    sub_1B885B0(&VoicePlayCondMaster_TypeInfo);
    byte_4A5C092 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_1B8880C(list, *(_QWORD *)&svtId);
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 1;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v9,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v11 = Item;
      methodPtr_low = LOBYTE(VoicePlayCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (VoicePlayCondEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == VoicePlayCondEntity_TypeInfo )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v21.fields.currentCryptoKey = klass;
        *(_QWORD *)&v21.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v21, 0LL) == svtId )
        {
          v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v11[2].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v15, v16, 0LL)
            && LODWORD(v11[3].klass) == idx )
          {
            break;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v9;
    if ( !list )
      goto LABEL_18;
  }
  v18 = (int)v11[2].klass;
  v19 = VoicePlayCondMaster_TypeInfo;
  if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
    v19 = VoicePlayCondMaster_TypeInfo;
  }
  return v18 == v19->static_fields->VOICE_PREFIX_NONE;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoicePlayCondMaster__isVoiceCond(
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
  __int64 methodPtr_low; // x10
  void *monitor; // x26
  Il2CppClass *klass; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v18; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4A5C091 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&VoicePlayCondEntity_TypeInfo);
    sub_1B885B0(&VoicePlayCondMaster_TypeInfo);
    byte_4A5C091 = 1;
  }
  list = (System_String_o **)VoicePlayCondMaster_TypeInfo;
  if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
  if ( !voiceId )
    goto LABEL_25;
  list = (System_String_o **)System_String__Split(voiceId, 0x5Fu, 0, 0LL);
  if ( !list )
    goto LABEL_25;
  v9 = list;
  if ( *((int *)list + 6) >= 2 )
  {
    v10 = System_Int32__Parse(list[4], 0LL);
    if ( *((_DWORD *)v9 + 6) <= 1u )
      sub_1B88814(v10, *(_QWORD *)&svtId);
    voiceId = v9[5];
  }
  list = (System_String_o **)this->fields.list;
  if ( !list )
LABEL_25:
    sub_1B8880C(list, *(_QWORD *)&svtId);
  v11 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)list,
              (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v11 >= Count )
      break;
    list = (System_String_o **)this->fields.list;
    if ( !list )
      goto LABEL_25;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v11,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v14 = Item;
      methodPtr_low = LOBYTE(VoicePlayCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (VoicePlayCondEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == VoicePlayCondEntity_TypeInfo )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v22.fields.currentCryptoKey = klass;
        *(_QWORD *)&v22.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL) == svtId )
        {
          v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v14[2].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v18, v19, 0LL)
            && LODWORD(v14[3].monitor) == cond )
          {
            break;
          }
        }
      }
    }
    list = (System_String_o **)this->fields.list;
    ++v11;
    if ( !list )
      goto LABEL_25;
  }
  return v11 < Count;
}


bool __fastcall VoicePlayCondMaster__isVoicePlay(
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

  return VoicePlayCondMaster__isVoicePlay_40309812(
           this,
           svtId,
           voiceId,
           &condEntity,
           disableCondTypeList,
           userSvtId,
           genderType,
           0LL,
           battleServantData,
           battleCondArgs,
           v10);
}


bool __fastcall VoicePlayCondMaster__isVoicePlay_40309812(
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
  __int64 v15; // x1
  void *lookup; // x0
  int32_t VOICE_PREFIX_NONE; // w27
  const MethodInfo *v18; // x4
  void *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  bool IsStartingMember; // w0
  int condGroup; // w21
  int32_t v24; // w28
  bool v25; // w22
  const MethodInfo *v26; // x4
  VoicePlayCondMaster_c *v27; // x0
  System_String_o *PK; // x29
  _DWORD *v29; // x8
  void *v30; // x20
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  _DWORD *v34; // x8
  void *v35; // x20
  __int64 v36; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v37; // x10
  __int64 v38; // x0
  VoicePlayCondEntity_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  VoicePlayCondEntity_o *v42; // x29
  __int64 methodPtr_low; // x10
  const MethodInfo *v44; // x1
  int32_t condType; // w20
  bool v46; // w8
  int32_t v47; // w29
  int32_t v48; // w22
  int32_t CondValue; // w20
  bool v50; // w0
  const MethodInfo *v51; // x1
  int32_t v52; // w20
  int32_t v53; // w29
  int32_t v54; // w29
  int32_t targetId; // [xsp+Ch] [xbp-94h]
  UnityEngine_Object_o *x; // [xsp+20h] [xbp-80h]

  v12 = voiceId;
  if ( (byte_4A5C090 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_CondType_Kind__Contains__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&VoicePlayCondEntity_TypeInfo);
    sub_1B885B0(&VoicePlayCondMaster_TypeInfo);
    byte_4A5C090 = 1;
  }
  *condEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)condEntity, 0, (int32_t)voiceId, (int32_t)condEntity);
  lookup = VoicePlayCondMaster_TypeInfo;
  if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
    lookup = VoicePlayCondMaster_TypeInfo;
  }
  if ( !v12
    || (VOICE_PREFIX_NONE = **((_DWORD **)lookup + 23), (lookup = System_String__Split(v12, 0x5Fu, 0, 0LL)) == 0LL) )
  {
LABEL_65:
    sub_1B8880C(lookup, v15);
  }
  v19 = lookup;
  if ( *((int *)lookup + 6) >= 2 )
  {
    v20 = System_Int32__Parse(*((System_String_o **)lookup + 4), 0LL);
    if ( *((_DWORD *)v19 + 6) <= 1u )
      sub_1B88814(v20, v21);
    v12 = (System_String_o *)*((_QWORD *)v19 + 5);
    VOICE_PREFIX_NONE = v20;
  }
  IsStartingMember = 1;
  condGroup = 1;
  v24 = 1;
  while ( 1 )
  {
    v25 = IsStartingMember;
    if ( VoicePlayCondMaster__IsNotPrefix(this, svtId, v12, v24, v18) )
    {
      v27 = VoicePlayCondMaster_TypeInfo;
      if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
        v27 = VoicePlayCondMaster_TypeInfo;
      }
      VOICE_PREFIX_NONE = v27->static_fields->VOICE_PREFIX_NONE;
    }
    PK = VoicePlayCondEntity__CreatePK(svtId, VOICE_PREFIX_NONE, v12, v24, v26);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_65;
    v29 = *(_DWORD **)lookup;
    v30 = lookup;
    v31 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
    if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
    {
      v32 = (int *)(*((_QWORD *)v29 + 22) + 8LL);
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_20;
      }
      v33 = (__int64)&v29[4 * *v32 + 78];
    }
    else
    {
LABEL_20:
      v33 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, _QWORD))v33)(v30, PK, *(_QWORD *)(v33 + 8)) & 1) == 0 )
      return v25;
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_65;
    v34 = *(_DWORD **)lookup;
    v35 = lookup;
    v36 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
    if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
    {
      v37 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*((_QWORD *)v34 + 22) + 8LL);
      while ( *(v37 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v36;
        v37 += 2;
        if ( !v36 )
          goto LABEL_28;
      }
      v38 = (__int64)&v34[4 * *(_DWORD *)v37 + 86];
    }
    else
    {
LABEL_28:
      v38 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    v39 = (VoicePlayCondEntity_o *)(*(__int64 (__fastcall **)(void *, System_String_o *, _QWORD))v38)(
                                     v35,
                                     PK,
                                     *(_QWORD *)(v38 + 8));
    if ( !v39
      || (v42 = v39,
          methodPtr_low = LOBYTE(VoicePlayCondEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v39->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (VoicePlayCondEntity_c *)v39->klass->_2.typeHierarchy[methodPtr_low - 1] != VoicePlayCondEntity_TypeInfo )
    {
      *condEntity = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)condEntity, 0, v40, v41);
      goto LABEL_65;
    }
    ++v24;
    *condEntity = v39;
    sub_1B88554((ServantStatusBattleListViewItem_o *)condEntity, (int32_t)v39, v40, v41);
    if ( condGroup == v42->fields.condGroup )
    {
      IsStartingMember = 0;
      if ( v25 )
        goto LABEL_37;
    }
    else
    {
      condGroup = v42->fields.condGroup;
      if ( v25 )
        return v25;
LABEL_37:
      condType = v42->fields.condType;
      if ( !disableCondTypeList
        || (v46 = System_Collections_Generic_List_Int32Enum___Contains(
                    (System_Collections_Generic_List_T__o *)disableCondTypeList,
                    condType,
                    (const MethodInfo_34E33B4 *)Method_System_Collections_Generic_List_CondType_Kind__Contains__),
            IsStartingMember = 1,
            !v46) )
      {
        if ( (userSvtId & 0x8000000000000000LL) != 0 )
          goto LABEL_47;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsLimitCountCondType(condType, 0LL) )
        {
LABEL_47:
          if ( genderType >= 1 && condType == 81 )
          {
            v48 = v42->fields.targetId;
            CondValue = VoicePlayCondEntity__getCondValue(v42, v44);
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            CondType__IsOpen(81, v48, CondValue, 0, 0LL, 0LL);
            IsStartingMember = v42->fields.targetId == genderType;
          }
          else
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v50 = UnityEngine_Object__op_Inequality(x, 0LL, 0LL);
            if ( condType == 216 && v50 )
            {
              v52 = v42->fields.targetId;
              v53 = VoicePlayCondEntity__getCondValue(v42, v51);
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              IsStartingMember = CondType__IsStartingMember(v52, v53, (BattleData_o *)x, 0LL);
            }
            else
            {
              targetId = v42->fields.targetId;
              v54 = VoicePlayCondEntity__getCondValue(v42, v51);
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              if ( (unsigned int)(condType - 225) > 1 )
                IsStartingMember = CondType__IsOpen(condType, targetId, v54, 0, battleCondArgs, 0LL);
              else
                IsStartingMember = CondType__IsOpenBattlePoint(condType, targetId, v54, battleServantData, 0LL);
            }
          }
        }
        else
        {
          v47 = VoicePlayCondEntity__getCondValue(v42, v44);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsStartingMember = CondType__IsOpenForUsrSvt(condType, v47, userSvtId, 0LL);
        }
      }
    }
  }
}