void __fastcall SkillInfo___ctor(SkillInfo_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w1
  struct System_String_o **p_explanation; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B033F0 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4B033F0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.id = 0LL;
  this->fields.charge = 0;
  v3 = (int)StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.title, v3, v4, v5);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_explanation = &this->fields.explanation;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_explanation, v6, v8, v9);
  *((_BYTE *)p_explanation + 16) = 0;
  p_explanation[1] = 0LL;
}


bool __fastcall SkillInfo__Equals(SkillInfo_o *this, SkillInfo_o *info, const MethodInfo *method)
{
  int32_t id; // w8

  id = this->fields.id;
  if ( info )
  {
    if ( id != info->fields.id )
      return 0;
    return this->fields.lv == info->fields.lv;
  }
  else
  {
    return id == 0;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillInfo__GetMargeExplanation(
        SkillInfo_array *skillInfoList,
        bool isEquipExplanation,
        const MethodInfo *method)
{
  SkillInfo_array *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x24
  System_Text_StringBuilder_o *v8; // x20
  __int64 v9; // x2
  unsigned __int64 v10; // x22
  bool v11; // w25
  SkillInfo_o *v12; // x8
  System_String_o *explanation; // x21

  v4 = skillInfoList;
  if ( (byte_4B033EE & 1) == 0 )
  {
    sub_1BC3008(&System_Text_StringBuilder_TypeInfo, isEquipExplanation);
    sub_1BC3008(&StringLiteral_332/*" ＋ "*/, v5);
    skillInfoList = (SkillInfo_array *)sub_1BC3008(&StringLiteral_328/*" ……"*/, v6);
    byte_4B033EE = 1;
  }
  if ( !v4 )
    goto LABEL_19;
  v7 = *(_QWORD *)&v4->max_length;
  v8 = (System_Text_StringBuilder_o *)sub_1BC3254(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_62425944(v8, 1024, 0LL);
  if ( (int)v7 >= 1 )
  {
    v10 = 0LL;
    v11 = !isEquipExplanation;
    do
    {
      if ( v10 >= v4->max_length )
        sub_1BC326C(skillInfoList, isEquipExplanation, v9);
      v12 = v4->m_Items[v10];
      if ( v12 )
      {
        explanation = v12->fields.explanation;
        skillInfoList = (SkillInfo_array *)System_String__IsNullOrEmpty(explanation, 0LL);
        if ( ((unsigned __int8)skillInfoList & 1) == 0 )
        {
          if ( !v8 )
            goto LABEL_19;
          if ( v10 >= 2 && !v11 )
          {
            System_Text_StringBuilder__Append_62432592(v8, (System_String_o *)StringLiteral_328/*" ……"*/, 0LL);
            return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                                        v8,
                                        v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          }
          if ( System_Text_StringBuilder__get_Length(v8, 0LL) >= 1 )
            System_Text_StringBuilder__Append_62432592(v8, (System_String_o *)StringLiteral_332/*" ＋ "*/, 0LL);
          skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_62432592(v8, explanation, 0LL);
        }
      }
    }
    while ( (unsigned int)v7 != ++v10 );
  }
  if ( !v8 )
LABEL_19:
    sub_1BC3264(skillInfoList, isEquipExplanation);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                              v8,
                              v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall SkillInfo__GetMargeExplanation_42490080(
        System_String_array *explanationList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x21
  System_Text_StringBuilder_o *v6; // x20
  System_Text_StringBuilder_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  unsigned __int64 v10; // x22
  __int64 v11; // x23
  System_String_o *v12; // x21

  if ( (byte_4B033EF & 1) == 0 )
  {
    sub_1BC3008(&System_Text_StringBuilder_TypeInfo, method);
    sub_1BC3008(&StringLiteral_332/*" ＋ "*/, v3);
    sub_1BC3008(&StringLiteral_1/*""*/, v4);
    byte_4B033EF = 1;
  }
  if ( !explanationList )
    return (System_String_o *)StringLiteral_1/*""*/;
  v5 = *(_QWORD *)&explanationList->max_length;
  v6 = (System_Text_StringBuilder_o *)sub_1BC3254(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_62425944(v6, 1024, 0LL);
  if ( (int)v5 >= 1 )
  {
    v10 = 0LL;
    v11 = (unsigned int)v5;
    do
    {
      if ( v10 >= explanationList->max_length )
        sub_1BC326C(IsNullOrEmpty, v8, v9);
      v12 = explanationList->m_Items[v10];
      IsNullOrEmpty = (System_Text_StringBuilder_o *)System_String__IsNullOrEmpty(v12, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( !v6 )
          goto LABEL_17;
        if ( System_Text_StringBuilder__get_Length(v6, 0LL) >= 1 )
          System_Text_StringBuilder__Append_62432592(v6, (System_String_o *)StringLiteral_332/*" ＋ "*/, 0LL);
        IsNullOrEmpty = System_Text_StringBuilder__Append_62432592(v6, v12, 0LL);
      }
      ++v10;
    }
    while ( v11 != v10 );
  }
  if ( !v6 )
LABEL_17:
    sub_1BC3264(IsNullOrEmpty, v8);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                              v6,
                              v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall SkillInfo__GetName(SkillInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  __int64 v10; // x1
  LocalizationManager_c *v12; // x0

  if ( (byte_4B033F1 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1BC3008(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_1BC3008(&LocalizationManager_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BC3008(&StringLiteral_1/*""*/, v6);
    byte_4B033F1 = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v8);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.id,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getEffectTitle((SkillEntity_o *)Entity, 0, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4AFD46D )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, v10);
    byte_4AFD46D = 1;
  }
  v12 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager_TypeInfo;
  }
  return v12->static_fields->unknownNameText;
}


void __fastcall SkillInfo__OverwriteNextSkill(
        SkillInfo_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  void *Instance; // x0
  __int64 v24; // x1
  ServantSkillMaster_o *v25; // x22
  __int64 v26; // x2
  int v27; // w8
  int v28; // w10
  __int64 v29; // x9
  __int64 v30; // x11
  int condQuestId; // w21
  int32_t condQuestPhase; // w22
  _BOOL4 IsQuestPhaseClear; // w20
  __int64 v34; // x1
  _BOOL4 v35; // w21
  bool isUse; // w0
  bool v37; // w24
  _BOOL8 v38; // x0
  __int64 v39; // x1
  int klass; // w9
  struct System_String_o *EffectTitle; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v44; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+50h] [xbp-90h] BYREF
  ServantSkillEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4B033F2 & 1) == 0 )
  {
    sub_1BC3008(&CondType_TypeInfo, userId);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantSkillMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillMaster___, v10);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1BC3008(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v12);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__,
      v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__, v14);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__,
      v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__, v16);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__,
      v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__get_Current__, v18);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___get_Current__,
      v19);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillReleaseEntity___get_Value__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__, v21);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4B033F2 = 1;
  }
  entity = 0LL;
  memset(&v45, 0, sizeof(v45));
  memset(&v46, 0, sizeof(v46));
  if ( this->fields.id >= 1 && !this->fields.isUse )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_55;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 svtId,
                 (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_55;
    if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_55;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      if ( !Instance )
        goto LABEL_55;
      v25 = (ServantSkillMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)Instance, svtId, 0LL);
      if ( !Instance )
        goto LABEL_55;
      v27 = *((_DWORD *)Instance + 6);
      if ( v27 >= 1 )
      {
        v28 = 0;
        v29 = 0LL;
        do
        {
          if ( v27 == v28 )
            sub_1BC326C(Instance, v24, v26);
          v30 = *((_QWORD *)Instance + v28 + 4);
          if ( !v30 )
            goto LABEL_55;
          ++v28;
          if ( *(_DWORD *)(v30 + 28) == this->fields.id )
            v29 = v30;
        }
        while ( v27 != v28 );
        if ( v29
          && ServantSkillMaster__TryGetEntity(
               v25,
               &entity,
               svtId,
               *(_DWORD *)(v29 + 20),
               *(_DWORD *)(v29 + 24) + 1,
               0LL) )
        {
          Instance = entity;
          if ( !entity )
            goto LABEL_55;
          Instance = (void *)ServantSkillEntity__isEnable(entity, 0, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_55;
            condQuestId = entity->fields.condQuestId;
            if ( condQuestId < 1 )
            {
              IsQuestPhaseClear = 0;
            }
            else
            {
              condQuestPhase = entity->fields.condQuestPhase;
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, -1, 0, 0LL);
            }
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_55;
            Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
            if ( !Instance )
              goto LABEL_55;
            Instance = ServantSkillReleaseMaster__GetEntitiyListGroup(
                         (ServantSkillReleaseMaster_o *)Instance,
                         entity,
                         0LL);
            if ( !Instance )
              goto LABEL_55;
            System_Collections_Generic_Dictionary_int__object___GetEnumerator(
              &v44,
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              (const MethodInfo_330898C *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__);
            v46 = v44;
            do
            {
              v35 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                      &v46,
                      (const MethodInfo_3459F80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__);
              if ( !v35 )
                break;
              if ( !v46.fields._current.fields.value )
                sub_1BC3264(0LL, v34);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v44,
                (System_Collections_Generic_List_object__o *)v46.fields._current.fields.value,
                (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__);
              isUse = 0;
              *(_OWORD *)&v45.fields._list = *(_OWORD *)&v44.fields._dictionary;
              v45.fields._current = v44.fields._current.fields.key;
LABEL_38:
              v37 = isUse;
              while ( 1 )
              {
                v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v45,
                        (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__);
                if ( !v38 )
                  break;
                if ( !v45.fields._current )
                  sub_1BC3264(v38, v39);
                klass = (int)v45.fields._current[2].klass;
                if ( klass == 1 || klass == 46 )
                {
                  isUse = ServantSkillReleaseEntity__isUse(
                            (ServantSkillReleaseEntity_o *)v45.fields._current,
                            -1,
                            -1,
                            -1,
                            -1LL,
                            0LL);
                  goto LABEL_38;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v45,
                (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__);
            }
            while ( !v37 );
            System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
              &v46,
              (const MethodInfo_345A0A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__);
            if ( IsQuestPhaseClear || v35 )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillMaster___);
                if ( entity )
                {
                  if ( Instance )
                  {
                    Instance = DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 entity->fields.skillId,
                                 (const MethodInfo_32AF070 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                    if ( entity )
                    {
                      this->fields.id = entity->fields.skillId;
                      if ( Instance )
                      {
                        EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Instance, 0, 0LL);
                        this->fields.title = EffectTitle;
                        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.title, (int32_t)EffectTitle, v42, v43);
                        return;
                      }
                    }
                  }
                }
              }
LABEL_55:
              sub_1BC3264(Instance, v24);
            }
          }
        }
      }
    }
  }
}