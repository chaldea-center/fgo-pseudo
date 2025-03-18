void __fastcall VoicePlayCondMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C22F57 & 1) == 0 )
  {
    sub_1C3B764(&VoicePlayCondMaster_TypeInfo, v1);
    byte_4C22F57 = 1;
  }
  VoicePlayCondMaster_TypeInfo->static_fields->VOICE_PREFIX_NONE = -1;
}


void __fastcall VoicePlayCondMaster___ctor(VoicePlayCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22F52 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__, method);
    byte_4C22F52 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    228,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_VoicePlayCondEntity__o *__fastcall VoicePlayCondMaster__GetTargetGroupIdEntityList(
        VoicePlayCondMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  int64_t v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4C22F56 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__, *(_QWORD *)&groupId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_VoicePlayCondEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__, v7);
    sub_1C3B764(&System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo, v8);
    byte_4C22F56 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
      if ( !list )
        break;
      v10 = (int64_t)list;
      if ( HIDWORD(list[2].monitor) == groupId )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v22 = Method_System_Collections_Generic_List_VoicePlayCondEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v10;
          sub_1C3B708((PartyOrganizationUtility_o *)(v24 + 4), v10, v15, v16, v17, v18, v19, v20);
        }
      }
      if ( v13 == ++v14 )
        return (System_Collections_Generic_List_VoicePlayCondEntity__o *)v9;
    }
LABEL_16:
    sub_1C3B9C0(list, v10);
  }
  return (System_Collections_Generic_List_VoicePlayCondEntity__o *)v9;
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v18; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v19; // x0
  int v21; // w19
  VoicePlayCondMaster_c *v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4C22F55 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__, v8);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10);
    sub_1C3B764(&VoicePlayCondMaster_TypeInfo, v11);
    byte_4C22F55 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1C3B9C0(list, *(_QWORD *)&svtId);
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__) )
      return 1;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v13,
             (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    if ( Item )
    {
      v15 = Item;
      klass = Item[1].klass;
      monitor = Item[1].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v24.fields.currentCryptoKey = klass;
      *(_QWORD *)&v24.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v24, 0LL) == svtId )
      {
        v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v15[2].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v18, v19, 0LL)
          && LODWORD(v15[3].klass) == idx )
        {
          break;
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_16;
  }
  v21 = (int)v15[2].klass;
  v22 = VoicePlayCondMaster_TypeInfo;
  if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
    v22 = VoicePlayCondMaster_TypeInfo;
  }
  return v21 == v22->static_fields->VOICE_PREFIX_NONE;
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
  System_String_o **list; // x0
  System_String_o **v13; // x23
  __int64 v14; // x0
  int32_t v15; // w23
  int32_t Count; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v18; // x25
  void *monitor; // x26
  Il2CppClass *klass; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v21; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4C22F54 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__, v8);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10);
    sub_1C3B764(&VoicePlayCondMaster_TypeInfo, v11);
    byte_4C22F54 = 1;
  }
  list = (System_String_o **)VoicePlayCondMaster_TypeInfo;
  if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
  if ( !voiceId )
    goto LABEL_23;
  list = (System_String_o **)System_String__Split(voiceId, 0x5Fu, 0, 0LL);
  if ( !list )
    goto LABEL_23;
  v13 = list;
  if ( *((int *)list + 6) >= 2 )
  {
    v14 = System_Int32__Parse(list[4], 0LL);
    if ( *((_DWORD *)v13 + 6) <= 1u )
      sub_1C3B9C8(v14, *(_QWORD *)&svtId);
    voiceId = v13[5];
  }
  list = (System_String_o **)this->fields.list;
  if ( !list )
LABEL_23:
    sub_1C3B9C0(list, *(_QWORD *)&svtId);
  v15 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)list,
              (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
    if ( v15 >= Count )
      break;
    list = (System_String_o **)this->fields.list;
    if ( !list )
      goto LABEL_23;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v15,
             (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    if ( Item )
    {
      v18 = Item;
      klass = Item[1].klass;
      monitor = Item[1].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v25.fields.currentCryptoKey = klass;
      *(_QWORD *)&v25.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v25, 0LL) == svtId )
      {
        v21 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v18[2].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v21, v22, 0LL)
          && LODWORD(v18[3].monitor) == cond )
        {
          break;
        }
      }
    }
    list = (System_String_o **)this->fields.list;
    ++v15;
    if ( !list )
      goto LABEL_23;
  }
  return v15 < Count;
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

  return VoicePlayCondMaster__isVoicePlay_41786636(
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
bool __fastcall VoicePlayCondMaster__isVoicePlay_41786636(
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  const MethodInfo *v20; // x1
  void *lookup; // x0
  int32_t VOICE_PREFIX_NONE; // w27
  const MethodInfo *v23; // x4
  void *v24; // x19
  __int64 v25; // x0
  __int64 v26; // x1
  bool IsStartingMember; // w0
  int condGroup; // w20
  int32_t v29; // w28
  bool v30; // w22
  const MethodInfo *v31; // x4
  VoicePlayCondMaster_c *v32; // x0
  System_String_o *PK; // x29
  _DWORD *v34; // x8
  void *v35; // x19
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  _DWORD *v39; // x8
  void *v40; // x19
  __int64 v41; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__c **v42; // x10
  __int64 v43; // x0
  VoicePlayCondEntity_o *v44; // x29
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int32_t condType; // w19
  bool v52; // w8
  int32_t v53; // w29
  int32_t v54; // w22
  int32_t CondValue; // w19
  bool v56; // w0
  const MethodInfo *v57; // x1
  int32_t v58; // w19
  int32_t v59; // w29
  int32_t v60; // w29
  int32_t targetId; // [xsp+Ch] [xbp-94h]
  UnityEngine_Object_o *x; // [xsp+20h] [xbp-80h]

  v12 = voiceId;
  if ( (byte_4C22F53 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string__get_lookup__, v15);
    sub_1C3B764(&System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_CondType_Kind__Contains__, v17);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v18);
    sub_1C3B764(&VoicePlayCondMaster_TypeInfo, v19);
    byte_4C22F53 = 1;
  }
  *condEntity = 0LL;
  sub_1C3B708(
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
    sub_1C3B9C0(lookup, v20);
  }
  v24 = lookup;
  if ( *((int *)lookup + 6) >= 2 )
  {
    v25 = System_Int32__Parse(*((System_String_o **)lookup + 4), 0LL);
    if ( *((_DWORD *)v24 + 6) <= 1u )
      sub_1C3B9C8(v25, v26);
    v12 = (System_String_o *)*((_QWORD *)v24 + 5);
    VOICE_PREFIX_NONE = v25;
  }
  IsStartingMember = 1;
  condGroup = 1;
  v29 = 1;
  while ( 1 )
  {
    v30 = IsStartingMember;
    if ( VoicePlayCondMaster__IsNotPrefix(this, svtId, v12, v29, v23) )
    {
      v32 = VoicePlayCondMaster_TypeInfo;
      if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
        v32 = VoicePlayCondMaster_TypeInfo;
      }
      VOICE_PREFIX_NONE = v32->static_fields->VOICE_PREFIX_NONE;
    }
    PK = VoicePlayCondEntity__CreatePK(svtId, VOICE_PREFIX_NONE, v12, v29, v31);
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_329D6F4 *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_62;
    v34 = *(_DWORD **)lookup;
    v35 = lookup;
    v36 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
    if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
    {
      v37 = (int *)(*((_QWORD *)v34 + 22) + 8LL);
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__c **)v37 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_20;
      }
      v38 = (__int64)&v34[4 * *v37 + 78];
    }
    else
    {
LABEL_20:
      v38 = sub_1C8D744(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo,
              0LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, _QWORD))v38)(v35, PK, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      return v30;
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_329D6F4 *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_62;
    v39 = *(_DWORD **)lookup;
    v40 = lookup;
    v41 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
    if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
    {
      v42 = (System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__c **)(*((_QWORD *)v39 + 22)
                                                                                             + 8LL);
      while ( *(v42 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo )
      {
        --v41;
        v42 += 2;
        if ( !v41 )
          goto LABEL_28;
      }
      v43 = (__int64)&v39[4 * *(_DWORD *)v42 + 86];
    }
    else
    {
LABEL_28:
      v43 = sub_1C8D744(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo,
              2LL);
    }
    v44 = (VoicePlayCondEntity_o *)(*(__int64 (__fastcall **)(void *, System_String_o *, _QWORD))v43)(
                                     v40,
                                     PK,
                                     *(_QWORD *)(v43 + 8));
    *condEntity = v44;
    sub_1C3B708((PartyOrganizationUtility_o *)condEntity, (int64_t)v44, v45, v46, v47, v48, v49, v50);
    if ( !v44 )
      goto LABEL_62;
    ++v29;
    if ( condGroup == v44->fields.condGroup )
    {
      IsStartingMember = 0;
      if ( v30 )
        goto LABEL_35;
    }
    else
    {
      condGroup = v44->fields.condGroup;
      if ( v30 )
        return v30;
LABEL_35:
      condType = v44->fields.condType;
      if ( !disableCondTypeList
        || (v52 = System_Collections_Generic_List_Int32Enum___Contains(
                    (System_Collections_Generic_List_T__o *)disableCondTypeList,
                    condType,
                    (const MethodInfo_36717EC *)Method_System_Collections_Generic_List_CondType_Kind__Contains__),
            IsStartingMember = 1,
            !v52) )
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
            v54 = v44->fields.targetId;
            CondValue = VoicePlayCondEntity__getCondValue(v44, v20);
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            CondType__IsOpen(81, v54, CondValue, 0, 0LL, 0LL);
            IsStartingMember = v44->fields.targetId == genderType;
          }
          else
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v56 = UnityEngine_Object__op_Inequality(x, 0LL, 0LL);
            if ( condType == 216 && v56 )
            {
              v58 = v44->fields.targetId;
              v59 = VoicePlayCondEntity__getCondValue(v44, v57);
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              IsStartingMember = CondType__IsStartingMember(v58, v59, (BattleData_o *)x, 0LL);
            }
            else
            {
              targetId = v44->fields.targetId;
              v60 = VoicePlayCondEntity__getCondValue(v44, v57);
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              if ( (unsigned int)(condType - 225) > 1 )
                IsStartingMember = CondType__IsOpen(condType, targetId, v60, 0, battleCondArgs, 0LL);
              else
                IsStartingMember = CondType__IsOpenBattlePoint(condType, targetId, v60, battleServantData, 0LL);
            }
          }
        }
        else
        {
          v53 = VoicePlayCondEntity__getCondValue(v44, v20);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsStartingMember = CondType__IsOpenForUsrSvt(condType, v53, userSvtId, 0LL);
        }
      }
    }
  }
}