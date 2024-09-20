void __fastcall SkillLvEntity___ctor(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BB9D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BB9D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


void __fastcall SkillLvEntity___ctor_39947784(
        SkillLvEntity_o *this,
        SkillLvEntity_o *srcEntity,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_Array_o *funcId; // x0
  Il2CppObject *v10; // x0
  Il2CppObject *v11; // x21
  struct System_Int32_array *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_Array_o *svals; // x0
  Il2CppObject *v16; // x0
  struct System_String_array *v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IDictionary_TKey__TValue__o *script; // x20
  System_Collections_Generic_Dictionary_object__object__o *v21; // x21

  if ( (byte_4A5BB9E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object___ctor___75994400);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    byte_4A5BB9E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
  if ( !srcEntity )
    sub_1B8880C(v5, v6);
  *(_OWORD *)&this->fields.skillId = *(_OWORD *)&srcEntity->fields.skillId;
  funcId = (System_Array_o *)srcEntity->fields.funcId;
  if ( funcId && (v10 = System_Array__Clone(funcId, 0LL)) != 0LL )
  {
    v11 = v10;
    v12 = (struct System_Int32_array *)sub_1B886EC(v10, int___TypeInfo);
    if ( !v12 )
      goto LABEL_12;
  }
  else
  {
    v12 = 0LL;
  }
  this->fields.funcId = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.funcId, (int32_t)v12, v7, v8);
  svals = (System_Array_o *)srcEntity->fields.svals;
  if ( !svals )
    goto LABEL_13;
  v16 = System_Array__Clone(svals, 0LL);
  if ( !v16 )
    goto LABEL_13;
  v11 = v16;
  v17 = (struct System_String_array *)sub_1B886EC(v16, string___TypeInfo);
  if ( v17 )
    goto LABEL_14;
LABEL_12:
  sub_1B88ACC(v11);
LABEL_13:
  v17 = 0LL;
LABEL_14:
  this->fields.svals = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svals, (int32_t)v17, v13, v14);
  this->fields.skillDetailId = srcEntity->fields.skillDetailId;
  script = (System_Collections_Generic_IDictionary_TKey__TValue__o *)srcEntity->fields.script;
  if ( script )
  {
    v21 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor_52193528(
      v21,
      script,
      (const MethodInfo_31C68F8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor___75994400);
  }
  else
  {
    v21 = 0LL;
  }
  this->fields.script = (struct System_Collections_Generic_Dictionary_string__object__o *)v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.script, (int32_t)v21, v18, v19);
}


System_String_o *__fastcall SkillLvEntity__CreatePK(int32_t skillId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4A5BB9C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5BB9C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           skillId,
           lv,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SkillLvEntity__CreatePrimaryKey(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillLvEntity__CreatePK(this->fields.skillId, this->fields.lv, v2);
}


int32_t __fastcall SkillLvEntity__GetActNpcServantId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BBC3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_2211/*"ActNpcServantId"*/);
    byte_4A5BBC3 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_2211/*"ActNpcServantId"*/, -1, v2);
}


System_Int32_array *__fastcall SkillLvEntity__GetActRarity(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5BBBA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16644/*"actRarity"*/);
    byte_4A5BBBA = 1;
  }
  return SkillLvEntity__GetIntArrayFromScript(this, (System_String_o *)StringLiteral_16644/*"actRarity"*/, v2);
}


System_Int32_array *__fastcall SkillLvEntity__GetAddIndiv(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 klass_low; // x1
  System_Collections_Generic_Dictionary_object__object__o *v5; // x0
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v8; // x19
  System_Collections_Generic_List_int__o *v10; // x20
  int32_t v11; // w21
  __int64 v12; // x2
  __int64 v13; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  SkillLvEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_4A5BBB6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&StringLiteral_2247/*"AddIndiv"*/);
    byte_4A5BBB6 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_2247/*"AddIndiv"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !v5 )
    goto LABEL_26;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v5,
           (Il2CppObject *)StringLiteral_2247/*"AddIndiv"*/,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    v8 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo
       ? (System_Collections_Generic_List_object__o *)Item
       : 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v8 )
    goto LABEL_26;
  if ( v8->fields._size < 1 )
  {
LABEL_24:
    if ( v10 )
      return System_Collections_Generic_List_int___ToArray(
               v10,
               (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_26:
    sub_1B8880C(v5, klass_low);
  }
  v11 = 0;
  while ( 1 )
  {
    v5 = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v8,
                                                                      v11,
                                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !v10 || !v5 )
      goto LABEL_26;
    if ( v5->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v5 = (System_Collections_Generic_Dictionary_object__object__o *)j_il2cpp_object_unbox_0(v5, long_TypeInfo, v12, v13);
    klass_low = LODWORD(v5->klass);
    items = v10->fields._items;
    v15 = Method_System_Collections_Generic_List_int__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_26;
    size = v10->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v10,
        klass_low,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v10->fields._size = size + 1;
      items->m_Items[size + 1] = klass_low;
    }
    if ( ++v11 >= v8->fields._size )
      goto LABEL_24;
  }
  sub_1B88ACC(v5);
  return (System_Int32_array *)SkillLvEntity__GetFuncIndexForSplitFuncSequence(v17, v18);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillActorType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BBC1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16678/*"additionalSkillActorType"*/);
    byte_4A5BBC1 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16678/*"additionalSkillActorType"*/, -1, v2);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BBBF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16679/*"additionalSkillId"*/);
    byte_4A5BBBF = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16679/*"additionalSkillId"*/, -1, v2);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillLv(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BBC0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16681/*"additionalSkillLv"*/);
    byte_4A5BBC0 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16681/*"additionalSkillLv"*/, 1, v2);
}


int32_t __fastcall SkillLvEntity__GetBattleStartRemainingTurn(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BBC2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17118/*"battleStartRemainingTurn"*/);
    byte_4A5BBC2 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_17118/*"battleStartRemainingTurn"*/, 0, v2);
}


bool __fastcall SkillLvEntity__GetBonusUpVal(
        SkillLvEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        QuestPhaseEntity_o *questPhaseEntity,
        const MethodInfo *method)
{
  struct System_Int32_array *funcId; // x8
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *Values; // x0
  const MethodInfo *v10; // x1
  struct System_Int32_array *v11; // x8
  const MethodInfo_31BE260 **v12; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x24
  unsigned __int64 v14; // x29
  unsigned __int64 max_length; // x9
  unsigned __int64 MasterName_k__BackingField_low; // x8
  System_Collections_Generic_Dictionary_object__int__o *v17; // x25
  EventUpValInfo_o *v18; // x8
  const MethodInfo_31BE260 **v19; // x10
  const MethodInfo_31BE260 *v20; // x2
  EventUpValInfo_o **v21; // x27
  const MethodInfo_31BE260 **v22; // x28
  int32_t Item; // w0
  EventUpValInfo_o **v24; // x8
  int32_t v25; // w26
  Il2CppObject *v26; // x28
  EventDropUpValInfo_o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8
  int32_t dispLimitCount; // [xsp+0h] [xbp-90h]
  int32_t limitCount; // [xsp+4h] [xbp-8Ch]
  EventUpValInfo_o **v37; // [xsp+8h] [xbp-88h]
  ServantEntity_o *v38; // [xsp+10h] [xbp-80h]
  char v39; // [xsp+1Ch] [xbp-74h]
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4A5BBA7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_FunctionGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1B885B0(&EventDropUpValInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1B885B0(&StringLiteral_1413/*"2"*/);
    sub_1B885B0(&StringLiteral_13553/*"Target"*/);
    sub_1B885B0(&StringLiteral_1266/*"1"*/);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A5BBA7 = 1;
  }
  entity = 0LL;
  funcId = this->fields.funcId;
  if ( funcId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FunctionMaster___);
    Values = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    if ( *eventUpVallInfo )
    {
      if ( (*eventUpVallInfo)->fields.svtId < 1 )
      {
        v38 = 0LL;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Values = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !*eventUpVallInfo || !Values )
          goto LABEL_53;
        v38 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   Values,
                                   (*eventUpVallInfo)->fields.svtId,
                                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
      Values = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvEntity__getValues(this, v10);
      v11 = this->fields.funcId;
      if ( v11 )
      {
        v39 = 0;
        v12 = (const MethodInfo_31BE260 **)&Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
        v13 = Values;
        v14 = 0LL;
        p_list = &Values->fields.list;
        do
        {
          max_length = v11->max_length;
          if ( (__int64)v14 >= (int)max_length )
          {
            LOBYTE(funcId) = v39;
            return (char)funcId;
          }
          if ( v14 >= max_length )
            goto LABEL_57;
          if ( !Master_object )
            break;
          Values = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                   &entity,
                                                                   v11->m_Items[v14 + 1],
                                                                   (const MethodInfo_311D988 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Values & 1) != 0 )
          {
            if ( !entity || !questPhaseEntity )
              break;
            Values = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestPhaseEntity__IsMatchIndividuality(
                                                                     questPhaseEntity,
                                                                     (System_Int32_array *)entity[5].klass,
                                                                     0LL);
            if ( ((unsigned __int8)Values & 1) != 0 )
            {
              if ( !v13 )
                break;
              MasterName_k__BackingField_low = LODWORD(v13->fields._MasterName_k__BackingField);
              if ( (__int64)v14 >= (int)MasterName_k__BackingField_low )
              {
                LOBYTE(funcId) = 0;
                return (char)funcId;
              }
              if ( v14 >= MasterName_k__BackingField_low )
LABEL_57:
                sub_1B88814(Values, v10);
              v17 = (System_Collections_Generic_Dictionary_object__int__o *)p_list[v14];
              if ( v17 )
              {
                if ( !entity )
                  break;
                if ( LODWORD(entity[1].monitor) == 111 )
                {
                  Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                           (System_Collections_Generic_Dictionary_object__int__o *)p_list[v14],
                                                                           (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                                                           (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                  if ( ((unsigned __int8)Values & 1) != 0 )
                  {
                    Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                             v17,
                                                                             (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                                                             *v12);
                    if ( (int)Values < 1 )
                      goto LABEL_34;
                    if ( v38 )
                    {
                      v18 = *eventUpVallInfo;
                      if ( !*eventUpVallInfo )
                        break;
                      v19 = v12;
                      v20 = *v12;
                      v21 = eventUpVallInfo;
                      dispLimitCount = v18->fields.dispLimitCount;
                      limitCount = v18->fields.limitCount;
                      v22 = v19;
                      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                               v17,
                               (Il2CppObject *)StringLiteral_1413/*"2"*/,
                               v20);
                      Values = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality(
                                                                               v38,
                                                                               limitCount,
                                                                               dispLimitCount,
                                                                               Item,
                                                                               0LL);
                      v24 = v21;
                      v12 = v22;
                      eventUpVallInfo = v24;
                      if ( ((unsigned __int8)Values & 1) != 0 )
                      {
LABEL_34:
                        v37 = eventUpVallInfo;
                        if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                               v17,
                               (Il2CppObject *)StringLiteral_13553/*"Target"*/,
                               (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                        {
                          v25 = System_Collections_Generic_Dictionary_object__int___get_Item(
                                  v17,
                                  (Il2CppObject *)StringLiteral_13553/*"Target"*/,
                                  *v12);
                        }
                        else
                        {
                          v25 = 0;
                        }
                        v26 = entity;
                        v27 = (EventDropUpValInfo_o *)sub_1B887FC(EventDropUpValInfo_TypeInfo);
                        EventDropUpValInfo___ctor_38889548(v27, 0, (FunctionEntity_o *)v26, v25, 0LL);
                        if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                               v17,
                               (Il2CppObject *)StringLiteral_1212/*"0"*/,
                               *v12) == 1 )
                        {
                          Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v17,
                                                                                   (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                                                                   *v12);
                          eventUpVallInfo = v37;
                          if ( !*v37 || !v27 )
                            break;
                          EventDropUpValInfo__SetAddCount(v27, (int32_t)Values, (*v37)->fields.equipSvtId > 0, 0, 0LL);
                        }
                        else
                        {
                          Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v17,
                                                                                   (Il2CppObject *)StringLiteral_1212/*"0"*/,
                                                                                   *v12);
                          eventUpVallInfo = v37;
                          if ( (_DWORD)Values == 2 )
                          {
                            Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                     v17,
                                                                                     (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                                                                     *v12);
                            if ( !*v37 || !v27 )
                              break;
                            EventDropUpValInfo__SetRateCount(
                              v27,
                              (int32_t)Values,
                              (*v37)->fields.equipSvtId > 0,
                              0,
                              0LL);
                          }
                        }
                        if ( !*eventUpVallInfo )
                          break;
                        Values = (DataMasterBase_TMaster__TEntity__PKType__o *)(*eventUpVallInfo)->fields.dropList;
                        if ( !Values )
                          break;
                        v30 = *(_QWORD *)&Values->fields._MasterKind_k__BackingField;
                        v31 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                        ++HIDWORD(Values->fields._MasterName_k__BackingField);
                        if ( !v30 )
                          break;
                        v32 = SLODWORD(Values->fields._MasterName_k__BackingField);
                        if ( (unsigned int)v32 >= *(_DWORD *)(v30 + 24) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            (System_Collections_Generic_List_object__o *)Values,
                            (Il2CppObject *)v27,
                            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v33 = v30 + 8 * v32;
                          LODWORD(Values->fields._MasterName_k__BackingField) = v32 + 1;
                          *(_QWORD *)(v33 + 32) = v27;
                          sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 32), (int32_t)v27, v28, v29);
                        }
                        v39 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
          v11 = this->fields.funcId;
          ++v14;
        }
        while ( v11 );
      }
    }
LABEL_53:
    sub_1B8880C(Values, v10);
  }
  return (char)funcId;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SkillLvEntity__GetEventIndividuality(
        SkillLvEntity_o *this,
        int32_t index,
        int32_t eventId,
        int32_t questId,
        System_Int32_array *questTvals,
        FunctionMaster_o *funcMaster,
        FunctionGroupMaster_o *funcGroupMaster,
        const MethodInfo *method)
{
  SkillLvEntity_o *v14; // x25
  struct System_Int32_array *funcId; // x27
  __int64 v16; // x8
  unsigned __int64 v17; // x28
  struct System_Int32_array *v18; // x8
  int32_t v19; // w26
  SkillLvEntity_o *v21; // x21
  SkillLvEntity___c_c *v22; // x0
  System_Func_object__int__o *_9__61_0; // x22
  Il2CppObject *v24; // x23
  struct SkillLvEntity___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  int32_t v29; // [xsp+Ch] [xbp-74h]
  FunctionGroupEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *v31; // [xsp+18h] [xbp-68h] BYREF

  v14 = this;
  if ( (byte_4A5BBC6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
    sub_1B885B0(&System_Func_QuestGroupEntity__int__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_1B885B0(&Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__);
    this = (SkillLvEntity_o *)sub_1B885B0(&SkillLvEntity___c_TypeInfo);
    byte_4A5BBC6 = 1;
  }
  entity = 0LL;
  v31 = 0LL;
  if ( !questTvals )
    goto LABEL_40;
  if ( *(_QWORD *)&questTvals->max_length )
    return questTvals;
  funcId = v14->fields.funcId;
  if ( !funcId )
    goto LABEL_40;
  v16 = *(_QWORD *)&funcId->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    v29 = questId;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
        goto LABEL_41;
      v18 = v14->fields.funcId;
      if ( !v18 )
        goto LABEL_40;
      if ( v18->max_length <= index )
        goto LABEL_41;
      v19 = funcId->m_Items[v17 + 1];
      if ( v19 != v18->m_Items[index + 1] )
      {
        if ( !funcGroupMaster )
          goto LABEL_40;
        this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(funcGroupMaster, &entity, v19, eventId, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !funcMaster )
            goto LABEL_40;
          this = (SkillLvEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)funcMaster,
                                      &v31,
                                      v19,
                                      (const MethodInfo_311D988 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
      }
      LODWORD(v16) = funcId->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_20;
    }
    if ( !v31 )
      goto LABEL_40;
    questTvals = (System_Int32_array *)v31[5].klass;
LABEL_20:
    questId = v29;
  }
  if ( !questTvals )
    goto LABEL_40;
  if ( *(_QWORD *)&questTvals->max_length )
    return questTvals;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this )
    goto LABEL_40;
  this = (SkillLvEntity_o *)QuestGroupMaster__GetEntityListByGroupId((QuestGroupMaster_o *)this, eventId, 1, 0LL);
  if ( !this )
    goto LABEL_40;
  if ( questId < 1 )
    return questTvals;
  v21 = this;
  if ( this->fields.chargeTurn < 1 )
    return questTvals;
  v22 = SkillLvEntity___c_TypeInfo;
  if ( !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v22 = SkillLvEntity___c_TypeInfo;
  }
  _9__61_0 = (System_Func_object__int__o *)v22->static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = SkillLvEntity___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__61_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_QuestGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__61_0, v24, Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__, 0LL);
    static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = (struct System_Func_QuestGroupEntity__int__o *)_9__61_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                               (System_Func_TSource__TResult__o *)_9__61_0,
                                                               (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
  if ( System_Linq_Enumerable__Contains_int_(
         v28,
         questId,
         (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return questTvals;
  }
  this = (SkillLvEntity_o *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !this )
LABEL_40:
    sub_1B8880C(this, *(_QWORD *)&index);
  questTvals = (System_Int32_array *)this;
  if ( !this->fields.chargeTurn )
LABEL_41:
    sub_1B88814(this, *(_QWORD *)&index);
  LODWORD(this->fields.funcId) = -1;
  return questTvals;
}


System_Collections_Generic_Dictionary_string__int__o *__fastcall SkillLvEntity__GetFollowerValsDictionary(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  System_String_array *StringArray; // x0
  System_String_array *v4; // x20
  System_Collections_Generic_Dictionary_object__int__o *v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  int klass; // w9
  System_String_o *v9; // x20
  int v10; // w8
  int32_t result; // [xsp+8h] [xbp-28h] BYREF
  int v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5BBC5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1B885B0(&StringLiteral_19511/*"followerVals"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5BBC5 = 1;
  }
  result = 0;
  StringArray = EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_19511/*"followerVals"*/, 0LL, 0LL);
  if ( !StringArray )
    return 0LL;
  v4 = StringArray;
  if ( !*(_QWORD *)&StringArray->max_length )
    return 0LL;
  v5 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v5,
    (const MethodInfo_31BD92C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v4->max_length )
    goto LABEL_20;
  v6 = v4->m_Items[0];
  if ( !v6
    || (v6 = System_String__Replace_61726660(
               v6,
               (System_String_o *)StringLiteral_15812/*"["*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0LL)) == 0LL
    || (v6 = System_String__Replace_61726660(
               v6,
               (System_String_o *)StringLiteral_16069/*"]"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0LL)) == 0LL
    || (v6 = (System_String_o *)System_String__Split(v6, 0x2Cu, 0, 0LL), v13 = 0, !v6) )
  {
LABEL_21:
    sub_1B8880C(v6, v7);
  }
  klass = (int)v6[1].klass;
  v9 = v6;
  if ( klass >= 1 )
  {
    v10 = 0;
    while ( v10 < (unsigned int)klass )
    {
      v6 = (System_String_o *)System_Int32__TryParse(*((System_String_o **)&v9[1].monitor + v10), &result, 0LL);
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        v6 = System_Int32__ToString((int32_t)&v13, 0LL);
        if ( !v5 )
          goto LABEL_21;
        System_Collections_Generic_Dictionary_object__int___Add(
          v5,
          (Il2CppObject *)v6,
          result,
          (const MethodInfo_31BE2E0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
      v10 = v13 + 1;
      v13 = v10;
      klass = (int)v9[1].klass;
      if ( v10 >= klass )
        return (System_Collections_Generic_Dictionary_string__int__o *)v5;
    }
LABEL_20:
    sub_1B88814(v6, v7);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v5;
}


System_Nullable_int__o __fastcall SkillLvEntity__GetFuncIndexForSplitFuncSequence(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  SkillLvEntity___c_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *v5; // x20
  System_Func_long__Nullable_int___o *_9__44_0; // x21
  Il2CppObject *v7; // x22
  struct SkillLvEntity___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_Nullable_int__o v13; // 0:x3.8

  if ( (byte_4A5BBB7 & 1) == 0 )
  {
    sub_1B885B0(&Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
    sub_1B885B0(&System_Func_long__Nullable_int___TypeInfo);
    sub_1B885B0(&Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__);
    sub_1B885B0(&SkillLvEntity___c_TypeInfo);
    sub_1B885B0(&StringLiteral_19668/*"funcPositionForSplitFuncSequence"*/);
    byte_4A5BBB7 = 1;
  }
  v3 = SkillLvEntity___c_TypeInfo;
  script = this->fields.script;
  if ( !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v3 = SkillLvEntity___c_TypeInfo;
  }
  v5 = (System_String_o *)StringLiteral_19668/*"funcPositionForSplitFuncSequence"*/;
  _9__44_0 = v3->static_fields->__9__44_0;
  if ( !_9__44_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = SkillLvEntity___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v3->static_fields->__9;
    _9__44_0 = (System_Func_long__Nullable_int___o *)sub_1B887FC(System_Func_long__Nullable_int___TypeInfo);
    System_Func_long__Nullable_int_____ctor(
      _9__44_0,
      v7,
      Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__,
      0LL);
    static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = _9__44_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__44_0, (int32_t)_9__44_0, v9, v10);
  }
  v13 = 0LL;
  return EntityScriptUtil__GetScriptValue_long__Nullable_int__(
           script,
           v5,
           (System_Func_TSource__TDestination__o *)_9__44_0,
           v13,
           (const MethodInfo_2E8846C *)Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
}


System_Int32_array *__fastcall SkillLvEntity__GetIntArrayFromScript(
        SkillLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  System_Collections_Generic_Dictionary_string__object__o *script; // x21
  System_Collections_Generic_List_object__o *v7; // x22
  Il2CppObject *Value_object; // x0
  __int64 v9; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  unsigned int *v14; // x0
  __int64 v15; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  void *v20; // x0
  void *v21; // x21
  int v22; // w1
  int v23; // w20
  __int64 v24; // x20
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5BBBB & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_List_object____);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    byte_4A5BBBB = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  script = this->fields.script;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_object___ctor__);
  Value_object = BasicHelper__GetValue_object_(
                   script,
                   key,
                   (Il2CppObject *)v7,
                   (const MethodInfo_2E6DC68 *)Method_BasicHelper_GetValue_List_object____);
  if ( !Value_object )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)Value_object,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v10 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v26,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      goto LABEL_18;
    }
    if ( !v5 )
      sub_1B8880C(v10, v11);
    if ( !v26.fields._current )
      sub_1B8880C(0LL, v11);
    if ( v26.fields._current->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v14 = (unsigned int *)j_il2cpp_object_unbox_0(v26.fields._current, long_TypeInfo, v12, v13);
    v15 = *v14;
    items = v5->fields._items;
    v17 = Method_System_Collections_Generic_List_int__Add__;
    ++v5->fields._version;
    if ( !items )
      sub_1B8880C(v14, v15);
    size = v5->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v5,
        v15,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v5->fields._size = size + 1;
      items->m_Items[size + 1] = v15;
    }
  }
  sub_1B88ACC(v26.fields._current);
  v21 = v20;
  v23 = v22;
  __cxa_end_catch();
  if ( v23 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C73040();
  }
  v24 = *(_QWORD *)__cxa_begin_catch(v21);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v24 )
    sub_1B88804(v24);
LABEL_18:
  if ( !v5 )
LABEL_20:
    sub_1B8880C(Value_object, v9);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall SkillLvEntity__GetOptionalBattleEffectIdList(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  System_Func_object__object__o *v3; // x20

  if ( (byte_4A5BBB8 & 1) == 0 )
  {
    sub_1B885B0(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    sub_1B885B0(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__);
    sub_1B885B0(&System_Func_List_object___List_int___TypeInfo);
    sub_1B885B0(&StringLiteral_17106/*"battleEffectId"*/);
    byte_4A5BBB8 = 1;
  }
  v3 = (System_Func_object__object__o *)sub_1B887FC(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v3, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0LL);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     (System_String_o *)StringLiteral_17106/*"battleEffectId"*/,
                                                     (System_Func_TSource__TDestination__o *)v3,
                                                     0LL,
                                                     (const MethodInfo_2E885D4 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


int32_t __fastcall SkillLvEntity__GetScriptIntParam(
        SkillLvEntity_o *this,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  SkillLvEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A5BBBD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5BBBD = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)key,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1B8880C(script, key);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v8, v9);
  sub_1B88ACC(script);
  return SkillLvEntity__IsNoTargetSkipSkill(v11, v12);
}


SelectTreasureDeviceInfo_o *__fastcall SkillLvEntity__GetSelectTreasureDeviceInfo(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Value_object__object; // x19
  Il2CppObject *v4; // x0

  if ( (byte_4A5BBC9 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_string__object___);
    sub_1B885B0(&Method_JsonManager_Deserialize_SelectTreasureDeviceInfo___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&StringLiteral_23088/*"selectTreasureDeviceInfo"*/);
    byte_4A5BBC9 = 1;
  }
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_23088/*"selectTreasureDeviceInfo"*/,
                           0LL,
                           (const MethodInfo_2E6E2D4 *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v4 = JsonManager__Deserialize_object_(
           Value_object__object,
           (const MethodInfo_2EE5DF0 *)Method_JsonManager_Deserialize_SelectTreasureDeviceInfo___);
    Value_object__object = v4;
    if ( v4 )
      SelectTreasureDeviceInfo__AssignTdIndexAutomatically((SelectTreasureDeviceInfo_o *)v4, 0LL);
  }
  return (SelectTreasureDeviceInfo_o *)Value_object__object;
}


DataVals_array *__fastcall SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_Int32_array *funcId; // x20
  FunctionMaster_o *v5; // x21
  const MethodInfo *v6; // x1
  DataVals_array *DataValsList; // x0
  __int64 v8; // x1

  if ( (byte_4A5BBA1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5BBA1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FunctionMaster___);
  funcId = this->fields.funcId;
  v5 = (FunctionMaster_o *)Master_object;
  DataValsList = SkillLvEntity__getDataValsList(this, v6);
  if ( !v5 )
    sub_1B8880C(DataValsList, v8);
  return FunctionMaster__GetSetTypeDataValArray(v5, funcId, DataValsList, 0LL);
}


System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *__fastcall SkillLvEntity__GetSvtChangeBgm(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  System_Collections_Generic_Dictionary_string__object__o *v6; // x20
  System_Collections_Generic_List_object__o *v7; // x21
  Il2CppObject *current; // x21
  SkillLvEntity_SvtChangeBgm_o *v9; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x20
  __int64 methodPtr_low; // x9
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5BBBC & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_List_object____);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&SkillLvEntity_SvtChangeBgm_TypeInfo);
    sub_1B885B0(&StringLiteral_23697/*"svtBgmChange"*/);
    byte_4A5BBBC = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)StringLiteral_23697/*"svtBgmChange"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v3;
  v6 = this->fields.script;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_object___ctor__);
  script = (System_Collections_Generic_Dictionary_object__object__o *)BasicHelper__GetValue_object_(
                                                                        v6,
                                                                        (System_String_o *)StringLiteral_23697/*"svtBgmChange"*/,
                                                                        (Il2CppObject *)v7,
                                                                        (const MethodInfo_2E6DC68 *)Method_BasicHelper_GetValue_List_object____);
  if ( !script )
LABEL_21:
    sub_1B8880C(script, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)script,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    current = v23.fields._current;
    v9 = (SkillLvEntity_SvtChangeBgm_o *)sub_1B887FC(SkillLvEntity_SvtChangeBgm_TypeInfo);
    v11 = (Il2CppObject *)v9;
    if ( current )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        sub_1B88ACC(current);
LABEL_19:
        sub_1B8880C(v13, v14);
      }
    }
    SkillLvEntity_SvtChangeBgm___ctor(v9, (System_Collections_Generic_Dictionary_string__object__o *)current, v10);
    if ( !v3 )
      goto LABEL_19;
    items = v3->fields._items;
    v18 = Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1B8880C(v13, v14);
    size = v3->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        v11,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v20[4] = (Il2CppClass *)v11;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v3;
}


void __fastcall SkillLvEntity__GetUniqueFuncIds(
        SkillLvEntity_o *this,
        System_Collections_Generic_HashSet_int__o **ret,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *funcId; // x1
  System_Collections_Generic_HashSet_int__o *isAddState; // x0
  const MethodInfo *v6; // x1
  DataVals_array *DataValsList; // x21
  Il2CppObject *Master_object; // x22
  struct System_Int32_array *v9; // x8
  SkillLvMaster_o *v10; // x23
  unsigned __int64 v11; // x27
  unsigned __int64 max_length; // x9
  DataVals_o *v13; // x24
  int32_t v14; // w1
  int32_t Param; // w25
  int32_t v16; // w1
  const MethodInfo *v17; // x4
  SkillLvEntity_o *v19; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A5BBC8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_4A5BBC8 = 1;
  }
  v19 = 0LL;
  entity = 0LL;
  funcId = (System_Collections_Generic_IEnumerable_T__o *)this->fields.funcId;
  if ( funcId )
  {
    isAddState = *ret;
    if ( !*ret )
      goto LABEL_32;
    System_Collections_Generic_HashSet_int___UnionWith(
      isAddState,
      funcId,
      (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = SkillLvEntity__getDataValsList(this, v6);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FunctionMaster___);
    isAddState = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v9 = this->fields.funcId;
    if ( !v9 )
LABEL_32:
      sub_1B8880C(isAddState, funcId);
    v10 = (SkillLvMaster_o *)isAddState;
    v11 = 0LL;
    while ( 1 )
    {
      max_length = v9->max_length;
      if ( (__int64)v11 >= (int)max_length )
        break;
      if ( v11 >= max_length )
        goto LABEL_34;
      if ( !Master_object )
        goto LABEL_32;
      isAddState = (System_Collections_Generic_HashSet_int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                  &entity,
                                                                  v9->m_Items[v11 + 1],
                                                                  (const MethodInfo_311D988 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)isAddState & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_32;
        isAddState = (System_Collections_Generic_HashSet_int__o *)FuncList__isAddState((int32_t)entity[1].monitor, 0LL);
        if ( ((unsigned __int8)isAddState & 1) != 0 )
        {
          if ( !DataValsList )
            goto LABEL_32;
          if ( v11 >= DataValsList->max_length )
LABEL_34:
            sub_1B88814(isAddState, funcId);
          if ( !entity )
            goto LABEL_32;
          v13 = DataValsList->m_Items[v11];
          if ( !v13 )
            goto LABEL_32;
          DataVals__SetTempType(
            DataValsList->m_Items[v11],
            (FunctionMaster_o *)Master_object,
            (int32_t)entity[1].monitor,
            0LL);
          v14 = DataVals__isParam(v13, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v13, v14, 0, 0LL);
          v16 = DataVals__isParam(v13, 27, 0LL) ? 27 : 4;
          isAddState = (System_Collections_Generic_HashSet_int__o *)DataVals__GetParam(v13, v16, 0, 0LL);
          if ( !v10 )
            goto LABEL_32;
          isAddState = (System_Collections_Generic_HashSet_int__o *)SkillLvMaster__TryGetEntity(
                                                                      v10,
                                                                      &v19,
                                                                      Param,
                                                                      (int32_t)isAddState,
                                                                      v17);
          if ( ((unsigned __int8)isAddState & 1) != 0 )
          {
            if ( !v19 )
              goto LABEL_32;
            funcId = (System_Collections_Generic_IEnumerable_T__o *)v19->fields.funcId;
            if ( funcId )
            {
              isAddState = *ret;
              if ( !*ret )
                goto LABEL_32;
              System_Collections_Generic_HashSet_int___UnionWith(
                isAddState,
                funcId,
                (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
            }
          }
        }
      }
      v9 = this->fields.funcId;
      ++v11;
      if ( !v9 )
        goto LABEL_32;
    }
  }
}


int32_t __fastcall SkillLvEntity__GetWarBoardBreakPointDamageType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BBC4 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15578/*"WarBoardBreakPointDamage"*/);
    byte_4A5BBC4 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_15578/*"WarBoardBreakPointDamage"*/, 0, v2);
}


bool __fastcall SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BBC7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16680/*"additionalSkillInsertCurrentSkillAfter"*/);
    byte_4A5BBC7 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16680/*"additionalSkillInsertCurrentSkillAfter"*/, 0, v2) == 1;
}


bool __fastcall SkillLvEntity__IsAress(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4A5BBB4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&StringLiteral_16889/*"aress"*/);
    byte_4A5BBB4 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_16889/*"aress"*/,
                       (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsContainsTurnOrCountBuff(SkillLvEntity_o *this, const MethodInfo *method)
{
  DataVals_array *SetTypeDataValArray; // x0
  __int64 v3; // x1
  int max_length; // w8
  DataVals_array *v5; // x19
  unsigned int v6; // w22
  bool v7; // w21
  DataVals_o *v8; // x20
  int32_t funcType; // w8

  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(this, method);
  if ( !SetTypeDataValArray )
LABEL_16:
    sub_1B8880C(SetTypeDataValArray, v3);
  max_length = SetTypeDataValArray->max_length;
  v5 = SetTypeDataValArray;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  v7 = 1;
  while ( 1 )
  {
    if ( v6 >= max_length )
      sub_1B88814(SetTypeDataValArray, v3);
    v8 = v5->m_Items[v6];
    if ( !v8 )
      goto LABEL_16;
    funcType = v8->fields.funcType;
    if ( funcType == 1 || funcType == 130 || funcType == 16 )
    {
      if ( DataVals__GetParam(v8, 1, 0, 0LL) > 0 )
        return v7;
      SetTypeDataValArray = (DataVals_array *)DataVals__GetParam(v8, 2, 0, 0LL);
      if ( (int)SetTypeDataValArray > 0 )
        return 1;
    }
    max_length = v5->max_length;
    if ( (int)++v6 >= max_length )
      return 0;
  }
}


bool __fastcall SkillLvEntity__IsEnableTarget(SkillLvEntity_o *this, bool isCheckHate, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  SkillLvEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A5BBB5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&StringLiteral_5929/*"EnableTarget"*/);
    byte_4A5BBB5 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_5929/*"EnableTarget"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return isCheckHate;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_5929/*"EnableTarget"*/,
                                                                            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B8880C(Item, v6);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v8, v9) == 1;
  sub_1B88ACC(Item);
  return (unsigned __int8)SkillLvEntity__GetAddIndiv(v11, v12);
}


bool __fastcall SkillLvEntity__IsIgnoreWhiteFade(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BBB9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20227/*"ignoreWhiteFade"*/);
    byte_4A5BBB9 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20227/*"ignoreWhiteFade"*/, 0LL);
}


bool __fastcall SkillLvEntity__IsNoTargetSkipSkill(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BBBE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22097/*"noTargetSkipSkill"*/);
    byte_4A5BBBE = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_22097/*"noTargetSkipSkill"*/, -1, v2) == 1;
}


bool __fastcall SkillLvEntity__IsRevivalUnder(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4A5BBB3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&StringLiteral_22924/*"revivalUnder"*/);
    byte_4A5BBB3 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_22924/*"revivalUnder"*/,
                       (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsRevivalUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4A5BBB2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&StringLiteral_22925/*"revivalUp"*/);
    byte_4A5BBB2 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_22925/*"revivalUp"*/,
                       (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsSupportExcluded(
        SkillLvEntity_o *this,
        System_Collections_Generic_Dictionary_string__int__o *vals,
        const MethodInfo *method)
{
  if ( (byte_4A5BBAF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    this = (SkillLvEntity_o *)sub_1B885B0(&StringLiteral_2406/*"ApplySupportSvt"*/);
    byte_4A5BBAF = 1;
  }
  if ( !vals )
    sub_1B8880C(this, vals);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)StringLiteral_2406/*"ApplySupportSvt"*/,
           (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
      && !System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)vals,
            (Il2CppObject *)StringLiteral_2406/*"ApplySupportSvt"*/,
            (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


bool __fastcall SkillLvEntity__IsVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4A5BBAD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&StringLiteral_15376/*"VoiceVolume"*/);
    byte_4A5BBAD = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_15376/*"VoiceVolume"*/,
                       (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall SkillLvEntity__getCondition(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.script;
}


DataVals_array *__fastcall SkillLvEntity__getDataValsList(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_String_array *svals; // x8
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x8
  DataVals_array *v7; // x19
  __int64 v8; // x24
  __int64 v9; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v11; // x26
  System_String_o *v12; // x22
  DataVals_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  DataVals_o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v20; // x0

  if ( (byte_4A5BBA0 & 1) == 0 )
  {
    sub_1B885B0(&DataVals___TypeInfo);
    sub_1B885B0(&DataVals_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BBA0 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v7 = (DataVals_array *)sub_1B88658(DataVals___TypeInfo, 1LL);
    v16 = (DataVals_o *)sub_1B887FC(DataVals_TypeInfo);
    DataVals___ctor(v16, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v7 )
    {
      if ( v16 )
      {
        v4 = sub_1B886EC(v16, v7->obj.klass->_1.element_class);
        if ( !v4 )
        {
LABEL_21:
          v20 = sub_1B88830(v4);
          sub_1B886D8(v20, 0LL);
        }
      }
      if ( !v7->max_length )
LABEL_20:
        sub_1B88814(v4, v5);
      v7->m_Items[0] = v16;
      sub_1B88554((ServantStatusBattleListViewItem_o *)v7->m_Items, (int32_t)v16, v17, v18);
      return v7;
    }
LABEL_13:
    sub_1B8880C(v4, v5);
  }
  v4 = sub_1B88658(DataVals___TypeInfo, svals->max_length);
  v6 = this->fields.svals;
  if ( !v6 )
    goto LABEL_13;
  v7 = (DataVals_array *)v4;
  v8 = 4LL;
  v9 = 32LL;
  while ( 1 )
  {
    max_length = v6->max_length;
    v11 = v8 - 4;
    if ( v8 - 4 >= (int)max_length )
      return v7;
    if ( v11 >= max_length )
      goto LABEL_20;
    v12 = (System_String_o *)*((_QWORD *)&v6->obj.klass + v8);
    v13 = (DataVals_o *)sub_1B887FC(DataVals_TypeInfo);
    DataVals___ctor(v13, v12, 0LL);
    if ( v7 )
    {
      if ( v13 )
      {
        v4 = sub_1B886EC(v13, v7->obj.klass->_1.element_class);
        if ( !v4 )
          goto LABEL_21;
      }
      if ( v11 >= v7->max_length )
        goto LABEL_20;
      *((_QWORD *)&v7->obj.klass + v8) = v13;
      sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v7 + v9), (int32_t)v13, v14, v15);
      v6 = this->fields.svals;
      ++v8;
      v9 += 8LL;
      if ( v6 )
        continue;
    }
    goto LABEL_13;
  }
}


System_String_o *__fastcall SkillLvEntity__getDetail(SkillLvEntity_o *this, bool isShort, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  System_String_o *Detail; // x20

  if ( (byte_4A5BBA2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillDetailMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SkillDetailParamFormatResolver_TypeInfo);
    byte_4A5BBA2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillDetailMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  Detail = SkillDetailMaster__getDetail((SkillDetailMaster_o *)Instance, this->fields.skillDetailId, isShort, v7);
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  return SkillDetailParamFormatResolver__Apply(Detail, this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__getDetail_39937016(
        SkillLvEntity_o *this,
        int32_t lv,
        bool isShort,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x0
  Il2CppObject *v12; // x21
  System_String_o *Detail; // x0
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5BBA3 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8234/*"LEVEL_DETAIL_INFO"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BBA3 = 1;
  }
  if ( lv <= 0 )
  {
    v12 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_8234/*"LEVEL_DETAIL_INFO"*/, 0LL);
    v15 = lv;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v8, v9, v10);
    v12 = (Il2CppObject *)System_String__Format(v7, v11, 0LL);
  }
  Detail = SkillLvEntity__getDetail(this, isShort, (const MethodInfo *)isShort);
  return System_String__Format(Detail, v12, 0LL);
}


bool __fastcall SkillLvEntity__getEventUpVal(
        SkillLvEntity_o *this,
        int32_t wearersSvtId,
        int32_t wearesLimitCount,
        int32_t wearesDispLimitCount,
        EventUpValSetupInfo_o *setupInfo,
        int32_t eventId,
        bool isFuncGroup,
        bool isOwner,
        const MethodInfo *method)
{
  Il2CppObject *v17; // x27
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *QuestPhaseIndividualList; // x0
  System_Int32_array *Individuality; // x1
  System_Collections_Generic_Dictionary_string__int__array *Values; // x26
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v24; // x19
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v26; // x8
  unsigned __int64 v27; // x8
  System_Collections_Generic_Dictionary_object__int__o *v28; // x20
  Il2CppObject *v29; // x8
  int monitor; // w24
  Il2CppClass *klass; // x3
  const MethodInfo *v32; // x7
  int32_t Item; // w0
  System_Int32_array *EventIndividuality; // x0
  __int64 *v35; // x8
  bool v37; // [xsp+4h] [xbp-ACh]
  ItemMaster_o *Master_object; // [xsp+8h] [xbp-A8h]
  int32_t v39; // [xsp+14h] [xbp-9Ch]
  unsigned int v40; // [xsp+1Ch] [xbp-94h]
  ServantEntity_o *v41; // [xsp+20h] [xbp-90h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_Dictionary_string__int__o **m_Items; // [xsp+38h] [xbp-78h]
  FunctionGroupEntity_o *v44; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A5BBA8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_FunctionGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1B885B0(&StringLiteral_1475/*"3"*/);
    sub_1B885B0(&StringLiteral_1413/*"2"*/);
    sub_1B885B0(&StringLiteral_13553/*"Target"*/);
    sub_1B885B0(&StringLiteral_1266/*"1"*/);
    sub_1B885B0(&StringLiteral_6182/*"EventId"*/);
    byte_4A5BBA8 = 1;
  }
  v44 = 0LL;
  entity = 0LL;
  if ( setupInfo && this->fields.funcId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
    v17 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FunctionMaster___);
    v19 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    v39 = wearesLimitCount;
    v40 = wearersSvtId;
    if ( wearersSvtId < 1 )
    {
      v41 = 0LL;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !QuestPhaseIndividualList )
        goto LABEL_87;
      v41 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 QuestPhaseIndividualList,
                                 wearersSvtId,
                                 (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    }
    Values = SkillLvEntity__getValues(this, v18);
    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                                                               setupInfo,
                                                                               eventId,
                                                                               0LL);
    funcId = this->fields.funcId;
    questPhaseIndividualityList = (System_Int32_array *)QuestPhaseIndividualList;
    if ( !funcId )
      goto LABEL_87;
    v37 = !isOwner;
    m_Items = Values->m_Items;
    v24 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v24 >= (int)max_length )
        break;
      if ( v24 >= max_length )
        goto LABEL_95;
      if ( !v17 )
        goto LABEL_87;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                                                                                 &entity,
                                                                                 funcId->m_Items[v24 + 1],
                                                                                 (const MethodInfo_311D988 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_86;
      if ( isFuncGroup )
      {
        v26 = this->fields.funcId;
        if ( !v26 )
          goto LABEL_87;
        if ( v24 >= v26->max_length )
LABEL_95:
          sub_1B88814(QuestPhaseIndividualList, Individuality);
        if ( !v19 )
          goto LABEL_87;
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)FunctionGroupMaster__TryGetEntity(
                                                                                   (FunctionGroupMaster_o *)v19,
                                                                                   &v44,
                                                                                   v26->m_Items[v24 + 1],
                                                                                   eventId,
                                                                                   0LL);
        if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
          goto LABEL_86;
      }
      if ( !Values )
        goto LABEL_87;
      v27 = Values->max_length;
      if ( (__int64)v24 >= (int)v27 )
        goto LABEL_86;
      if ( v24 >= v27 )
        goto LABEL_95;
      v28 = (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24];
      if ( !v28 )
        goto LABEL_86;
      v29 = entity;
      if ( !entity )
        goto LABEL_87;
      monitor = (int)entity[1].monitor;
      if ( monitor > 104 )
      {
        switch ( monitor )
        {
          case 105:
          case 106:
          case 107:
          case 108:
          case 114:
          case 115:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                                       (Il2CppObject *)StringLiteral_1475/*"3"*/,
                                                                                       (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v28,
                                                                                       (Il2CppObject *)StringLiteral_1475/*"3"*/,
                                                                                       (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v28,
                                                                                       (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                                                                       (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList )
            {
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v28,
                                                                                         (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                                                                         (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !(_DWORD)QuestPhaseIndividualList )
                goto LABEL_86;
            }
            if ( !entity )
              goto LABEL_87;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                       setupInfo,
                                                                                       questPhaseIndividualityList,
                                                                                       (System_Int32_array *)entity[5].klass,
                                                                                       0LL);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            if ( monitor != 105 )
              goto LABEL_90;
            if ( !entity )
              goto LABEL_87;
            klass = entity[2].klass;
            if ( !klass )
              goto LABEL_90;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)(&dword_0 + 1);
            if ( (v40 & 0x80000000) != 0 || !klass->_1.namespaze )
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            if ( v41 )
            {
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality_39652224(
                                                                                         v41,
                                                                                         v39,
                                                                                         wearesDispLimitCount,
                                                                                         (System_Int32_array *)klass,
                                                                                         0LL);
              if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
                goto LABEL_90;
            }
            goto LABEL_86;
          case 111:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                                       (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                                                                       (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       v28,
                                                                                       (Il2CppObject *)StringLiteral_6182/*"EventId"*/,
                                                                                       (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v28,
                                                                                       (Il2CppObject *)StringLiteral_6182/*"EventId"*/,
                                                                                       (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v28,
                                                                                       (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                                                                       (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (int)QuestPhaseIndividualList >= 1 )
            {
              if ( !v41 )
                goto LABEL_86;
              Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v28,
                       (Il2CppObject *)StringLiteral_1413/*"2"*/,
                       (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality(
                                                                                         v41,
                                                                                         v39,
                                                                                         wearesDispLimitCount,
                                                                                         Item,
                                                                                         0LL);
              if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
                goto LABEL_86;
            }
            if ( !entity )
              goto LABEL_87;
            EventIndividuality = SkillLvEntity__GetEventIndividuality(
                                   this,
                                   v24,
                                   eventId,
                                   setupInfo->fields.questId,
                                   (System_Int32_array *)entity[5].klass,
                                   (FunctionMaster_o *)v17,
                                   (FunctionGroupMaster_o *)v19,
                                   v32);
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                       setupInfo,
                                                                                       questPhaseIndividualityList,
                                                                                       EventIndividuality,
                                                                                       0LL);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
            {
              if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
                      v28,
                      (Il2CppObject *)StringLiteral_13553/*"Target"*/,
                      (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                goto LABEL_90;
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v28,
                                                                                         (Il2CppObject *)StringLiteral_13553/*"Target"*/,
                                                                                         (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)QuestPhaseIndividualList != 1 || !v37 )
                goto LABEL_90;
            }
            goto LABEL_86;
          case 113:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                                       (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                                                                       (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v28,
                                                                                       (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                                                                       (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v28,
                                                                                       (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                                                                       (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( !(_DWORD)QuestPhaseIndividualList )
              goto LABEL_86;
            if ( !entity )
              goto LABEL_87;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                       setupInfo,
                                                                                       questPhaseIndividualityList,
                                                                                       (System_Int32_array *)entity[5].klass,
                                                                                       0LL);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            if ( !v41 )
              goto LABEL_94;
            Individuality = ServantEntity__getIndividuality(v41, v39, wearesDispLimitCount, 0LL);
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
            if ( !Master_object )
              goto LABEL_87;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ItemMaster__GetIndividualityList_39390132(
                                                                                       Master_object,
                                                                                       Individuality,
                                                                                       0LL);
            if ( !QuestPhaseIndividualList )
              goto LABEL_87;
            if ( QuestPhaseIndividualList->fields._MasterName_k__BackingField )
              goto LABEL_90;
            goto LABEL_86;
          case 116:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                                       (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                                                                       (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            goto LABEL_84;
          case 117:
          case 118:
            goto LABEL_85;
          case 129:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                                       (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                                                                       (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            v35 = &StringLiteral_1413/*"2"*/;
            goto LABEL_80;
          case 132:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                                       (Il2CppObject *)StringLiteral_1475/*"3"*/,
                                                                                       (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            v35 = &StringLiteral_1475/*"3"*/;
LABEL_80:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v28,
                                                                                       (Il2CppObject *)*v35,
                                                                                       (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_86;
            goto LABEL_84;
          default:
            goto LABEL_86;
        }
      }
      if ( monitor != 1 )
      {
        if ( monitor == 7 )
        {
          QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                     (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                                     (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                                                                     (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
          {
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v28,
                                                                                       (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                                                                       (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList )
            {
LABEL_84:
              v29 = entity;
              if ( !entity )
                goto LABEL_87;
LABEL_85:
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                         setupInfo,
                                                                                         questPhaseIndividualityList,
                                                                                         (System_Int32_array *)v29[5].klass,
                                                                                         0LL);
              if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
              {
LABEL_90:
                LOBYTE(QuestPhaseIndividualList) = 1;
                return (unsigned __int8)QuestPhaseIndividualList & 1;
              }
            }
          }
          goto LABEL_86;
        }
        if ( monitor != 16 )
          goto LABEL_86;
      }
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                                 (Il2CppObject *)StringLiteral_1475/*"3"*/,
                                                                                 (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
      {
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v28,
                                                                                   (Il2CppObject *)StringLiteral_1475/*"3"*/,
                                                                                   (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        if ( (_DWORD)QuestPhaseIndividualList )
        {
          if ( !entity )
            goto LABEL_87;
          QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                     setupInfo,
                                                                                     questPhaseIndividualityList,
                                                                                     (System_Int32_array *)entity[5].klass,
                                                                                     0LL);
          if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
          {
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)v41;
            if ( !v41 )
            {
LABEL_94:
              LODWORD(QuestPhaseIndividualList) = v40 >> 31;
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            }
            if ( entity )
            {
              LOBYTE(QuestPhaseIndividualList) = ServantEntity__IsIndividuality_39652224(
                                                   v41,
                                                   v39,
                                                   wearesDispLimitCount,
                                                   (System_Int32_array *)entity[2].monitor,
                                                   0LL);
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            }
LABEL_87:
            sub_1B8880C(QuestPhaseIndividualList, Individuality);
          }
        }
      }
LABEL_86:
      funcId = this->fields.funcId;
      ++v24;
      if ( !funcId )
        goto LABEL_87;
    }
  }
  LOBYTE(QuestPhaseIndividualList) = 0;
  return (unsigned __int8)QuestPhaseIndividualList & 1;
}


bool __fastcall SkillLvEntity__getEventUpVal_39954432(
        SkillLvEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool isFuncGroup,
        bool isOwner,
        bool isSupport,
        bool isEquipOnly,
        int64_t nowTime,
        const MethodInfo *method)
{
  SkillLvEntity_o *v10; // x24
  Il2CppObject *Master_object; // x25
  Il2CppObject *v12; // x26
  Il2CppObject *v13; // x20
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v16; // x8
  struct System_Int32_array *v17; // x10
  SkillLvEntity_o *v18; // x29
  unsigned __int64 v19; // x11
  EventUpValInfo_o *v20; // x8
  int32_t v21; // w21
  ServantLimitEntity_o *v22; // x19
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v24; // x19
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v26; // x8
  struct EventUpValSetupInfo_o *v27; // x8
  unsigned __int64 chargeTurn; // x8
  System_Collections_Generic_Dictionary_object__int__o *v29; // x28
  int monitor; // w20
  const MethodInfo *v31; // x2
  Il2CppClass *klass; // x3
  Il2CppObject *v33; // x27
  int32_t Item; // w23
  EventUpValInfo_o *v35; // x8
  const MethodInfo *v36; // x2
  struct System_Int32_array *v37; // x8
  EventPointBuffEntity_o *EnableEntity; // x20
  Il2CppClass *v39; // x21
  const char *namespaze; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // x27
  unsigned __int64 v42; // x23
  int32_t lv; // w20
  char v44; // w8
  Il2CppObject *v45; // x23
  EventDropUpValInfo_o *v46; // x20
  int32_t v47; // w1
  EventDropUpValInfo_o *v48; // x0
  bool v49; // w2
  int32_t v50; // w2
  int32_t v51; // w3
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x7
  EventUpValInfo_o *v54; // x8
  int32_t limitCount; // w20
  int32_t dispLimitCount; // w23
  int32_t v57; // w0
  struct EventUpValSetupInfo_o *v58; // x8
  SkillLvEntity_o *v59; // x2
  SkillEntity_o *v60; // x20
  SkillLvEntity_o *v61; // x23
  System_Int32_array *ActIndividuality; // x0
  int32_t v63; // w20
  const MethodInfo *v64; // x2
  int32_t v65; // w8
  int32_t v66; // w9
  int32_t v67; // w20
  Il2CppObject *v68; // x23
  EventDropUpValInfo_o *v69; // x27
  int32_t v70; // w2
  int32_t v71; // w3
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8
  const MethodInfo *v76; // x2
  Il2CppObject *v77; // x23
  int32_t v78; // w27
  int32_t v79; // w1
  EventDropUpValInfo_o *v80; // x0
  bool v81; // w2
  Il2CppObject *v82; // x23
  Il2CppObject *v83; // x23
  EventUpValInfo_o *v84; // x8
  Il2CppObject *v85; // x1
  EventUpValInfo_o *v86; // x8
  Il2CppObject *v87; // x23
  __int64 v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  __int64 v91; // x8
  Il2CppObject *v92; // x23
  EventDropUpValInfo_o *v93; // x27
  int32_t v94; // w2
  int32_t v95; // w3
  __int64 v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  __int64 v99; // x8
  Il2CppObject *v100; // x20
  __int64 v101; // x23
  UserServantEntity_o *HeroineData; // x0
  bool v104; // [xsp+4h] [xbp-ECh]
  int32_t v105; // [xsp+8h] [xbp-E8h]
  bool v106; // [xsp+Ch] [xbp-E4h]
  ServantEntity_o *v107; // [xsp+10h] [xbp-E0h]
  EventPointBuffEntity_o *value; // [xsp+18h] [xbp-D8h]
  SkillLvEntity_o *valuea; // [xsp+18h] [xbp-D8h]
  __int64 valueb; // [xsp+18h] [xbp-D8h]
  char v111; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v112; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v113; // [xsp+20h] [xbp-D0h]
  struct System_Int32_array *v115; // [xsp+30h] [xbp-C0h]
  char v116; // [xsp+3Ch] [xbp-B4h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+40h] [xbp-B0h]
  SkillLvEntity_o *v118; // [xsp+48h] [xbp-A8h]
  unsigned __int64 v119; // [xsp+50h] [xbp-A0h]
  FunctionGroupEntity_o *v123; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-78h] BYREF
  int32_t actMaxRarity; // [xsp+84h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16

  v10 = this;
  if ( (byte_4A5BBA9 & 1) == 0 )
  {
    sub_1B885B0(&BuffList_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventPointBuffMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_FunctionGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1B885B0(&EventDropUpValInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&StringLiteral_1475/*"3"*/);
    sub_1B885B0(&StringLiteral_1413/*"2"*/);
    sub_1B885B0(&StringLiteral_13553/*"Target"*/);
    sub_1B885B0(&StringLiteral_1266/*"1"*/);
    sub_1B885B0(&StringLiteral_6182/*"EventId"*/);
    this = (SkillLvEntity_o *)sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A5BBA9 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  v123 = 0LL;
  entity = 0LL;
  if ( !*eventUpVallInfo )
    goto LABEL_273;
  if ( !(*eventUpVallInfo)->fields.setupInfo || !v10->fields.funcId )
    goto LABEL_271;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FunctionMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !*eventUpVallInfo )
    goto LABEL_273;
  v118 = this;
  if ( (*eventUpVallInfo)->fields.svtId < 1 )
  {
    v13 = 0LL;
    goto LABEL_16;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !*eventUpVallInfo || !this )
LABEL_273:
    sub_1B8880C(this, eventUpVallInfo);
  v13 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          (*eventUpVallInfo)->fields.svtId,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
LABEL_16:
  this = (SkillLvEntity_o *)SkillLvEntity__getValues(v10, (const MethodInfo *)eventUpVallInfo);
  if ( !*eventUpVallInfo )
    goto LABEL_273;
  setupInfo = (*eventUpVallInfo)->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_273;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_273;
  v115 = eventIdList;
  v16 = *(_QWORD *)&eventIdList->max_length;
  if ( (int)v16 >= 1 )
  {
    v107 = (ServantEntity_o *)v13;
    v104 = isOwner;
    v111 = 0;
    v106 = v13 == 0LL || isEquipOnly;
    v17 = v115;
    v18 = this;
    v19 = 0LL;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v16 )
LABEL_274:
        sub_1B88814(this, eventUpVallInfo);
      v20 = *eventUpVallInfo;
      if ( !*eventUpVallInfo )
        goto LABEL_273;
      v21 = v17->m_Items[v19 + 1];
      v119 = v19;
      if ( v20->fields.equipSvtId < 1 )
      {
        v116 = 0;
      }
      else
      {
        this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_273;
        this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        if ( !*eventUpVallInfo )
          goto LABEL_273;
        if ( !this )
          goto LABEL_273;
        v22 = ServantLimitMaster__GetEntity(
                (ServantLimitMaster_o *)this,
                (*eventUpVallInfo)->fields.svtId,
                (*eventUpVallInfo)->fields.limitCount,
                0LL);
        this = (SkillLvEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !*eventUpVallInfo )
          goto LABEL_273;
        if ( !v22 )
          goto LABEL_273;
        if ( !this )
          goto LABEL_273;
        this = (SkillLvEntity_o *)PartyOrganizationUtility__IsRarityRestriction(
                                    (PartyOrganizationUtility_o *)this,
                                    &skillName,
                                    &actMaxRarity,
                                    (*eventUpVallInfo)->fields.svtId,
                                    v22->fields.rarity,
                                    (*eventUpVallInfo)->fields.equipSvtId,
                                    v21,
                                    0LL);
        v116 = (char)this;
        v20 = *eventUpVallInfo;
        if ( !*eventUpVallInfo )
          goto LABEL_273;
      }
      this = (SkillLvEntity_o *)v20->fields.setupInfo;
      if ( !this )
        goto LABEL_273;
      this = (SkillLvEntity_o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                  (EventUpValSetupInfo_o *)this,
                                  v21,
                                  0LL);
      funcId = v10->fields.funcId;
      questPhaseIndividualityList = (System_Int32_array *)this;
      if ( !funcId )
        goto LABEL_273;
      v24 = 0LL;
      while ( 1 )
      {
        max_length = funcId->max_length;
        if ( (__int64)v24 >= (int)max_length )
          break;
        if ( v24 >= max_length )
          goto LABEL_274;
        if ( !Master_object )
          goto LABEL_273;
        this = (SkillLvEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    funcId->m_Items[v24 + 1],
                                    (const MethodInfo_311D988 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_259;
        if ( isFuncGroup )
        {
          v26 = v10->fields.funcId;
          if ( !v26 )
            goto LABEL_273;
          if ( v24 >= v26->max_length )
            goto LABEL_274;
          if ( !v12 )
            goto LABEL_273;
          this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(
                                      (FunctionGroupMaster_o *)v12,
                                      &v123,
                                      v26->m_Items[v24 + 1],
                                      v21,
                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_259;
          this = (SkillLvEntity_o *)v123;
          if ( !v123 )
            goto LABEL_273;
          this = (SkillLvEntity_o *)FunctionGroupEntity__GetCheckEventQuest(v123, 0LL);
          if ( (_DWORD)this == 1 )
          {
            if ( !*eventUpVallInfo )
              goto LABEL_273;
            v27 = (*eventUpVallInfo)->fields.setupInfo;
            this = v118;
            if ( !v27 || !v118 )
              goto LABEL_273;
            this = (SkillLvEntity_o *)EventQuestMaster__IsEventNotIncluded(
                                        (EventQuestMaster_o *)v118,
                                        v21,
                                        v27->fields.questId,
                                        v27->fields.questPhase,
                                        12,
                                        nowTime,
                                        0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_259;
          }
        }
        if ( !v18 )
          goto LABEL_273;
        chargeTurn = (unsigned int)v18->fields.chargeTurn;
        if ( (__int64)v24 >= (int)chargeTurn )
          goto LABEL_259;
        if ( v24 >= chargeTurn )
          goto LABEL_274;
        v29 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&v18->fields.funcId + v24);
        if ( !v29 )
          goto LABEL_259;
        if ( !entity )
          goto LABEL_273;
        monitor = (int)entity[1].monitor;
        if ( monitor > 104 )
        {
          switch ( monitor )
          {
            case 105:
            case 106:
            case 107:
            case 108:
            case 114:
            case 115:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1475/*"3"*/,
                                          (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1475/*"3"*/,
                                          (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v21 != (_DWORD)this )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                          (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v29,
                                            (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                            (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_259;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v29,
                                            v31);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_259;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              if ( !entity )
                goto LABEL_273;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)entity[5].klass,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              if ( monitor != 105 )
                goto LABEL_75;
              if ( !entity )
                goto LABEL_273;
              klass = entity[2].klass;
              if ( !klass || !klass->_1.namespaze )
                goto LABEL_75;
              if ( !v107 )
                goto LABEL_259;
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_39652224(
                                          v107,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          (System_Int32_array *)klass,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
LABEL_75:
              v33 = entity;
              Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v29,
                       (Il2CppObject *)StringLiteral_1212/*"0"*/,
                       (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v112 = (EventDropUpValInfo_o *)sub_1B887FC(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_38889548(v112, v21, (FunctionEntity_o *)v33, Item, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v29,
                     (Il2CppObject *)StringLiteral_1266/*"1"*/,
                     (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v29,
                                            (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                            (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v35 = *eventUpVallInfo;
                if ( !*eventUpVallInfo )
                  goto LABEL_273;
LABEL_122:
                v46 = v112;
                if ( !v112 )
                  goto LABEL_273;
                v47 = (int)this;
                v48 = v112;
                v49 = v35->fields.equipSvtId > 0;
LABEL_124:
                EventDropUpValInfo__SetAddCount(v48, v47, v49, v116 & 1, 0LL);
                goto LABEL_234;
              }
LABEL_222:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                          (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v46 = v112;
              if ( (_DWORD)this != 2 )
                goto LABEL_234;
              v85 = (Il2CppObject *)StringLiteral_1413/*"2"*/;
LABEL_224:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          v85,
                                          (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v86 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              break;
            case 109:
            case 110:
            case 112:
            case 117:
            case 118:
            case 119:
            case 120:
            case 121:
            case 122:
            case 123:
            case 124:
            case 125:
            case 126:
            case 127:
            case 128:
              goto LABEL_259;
            case 111:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                          (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v29,
                                          (Il2CppObject *)StringLiteral_6182/*"EventId"*/,
                                          (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_6182/*"EventId"*/,
                                          (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v21 != (_DWORD)this )
                goto LABEL_259;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v29,
                                            v52);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_259;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                          (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (int)this < 1 )
                goto LABEL_134;
              if ( !v107 )
                goto LABEL_259;
              v54 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              limitCount = v54->fields.limitCount;
              dispLimitCount = v54->fields.dispLimitCount;
              v57 = System_Collections_Generic_Dictionary_object__int___get_Item(
                      v29,
                      (Il2CppObject *)StringLiteral_1413/*"2"*/,
                      (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality(v107, limitCount, dispLimitCount, v57, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
LABEL_134:
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              v58 = (*eventUpVallInfo)->fields.setupInfo;
              if ( !v58 )
                goto LABEL_273;
              if ( !entity )
                goto LABEL_273;
              this = (SkillLvEntity_o *)SkillLvEntity__GetEventIndividuality(
                                          v10,
                                          v24,
                                          v21,
                                          v58->fields.questId,
                                          (System_Int32_array *)entity[5].klass,
                                          (FunctionMaster_o *)Master_object,
                                          (FunctionGroupMaster_o *)v12,
                                          v53);
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              v59 = this;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)v59,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)*eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              if ( !EventUpValInfo__IsEquipSvtId((EventUpValInfo_o *)this, 0LL) )
                goto LABEL_152;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
              if ( !this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          v10->fields.skillId,
                                          (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              v60 = (SkillEntity_o *)this;
              this = (SkillLvEntity_o *)v107;
              if ( !v107 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v107,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              if ( !v60 )
                goto LABEL_273;
              v61 = this;
              ActIndividuality = SkillEntity__getActIndividuality(v60, (const MethodInfo *)eventUpVallInfo);
              this = (SkillLvEntity_o *)Individuality__CheckIndividualities(
                                          (System_Int32_array *)v61,
                                          ActIndividuality,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)ServantEntity__checkIsHeroineSvt(v107, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_152;
              if ( !entity )
                goto LABEL_273;
              if ( HIDWORD(entity[1].monitor) )
                goto LABEL_152;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v100 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
              v101 = *(_QWORD *)&v107->fields.id.fields.currentCryptoKey;
              *(_QWORD *)&v127.fields.fakeValue = *(_QWORD *)&v107->fields.id.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                valueb = *(_QWORD *)&v107->fields.id.fields.fakeValue;
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v127.fields.fakeValue = valueb;
              }
              *(_QWORD *)&v127.fields.currentCryptoKey = v101;
              this = (SkillLvEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v127, 0LL);
              if ( !v100 )
                goto LABEL_273;
              HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v100, (int32_t)this, 0LL);
              if ( HeroineData )
              {
                this = (SkillLvEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_259;
              }
LABEL_152:
              if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                     v29,
                     (Il2CppObject *)StringLiteral_13553/*"Target"*/,
                     (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v29,
                                            (Il2CppObject *)StringLiteral_13553/*"Target"*/,
                                            (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v63 = (int)this;
                if ( (_DWORD)this == 1 && !v104 )
                  goto LABEL_259;
              }
              else
              {
                v63 = 0;
              }
              v92 = entity;
              v93 = (EventDropUpValInfo_o *)sub_1B887FC(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_38889548(v93, v21, (FunctionEntity_o *)v92, v63, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v29,
                     (Il2CppObject *)StringLiteral_1212/*"0"*/,
                     (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v29,
                                            (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                            (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo || !v93 )
                  goto LABEL_273;
                EventDropUpValInfo__SetAddCount(
                  v93,
                  (int32_t)this,
                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                  v116 & 1,
                  0LL);
              }
              else
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v29,
                                            (Il2CppObject *)StringLiteral_1212/*"0"*/,
                                            (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( (_DWORD)this == 2 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v29,
                                              (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                              (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v93 )
                    goto LABEL_273;
                  EventDropUpValInfo__SetRateCount(
                    v93,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v116 & 1,
                    0LL);
                }
              }
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
              if ( !this )
                goto LABEL_273;
              v96 = *(_QWORD *)&this->fields.skillId;
              v97 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
              ++this->fields.priority;
              if ( !v96 )
                goto LABEL_273;
              v98 = this->fields.chargeTurn;
              if ( (unsigned int)v98 >= *(_DWORD *)(v96 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v93,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
              }
              else
              {
                v99 = v96 + 8 * v98;
                this->fields.chargeTurn = v98 + 1;
                *(_QWORD *)(v99 + 32) = v93;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v99 + 32), (int32_t)v93, v94, v95);
              }
              v111 = 1;
              goto LABEL_259;
            case 113:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                          (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                          (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v21 != (_DWORD)this )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1212/*"0"*/,
                                          (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v29,
                                            (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                            (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_259;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v29,
                                            v64);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_259;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              if ( !entity )
                goto LABEL_273;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)entity[5].klass,
                                          0LL);
              v111 |= (unsigned __int8)this;
              if ( !v107 || ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v107,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              actMaxRarity = 0;
              if ( !this )
                goto LABEL_273;
              v65 = this->fields.chargeTurn;
              if ( v65 < 1 )
                goto LABEL_240;
              v66 = 0;
              valuea = this;
              while ( v66 < (unsigned int)v65 )
              {
                v67 = *((_DWORD *)&this->fields.funcId + v66);
                v68 = entity;
                v69 = (EventDropUpValInfo_o *)sub_1B887FC(EventDropUpValInfo_TypeInfo);
                EventDropUpValInfo___ctor_38889548(v69, v21, (FunctionEntity_o *)v68, v67, 0LL);
                if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                       v29,
                       (Il2CppObject *)StringLiteral_1212/*"0"*/,
                       (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v29,
                                              (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                              (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v69 )
                    goto LABEL_273;
                  EventDropUpValInfo__SetAddCount(
                    v69,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v116 & 1,
                    0LL);
                }
                else
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v29,
                                              (Il2CppObject *)StringLiteral_1212/*"0"*/,
                                              (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( (_DWORD)this == 2 )
                  {
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v29,
                                                (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                                (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v69 )
                      goto LABEL_273;
                    EventDropUpValInfo__SetRateCount(
                      v69,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v116 & 1,
                      0LL);
                  }
                }
                if ( !*eventUpVallInfo )
                  goto LABEL_273;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
                if ( !this )
                  goto LABEL_273;
                v72 = *(_QWORD *)&this->fields.skillId;
                v73 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                ++this->fields.priority;
                if ( !v72 )
                  goto LABEL_273;
                v74 = this->fields.chargeTurn;
                if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v69,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
                }
                else
                {
                  v75 = v72 + 8 * v74;
                  this->fields.chargeTurn = v74 + 1;
                  *(_QWORD *)(v75 + 32) = v69;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v75 + 32), (int32_t)v69, v70, v71);
                }
                this = valuea;
                v111 = 1;
                v66 = actMaxRarity + 1;
                actMaxRarity = v66;
                v65 = valuea->fields.chargeTurn;
                if ( v66 >= v65 )
                  goto LABEL_259;
              }
              goto LABEL_274;
            case 116:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                          (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v29,
                                            v76);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_259;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              if ( !entity )
                goto LABEL_273;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)entity[5].klass,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              v77 = entity;
              v78 = System_Collections_Generic_Dictionary_object__int___get_Item(
                      v29,
                      (Il2CppObject *)StringLiteral_1212/*"0"*/,
                      (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v46 = (EventDropUpValInfo_o *)sub_1B887FC(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_38889548(v46, v21, (FunctionEntity_o *)v77, v78, 0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                          (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo || !v46 )
                goto LABEL_273;
              v79 = (int)this;
              v80 = v46;
              v81 = (*eventUpVallInfo)->fields.equipSvtId > 0;
              goto LABEL_218;
            case 129:
              if ( isSupport )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                          (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                          (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v21 != (_DWORD)this )
                goto LABEL_259;
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              if ( !entity )
                goto LABEL_273;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)entity[5].klass,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              v82 = entity;
              v113 = (EventDropUpValInfo_o *)sub_1B887FC(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v113, v21, (FunctionEntity_o *)v82, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v29,
                     (Il2CppObject *)StringLiteral_1212/*"0"*/,
                     (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v29,
                                            (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                            (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo )
                  goto LABEL_273;
                v46 = v113;
                if ( !v113 )
                  goto LABEL_273;
                v47 = (int)this;
                v48 = v113;
                v49 = (*eventUpVallInfo)->fields.equipSvtId > 0;
                goto LABEL_124;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1212/*"0"*/,
                                          (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v46 = v113;
              if ( (_DWORD)this != 2 )
                goto LABEL_234;
              v85 = (Il2CppObject *)StringLiteral_1266/*"1"*/;
              goto LABEL_224;
            default:
              if ( monitor != 132 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1475/*"3"*/,
                                          (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1475/*"3"*/,
                                          (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v21 != (_DWORD)this )
                goto LABEL_259;
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              if ( !entity )
                goto LABEL_273;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)entity[5].klass,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              v45 = entity;
              v112 = (EventDropUpValInfo_o *)sub_1B887FC(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v112, v21, (FunctionEntity_o *)v45, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v29,
                     (Il2CppObject *)StringLiteral_1266/*"1"*/,
                     (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 1 )
                goto LABEL_222;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1413/*"2"*/,
                                          (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v35 = *eventUpVallInfo;
              if ( *eventUpVallInfo )
                goto LABEL_122;
              goto LABEL_273;
          }
          goto LABEL_232;
        }
        if ( monitor == 1 )
          goto LABEL_81;
        if ( monitor != 7 )
        {
          if ( monitor != 16 )
            goto LABEL_259;
LABEL_81:
          this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                      v29,
                                      (Il2CppObject *)StringLiteral_1475/*"3"*/,
                                      (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !isSupport
              || (this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                              this,
                                              (System_Collections_Generic_Dictionary_string__int__o *)v29,
                                              v36),
                  ((unsigned __int8)this & 1) == 0) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
              v37 = v10->fields.funcId;
              if ( !v37 )
                goto LABEL_273;
              if ( v24 >= v37->max_length )
                goto LABEL_274;
              if ( !this )
                goto LABEL_273;
              EnableEntity = EventPointBuffMaster__GetEnableEntity(
                               (EventPointBuffMaster_o *)this,
                               v21,
                               v37->m_Items[v24 + 1],
                               0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1475/*"3"*/,
                                          (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              value = EnableEntity;
              if ( EnableEntity || (_DWORD)this )
              {
                if ( !*eventUpVallInfo )
                  goto LABEL_273;
                if ( !entity )
                  goto LABEL_273;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                if ( !this )
                  goto LABEL_273;
                this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                            (EventUpValSetupInfo_o *)this,
                                            questPhaseIndividualityList,
                                            (System_Int32_array *)entity[5].klass,
                                            0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( v106 )
                    goto LABEL_99;
                  if ( !*eventUpVallInfo || !entity )
                    goto LABEL_273;
                  this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_39652224(
                                              v107,
                                              (*eventUpVallInfo)->fields.limitCount,
                                              (*eventUpVallInfo)->fields.dispLimitCount,
                                              (System_Int32_array *)entity[2].monitor,
                                              0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_99:
                    this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !this )
                      goto LABEL_273;
                    v105 = v21;
                    this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BuffMaster___);
                    if ( !entity )
                      goto LABEL_273;
                    v39 = entity[2].klass;
                    if ( !v39 )
                      goto LABEL_273;
                    namespaze = v39->_1.namespaze;
                    if ( (int)namespaze < 1 )
                    {
                      v44 = 0;
                    }
                    else
                    {
                      v41 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
                      v42 = 0LL;
                      while ( 1 )
                      {
                        if ( v42 >= (unsigned int)namespaze )
                          goto LABEL_274;
                        if ( !v41 )
                          goto LABEL_273;
                        this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                    v41,
                                                    *((_DWORD *)&v39->_1.byval_arg.data + v42),
                                                    (const MethodInfo_311D934 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                        if ( !this )
                          goto LABEL_273;
                        lv = this->fields.lv;
                        if ( !BuffList_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
                        this = (SkillLvEntity_o *)BuffList__isSpHit(lv, 0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          break;
                        LODWORD(namespaze) = v39->_1.namespaze;
                        if ( (__int64)++v42 >= (int)namespaze )
                        {
                          v44 = 0;
                          goto LABEL_227;
                        }
                      }
                      v44 = 1;
LABEL_227:
                      EnableEntity = value;
                    }
                    v21 = v105;
                    if ( ((unsigned __int8)v44 & (EnableEntity != 0LL)) != 0 )
                    {
                      this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                  v29,
                                                  (Il2CppObject *)StringLiteral_1475/*"3"*/,
                                                  (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( !EnableEntity )
                        goto LABEL_273;
                      System_Collections_Generic_Dictionary_object__int___set_Item(
                        v29,
                        (Il2CppObject *)StringLiteral_1475/*"3"*/,
                        EnableEntity->fields.value + (_DWORD)this,
                        (const MethodInfo_31BE2CC *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
                    }
                    v87 = entity;
                    v46 = (EventDropUpValInfo_o *)sub_1B887FC(EventDropUpValInfo_TypeInfo);
                    EventDropUpValInfo___ctor(v46, v105, (FunctionEntity_o *)v87, 0LL);
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v29,
                                                (Il2CppObject *)StringLiteral_1475/*"3"*/,
                                                (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    v86 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo )
                      goto LABEL_273;
LABEL_232:
                    if ( !v46 )
                      goto LABEL_273;
                    EventDropUpValInfo__SetRateCount(v46, (int32_t)this, v86->fields.equipSvtId > 0, v116 & 1, 0LL);
LABEL_234:
                    v84 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo )
                      goto LABEL_273;
LABEL_235:
                    this = (SkillLvEntity_o *)v84->fields.dropList;
                    if ( !this )
                      goto LABEL_273;
                    v88 = *(_QWORD *)&this->fields.skillId;
                    v89 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                    ++this->fields.priority;
                    if ( !v88 )
                      goto LABEL_273;
                    v90 = this->fields.chargeTurn;
                    if ( (unsigned int)v90 >= *(_DWORD *)(v88 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)this,
                        (Il2CppObject *)v46,
                        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v91 = v88 + 8 * v90;
                      this->fields.chargeTurn = v90 + 1;
                      *(_QWORD *)(v91 + 32) = v46;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v91 + 32), (int32_t)v46, v50, v51);
                    }
LABEL_240:
                    v111 = 1;
                    goto LABEL_259;
                  }
                }
              }
            }
          }
          goto LABEL_259;
        }
        this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                    v29,
                                    (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                    (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                      v29,
                                      (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                      (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
          if ( (_DWORD)this )
          {
            if ( !*eventUpVallInfo )
              goto LABEL_273;
            if ( !entity )
              goto LABEL_273;
            this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
            if ( !this )
              goto LABEL_273;
            this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                        (EventUpValSetupInfo_o *)this,
                                        questPhaseIndividualityList,
                                        (System_Int32_array *)entity[5].klass,
                                        0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v83 = entity;
              v46 = (EventDropUpValInfo_o *)sub_1B887FC(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v46, v21, (FunctionEntity_o *)v83, 0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                          (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo || !v46 )
                goto LABEL_273;
              v79 = (int)this;
              v80 = v46;
              v81 = (*eventUpVallInfo)->fields.equipSvtId > 0;
LABEL_218:
              EventDropUpValInfo__SetRateCount(v80, v79, v81, v116 & 1, 0LL);
              v84 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              goto LABEL_235;
            }
          }
        }
LABEL_259:
        funcId = v10->fields.funcId;
        ++v24;
        if ( !funcId )
          goto LABEL_273;
      }
      v17 = v115;
      LODWORD(v16) = v115->max_length;
      v19 = v119 + 1;
      if ( (__int64)(v119 + 1) >= (int)v16 )
        return v111 & 1;
    }
  }
LABEL_271:
  v111 = 0;
  return v111 & 1;
}


int32_t __fastcall SkillLvEntity__getFriendPointUpType(SkillLvEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct System_Int32_array *funcId; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  unsigned __int64 v7; // x21
  unsigned __int64 max_length; // x9
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5BBA6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BBA6 = 1;
  }
  entity = 0LL;
  if ( this->fields.funcId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FunctionMaster___),
          (funcId = this->fields.funcId) == 0LL) )
    {
LABEL_15:
      sub_1B8880C(Instance, v4);
    }
    v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v7 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v7 >= (int)max_length )
        break;
      if ( v7 >= max_length )
        sub_1B88814(Instance, v4);
      if ( !v6 )
        goto LABEL_15;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v6,
                                   &entity,
                                   funcId->m_Items[v7 + 1],
                                   (const MethodInfo_311D988 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_15;
        Instance = (Il2CppObject *)LODWORD(entity[1].monitor);
        if ( (_DWORD)Instance == 104 || (_DWORD)Instance == 123 )
          return (int)Instance;
      }
      funcId = this->fields.funcId;
      ++v7;
      if ( !funcId )
        goto LABEL_15;
    }
  }
  LODWORD(Instance) = 0;
  return (int)Instance;
}


int32_t __fastcall SkillLvEntity__getFriendPointUpVal(SkillLvEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__int__array *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v6; // x1
  struct System_Int32_array *funcId; // x8
  System_Collections_Generic_Dictionary_string__int__array *v8; // x20
  unsigned __int64 v9; // x22
  unsigned __int64 max_length; // x9
  int monitor; // w8
  int v12; // w8
  System_Collections_Generic_Dictionary_object__int__o *v13; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5BBA5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A5BBA5 = 1;
  }
  entity = 0LL;
  if ( !this->fields.funcId )
    return 0;
  Instance = (System_Collections_Generic_Dictionary_string__int__array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FunctionMaster___);
  Instance = SkillLvEntity__getValues(this, v6);
  funcId = this->fields.funcId;
  if ( !funcId )
    goto LABEL_15;
  v8 = Instance;
  v9 = 0LL;
  while ( 1 )
  {
    max_length = funcId->max_length;
    if ( (__int64)v9 >= (int)max_length )
      return 0;
    if ( v9 >= max_length )
      goto LABEL_24;
    if ( !MasterData_object )
      goto LABEL_15;
    Instance = (System_Collections_Generic_Dictionary_string__int__array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                                             &entity,
                                                                             funcId->m_Items[v9 + 1],
                                                                             (const MethodInfo_311D988 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_15;
      monitor = (int)entity[1].monitor;
      if ( monitor == 123 || monitor == 104 )
        break;
    }
    funcId = this->fields.funcId;
    ++v9;
    if ( !funcId )
      goto LABEL_15;
  }
  if ( !v8 )
LABEL_15:
    sub_1B8880C(Instance, v4);
  v12 = v8->max_length;
  if ( (int)v9 >= v12 )
    return 0;
  if ( (unsigned int)v9 >= v12 )
LABEL_24:
    sub_1B88814(Instance, v4);
  v13 = (System_Collections_Generic_Dictionary_object__int__o *)v8->m_Items[v9];
  if ( v13
    && System_Collections_Generic_Dictionary_object__int___ContainsKey(
         v13,
         (Il2CppObject *)StringLiteral_1212/*"0"*/,
         (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_object__int___get_Item(
             v13,
             (Il2CppObject *)StringLiteral_1212/*"0"*/,
             (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  }
  else
  {
    return 0;
  }
}


System_String_o *__fastcall SkillLvEntity__getFuncDetail(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *funcId; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct System_Int32_array *v6; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  unsigned __int64 v8; // x21
  unsigned __int64 max_length; // x9
  LocalizationManager_c *v10; // x0
  System_String_o **p_monitor; // x8

  if ( (byte_4A5BBA4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BBA4 = 1;
  }
  funcId = this->fields.funcId;
  if ( funcId && *(_QWORD *)&funcId->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FunctionMaster___),
          (v6 = this->fields.funcId) == 0LL) )
    {
LABEL_13:
      sub_1B8880C(Instance, v5);
    }
    v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v8 = 0LL;
    while ( 1 )
    {
      max_length = v6->max_length;
      if ( (__int64)v8 >= (int)max_length )
        break;
      if ( v8 >= max_length )
        sub_1B88814(Instance, v5);
      if ( !v7 )
        goto LABEL_13;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v7,
                   v6->m_Items[v8 + 1],
                   (const MethodInfo_311D934 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        p_monitor = (System_String_o **)&Instance[3].monitor;
        return *p_monitor;
      }
      v6 = this->fields.funcId;
      ++v8;
      if ( !v6 )
        goto LABEL_13;
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A56A2D )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A56A2D = 1;
  }
  v10 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager_TypeInfo;
  }
  p_monitor = &v10->static_fields->unknownNameText;
  return *p_monitor;
}


int32_t __fastcall SkillLvEntity__getMovePositionDown(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  SkillLvEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4A5BBB1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&StringLiteral_18666/*"down"*/);
    byte_4A5BBB1 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_18666/*"down"*/,
           (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_18666/*"down"*/,
                                                                                (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B8880C(Item, v4);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v6, v7);
      }
      else
      {
        sub_1B88ACC(Item);
        LODWORD(script) = SkillLvEntity__IsRevivalUp(v8, v9);
      }
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


int32_t __fastcall SkillLvEntity__getMovePositionUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  SkillLvEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4A5BBB0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&StringLiteral_24303/*"up"*/);
    byte_4A5BBB0 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_24303/*"up"*/,
           (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_24303/*"up"*/,
                                                                                (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B8880C(Item, v4);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v6, v7);
      }
      else
      {
        sub_1B88ACC(Item);
        LODWORD(script) = SkillLvEntity__getMovePositionDown(v8, v9);
      }
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


System_String_o *__fastcall SkillLvEntity__getPlayVoiceNo(SkillLvEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4A5BBAB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_10671/*"PlayVoiceNo"*/);
    byte_4A5BBAB = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_10671/*"PlayVoiceNo"*/,
            (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1B8880C(0LL, v4);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_10671/*"PlayVoiceNo"*/,
                                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1B88ACC(result);
      return 0LL;
    }
  }
  return result;
}


System_Collections_Generic_Dictionary_string__int__array *__fastcall SkillLvEntity__getValues(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  struct System_String_array *svals; // x9
  int max_length; // w21
  __int64 klass; // x0
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_string__int__array *v7; // x20
  il2cpp_array_size_t v8; // w25
  struct System_String_array *v9; // x8
  int v10; // w29
  __int64 v11; // x22
  System_Collections_Generic_Dictionary_object__int__o *v12; // x24
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppClass **v15; // x23
  ServantStatusBattleListViewItem_o *v16; // x23
  int32_t v17; // w8
  System_String_o *v18; // x24
  ServantStatusBattleListViewItem_c *v19; // x24
  int32_t v20; // w2
  const MethodInfo_31BE2CC *v21; // x3
  Il2CppObject *v22; // x1
  __int64 v23; // x24
  __int64 v25; // x0
  int32_t result[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5BB9F & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__int____TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5BB9F = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = this->fields.svals;
  if ( !svals )
    return (System_Collections_Generic_Dictionary_string__int__array *)sub_1B88658(
                                                                         System_Collections_Generic_Dictionary_string__int____TypeInfo,
                                                                         1LL);
  max_length = svals->max_length;
  klass = sub_1B88658(System_Collections_Generic_Dictionary_string__int____TypeInfo, (unsigned int)max_length);
  v7 = (System_Collections_Generic_Dictionary_string__int__array *)klass;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = this->fields.svals;
      if ( !v9 )
        goto LABEL_37;
      if ( v8 >= v9->max_length )
        goto LABEL_38;
      klass = (__int64)v9->m_Items[v8];
      if ( !klass
        || (klass = (__int64)System_String__Replace_61726660(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_15812/*"["*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0LL)) == 0
        || (klass = (__int64)System_String__Replace_61726660(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_16069/*"]"*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0LL)) == 0
        || (klass = (__int64)System_String__Split((System_String_o *)klass, 0x2Cu, 0, 0LL)) == 0
        || (v10 = *(_DWORD *)(klass + 24),
            v11 = klass,
            v12 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__int__TypeInfo),
            System_Collections_Generic_Dictionary_object__int____ctor(
              v12,
              (const MethodInfo_31BD92C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__),
            !v7) )
      {
LABEL_37:
        sub_1B8880C(klass, v6);
      }
      if ( v12 )
      {
        klass = sub_1B886EC(v12, v7->obj.klass->_1.element_class);
        if ( !klass )
        {
          v25 = sub_1B88830(0LL);
          sub_1B886D8(v25, 0LL);
        }
      }
      if ( v8 >= v7->max_length )
LABEL_38:
        sub_1B88814(klass, v6);
      v15 = &v7->obj.klass + (int)v8;
      v15[4] = (Il2CppClass *)v12;
      v16 = (ServantStatusBattleListViewItem_o *)(v15 + 4);
      sub_1B88554(v16, (int32_t)v12, v13, v14);
      result[1] = 0;
      if ( v10 >= 1 )
        break;
LABEL_33:
      if ( ++v8 == max_length )
        return v7;
    }
    v17 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v17 >= *(_DWORD *)(v11 + 24) )
        goto LABEL_38;
      v18 = *(System_String_o **)(v11 + 8LL * v17 + 32);
      klass = System_Int32__TryParse(v18, result, 0LL);
      if ( (klass & 1) != 0 )
        break;
      if ( !v18 )
        goto LABEL_37;
      klass = (__int64)System_String__Split(v18, 0x3Au, 0, 0LL);
      if ( !klass )
        goto LABEL_37;
      v23 = klass;
      if ( *(int *)(klass + 24) >= 2 )
      {
        klass = System_Int32__TryParse(*(System_String_o **)(klass + 40), result, 0LL);
        if ( (klass & 1) != 0 )
        {
          if ( v8 >= v7->max_length || !*(_DWORD *)(v23 + 24) )
            goto LABEL_38;
          klass = (__int64)v16->klass;
          if ( !v16->klass )
            goto LABEL_37;
          v20 = result[0];
          v22 = *(Il2CppObject **)(v23 + 32);
          v21 = (const MethodInfo_31BE2CC *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
LABEL_23:
          System_Collections_Generic_Dictionary_object__int___set_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)klass,
            v22,
            v20,
            v21);
        }
      }
      v17 = ++result[1];
      if ( result[1] >= v10 )
        goto LABEL_33;
    }
    if ( v8 >= v7->max_length )
      goto LABEL_38;
    v19 = v16->klass;
    klass = (__int64)System_Int32__ToString((int32_t)&result[1], 0LL);
    if ( !v19 )
      goto LABEL_37;
    v20 = result[0];
    v21 = (const MethodInfo_31BE2CC *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
    v22 = (Il2CppObject *)klass;
    klass = (__int64)v19;
    goto LABEL_23;
  }
  return v7;
}


System_String_o *__fastcall SkillLvEntity__getVoiceAssetName(SkillLvEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4A5BBAA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_15374/*"VoiceAssetName"*/);
    byte_4A5BBAA = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_15374/*"VoiceAssetName"*/,
            (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1B8880C(0LL, v4);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_15374/*"VoiceAssetName"*/,
                                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1B88ACC(result);
      return 0LL;
    }
  }
  return result;
}


float __fastcall SkillLvEntity__getVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  float v4; // s8
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  float result; // s0
  SkillLvEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4A5BBAE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&StringLiteral_15376/*"VoiceVolume"*/);
    byte_4A5BBAE = 1;
  }
  script = this->fields.script;
  v4 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_15376/*"VoiceVolume"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_15376/*"VoiceVolume"*/,
                                                                            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B8880C(Item, v5);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v7, v8) / 1000.0;
  sub_1B88ACC(Item);
  SkillLvEntity__getMovePositionUp(v10, v11);
  return result;
}


bool __fastcall SkillLvEntity__isPlayVoiceWait(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4A5BBAC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&StringLiteral_10672/*"PlayVoiceWait"*/);
    byte_4A5BBAC = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_10672/*"PlayVoiceWait"*/,
                       (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


void __fastcall SkillLvEntity_SvtChangeBgm___ctor(
        SkillLvEntity_SvtChangeBgm_o *this,
        System_Collections_Generic_Dictionary_string__object__o *obj,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x2
  __int64 v16; // x3
  SkillLvEntity_o *v17; // x0
  System_String_o *v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4A5BBCA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&StringLiteral_16710/*"afterClearBgmId"*/);
    sub_1B885B0(&StringLiteral_20644/*"indv"*/);
    sub_1B885B0(&StringLiteral_17157/*"beforeClearBgmId"*/);
    sub_1B885B0(&StringLiteral_22692/*"questPhase"*/);
    sub_1B885B0(&StringLiteral_22690/*"questId"*/);
    byte_4A5BBCA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !obj )
    goto LABEL_15;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_20644/*"indv"*/,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.svtIndv = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v7, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_22690/*"questId"*/,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_22692/*"questPhase"*/,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questPhase = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v11, v12);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_17157/*"beforeClearBgmId"*/,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.beforeClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v13, v14);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_16710/*"afterClearBgmId"*/,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_15:
    sub_1B8880C(Item, v6);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    this->fields.afterClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v15, v16);
    return;
  }
LABEL_16:
  sub_1B88ACC(Item);
  SkillLvEntity__GetScriptIntParam(v17, v18, v19, v20);
}


void __fastcall SkillLvEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BBCB & 1) == 0 )
  {
    sub_1B885B0(&SkillLvEntity___c_TypeInfo);
    byte_4A5BBCB = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(SkillLvEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SkillLvEntity___c_TypeInfo->static_fields->__9 = (struct SkillLvEntity___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)SkillLvEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall SkillLvEntity___c___ctor(SkillLvEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SkillLvEntity___c___GetEventIndividuality_b__61_0(
        SkillLvEntity___c_o *this,
        QuestGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B8880C(this, 0LL);
  return entity->fields.questId;
}


System_Nullable_int__o __fastcall SkillLvEntity___c___GetFuncIndexForSplitFuncSequence_b__44_0(
        SkillLvEntity___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int v3; // w19
  System_Nullable_int__o v5; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v6; // 0:x0.8

  v3 = x;
  if ( (byte_4A5BBCC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_int___ctor__);
    byte_4A5BBCC = 1;
  }
  v6 = (System_Nullable_int__o)&v5;
  v5 = 0LL;
  System_Nullable_int____ctor(v6, v3 - 1, (const MethodInfo_361A2C0 *)Method_System_Nullable_int___ctor__);
  return v5;
}