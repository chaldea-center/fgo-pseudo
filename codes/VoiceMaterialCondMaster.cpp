void VoiceMaterialCondMaster___ctor(VoiceMaterialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59719C6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__);
    byte_59719C6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    299,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__);
}


System_Collections_Generic_List_VoiceMaterialCondEntity__o *VoiceMaterialCondMaster__GetEntityList(
        VoiceMaterialCondMaster_o *this,
        int32_t servantId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x19
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x23
  __int64 v27; // x24
  __int64 v28; // x25
  __int64 v29; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v30; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v31; // x1
  _BOOL8 v32; // x0
  __int64 v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  System_Collections_Generic_IEnumerator_T__o *v49; // [xsp+18h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_59719C7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_VoiceMaterialCondEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_VoiceMaterialCondEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_59719C7 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v10);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_VoiceMaterialCondEntity__GetEnumerator__);
  v49 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v13);
  for ( i = Enumerator; ; i = v49 )
  {
    klass = i->klass;
    v16 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v18 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            i,
            *(_QWORD *)(v18 + 8));
    if ( (v19 & 1) == 0 )
      break;
    if ( !v49 )
      sub_2213CDC(v19, v20);
    v21 = v49->klass;
    v22 = *(unsigned __int16 *)&v49->klass->_2.rank;
    if ( *(_WORD *)&v49->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_VoiceMaterialCondEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_VoiceMaterialCondEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_18;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_18:
      v24 = sub_224BC3C(v49, System_Collections_Generic_IEnumerator_VoiceMaterialCondEntity__TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            v49,
            *(_QWORD *)(v24 + 8));
    if ( !v26 )
      sub_2213CDC(0, v25);
    v27 = *(_QWORD *)(v26 + 16);
    v28 = *(_QWORD *)(v26 + 24);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    *(_QWORD *)&v50.fields.currentCryptoKey = v27;
    *(_QWORD *)&v50.fields.fakeValue = v28;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v50, 0) == servantId
      && *(_DWORD *)(v26 + 32) == voicePrefix )
    {
      v30 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)(v26 + 40);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v29);
      v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0);
      v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v30, v31, 0);
      if ( v32 )
      {
        if ( !v9
          || (items = v9->fields._items,
              v41 = Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__,
              ++v9->fields._version,
              !items) )
        {
          sub_2213CDC(v32, v33);
        }
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)v26,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v26;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 4), v26, v34, v35, v36, v37, v38, v39);
        }
      }
    }
  }
  if ( v49 )
  {
    v44 = v49->klass;
    v45 = *(unsigned __int16 *)&v49->klass->_2.rank;
    if ( *(_WORD *)&v49->klass->_2.rank )
    {
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_40;
      }
      v47 = (__int64)&v44->vtable[*v46];
    }
    else
    {
LABEL_40:
      v47 = sub_224BC3C(v49, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(v49, *(_QWORD *)(v47 + 8));
  }
  return (System_Collections_Generic_List_VoiceMaterialCondEntity__o *)v9;
}


System_Collections_Generic_List_int__o *VoiceMaterialCondMaster__GetPlayableLimitCountList(
        VoiceMaterialCondMaster_o *this,
        int32_t servantId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x19
  const MethodInfo *v10; // x4
  System_Collections_Generic_List_object__o *EntityList; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_T__o *v15; // x21
  System_Collections_Generic_List_int__o *v16; // x20
  __int64 v18; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o *v19; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_59719C8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_59719C8 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v9 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = (System_Collections_Generic_List_object__o *)VoiceMaterialCondMaster__GetEntityList(
                                                              this,
                                                              servantId,
                                                              voicePrefix,
                                                              voiceId,
                                                              v10);
  if ( !EntityList )
    sub_2213CDC(0, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    EntityList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__);
  v18 = 0;
  v19 = &v20;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__);
    if ( !v13 )
      break;
    if ( !v20.fields._current )
      sub_2213CDC(v13, v14);
    if ( *(_DWORD *)((char *)&v20.fields._current->klass + (unsigned __int64)&word_38) == 103 )
    {
      v15 = *(System_Collections_Generic_IEnumerable_T__o **)((char *)&v20.fields._current->klass
                                                            + (unsigned __int64)&dword_40);
      v16 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_71723804(
        v16,
        v15,
        (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
      return v16;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
  return v9;
}


// local variable allocation has failed, the output may be wrong!
bool VoiceMaterialCondMaster__IsVoicePlay(
        VoiceMaterialCondMaster_o *this,
        int32_t svtId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        int32_t limitCount,
        const MethodInfo *method)
{
  bool IsOpen; // w8
  int condGroup; // w19
  int32_t v12; // w24
  char v13; // w27
  System_String_o *PK; // x25
  VoiceMaterialCondEntity_o *lookup; // x0
  const MethodInfo *v16; // x1
  VoiceMaterialCondEntity_c *klass; // x8
  VoiceMaterialCondEntity_o *v18; // x26
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  VoiceMaterialCondEntity_c *v22; // x8
  VoiceMaterialCondEntity_o *v23; // x26
  __int64 v24; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__c **v25; // x10
  __int64 v26; // x0
  int32_t condType; // w25
  struct System_Int32_array *condValues; // x9
  int max_length; // w8
  int v30; // w10
  int32_t targetId; // w26
  __int64 v32; // x1
  int32_t CondValue; // w27

  if ( (byte_59719C9 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo);
    byte_59719C9 = 1;
  }
  IsOpen = 1;
  condGroup = 1;
  v12 = 1;
  while ( 1 )
  {
    v13 = IsOpen;
    PK = VoiceMaterialCondEntity__CreatePK(svtId, voicePrefix, voiceId, v12, *(const MethodInfo **)&limitCount);
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            (const MethodInfo_3F134B8 *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string__get_lookup__);
    if ( !lookup )
LABEL_39:
      sub_2213CDC(lookup, v16);
    klass = lookup->klass;
    v18 = lookup;
    v19 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      v21 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_9:
      v21 = sub_224BC3C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo,
              0);
    }
    if ( ((*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v21)(
            v18,
            PK,
            *(_QWORD *)(v21 + 8))
        & 1) == 0 )
      return v13 & 1;
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            (const MethodInfo_3F134B8 *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_39;
    v22 = lookup->klass;
    v23 = lookup;
    v24 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      v25 = (System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__c **)&v22->_1.interfaceOffsets->offset;
      while ( *(v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo )
      {
        --v24;
        v25 += 2;
        if ( !v24 )
          goto LABEL_17;
      }
      v26 = (__int64)(&v22->vtable._2_GetHashCode + *(_DWORD *)v25);
    }
    else
    {
LABEL_17:
      v26 = sub_224BC3C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo,
              2);
    }
    lookup = (VoiceMaterialCondEntity_o *)(*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v26)(
                                            v23,
                                            PK,
                                            *(_QWORD *)(v26 + 8));
    if ( !lookup )
      goto LABEL_39;
    ++v12;
    if ( condGroup == lookup->fields.condGroup )
    {
      IsOpen = 0;
      if ( (v13 & 1) != 0 )
        goto LABEL_24;
    }
    else
    {
      condGroup = lookup->fields.condGroup;
      if ( (v13 & 1) != 0 )
      {
        v13 = 1;
        return v13 & 1;
      }
LABEL_24:
      condType = lookup->fields.condType;
      if ( condType == 103 )
      {
        condValues = lookup->fields.condValues;
        if ( !condValues )
          goto LABEL_39;
        max_length = condValues->max_length;
        if ( max_length < 1 )
        {
          v30 = 0;
        }
        else
        {
          v30 = 0;
          do
          {
            if ( max_length == v30 )
              sub_2213CE4(lookup);
            if ( condValues->m_Items[v30] == limitCount )
              break;
            ++v30;
          }
          while ( (max_length & ~(max_length >> 31)) != v30 );
        }
        IsOpen = v30 < max_length;
      }
      else
      {
        targetId = lookup->fields.targetId;
        CondValue = VoiceMaterialCondEntity__getCondValue(lookup, v16);
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v32);
        IsOpen = CondType__IsOpen(condType, targetId, CondValue, 0, 0, 0);
      }
    }
  }
}