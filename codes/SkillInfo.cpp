void __fastcall SkillInfo___ctor(SkillInfo_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  int32_t v5; // w3
  int32_t v6; // w1
  struct System_String_o **p_explanation; // x19
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FD5FE & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FD5FE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.id = 0LL;
  this->fields.charge = 0;
  v3 = (int)StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.title, v3, v4, v5);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_explanation = &this->fields.explanation;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_explanation, v6, v8, v9);
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
  __int64 v9; // x1
  unsigned __int64 v10; // x22
  bool v11; // w25
  SkillInfo_o *v12; // x8
  System_String_o *explanation; // x21

  v4 = skillInfoList;
  if ( (byte_49FD5FC & 1) == 0 )
  {
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, isEquipExplanation);
    sub_1B640C8(&StringLiteral_365/*" ＋ "*/, v5);
    skillInfoList = (SkillInfo_array *)sub_1B640C8(&StringLiteral_360/*" ……"*/, v6);
    byte_49FD5FC = 1;
  }
  if ( !v4 )
    goto LABEL_19;
  v7 = *(_QWORD *)&v4->max_length;
  v8 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, isEquipExplanation, method);
  System_Text_StringBuilder___ctor_60529900(v8, 1024, 0LL);
  if ( (int)v7 >= 1 )
  {
    v10 = 0LL;
    v11 = !isEquipExplanation;
    do
    {
      if ( v10 >= v4->max_length )
        sub_1B6432C(skillInfoList, v9);
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
            System_Text_StringBuilder__Append_60536548(v8, (System_String_o *)StringLiteral_360/*" ……"*/, 0LL);
            return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                                        v8,
                                        v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          }
          if ( System_Text_StringBuilder__get_Length(v8, 0LL) >= 1 )
            System_Text_StringBuilder__Append_60536548(v8, (System_String_o *)StringLiteral_365/*" ＋ "*/, 0LL);
          skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_60536548(v8, explanation, 0LL);
        }
      }
    }
    while ( (unsigned int)v7 != ++v10 );
  }
  if ( !v8 )
LABEL_19:
    sub_1B64324(skillInfoList);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                              v8,
                              v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall SkillInfo__GetMargeExplanation_40191376(
        System_String_array *explanationList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x21
  System_Text_StringBuilder_o *v7; // x20
  System_Text_StringBuilder_o *IsNullOrEmpty; // x0
  __int64 v9; // x1
  unsigned __int64 v10; // x22
  __int64 v11; // x23
  System_String_o *v12; // x21

  if ( (byte_49FD5FD & 1) == 0 )
  {
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, method);
    sub_1B640C8(&StringLiteral_365/*" ＋ "*/, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FD5FD = 1;
  }
  if ( !explanationList )
    return (System_String_o *)StringLiteral_1/*""*/;
  v6 = *(_QWORD *)&explanationList->max_length;
  v7 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, method, v2);
  System_Text_StringBuilder___ctor_60529900(v7, 1024, 0LL);
  if ( (int)v6 >= 1 )
  {
    v10 = 0LL;
    v11 = (unsigned int)v6;
    do
    {
      if ( v10 >= explanationList->max_length )
        sub_1B6432C(IsNullOrEmpty, v9);
      v12 = explanationList->m_Items[v10];
      IsNullOrEmpty = (System_Text_StringBuilder_o *)System_String__IsNullOrEmpty(v12, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( !v7 )
          goto LABEL_17;
        if ( System_Text_StringBuilder__get_Length(v7, 0LL) >= 1 )
          System_Text_StringBuilder__Append_60536548(v7, (System_String_o *)StringLiteral_365/*" ＋ "*/, 0LL);
        IsNullOrEmpty = System_Text_StringBuilder__Append_60536548(v7, v12, 0LL);
      }
      ++v10;
    }
    while ( v11 != v10 );
  }
  if ( !v7 )
LABEL_17:
    sub_1B64324(IsNullOrEmpty);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v7->klass->vtable._3_ToString.method)(
                              v7,
                              v7->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall SkillInfo__GetName(SkillInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0
  __int64 v9; // x1
  LocalizationManager_c *v11; // x0

  if ( (byte_49FD5FF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FD5FF = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.id,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getEffectTitle((SkillEntity_o *)Entity, 0, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49F7D6A )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    byte_49F7D6A = 1;
  }
  v11 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager_TypeInfo;
  }
  return v11->static_fields->unknownNameText;
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
  ServantSkillMaster_o *v24; // x22
  __int64 v25; // x1
  int v26; // w8
  int v27; // w10
  __int64 v28; // x9
  __int64 v29; // x11
  int condQuestId; // w21
  int32_t condQuestPhase; // w22
  _BOOL4 IsQuestPhaseClear; // w20
  _BOOL4 v33; // w21
  bool isUse; // w0
  bool v35; // w24
  _BOOL8 v36; // x0
  int klass; // w9
  struct System_String_o *EffectTitle; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v43; // [xsp+50h] [xbp-90h] BYREF
  ServantSkillEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_49FD600 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, userId);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v10);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__,
      v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__, v14);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__,
      v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__, v16);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__,
      v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__get_Current__, v18);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___get_Current__,
      v19);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillReleaseEntity___get_Value__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_49FD600 = 1;
  }
  entity = 0LL;
  memset(&v42, 0, sizeof(v42));
  memset(&v43, 0, sizeof(v43));
  if ( this->fields.id >= 1 && !this->fields.isUse )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_55;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 svtId,
                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_55;
    if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_55;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      if ( !Instance )
        goto LABEL_55;
      v24 = (ServantSkillMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)Instance, svtId, 0LL);
      if ( !Instance )
        goto LABEL_55;
      v26 = *((_DWORD *)Instance + 6);
      if ( v26 >= 1 )
      {
        v27 = 0;
        v28 = 0LL;
        do
        {
          if ( v26 == v27 )
            sub_1B6432C(Instance, v25);
          v29 = *((_QWORD *)Instance + v27 + 4);
          if ( !v29 )
            goto LABEL_55;
          ++v27;
          if ( *(_DWORD *)(v29 + 28) == this->fields.id )
            v28 = v29;
        }
        while ( v26 != v27 );
        if ( v28
          && ServantSkillMaster__TryGetEntity(
               v24,
               &entity,
               svtId,
               *(_DWORD *)(v28 + 20),
               *(_DWORD *)(v28 + 24) + 1,
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
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_55;
            Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
            if ( !Instance )
              goto LABEL_55;
            Instance = ServantSkillReleaseMaster__GetEntitiyListGroup(
                         (ServantSkillReleaseMaster_o *)Instance,
                         entity,
                         0LL);
            if ( !Instance )
              goto LABEL_55;
            System_Collections_Generic_Dictionary_int__object___GetEnumerator(
              &v41,
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__);
            v43 = v41;
            do
            {
              v33 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                      &v43,
                      (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__);
              if ( !v33 )
                break;
              if ( !v43.fields._current.fields.value )
                sub_1B64324(0LL);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v41,
                (System_Collections_Generic_List_object__o *)v43.fields._current.fields.value,
                (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__);
              isUse = 0;
              *(_OWORD *)&v42.fields._list = *(_OWORD *)&v41.fields._dictionary;
              v42.fields._current = v41.fields._current.fields.key;
LABEL_38:
              v35 = isUse;
              while ( 1 )
              {
                v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v42,
                        (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__);
                if ( !v36 )
                  break;
                if ( !v42.fields._current )
                  sub_1B64324(v36);
                klass = (int)v42.fields._current[2].klass;
                if ( klass == 1 || klass == 46 )
                {
                  isUse = ServantSkillReleaseEntity__isUse(
                            (ServantSkillReleaseEntity_o *)v42.fields._current,
                            -1,
                            -1,
                            -1,
                            -1LL,
                            0LL);
                  goto LABEL_38;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v42,
                (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__);
            }
            while ( !v35 );
            System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
              &v43,
              (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__);
            if ( IsQuestPhaseClear || v33 )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
                if ( entity )
                {
                  if ( Instance )
                  {
                    Instance = DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 entity->fields.skillId,
                                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                    if ( entity )
                    {
                      this->fields.id = entity->fields.skillId;
                      if ( Instance )
                      {
                        EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Instance, 0, 0LL);
                        this->fields.title = EffectTitle;
                        sub_1B6406C(
                          (ServantStatusBattleListViewItem_o *)&this->fields.title,
                          (int32_t)EffectTitle,
                          v39,
                          v40);
                        return;
                      }
                    }
                  }
                }
              }
LABEL_55:
              sub_1B64324(Instance);
            }
          }
        }
      }
    }
  }
}