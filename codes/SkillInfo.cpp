void __fastcall SkillInfo___ctor(SkillInfo_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  int32_t v5; // w3
  int32_t v6; // w1
  struct System_String_o **p_explanation; // x19
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5C384 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C384 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.id = 0LL;
  this->fields.charge = 0;
  v3 = (int)StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.title, v3, v4, v5);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_explanation = &this->fields.explanation;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_explanation, v6, v8, v9);
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
  __int64 v5; // x24
  System_Text_StringBuilder_o *v6; // x20
  unsigned __int64 v7; // x22
  bool v8; // w25
  SkillInfo_o *v9; // x8
  System_String_o *explanation; // x21

  v4 = skillInfoList;
  if ( (byte_4A5C382 & 1) == 0 )
  {
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_364/*" ＋ "*/);
    skillInfoList = (SkillInfo_array *)sub_1B885B0(&StringLiteral_359/*" ……"*/);
    byte_4A5C382 = 1;
  }
  if ( !v4 )
    goto LABEL_19;
  v5 = *(_QWORD *)&v4->max_length;
  v6 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_60862280(v6, 1024, 0LL);
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    v8 = !isEquipExplanation;
    do
    {
      if ( v7 >= v4->max_length )
        sub_1B88814(skillInfoList, isEquipExplanation);
      v9 = v4->m_Items[v7];
      if ( v9 )
      {
        explanation = v9->fields.explanation;
        skillInfoList = (SkillInfo_array *)System_String__IsNullOrEmpty(explanation, 0LL);
        if ( ((unsigned __int8)skillInfoList & 1) == 0 )
        {
          if ( !v6 )
            goto LABEL_19;
          if ( v7 >= 2 && !v8 )
          {
            System_Text_StringBuilder__Append_60868928(v6, (System_String_o *)StringLiteral_359/*" ……"*/, 0LL);
            return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                                        v6,
                                        v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          }
          if ( System_Text_StringBuilder__get_Length(v6, 0LL) >= 1 )
            System_Text_StringBuilder__Append_60868928(v6, (System_String_o *)StringLiteral_364/*" ＋ "*/, 0LL);
          skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_60868928(v6, explanation, 0LL);
        }
      }
    }
    while ( (unsigned int)v5 != ++v7 );
  }
  if ( !v6 )
LABEL_19:
    sub_1B8880C(skillInfoList, isEquipExplanation);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                              v6,
                              v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall SkillInfo__GetMargeExplanation_40526144(
        System_String_array *explanationList,
        const MethodInfo *method)
{
  __int64 v3; // x21
  System_Text_StringBuilder_o *v4; // x20
  System_Text_StringBuilder_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  unsigned __int64 v7; // x22
  __int64 v8; // x23
  System_String_o *v9; // x21

  if ( (byte_4A5C383 & 1) == 0 )
  {
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_364/*" ＋ "*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C383 = 1;
  }
  if ( !explanationList )
    return (System_String_o *)StringLiteral_1/*""*/;
  v3 = *(_QWORD *)&explanationList->max_length;
  v4 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_60862280(v4, 1024, 0LL);
  if ( (int)v3 >= 1 )
  {
    v7 = 0LL;
    v8 = (unsigned int)v3;
    do
    {
      if ( v7 >= explanationList->max_length )
        sub_1B88814(IsNullOrEmpty, v6);
      v9 = explanationList->m_Items[v7];
      IsNullOrEmpty = (System_Text_StringBuilder_o *)System_String__IsNullOrEmpty(v9, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( !v4 )
          goto LABEL_17;
        if ( System_Text_StringBuilder__get_Length(v4, 0LL) >= 1 )
          System_Text_StringBuilder__Append_60868928(v4, (System_String_o *)StringLiteral_364/*" ＋ "*/, 0LL);
        IsNullOrEmpty = System_Text_StringBuilder__Append_60868928(v4, v9, 0LL);
      }
      ++v7;
    }
    while ( v8 != v7 );
  }
  if ( !v4 )
LABEL_17:
    sub_1B8880C(IsNullOrEmpty, v6);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v4->klass->vtable._3_ToString.method)(
                              v4,
                              v4->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall SkillInfo__GetName(SkillInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  LocalizationManager_c *v7; // x0

  if ( (byte_4A5C385 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C385 = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.id,
             (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getEffectTitle((SkillEntity_o *)Entity, 0, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A56A2D )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A56A2D = 1;
  }
  v7 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager_TypeInfo;
  }
  return v7->static_fields->unknownNameText;
}


void __fastcall SkillInfo__OverwriteNextSkill(
        SkillInfo_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  ServantSkillMaster_o *v9; // x22
  int v10; // w8
  int v11; // w10
  __int64 v12; // x9
  __int64 v13; // x11
  int condQuestId; // w21
  int32_t condQuestPhase; // w22
  _BOOL4 IsQuestPhaseClear; // w20
  __int64 v17; // x1
  _BOOL4 v18; // w21
  bool isUse; // w0
  bool v20; // w24
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int klass; // w9
  struct System_String_o *EffectTitle; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+50h] [xbp-90h] BYREF
  ServantSkillEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4A5C386 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillReleaseEntity___get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C386 = 1;
  }
  entity = 0LL;
  memset(&v28, 0, sizeof(v28));
  memset(&v29, 0, sizeof(v29));
  if ( this->fields.id >= 1 && !this->fields.isUse )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_55;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 svtId,
                 (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_55;
    if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_55;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      if ( !Instance )
        goto LABEL_55;
      v9 = (ServantSkillMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)Instance, svtId, 0LL);
      if ( !Instance )
        goto LABEL_55;
      v10 = *((_DWORD *)Instance + 6);
      if ( v10 >= 1 )
      {
        v11 = 0;
        v12 = 0LL;
        do
        {
          if ( v10 == v11 )
            sub_1B88814(Instance, v8);
          v13 = *((_QWORD *)Instance + v11 + 4);
          if ( !v13 )
            goto LABEL_55;
          ++v11;
          if ( *(_DWORD *)(v13 + 28) == this->fields.id )
            v12 = v13;
        }
        while ( v10 != v11 );
        if ( v12
          && ServantSkillMaster__TryGetEntity(v9, &entity, svtId, *(_DWORD *)(v12 + 20), *(_DWORD *)(v12 + 24) + 1, 0LL) )
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
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_55;
            Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
            if ( !Instance )
              goto LABEL_55;
            Instance = ServantSkillReleaseMaster__GetEntitiyListGroup(
                         (ServantSkillReleaseMaster_o *)Instance,
                         entity,
                         0LL);
            if ( !Instance )
              goto LABEL_55;
            System_Collections_Generic_Dictionary_int__object___GetEnumerator(
              &v27,
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__);
            v29 = v27;
            do
            {
              v18 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                      &v29,
                      (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__);
              if ( !v18 )
                break;
              if ( !v29.fields._current.fields.value )
                sub_1B8880C(0LL, v17);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v27,
                (System_Collections_Generic_List_object__o *)v29.fields._current.fields.value,
                (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__);
              isUse = 0;
              *(_OWORD *)&v28.fields._list = *(_OWORD *)&v27.fields._dictionary;
              v28.fields._current = v27.fields._current.fields.key;
LABEL_38:
              v20 = isUse;
              while ( 1 )
              {
                v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v28,
                        (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__);
                if ( !v21 )
                  break;
                if ( !v28.fields._current )
                  sub_1B8880C(v21, v22);
                klass = (int)v28.fields._current[2].klass;
                if ( klass == 1 || klass == 46 )
                {
                  isUse = ServantSkillReleaseEntity__isUse(
                            (ServantSkillReleaseEntity_o *)v28.fields._current,
                            -1,
                            -1,
                            -1,
                            -1LL,
                            0LL);
                  goto LABEL_38;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v28,
                (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__);
            }
            while ( !v20 );
            System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
              &v29,
              (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__);
            if ( IsQuestPhaseClear || v18 )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
                if ( entity )
                {
                  if ( Instance )
                  {
                    Instance = DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 entity->fields.skillId,
                                 (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                    if ( entity )
                    {
                      this->fields.id = entity->fields.skillId;
                      if ( Instance )
                      {
                        EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Instance, 0, 0LL);
                        this->fields.title = EffectTitle;
                        sub_1B88554(
                          (ServantStatusBattleListViewItem_o *)&this->fields.title,
                          (int32_t)EffectTitle,
                          v25,
                          v26);
                        return;
                      }
                    }
                  }
                }
              }
LABEL_55:
              sub_1B8880C(Instance, v8);
            }
          }
        }
      }
    }
  }
}