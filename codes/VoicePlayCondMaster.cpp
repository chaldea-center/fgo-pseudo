void __fastcall VoicePlayCondMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FF414 & 1) == 0 )
  {
    sub_1B64870(&VoicePlayCondMaster_TypeInfo, v1);
    byte_49FF414 = 1;
  }
  VoicePlayCondMaster_TypeInfo->static_fields->VOICE_PREFIX_NONE = -1;
}


void __fastcall VoicePlayCondMaster___ctor(VoicePlayCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF40F & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__, method);
    byte_49FF40F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    222,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
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
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w23
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_49FF413 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_VoicePlayCondEntity__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__, v7);
    sub_1B64870(&System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo, v8);
    sub_1B64870(&VoicePlayCondEntity_TypeInfo, v9);
    byte_49FF413 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v11 = list;
      methodPtr_low = LOBYTE(VoicePlayCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (VoicePlayCondEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != VoicePlayCondEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list[2].monitor) == groupId )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v20 = Method_System_Collections_Generic_List_VoicePlayCondEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v11;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v11, v16, v17);
        }
      }
      if ( v14 == ++v15 )
        return (System_Collections_Generic_List_VoicePlayCondEntity__o *)v10;
    }
LABEL_18:
    sub_1B64ACC(list, v11);
  }
  return (System_Collections_Generic_List_VoicePlayCondEntity__o *)v10;
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
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v16; // x24
  __int64 methodPtr_low; // x10
  void *monitor; // x25
  Il2CppClass *klass; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v20; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v21; // x0
  int v23; // w19
  VoicePlayCondMaster_c *v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_49FF412 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10);
    sub_1B64870(&VoicePlayCondEntity_TypeInfo, v11);
    sub_1B64870(&VoicePlayCondMaster_TypeInfo, v12);
    byte_49FF412 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_1B64ACC(list, *(_QWORD *)&svtId);
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 1;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v14,
             (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v16 = Item;
      methodPtr_low = LOBYTE(VoicePlayCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (VoicePlayCondEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == VoicePlayCondEntity_TypeInfo )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v26.fields.currentCryptoKey = klass;
        *(_QWORD *)&v26.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v26, 0LL) == svtId )
        {
          v20 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v16[2].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v20, v21, 0LL)
            && LODWORD(v16[3].klass) == idx )
          {
            break;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_18;
  }
  v23 = (int)v16[2].klass;
  v24 = VoicePlayCondMaster_TypeInfo;
  if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
    v24 = VoicePlayCondMaster_TypeInfo;
  }
  return v23 == v24->static_fields->VOICE_PREFIX_NONE;
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
  __int64 v12; // x1
  System_String_o **list; // x0
  System_String_o **v14; // x23
  __int64 v15; // x0
  int32_t v16; // w23
  int32_t Count; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v19; // x25
  __int64 methodPtr_low; // x10
  void *monitor; // x26
  Il2CppClass *klass; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v23; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_49FF411 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10);
    sub_1B64870(&VoicePlayCondEntity_TypeInfo, v11);
    sub_1B64870(&VoicePlayCondMaster_TypeInfo, v12);
    byte_49FF411 = 1;
  }
  list = (System_String_o **)VoicePlayCondMaster_TypeInfo;
  if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
  if ( !voiceId )
    goto LABEL_25;
  list = (System_String_o **)System_String__Split(voiceId, 0x5Fu, 0, 0LL);
  if ( !list )
    goto LABEL_25;
  v14 = list;
  if ( *((int *)list + 6) >= 2 )
  {
    v15 = System_Int32__Parse(list[4], 0LL);
    if ( *((_DWORD *)v14 + 6) <= 1u )
      sub_1B64AD4(v15, *(_QWORD *)&svtId);
    voiceId = v14[5];
  }
  list = (System_String_o **)this->fields.list;
  if ( !list )
LABEL_25:
    sub_1B64ACC(list, *(_QWORD *)&svtId);
  v16 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)list,
              (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v16 >= Count )
      break;
    list = (System_String_o **)this->fields.list;
    if ( !list )
      goto LABEL_25;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v16,
             (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v19 = Item;
      methodPtr_low = LOBYTE(VoicePlayCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (VoicePlayCondEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == VoicePlayCondEntity_TypeInfo )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v27.fields.currentCryptoKey = klass;
        *(_QWORD *)&v27.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v27, 0LL) == svtId )
        {
          v23 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v19[2].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v23, v24, 0LL)
            && LODWORD(v19[3].monitor) == cond )
          {
            break;
          }
        }
      }
    }
    list = (System_String_o **)this->fields.list;
    ++v16;
    if ( !list )
      goto LABEL_25;
  }
  return v16 < Count;
}


bool __fastcall VoicePlayCondMaster__isVoicePlay(
        VoicePlayCondMaster_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList,
        int64_t userSvtId,
        int32_t genderType,
        BattleServantData_o *battleServantData,
        const MethodInfo *method)
{
  const MethodInfo *v9; // [xsp+8h] [xbp-18h]
  VoicePlayCondEntity_o *condEntity; // [xsp+18h] [xbp-8h] BYREF

  return VoicePlayCondMaster__isVoicePlay_39981992(
           this,
           svtId,
           voiceId,
           &condEntity,
           disableCondTypeList,
           userSvtId,
           genderType,
           0LL,
           battleServantData,
           v9);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoicePlayCondMaster__isVoicePlay_39981992(
        VoicePlayCondMaster_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        VoicePlayCondEntity_o **condEntity,
        System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList,
        int64_t userSvtId,
        int32_t genderType,
        BattleData_o *battleData,
        BattleServantData_o *battleServantData,
        const MethodInfo *method)
{
  System_String_o *v11; // x26
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  void *lookup; // x0
  int32_t VOICE_PREFIX_NONE; // w27
  const MethodInfo *v22; // x4
  void *v23; // x20
  __int64 v24; // x0
  __int64 v25; // x1
  bool IsStartingMember; // w0
  int condGroup; // w21
  int32_t v28; // w29
  bool v29; // w22
  const MethodInfo *v30; // x4
  VoicePlayCondMaster_c *v31; // x0
  System_String_o *PK; // x28
  _DWORD *v33; // x8
  void *v34; // x20
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  _DWORD *v38; // x8
  void *v39; // x20
  __int64 v40; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v41; // x10
  __int64 v42; // x0
  VoicePlayCondEntity_o *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  VoicePlayCondEntity_o *v46; // x28
  __int64 methodPtr_low; // x10
  const MethodInfo *v48; // x1
  int32_t condType; // w20
  bool v50; // w8
  int32_t v51; // w28
  int32_t v52; // w22
  int32_t CondValue; // w20
  bool v54; // w0
  const MethodInfo *v55; // x1
  int32_t v56; // w20
  int32_t v57; // w28
  int32_t v58; // w28
  int32_t targetId; // [xsp+4h] [xbp-8Ch]
  UnityEngine_Object_o *x; // [xsp+10h] [xbp-80h]

  v11 = voiceId;
  if ( (byte_49FF410 & 1) == 0 )
  {
    sub_1B64870(&CondType_TypeInfo, *(_QWORD *)&svtId);
    sub_1B64870(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_CondType_Kind__Contains__, v15);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v16);
    sub_1B64870(&VoicePlayCondEntity_TypeInfo, v17);
    sub_1B64870(&VoicePlayCondMaster_TypeInfo, v18);
    byte_49FF410 = 1;
  }
  *condEntity = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)condEntity, 0, (int32_t)voiceId, (int32_t)condEntity);
  lookup = VoicePlayCondMaster_TypeInfo;
  if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
    lookup = VoicePlayCondMaster_TypeInfo;
  }
  if ( !v11
    || (VOICE_PREFIX_NONE = **((_DWORD **)lookup + 23), (lookup = System_String__Split(v11, 0x5Fu, 0, 0LL)) == 0LL) )
  {
LABEL_65:
    sub_1B64ACC(lookup, v19);
  }
  v23 = lookup;
  if ( *((int *)lookup + 6) >= 2 )
  {
    v24 = System_Int32__Parse(*((System_String_o **)lookup + 4), 0LL);
    if ( *((_DWORD *)v23 + 6) <= 1u )
      sub_1B64AD4(v24, v25);
    v11 = (System_String_o *)*((_QWORD *)v23 + 5);
    VOICE_PREFIX_NONE = v24;
  }
  IsStartingMember = 1;
  condGroup = 1;
  v28 = 1;
  while ( 1 )
  {
    v29 = IsStartingMember;
    if ( VoicePlayCondMaster__IsNotPrefix(this, svtId, v11, v28, v22) )
    {
      v31 = VoicePlayCondMaster_TypeInfo;
      if ( !VoicePlayCondMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoicePlayCondMaster_TypeInfo);
        v31 = VoicePlayCondMaster_TypeInfo;
      }
      VOICE_PREFIX_NONE = v31->static_fields->VOICE_PREFIX_NONE;
    }
    PK = VoicePlayCondEntity__CreatePK(svtId, VOICE_PREFIX_NONE, v11, v28, v30);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_65;
    v33 = *(_DWORD **)lookup;
    v34 = lookup;
    v35 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
    if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
    {
      v36 = (int *)(*((_QWORD *)v33 + 22) + 8LL);
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v36 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_20;
      }
      v37 = (__int64)&v33[4 * *v36 + 78];
    }
    else
    {
LABEL_20:
      v37 = sub_1BB6850(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, _QWORD))v37)(v34, PK, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      return v29;
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_65;
    v38 = *(_DWORD **)lookup;
    v39 = lookup;
    v40 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
    if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
    {
      v41 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*((_QWORD *)v38 + 22) + 8LL);
      while ( *(v41 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v40;
        v41 += 2;
        if ( !v40 )
          goto LABEL_28;
      }
      v42 = (__int64)&v38[4 * *(_DWORD *)v41 + 86];
    }
    else
    {
LABEL_28:
      v42 = sub_1BB6850(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    v43 = (VoicePlayCondEntity_o *)(*(__int64 (__fastcall **)(void *, System_String_o *, _QWORD))v42)(
                                     v39,
                                     PK,
                                     *(_QWORD *)(v42 + 8));
    if ( !v43
      || (v46 = v43,
          methodPtr_low = LOBYTE(VoicePlayCondEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v43->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (VoicePlayCondEntity_c *)v43->klass->_2.typeHierarchy[methodPtr_low - 1] != VoicePlayCondEntity_TypeInfo )
    {
      *condEntity = 0LL;
      sub_1B64814((ServantStatusBattleListViewItem_o *)condEntity, 0, v44, v45);
      goto LABEL_65;
    }
    ++v28;
    *condEntity = v43;
    sub_1B64814((ServantStatusBattleListViewItem_o *)condEntity, (int32_t)v43, v44, v45);
    if ( condGroup == v46->fields.condGroup )
    {
      IsStartingMember = 0;
      if ( v29 )
        goto LABEL_37;
    }
    else
    {
      condGroup = v46->fields.condGroup;
      if ( v29 )
        return v29;
LABEL_37:
      condType = v46->fields.condType;
      if ( !disableCondTypeList
        || (v50 = System_Collections_Generic_List_Int32Enum___Contains(
                    (System_Collections_Generic_List_T__o *)disableCondTypeList,
                    condType,
                    (const MethodInfo_3494DFC *)Method_System_Collections_Generic_List_CondType_Kind__Contains__),
            IsStartingMember = 1,
            !v50) )
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
            v52 = v46->fields.targetId;
            CondValue = VoicePlayCondEntity__getCondValue(v46, v48);
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            CondType__IsOpen(81, v52, CondValue, 0, 0LL);
            IsStartingMember = v46->fields.targetId == genderType;
          }
          else
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v54 = UnityEngine_Object__op_Inequality(x, 0LL, 0LL);
            if ( condType == 216 && v54 )
            {
              v56 = v46->fields.targetId;
              v57 = VoicePlayCondEntity__getCondValue(v46, v55);
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              IsStartingMember = CondType__IsStartingMember(v56, v57, (BattleData_o *)x, 0LL);
            }
            else
            {
              targetId = v46->fields.targetId;
              v58 = VoicePlayCondEntity__getCondValue(v46, v55);
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              if ( (unsigned int)(condType - 225) > 1 )
                IsStartingMember = CondType__IsOpen(condType, targetId, v58, 0, 0LL);
              else
                IsStartingMember = CondType__IsOpenBattlePoint(condType, targetId, v58, battleServantData, 0LL);
            }
          }
        }
        else
        {
          v51 = VoicePlayCondEntity__getCondValue(v46, v48);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsStartingMember = CondType__IsOpenForUsrSvt(condType, v51, userSvtId, 0LL);
        }
      }
    }
  }
}