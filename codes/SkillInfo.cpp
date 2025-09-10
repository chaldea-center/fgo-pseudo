void SkillInfo___ctor(SkillInfo_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w1
  struct System_String_o **p_explanation; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C286FF & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C286FF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_QWORD *)&this->fields.id = 0;
  this->fields.charge = 0;
  v3 = StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.title, v3, v4, v5);
  v6 = StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_explanation = &this->fields.explanation;
  sub_1C2D434((CGThumbnailListItem_o *)p_explanation, v6, v8, v9);
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
  __int64 v7; // x2
  unsigned __int64 v8; // x22
  bool v9; // w25
  SkillInfo_o *v10; // x8
  System_String_o *explanation; // x21

  v4 = skillInfoList;
  if ( (byte_4C286FD & 1) == 0 )
  {
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    sub_1C2D490(&StringLiteral_333/*" ＋ "*/);
    skillInfoList = (SkillInfo_array *)sub_1C2D490(&StringLiteral_329/*" ……"*/);
    byte_4C286FD = 1;
  }
  if ( !v4 )
    goto LABEL_19;
  max_length = v4->max_length;
  v6 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_63536280(v6, 1024, 0);
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    v9 = !isEquipExplanation;
    do
    {
      if ( v8 >= LODWORD(v4->max_length) )
        sub_1C2D6F4(skillInfoList, isEquipExplanation, v7);
      v10 = v4->m_Items[v8];
      if ( v10 )
      {
        explanation = v10->fields.explanation;
        skillInfoList = (SkillInfo_array *)System_String__IsNullOrEmpty(explanation, 0);
        if ( ((unsigned __int8)skillInfoList & 1) == 0 )
        {
          if ( !v6 )
            goto LABEL_19;
          if ( v8 >= 2 && !v9 )
          {
            System_Text_StringBuilder__Append_63542928(v6, (System_String_o *)StringLiteral_329/*" ……"*/, 0);
            return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v6->klass->vtable._3_ToString.methodPtr)(
                                        v6,
                                        v6->klass->vtable._3_ToString.method);
          }
          if ( System_Text_StringBuilder__get_Length(v6, 0) >= 1 )
            System_Text_StringBuilder__Append_63542928(v6, (System_String_o *)StringLiteral_333/*" ＋ "*/, 0);
          skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_63542928(v6, explanation, 0);
        }
      }
    }
    while ( (unsigned int)max_length != ++v8 );
  }
  if ( !v6 )
LABEL_19:
    sub_1C2D6EC(skillInfoList, isEquipExplanation);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v6->klass->vtable._3_ToString.methodPtr)(
                              v6,
                              v6->klass->vtable._3_ToString.method);
}


System_String_o *SkillInfo__GetMargeExplanation_43284788(
        System_String_array *explanationList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x21
  System_Text_StringBuilder_o *v4; // x20
  System_Text_StringBuilder_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  unsigned __int64 v8; // x22
  __int64 v9; // x23
  System_String_o *v10; // x21

  if ( (byte_4C286FE & 1) == 0 )
  {
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    sub_1C2D490(&StringLiteral_333/*" ＋ "*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C286FE = 1;
  }
  if ( !explanationList )
    return (System_String_o *)StringLiteral_1/*""*/;
  max_length = explanationList->max_length;
  v4 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_63536280(v4, 1024, 0);
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    v9 = (unsigned int)max_length;
    do
    {
      if ( v8 >= LODWORD(explanationList->max_length) )
        sub_1C2D6F4(IsNullOrEmpty, v6, v7);
      v10 = explanationList->m_Items[v8];
      IsNullOrEmpty = (System_Text_StringBuilder_o *)System_String__IsNullOrEmpty(v10, 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( !v4 )
          goto LABEL_17;
        if ( System_Text_StringBuilder__get_Length(v4, 0) >= 1 )
          System_Text_StringBuilder__Append_63542928(v4, (System_String_o *)StringLiteral_333/*" ＋ "*/, 0);
        IsNullOrEmpty = System_Text_StringBuilder__Append_63542928(v4, v10, 0);
      }
      ++v8;
    }
    while ( v9 != v8 );
  }
  if ( !v4 )
LABEL_17:
    sub_1C2D6EC(IsNullOrEmpty, v6);
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

  if ( (byte_4C28700 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28700 = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.id,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getEffectTitle((SkillEntity_o *)Entity, 0, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C2267D )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C2267D = 1;
  }
  v7 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager_TypeInfo;
  }
  return v7->static_fields->unknownNameText;
}


void SkillInfo__OverwriteNextSkill(SkillInfo_o *this, int64_t userId, int32_t svtId, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  ServantSkillMaster_o *v9; // x22
  __int64 v10; // x2
  int v11; // w8
  int v12; // w10
  __int64 v13; // x9
  __int64 v14; // x11
  int condQuestId; // w21
  int32_t condQuestPhase; // w22
  _BOOL4 IsQuestPhaseClear; // w20
  __int64 v18; // x1
  _BOOL4 v19; // w21
  bool isUse; // w0
  bool v21; // w24
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int klass; // w9
  struct System_String_o *EffectTitle; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+50h] [xbp-90h] BYREF
  ServantSkillEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4C28701 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillReleaseEntity___get_Value__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28701 = 1;
  }
  entity = 0;
  memset(&v29, 0, sizeof(v29));
  memset(&v30, 0, sizeof(v30));
  if ( this->fields.id >= 1 && !this->fields.isUse )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_55;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 svtId,
                 (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_55;
    if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_55;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      if ( !Instance )
        goto LABEL_55;
      v9 = (ServantSkillMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)Instance, svtId, 0);
      if ( !Instance )
        goto LABEL_55;
      v11 = *((_DWORD *)Instance + 6);
      if ( v11 >= 1 )
      {
        v12 = 0;
        v13 = 0;
        do
        {
          if ( v11 == v12 )
            sub_1C2D6F4(Instance, v8, v10);
          v14 = *((_QWORD *)Instance + v12 + 4);
          if ( !v14 )
            goto LABEL_55;
          ++v12;
          if ( *(_DWORD *)(v14 + 28) == this->fields.id )
            v13 = v14;
        }
        while ( v11 != v12 );
        if ( v13
          && ServantSkillMaster__TryGetEntity(v9, &entity, svtId, *(_DWORD *)(v13 + 20), *(_DWORD *)(v13 + 24) + 1, 0) )
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
              IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, -1, 0, 0);
            }
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_55;
            Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
            if ( !Instance )
              goto LABEL_55;
            Instance = ServantSkillReleaseMaster__GetEntitiyListGroup(
                         (ServantSkillReleaseMaster_o *)Instance,
                         entity,
                         0);
            if ( !Instance )
              goto LABEL_55;
            System_Collections_Generic_Dictionary_int__object___GetEnumerator(
              &v28,
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              (const MethodInfo_33E16B4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__);
            v30 = v28;
            do
            {
              v19 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                      &v30,
                      (const MethodInfo_35380F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__);
              if ( !v19 )
                break;
              if ( !v30.fields._current.fields.value )
                sub_1C2D6EC(0, v18);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v28,
                (System_Collections_Generic_List_object__o *)v30.fields._current.fields.value,
                (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__);
              isUse = 0;
              *(_OWORD *)&v29.fields._list = *(_OWORD *)&v28.fields._dictionary;
              v29.fields._current = v28.fields._current.fields.key;
LABEL_38:
              v21 = isUse;
              while ( 1 )
              {
                v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v29,
                        (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__);
                if ( !v22 )
                  break;
                if ( !v29.fields._current )
                  sub_1C2D6EC(v22, v23);
                klass = (int)v29.fields._current[2].klass;
                if ( klass == 1 || klass == 46 )
                {
                  isUse = ServantSkillReleaseEntity__isUse(
                            (ServantSkillReleaseEntity_o *)v29.fields._current,
                            -1,
                            -1,
                            -1,
                            -1,
                            0);
                  goto LABEL_38;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v29,
                (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__);
            }
            while ( !v21 );
            System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
              &v30,
              (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__);
            if ( IsQuestPhaseClear || v19 )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___);
                if ( entity )
                {
                  if ( Instance )
                  {
                    Instance = DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 entity->fields.skillId,
                                 (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                    if ( entity )
                    {
                      this->fields.id = entity->fields.skillId;
                      if ( Instance )
                      {
                        EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Instance, 0, 0);
                        this->fields.title = EffectTitle;
                        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.title, (int32_t)EffectTitle, v26, v27);
                        return;
                      }
                    }
                  }
                }
              }
LABEL_55:
              sub_1C2D6EC(Instance, v8);
            }
          }
        }
      }
    }
  }
}