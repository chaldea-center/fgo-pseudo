void __fastcall VoicePlayCondMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A09B7C & 1) == 0 )
  {
    sub_1B686D4(&VoicePlayCondMaster_TypeInfo, v1);
    byte_4A09B7C = 1;
  }
  VoicePlayCondMaster_TypeInfo->static_fields->VOICE_PREFIX_NONE = -1;
}


void __fastcall VoicePlayCondMaster___ctor(VoicePlayCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A09B77 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__, method);
    byte_4A09B77 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    222,
    (const MethodInfo_30E47D8 *)Method_DataMasterBase_VoicePlayCondMaster__VoicePlayCondEntity__string___ctor__);
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

  if ( (byte_4A09B7B & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_VoicePlayCondEntity__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__, v7);
    sub_1B686D4(&System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo, v8);
    sub_1B686D4(&VoicePlayCondEntity_TypeInfo, v9);
    byte_4A09B7B = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_VoicePlayCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_VoicePlayCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v11;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v11, v16, v17);
        }
      }
      if ( v14 == ++v15 )
        return (System_Collections_Generic_List_VoicePlayCondEntity__o *)v10;
    }
LABEL_18:
    sub_1B68930(list, v11);
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

  if ( (byte_4A09B7A & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10);
    sub_1B686D4(&VoicePlayCondEntity_TypeInfo, v11);
    sub_1B686D4(&VoicePlayCondMaster_TypeInfo, v12);
    byte_4A09B7A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_1B68930(list, *(_QWORD *)&svtId);
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 1;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v14,
             (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v26, 0LL) == svtId )
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

  if ( (byte_4A09B79 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10);
    sub_1B686D4(&VoicePlayCondEntity_TypeInfo, v11);
    sub_1B686D4(&VoicePlayCondMaster_TypeInfo, v12);
    byte_4A09B79 = 1;
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
      sub_1B68938(v15, *(_QWORD *)&svtId);
    voiceId = v14[5];
  }
  list = (System_String_o **)this->fields.list;
  if ( !list )
LABEL_25:
    sub_1B68930(list, *(_QWORD *)&svtId);
  v16 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)list,
              (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v16 >= Count )
      break;
    list = (System_String_o **)this->fields.list;
    if ( !list )
      goto LABEL_25;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v16,
             (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v27, 0LL) == svtId )
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
        BattleVoicePlayCondArgs_o *battleCondArgs,
        const MethodInfo *method)
{
  const MethodInfo *v10; // [xsp+10h] [xbp-20h]
  VoicePlayCondEntity_o *condEntity; // [xsp+28h] [xbp-8h] BYREF

  return VoicePlayCondMaster__isVoicePlay_40044884(
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
bool __fastcall VoicePlayCondMaster__isVoicePlay_40044884(
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
  __int64 v20; // x1
  void *lookup; // x0
  int32_t VOICE_PREFIX_NONE; // w27
  const MethodInfo *v23; // x4
  void *v24; // x20
  __int64 v25; // x0
  __int64 v26; // x1
  bool IsStartingMember; // w0
  int condGroup; // w21
  int32_t v29; // w28
  bool v30; // w22
  const MethodInfo *v31; // x4
  VoicePlayCondMaster_c *v32; // x0
  System_String_o *PK; // x29
  _DWORD *v34; // x8
  void *v35; // x20
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  _DWORD *v39; // x8
  void *v40; // x20
  __int64 v41; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v42; // x10
  __int64 v43; // x0
  VoicePlayCondEntity_o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  VoicePlayCondEntity_o *v47; // x29
  __int64 methodPtr_low; // x10
  const MethodInfo *v49; // x1
  int32_t condType; // w20
  bool v51; // w8
  int32_t v52; // w29
  int32_t v53; // w22
  int32_t CondValue; // w20
  bool v55; // w0
  const MethodInfo *v56; // x1
  int32_t v57; // w20
  int32_t v58; // w29
  int32_t v59; // w29
  int32_t targetId; // [xsp+Ch] [xbp-94h]
  UnityEngine_Object_o *x; // [xsp+20h] [xbp-80h]

  v12 = voiceId;
  if ( (byte_4A09B78 & 1) == 0 )
  {
    sub_1B686D4(&CondType_TypeInfo, *(_QWORD *)&svtId);
    sub_1B686D4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v15);
    sub_1B686D4(&Method_System_Collections_Generic_List_CondType_Kind__Contains__, v16);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v17);
    sub_1B686D4(&VoicePlayCondEntity_TypeInfo, v18);
    sub_1B686D4(&VoicePlayCondMaster_TypeInfo, v19);
    byte_4A09B78 = 1;
  }
  *condEntity = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)condEntity, 0, (int32_t)voiceId, (int32_t)condEntity);
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
    sub_1B68930(lookup, v20);
  }
  v24 = lookup;
  if ( *((int *)lookup + 6) >= 2 )
  {
    v25 = System_Int32__Parse(*((System_String_o **)lookup + 4), 0LL);
    if ( *((_DWORD *)v24 + 6) <= 1u )
      sub_1B68938(v25, v26);
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
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_65;
    v34 = *(_DWORD **)lookup;
    v35 = lookup;
    v36 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
    if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
    {
      v37 = (int *)(*((_QWORD *)v34 + 22) + 8LL);
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v37 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
      v38 = sub_1BBA6B4(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, _QWORD))v38)(v35, PK, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      return v30;
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_65;
    v39 = *(_DWORD **)lookup;
    v40 = lookup;
    v41 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
    if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
    {
      v42 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*((_QWORD *)v39 + 22) + 8LL);
      while ( *(v42 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
      v43 = sub_1BBA6B4(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    v44 = (VoicePlayCondEntity_o *)(*(__int64 (__fastcall **)(void *, System_String_o *, _QWORD))v43)(
                                     v40,
                                     PK,
                                     *(_QWORD *)(v43 + 8));
    if ( !v44
      || (v47 = v44,
          methodPtr_low = LOBYTE(VoicePlayCondEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v44->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (VoicePlayCondEntity_c *)v44->klass->_2.typeHierarchy[methodPtr_low - 1] != VoicePlayCondEntity_TypeInfo )
    {
      *condEntity = 0LL;
      sub_1B68678((ServantStatusBattleListViewItem_o *)condEntity, 0, v45, v46);
      goto LABEL_65;
    }
    ++v29;
    *condEntity = v44;
    sub_1B68678((ServantStatusBattleListViewItem_o *)condEntity, (int32_t)v44, v45, v46);
    if ( condGroup == v47->fields.condGroup )
    {
      IsStartingMember = 0;
      if ( v30 )
        goto LABEL_37;
    }
    else
    {
      condGroup = v47->fields.condGroup;
      if ( v30 )
        return v30;
LABEL_37:
      condType = v47->fields.condType;
      if ( !disableCondTypeList
        || (v51 = System_Collections_Generic_List_Int32Enum___Contains(
                    (System_Collections_Generic_List_T__o *)disableCondTypeList,
                    condType,
                    (const MethodInfo_34A1DF8 *)Method_System_Collections_Generic_List_CondType_Kind__Contains__),
            IsStartingMember = 1,
            !v51) )
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
            v53 = v47->fields.targetId;
            CondValue = VoicePlayCondEntity__getCondValue(v47, v49);
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            CondType__IsOpen(81, v53, CondValue, 0, 0LL, 0LL);
            IsStartingMember = v47->fields.targetId == genderType;
          }
          else
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v55 = UnityEngine_Object__op_Inequality(x, 0LL, 0LL);
            if ( condType == 216 && v55 )
            {
              v57 = v47->fields.targetId;
              v58 = VoicePlayCondEntity__getCondValue(v47, v56);
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              IsStartingMember = CondType__IsStartingMember(v57, v58, (BattleData_o *)x, 0LL);
            }
            else
            {
              targetId = v47->fields.targetId;
              v59 = VoicePlayCondEntity__getCondValue(v47, v56);
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              if ( (unsigned int)(condType - 225) > 1 )
                IsStartingMember = CondType__IsOpen(condType, targetId, v59, 0, battleCondArgs, 0LL);
              else
                IsStartingMember = CondType__IsOpenBattlePoint(condType, targetId, v59, battleServantData, 0LL);
            }
          }
        }
        else
        {
          v52 = VoicePlayCondEntity__getCondValue(v47, v49);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsStartingMember = CondType__IsOpenForUsrSvt(condType, v52, userSvtId, 0LL);
        }
      }
    }
  }
}