void SkillInfo___ctor(SkillInfo_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  int32_t v10; // w1
  struct System_String_o **p_explanation; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5971DDD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971DDD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (struct System_String_o *)StringLiteral_1/*""*/;
  *(_QWORD *)&this->fields.id = 0;
  this->fields.charge = 0;
  this->fields.title = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.title, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_explanation = &this->fields.explanation;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_explanation, v10, v12, v13, v14, v15, v16, v17);
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
  SkillInfo_array *v4; // x20
  il2cpp_array_size_t max_length; // x22
  System_Text_StringBuilder_o *v6; // x21
  unsigned __int64 v7; // x23
  __int64 v8; // x25
  SkillInfo_o *v9; // x8
  System_String_o *explanation; // x22

  v4 = skillInfoList;
  if ( (byte_5971DDB & 1) == 0 )
  {
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_355/*" ＋ "*/);
    skillInfoList = (SkillInfo_array *)sub_2213A60(&StringLiteral_351/*" ……"*/);
    byte_5971DDB = 1;
  }
  if ( !v4 )
    goto LABEL_21;
  max_length = v4->max_length;
  v6 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_75728496(v6, 1024, 0);
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    v8 = (unsigned int)max_length;
    do
    {
      if ( v7 >= LODWORD(v4->max_length) )
        sub_2213CE4(skillInfoList);
      v9 = v4->m_Items[v7];
      if ( v9 )
      {
        explanation = v9->fields.explanation;
        skillInfoList = (SkillInfo_array *)System_String__IsNullOrEmpty(explanation, 0);
        if ( ((unsigned __int8)skillInfoList & 1) == 0 )
        {
          if ( v7 >= 2 && isEquipExplanation )
          {
            if ( v6 )
            {
              System_Text_StringBuilder__Append_75735064(v6, (System_String_o *)StringLiteral_351/*" ……"*/, 0);
              return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v6->klass->vtable._3_ToString.methodPtr)(
                                          v6,
                                          v6->klass->vtable._3_ToString.method);
            }
LABEL_21:
            sub_2213CDC(skillInfoList, isEquipExplanation);
          }
          if ( !v6 )
            goto LABEL_21;
          if ( System_Text_StringBuilder__get_Length(v6, 0) >= 1 )
            System_Text_StringBuilder__Append_75735064(v6, (System_String_o *)StringLiteral_355/*" ＋ "*/, 0);
          skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_75735064(v6, explanation, 0);
        }
      }
      ++v7;
    }
    while ( v8 != v7 );
  }
  if ( !v6 )
    goto LABEL_21;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v6->klass->vtable._3_ToString.methodPtr)(
                              v6,
                              v6->klass->vtable._3_ToString.method);
}


System_String_o *SkillInfo__GetMargeExplanation_50621816(
        System_String_array *explanationList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x21
  System_Text_StringBuilder_o *v4; // x20
  System_Text_StringBuilder_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  unsigned __int64 v7; // x22
  __int64 v8; // x24
  System_String_o *v9; // x21

  if ( (byte_5971DDC & 1) == 0 )
  {
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_355/*" ＋ "*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971DDC = 1;
  }
  if ( !explanationList )
    return (System_String_o *)StringLiteral_1/*""*/;
  max_length = explanationList->max_length;
  v4 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_75728496(v4, 1024, 0);
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    v8 = (unsigned int)max_length;
    do
    {
      if ( v7 >= LODWORD(explanationList->max_length) )
        sub_2213CE4(IsNullOrEmpty);
      v9 = explanationList->m_Items[v7];
      IsNullOrEmpty = (System_Text_StringBuilder_o *)System_String__IsNullOrEmpty(v9, 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( !v4 )
          goto LABEL_17;
        if ( System_Text_StringBuilder__get_Length(v4, 0) >= 1 )
          System_Text_StringBuilder__Append_75735064(v4, (System_String_o *)StringLiteral_355/*" ＋ "*/, 0);
        IsNullOrEmpty = System_Text_StringBuilder__Append_75735064(v4, v9, 0);
      }
      ++v7;
    }
    while ( v8 != v7 );
  }
  if ( !v4 )
LABEL_17:
    sub_2213CDC(IsNullOrEmpty, v6);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                              v4,
                              v4->klass->vtable._3_ToString.method);
}


System_String_o *SkillInfo__GetName(SkillInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  __int64 v6; // x1
  LocalizationManager_c *v8; // x0

  if ( (byte_5971DDE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971DDE = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.id,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getEffectTitle((SkillEntity_o *)Entity, 0, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
  if ( !byte_596B976 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596B976 = 1;
  }
  v8 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    v8 = LocalizationManager_TypeInfo;
  }
  return v8->static_fields->unknownNameText;
}


void SkillInfo__OverwriteNextSkill(
        SkillInfo_o *this,
        int64_t userId,
        int32_t svtId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  int32_t id; // w8
  void *Instance; // x0
  __int64 v11; // x1
  ServantSkillMaster_o *v12; // x23
  int v13; // w8
  int v14; // w10
  __int64 v15; // x9
  __int64 v16; // x12
  int condQuestId; // w22
  int32_t condQuestPhase; // w23
  _BOOL4 IsQuestPhaseClear; // w21
  __int64 v20; // x1
  _BOOL4 v21; // w22
  __int128 v22; // q0
  bool isUse; // w0
  bool v24; // w21
  __int64 v25; // x1
  int klass; // w8
  struct System_String_o *EffectTitle; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  _BOOL4 v34; // [xsp+4h] [xbp-ECh]
  _QWORD v35[2]; // [xsp+8h] [xbp-E8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v38; // [xsp+60h] [xbp-90h] BYREF
  ServantSkillEntity_o *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_5971DDF & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillReleaseEntity___get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971DDF = 1;
  }
  id = this->fields.id;
  entity = 0;
  memset(&v37, 0, sizeof(v37));
  memset(&v38, 0, sizeof(v38));
  if ( id >= 1 && !this->fields.isUse )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_58;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_58;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 svtId,
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_58;
    if ( ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0) )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_58;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
    if ( !Instance )
      goto LABEL_58;
    v12 = (ServantSkillMaster_o *)Instance;
    Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)Instance, svtId, 0);
    if ( !Instance )
      goto LABEL_58;
    v13 = *((_DWORD *)Instance + 6);
    if ( v13 >= 1 )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        if ( v13 == v14 )
          sub_2213CE4(Instance);
        v16 = *((_QWORD *)Instance + v14 + 4);
        if ( !v16 )
          goto LABEL_58;
        ++v14;
        if ( *(_DWORD *)(v16 + 28) == this->fields.id )
          v15 = v16;
      }
      while ( (v13 & ~(v13 >> 31)) != v14 );
      if ( v15
        && ServantSkillMaster__TryGetEntity(v12, &entity, svtId, *(_DWORD *)(v15 + 20), *(_DWORD *)(v15 + 24) + 1, 0) )
      {
        Instance = entity;
        if ( !entity )
          goto LABEL_58;
        Instance = (void *)ServantSkillEntity__isEnable(entity, 0, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          return;
        if ( !entity )
          goto LABEL_58;
        condQuestId = entity->fields.condQuestId;
        if ( condQuestId < 1 )
        {
          IsQuestPhaseClear = 0;
        }
        else
        {
          condQuestPhase = entity->fields.condQuestPhase;
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v11);
          IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, beforeClearQuestId, 0, 0);
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
        if ( !Instance )
          goto LABEL_58;
        v34 = IsQuestPhaseClear;
        Instance = ServantSkillReleaseMaster__GetEntitiyListGroup((ServantSkillReleaseMaster_o *)Instance, entity, 0);
        if ( !Instance )
          goto LABEL_58;
        System_Collections_Generic_Dictionary_int__object___GetEnumerator(
          &v36,
          (System_Collections_Generic_Dictionary_int__object__o *)Instance,
          (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__);
        v38 = v36;
        v35[0] = 0;
        v35[1] = &v38;
        while ( 1 )
        {
          v21 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                  &v38,
                  (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__);
          if ( !v21 )
            break;
          if ( !v38.fields._current.fields.value )
            sub_2213CDC(0, v20);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v36,
            (System_Collections_Generic_List_object__o *)v38.fields._current.fields.value,
            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__);
          v22 = *(_OWORD *)&v36.fields._dictionary;
          isUse = 0;
          v36.fields._dictionary = 0;
          *(_QWORD *)&v36.fields._version = &v37;
          *(_OWORD *)&v37.fields._list = v22;
          v37.fields._current = v36.fields._current.fields.key;
LABEL_38:
          v24 = isUse;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v37,
                    (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__) )
          {
            if ( !v37.fields._current )
              sub_2213CDC(0, v25);
            klass = (int)v37.fields._current[2].klass;
            if ( klass == 1 || klass == 46 )
            {
              isUse = ServantSkillReleaseEntity__isUse(
                        (ServantSkillReleaseEntity_o *)v37.fields._current,
                        -1,
                        beforeClearQuestId,
                        -1,
                        -1,
                        0);
              goto LABEL_38;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v37,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__);
          if ( v24 )
            goto LABEL_50;
        }
        v21 = 0;
LABEL_50:
        sub_200E968(v35);
        if ( v34 || v21 )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
            if ( entity )
            {
              if ( Instance )
              {
                Instance = DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             entity->fields.skillId,
                             (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                if ( entity )
                {
                  this->fields.id = entity->fields.skillId;
                  if ( Instance )
                  {
                    EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Instance, 0, 0);
                    this->fields.title = EffectTitle;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&this->fields.title,
                      (int32_t)EffectTitle,
                      v28,
                      v29,
                      v30,
                      v31,
                      v32,
                      v33);
                    return;
                  }
                }
              }
            }
          }
LABEL_58:
          sub_2213CDC(Instance, v11);
        }
      }
    }
  }
}