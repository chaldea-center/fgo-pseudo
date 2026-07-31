void VoicePlayCondMaster___cctor(const MethodInfo *method)
{
  if ( (byte_5939816 & 1) == 0 )
  {
    sub_21FFC50(&VoicePlayCondMaster_TypeInfo);
    byte_5939816 = 1;
  }
  VoicePlayCondMaster_TypeInfo->static_fields->VOICE_PREFIX_NONE = -1;
}


void VoicePlayCondMaster___ctor(VoicePlayCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939811 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
    byte_5939811 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    230,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
}


System_Collections_Generic_List_VoicePlayCondEntity__o *VoicePlayCondMaster__GetTargetGroupIdEntityList(
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_5939815 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_VoicePlayCondEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo);
    byte_5939815 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
      if ( !list )
        break;
      v6 = list;
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
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v6;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
        }
      }
      if ( v9 == ++v10 )
        return (System_Collections_Generic_List_VoicePlayCondEntity__o *)v5;
    }
LABEL_16:
    sub_21FFECC(list, v6);
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


// local variable allocation has failed, the output may be wrong!
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
  Il2CppClass *klass; // x25
  void *monitor; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v14; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v15; // x0
  int v17; // w19
  VoicePlayCondMaster_c *v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_5939814 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_21FFC50(&VoicePlayCondMaster_TypeInfo);
    byte_5939814 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_21FFECC(list, *(_QWORD *)&svtId);
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__) )
      return 1;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v9,
             (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    if ( Item )
    {
      v11 = Item;
      klass = Item[1].klass;
      monitor = Item[1].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
      *(_QWORD *)&v20.fields.currentCryptoKey = klass;
      *(_QWORD *)&v20.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v20, 0) == svtId )
      {
        v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v11[2].monitor;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, *(_QWORD *)&svtId);
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
  if ( !*(&VoicePlayCondMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo, *(_QWORD *)&svtId);
    v18 = VoicePlayCondMaster_TypeInfo;
  }
  return v17 == v18->static_fields->VOICE_PREFIX_NONE;
}


// local variable allocation has failed, the output may be wrong!
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
  Il2CppClass *klass; // x26
  void *monitor; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v17; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_5939813 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_21FFC50(&VoicePlayCondMaster_TypeInfo);
    byte_5939813 = 1;
  }
  list = (System_String_o **)VoicePlayCondMaster_TypeInfo;
  if ( !*(&VoicePlayCondMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo, *(_QWORD *)&svtId);
  if ( !voiceId )
    goto LABEL_23;
  list = (System_String_o **)System_String__Split(voiceId, 0x5Fu, 0, 0);
  if ( !list )
    goto LABEL_23;
  v9 = list;
  if ( *((int *)list + 6) >= 2 )
  {
    v10 = System_Int32__Parse(list[4], 0);
    if ( ((_DWORD)v9[3] & 0xFFFFFFFE) == 0 )
      sub_21FFED4(v10);
    voiceId = v9[5];
  }
  list = (System_String_o **)this->fields.list;
  if ( !list )
LABEL_23:
    sub_21FFECC(list, *(_QWORD *)&svtId);
  v11 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)list,
              (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
    if ( v11 >= Count )
      break;
    list = (System_String_o **)this->fields.list;
    if ( !list )
      goto LABEL_23;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v11,
             (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    if ( Item )
    {
      v14 = Item;
      klass = Item[1].klass;
      monitor = Item[1].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
      *(_QWORD *)&v21.fields.currentCryptoKey = klass;
      *(_QWORD *)&v21.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v21, 0) == svtId )
      {
        v17 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v14[2].monitor;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, *(_QWORD *)&svtId);
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
        BattleVoicePlayCondArgs_o *battleCondArgs,
        const MethodInfo *method)
{
  const MethodInfo *v9; // [xsp+0h] [xbp-20h]
  VoicePlayCondEntity_o *condEntity; // [xsp+18h] [xbp-8h] BYREF

  return VoicePlayCondMaster__isVoicePlay_50238472(
           this,
           svtId,
           voiceId,
           &condEntity,
           disableCondTypeList,
           userSvtId,
           genderType,
           battleCondArgs,
           v9);
}


bool VoicePlayCondMaster__isVoicePlay_50238472(
        VoicePlayCondMaster_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        VoicePlayCondEntity_o **condEntity,
        System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList,
        int64_t userSvtId,
        int32_t genderType,
        BattleVoicePlayCondArgs_o *battleCondArgs,
        const MethodInfo *method)
{
  System_String_o *v10; // x26
  const MethodInfo *v13; // x1
  void *lookup; // x0
  int32_t VOICE_PREFIX_NONE; // w27
  const MethodInfo *v16; // x4
  void *v17; // x19
  __int64 v18; // x0
  bool IsOpen; // w0
  int condGroup; // w21
  int32_t v21; // w28
  char v22; // w22
  __int64 v23; // x1
  const MethodInfo *v24; // x4
  VoicePlayCondMaster_c *v25; // x0
  System_String_o *PK; // x29
  _DWORD *v27; // x8
  void *v28; // x19
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  _DWORD *v32; // x8
  void *v33; // x19
  __int64 v34; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__c **v35; // x10
  __int64 v36; // x0
  VoicePlayCondEntity_o *v37; // x29
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  int32_t condType; // w19
  bool v45; // w8
  __int64 v46; // x1
  int32_t v47; // w29
  int32_t targetId; // w22
  int32_t CondValue; // w0
  __int64 v50; // x1
  int v51; // w9
  int32_t v52; // w19
  int32_t v53; // w29
  BattleVoicePlayCondArgs_o *battleCondArgsa; // [xsp+0h] [xbp-80h]

  v10 = voiceId;
  if ( (byte_5939812 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string__get_lookup__);
    sub_21FFC50(&System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CondType_Kind__Contains__);
    sub_21FFC50(&VoicePlayCondMaster_TypeInfo);
    byte_5939812 = 1;
  }
  *condEntity = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)condEntity,
    0,
    voiceId,
    (System_String_o *)condEntity,
    (int32_t)disableCondTypeList,
    userSvtId,
    genderType,
    (bool)battleCondArgs);
  lookup = VoicePlayCondMaster_TypeInfo;
  if ( !*(&VoicePlayCondMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo, v13);
    lookup = VoicePlayCondMaster_TypeInfo;
  }
  if ( !v10 || (VOICE_PREFIX_NONE = **((_DWORD **)lookup + 23), (lookup = System_String__Split(v10, 0x5Fu, 0, 0)) == 0) )
LABEL_54:
    sub_21FFECC(lookup, v13);
  v17 = lookup;
  if ( *((int *)lookup + 6) >= 2 )
  {
    v18 = System_Int32__Parse(*((System_String_o **)lookup + 4), 0);
    if ( (*((_DWORD *)v17 + 6) & 0xFFFFFFFE) == 0 )
      sub_21FFED4(v18);
    v10 = (System_String_o *)*((_QWORD *)v17 + 5);
    VOICE_PREFIX_NONE = v18;
  }
  IsOpen = 1;
  condGroup = 1;
  v21 = 1;
  while ( 1 )
  {
    v22 = IsOpen;
    if ( VoicePlayCondMaster__IsNotPrefix(this, svtId, v10, v21, v16) )
    {
      v25 = VoicePlayCondMaster_TypeInfo;
      if ( !*(&VoicePlayCondMaster_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo, v23);
        v25 = VoicePlayCondMaster_TypeInfo;
      }
      VOICE_PREFIX_NONE = v25->static_fields->VOICE_PREFIX_NONE;
    }
    PK = VoicePlayCondEntity__CreatePK(svtId, VOICE_PREFIX_NONE, v10, v21, v24);
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_3EDFD10 *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_54;
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
      v31 = sub_2237E2C(lookup, System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, _QWORD))v31)(v28, PK, *(_QWORD *)(v31 + 8)) & 1) == 0 )
      return v22 & 1;
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_3EDFD10 *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_54;
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
      v36 = sub_2237E2C(lookup, System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo, 2);
    }
    v37 = (VoicePlayCondEntity_o *)(*(__int64 (__fastcall **)(void *, System_String_o *, _QWORD))v36)(
                                     v33,
                                     PK,
                                     *(_QWORD *)(v36 + 8));
    *condEntity = v37;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)condEntity, (int32_t)v37, v38, v39, v40, v41, v42, v43);
    if ( !v37 )
      goto LABEL_54;
    ++v21;
    if ( condGroup != v37->fields.condGroup )
      break;
    IsOpen = 0;
    if ( (v22 & 1) != 0 )
    {
LABEL_35:
      condType = v37->fields.condType;
      if ( !disableCondTypeList
        || (v45 = System_Collections_Generic_List_Int32Enum___Contains(
                    (System_Collections_Generic_List_T__o *)disableCondTypeList,
                    condType,
                    (const MethodInfo_4435CD0 *)Method_System_Collections_Generic_List_CondType_Kind__Contains__),
            IsOpen = 1,
            !v45) )
      {
        if ( userSvtId < 0 )
          goto LABEL_44;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v13);
        if ( !CondType__IsLimitCountCondType(condType, 0) )
        {
LABEL_44:
          targetId = v37->fields.targetId;
          CondValue = VoicePlayCondEntity__getCondValue(v37, v13);
          v51 = *(&CondType_TypeInfo->_2.cctor_finished + 1);
          if ( genderType >= 1 && condType == 81 )
          {
            if ( !v51 )
            {
              v52 = CondValue;
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v50);
              CondValue = v52;
            }
            CondType__IsOpen(81, targetId, CondValue, 0, 0, 0);
            IsOpen = v37->fields.targetId == genderType;
          }
          else
          {
            if ( !v51 )
            {
              v53 = CondValue;
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v50);
              CondValue = v53;
            }
            IsOpen = CondType__IsOpen(condType, targetId, CondValue, 0, battleCondArgsa, 0);
          }
        }
        else
        {
          v47 = VoicePlayCondEntity__getCondValue(v37, v13);
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v46);
          IsOpen = CondType__IsOpenForUsrSvt(condType, v47, userSvtId, 0);
        }
      }
    }
  }
  condGroup = v37->fields.condGroup;
  if ( (v22 & 1) == 0 )
    goto LABEL_35;
  v22 = 1;
  return v22 & 1;
}