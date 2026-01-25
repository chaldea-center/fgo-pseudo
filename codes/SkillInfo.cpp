void SkillInfo___ctor(SkillInfo_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w1
  struct System_String_o **p_explanation; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CEFB5E & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEFB5E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_QWORD *)&this->fields.id = 0;
  this->fields.charge = 0;
  v3 = StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.title, v3, v4, v5, v6, v7, v8, v9);
  v10 = StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_explanation = &this->fields.explanation;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_explanation, v10, v12, v13, v14, v15, v16, v17);
  *((_BYTE *)p_explanation + 16) = 0;
  p_explanation[1] = 0;
}


bool SkillInfo__Equals(SkillInfo_o *this, SkillInfo_o *info, bool addCheckIdentification, const MethodInfo *method)
{
  if ( !info )
    return this->fields.id == 0;
  return *(_QWORD *)&this->fields.id == *(_QWORD *)&info->fields.id
      || addCheckIdentification
      && System_String__op_Inequality(this->fields.title, info->fields.title, 0)
      && System_String__op_Equality(this->fields.explanation, info->fields.explanation, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *SkillInfo__GetMargeExplanation(
        SkillInfo_array *skillInfoList,
        bool isEquipExplanation,
        const MethodInfo *method)
{
  SkillInfo_array *v4; // x19
  il2cpp_array_size_t max_length; // x24
  System_Text_StringBuilder_o *v6; // x20
  unsigned __int64 v7; // x22
  bool v8; // w25
  SkillInfo_o *v9; // x8
  System_String_o *explanation; // x21

  v4 = skillInfoList;
  if ( (byte_4CEFB5C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&StringLiteral_334/*" ＋ "*/);
    skillInfoList = (SkillInfo_array *)sub_1C7BAE8(&StringLiteral_330/*" ……"*/);
    byte_4CEFB5C = 1;
  }
  if ( !v4 )
    goto LABEL_19;
  max_length = v4->max_length;
  v6 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64254224(v6, 1024, 0);
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    v8 = !isEquipExplanation;
    do
    {
      if ( v7 >= LODWORD(v4->max_length) )
        sub_1C7BD48(skillInfoList);
      v9 = v4->m_Items[v7];
      if ( v9 )
      {
        explanation = v9->fields.explanation;
        skillInfoList = (SkillInfo_array *)System_String__IsNullOrEmpty(explanation, 0);
        if ( ((unsigned __int8)skillInfoList & 1) == 0 )
        {
          if ( !v6 )
            goto LABEL_19;
          if ( v7 >= 2 && !v8 )
          {
            System_Text_StringBuilder__Append_64260872(v6, (System_String_o *)StringLiteral_330/*" ……"*/, 0);
            return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v6->klass->vtable._3_ToString.methodPtr)(
                                        v6,
                                        v6->klass->vtable._3_ToString.method);
          }
          if ( System_Text_StringBuilder__get_Length(v6, 0) >= 1 )
            System_Text_StringBuilder__Append_64260872(v6, (System_String_o *)StringLiteral_334/*" ＋ "*/, 0);
          skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_64260872(v6, explanation, 0);
        }
      }
    }
    while ( (unsigned int)max_length != ++v7 );
  }
  if ( !v6 )
LABEL_19:
    sub_1C7BD40(skillInfoList, isEquipExplanation);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v6->klass->vtable._3_ToString.methodPtr)(
                              v6,
                              v6->klass->vtable._3_ToString.method);
}


System_String_o *SkillInfo__GetMargeExplanation_44136804(
        System_String_array *explanationList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x21
  System_Text_StringBuilder_o *v4; // x20
  System_Text_StringBuilder_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  unsigned __int64 v7; // x22
  __int64 v8; // x23
  System_String_o *v9; // x21

  if ( (byte_4CEFB5D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&StringLiteral_334/*" ＋ "*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEFB5D = 1;
  }
  if ( !explanationList )
    return (System_String_o *)StringLiteral_1/*""*/;
  max_length = explanationList->max_length;
  v4 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64254224(v4, 1024, 0);
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    v8 = (unsigned int)max_length;
    do
    {
      if ( v7 >= LODWORD(explanationList->max_length) )
        sub_1C7BD48(IsNullOrEmpty);
      v9 = explanationList->m_Items[v7];
      IsNullOrEmpty = (System_Text_StringBuilder_o *)System_String__IsNullOrEmpty(v9, 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( !v4 )
          goto LABEL_17;
        if ( System_Text_StringBuilder__get_Length(v4, 0) >= 1 )
          System_Text_StringBuilder__Append_64260872(v4, (System_String_o *)StringLiteral_334/*" ＋ "*/, 0);
        IsNullOrEmpty = System_Text_StringBuilder__Append_64260872(v4, v9, 0);
      }
      ++v7;
    }
    while ( v8 != v7 );
  }
  if ( !v4 )
LABEL_17:
    sub_1C7BD40(IsNullOrEmpty, v6);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                              v4,
                              v4->klass->vtable._3_ToString.method);
}


System_String_o *SkillInfo__GetName(SkillInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  LocalizationManager_c *v7; // x0

  if ( (byte_4CEFB5F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEFB5F = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.id,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getEffectTitle((SkillEntity_o *)Entity, 0, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4CE9782 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CE9782 = 1;
  }
  v7 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager_TypeInfo;
  }
  return v7->static_fields->unknownNameText;
}


void SkillInfo__OverwriteNextSkill(
        SkillInfo_o *this,
        int64_t userId,
        int32_t svtId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  ServantSkillMaster_o *v11; // x23
  int v12; // w8
  int v13; // w10
  __int64 v14; // x9
  __int64 v15; // x11
  int condQuestId; // w22
  int32_t condQuestPhase; // w23
  _BOOL4 IsQuestPhaseClear; // w21
  __int64 v19; // x1
  _BOOL4 v20; // w22
  bool isUse; // w0
  bool v22; // w24
  _BOOL8 v23; // x0
  __int64 v24; // x1
  int klass; // w9
  struct System_String_o *EffectTitle; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v33; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+60h] [xbp-90h] BYREF
  ServantSkillEntity_o *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4CEFB60 & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillReleaseEntity___get_Value__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEFB60 = 1;
  }
  entity = 0;
  memset(&v34, 0, sizeof(v34));
  memset(&v35, 0, sizeof(v35));
  if ( this->fields.id >= 1 && !this->fields.isUse )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_55;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 svtId,
                 (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_55;
    if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_55;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      if ( !Instance )
        goto LABEL_55;
      v11 = (ServantSkillMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)Instance, svtId, 0);
      if ( !Instance )
        goto LABEL_55;
      v12 = *((_DWORD *)Instance + 6);
      if ( v12 >= 1 )
      {
        v13 = 0;
        v14 = 0;
        do
        {
          if ( v12 == v13 )
            sub_1C7BD48(Instance);
          v15 = *((_QWORD *)Instance + v13 + 4);
          if ( !v15 )
            goto LABEL_55;
          ++v13;
          if ( *(_DWORD *)(v15 + 28) == this->fields.id )
            v14 = v15;
        }
        while ( v12 != v13 );
        if ( v14
          && ServantSkillMaster__TryGetEntity(v11, &entity, svtId, *(_DWORD *)(v14 + 20), *(_DWORD *)(v14 + 24) + 1, 0) )
        {
          Instance = entity;
          if ( !entity )
            goto LABEL_55;
          Instance = (void *)ServantSkillEntity__isEnable(entity, 0, 0);
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
              IsQuestPhaseClear = CondType__IsQuestPhaseClear(
                                    userId,
                                    condQuestId,
                                    condQuestPhase,
                                    beforeClearQuestId,
                                    0,
                                    0);
            }
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_55;
            Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
            if ( !Instance )
              goto LABEL_55;
            Instance = ServantSkillReleaseMaster__GetEntitiyListGroup(
                         (ServantSkillReleaseMaster_o *)Instance,
                         entity,
                         0);
            if ( !Instance )
              goto LABEL_55;
            System_Collections_Generic_Dictionary_int__object___GetEnumerator(
              &v33,
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              (const MethodInfo_3487B48 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__);
            v35 = v33;
            do
            {
              v20 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                      &v35,
                      (const MethodInfo_35E1B90 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__);
              if ( !v20 )
                break;
              if ( !v35.fields._current.fields.value )
                sub_1C7BD40(0, v19);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v33,
                (System_Collections_Generic_List_object__o *)v35.fields._current.fields.value,
                (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__);
              isUse = 0;
              *(_OWORD *)&v34.fields._list = *(_OWORD *)&v33.fields._dictionary;
              v34.fields._current = v33.fields._current.fields.key;
LABEL_38:
              v22 = isUse;
              while ( 1 )
              {
                v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v34,
                        (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__);
                if ( !v23 )
                  break;
                if ( !v34.fields._current )
                  sub_1C7BD40(v23, v24);
                klass = (int)v34.fields._current[2].klass;
                if ( klass == 1 || klass == 46 )
                {
                  isUse = ServantSkillReleaseEntity__isUse(
                            (ServantSkillReleaseEntity_o *)v34.fields._current,
                            -1,
                            beforeClearQuestId,
                            -1,
                            -1,
                            0);
                  goto LABEL_38;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v34,
                (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__);
            }
            while ( !v22 );
            System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
              &v35,
              (const MethodInfo_35E1CB4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__);
            if ( IsQuestPhaseClear || v20 )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SkillMaster___);
                if ( entity )
                {
                  if ( Instance )
                  {
                    Instance = DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 entity->fields.skillId,
                                 (const MethodInfo_342E2FC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                    if ( entity )
                    {
                      this->fields.id = entity->fields.skillId;
                      if ( Instance )
                      {
                        EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Instance, 0, 0);
                        this->fields.title = EffectTitle;
                        sub_1C7BA8C(
                          (GrandQuestFolderBoardItem_o *)&this->fields.title,
                          (int32_t)EffectTitle,
                          v27,
                          v28,
                          v29,
                          v30,
                          v31,
                          v32);
                        return;
                      }
                    }
                  }
                }
              }
LABEL_55:
              sub_1C7BD40(Instance, v10);
            }
          }
        }
      }
    }
  }
}