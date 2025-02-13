void __fastcall VoicePlayCondMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4BDD4F7 & 1) == 0 )
  {
    sub_1C21E38(&VoicePlayCondMaster_TypeInfo);
    byte_4BDD4F7 = 1;
  }
  VoicePlayCondMaster_TypeInfo->static_fields->VOICE_PREFIX_NONE = -1;
}


void __fastcall VoicePlayCondMaster___ctor(VoicePlayCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD4F2 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
    byte_4BDD4F2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    226,
    (const MethodInfo_325E55C *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
}


System_Collections_Generic_List_VoicePlayCondEntity__o *__fastcall VoicePlayCondMaster__GetTargetGroupIdEntityList(
        VoicePlayCondMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4BDD4F6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VoicePlayCondEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo);
    byte_4BDD4F6 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
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
                                                                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
      if ( !list )
        break;
      v6 = (int64_t)list;
      if ( HIDWORD(list[2].monitor) == groupId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v18 = Method_System_Collections_Generic_List_VoicePlayCondEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v6;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), v6, v11, v12, v13, v14, v15, v16);
        }
      }
      if ( v9 == ++v10 )
        return (System_Collections_Generic_List_VoicePlayCondEntity__o *)v5;
    }
LABEL_16:
    sub_1C22094(list, v6);
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
  void *monitor; // x25
  Il2CppClass *klass; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v14; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v15; // x0
  int v17; // w19
  VoicePlayCondMaster_c *v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4BDD4F5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C21E38(&VoicePlayCondMaster_TypeInfo);
    byte_4BDD4F5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1C22094(list, *(_QWORD *)&svtId);
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__) )
      return 1;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v9,
             (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    if ( Item )
    {
      v11 = Item;
      klass = Item[1].klass;
      monitor = Item[1].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v20.fields.currentCryptoKey = klass;
      *(_QWORD *)&v20.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v20, 0LL) == svtId )
      {
        v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v11[2].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v14, v15, 0LL)
          && LODWORD(v11[3].klass) == idx )
        {
          break;
        }
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
  void *monitor; // x26
  Il2CppClass *klass; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v17; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4BDD4F4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C21E38(&VoicePlayCondMaster_TypeInfo);
    byte_4BDD4F4 = 1;
  }
  list = (System_String_o **)VoicePlayCondMaster_TypeInfo;
  if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
  if ( !voiceId )
    goto LABEL_23;
  list = (System_String_o **)System_String__Split(voiceId, 0x5Fu, 0, 0LL);
  if ( !list )
    goto LABEL_23;
  v9 = list;
  if ( *((int *)list + 6) >= 2 )
  {
    v10 = System_Int32__Parse(list[4], 0LL);
    if ( *((_DWORD *)v9 + 6) <= 1u )
      sub_1C2209C(v10, *(_QWORD *)&svtId);
    voiceId = v9[5];
  }
  list = (System_String_o **)this->fields.list;
  if ( !list )
LABEL_23:
    sub_1C22094(list, *(_QWORD *)&svtId);
  v11 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)list,
              (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
    if ( v11 >= Count )
      break;
    list = (System_String_o **)this->fields.list;
    if ( !list )
      goto LABEL_23;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v11,
             (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    if ( Item )
    {
      v14 = Item;
      klass = Item[1].klass;
      monitor = Item[1].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v21.fields.currentCryptoKey = klass;
      *(_QWORD *)&v21.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v21, 0LL) == svtId )
      {
        v17 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v14[2].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v17, v18, 0LL)
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

  return VoicePlayCondMaster__isVoicePlay_41584676(
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoicePlayCondMaster__isVoicePlay_41584676(
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
  const MethodInfo *v15; // x1
  void *lookup; // x0
  int32_t VOICE_PREFIX_NONE; // w27
  const MethodInfo *v18; // x4
  void *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  bool IsStartingMember; // w0
  int condGroup; // w20
  int32_t v24; // w28
  bool v25; // w22
  const MethodInfo *v26; // x4
  VoicePlayCondMaster_c *v27; // x0
  System_String_o *PK; // x29
  _DWORD *v29; // x8
  void *v30; // x19
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  _DWORD *v34; // x8
  void *v35; // x19
  __int64 v36; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__c **v37; // x10
  __int64 v38; // x0
  VoicePlayCondEntity_o *v39; // x29
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int32_t condType; // w19
  bool v47; // w8
  int32_t v48; // w29
  int32_t v49; // w22
  int32_t CondValue; // w19
  bool v51; // w0
  const MethodInfo *v52; // x1
  int32_t v53; // w19
  int32_t v54; // w29
  int32_t v55; // w29
  int32_t targetId; // [xsp+Ch] [xbp-94h]
  UnityEngine_Object_o *x; // [xsp+20h] [xbp-80h]

  v12 = voiceId;
  if ( (byte_4BDD4F3 & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string__get_lookup__);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_CondType_Kind__Contains__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&VoicePlayCondMaster_TypeInfo);
    byte_4BDD4F3 = 1;
  }
  *condEntity = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)condEntity,
    0LL,
    (int64_t)voiceId,
    (int32_t)condEntity,
    (System_String_o *)disableCondTypeList,
    (BattleSetupInfo_o *)userSvtId,
    *(FollowerInfo_o **)&genderType,
    (PartyListViewItem_o *)battleData);
  lookup = VoicePlayCondMaster_TypeInfo;
  if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
    lookup = VoicePlayCondMaster_TypeInfo;
  }
  if ( !v12
    || (VOICE_PREFIX_NONE = **((_DWORD **)lookup + 23), (lookup = System_String__Split(v12, 0x5Fu, 0, 0LL)) == 0LL) )
  {
LABEL_62:
    sub_1C22094(lookup, v15);
  }
  v19 = lookup;
  if ( *((int *)lookup + 6) >= 2 )
  {
    v20 = System_Int32__Parse(*((System_String_o **)lookup + 4), 0LL);
    if ( *((_DWORD *)v19 + 6) <= 1u )
      sub_1C2209C(v20, v21);
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
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_325E674 *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_62;
    v29 = *(_DWORD **)lookup;
    v30 = lookup;
    v31 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
    if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
    {
      v32 = (int *)(*((_QWORD *)v29 + 22) + 8LL);
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__c **)v32 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo )
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
      v33 = sub_1C73E18(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo,
              0LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, _QWORD))v33)(v30, PK, *(_QWORD *)(v33 + 8)) & 1) == 0 )
      return v25;
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_325E674 *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_62;
    v34 = *(_DWORD **)lookup;
    v35 = lookup;
    v36 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
    if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
    {
      v37 = (System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__c **)(*((_QWORD *)v34 + 22)
                                                                                             + 8LL);
      while ( *(v37 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo )
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
      v38 = sub_1C73E18(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo,
              2LL);
    }
    v39 = (VoicePlayCondEntity_o *)(*(__int64 (__fastcall **)(void *, System_String_o *, _QWORD))v38)(
                                     v35,
                                     PK,
                                     *(_QWORD *)(v38 + 8));
    *condEntity = v39;
    sub_1C21DDC((PartyOrganizationUtility_o *)condEntity, (int64_t)v39, v40, v41, v42, v43, v44, v45);
    if ( !v39 )
      goto LABEL_62;
    ++v24;
    if ( condGroup == v39->fields.condGroup )
    {
      IsStartingMember = 0;
      if ( v25 )
        goto LABEL_35;
    }
    else
    {
      condGroup = v39->fields.condGroup;
      if ( v25 )
        return v25;
LABEL_35:
      condType = v39->fields.condType;
      if ( !disableCondTypeList
        || (v47 = System_Collections_Generic_List_Int32Enum___Contains(
                    (System_Collections_Generic_List_T__o *)disableCondTypeList,
                    condType,
                    (const MethodInfo_3634C34 *)Method_System_Collections_Generic_List_CondType_Kind__Contains__),
            IsStartingMember = 1,
            !v47) )
      {
        if ( (userSvtId & 0x8000000000000000LL) != 0 )
          goto LABEL_45;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsLimitCountCondType(condType, 0LL) )
        {
LABEL_45:
          if ( genderType >= 1 && condType == 81 )
          {
            v49 = v39->fields.targetId;
            CondValue = VoicePlayCondEntity__getCondValue(v39, v15);
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            CondType__IsOpen(81, v49, CondValue, 0, 0LL, 0LL);
            IsStartingMember = v39->fields.targetId == genderType;
          }
          else
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v51 = UnityEngine_Object__op_Inequality(x, 0LL, 0LL);
            if ( condType == 216 && v51 )
            {
              v53 = v39->fields.targetId;
              v54 = VoicePlayCondEntity__getCondValue(v39, v52);
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              IsStartingMember = CondType__IsStartingMember(v53, v54, (BattleData_o *)x, 0LL);
            }
            else
            {
              targetId = v39->fields.targetId;
              v55 = VoicePlayCondEntity__getCondValue(v39, v52);
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              if ( (unsigned int)(condType - 225) > 1 )
                IsStartingMember = CondType__IsOpen(condType, targetId, v55, 0, battleCondArgs, 0LL);
              else
                IsStartingMember = CondType__IsOpenBattlePoint(condType, targetId, v55, battleServantData, 0LL);
            }
          }
        }
        else
        {
          v48 = VoicePlayCondEntity__getCondValue(v39, v15);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsStartingMember = CondType__IsOpenForUsrSvt(condType, v48, userSvtId, 0LL);
        }
      }
    }
  }
}