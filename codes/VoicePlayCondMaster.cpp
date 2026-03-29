void VoicePlayCondMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4D31AE1 & 1) == 0 )
  {
    sub_1C93AD4(&VoicePlayCondMaster_TypeInfo);
    byte_4D31AE1 = 1;
  }
  VoicePlayCondMaster_TypeInfo->static_fields->VOICE_PREFIX_NONE = -1;
}


void VoicePlayCondMaster___ctor(VoicePlayCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D31ADC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
    byte_4D31ADC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    228,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4D31AE0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_VoicePlayCondEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo);
    byte_4D31AE0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
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
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
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
            *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v6;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
        }
      }
      if ( v9 == ++v10 )
        return (System_Collections_Generic_List_VoicePlayCondEntity__o *)v5;
    }
LABEL_16:
    sub_1C93D2C(list, v6);
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
  void *monitor; // x25
  Il2CppClass *klass; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v14; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v15; // x0
  int v17; // w19
  VoicePlayCondMaster_c *v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4D31ADF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C93AD4(&VoicePlayCondMaster_TypeInfo);
    byte_4D31ADF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1C93D2C(list, *(_QWORD *)&svtId);
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__) )
      return 1;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v9,
             (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    if ( Item )
    {
      v11 = Item;
      klass = Item[1].klass;
      monitor = Item[1].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v20.fields.currentCryptoKey = klass;
      *(_QWORD *)&v20.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v20, 0) == svtId )
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
  void *monitor; // x26
  Il2CppClass *klass; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v17; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4D31ADE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C93AD4(&VoicePlayCondMaster_TypeInfo);
    byte_4D31ADE = 1;
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
      sub_1C93D34(v10);
    voiceId = v9[5];
  }
  list = (System_String_o **)this->fields.list;
  if ( !list )
LABEL_23:
    sub_1C93D2C(list, *(_QWORD *)&svtId);
  v11 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)list,
              (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Count__);
    if ( v11 >= Count )
      break;
    list = (System_String_o **)this->fields.list;
    if ( !list )
      goto LABEL_23;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v11,
             (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_VoicePlayCondEntity__get_Item__);
    if ( Item )
    {
      v14 = Item;
      klass = Item[1].klass;
      monitor = Item[1].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v21.fields.currentCryptoKey = klass;
      *(_QWORD *)&v21.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v21, 0) == svtId )
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
        BattleVoicePlayCondArgs_o *battleCondArgs,
        const MethodInfo *method)
{
  const MethodInfo *v9; // [xsp+0h] [xbp-20h]
  VoicePlayCondEntity_o *condEntity; // [xsp+18h] [xbp-8h] BYREF

  return VoicePlayCondMaster__isVoicePlay_43981236(
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


// local variable allocation has failed, the output may be wrong!
bool VoicePlayCondMaster__isVoicePlay_43981236(
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
  bool v22; // w22
  const MethodInfo *v23; // x4
  VoicePlayCondMaster_c *v24; // x0
  System_String_o *PK; // x29
  _DWORD *v26; // x8
  void *v27; // x19
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  _DWORD *v31; // x8
  void *v32; // x19
  __int64 v33; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__c **v34; // x10
  __int64 v35; // x0
  VoicePlayCondEntity_o *v36; // x29
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int32_t v43; // w19
  bool v44; // w8
  int32_t v45; // w29
  bool v46; // w22
  int32_t CondValue; // w19
  int32_t condType; // [xsp+4h] [xbp-8Ch]
  BattleVoicePlayCondArgs_o *battleCondArgsa; // [xsp+8h] [xbp-88h]
  int32_t targetId; // [xsp+18h] [xbp-78h]

  v10 = voiceId;
  if ( (byte_4D31ADD & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string__get_lookup__);
    sub_1C93AD4(&System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_CondType_Kind__Contains__);
    sub_1C93AD4(&VoicePlayCondMaster_TypeInfo);
    byte_4D31ADD = 1;
  }
  *condEntity = 0;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)condEntity,
    0,
    (int32_t)voiceId,
    (int32_t)condEntity,
    (System_String_o *)disableCondTypeList,
    userSvtId,
    *(int64_t *)&genderType,
    (System_String_o *)battleCondArgs);
  lookup = VoicePlayCondMaster_TypeInfo;
  if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
    lookup = VoicePlayCondMaster_TypeInfo;
  }
  if ( !v10 || (VOICE_PREFIX_NONE = **((_DWORD **)lookup + 23), (lookup = System_String__Split(v10, 0x5Fu, 0, 0)) == 0) )
LABEL_50:
    sub_1C93D2C(lookup, v13);
  v17 = lookup;
  if ( *((int *)lookup + 6) >= 2 )
  {
    v18 = System_Int32__Parse(*((System_String_o **)lookup + 4), 0);
    if ( *((_DWORD *)v17 + 6) <= 1u )
      sub_1C93D34(v18);
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
      v24 = VoicePlayCondMaster_TypeInfo;
      if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
        v24 = VoicePlayCondMaster_TypeInfo;
      }
      VOICE_PREFIX_NONE = v24->static_fields->VOICE_PREFIX_NONE;
    }
    PK = VoicePlayCondEntity__CreatePK(svtId, VOICE_PREFIX_NONE, v10, v21, v23);
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_3465D74 *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_50;
    v26 = *(_DWORD **)lookup;
    v27 = lookup;
    v28 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
    if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
    {
      v29 = (int *)(*((_QWORD *)v26 + 22) + 8LL);
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__c **)v29 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_20;
      }
      v30 = (__int64)&v26[4 * *v29 + 78];
    }
    else
    {
LABEL_20:
      v30 = sub_1C69E5C(lookup, System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, _QWORD))v30)(v27, PK, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      return v22;
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_3465D74 *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_50;
    v31 = *(_DWORD **)lookup;
    v32 = lookup;
    v33 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
    if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
    {
      v34 = (System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__c **)(*((_QWORD *)v31 + 22)
                                                                                             + 8LL);
      while ( *(v34 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo )
      {
        --v33;
        v34 += 2;
        if ( !v33 )
          goto LABEL_28;
      }
      v35 = (__int64)&v31[4 * *(_DWORD *)v34 + 86];
    }
    else
    {
LABEL_28:
      v35 = sub_1C69E5C(lookup, System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayCondEntity__TypeInfo, 2);
    }
    v36 = (VoicePlayCondEntity_o *)(*(__int64 (__fastcall **)(void *, System_String_o *, _QWORD))v35)(
                                     v32,
                                     PK,
                                     *(_QWORD *)(v35 + 8));
    *condEntity = v36;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)condEntity, (int32_t)v36, v37, v38, v39, v40, v41, v42);
    if ( !v36 )
      goto LABEL_50;
    ++v21;
    if ( condGroup == v36->fields.condGroup )
    {
      IsOpen = 0;
      if ( v22 )
        goto LABEL_35;
    }
    else
    {
      condGroup = v36->fields.condGroup;
      if ( v22 )
        return v22;
LABEL_35:
      v43 = v36->fields.condType;
      if ( !disableCondTypeList
        || (v44 = System_Collections_Generic_List_Int32Enum___Contains(
                    (System_Collections_Generic_List_T__o *)disableCondTypeList,
                    v43,
                    (const MethodInfo_385F51C *)Method_System_Collections_Generic_List_CondType_Kind__Contains__),
            IsOpen = 1,
            !v44) )
      {
        if ( userSvtId < 0 )
          goto LABEL_44;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsLimitCountCondType(v43, 0) )
        {
LABEL_44:
          condType = v43;
          targetId = v36->fields.targetId;
          v46 = v43 == 81;
          CondValue = VoicePlayCondEntity__getCondValue(v36, v13);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( genderType > 0 && v46 )
          {
            CondType__IsOpen(81, targetId, CondValue, 0, 0, 0);
            IsOpen = v36->fields.targetId == genderType;
          }
          else
          {
            IsOpen = CondType__IsOpen(condType, targetId, CondValue, 0, battleCondArgsa, 0);
          }
        }
        else
        {
          v45 = VoicePlayCondEntity__getCondValue(v36, v13);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpenForUsrSvt(v43, v45, userSvtId, 0);
        }
      }
    }
  }
}