void __fastcall VoicePlayCondMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1714D & 1) == 0 )
  {
    sub_1BCA7E0(&VoicePlayCondMaster_TypeInfo, v1, v2);
    byte_4B1714D = 1;
  }
  VoicePlayCondMaster_TypeInfo->static_fields->VOICE_PREFIX_NONE = -1;
}


void __fastcall VoicePlayCondMaster___ctor(VoicePlayCondMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17148 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__, method, v2);
    byte_4B17148 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    222,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_VoicePlayCondEntity__o *__fastcall VoicePlayCondMaster__GetTargetGroupIdEntityList(
        VoicePlayCondMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x21
  int64_t v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v20; // w22
  int32_t v21; // w23
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B1714C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&groupId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VoicePlayCondEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo, v12, v13);
    sub_1BCA7E0(&VoicePlayCondEntity_TypeInfo, v14, v15);
    byte_4B1714C = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo,
                                                       *(_QWORD *)&groupId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v21,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v17 = (int64_t)list;
      methodPtr_low = LOBYTE(VoicePlayCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (VoicePlayCondEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != VoicePlayCondEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list[2].monitor) == groupId )
      {
        if ( !v16 )
          break;
        items = v16->fields._items;
        v30 = Method_System_Collections_Generic_List_VoicePlayCondEntity__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v17;
          sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), v17, v22, v23, v24, v25, v26, v27);
        }
      }
      if ( v20 == ++v21 )
        return (System_Collections_Generic_List_VoicePlayCondEntity__o *)v16;
    }
LABEL_18:
    sub_1BCAA3C(list, v17);
  }
  return (System_Collections_Generic_List_VoicePlayCondEntity__o *)v16;
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v19; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v21; // x24
  __int64 methodPtr_low; // x10
  void *monitor; // x25
  Il2CppClass *klass; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v25; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v26; // x0
  int v28; // w19
  VoicePlayCondMaster_c *v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4B1714B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      voiceId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v12, v13);
    sub_1BCA7E0(&VoicePlayCondEntity_TypeInfo, v14, v15);
    sub_1BCA7E0(&VoicePlayCondMaster_TypeInfo, v16, v17);
    byte_4B1714B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_1BCAA3C(list, *(_QWORD *)&svtId);
  v19 = 0;
  while ( 1 )
  {
    if ( v19 >= System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 1;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v19,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v21 = Item;
      methodPtr_low = LOBYTE(VoicePlayCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (VoicePlayCondEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == VoicePlayCondEntity_TypeInfo )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
        *(_QWORD *)&v31.fields.currentCryptoKey = klass;
        *(_QWORD *)&v31.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v31, 0LL) == svtId )
        {
          v25 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v21[2].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, *(_QWORD *)&svtId);
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v25, v26, 0LL)
            && LODWORD(v21[3].klass) == idx )
          {
            break;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v19;
    if ( !list )
      goto LABEL_18;
  }
  v28 = (int)v21[2].klass;
  v29 = VoicePlayCondMaster_TypeInfo;
  if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo, *(_QWORD *)&svtId);
    v29 = VoicePlayCondMaster_TypeInfo;
  }
  return v28 == v29->static_fields->VOICE_PREFIX_NONE;
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_String_o **list; // x0
  System_String_o **v19; // x23
  __int64 v20; // x0
  int32_t v21; // w23
  int32_t Count; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v24; // x25
  __int64 methodPtr_low; // x10
  void *monitor; // x26
  Il2CppClass *klass; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v28; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  v5 = voiceId;
  if ( (byte_4B1714A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      voiceId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v12, v13);
    sub_1BCA7E0(&VoicePlayCondEntity_TypeInfo, v14, v15);
    sub_1BCA7E0(&VoicePlayCondMaster_TypeInfo, v16, v17);
    byte_4B1714A = 1;
  }
  list = (System_String_o **)VoicePlayCondMaster_TypeInfo;
  if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo, *(_QWORD *)&svtId);
  if ( !v5 )
    goto LABEL_25;
  list = (System_String_o **)System_String__Split(v5, 0x5Fu, 0, 0LL);
  if ( !list )
    goto LABEL_25;
  v19 = list;
  if ( *((int *)list + 6) >= 2 )
  {
    v20 = System_Int32__Parse(list[4], 0LL);
    if ( *((_DWORD *)v19 + 6) <= 1u )
      sub_1BCAA44(v20, *(_QWORD *)&svtId);
    v5 = v19[5];
  }
  list = (System_String_o **)this->fields.list;
  if ( !list )
LABEL_25:
    sub_1BCAA3C(list, *(_QWORD *)&svtId);
  v21 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)list,
              (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v21 >= Count )
      break;
    list = (System_String_o **)this->fields.list;
    if ( !list )
      goto LABEL_25;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v21,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v24 = Item;
      methodPtr_low = LOBYTE(VoicePlayCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (VoicePlayCondEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == VoicePlayCondEntity_TypeInfo )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
        *(_QWORD *)&v32.fields.currentCryptoKey = klass;
        *(_QWORD *)&v32.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v32, 0LL) == svtId )
        {
          v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v24[2].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, *(_QWORD *)&svtId);
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v5, 0LL);
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v28, v29, 0LL)
            && LODWORD(v24[3].monitor) == cond )
          {
            break;
          }
        }
      }
    }
    list = (System_String_o **)this->fields.list;
    ++v21;
    if ( !list )
      goto LABEL_25;
  }
  return v21 < Count;
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

  return VoicePlayCondMaster__isVoicePlay_41041364(
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
bool __fastcall VoicePlayCondMaster__isVoicePlay_41041364(
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  void *lookup; // x0
  int32_t VOICE_PREFIX_NONE; // w27
  const MethodInfo *v28; // x4
  void *v29; // x20
  __int64 v30; // x0
  __int64 v31; // x1
  bool IsStartingMember; // w0
  int condGroup; // w21
  int32_t v34; // w28
  bool v35; // w22
  __int64 v36; // x1
  const MethodInfo *v37; // x4
  VoicePlayCondMaster_c *v38; // x0
  System_String_o *PK; // x29
  _DWORD *v40; // x8
  void *v41; // x20
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  _DWORD *v45; // x8
  void *v46; // x20
  __int64 v47; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v48; // x10
  __int64 v49; // x0
  VoicePlayCondEntity_o *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  VoicePlayCondEntity_o *v57; // x29
  __int64 methodPtr_low; // x10
  const MethodInfo *v59; // x1
  int32_t condType; // w20
  bool v61; // w8
  __int64 v62; // x1
  int32_t v63; // w29
  int32_t v64; // w22
  __int64 v65; // x1
  int32_t CondValue; // w20
  bool v67; // w0
  const MethodInfo *v68; // x1
  int32_t v69; // w20
  __int64 v70; // x1
  int32_t v71; // w29
  __int64 v72; // x1
  int32_t v73; // w29
  int32_t targetId; // [xsp+Ch] [xbp-94h]
  UnityEngine_Object_o *x; // [xsp+20h] [xbp-80h]

  v12 = voiceId;
  if ( (byte_4B17149 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&svtId, voiceId);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CondType_Kind__Contains__, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&VoicePlayCondEntity_TypeInfo, v21, v22);
    sub_1BCA7E0(&VoicePlayCondMaster_TypeInfo, v23, v24);
    byte_4B17149 = 1;
  }
  *condEntity = 0LL;
  sub_1BCA784(
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
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo, v25);
    lookup = VoicePlayCondMaster_TypeInfo;
  }
  if ( !v12
    || (VOICE_PREFIX_NONE = **((_DWORD **)lookup + 23), (lookup = System_String__Split(v12, 0x5Fu, 0, 0LL)) == 0LL) )
  {
LABEL_65:
    sub_1BCAA3C(lookup, v25);
  }
  v29 = lookup;
  if ( *((int *)lookup + 6) >= 2 )
  {
    v30 = System_Int32__Parse(*((System_String_o **)lookup + 4), 0LL);
    if ( *((_DWORD *)v29 + 6) <= 1u )
      sub_1BCAA44(v30, v31);
    v12 = (System_String_o *)*((_QWORD *)v29 + 5);
    VOICE_PREFIX_NONE = v30;
  }
  IsStartingMember = 1;
  condGroup = 1;
  v34 = 1;
  while ( 1 )
  {
    v35 = IsStartingMember;
    if ( VoicePlayCondMaster__IsNotPrefix(this, svtId, v12, v34, v28) )
    {
      v38 = VoicePlayCondMaster_TypeInfo;
      if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo, v36);
        v38 = VoicePlayCondMaster_TypeInfo;
      }
      VOICE_PREFIX_NONE = v38->static_fields->VOICE_PREFIX_NONE;
    }
    PK = VoicePlayCondEntity__CreatePK(svtId, VOICE_PREFIX_NONE, v12, v34, v37);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_65;
    v40 = *(_DWORD **)lookup;
    v41 = lookup;
    v42 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
    if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
    {
      v43 = (int *)(*((_QWORD *)v40 + 22) + 8LL);
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v43 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_20;
      }
      v44 = (__int64)&v40[4 * *v43 + 78];
    }
    else
    {
LABEL_20:
      v44 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, _QWORD))v44)(v41, PK, *(_QWORD *)(v44 + 8)) & 1) == 0 )
      return v35;
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_65;
    v45 = *(_DWORD **)lookup;
    v46 = lookup;
    v47 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
    if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
    {
      v48 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*((_QWORD *)v45 + 22) + 8LL);
      while ( *(v48 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v47;
        v48 += 2;
        if ( !v47 )
          goto LABEL_28;
      }
      v49 = (__int64)&v45[4 * *(_DWORD *)v48 + 86];
    }
    else
    {
LABEL_28:
      v49 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    v50 = (VoicePlayCondEntity_o *)(*(__int64 (__fastcall **)(void *, System_String_o *, _QWORD))v49)(
                                     v46,
                                     PK,
                                     *(_QWORD *)(v49 + 8));
    if ( !v50
      || (v57 = v50,
          methodPtr_low = LOBYTE(VoicePlayCondEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v50->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (VoicePlayCondEntity_c *)v50->klass->_2.typeHierarchy[methodPtr_low - 1] != VoicePlayCondEntity_TypeInfo )
    {
      *condEntity = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)condEntity, 0LL, v51, v52, v53, v54, v55, v56);
      goto LABEL_65;
    }
    ++v34;
    *condEntity = v50;
    sub_1BCA784((PartyOrganizationUtility_o *)condEntity, (int64_t)v50, v51, v52, v53, v54, v55, v56);
    if ( condGroup == v57->fields.condGroup )
    {
      IsStartingMember = 0;
      if ( v35 )
        goto LABEL_37;
    }
    else
    {
      condGroup = v57->fields.condGroup;
      if ( v35 )
        return v35;
LABEL_37:
      condType = v57->fields.condType;
      if ( !disableCondTypeList
        || (v61 = System_Collections_Generic_List_Int32Enum___Contains(
                    (System_Collections_Generic_List_T__o *)disableCondTypeList,
                    condType,
                    (const MethodInfo_35877DC *)Method_System_Collections_Generic_List_CondType_Kind__Contains__),
            IsStartingMember = 1,
            !v61) )
      {
        if ( (userSvtId & 0x8000000000000000LL) != 0 )
          goto LABEL_47;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v59);
        if ( !CondType__IsLimitCountCondType(condType, 0LL) )
        {
LABEL_47:
          if ( genderType >= 1 && condType == 81 )
          {
            v64 = v57->fields.targetId;
            CondValue = VoicePlayCondEntity__getCondValue(v57, v59);
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v65);
            CondType__IsOpen(81, v64, CondValue, 0, 0LL, 0LL);
            IsStartingMember = v57->fields.targetId == genderType;
          }
          else
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v59);
            v67 = UnityEngine_Object__op_Inequality(x, 0LL, 0LL);
            if ( condType == 216 && v67 )
            {
              v69 = v57->fields.targetId;
              v71 = VoicePlayCondEntity__getCondValue(v57, v68);
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v70);
              IsStartingMember = CondType__IsStartingMember(v69, v71, (BattleData_o *)x, 0LL);
            }
            else
            {
              targetId = v57->fields.targetId;
              v73 = VoicePlayCondEntity__getCondValue(v57, v68);
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v72);
              if ( (unsigned int)(condType - 225) > 1 )
                IsStartingMember = CondType__IsOpen(condType, targetId, v73, 0, battleCondArgs, 0LL);
              else
                IsStartingMember = CondType__IsOpenBattlePoint(condType, targetId, v73, battleServantData, 0LL);
            }
          }
        }
        else
        {
          v63 = VoicePlayCondEntity__getCondValue(v57, v59);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v62);
          IsStartingMember = CondType__IsOpenForUsrSvt(condType, v63, userSvtId, 0LL);
        }
      }
    }
  }
}