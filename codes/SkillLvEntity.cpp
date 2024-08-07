void __fastcall SkillLvEntity___ctor(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF465 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF465 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall SkillLvEntity___ctor_39536184(
        SkillLvEntity_o *this,
        SkillLvEntity_o *srcEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_Array_o *funcId; // x0
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  struct System_Int32_array *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_Array_o *svals; // x0
  Il2CppObject *v20; // x0
  struct System_String_array *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_IDictionary_TKey__TValue__o *script; // x20
  System_Collections_Generic_Dictionary_object__object__o *v25; // x21

  if ( (byte_49FF466 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, srcEntity);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object___ctor___75625128, v5);
    sub_1B64A00(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1B64A00(&int___TypeInfo, v7);
    sub_1B64A00(&string___TypeInfo, v8);
    byte_49FF466 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
  if ( !srcEntity )
    sub_1B64C5C(v9, v10);
  *(_OWORD *)&this->fields.skillId = *(_OWORD *)&srcEntity->fields.skillId;
  funcId = (System_Array_o *)srcEntity->fields.funcId;
  if ( funcId && (v14 = System_Array__Clone(funcId, 0LL)) != 0LL )
  {
    v15 = v14;
    v16 = (struct System_Int32_array *)sub_1B64B3C(v14, int___TypeInfo);
    if ( !v16 )
      goto LABEL_12;
  }
  else
  {
    v16 = 0LL;
  }
  this->fields.funcId = v16;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.funcId, (int32_t)v16, v11, v12);
  svals = (System_Array_o *)srcEntity->fields.svals;
  if ( !svals )
    goto LABEL_13;
  v20 = System_Array__Clone(svals, 0LL);
  if ( !v20 )
    goto LABEL_13;
  v15 = v20;
  v21 = (struct System_String_array *)sub_1B64B3C(v20, string___TypeInfo);
  if ( v21 )
    goto LABEL_14;
LABEL_12:
  sub_1B64F1C(v15);
LABEL_13:
  v21 = 0LL;
LABEL_14:
  this->fields.svals = v21;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.svals, (int32_t)v21, v17, v18);
  this->fields.skillDetailId = srcEntity->fields.skillDetailId;
  script = (System_Collections_Generic_IDictionary_TKey__TValue__o *)srcEntity->fields.script;
  if ( script )
  {
    v25 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor_51885084(
      v25,
      script,
      (const MethodInfo_317B41C *)Method_System_Collections_Generic_Dictionary_string__object___ctor___75625128);
  }
  else
  {
    v25 = 0LL;
  }
  this->fields.script = (struct System_Collections_Generic_Dictionary_string__object__o *)v25;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.script, (int32_t)v25, v22, v23);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__CreatePK(int32_t skillId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_49FF464 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_49FF464 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           skillId,
           lv,
           (const MethodInfo_2E39F04 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SkillLvEntity__CreatePrimaryKey(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillLvEntity__CreatePK(this->fields.skillId, this->fields.lv, v2);
}


int32_t __fastcall SkillLvEntity__GetActNpcServantId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FF48B & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_2209/*"ActNpcServantId"*/, method);
    byte_49FF48B = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_2209/*"ActNpcServantId"*/, -1, v2);
}


System_Int32_array *__fastcall SkillLvEntity__GetActRarity(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FF482 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_16578/*"actRarity"*/, method);
    byte_49FF482 = 1;
  }
  return SkillLvEntity__GetIntArrayFromScript(this, (System_String_o *)StringLiteral_16578/*"actRarity"*/, v2);
}


System_Int32_array *__fastcall SkillLvEntity__GetAddIndiv(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 klass_low; // x1
  System_Collections_Generic_Dictionary_object__object__o *v15; // x0
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v18; // x19
  System_Collections_Generic_List_int__o *v20; // x20
  int32_t v21; // w21
  __int64 v22; // x2
  __int64 v23; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  SkillLvEntity_o *v27; // x0
  const MethodInfo *v28; // x1

  if ( (byte_49FF47E & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B64A00(&long_TypeInfo, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_object__get_Count__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_object__get_Item__, v9);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B64A00(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_1B64A00(&StringLiteral_2245/*"AddIndiv"*/, v12);
    byte_49FF47E = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_2245/*"AddIndiv"*/,
          (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v15 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !v15 )
    goto LABEL_26;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v15,
           (Il2CppObject *)StringLiteral_2245/*"AddIndiv"*/,
           (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    v18 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo
        ? (System_Collections_Generic_List_object__o *)Item
        : 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  v20 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v18 )
    goto LABEL_26;
  if ( v18->fields._size < 1 )
  {
LABEL_24:
    if ( v20 )
      return System_Collections_Generic_List_int___ToArray(
               v20,
               (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_26:
    sub_1B64C5C(v15, klass_low);
  }
  v21 = 0;
  while ( 1 )
  {
    v15 = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       v18,
                                                                       v21,
                                                                       (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !v20 || !v15 )
      goto LABEL_26;
    if ( v15->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v15 = (System_Collections_Generic_Dictionary_object__object__o *)j_il2cpp_object_unbox_0(
                                                                       v15,
                                                                       long_TypeInfo,
                                                                       v22,
                                                                       v23);
    klass_low = LODWORD(v15->klass);
    items = v20->fields._items;
    v25 = Method_System_Collections_Generic_List_int__Add__;
    ++v20->fields._version;
    if ( !items )
      goto LABEL_26;
    size = v20->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v20,
        klass_low,
        *(const MethodInfo_34927D0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v20->fields._size = size + 1;
      items->m_Items[size + 1] = klass_low;
    }
    if ( ++v21 >= v18->fields._size )
      goto LABEL_24;
  }
  sub_1B64F1C(v15);
  return (System_Int32_array *)SkillLvEntity__GetFuncIndexForSplitFuncSequence(v27, v28);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillActorType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FF489 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_16612/*"additionalSkillActorType"*/, method);
    byte_49FF489 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16612/*"additionalSkillActorType"*/, -1, v2);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FF487 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_16613/*"additionalSkillId"*/, method);
    byte_49FF487 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16613/*"additionalSkillId"*/, -1, v2);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillLv(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FF488 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_16615/*"additionalSkillLv"*/, method);
    byte_49FF488 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16615/*"additionalSkillLv"*/, 1, v2);
}


int32_t __fastcall SkillLvEntity__GetBattleStartRemainingTurn(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FF48A & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17053/*"battleStartRemainingTurn"*/, method);
    byte_49FF48A = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_17053/*"battleStartRemainingTurn"*/, 0, v2);
}


bool __fastcall SkillLvEntity__GetBonusUpVal(
        SkillLvEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        QuestPhaseEntity_o *questPhaseEntity,
        const MethodInfo *method)
{
  EventUpValInfo_o **v5; // x28
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
  struct System_Int32_array *funcId; // x8
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *Values; // x0
  const MethodInfo *v23; // x1
  struct System_Int32_array *v24; // x8
  const MethodInfo_3172F24 **v25; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x24
  unsigned __int64 v27; // x29
  unsigned __int64 max_length; // x9
  unsigned __int64 MasterName_k__BackingField_low; // x8
  System_Collections_Generic_Dictionary_object__int__o *v30; // x25
  EventUpValInfo_o *v31; // x8
  const MethodInfo_3172F24 **v32; // x10
  const MethodInfo_3172F24 *v33; // x2
  EventUpValInfo_o **v34; // x27
  const MethodInfo_3172F24 **v35; // x28
  int32_t Item; // w0
  EventUpValInfo_o **v37; // x8
  int32_t v38; // w26
  Il2CppObject *v39; // x28
  EventDropUpValInfo_o *v40; // x20
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppArrayBounds *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppArrayBounds *v46; // x8
  int32_t dispLimitCount; // [xsp+0h] [xbp-90h]
  int32_t limitCount; // [xsp+4h] [xbp-8Ch]
  EventUpValInfo_o **v50; // [xsp+8h] [xbp-88h]
  ServantEntity_o *v51; // [xsp+10h] [xbp-80h]
  char v52; // [xsp+1Ch] [xbp-74h]
  System_Collections_Generic_Dictionary_string__int__o **p_list; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  v5 = eventUpVallInfo;
  if ( (byte_49FF46F & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_FunctionGroupMaster___, eventUpVallInfo);
    sub_1B64A00(&Method_DataManager_GetMaster_FunctionMaster___, v7);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1B64A00(&DataManager_TypeInfo, v9);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B64A00(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v13);
    sub_1B64A00(&EventDropUpValInfo_TypeInfo, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v15);
    sub_1B64A00(&StringLiteral_1414/*"2"*/, v16);
    sub_1B64A00(&StringLiteral_13488/*"Target"*/, v17);
    sub_1B64A00(&StringLiteral_1267/*"1"*/, v18);
    sub_1B64A00(&StringLiteral_1213/*"0"*/, v19);
    byte_49FF46F = 1;
  }
  entity = 0LL;
  funcId = this->fields.funcId;
  if ( funcId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_FunctionMaster___);
    Values = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    if ( *v5 )
    {
      if ( (*v5)->fields.svtId < 1 )
      {
        v51 = 0LL;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Values = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !*v5 || !Values )
          goto LABEL_53;
        v51 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   Values,
                                   (*v5)->fields.svtId,
                                   (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
      Values = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvEntity__getValues(this, v23);
      v24 = this->fields.funcId;
      if ( v24 )
      {
        v52 = 0;
        v25 = (const MethodInfo_3172F24 **)&Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
        v26 = Values;
        v27 = 0LL;
        p_list = (System_Collections_Generic_Dictionary_string__int__o **)&Values->fields.list;
        do
        {
          max_length = v24->max_length;
          if ( (__int64)v27 >= (int)max_length )
          {
            LOBYTE(funcId) = v52;
            return (char)funcId;
          }
          if ( v27 >= max_length )
            goto LABEL_57;
          if ( !Master_object )
            break;
          Values = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                   &entity,
                                                                   v24->m_Items[v27 + 1],
                                                                   (const MethodInfo_30D67EC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
              if ( !v26 )
                break;
              MasterName_k__BackingField_low = LODWORD(v26->fields._MasterName_k__BackingField);
              if ( (__int64)v27 >= (int)MasterName_k__BackingField_low )
              {
                LOBYTE(funcId) = 0;
                return (char)funcId;
              }
              if ( v27 >= MasterName_k__BackingField_low )
LABEL_57:
                sub_1B64C64(Values, v23);
              v30 = (System_Collections_Generic_Dictionary_object__int__o *)p_list[v27];
              if ( v30 )
              {
                if ( !entity )
                  break;
                if ( LODWORD(entity[1].monitor) == 111 )
                {
                  Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                           (System_Collections_Generic_Dictionary_object__int__o *)p_list[v27],
                                                                           (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                                                           (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                  if ( ((unsigned __int8)Values & 1) != 0 )
                  {
                    Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                             v30,
                                                                             (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                                                             *v25);
                    if ( (int)Values < 1 )
                      goto LABEL_34;
                    if ( v51 )
                    {
                      v31 = *v5;
                      if ( !*v5 )
                        break;
                      v32 = v25;
                      v33 = *v25;
                      v34 = v5;
                      dispLimitCount = v31->fields.dispLimitCount;
                      limitCount = v31->fields.limitCount;
                      v35 = v32;
                      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                               v30,
                               (Il2CppObject *)StringLiteral_1414/*"2"*/,
                               v33);
                      Values = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality(
                                                                               v51,
                                                                               limitCount,
                                                                               dispLimitCount,
                                                                               Item,
                                                                               0LL);
                      v37 = v34;
                      v25 = v35;
                      v5 = v37;
                      if ( ((unsigned __int8)Values & 1) != 0 )
                      {
LABEL_34:
                        v50 = v5;
                        if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                               v30,
                               (Il2CppObject *)StringLiteral_13488/*"Target"*/,
                               (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                        {
                          v38 = System_Collections_Generic_Dictionary_object__int___get_Item(
                                  v30,
                                  (Il2CppObject *)StringLiteral_13488/*"Target"*/,
                                  *v25);
                        }
                        else
                        {
                          v38 = 0;
                        }
                        v39 = entity;
                        v40 = (EventDropUpValInfo_o *)sub_1B64C4C(EventDropUpValInfo_TypeInfo);
                        EventDropUpValInfo___ctor_38577032(v40, 0, (FunctionEntity_o *)v39, v38, 0LL);
                        if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                               v30,
                               (Il2CppObject *)StringLiteral_1213/*"0"*/,
                               *v25) == 1 )
                        {
                          Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v30,
                                                                                   (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                                                                   *v25);
                          v5 = v50;
                          if ( !*v50 || !v40 )
                            break;
                          EventDropUpValInfo__SetAddCount(v40, (int32_t)Values, (*v50)->fields.equipSvtId > 0, 0, 0LL);
                        }
                        else
                        {
                          Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v30,
                                                                                   (Il2CppObject *)StringLiteral_1213/*"0"*/,
                                                                                   *v25);
                          v5 = v50;
                          if ( (_DWORD)Values == 2 )
                          {
                            Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                     v30,
                                                                                     (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                                                                     *v25);
                            if ( !*v50 || !v40 )
                              break;
                            EventDropUpValInfo__SetRateCount(
                              v40,
                              (int32_t)Values,
                              (*v50)->fields.equipSvtId > 0,
                              0,
                              0LL);
                          }
                        }
                        if ( !*v5 )
                          break;
                        Values = (DataMasterBase_TMaster__TEntity__PKType__o *)(*v5)->fields.dropList;
                        if ( !Values )
                          break;
                        v43 = *(Il2CppArrayBounds **)&Values->fields._MasterKind_k__BackingField;
                        v44 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                        ++HIDWORD(Values->fields._MasterName_k__BackingField);
                        if ( !v43 )
                          break;
                        v45 = SLODWORD(Values->fields._MasterName_k__BackingField);
                        if ( (unsigned int)v45 >= v43[3].length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            (System_Collections_Generic_List_object__o *)Values,
                            (Il2CppObject *)v40,
                            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v46 = &v43[v45];
                          LODWORD(Values->fields._MasterName_k__BackingField) = v45 + 1;
                          v46[4] = (Il2CppArrayBounds)v40;
                          sub_1B649A4((ServantStatusBattleListViewItem_o *)&v46[4], (int32_t)v40, v41, v42);
                        }
                        v52 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
          v24 = this->fields.funcId;
          ++v27;
        }
        while ( v24 );
      }
    }
LABEL_53:
    sub_1B64C5C(Values, v23);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  struct System_Int32_array *funcId; // x27
  __int64 v25; // x8
  unsigned __int64 v26; // x28
  struct System_Int32_array *v27; // x8
  int32_t v28; // w26
  SkillLvEntity_o *v30; // x21
  SkillLvEntity___c_c *v31; // x0
  System_Func_object__int__o *_9__61_0; // x22
  Il2CppObject *v33; // x23
  struct SkillLvEntity___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  int32_t v38; // [xsp+Ch] [xbp-74h]
  FunctionGroupEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *v40; // [xsp+18h] [xbp-68h] BYREF

  v14 = this;
  if ( (byte_49FF48E & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_QuestGroupMaster___, *(_QWORD *)&index);
    sub_1B64A00(&DataManager_TypeInfo, v15);
    sub_1B64A00(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v16);
    sub_1B64A00(&Method_System_Linq_Enumerable_Contains_int___, v17);
    sub_1B64A00(&Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___, v18);
    sub_1B64A00(&System_Func_QuestGroupEntity__int__TypeInfo, v19);
    sub_1B64A00(&int___TypeInfo, v20);
    sub_1B64A00(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v21);
    sub_1B64A00(&Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__, v22);
    this = (SkillLvEntity_o *)sub_1B64A00(&SkillLvEntity___c_TypeInfo, v23);
    byte_49FF48E = 1;
  }
  entity = 0LL;
  v40 = 0LL;
  if ( !questTvals )
    goto LABEL_40;
  if ( *(_QWORD *)&questTvals->max_length )
    return questTvals;
  funcId = v14->fields.funcId;
  if ( !funcId )
    goto LABEL_40;
  v25 = *(_QWORD *)&funcId->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    v38 = questId;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)v25 )
        goto LABEL_41;
      v27 = v14->fields.funcId;
      if ( !v27 )
        goto LABEL_40;
      if ( v27->max_length <= index )
        goto LABEL_41;
      v28 = funcId->m_Items[v26 + 1];
      if ( v28 != v27->m_Items[index + 1] )
      {
        if ( !funcGroupMaster )
          goto LABEL_40;
        this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(funcGroupMaster, &entity, v28, eventId, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !funcMaster )
            goto LABEL_40;
          this = (SkillLvEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)funcMaster,
                                      &v40,
                                      v28,
                                      (const MethodInfo_30D67EC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
      }
      LODWORD(v25) = funcId->max_length;
      if ( (__int64)++v26 >= (int)v25 )
        goto LABEL_20;
    }
    if ( !v40 )
      goto LABEL_40;
    questTvals = (System_Int32_array *)v40[5].klass;
LABEL_20:
    questId = v38;
  }
  if ( !questTvals )
    goto LABEL_40;
  if ( *(_QWORD *)&questTvals->max_length )
    return questTvals;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this )
    goto LABEL_40;
  this = (SkillLvEntity_o *)QuestGroupMaster__GetEntityListByGroupId((QuestGroupMaster_o *)this, eventId, 1, 0LL);
  if ( !this )
    goto LABEL_40;
  if ( questId < 1 )
    return questTvals;
  v30 = this;
  if ( this->fields.chargeTurn < 1 )
    return questTvals;
  v31 = SkillLvEntity___c_TypeInfo;
  if ( !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v31 = SkillLvEntity___c_TypeInfo;
  }
  _9__61_0 = (System_Func_object__int__o *)v31->static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = SkillLvEntity___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v31->static_fields->__9;
    _9__61_0 = (System_Func_object__int__o *)sub_1B64C4C(System_Func_QuestGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__61_0, v33, Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__, 0LL);
    static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = (struct System_Func_QuestGroupEntity__int__o *)_9__61_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v35, v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                                                               (System_Func_TSource__TResult__o *)_9__61_0,
                                                               (const MethodInfo_2E6B3C4 *)Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
  if ( System_Linq_Enumerable__Contains_int_(
         v37,
         questId,
         (const MethodInfo_2E5559C *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return questTvals;
  }
  this = (SkillLvEntity_o *)sub_1B64AA8(int___TypeInfo, 1LL);
  if ( !this )
LABEL_40:
    sub_1B64C5C(this, *(_QWORD *)&index);
  questTvals = (System_Int32_array *)this;
  if ( !this->fields.chargeTurn )
LABEL_41:
    sub_1B64C64(this, *(_QWORD *)&index);
  LODWORD(this->fields.funcId) = -1;
  return questTvals;
}


System_Collections_Generic_Dictionary_string__int__o *__fastcall SkillLvEntity__GetFollowerValsDictionary(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_array *StringArray; // x0
  System_String_array *v10; // x20
  System_Collections_Generic_Dictionary_object__int__o *v11; // x19
  System_String_o *v12; // x0
  __int64 v13; // x1
  int klass; // w9
  System_String_o *v15; // x20
  int v16; // w8
  int32_t result; // [xsp+8h] [xbp-28h] BYREF
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FF48D & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__Add__, method);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_1B64A00(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4);
    sub_1B64A00(&StringLiteral_19436/*"followerVals"*/, v5);
    sub_1B64A00(&StringLiteral_15747/*"["*/, v6);
    sub_1B64A00(&StringLiteral_1/*""*/, v7);
    sub_1B64A00(&StringLiteral_16003/*"]"*/, v8);
    byte_49FF48D = 1;
  }
  result = 0;
  StringArray = EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_19436/*"followerVals"*/, 0LL, 0LL);
  if ( !StringArray )
    return 0LL;
  v10 = StringArray;
  if ( !*(_QWORD *)&StringArray->max_length )
    return 0LL;
  v11 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v11,
    (const MethodInfo_31725F0 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v10->max_length )
    goto LABEL_20;
  v12 = v10->m_Items[0];
  if ( !v12
    || (v12 = System_String__Replace_61404756(
                v12,
                (System_String_o *)StringLiteral_15747/*"["*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL)) == 0LL
    || (v12 = System_String__Replace_61404756(
                v12,
                (System_String_o *)StringLiteral_16003/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL)) == 0LL
    || (v12 = (System_String_o *)System_String__Split(v12, 0x2Cu, 0, 0LL), v19 = 0, !v12) )
  {
LABEL_21:
    sub_1B64C5C(v12, v13);
  }
  klass = (int)v12[1].klass;
  v15 = v12;
  if ( klass >= 1 )
  {
    v16 = 0;
    while ( v16 < (unsigned int)klass )
    {
      v12 = (System_String_o *)System_Int32__TryParse(*((System_String_o **)&v15[1].monitor + v16), &result, 0LL);
      if ( ((unsigned __int8)v12 & 1) != 0 )
      {
        v12 = System_Int32__ToString((int32_t)&v19, 0LL);
        if ( !v11 )
          goto LABEL_21;
        System_Collections_Generic_Dictionary_object__int___Add(
          v11,
          (Il2CppObject *)v12,
          result,
          (const MethodInfo_3172FA4 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
      v16 = v19 + 1;
      v19 = v16;
      klass = (int)v15[1].klass;
      if ( v16 >= klass )
        return (System_Collections_Generic_Dictionary_string__int__o *)v11;
    }
LABEL_20:
    sub_1B64C64(v12, v13);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v11;
}


System_Nullable_int__o __fastcall SkillLvEntity__GetFuncIndexForSplitFuncSequence(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  SkillLvEntity___c_c *v7; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *v9; // x20
  System_Func_long__Nullable_int___o *_9__44_0; // x21
  Il2CppObject *v11; // x22
  struct SkillLvEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Nullable_int__o v17; // 0:x3.8

  if ( (byte_49FF47F & 1) == 0 )
  {
    sub_1B64A00(&Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____, method);
    sub_1B64A00(&System_Func_long__Nullable_int___TypeInfo, v3);
    sub_1B64A00(&Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__, v4);
    sub_1B64A00(&SkillLvEntity___c_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_19592/*"funcPositionForSplitFuncSequence"*/, v6);
    byte_49FF47F = 1;
  }
  v7 = SkillLvEntity___c_TypeInfo;
  script = this->fields.script;
  if ( !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v7 = SkillLvEntity___c_TypeInfo;
  }
  v9 = (System_String_o *)StringLiteral_19592/*"funcPositionForSplitFuncSequence"*/;
  _9__44_0 = v7->static_fields->__9__44_0;
  if ( !_9__44_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = SkillLvEntity___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v7->static_fields->__9;
    _9__44_0 = (System_Func_long__Nullable_int___o *)sub_1B64C4C(System_Func_long__Nullable_int___TypeInfo);
    System_Func_long__Nullable_int_____ctor(
      _9__44_0,
      v11,
      Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__,
      0LL);
    static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = _9__44_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__44_0, (int32_t)_9__44_0, v13, v14);
  }
  v17 = 0LL;
  return EntityScriptUtil__GetScriptValue_long__Nullable_int__(
           script,
           v9,
           (System_Func_TSource__TDestination__o *)_9__44_0,
           v17,
           (const MethodInfo_2E44844 *)Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
}


System_Int32_array *__fastcall SkillLvEntity__GetIntArrayFromScript(
        SkillLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_int__o *v16; // x19
  System_Collections_Generic_Dictionary_string__object__o *script; // x21
  System_Collections_Generic_List_object__o *v18; // x22
  Il2CppObject *Value_object; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  unsigned int *v25; // x0
  __int64 v26; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  void *v31; // x0
  void *v32; // x21
  int v33; // w1
  int v34; // w20
  __int64 v35; // x20
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FF483 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_GetValue_List_object____, key);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v7);
    sub_1B64A00(&long_TypeInfo, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_object__GetEnumerator__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_object___ctor__, v13);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1B64A00(&System_Collections_Generic_List_object__TypeInfo, v15);
    byte_49FF483 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v16 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  script = this->fields.script;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_object___ctor__);
  Value_object = BasicHelper__GetValue_object_(
                   script,
                   key,
                   (Il2CppObject *)v18,
                   (const MethodInfo_2E2A0FC *)Method_BasicHelper_GetValue_List_object____);
  if ( !Value_object )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)Value_object,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v21 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v37,
        (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      goto LABEL_18;
    }
    if ( !v16 )
      sub_1B64C5C(v21, v22);
    if ( !v37.fields._current )
      sub_1B64C5C(0LL, v22);
    if ( v37.fields._current->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v25 = (unsigned int *)j_il2cpp_object_unbox_0(v37.fields._current, long_TypeInfo, v23, v24);
    v26 = *v25;
    items = v16->fields._items;
    v28 = Method_System_Collections_Generic_List_int__Add__;
    ++v16->fields._version;
    if ( !items )
      sub_1B64C5C(v25, v26);
    size = v16->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v16,
        v26,
        *(const MethodInfo_34927D0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v16->fields._size = size + 1;
      items->m_Items[size + 1] = v26;
    }
  }
  sub_1B64F1C(v37.fields._current);
  v32 = v31;
  v34 = v33;
  __cxa_end_catch();
  if ( v34 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C4F490();
  }
  v35 = *(_QWORD *)__cxa_begin_catch(v32);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v35 )
    sub_1B64C54(v35);
LABEL_18:
  if ( !v16 )
LABEL_20:
    sub_1B64C5C(Value_object, v20);
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall SkillLvEntity__GetOptionalBattleEffectIdList(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Func_object__object__o *v6; // x20

  if ( (byte_49FF480 & 1) == 0 )
  {
    sub_1B64A00(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, method);
    sub_1B64A00(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v3);
    sub_1B64A00(&System_Func_List_object___List_int___TypeInfo, v4);
    sub_1B64A00(&StringLiteral_17041/*"battleEffectId"*/, v5);
    byte_49FF480 = 1;
  }
  v6 = (System_Func_object__object__o *)sub_1B64C4C(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v6, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0LL);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     (System_String_o *)StringLiteral_17041/*"battleEffectId"*/,
                                                     (System_Func_TSource__TDestination__o *)v6,
                                                     0LL,
                                                     (const MethodInfo_2E449AC *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


int32_t __fastcall SkillLvEntity__GetScriptIntParam(
        SkillLvEntity_o *this,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  SkillLvEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_49FF485 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B64A00(&long_TypeInfo, v8);
    byte_49FF485 = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)key,
          (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1B64C5C(script, key);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  sub_1B64F1C(script);
  return SkillLvEntity__IsNoTargetSkipSkill(v13, v14);
}


DataVals_array *__fastcall SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  System_Int32_array *funcId; // x20
  FunctionMaster_o *v6; // x21
  const MethodInfo *v7; // x1
  DataVals_array *DataValsList; // x0
  __int64 v9; // x1

  if ( (byte_49FF469 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_1B64A00(&DataManager_TypeInfo, v3);
    byte_49FF469 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_FunctionMaster___);
  funcId = this->fields.funcId;
  v6 = (FunctionMaster_o *)Master_object;
  DataValsList = SkillLvEntity__getDataValsList(this, v7);
  if ( !v6 )
    sub_1B64C5C(DataValsList, v9);
  return FunctionMaster__GetSetTypeDataValArray(v6, funcId, DataValsList, 0LL);
}


System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *__fastcall SkillLvEntity__GetSvtChangeBgm(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x19
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  System_Collections_Generic_Dictionary_string__object__o *v19; // x20
  System_Collections_Generic_List_object__o *v20; // x21
  Il2CppObject *current; // x21
  SkillLvEntity_SvtChangeBgm_o *v22; // x0
  const MethodInfo *v23; // x2
  Il2CppObject *v24; // x20
  __int64 methodPtr_low; // x9
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FF484 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_GetValue_List_object____, method);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1B64A00(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_object__GetEnumerator__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_object___ctor__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__, v11);
    sub_1B64A00(&System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo, v12);
    sub_1B64A00(&System_Collections_Generic_List_object__TypeInfo, v13);
    sub_1B64A00(&SkillLvEntity_SvtChangeBgm_TypeInfo, v14);
    sub_1B64A00(&StringLiteral_23604/*"svtBgmChange"*/, v15);
    byte_49FF484 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)StringLiteral_23604/*"svtBgmChange"*/,
          (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v16;
  v19 = this->fields.script;
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_object___ctor__);
  script = (System_Collections_Generic_Dictionary_object__object__o *)BasicHelper__GetValue_object_(
                                                                        v19,
                                                                        (System_String_o *)StringLiteral_23604/*"svtBgmChange"*/,
                                                                        (Il2CppObject *)v20,
                                                                        (const MethodInfo_2E2A0FC *)Method_BasicHelper_GetValue_List_object____);
  if ( !script )
LABEL_21:
    sub_1B64C5C(script, v17);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)script,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    current = v36.fields._current;
    v22 = (SkillLvEntity_SvtChangeBgm_o *)sub_1B64C4C(SkillLvEntity_SvtChangeBgm_TypeInfo);
    v24 = (Il2CppObject *)v22;
    if ( current )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        sub_1B64F1C(current);
LABEL_19:
        sub_1B64C5C(v26, v27);
      }
    }
    SkillLvEntity_SvtChangeBgm___ctor(v22, (System_Collections_Generic_Dictionary_string__object__o *)current, v23);
    if ( !v16 )
      goto LABEL_19;
    items = v16->fields._items;
    v31 = Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__;
    ++v16->fields._version;
    if ( !items )
      sub_1B64C5C(v26, v27);
    size = v16->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        v24,
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      v16->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v24;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v24, v28, v29);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v16;
}


void __fastcall SkillLvEntity__GetUniqueFuncIds(
        SkillLvEntity_o *this,
        System_Collections_Generic_HashSet_int__o **ret,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *funcId; // x1
  System_Collections_Generic_HashSet_int__o *isAddState; // x0
  const MethodInfo *v10; // x1
  DataVals_array *DataValsList; // x21
  Il2CppObject *Master_object; // x22
  struct System_Int32_array *v13; // x8
  SkillLvMaster_o *v14; // x23
  unsigned __int64 v15; // x27
  unsigned __int64 max_length; // x9
  DataVals_o *v17; // x24
  int32_t v18; // w1
  int32_t Param; // w25
  int32_t v20; // w1
  const MethodInfo *v21; // x4
  SkillLvEntity_o *v23; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49FF490 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_FunctionMaster___, ret);
    sub_1B64A00(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_1B64A00(&DataManager_TypeInfo, v5);
    sub_1B64A00(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v7);
    byte_49FF490 = 1;
  }
  v23 = 0LL;
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
      (const MethodInfo_33674B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = SkillLvEntity__getDataValsList(this, v10);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_FunctionMaster___);
    isAddState = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_SkillLvMaster___);
    v13 = this->fields.funcId;
    if ( !v13 )
LABEL_32:
      sub_1B64C5C(isAddState, funcId);
    v14 = (SkillLvMaster_o *)isAddState;
    v15 = 0LL;
    while ( 1 )
    {
      max_length = v13->max_length;
      if ( (__int64)v15 >= (int)max_length )
        break;
      if ( v15 >= max_length )
        goto LABEL_34;
      if ( !Master_object )
        goto LABEL_32;
      isAddState = (System_Collections_Generic_HashSet_int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                  &entity,
                                                                  v13->m_Items[v15 + 1],
                                                                  (const MethodInfo_30D67EC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)isAddState & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_32;
        isAddState = (System_Collections_Generic_HashSet_int__o *)FuncList__isAddState((int32_t)entity[1].monitor, 0LL);
        if ( ((unsigned __int8)isAddState & 1) != 0 )
        {
          if ( !DataValsList )
            goto LABEL_32;
          if ( v15 >= DataValsList->max_length )
LABEL_34:
            sub_1B64C64(isAddState, funcId);
          if ( !entity )
            goto LABEL_32;
          v17 = DataValsList->m_Items[v15];
          if ( !v17 )
            goto LABEL_32;
          DataVals__SetTempType(
            DataValsList->m_Items[v15],
            (FunctionMaster_o *)Master_object,
            (int32_t)entity[1].monitor,
            0LL);
          v18 = DataVals__isParam(v17, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v17, v18, 0, 0LL);
          v20 = DataVals__isParam(v17, 27, 0LL) ? 27 : 4;
          isAddState = (System_Collections_Generic_HashSet_int__o *)DataVals__GetParam(v17, v20, 0, 0LL);
          if ( !v14 )
            goto LABEL_32;
          isAddState = (System_Collections_Generic_HashSet_int__o *)SkillLvMaster__TryGetEntity(
                                                                      v14,
                                                                      &v23,
                                                                      Param,
                                                                      (int32_t)isAddState,
                                                                      v21);
          if ( ((unsigned __int8)isAddState & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_32;
            funcId = (System_Collections_Generic_IEnumerable_T__o *)v23->fields.funcId;
            if ( funcId )
            {
              isAddState = *ret;
              if ( !*ret )
                goto LABEL_32;
              System_Collections_Generic_HashSet_int___UnionWith(
                isAddState,
                funcId,
                (const MethodInfo_33674B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
            }
          }
        }
      }
      v13 = this->fields.funcId;
      ++v15;
      if ( !v13 )
        goto LABEL_32;
    }
  }
}


int32_t __fastcall SkillLvEntity__GetWarBoardBreakPointDamageType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FF48C & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_15513/*"WarBoardBreakPointDamage"*/, method);
    byte_49FF48C = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_15513/*"WarBoardBreakPointDamage"*/, 0, v2);
}


bool __fastcall SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FF48F & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_16614/*"additionalSkillInsertCurrentSkillAfter"*/, method);
    byte_49FF48F = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16614/*"additionalSkillInsertCurrentSkillAfter"*/, 0, v2) == 1;
}


bool __fastcall SkillLvEntity__IsAress(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FF47C & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B64A00(&StringLiteral_16823/*"aress"*/, v3);
    byte_49FF47C = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_16823/*"aress"*/,
                       (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
    sub_1B64C5C(SetTypeDataValArray, v3);
  max_length = SetTypeDataValArray->max_length;
  v5 = SetTypeDataValArray;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  v7 = 1;
  while ( 1 )
  {
    if ( v6 >= max_length )
      sub_1B64C64(SetTypeDataValArray, v3);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillLvEntity__IsEnableTarget(SkillLvEntity_o *this, bool isCheckHate, const MethodInfo *method)
{
  bool v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  SkillLvEntity_o *v14; // x0
  const MethodInfo *v15; // x1

  v3 = isCheckHate;
  if ( (byte_49FF47D & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, isCheckHate);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B64A00(&long_TypeInfo, v6);
    sub_1B64A00(&StringLiteral_5904/*"EnableTarget"*/, v7);
    byte_49FF47D = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_5904/*"EnableTarget"*/,
          (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v3;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_5904/*"EnableTarget"*/,
                                                                            (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B64C5C(Item, v9);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v11, v12) == 1;
  sub_1B64F1C(Item);
  return (unsigned __int8)SkillLvEntity__GetAddIndiv(v14, v15);
}


bool __fastcall SkillLvEntity__IsIgnoreWhiteFade(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF481 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_20150/*"ignoreWhiteFade"*/, method);
    byte_49FF481 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20150/*"ignoreWhiteFade"*/, 0LL);
}


bool __fastcall SkillLvEntity__IsNoTargetSkipSkill(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FF486 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22013/*"noTargetSkipSkill"*/, method);
    byte_49FF486 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_22013/*"noTargetSkipSkill"*/, -1, v2) == 1;
}


bool __fastcall SkillLvEntity__IsRevivalUnder(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FF47B & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B64A00(&StringLiteral_22832/*"revivalUnder"*/, v3);
    byte_49FF47B = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_22832/*"revivalUnder"*/,
                       (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsRevivalUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FF47A & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B64A00(&StringLiteral_22833/*"revivalUp"*/, v3);
    byte_49FF47A = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_22833/*"revivalUp"*/,
                       (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsSupportExcluded(
        SkillLvEntity_o *this,
        System_Collections_Generic_Dictionary_string__int__o *vals,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1

  if ( (byte_49FF477 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, vals);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v4);
    this = (SkillLvEntity_o *)sub_1B64A00(&StringLiteral_2404/*"ApplySupportSvt"*/, v5);
    byte_49FF477 = 1;
  }
  if ( !vals )
    sub_1B64C5C(this, vals);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)StringLiteral_2404/*"ApplySupportSvt"*/,
           (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
      && !System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)vals,
            (Il2CppObject *)StringLiteral_2404/*"ApplySupportSvt"*/,
            (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


bool __fastcall SkillLvEntity__IsVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FF475 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B64A00(&StringLiteral_15309/*"VoiceVolume"*/, v3);
    byte_49FF475 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_15309/*"VoiceVolume"*/,
                       (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_array *svals; // x8
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_String_array *v8; // x8
  DataVals_array *v9; // x19
  __int64 v10; // x24
  __int64 v11; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v13; // x26
  System_String_o *v14; // x22
  DataVals_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  DataVals_o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v22; // x0

  if ( (byte_49FF468 & 1) == 0 )
  {
    sub_1B64A00(&DataVals___TypeInfo, method);
    sub_1B64A00(&DataVals_TypeInfo, v3);
    sub_1B64A00(&StringLiteral_1/*""*/, v4);
    byte_49FF468 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v9 = (DataVals_array *)sub_1B64AA8(DataVals___TypeInfo, 1LL);
    v18 = (DataVals_o *)sub_1B64C4C(DataVals_TypeInfo);
    DataVals___ctor(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v9 )
    {
      if ( v18 )
      {
        v6 = sub_1B64B3C(v18, v9->obj.klass->_1.element_class);
        if ( !v6 )
        {
LABEL_21:
          v22 = sub_1B64C80(v6);
          sub_1B64B28(v22, 0LL);
        }
      }
      if ( !v9->max_length )
LABEL_20:
        sub_1B64C64(v6, v7);
      v9->m_Items[0] = v18;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)v9->m_Items, (int32_t)v18, v19, v20);
      return v9;
    }
LABEL_13:
    sub_1B64C5C(v6, v7);
  }
  v6 = sub_1B64AA8(DataVals___TypeInfo, svals->max_length);
  v8 = this->fields.svals;
  if ( !v8 )
    goto LABEL_13;
  v9 = (DataVals_array *)v6;
  v10 = 4LL;
  v11 = 32LL;
  while ( 1 )
  {
    max_length = v8->max_length;
    v13 = v10 - 4;
    if ( v10 - 4 >= (int)max_length )
      return v9;
    if ( v13 >= max_length )
      goto LABEL_20;
    v14 = (System_String_o *)*((_QWORD *)&v8->obj.klass + v10);
    v15 = (DataVals_o *)sub_1B64C4C(DataVals_TypeInfo);
    DataVals___ctor(v15, v14, 0LL);
    if ( v9 )
    {
      if ( v15 )
      {
        v6 = sub_1B64B3C(v15, v9->obj.klass->_1.element_class);
        if ( !v6 )
          goto LABEL_21;
      }
      if ( v13 >= v9->max_length )
        goto LABEL_20;
      *((_QWORD *)&v9->obj.klass + v10) = v15;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)((char *)v9 + v11), (int32_t)v15, v16, v17);
      v8 = this->fields.svals;
      ++v10;
      v11 += 8LL;
      if ( v8 )
        continue;
    }
    goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__getDetail(SkillLvEntity_o *this, bool isShort, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  System_String_o *Detail; // x20

  if ( (byte_49FF46A & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_SkillDetailMaster___, isShort);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B64A00(&SkillDetailParamFormatResolver_TypeInfo, v6);
    byte_49FF46A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_SkillDetailMaster___)) == 0LL )
  {
    sub_1B64C5C(Instance, v8);
  }
  Detail = SkillDetailMaster__getDetail((SkillDetailMaster_o *)Instance, this->fields.skillDetailId, isShort, v9);
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  return SkillDetailParamFormatResolver__Apply(Detail, this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__getDetail_39525416(
        SkillLvEntity_o *this,
        int32_t lv,
        bool isShort,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x22
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  System_String_o *Detail; // x0
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF46B & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, *(_QWORD *)&lv);
    sub_1B64A00(&LocalizationManager_TypeInfo, v7);
    sub_1B64A00(&StringLiteral_8198/*"LEVEL_DETAIL_INFO"*/, v8);
    sub_1B64A00(&StringLiteral_1/*""*/, v9);
    byte_49FF46B = 1;
  }
  if ( lv <= 0 )
  {
    v15 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8198/*"LEVEL_DETAIL_INFO"*/, 0LL);
    v18 = lv;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v11, v12, v13);
    v15 = (Il2CppObject *)System_String__Format(v10, v14, 0LL);
  }
  Detail = SkillLvEntity__getDetail(this, isShort, (const MethodInfo *)isShort);
  return System_String__Format(Detail, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  Il2CppObject *v30; // x27
  const MethodInfo *v31; // x1
  Il2CppObject *v32; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *QuestPhaseIndividualList; // x0
  System_Int32_array *Individuality; // x1
  System_Collections_Generic_Dictionary_string__int__array *Values; // x26
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v37; // x19
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v39; // x8
  unsigned __int64 v40; // x8
  System_Collections_Generic_Dictionary_object__int__o *v41; // x20
  Il2CppObject *v42; // x8
  int monitor; // w24
  Il2CppClass *klass; // x3
  const MethodInfo *v45; // x7
  int32_t Item; // w0
  System_Int32_array *EventIndividuality; // x0
  __int64 *v48; // x8
  bool v50; // [xsp+4h] [xbp-ACh]
  ItemMaster_o *Master_object; // [xsp+8h] [xbp-A8h]
  int32_t v52; // [xsp+14h] [xbp-9Ch]
  unsigned int v53; // [xsp+1Ch] [xbp-94h]
  ServantEntity_o *v54; // [xsp+20h] [xbp-90h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_Dictionary_string__int__o **m_Items; // [xsp+38h] [xbp-78h]
  FunctionGroupEntity_o *v57; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_49FF470 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_FunctionGroupMaster___, *(_QWORD *)&wearersSvtId);
    sub_1B64A00(&Method_DataManager_GetMaster_FunctionMaster___, v17);
    sub_1B64A00(&Method_DataManager_GetMaster_ItemMaster___, v18);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantMaster___, v19);
    sub_1B64A00(&DataManager_TypeInfo, v20);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B64A00(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v22);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v23);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v24);
    sub_1B64A00(&StringLiteral_1476/*"3"*/, v25);
    sub_1B64A00(&StringLiteral_1414/*"2"*/, v26);
    sub_1B64A00(&StringLiteral_13488/*"Target"*/, v27);
    sub_1B64A00(&StringLiteral_1267/*"1"*/, v28);
    sub_1B64A00(&StringLiteral_6156/*"EventId"*/, v29);
    byte_49FF470 = 1;
  }
  v57 = 0LL;
  entity = 0LL;
  if ( setupInfo && this->fields.funcId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ItemMaster___);
    v30 = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_FunctionMaster___);
    v32 = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    v52 = wearesLimitCount;
    v53 = wearersSvtId;
    if ( wearersSvtId < 1 )
    {
      v54 = 0LL;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !QuestPhaseIndividualList )
        goto LABEL_87;
      v54 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 QuestPhaseIndividualList,
                                 wearersSvtId,
                                 (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    }
    Values = SkillLvEntity__getValues(this, v31);
    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                                                               setupInfo,
                                                                               eventId,
                                                                               0LL);
    funcId = this->fields.funcId;
    questPhaseIndividualityList = (System_Int32_array *)QuestPhaseIndividualList;
    if ( !funcId )
      goto LABEL_87;
    v50 = !isOwner;
    m_Items = Values->m_Items;
    v37 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v37 >= (int)max_length )
        break;
      if ( v37 >= max_length )
        goto LABEL_95;
      if ( !v30 )
        goto LABEL_87;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v30,
                                                                                 &entity,
                                                                                 funcId->m_Items[v37 + 1],
                                                                                 (const MethodInfo_30D67EC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_86;
      if ( isFuncGroup )
      {
        v39 = this->fields.funcId;
        if ( !v39 )
          goto LABEL_87;
        if ( v37 >= v39->max_length )
LABEL_95:
          sub_1B64C64(QuestPhaseIndividualList, Individuality);
        if ( !v32 )
          goto LABEL_87;
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)FunctionGroupMaster__TryGetEntity(
                                                                                   (FunctionGroupMaster_o *)v32,
                                                                                   &v57,
                                                                                   v39->m_Items[v37 + 1],
                                                                                   eventId,
                                                                                   0LL);
        if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
          goto LABEL_86;
      }
      if ( !Values )
        goto LABEL_87;
      v40 = Values->max_length;
      if ( (__int64)v37 >= (int)v40 )
        goto LABEL_86;
      if ( v37 >= v40 )
        goto LABEL_95;
      v41 = (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37];
      if ( !v41 )
        goto LABEL_86;
      v42 = entity;
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
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37],
                                                                                       (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                                                                       (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v41,
                                                                                       (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                                                                       (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v41,
                                                                                       (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                                                                       (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList )
            {
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v41,
                                                                                         (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                                                                         (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
            if ( (v53 & 0x80000000) != 0 || !klass->_1.namespaze )
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            if ( v54 )
            {
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality_39327748(
                                                                                         v54,
                                                                                         v52,
                                                                                         wearesDispLimitCount,
                                                                                         (System_Int32_array *)klass,
                                                                                         0LL);
              if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
                goto LABEL_90;
            }
            goto LABEL_86;
          case 111:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37],
                                                                                       (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                                                                       (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       v41,
                                                                                       (Il2CppObject *)StringLiteral_6156/*"EventId"*/,
                                                                                       (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v41,
                                                                                       (Il2CppObject *)StringLiteral_6156/*"EventId"*/,
                                                                                       (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v41,
                                                                                       (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                                                                       (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (int)QuestPhaseIndividualList >= 1 )
            {
              if ( !v54 )
                goto LABEL_86;
              Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v41,
                       (Il2CppObject *)StringLiteral_1414/*"2"*/,
                       (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality(
                                                                                         v54,
                                                                                         v52,
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
                                   v37,
                                   eventId,
                                   setupInfo->fields.questId,
                                   (System_Int32_array *)entity[5].klass,
                                   (FunctionMaster_o *)v30,
                                   (FunctionGroupMaster_o *)v32,
                                   v45);
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                       setupInfo,
                                                                                       questPhaseIndividualityList,
                                                                                       EventIndividuality,
                                                                                       0LL);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
            {
              if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
                      v41,
                      (Il2CppObject *)StringLiteral_13488/*"Target"*/,
                      (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                goto LABEL_90;
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v41,
                                                                                         (Il2CppObject *)StringLiteral_13488/*"Target"*/,
                                                                                         (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)QuestPhaseIndividualList != 1 || !v50 )
                goto LABEL_90;
            }
            goto LABEL_86;
          case 113:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37],
                                                                                       (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                                                                       (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v41,
                                                                                       (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                                                                       (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v41,
                                                                                       (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                                                                       (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
            if ( !v54 )
              goto LABEL_94;
            Individuality = ServantEntity__getIndividuality(v54, v52, wearesDispLimitCount, 0LL);
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
            if ( !Master_object )
              goto LABEL_87;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ItemMaster__GetIndividualityList_39072840(
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
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37],
                                                                                       (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                                                                       (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            goto LABEL_84;
          case 117:
          case 118:
            goto LABEL_85;
          case 129:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37],
                                                                                       (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                                                                       (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            v48 = &StringLiteral_1414/*"2"*/;
            goto LABEL_80;
          case 132:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37],
                                                                                       (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                                                                       (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            v48 = &StringLiteral_1476/*"3"*/;
LABEL_80:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v41,
                                                                                       (Il2CppObject *)*v48,
                                                                                       (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                                                                                     (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37],
                                                                                     (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                                                                     (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
          {
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v41,
                                                                                       (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                                                                       (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList )
            {
LABEL_84:
              v42 = entity;
              if ( !entity )
                goto LABEL_87;
LABEL_85:
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                         setupInfo,
                                                                                         questPhaseIndividualityList,
                                                                                         (System_Int32_array *)v42[5].klass,
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
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37],
                                                                                 (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                                                                 (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
      {
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v41,
                                                                                   (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                                                                   (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)v54;
            if ( !v54 )
            {
LABEL_94:
              LODWORD(QuestPhaseIndividualList) = v53 >> 31;
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            }
            if ( entity )
            {
              LOBYTE(QuestPhaseIndividualList) = ServantEntity__IsIndividuality_39327748(
                                                   v54,
                                                   v52,
                                                   wearesDispLimitCount,
                                                   (System_Int32_array *)entity[2].monitor,
                                                   0LL);
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            }
LABEL_87:
            sub_1B64C5C(QuestPhaseIndividualList, Individuality);
          }
        }
      }
LABEL_86:
      funcId = this->fields.funcId;
      ++v37;
      if ( !funcId )
        goto LABEL_87;
    }
  }
  LOBYTE(QuestPhaseIndividualList) = 0;
  return (unsigned __int8)QuestPhaseIndividualList & 1;
}


bool __fastcall SkillLvEntity__getEventUpVal_39542832(
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  Il2CppObject *Master_object; // x25
  Il2CppObject *v40; // x26
  Il2CppObject *v41; // x20
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v44; // x8
  struct System_Int32_array *v45; // x10
  SkillLvEntity_o *v46; // x29
  unsigned __int64 v47; // x11
  EventUpValInfo_o *v48; // x8
  int32_t v49; // w21
  ServantLimitEntity_o *v50; // x19
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v52; // x19
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v54; // x8
  struct EventUpValSetupInfo_o *v55; // x8
  unsigned __int64 chargeTurn; // x8
  System_Collections_Generic_Dictionary_object__int__o *v57; // x28
  int monitor; // w20
  const MethodInfo *v59; // x2
  Il2CppClass *klass; // x3
  Il2CppObject *v61; // x27
  int32_t Item; // w23
  EventUpValInfo_o *v63; // x8
  const MethodInfo *v64; // x2
  struct System_Int32_array *v65; // x8
  EventPointBuffEntity_o *EnableEntity; // x20
  Il2CppClass *v67; // x21
  const char *namespaze; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v69; // x27
  unsigned __int64 v70; // x23
  int32_t lv; // w20
  char v72; // w8
  Il2CppObject *v73; // x23
  EventDropUpValInfo_o *v74; // x20
  int32_t v75; // w1
  EventDropUpValInfo_o *v76; // x0
  bool v77; // w2
  int32_t v78; // w2
  int32_t v79; // w3
  const MethodInfo *v80; // x2
  const MethodInfo *v81; // x7
  EventUpValInfo_o *v82; // x8
  int32_t limitCount; // w20
  int32_t dispLimitCount; // w23
  int32_t v85; // w0
  struct EventUpValSetupInfo_o *v86; // x8
  SkillLvEntity_o *v87; // x2
  SkillEntity_o *v88; // x20
  SkillLvEntity_o *v89; // x23
  System_Int32_array *ActIndividuality; // x0
  int32_t v91; // w20
  const MethodInfo *v92; // x2
  int32_t v93; // w8
  int32_t v94; // w9
  int32_t v95; // w20
  Il2CppObject *v96; // x23
  EventDropUpValInfo_o *v97; // x27
  int32_t v98; // w2
  int32_t v99; // w3
  __int64 v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  __int64 v103; // x8
  const MethodInfo *v104; // x2
  Il2CppObject *v105; // x23
  int32_t v106; // w27
  int32_t v107; // w1
  EventDropUpValInfo_o *v108; // x0
  bool v109; // w2
  Il2CppObject *v110; // x23
  Il2CppObject *v111; // x23
  EventUpValInfo_o *v112; // x8
  Il2CppObject *v113; // x1
  EventUpValInfo_o *v114; // x8
  Il2CppObject *v115; // x23
  __int64 v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  __int64 v119; // x8
  Il2CppObject *v120; // x23
  EventDropUpValInfo_o *v121; // x27
  int32_t v122; // w2
  int32_t v123; // w3
  __int64 v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  __int64 v127; // x8
  Il2CppObject *v128; // x20
  __int64 v129; // x23
  UserServantEntity_o *HeroineData; // x0
  bool v132; // [xsp+4h] [xbp-ECh]
  int32_t v133; // [xsp+8h] [xbp-E8h]
  bool v134; // [xsp+Ch] [xbp-E4h]
  ServantEntity_o *v135; // [xsp+10h] [xbp-E0h]
  EventPointBuffEntity_o *value; // [xsp+18h] [xbp-D8h]
  SkillLvEntity_o *valuea; // [xsp+18h] [xbp-D8h]
  __int64 valueb; // [xsp+18h] [xbp-D8h]
  char v139; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v140; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v141; // [xsp+20h] [xbp-D0h]
  struct System_Int32_array *v143; // [xsp+30h] [xbp-C0h]
  char v144; // [xsp+3Ch] [xbp-B4h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+40h] [xbp-B0h]
  SkillLvEntity_o *v146; // [xsp+48h] [xbp-A8h]
  unsigned __int64 v147; // [xsp+50h] [xbp-A0h]
  FunctionGroupEntity_o *v151; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-78h] BYREF
  int32_t actMaxRarity; // [xsp+84h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16

  v10 = this;
  if ( (byte_49FF471 & 1) == 0 )
  {
    sub_1B64A00(&BuffList_TypeInfo, eventUpVallInfo);
    sub_1B64A00(&Method_DataManager_GetMasterData_BuffMaster___, v11);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantLimitMaster___, v12);
    sub_1B64A00(&Method_DataManager_GetMaster_EventPointBuffMaster___, v13);
    sub_1B64A00(&Method_DataManager_GetMaster_EventQuestMaster___, v14);
    sub_1B64A00(&Method_DataManager_GetMaster_FunctionGroupMaster___, v15);
    sub_1B64A00(&Method_DataManager_GetMaster_FunctionMaster___, v16);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantMaster___, v17);
    sub_1B64A00(&Method_DataManager_GetMaster_SkillMaster___, v18);
    sub_1B64A00(&Method_DataManager_GetMaster_UserServantMaster___, v19);
    sub_1B64A00(&DataManager_TypeInfo, v20);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B64A00(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v22);
    sub_1B64A00(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v23);
    sub_1B64A00(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v24);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v25);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v26);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v27);
    sub_1B64A00(&EventDropUpValInfo_TypeInfo, v28);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v29);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_1B64A00(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v32);
    sub_1B64A00(&StringLiteral_1476/*"3"*/, v33);
    sub_1B64A00(&StringLiteral_1414/*"2"*/, v34);
    sub_1B64A00(&StringLiteral_13488/*"Target"*/, v35);
    sub_1B64A00(&StringLiteral_1267/*"1"*/, v36);
    sub_1B64A00(&StringLiteral_6156/*"EventId"*/, v37);
    this = (SkillLvEntity_o *)sub_1B64A00(&StringLiteral_1213/*"0"*/, v38);
    byte_49FF471 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  v151 = 0LL;
  entity = 0LL;
  if ( !*eventUpVallInfo )
    goto LABEL_273;
  if ( !(*eventUpVallInfo)->fields.setupInfo || !v10->fields.funcId )
    goto LABEL_271;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_FunctionMaster___);
  v40 = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_FunctionGroupMaster___);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !*eventUpVallInfo )
    goto LABEL_273;
  v146 = this;
  if ( (*eventUpVallInfo)->fields.svtId < 1 )
  {
    v41 = 0LL;
    goto LABEL_16;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !*eventUpVallInfo || !this )
LABEL_273:
    sub_1B64C5C(this, eventUpVallInfo);
  v41 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          (*eventUpVallInfo)->fields.svtId,
          (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  v143 = eventIdList;
  v44 = *(_QWORD *)&eventIdList->max_length;
  if ( (int)v44 >= 1 )
  {
    v135 = (ServantEntity_o *)v41;
    v132 = isOwner;
    v139 = 0;
    v134 = v41 == 0LL || isEquipOnly;
    v45 = v143;
    v46 = this;
    v47 = 0LL;
    while ( 1 )
    {
      if ( v47 >= (unsigned int)v44 )
LABEL_274:
        sub_1B64C64(this, eventUpVallInfo);
      v48 = *eventUpVallInfo;
      if ( !*eventUpVallInfo )
        goto LABEL_273;
      v49 = v45->m_Items[v47 + 1];
      v147 = v47;
      if ( v48->fields.equipSvtId < 1 )
      {
        v144 = 0;
      }
      else
      {
        this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_273;
        this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        if ( !*eventUpVallInfo )
          goto LABEL_273;
        if ( !this )
          goto LABEL_273;
        v50 = ServantLimitMaster__GetEntity(
                (ServantLimitMaster_o *)this,
                (*eventUpVallInfo)->fields.svtId,
                (*eventUpVallInfo)->fields.limitCount,
                0LL);
        this = (SkillLvEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !*eventUpVallInfo )
          goto LABEL_273;
        if ( !v50 )
          goto LABEL_273;
        if ( !this )
          goto LABEL_273;
        this = (SkillLvEntity_o *)PartyOrganizationUtility__IsRarityRestriction(
                                    (PartyOrganizationUtility_o *)this,
                                    &skillName,
                                    &actMaxRarity,
                                    (*eventUpVallInfo)->fields.svtId,
                                    v50->fields.rarity,
                                    (*eventUpVallInfo)->fields.equipSvtId,
                                    v49,
                                    0LL);
        v144 = (char)this;
        v48 = *eventUpVallInfo;
        if ( !*eventUpVallInfo )
          goto LABEL_273;
      }
      this = (SkillLvEntity_o *)v48->fields.setupInfo;
      if ( !this )
        goto LABEL_273;
      this = (SkillLvEntity_o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                  (EventUpValSetupInfo_o *)this,
                                  v49,
                                  0LL);
      funcId = v10->fields.funcId;
      questPhaseIndividualityList = (System_Int32_array *)this;
      if ( !funcId )
        goto LABEL_273;
      v52 = 0LL;
      while ( 1 )
      {
        max_length = funcId->max_length;
        if ( (__int64)v52 >= (int)max_length )
          break;
        if ( v52 >= max_length )
          goto LABEL_274;
        if ( !Master_object )
          goto LABEL_273;
        this = (SkillLvEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    funcId->m_Items[v52 + 1],
                                    (const MethodInfo_30D67EC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_259;
        if ( isFuncGroup )
        {
          v54 = v10->fields.funcId;
          if ( !v54 )
            goto LABEL_273;
          if ( v52 >= v54->max_length )
            goto LABEL_274;
          if ( !v40 )
            goto LABEL_273;
          this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(
                                      (FunctionGroupMaster_o *)v40,
                                      &v151,
                                      v54->m_Items[v52 + 1],
                                      v49,
                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_259;
          this = (SkillLvEntity_o *)v151;
          if ( !v151 )
            goto LABEL_273;
          this = (SkillLvEntity_o *)FunctionGroupEntity__GetCheckEventQuest(v151, 0LL);
          if ( (_DWORD)this == 1 )
          {
            if ( !*eventUpVallInfo )
              goto LABEL_273;
            v55 = (*eventUpVallInfo)->fields.setupInfo;
            this = v146;
            if ( !v55 || !v146 )
              goto LABEL_273;
            this = (SkillLvEntity_o *)EventQuestMaster__IsEventNotIncluded(
                                        (EventQuestMaster_o *)v146,
                                        v49,
                                        v55->fields.questId,
                                        v55->fields.questPhase,
                                        12,
                                        nowTime,
                                        0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_259;
          }
        }
        if ( !v46 )
          goto LABEL_273;
        chargeTurn = (unsigned int)v46->fields.chargeTurn;
        if ( (__int64)v52 >= (int)chargeTurn )
          goto LABEL_259;
        if ( v52 >= chargeTurn )
          goto LABEL_274;
        v57 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&v46->fields.funcId + v52);
        if ( !v57 )
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
                                          v57,
                                          (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                          (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v57,
                                          (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                          (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v49 != (_DWORD)this )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v57,
                                          (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                          (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v57,
                                            (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                            (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_259;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                            v59);
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
              if ( !v135 )
                goto LABEL_259;
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_39327748(
                                          v135,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          (System_Int32_array *)klass,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
LABEL_75:
              v61 = entity;
              Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v57,
                       (Il2CppObject *)StringLiteral_1213/*"0"*/,
                       (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v140 = (EventDropUpValInfo_o *)sub_1B64C4C(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_38577032(v140, v49, (FunctionEntity_o *)v61, Item, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v57,
                     (Il2CppObject *)StringLiteral_1267/*"1"*/,
                     (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v57,
                                            (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                            (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v63 = *eventUpVallInfo;
                if ( !*eventUpVallInfo )
                  goto LABEL_273;
LABEL_122:
                v74 = v140;
                if ( !v140 )
                  goto LABEL_273;
                v75 = (int)this;
                v76 = v140;
                v77 = v63->fields.equipSvtId > 0;
LABEL_124:
                EventDropUpValInfo__SetAddCount(v76, v75, v77, v144 & 1, 0LL);
                goto LABEL_234;
              }
LABEL_222:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v57,
                                          (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                          (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v74 = v140;
              if ( (_DWORD)this != 2 )
                goto LABEL_234;
              v113 = (Il2CppObject *)StringLiteral_1414/*"2"*/;
LABEL_224:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v57,
                                          v113,
                                          (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v114 = *eventUpVallInfo;
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
                                          v57,
                                          (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                          (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v57,
                                          (Il2CppObject *)StringLiteral_6156/*"EventId"*/,
                                          (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v57,
                                          (Il2CppObject *)StringLiteral_6156/*"EventId"*/,
                                          (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v49 != (_DWORD)this )
                goto LABEL_259;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                            v80);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_259;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v57,
                                          (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                          (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (int)this < 1 )
                goto LABEL_134;
              if ( !v135 )
                goto LABEL_259;
              v82 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              limitCount = v82->fields.limitCount;
              dispLimitCount = v82->fields.dispLimitCount;
              v85 = System_Collections_Generic_Dictionary_object__int___get_Item(
                      v57,
                      (Il2CppObject *)StringLiteral_1414/*"2"*/,
                      (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality(v135, limitCount, dispLimitCount, v85, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
LABEL_134:
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              v86 = (*eventUpVallInfo)->fields.setupInfo;
              if ( !v86 )
                goto LABEL_273;
              if ( !entity )
                goto LABEL_273;
              this = (SkillLvEntity_o *)SkillLvEntity__GetEventIndividuality(
                                          v10,
                                          v52,
                                          v49,
                                          v86->fields.questId,
                                          (System_Int32_array *)entity[5].klass,
                                          (FunctionMaster_o *)Master_object,
                                          (FunctionGroupMaster_o *)v40,
                                          v81);
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              v87 = this;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)v87,
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
              this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_SkillMaster___);
              if ( !this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          v10->fields.skillId,
                                          (const MethodInfo_30D6798 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              v88 = (SkillEntity_o *)this;
              this = (SkillLvEntity_o *)v135;
              if ( !v135 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v135,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              if ( !v88 )
                goto LABEL_273;
              v89 = this;
              ActIndividuality = SkillEntity__getActIndividuality(v88, (const MethodInfo *)eventUpVallInfo);
              this = (SkillLvEntity_o *)Individuality__CheckIndividualities(
                                          (System_Int32_array *)v89,
                                          ActIndividuality,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)ServantEntity__checkIsHeroineSvt(v135, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_152;
              if ( !entity )
                goto LABEL_273;
              if ( HIDWORD(entity[1].monitor) )
                goto LABEL_152;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v128 = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserServantMaster___);
              v129 = *(_QWORD *)&v135->fields.id.fields.currentCryptoKey;
              *(_QWORD *)&v155.fields.fakeValue = *(_QWORD *)&v135->fields.id.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                valueb = *(_QWORD *)&v135->fields.id.fields.fakeValue;
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v155.fields.fakeValue = valueb;
              }
              *(_QWORD *)&v155.fields.currentCryptoKey = v129;
              this = (SkillLvEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v155, 0LL);
              if ( !v128 )
                goto LABEL_273;
              HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v128, (int32_t)this, 0LL);
              if ( HeroineData )
              {
                this = (SkillLvEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_259;
              }
LABEL_152:
              if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                     v57,
                     (Il2CppObject *)StringLiteral_13488/*"Target"*/,
                     (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v57,
                                            (Il2CppObject *)StringLiteral_13488/*"Target"*/,
                                            (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v91 = (int)this;
                if ( (_DWORD)this == 1 && !v132 )
                  goto LABEL_259;
              }
              else
              {
                v91 = 0;
              }
              v120 = entity;
              v121 = (EventDropUpValInfo_o *)sub_1B64C4C(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_38577032(v121, v49, (FunctionEntity_o *)v120, v91, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v57,
                     (Il2CppObject *)StringLiteral_1213/*"0"*/,
                     (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v57,
                                            (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                            (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo || !v121 )
                  goto LABEL_273;
                EventDropUpValInfo__SetAddCount(
                  v121,
                  (int32_t)this,
                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                  v144 & 1,
                  0LL);
              }
              else
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v57,
                                            (Il2CppObject *)StringLiteral_1213/*"0"*/,
                                            (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( (_DWORD)this == 2 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v57,
                                              (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                              (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v121 )
                    goto LABEL_273;
                  EventDropUpValInfo__SetRateCount(
                    v121,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v144 & 1,
                    0LL);
                }
              }
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
              if ( !this )
                goto LABEL_273;
              v124 = *(_QWORD *)&this->fields.skillId;
              v125 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
              ++this->fields.priority;
              if ( !v124 )
                goto LABEL_273;
              v126 = this->fields.chargeTurn;
              if ( (unsigned int)v126 >= *(_DWORD *)(v124 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v121,
                  *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
              }
              else
              {
                v127 = v124 + 8 * v126;
                this->fields.chargeTurn = v126 + 1;
                *(_QWORD *)(v127 + 32) = v121;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)(v127 + 32), (int32_t)v121, v122, v123);
              }
              v139 = 1;
              goto LABEL_259;
            case 113:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v57,
                                          (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                          (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v57,
                                          (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                          (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v49 != (_DWORD)this )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v57,
                                          (Il2CppObject *)StringLiteral_1213/*"0"*/,
                                          (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v57,
                                            (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                            (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_259;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                            v92);
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
              v139 |= (unsigned __int8)this;
              if ( !v135 || ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v135,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              actMaxRarity = 0;
              if ( !this )
                goto LABEL_273;
              v93 = this->fields.chargeTurn;
              if ( v93 < 1 )
                goto LABEL_240;
              v94 = 0;
              valuea = this;
              while ( v94 < (unsigned int)v93 )
              {
                v95 = *((_DWORD *)&this->fields.funcId + v94);
                v96 = entity;
                v97 = (EventDropUpValInfo_o *)sub_1B64C4C(EventDropUpValInfo_TypeInfo);
                EventDropUpValInfo___ctor_38577032(v97, v49, (FunctionEntity_o *)v96, v95, 0LL);
                if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                       v57,
                       (Il2CppObject *)StringLiteral_1213/*"0"*/,
                       (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v57,
                                              (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                              (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v97 )
                    goto LABEL_273;
                  EventDropUpValInfo__SetAddCount(
                    v97,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v144 & 1,
                    0LL);
                }
                else
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v57,
                                              (Il2CppObject *)StringLiteral_1213/*"0"*/,
                                              (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( (_DWORD)this == 2 )
                  {
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v57,
                                                (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                                (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v97 )
                      goto LABEL_273;
                    EventDropUpValInfo__SetRateCount(
                      v97,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v144 & 1,
                      0LL);
                  }
                }
                if ( !*eventUpVallInfo )
                  goto LABEL_273;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
                if ( !this )
                  goto LABEL_273;
                v100 = *(_QWORD *)&this->fields.skillId;
                v101 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                ++this->fields.priority;
                if ( !v100 )
                  goto LABEL_273;
                v102 = this->fields.chargeTurn;
                if ( (unsigned int)v102 >= *(_DWORD *)(v100 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v97,
                    *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
                }
                else
                {
                  v103 = v100 + 8 * v102;
                  this->fields.chargeTurn = v102 + 1;
                  *(_QWORD *)(v103 + 32) = v97;
                  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v103 + 32), (int32_t)v97, v98, v99);
                }
                this = valuea;
                v139 = 1;
                v94 = actMaxRarity + 1;
                actMaxRarity = v94;
                v93 = valuea->fields.chargeTurn;
                if ( v94 >= v93 )
                  goto LABEL_259;
              }
              goto LABEL_274;
            case 116:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v57,
                                          (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                          (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                            v104);
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
              v105 = entity;
              v106 = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v57,
                       (Il2CppObject *)StringLiteral_1213/*"0"*/,
                       (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v74 = (EventDropUpValInfo_o *)sub_1B64C4C(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_38577032(v74, v49, (FunctionEntity_o *)v105, v106, 0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v57,
                                          (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                          (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo || !v74 )
                goto LABEL_273;
              v107 = (int)this;
              v108 = v74;
              v109 = (*eventUpVallInfo)->fields.equipSvtId > 0;
              goto LABEL_218;
            case 129:
              if ( isSupport )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v57,
                                          (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                          (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v57,
                                          (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                          (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v49 != (_DWORD)this )
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
              v110 = entity;
              v141 = (EventDropUpValInfo_o *)sub_1B64C4C(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v141, v49, (FunctionEntity_o *)v110, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v57,
                     (Il2CppObject *)StringLiteral_1213/*"0"*/,
                     (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v57,
                                            (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                            (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo )
                  goto LABEL_273;
                v74 = v141;
                if ( !v141 )
                  goto LABEL_273;
                v75 = (int)this;
                v76 = v141;
                v77 = (*eventUpVallInfo)->fields.equipSvtId > 0;
                goto LABEL_124;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v57,
                                          (Il2CppObject *)StringLiteral_1213/*"0"*/,
                                          (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v74 = v141;
              if ( (_DWORD)this != 2 )
                goto LABEL_234;
              v113 = (Il2CppObject *)StringLiteral_1267/*"1"*/;
              goto LABEL_224;
            default:
              if ( monitor != 132 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v57,
                                          (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                          (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v57,
                                          (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                          (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v49 != (_DWORD)this )
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
              v73 = entity;
              v140 = (EventDropUpValInfo_o *)sub_1B64C4C(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v140, v49, (FunctionEntity_o *)v73, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v57,
                     (Il2CppObject *)StringLiteral_1267/*"1"*/,
                     (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 1 )
                goto LABEL_222;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v57,
                                          (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                          (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v63 = *eventUpVallInfo;
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
                                      v57,
                                      (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                      (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !isSupport
              || (this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                              this,
                                              (System_Collections_Generic_Dictionary_string__int__o *)v57,
                                              v64),
                  ((unsigned __int8)this & 1) == 0) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventPointBuffMaster___);
              v65 = v10->fields.funcId;
              if ( !v65 )
                goto LABEL_273;
              if ( v52 >= v65->max_length )
                goto LABEL_274;
              if ( !this )
                goto LABEL_273;
              EnableEntity = EventPointBuffMaster__GetEnableEntity(
                               (EventPointBuffMaster_o *)this,
                               v49,
                               v65->m_Items[v52 + 1],
                               0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v57,
                                          (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                          (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                  if ( v134 )
                    goto LABEL_99;
                  if ( !*eventUpVallInfo || !entity )
                    goto LABEL_273;
                  this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_39327748(
                                              v135,
                                              (*eventUpVallInfo)->fields.limitCount,
                                              (*eventUpVallInfo)->fields.dispLimitCount,
                                              (System_Int32_array *)entity[2].monitor,
                                              0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_99:
                    this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !this )
                      goto LABEL_273;
                    v133 = v49;
                    this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_BuffMaster___);
                    if ( !entity )
                      goto LABEL_273;
                    v67 = entity[2].klass;
                    if ( !v67 )
                      goto LABEL_273;
                    namespaze = v67->_1.namespaze;
                    if ( (int)namespaze < 1 )
                    {
                      v72 = 0;
                    }
                    else
                    {
                      v69 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
                      v70 = 0LL;
                      while ( 1 )
                      {
                        if ( v70 >= (unsigned int)namespaze )
                          goto LABEL_274;
                        if ( !v69 )
                          goto LABEL_273;
                        this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                    v69,
                                                    *((_DWORD *)&v67->_1.byval_arg.data + v70),
                                                    (const MethodInfo_30D6798 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                        if ( !this )
                          goto LABEL_273;
                        lv = this->fields.lv;
                        if ( !BuffList_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
                        this = (SkillLvEntity_o *)BuffList__isSpHit(lv, 0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          break;
                        LODWORD(namespaze) = v67->_1.namespaze;
                        if ( (__int64)++v70 >= (int)namespaze )
                        {
                          v72 = 0;
                          goto LABEL_227;
                        }
                      }
                      v72 = 1;
LABEL_227:
                      EnableEntity = value;
                    }
                    v49 = v133;
                    if ( ((unsigned __int8)v72 & (EnableEntity != 0LL)) != 0 )
                    {
                      this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                  v57,
                                                  (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                                  (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( !EnableEntity )
                        goto LABEL_273;
                      System_Collections_Generic_Dictionary_object__int___set_Item(
                        v57,
                        (Il2CppObject *)StringLiteral_1476/*"3"*/,
                        EnableEntity->fields.value + (_DWORD)this,
                        (const MethodInfo_3172F90 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
                    }
                    v115 = entity;
                    v74 = (EventDropUpValInfo_o *)sub_1B64C4C(EventDropUpValInfo_TypeInfo);
                    EventDropUpValInfo___ctor(v74, v133, (FunctionEntity_o *)v115, 0LL);
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v57,
                                                (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                                (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    v114 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo )
                      goto LABEL_273;
LABEL_232:
                    if ( !v74 )
                      goto LABEL_273;
                    EventDropUpValInfo__SetRateCount(v74, (int32_t)this, v114->fields.equipSvtId > 0, v144 & 1, 0LL);
LABEL_234:
                    v112 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo )
                      goto LABEL_273;
LABEL_235:
                    this = (SkillLvEntity_o *)v112->fields.dropList;
                    if ( !this )
                      goto LABEL_273;
                    v116 = *(_QWORD *)&this->fields.skillId;
                    v117 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                    ++this->fields.priority;
                    if ( !v116 )
                      goto LABEL_273;
                    v118 = this->fields.chargeTurn;
                    if ( (unsigned int)v118 >= *(_DWORD *)(v116 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)this,
                        (Il2CppObject *)v74,
                        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v119 = v116 + 8 * v118;
                      this->fields.chargeTurn = v118 + 1;
                      *(_QWORD *)(v119 + 32) = v74;
                      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v119 + 32), (int32_t)v74, v78, v79);
                    }
LABEL_240:
                    v139 = 1;
                    goto LABEL_259;
                  }
                }
              }
            }
          }
          goto LABEL_259;
        }
        this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                    v57,
                                    (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                    (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                      v57,
                                      (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                      (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
              v111 = entity;
              v74 = (EventDropUpValInfo_o *)sub_1B64C4C(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v74, v49, (FunctionEntity_o *)v111, 0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v57,
                                          (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                          (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo || !v74 )
                goto LABEL_273;
              v107 = (int)this;
              v108 = v74;
              v109 = (*eventUpVallInfo)->fields.equipSvtId > 0;
LABEL_218:
              EventDropUpValInfo__SetRateCount(v108, v107, v109, v144 & 1, 0LL);
              v112 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              goto LABEL_235;
            }
          }
        }
LABEL_259:
        funcId = v10->fields.funcId;
        ++v52;
        if ( !funcId )
          goto LABEL_273;
      }
      v45 = v143;
      LODWORD(v44) = v143->max_length;
      v47 = v147 + 1;
      if ( (__int64)(v147 + 1) >= (int)v44 )
        return v139 & 1;
    }
  }
LABEL_271:
  v139 = 0;
  return v139 & 1;
}


int32_t __fastcall SkillLvEntity__getFriendPointUpType(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct System_Int32_array *funcId; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  unsigned __int64 v9; // x21
  unsigned __int64 max_length; // x9
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FF46E & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1B64A00(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v3);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FF46E = 1;
  }
  entity = 0LL;
  if ( this->fields.funcId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_FunctionMaster___),
          (funcId = this->fields.funcId) == 0LL) )
    {
LABEL_15:
      sub_1B64C5C(Instance, v6);
    }
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v9 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v9 >= (int)max_length )
        break;
      if ( v9 >= max_length )
        sub_1B64C64(Instance, v6);
      if ( !v8 )
        goto LABEL_15;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v8,
                                   &entity,
                                   funcId->m_Items[v9 + 1],
                                   (const MethodInfo_30D67EC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_15;
        Instance = (Il2CppObject *)LODWORD(entity[1].monitor);
        if ( (_DWORD)Instance == 104 || (_DWORD)Instance == 123 )
          return (int)Instance;
      }
      funcId = this->fields.funcId;
      ++v9;
      if ( !funcId )
        goto LABEL_15;
    }
  }
  LODWORD(Instance) = 0;
  return (int)Instance;
}


int32_t __fastcall SkillLvEntity__getFriendPointUpVal(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_string__int__array *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v11; // x1
  struct System_Int32_array *funcId; // x8
  System_Collections_Generic_Dictionary_string__int__array *v13; // x20
  unsigned __int64 v14; // x22
  unsigned __int64 max_length; // x9
  int monitor; // w8
  int v17; // w8
  System_Collections_Generic_Dictionary_object__int__o *v18; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FF46D & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1B64A00(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B64A00(&StringLiteral_1213/*"0"*/, v7);
    byte_49FF46D = 1;
  }
  entity = 0LL;
  if ( !this->fields.funcId )
    return 0;
  Instance = (System_Collections_Generic_Dictionary_string__int__array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_FunctionMaster___);
  Instance = SkillLvEntity__getValues(this, v11);
  funcId = this->fields.funcId;
  if ( !funcId )
    goto LABEL_15;
  v13 = Instance;
  v14 = 0LL;
  while ( 1 )
  {
    max_length = funcId->max_length;
    if ( (__int64)v14 >= (int)max_length )
      return 0;
    if ( v14 >= max_length )
      goto LABEL_24;
    if ( !MasterData_object )
      goto LABEL_15;
    Instance = (System_Collections_Generic_Dictionary_string__int__array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                                             &entity,
                                                                             funcId->m_Items[v14 + 1],
                                                                             (const MethodInfo_30D67EC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_15;
      monitor = (int)entity[1].monitor;
      if ( monitor == 123 || monitor == 104 )
        break;
    }
    funcId = this->fields.funcId;
    ++v14;
    if ( !funcId )
      goto LABEL_15;
  }
  if ( !v13 )
LABEL_15:
    sub_1B64C5C(Instance, v9);
  v17 = v13->max_length;
  if ( (int)v14 >= v17 )
    return 0;
  if ( (unsigned int)v14 >= v17 )
LABEL_24:
    sub_1B64C64(Instance, v9);
  v18 = (System_Collections_Generic_Dictionary_object__int__o *)v13->m_Items[v14];
  if ( v18
    && System_Collections_Generic_Dictionary_object__int___ContainsKey(
         v18,
         (Il2CppObject *)StringLiteral_1213/*"0"*/,
         (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_object__int___get_Item(
             v18,
             (Il2CppObject *)StringLiteral_1213/*"0"*/,
             (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  }
  else
  {
    return 0;
  }
}


System_String_o *__fastcall SkillLvEntity__getFuncDetail(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Int32_array *funcId; // x8
  Il2CppObject *Instance; // x0
  struct System_Int32_array *v8; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  unsigned __int64 v10; // x21
  unsigned __int64 max_length; // x9
  LocalizationManager_c *v12; // x0
  System_String_o **p_monitor; // x8

  if ( (byte_49FF46C & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1B64A00(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v3);
    sub_1B64A00(&LocalizationManager_TypeInfo, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FF46C = 1;
  }
  funcId = this->fields.funcId;
  if ( funcId && *(_QWORD *)&funcId->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_FunctionMaster___),
          (v8 = this->fields.funcId) == 0LL) )
    {
LABEL_13:
      sub_1B64C5C(Instance, method);
    }
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v10 = 0LL;
    while ( 1 )
    {
      max_length = v8->max_length;
      if ( (__int64)v10 >= (int)max_length )
        break;
      if ( v10 >= max_length )
        sub_1B64C64(Instance, method);
      if ( !v9 )
        goto LABEL_13;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v9,
                   v8->m_Items[v10 + 1],
                   (const MethodInfo_30D6798 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        p_monitor = (System_String_o **)&Instance[3].monitor;
        return *p_monitor;
      }
      v8 = this->fields.funcId;
      ++v10;
      if ( !v8 )
        goto LABEL_13;
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49FA47A )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, method);
    byte_49FA47A = 1;
  }
  v12 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager_TypeInfo;
  }
  p_monitor = &v12->static_fields->unknownNameText;
  return *p_monitor;
}


int32_t __fastcall SkillLvEntity__getMovePositionDown(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  SkillLvEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49FF479 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B64A00(&long_TypeInfo, v4);
    sub_1B64A00(&StringLiteral_18596/*"down"*/, v5);
    byte_49FF479 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_18596/*"down"*/,
           (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_18596/*"down"*/,
                                                                                (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B64C5C(Item, v7);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
      }
      else
      {
        sub_1B64F1C(Item);
        LODWORD(script) = SkillLvEntity__IsRevivalUp(v11, v12);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  SkillLvEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49FF478 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B64A00(&long_TypeInfo, v4);
    sub_1B64A00(&StringLiteral_24208/*"up"*/, v5);
    byte_49FF478 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_24208/*"up"*/,
           (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_24208/*"up"*/,
                                                                                (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B64C5C(Item, v7);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
      }
      else
      {
        sub_1B64F1C(Item);
        LODWORD(script) = SkillLvEntity__getMovePositionDown(v11, v12);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FF473 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B64A00(&string_TypeInfo, v4);
    sub_1B64A00(&StringLiteral_10621/*"PlayVoiceNo"*/, v5);
    byte_49FF473 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_10621/*"PlayVoiceNo"*/,
            (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1B64C5C(0LL, v7);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_10621/*"PlayVoiceNo"*/,
                                  (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1B64F1C(result);
      return 0LL;
    }
  }
  return result;
}


System_Collections_Generic_Dictionary_string__int__array *__fastcall SkillLvEntity__getValues(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_String_array *svals; // x9
  int max_length; // w21
  __int64 klass; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_string__int__array *v13; // x20
  il2cpp_array_size_t v14; // w25
  struct System_String_array *v15; // x8
  int v16; // w29
  __int64 v17; // x22
  System_Collections_Generic_Dictionary_object__int__o *v18; // x24
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppClass **v21; // x23
  ServantStatusBattleListViewItem_o *v22; // x23
  int32_t v23; // w8
  System_String_o *v24; // x24
  ServantStatusBattleListViewItem_c *v25; // x24
  int32_t v26; // w2
  const MethodInfo_3172F90 *v27; // x3
  Il2CppObject *v28; // x1
  __int64 v29; // x24
  __int64 v31; // x0
  int32_t result[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FF467 & 1) == 0 )
  {
    sub_1B64A00(&System_Collections_Generic_Dictionary_string__int____TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v4);
    sub_1B64A00(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    sub_1B64A00(&StringLiteral_15747/*"["*/, v6);
    sub_1B64A00(&StringLiteral_1/*""*/, v7);
    sub_1B64A00(&StringLiteral_16003/*"]"*/, v8);
    byte_49FF467 = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = this->fields.svals;
  if ( !svals )
    return (System_Collections_Generic_Dictionary_string__int__array *)sub_1B64AA8(
                                                                         System_Collections_Generic_Dictionary_string__int____TypeInfo,
                                                                         1LL);
  max_length = svals->max_length;
  klass = sub_1B64AA8(System_Collections_Generic_Dictionary_string__int____TypeInfo, (unsigned int)max_length);
  v13 = (System_Collections_Generic_Dictionary_string__int__array *)klass;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = this->fields.svals;
      if ( !v15 )
        goto LABEL_37;
      if ( v14 >= v15->max_length )
        goto LABEL_38;
      klass = (__int64)v15->m_Items[v14];
      if ( !klass
        || (klass = (__int64)System_String__Replace_61404756(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_15747/*"["*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0LL)) == 0
        || (klass = (__int64)System_String__Replace_61404756(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_16003/*"]"*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0LL)) == 0
        || (klass = (__int64)System_String__Split((System_String_o *)klass, 0x2Cu, 0, 0LL)) == 0
        || (v16 = *(_DWORD *)(klass + 24),
            v17 = klass,
            v18 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_string__int__TypeInfo),
            System_Collections_Generic_Dictionary_object__int____ctor(
              v18,
              (const MethodInfo_31725F0 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__),
            !v13) )
      {
LABEL_37:
        sub_1B64C5C(klass, v12);
      }
      if ( v18 )
      {
        klass = sub_1B64B3C(v18, v13->obj.klass->_1.element_class);
        if ( !klass )
        {
          v31 = sub_1B64C80(0LL);
          sub_1B64B28(v31, 0LL);
        }
      }
      if ( v14 >= v13->max_length )
LABEL_38:
        sub_1B64C64(klass, v12);
      v21 = &v13->obj.klass + (int)v14;
      v21[4] = (Il2CppClass *)v18;
      v22 = (ServantStatusBattleListViewItem_o *)(v21 + 4);
      sub_1B649A4(v22, (int32_t)v18, v19, v20);
      result[1] = 0;
      if ( v16 >= 1 )
        break;
LABEL_33:
      if ( ++v14 == max_length )
        return v13;
    }
    v23 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v23 >= *(_DWORD *)(v17 + 24) )
        goto LABEL_38;
      v24 = *(System_String_o **)(v17 + 8LL * v23 + 32);
      klass = System_Int32__TryParse(v24, result, 0LL);
      if ( (klass & 1) != 0 )
        break;
      if ( !v24 )
        goto LABEL_37;
      klass = (__int64)System_String__Split(v24, 0x3Au, 0, 0LL);
      if ( !klass )
        goto LABEL_37;
      v29 = klass;
      if ( *(int *)(klass + 24) >= 2 )
      {
        klass = System_Int32__TryParse(*(System_String_o **)(klass + 40), result, 0LL);
        if ( (klass & 1) != 0 )
        {
          if ( v14 >= v13->max_length || !*(_DWORD *)(v29 + 24) )
            goto LABEL_38;
          klass = (__int64)v22->klass;
          if ( !v22->klass )
            goto LABEL_37;
          v26 = result[0];
          v28 = *(Il2CppObject **)(v29 + 32);
          v27 = (const MethodInfo_3172F90 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
LABEL_23:
          System_Collections_Generic_Dictionary_object__int___set_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)klass,
            v28,
            v26,
            v27);
        }
      }
      v23 = ++result[1];
      if ( result[1] >= v16 )
        goto LABEL_33;
    }
    if ( v14 >= v13->max_length )
      goto LABEL_38;
    v25 = v22->klass;
    klass = (__int64)System_Int32__ToString((int32_t)&result[1], 0LL);
    if ( !v25 )
      goto LABEL_37;
    v26 = result[0];
    v27 = (const MethodInfo_3172F90 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
    v28 = (Il2CppObject *)klass;
    klass = (__int64)v25;
    goto LABEL_23;
  }
  return v13;
}


System_String_o *__fastcall SkillLvEntity__getVoiceAssetName(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FF472 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B64A00(&string_TypeInfo, v4);
    sub_1B64A00(&StringLiteral_15307/*"VoiceAssetName"*/, v5);
    byte_49FF472 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_15307/*"VoiceAssetName"*/,
            (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1B64C5C(0LL, v7);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_15307/*"VoiceAssetName"*/,
                                  (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1B64F1C(result);
      return 0LL;
    }
  }
  return result;
}


float __fastcall SkillLvEntity__getVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  float v7; // s8
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  float result; // s0
  SkillLvEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_49FF476 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B64A00(&long_TypeInfo, v4);
    sub_1B64A00(&StringLiteral_15309/*"VoiceVolume"*/, v5);
    byte_49FF476 = 1;
  }
  script = this->fields.script;
  v7 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_15309/*"VoiceVolume"*/,
          (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v7;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_15309/*"VoiceVolume"*/,
                                                                            (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B64C5C(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11) / 1000.0;
  sub_1B64F1C(Item);
  SkillLvEntity__getMovePositionUp(v13, v14);
  return result;
}


bool __fastcall SkillLvEntity__isPlayVoiceWait(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FF474 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B64A00(&StringLiteral_10622/*"PlayVoiceWait"*/, v3);
    byte_49FF474 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_10622/*"PlayVoiceWait"*/,
                       (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


void __fastcall SkillLvEntity_SvtChangeBgm___ctor(
        SkillLvEntity_SvtChangeBgm_o *this,
        System_Collections_Generic_Dictionary_string__object__o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Item; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x2
  __int64 v22; // x3
  SkillLvEntity_o *v23; // x0
  System_String_o *v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_49FF491 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, obj);
    sub_1B64A00(&long_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_16644/*"afterClearBgmId"*/, v6);
    sub_1B64A00(&StringLiteral_20566/*"indv"*/, v7);
    sub_1B64A00(&StringLiteral_17092/*"beforeClearBgmId"*/, v8);
    sub_1B64A00(&StringLiteral_22603/*"questPhase"*/, v9);
    sub_1B64A00(&StringLiteral_22601/*"questId"*/, v10);
    byte_49FF491 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !obj )
    goto LABEL_15;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_20566/*"indv"*/,
           (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.svtIndv = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v13, v14);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_22601/*"questId"*/,
           (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v15, v16);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_22603/*"questPhase"*/,
           (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questPhase = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v17, v18);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_17092/*"beforeClearBgmId"*/,
           (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.beforeClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v19, v20);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_16644/*"afterClearBgmId"*/,
           (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_15:
    sub_1B64C5C(Item, v12);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    this->fields.afterClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v21, v22);
    return;
  }
LABEL_16:
  sub_1B64F1C(Item);
  SkillLvEntity__GetScriptIntParam(v23, v24, v25, v26);
}


void __fastcall SkillLvEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FF492 & 1) == 0 )
  {
    sub_1B64A00(&SkillLvEntity___c_TypeInfo, v1);
    byte_49FF492 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(SkillLvEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SkillLvEntity___c_TypeInfo->static_fields->__9 = (struct SkillLvEntity___c_o *)v2;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)SkillLvEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B64C5C(this, 0LL);
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
  if ( (byte_49FF493 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Nullable_int___ctor__, x);
    byte_49FF493 = 1;
  }
  v6 = (System_Nullable_int__o)&v5;
  v5 = 0LL;
  System_Nullable_int____ctor(v6, v3 - 1, (const MethodInfo_35D067C *)Method_System_Nullable_int___ctor__);
  return v5;
}