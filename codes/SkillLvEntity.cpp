void __fastcall SkillLvEntity___ctor(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FCD4C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FCD4C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall SkillLvEntity___ctor_39531324(
        SkillLvEntity_o *this,
        SkillLvEntity_o *srcEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Array_o *funcId; // x0
  Il2CppObject *v13; // x0
  Il2CppObject *v14; // x21
  struct System_Int32_array *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_Array_o *svals; // x0
  Il2CppObject *v19; // x0
  struct System_String_array *v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t v23; // w3
  System_Collections_Generic_IDictionary_TKey__TValue__o *script; // x20
  System_Collections_Generic_Dictionary_object__object__o *v25; // x21

  if ( (byte_49FCD4D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, srcEntity);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object___ctor___75615168, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1B640C8(&int___TypeInfo, v7);
    sub_1B640C8(&string___TypeInfo, v8);
    byte_49FCD4D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
  if ( !srcEntity )
    sub_1B64324(v9);
  *(_OWORD *)&this->fields.skillId = *(_OWORD *)&srcEntity->fields.skillId;
  funcId = (System_Array_o *)srcEntity->fields.funcId;
  if ( funcId && (v13 = System_Array__Clone(funcId, 0LL)) != 0LL )
  {
    v14 = v13;
    v15 = (struct System_Int32_array *)sub_1B64204(v13, int___TypeInfo);
    if ( !v15 )
      goto LABEL_12;
  }
  else
  {
    v15 = 0LL;
  }
  this->fields.funcId = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.funcId, (int32_t)v15, v10, v11);
  svals = (System_Array_o *)srcEntity->fields.svals;
  if ( !svals )
    goto LABEL_13;
  v19 = System_Array__Clone(svals, 0LL);
  if ( !v19 )
    goto LABEL_13;
  v14 = v19;
  v20 = (struct System_String_array *)sub_1B64204(v19, string___TypeInfo);
  if ( v20 )
    goto LABEL_14;
LABEL_12:
  sub_1B645E4(v14);
LABEL_13:
  v20 = 0LL;
LABEL_14:
  this->fields.svals = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svals, (int32_t)v20, v16, v17);
  this->fields.skillDetailId = srcEntity->fields.skillDetailId;
  script = (System_Collections_Generic_IDictionary_TKey__TValue__o *)srcEntity->fields.script;
  if ( script )
  {
    v25 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                       System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                       v21,
                                                                       v22);
    System_Collections_Generic_Dictionary_object__object____ctor_51874600(
      v25,
      script,
      (const MethodInfo_3178B28 *)Method_System_Collections_Generic_Dictionary_string__object___ctor___75615168);
  }
  else
  {
    v25 = 0LL;
  }
  this->fields.script = (struct System_Collections_Generic_Dictionary_string__object__o *)v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.script, (int32_t)v25, v22, v23);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__CreatePK(int32_t skillId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_49FCD4B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_49FCD4B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           skillId,
           lv,
           (const MethodInfo_2E37610 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SkillLvEntity__CreatePrimaryKey(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillLvEntity__CreatePK(this->fields.skillId, this->fields.lv, v2);
}


int32_t __fastcall SkillLvEntity__GetActNpcServantId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FCD72 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_2209/*"ActNpcServantId"*/, method);
    byte_49FCD72 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_2209/*"ActNpcServantId"*/, -1, v2);
}


System_Int32_array *__fastcall SkillLvEntity__GetActRarity(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FCD69 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16575/*"actRarity"*/, method);
    byte_49FCD69 = 1;
  }
  return SkillLvEntity__GetIntArrayFromScript(this, (System_String_o *)StringLiteral_16575/*"actRarity"*/, v2);
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
  System_Collections_Generic_Dictionary_object__object__o *v14; // x0
  Il2CppObject *Item; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v19; // x19
  System_Collections_Generic_List_int__o *v21; // x20
  int32_t v22; // w21
  __int64 v23; // x2
  __int64 v24; // x3
  int32_t klass; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  SkillLvEntity_o *v29; // x0
  const MethodInfo *v30; // x1

  if ( (byte_49FCD65 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B640C8(&long_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__get_Item__, v9);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_1B640C8(&StringLiteral_2245/*"AddIndiv"*/, v12);
    byte_49FCD65 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_2245/*"AddIndiv"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v14 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !v14 )
    goto LABEL_26;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v14,
           (Il2CppObject *)StringLiteral_2245/*"AddIndiv"*/,
           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    v19 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo
        ? (System_Collections_Generic_List_object__o *)Item
        : 0LL;
  }
  else
  {
    v19 = 0LL;
  }
  v21 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v16, v17);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v19 )
    goto LABEL_26;
  if ( v19->fields._size < 1 )
  {
LABEL_24:
    if ( v21 )
      return System_Collections_Generic_List_int___ToArray(
               v21,
               (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_26:
    sub_1B64324(v14);
  }
  v22 = 0;
  while ( 1 )
  {
    v14 = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       v19,
                                                                       v22,
                                                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !v21 || !v14 )
      goto LABEL_26;
    if ( v14->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v14 = (System_Collections_Generic_Dictionary_object__object__o *)j_il2cpp_object_unbox_0(
                                                                       v14,
                                                                       long_TypeInfo,
                                                                       v23,
                                                                       v24);
    klass = (int32_t)v14->klass;
    items = v21->fields._items;
    v27 = Method_System_Collections_Generic_List_int__Add__;
    ++v21->fields._version;
    if ( !items )
      goto LABEL_26;
    size = v21->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v21,
        klass,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v21->fields._size = size + 1;
      items->m_Items[size + 1] = klass;
    }
    if ( ++v22 >= v19->fields._size )
      goto LABEL_24;
  }
  sub_1B645E4(v14);
  return (System_Int32_array *)SkillLvEntity__GetFuncIndexForSplitFuncSequence(v29, v30);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillActorType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FCD70 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16609/*"additionalSkillActorType"*/, method);
    byte_49FCD70 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16609/*"additionalSkillActorType"*/, -1, v2);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FCD6E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16610/*"additionalSkillId"*/, method);
    byte_49FCD6E = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16610/*"additionalSkillId"*/, -1, v2);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillLv(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FCD6F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16612/*"additionalSkillLv"*/, method);
    byte_49FCD6F = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16612/*"additionalSkillLv"*/, 1, v2);
}


int32_t __fastcall SkillLvEntity__GetBattleStartRemainingTurn(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FCD71 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17050/*"battleStartRemainingTurn"*/, method);
    byte_49FCD71 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_17050/*"battleStartRemainingTurn"*/, 0, v2);
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
  __int64 v24; // x1
  struct System_Int32_array *v25; // x8
  const MethodInfo_3170630 **v26; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x24
  unsigned __int64 v28; // x29
  unsigned __int64 max_length; // x9
  unsigned __int64 MasterName_k__BackingField_low; // x8
  System_Collections_Generic_Dictionary_object__int__o *v31; // x25
  EventUpValInfo_o *v32; // x8
  const MethodInfo_3170630 **v33; // x10
  const MethodInfo_3170630 *v34; // x2
  EventUpValInfo_o **v35; // x27
  const MethodInfo_3170630 **v36; // x28
  int32_t Item; // w0
  EventUpValInfo_o **v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  int32_t v41; // w26
  Il2CppObject *v42; // x28
  EventDropUpValInfo_o *v43; // x20
  int32_t v44; // w2
  int32_t v45; // w3
  Il2CppArrayBounds *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppArrayBounds *v49; // x8
  int32_t dispLimitCount; // [xsp+0h] [xbp-90h]
  int32_t limitCount; // [xsp+4h] [xbp-8Ch]
  EventUpValInfo_o **v53; // [xsp+8h] [xbp-88h]
  ServantEntity_o *v54; // [xsp+10h] [xbp-80h]
  char v55; // [xsp+1Ch] [xbp-74h]
  System_Collections_Generic_Dictionary_string__int__o **p_list; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  v5 = eventUpVallInfo;
  if ( (byte_49FCD56 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_FunctionGroupMaster___, eventUpVallInfo);
    sub_1B640C8(&Method_DataManager_GetMaster_FunctionMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v13);
    sub_1B640C8(&EventDropUpValInfo_TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v15);
    sub_1B640C8(&StringLiteral_1414/*"2"*/, v16);
    sub_1B640C8(&StringLiteral_13483/*"Target"*/, v17);
    sub_1B640C8(&StringLiteral_1267/*"1"*/, v18);
    sub_1B640C8(&StringLiteral_1213/*"0"*/, v19);
    byte_49FCD56 = 1;
  }
  entity = 0LL;
  funcId = this->fields.funcId;
  if ( funcId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FunctionMaster___);
    Values = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    if ( *v5 )
    {
      if ( (*v5)->fields.svtId < 1 )
      {
        v54 = 0LL;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Values = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !*v5 || !Values )
          goto LABEL_53;
        v54 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   Values,
                                   (*v5)->fields.svtId,
                                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
      Values = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvEntity__getValues(this, v23);
      v25 = this->fields.funcId;
      if ( v25 )
      {
        v55 = 0;
        v26 = (const MethodInfo_3170630 **)&Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
        v27 = Values;
        v28 = 0LL;
        p_list = (System_Collections_Generic_Dictionary_string__int__o **)&Values->fields.list;
        do
        {
          max_length = v25->max_length;
          if ( (__int64)v28 >= (int)max_length )
          {
            LOBYTE(funcId) = v55;
            return (char)funcId;
          }
          if ( v28 >= max_length )
            goto LABEL_57;
          if ( !Master_object )
            break;
          Values = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                   &entity,
                                                                   v25->m_Items[v28 + 1],
                                                                   (const MethodInfo_30D3EF8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
              if ( !v27 )
                break;
              MasterName_k__BackingField_low = LODWORD(v27->fields._MasterName_k__BackingField);
              if ( (__int64)v28 >= (int)MasterName_k__BackingField_low )
              {
                LOBYTE(funcId) = 0;
                return (char)funcId;
              }
              if ( v28 >= MasterName_k__BackingField_low )
LABEL_57:
                sub_1B6432C(Values, v24);
              v31 = (System_Collections_Generic_Dictionary_object__int__o *)p_list[v28];
              if ( v31 )
              {
                if ( !entity )
                  break;
                if ( LODWORD(entity[1].monitor) == 111 )
                {
                  Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                           (System_Collections_Generic_Dictionary_object__int__o *)p_list[v28],
                                                                           (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                                                           (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                  if ( ((unsigned __int8)Values & 1) != 0 )
                  {
                    Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                             v31,
                                                                             (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                                                             *v26);
                    if ( (int)Values < 1 )
                      goto LABEL_34;
                    if ( v54 )
                    {
                      v32 = *v5;
                      if ( !*v5 )
                        break;
                      v33 = v26;
                      v34 = *v26;
                      v35 = v5;
                      dispLimitCount = v32->fields.dispLimitCount;
                      limitCount = v32->fields.limitCount;
                      v36 = v33;
                      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                               v31,
                               (Il2CppObject *)StringLiteral_1414/*"2"*/,
                               v34);
                      Values = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality(
                                                                               v54,
                                                                               limitCount,
                                                                               dispLimitCount,
                                                                               Item,
                                                                               0LL);
                      v38 = v35;
                      v26 = v36;
                      v5 = v38;
                      if ( ((unsigned __int8)Values & 1) != 0 )
                      {
LABEL_34:
                        v53 = v5;
                        if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                               v31,
                               (Il2CppObject *)StringLiteral_13483/*"Target"*/,
                               (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                        {
                          v41 = System_Collections_Generic_Dictionary_object__int___get_Item(
                                  v31,
                                  (Il2CppObject *)StringLiteral_13483/*"Target"*/,
                                  *v26);
                        }
                        else
                        {
                          v41 = 0;
                        }
                        v42 = entity;
                        v43 = (EventDropUpValInfo_o *)sub_1B64314(EventDropUpValInfo_TypeInfo, v39, v40);
                        EventDropUpValInfo___ctor_38572316(v43, 0, (FunctionEntity_o *)v42, v41, 0LL);
                        if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                               v31,
                               (Il2CppObject *)StringLiteral_1213/*"0"*/,
                               *v26) == 1 )
                        {
                          Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v31,
                                                                                   (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                                                                   *v26);
                          v5 = v53;
                          if ( !*v53 || !v43 )
                            break;
                          EventDropUpValInfo__SetAddCount(v43, (int32_t)Values, (*v53)->fields.equipSvtId > 0, 0, 0LL);
                        }
                        else
                        {
                          Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v31,
                                                                                   (Il2CppObject *)StringLiteral_1213/*"0"*/,
                                                                                   *v26);
                          v5 = v53;
                          if ( (_DWORD)Values == 2 )
                          {
                            Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                     v31,
                                                                                     (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                                                                     *v26);
                            if ( !*v53 || !v43 )
                              break;
                            EventDropUpValInfo__SetRateCount(
                              v43,
                              (int32_t)Values,
                              (*v53)->fields.equipSvtId > 0,
                              0,
                              0LL);
                          }
                        }
                        if ( !*v5 )
                          break;
                        Values = (DataMasterBase_TMaster__TEntity__PKType__o *)(*v5)->fields.dropList;
                        if ( !Values )
                          break;
                        v46 = *(Il2CppArrayBounds **)&Values->fields._MasterKind_k__BackingField;
                        v47 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                        ++HIDWORD(Values->fields._MasterName_k__BackingField);
                        if ( !v46 )
                          break;
                        v48 = SLODWORD(Values->fields._MasterName_k__BackingField);
                        if ( (unsigned int)v48 >= v46[3].length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            (System_Collections_Generic_List_object__o *)Values,
                            (Il2CppObject *)v43,
                            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v49 = &v46[v48];
                          LODWORD(Values->fields._MasterName_k__BackingField) = v48 + 1;
                          v49[4] = (Il2CppArrayBounds)v43;
                          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v49[4], (int32_t)v43, v44, v45);
                        }
                        v55 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
          v25 = this->fields.funcId;
          ++v28;
        }
        while ( v25 );
      }
    }
LABEL_53:
    sub_1B64324(Values);
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
  __int64 v30; // x1
  __int64 v31; // x2
  SkillLvEntity_o *v32; // x21
  SkillLvEntity___c_c *v33; // x0
  System_Func_object__int__o *_9__61_0; // x22
  Il2CppObject *v35; // x23
  struct SkillLvEntity___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  int32_t v40; // [xsp+Ch] [xbp-74h]
  FunctionGroupEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *v42; // [xsp+18h] [xbp-68h] BYREF

  v14 = this;
  if ( (byte_49FCD75 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_QuestGroupMaster___, *(_QWORD *)&index);
    sub_1B640C8(&DataManager_TypeInfo, v15);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v16);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v17);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___, v18);
    sub_1B640C8(&System_Func_QuestGroupEntity__int__TypeInfo, v19);
    sub_1B640C8(&int___TypeInfo, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v21);
    sub_1B640C8(&Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__, v22);
    this = (SkillLvEntity_o *)sub_1B640C8(&SkillLvEntity___c_TypeInfo, v23);
    byte_49FCD75 = 1;
  }
  entity = 0LL;
  v42 = 0LL;
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
    v40 = questId;
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
                                      &v42,
                                      v28,
                                      (const MethodInfo_30D3EF8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
      }
      LODWORD(v25) = funcId->max_length;
      if ( (__int64)++v26 >= (int)v25 )
        goto LABEL_20;
    }
    if ( !v42 )
      goto LABEL_40;
    questTvals = (System_Int32_array *)v42[5].klass;
LABEL_20:
    questId = v40;
  }
  if ( !questTvals )
    goto LABEL_40;
  if ( *(_QWORD *)&questTvals->max_length )
    return questTvals;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this )
    goto LABEL_40;
  this = (SkillLvEntity_o *)QuestGroupMaster__GetEntityListByGroupId((QuestGroupMaster_o *)this, eventId, 1, 0LL);
  if ( !this )
    goto LABEL_40;
  if ( questId < 1 )
    return questTvals;
  v32 = this;
  if ( this->fields.chargeTurn < 1 )
    return questTvals;
  v33 = SkillLvEntity___c_TypeInfo;
  if ( !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v33 = SkillLvEntity___c_TypeInfo;
  }
  _9__61_0 = (System_Func_object__int__o *)v33->static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = SkillLvEntity___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v33->static_fields->__9;
    _9__61_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_QuestGroupEntity__int__TypeInfo, v30, v31);
    System_Func_object__int____ctor(_9__61_0, v35, Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__, 0LL);
    static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = (struct System_Func_QuestGroupEntity__int__o *)_9__61_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                                                               (System_Func_TSource__TResult__o *)_9__61_0,
                                                               (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
  if ( System_Linq_Enumerable__Contains_int_(
         v39,
         questId,
         (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return questTvals;
  }
  this = (SkillLvEntity_o *)sub_1B64170(int___TypeInfo, 1LL);
  if ( !this )
LABEL_40:
    sub_1B64324(this);
  questTvals = (System_Int32_array *)this;
  if ( !this->fields.chargeTurn )
LABEL_41:
    sub_1B6432C(this, *(_QWORD *)&index);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_array *v12; // x20
  System_Collections_Generic_Dictionary_object__int__o *v13; // x19
  System_String_o *v14; // x0
  __int64 v15; // x1
  int klass; // w9
  System_String_o *v17; // x20
  int v18; // w8
  int32_t result; // [xsp+8h] [xbp-28h] BYREF
  int v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FCD74 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4);
    sub_1B640C8(&StringLiteral_19433/*"followerVals"*/, v5);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v8);
    byte_49FCD74 = 1;
  }
  result = 0;
  StringArray = EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_19433/*"followerVals"*/, 0LL, 0LL);
  if ( !StringArray )
    return 0LL;
  v12 = StringArray;
  if ( !*(_QWORD *)&StringArray->max_length )
    return 0LL;
  v13 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                  v10,
                                                                  v11);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v13,
    (const MethodInfo_316FCFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v12->max_length )
    goto LABEL_20;
  v14 = v12->m_Items[0];
  if ( !v14
    || (v14 = System_String__Replace_61395016(
                v14,
                (System_String_o *)StringLiteral_15744/*"["*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL)) == 0LL
    || (v14 = System_String__Replace_61395016(
                v14,
                (System_String_o *)StringLiteral_16000/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL)) == 0LL
    || (v14 = (System_String_o *)System_String__Split(v14, 0x2Cu, 0, 0LL), v21 = 0, !v14) )
  {
LABEL_21:
    sub_1B64324(v14);
  }
  klass = (int)v14[1].klass;
  v17 = v14;
  if ( klass >= 1 )
  {
    v18 = 0;
    while ( v18 < (unsigned int)klass )
    {
      v14 = (System_String_o *)System_Int32__TryParse(*((System_String_o **)&v17[1].monitor + v18), &result, 0LL);
      if ( ((unsigned __int8)v14 & 1) != 0 )
      {
        v14 = System_Int32__ToString((int32_t)&v21, 0LL);
        if ( !v13 )
          goto LABEL_21;
        System_Collections_Generic_Dictionary_object__int___Add(
          v13,
          (Il2CppObject *)v14,
          result,
          (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
      v18 = v21 + 1;
      v21 = v18;
      klass = (int)v17[1].klass;
      if ( v18 >= klass )
        return (System_Collections_Generic_Dictionary_string__int__o *)v13;
    }
LABEL_20:
    sub_1B6432C(v14, v15);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v13;
}


System_Nullable_int__o __fastcall SkillLvEntity__GetFuncIndexForSplitFuncSequence(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  SkillLvEntity___c_c *v8; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *v10; // x20
  System_Func_long__Nullable_int___o *_9__44_0; // x21
  Il2CppObject *v12; // x22
  struct SkillLvEntity___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Nullable_int__o v18; // 0:x3.8

  if ( (byte_49FCD66 & 1) == 0 )
  {
    sub_1B640C8(&Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____, method);
    sub_1B640C8(&System_Func_long__Nullable_int___TypeInfo, v4);
    sub_1B640C8(&Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__, v5);
    sub_1B640C8(&SkillLvEntity___c_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_19589/*"funcPositionForSplitFuncSequence"*/, v7);
    byte_49FCD66 = 1;
  }
  v8 = SkillLvEntity___c_TypeInfo;
  script = this->fields.script;
  if ( !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v8 = SkillLvEntity___c_TypeInfo;
  }
  v10 = (System_String_o *)StringLiteral_19589/*"funcPositionForSplitFuncSequence"*/;
  _9__44_0 = v8->static_fields->__9__44_0;
  if ( !_9__44_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = SkillLvEntity___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v8->static_fields->__9;
    _9__44_0 = (System_Func_long__Nullable_int___o *)sub_1B64314(System_Func_long__Nullable_int___TypeInfo, method, v2);
    System_Func_long__Nullable_int_____ctor(
      _9__44_0,
      v12,
      Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__,
      0LL);
    static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = _9__44_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__44_0, (int32_t)_9__44_0, v14, v15);
  }
  v18 = 0LL;
  return EntityScriptUtil__GetScriptValue_long__Nullable_int__(
           script,
           v10,
           (System_Func_TSource__TDestination__o *)_9__44_0,
           v18,
           (const MethodInfo_2E41F50 *)Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
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
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x22
  Il2CppObject *Value_object; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x2
  __int64 v24; // x3
  int32_t *v25; // x0
  int32_t v26; // w1
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

  if ( (byte_49FCD6A & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_GetValue_List_object____, key);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v7);
    sub_1B640C8(&long_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_object___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v15);
    byte_49FCD6A = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v16 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    key,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  script = this->fields.script;
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_object__TypeInfo,
                                                       v18,
                                                       v19);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_object___ctor__);
  Value_object = BasicHelper__GetValue_object_(
                   script,
                   key,
                   (Il2CppObject *)v20,
                   (const MethodInfo_2E27808 *)Method_BasicHelper_GetValue_List_object____);
  if ( !Value_object )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)Value_object,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v22 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v37,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      goto LABEL_18;
    }
    if ( !v16 )
      sub_1B64324(v22);
    if ( !v37.fields._current )
      sub_1B64324(0LL);
    if ( v37.fields._current->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v25 = (int32_t *)j_il2cpp_object_unbox_0(v37.fields._current, long_TypeInfo, v23, v24);
    v26 = *v25;
    items = v16->fields._items;
    v28 = Method_System_Collections_Generic_List_int__Add__;
    ++v16->fields._version;
    if ( !items )
      sub_1B64324(v25);
    size = v16->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v16,
        v26,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v16->fields._size = size + 1;
      items->m_Items[size + 1] = v26;
    }
  }
  sub_1B645E4(v37.fields._current);
  v32 = v31;
  v34 = v33;
  __cxa_end_catch();
  if ( v34 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C4EB58();
  }
  v35 = *(_QWORD *)__cxa_begin_catch(v32);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v35 )
    sub_1B6431C(v35);
LABEL_18:
  if ( !v16 )
LABEL_20:
    sub_1B64324(Value_object);
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall SkillLvEntity__GetOptionalBattleEffectIdList(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Func_object__object__o *v7; // x20

  if ( (byte_49FCD67 & 1) == 0 )
  {
    sub_1B640C8(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, method);
    sub_1B640C8(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v4);
    sub_1B640C8(&System_Func_List_object___List_int___TypeInfo, v5);
    sub_1B640C8(&StringLiteral_17038/*"battleEffectId"*/, v6);
    byte_49FCD67 = 1;
  }
  v7 = (System_Func_object__object__o *)sub_1B64314(System_Func_List_object___List_int___TypeInfo, method, v2);
  System_Func_object__object____ctor(v7, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0LL);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     (System_String_o *)StringLiteral_17038/*"battleEffectId"*/,
                                                     (System_Func_TSource__TDestination__o *)v7,
                                                     0LL,
                                                     (const MethodInfo_2E420B8 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
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

  if ( (byte_49FCD6C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B640C8(&long_TypeInfo, v8);
    byte_49FCD6C = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)key,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1B64324(script);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  sub_1B645E4(script);
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

  if ( (byte_49FCD50 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    byte_49FCD50 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FunctionMaster___);
  funcId = this->fields.funcId;
  v6 = (FunctionMaster_o *)Master_object;
  DataValsList = SkillLvEntity__getDataValsList(this, v7);
  if ( !v6 )
    sub_1B64324(DataValsList);
  return FunctionMaster__GetSetTypeDataValArray(v6, funcId, DataValsList, 0LL);
}


System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *__fastcall SkillLvEntity__GetSvtChangeBgm(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x19
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_Dictionary_string__object__o *v21; // x20
  System_Collections_Generic_List_object__o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *current; // x21
  SkillLvEntity_SvtChangeBgm_o *v26; // x0
  const MethodInfo *v27; // x2
  Il2CppObject *v28; // x20
  __int64 methodPtr_low; // x9
  __int64 v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FCD6B & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_GetValue_List_object____, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_object___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v14);
    sub_1B640C8(&SkillLvEntity_SvtChangeBgm_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_23600/*"svtBgmChange"*/, v16);
    byte_49FCD6B = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)StringLiteral_23600/*"svtBgmChange"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v17;
  v21 = this->fields.script;
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_object__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_object___ctor__);
  script = (System_Collections_Generic_Dictionary_object__object__o *)BasicHelper__GetValue_object_(
                                                                        v21,
                                                                        (System_String_o *)StringLiteral_23600/*"svtBgmChange"*/,
                                                                        (Il2CppObject *)v22,
                                                                        (const MethodInfo_2E27808 *)Method_BasicHelper_GetValue_List_object____);
  if ( !script )
LABEL_21:
    sub_1B64324(script);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)script,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v39 = v38;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    current = v39.fields._current;
    v26 = (SkillLvEntity_SvtChangeBgm_o *)sub_1B64314(SkillLvEntity_SvtChangeBgm_TypeInfo, v23, v24);
    v28 = (Il2CppObject *)v26;
    if ( current )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        sub_1B645E4(current);
LABEL_19:
        sub_1B64324(v30);
      }
    }
    SkillLvEntity_SvtChangeBgm___ctor(v26, (System_Collections_Generic_Dictionary_string__object__o *)current, v27);
    if ( !v17 )
      goto LABEL_19;
    items = v17->fields._items;
    v34 = Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__;
    ++v17->fields._version;
    if ( !items )
      sub_1B64324(v30);
    size = v17->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        v28,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = &items->obj.klass + size;
      v17->fields._size = size + 1;
      v36[4] = (Il2CppClass *)v28;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v28, v31, v32);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v17;
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
  System_Collections_Generic_IEnumerable_T__o *v13; // x1
  struct System_Int32_array *v14; // x8
  SkillLvMaster_o *v15; // x23
  unsigned __int64 v16; // x27
  unsigned __int64 max_length; // x9
  DataVals_o *v18; // x24
  int32_t v19; // w1
  int32_t Param; // w25
  int32_t v21; // w1
  const MethodInfo *v22; // x4
  SkillLvEntity_o *v24; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49FCD77 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_FunctionMaster___, ret);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v7);
    byte_49FCD77 = 1;
  }
  v24 = 0LL;
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
      (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = SkillLvEntity__getDataValsList(this, v10);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FunctionMaster___);
    isAddState = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v14 = this->fields.funcId;
    if ( !v14 )
LABEL_32:
      sub_1B64324(isAddState);
    v15 = (SkillLvMaster_o *)isAddState;
    v16 = 0LL;
    while ( 1 )
    {
      max_length = v14->max_length;
      if ( (__int64)v16 >= (int)max_length )
        break;
      if ( v16 >= max_length )
        goto LABEL_34;
      if ( !Master_object )
        goto LABEL_32;
      isAddState = (System_Collections_Generic_HashSet_int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                  &entity,
                                                                  v14->m_Items[v16 + 1],
                                                                  (const MethodInfo_30D3EF8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)isAddState & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_32;
        isAddState = (System_Collections_Generic_HashSet_int__o *)FuncList__isAddState((int32_t)entity[1].monitor, 0LL);
        if ( ((unsigned __int8)isAddState & 1) != 0 )
        {
          if ( !DataValsList )
            goto LABEL_32;
          if ( v16 >= DataValsList->max_length )
LABEL_34:
            sub_1B6432C(isAddState, v13);
          if ( !entity )
            goto LABEL_32;
          v18 = DataValsList->m_Items[v16];
          if ( !v18 )
            goto LABEL_32;
          DataVals__SetTempType(
            DataValsList->m_Items[v16],
            (FunctionMaster_o *)Master_object,
            (int32_t)entity[1].monitor,
            0LL);
          v19 = DataVals__isParam(v18, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v18, v19, 0, 0LL);
          v21 = DataVals__isParam(v18, 27, 0LL) ? 27 : 4;
          isAddState = (System_Collections_Generic_HashSet_int__o *)DataVals__GetParam(v18, v21, 0, 0LL);
          if ( !v15 )
            goto LABEL_32;
          isAddState = (System_Collections_Generic_HashSet_int__o *)SkillLvMaster__TryGetEntity(
                                                                      v15,
                                                                      &v24,
                                                                      Param,
                                                                      (int32_t)isAddState,
                                                                      v22);
          if ( ((unsigned __int8)isAddState & 1) != 0 )
          {
            if ( !v24 )
              goto LABEL_32;
            v13 = (System_Collections_Generic_IEnumerable_T__o *)v24->fields.funcId;
            if ( v13 )
            {
              isAddState = *ret;
              if ( !*ret )
                goto LABEL_32;
              System_Collections_Generic_HashSet_int___UnionWith(
                isAddState,
                v13,
                (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
            }
          }
        }
      }
      v14 = this->fields.funcId;
      ++v16;
      if ( !v14 )
        goto LABEL_32;
    }
  }
}


int32_t __fastcall SkillLvEntity__GetWarBoardBreakPointDamageType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FCD73 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15510/*"WarBoardBreakPointDamage"*/, method);
    byte_49FCD73 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_15510/*"WarBoardBreakPointDamage"*/, 0, v2);
}


bool __fastcall SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FCD76 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16611/*"additionalSkillInsertCurrentSkillAfter"*/, method);
    byte_49FCD76 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16611/*"additionalSkillInsertCurrentSkillAfter"*/, 0, v2) == 1;
}


bool __fastcall SkillLvEntity__IsAress(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FCD63 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&StringLiteral_16820/*"aress"*/, v3);
    byte_49FCD63 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_16820/*"aress"*/,
                       (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
    sub_1B64324(SetTypeDataValArray);
  max_length = SetTypeDataValArray->max_length;
  v5 = SetTypeDataValArray;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  v7 = 1;
  while ( 1 )
  {
    if ( v6 >= max_length )
      sub_1B6432C(SetTypeDataValArray, v3);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  SkillLvEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  v3 = isCheckHate;
  if ( (byte_49FCD64 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, isCheckHate);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B640C8(&long_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_5903/*"EnableTarget"*/, v7);
    byte_49FCD64 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_5903/*"EnableTarget"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v3;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_5903/*"EnableTarget"*/,
                                                                            (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B64324(Item);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11) == 1;
  sub_1B645E4(Item);
  return (unsigned __int8)SkillLvEntity__GetAddIndiv(v13, v14);
}


bool __fastcall SkillLvEntity__IsIgnoreWhiteFade(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FCD68 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20147/*"ignoreWhiteFade"*/, method);
    byte_49FCD68 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20147/*"ignoreWhiteFade"*/, 0LL);
}


bool __fastcall SkillLvEntity__IsNoTargetSkipSkill(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FCD6D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22010/*"noTargetSkipSkill"*/, method);
    byte_49FCD6D = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_22010/*"noTargetSkipSkill"*/, -1, v2) == 1;
}


bool __fastcall SkillLvEntity__IsRevivalUnder(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FCD62 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&StringLiteral_22829/*"revivalUnder"*/, v3);
    byte_49FCD62 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_22829/*"revivalUnder"*/,
                       (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsRevivalUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FCD61 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&StringLiteral_22830/*"revivalUp"*/, v3);
    byte_49FCD61 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_22830/*"revivalUp"*/,
                       (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsSupportExcluded(
        SkillLvEntity_o *this,
        System_Collections_Generic_Dictionary_string__int__o *vals,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1

  if ( (byte_49FCD5E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, vals);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v4);
    this = (SkillLvEntity_o *)sub_1B640C8(&StringLiteral_2404/*"ApplySupportSvt"*/, v5);
    byte_49FCD5E = 1;
  }
  if ( !vals )
    sub_1B64324(this);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)StringLiteral_2404/*"ApplySupportSvt"*/,
           (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
      && !System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)vals,
            (Il2CppObject *)StringLiteral_2404/*"ApplySupportSvt"*/,
            (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


bool __fastcall SkillLvEntity__IsVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FCD5C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&StringLiteral_15306/*"VoiceVolume"*/, v3);
    byte_49FCD5C = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_15306/*"VoiceVolume"*/,
                       (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  __int64 v8; // x2
  struct System_String_array *v9; // x8
  DataVals_array *v10; // x19
  __int64 v11; // x24
  __int64 v12; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v14; // x26
  System_String_o *v15; // x22
  DataVals_o *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  __int64 v20; // x2
  DataVals_o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v25; // x0

  if ( (byte_49FCD4F & 1) == 0 )
  {
    sub_1B640C8(&DataVals___TypeInfo, method);
    sub_1B640C8(&DataVals_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FCD4F = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v10 = (DataVals_array *)sub_1B64170(DataVals___TypeInfo, 1LL);
    v21 = (DataVals_o *)sub_1B64314(DataVals_TypeInfo, v19, v20);
    DataVals___ctor(v21, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v10 )
    {
      if ( v21 )
      {
        v6 = sub_1B64204(v21, v10->obj.klass->_1.element_class);
        if ( !v6 )
        {
LABEL_21:
          v25 = sub_1B64348(v6);
          sub_1B641F0(v25, 0LL);
        }
      }
      if ( !v10->max_length )
LABEL_20:
        sub_1B6432C(v6, v7);
      v10->m_Items[0] = v21;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)v10->m_Items, (int32_t)v21, v22, v23);
      return v10;
    }
LABEL_13:
    sub_1B64324(v6);
  }
  v6 = sub_1B64170(DataVals___TypeInfo, svals->max_length);
  v9 = this->fields.svals;
  if ( !v9 )
    goto LABEL_13;
  v10 = (DataVals_array *)v6;
  v11 = 4LL;
  v12 = 32LL;
  while ( 1 )
  {
    max_length = v9->max_length;
    v14 = v11 - 4;
    if ( v11 - 4 >= (int)max_length )
      return v10;
    if ( v14 >= max_length )
      goto LABEL_20;
    v15 = (System_String_o *)*((_QWORD *)&v9->obj.klass + v11);
    v16 = (DataVals_o *)sub_1B64314(DataVals_TypeInfo, v7, v8);
    DataVals___ctor(v16, v15, 0LL);
    if ( v10 )
    {
      if ( v16 )
      {
        v6 = sub_1B64204(v16, v10->obj.klass->_1.element_class);
        if ( !v6 )
          goto LABEL_21;
      }
      if ( v14 >= v10->max_length )
        goto LABEL_20;
      *((_QWORD *)&v10->obj.klass + v11) = v16;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v10 + v12), (int32_t)v16, v17, v18);
      v9 = this->fields.svals;
      ++v11;
      v12 += 8LL;
      if ( v9 )
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
  const MethodInfo *v8; // x3
  System_String_o *Detail; // x20

  if ( (byte_49FCD51 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillDetailMaster___, isShort);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&SkillDetailParamFormatResolver_TypeInfo, v6);
    byte_49FCD51 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillDetailMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Detail = SkillDetailMaster__getDetail((SkillDetailMaster_o *)Instance, this->fields.skillDetailId, isShort, v8);
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  return SkillDetailParamFormatResolver__Apply(Detail, this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__getDetail_39520556(
        SkillLvEntity_o *this,
        int32_t lv,
        bool isShort,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x22
  Il2CppObject *v11; // x0
  Il2CppObject *v12; // x21
  System_String_o *Detail; // x0
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FCD52 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&lv);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_8196/*"LEVEL_DETAIL_INFO"*/, v8);
    sub_1B640C8(&StringLiteral_1/*""*/, v9);
    byte_49FCD52 = 1;
  }
  if ( lv <= 0 )
  {
    v12 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8196/*"LEVEL_DETAIL_INFO"*/, 0LL);
    v15 = lv;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    v12 = (Il2CppObject *)System_String__Format(v10, v11, 0LL);
  }
  Detail = SkillLvEntity__getDetail(this, isShort, (const MethodInfo *)isShort);
  return System_String__Format(Detail, v12, 0LL);
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
  System_Collections_Generic_Dictionary_string__int__array *Values; // x26
  __int64 v35; // x1
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
  System_Int32_array *Individuality; // x1
  __int64 *v49; // x8
  bool v51; // [xsp+4h] [xbp-ACh]
  ItemMaster_o *Master_object; // [xsp+8h] [xbp-A8h]
  int32_t v53; // [xsp+14h] [xbp-9Ch]
  unsigned int v54; // [xsp+1Ch] [xbp-94h]
  ServantEntity_o *v55; // [xsp+20h] [xbp-90h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_Dictionary_string__int__o **m_Items; // [xsp+38h] [xbp-78h]
  FunctionGroupEntity_o *v58; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_49FCD57 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_FunctionGroupMaster___, *(_QWORD *)&wearersSvtId);
    sub_1B640C8(&Method_DataManager_GetMaster_FunctionMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v19);
    sub_1B640C8(&DataManager_TypeInfo, v20);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v24);
    sub_1B640C8(&StringLiteral_1476/*"3"*/, v25);
    sub_1B640C8(&StringLiteral_1414/*"2"*/, v26);
    sub_1B640C8(&StringLiteral_13483/*"Target"*/, v27);
    sub_1B640C8(&StringLiteral_1267/*"1"*/, v28);
    sub_1B640C8(&StringLiteral_6155/*"EventId"*/, v29);
    byte_49FCD57 = 1;
  }
  v58 = 0LL;
  entity = 0LL;
  if ( setupInfo && this->fields.funcId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
    v30 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FunctionMaster___);
    v32 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    v53 = wearesLimitCount;
    v54 = wearersSvtId;
    if ( wearersSvtId < 1 )
    {
      v55 = 0LL;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !QuestPhaseIndividualList )
        goto LABEL_87;
      v55 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 QuestPhaseIndividualList,
                                 wearersSvtId,
                                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    v51 = !isOwner;
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
                                                                                 (const MethodInfo_30D3EF8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_86;
      if ( isFuncGroup )
      {
        v39 = this->fields.funcId;
        if ( !v39 )
          goto LABEL_87;
        if ( v37 >= v39->max_length )
LABEL_95:
          sub_1B6432C(QuestPhaseIndividualList, v35);
        if ( !v32 )
          goto LABEL_87;
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)FunctionGroupMaster__TryGetEntity(
                                                                                   (FunctionGroupMaster_o *)v32,
                                                                                   &v58,
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
                                                                                       (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v41,
                                                                                       (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                                                                       (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v41,
                                                                                       (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                                                                       (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList )
            {
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v41,
                                                                                         (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                                                                         (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
            if ( (v54 & 0x80000000) != 0 || !klass->_1.namespaze )
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            if ( v55 )
            {
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality_39322888(
                                                                                         v55,
                                                                                         v53,
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
                                                                                       (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       v41,
                                                                                       (Il2CppObject *)StringLiteral_6155/*"EventId"*/,
                                                                                       (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v41,
                                                                                       (Il2CppObject *)StringLiteral_6155/*"EventId"*/,
                                                                                       (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v41,
                                                                                       (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                                                                       (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (int)QuestPhaseIndividualList >= 1 )
            {
              if ( !v55 )
                goto LABEL_86;
              Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v41,
                       (Il2CppObject *)StringLiteral_1414/*"2"*/,
                       (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality(
                                                                                         v55,
                                                                                         v53,
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
                      (Il2CppObject *)StringLiteral_13483/*"Target"*/,
                      (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                goto LABEL_90;
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v41,
                                                                                         (Il2CppObject *)StringLiteral_13483/*"Target"*/,
                                                                                         (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)QuestPhaseIndividualList != 1 || !v51 )
                goto LABEL_90;
            }
            goto LABEL_86;
          case 113:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37],
                                                                                       (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                                                                       (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v41,
                                                                                       (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                                                                       (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_86;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v41,
                                                                                       (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                                                                       (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
            if ( !v55 )
              goto LABEL_94;
            Individuality = ServantEntity__getIndividuality(v55, v53, wearesDispLimitCount, 0LL);
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
            if ( !Master_object )
              goto LABEL_87;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ItemMaster__GetIndividualityList_39068124(
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
                                                                                       (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
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
                                                                                       (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            v49 = &StringLiteral_1414/*"2"*/;
            goto LABEL_80;
          case 132:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37],
                                                                                       (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                                                                       (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            v49 = &StringLiteral_1476/*"3"*/;
LABEL_80:
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v41,
                                                                                       (Il2CppObject *)*v49,
                                                                                       (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                                                                                     (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
          {
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v41,
                                                                                       (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                                                                       (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                                                                                 (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
      {
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v41,
                                                                                   (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                                                                   (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)v55;
            if ( !v55 )
            {
LABEL_94:
              LODWORD(QuestPhaseIndividualList) = v54 >> 31;
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            }
            if ( entity )
            {
              LOBYTE(QuestPhaseIndividualList) = ServantEntity__IsIndividuality_39322888(
                                                   v55,
                                                   v53,
                                                   wearesDispLimitCount,
                                                   (System_Int32_array *)entity[2].monitor,
                                                   0LL);
              return (unsigned __int8)QuestPhaseIndividualList & 1;
            }
LABEL_87:
            sub_1B64324(QuestPhaseIndividualList);
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


bool __fastcall SkillLvEntity__getEventUpVal_39537972(
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
  const MethodInfo *v41; // x1
  Il2CppObject *v42; // x20
  __int64 v43; // x1
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v46; // x8
  struct System_Int32_array *v47; // x10
  SkillLvEntity_o *v48; // x29
  unsigned __int64 v49; // x11
  EventUpValInfo_o *v50; // x8
  int32_t v51; // w21
  ServantLimitEntity_o *v52; // x19
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v54; // x19
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v56; // x8
  struct EventUpValSetupInfo_o *v57; // x8
  unsigned __int64 chargeTurn; // x8
  System_Collections_Generic_Dictionary_object__int__o *v59; // x28
  int monitor; // w20
  const MethodInfo *v61; // x2
  Il2CppClass *klass; // x3
  Il2CppObject *v63; // x27
  int32_t Item; // w23
  __int64 v65; // x1
  __int64 v66; // x2
  EventUpValInfo_o *v67; // x8
  const MethodInfo *v68; // x2
  struct System_Int32_array *v69; // x8
  EventPointBuffEntity_o *EnableEntity; // x20
  __int64 v71; // x2
  Il2CppClass *v72; // x21
  const char *namespaze; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v74; // x27
  unsigned __int64 v75; // x23
  int32_t lv; // w20
  char v77; // w8
  __int64 v78; // x2
  Il2CppObject *v79; // x23
  EventDropUpValInfo_o *v80; // x20
  int32_t v81; // w1
  EventDropUpValInfo_o *v82; // x0
  bool v83; // w2
  int32_t v84; // w2
  int32_t v85; // w3
  const MethodInfo *v86; // x2
  const MethodInfo *v87; // x7
  EventUpValInfo_o *v88; // x8
  int32_t limitCount; // w20
  int32_t dispLimitCount; // w23
  int32_t v91; // w0
  struct EventUpValSetupInfo_o *v92; // x8
  SkillLvEntity_o *v93; // x2
  SkillEntity_o *v94; // x20
  const MethodInfo *v95; // x1
  SkillLvEntity_o *v96; // x23
  System_Int32_array *ActIndividuality; // x0
  __int64 v98; // x2
  int32_t v99; // w20
  const MethodInfo *v100; // x2
  __int64 v101; // x2
  int32_t v102; // w8
  int32_t v103; // w9
  int32_t v104; // w20
  Il2CppObject *v105; // x23
  EventDropUpValInfo_o *v106; // x27
  int32_t v107; // w2
  int32_t v108; // w3
  __int64 v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  __int64 v112; // x8
  const MethodInfo *v113; // x2
  Il2CppObject *v114; // x23
  int32_t v115; // w27
  __int64 v116; // x1
  __int64 v117; // x2
  int32_t v118; // w1
  EventDropUpValInfo_o *v119; // x0
  bool v120; // w2
  __int64 v121; // x2
  Il2CppObject *v122; // x23
  __int64 v123; // x2
  Il2CppObject *v124; // x23
  EventUpValInfo_o *v125; // x8
  Il2CppObject *v126; // x1
  EventUpValInfo_o *v127; // x8
  Il2CppObject *v128; // x23
  __int64 v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  __int64 v132; // x8
  Il2CppObject *v133; // x23
  EventDropUpValInfo_o *v134; // x27
  int32_t v135; // w2
  int32_t v136; // w3
  __int64 v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  __int64 v140; // x8
  Il2CppObject *v141; // x20
  __int64 v142; // x23
  UserServantEntity_o *HeroineData; // x0
  bool v145; // [xsp+4h] [xbp-ECh]
  int32_t v146; // [xsp+8h] [xbp-E8h]
  bool v147; // [xsp+Ch] [xbp-E4h]
  ServantEntity_o *v148; // [xsp+10h] [xbp-E0h]
  EventPointBuffEntity_o *value; // [xsp+18h] [xbp-D8h]
  SkillLvEntity_o *valuea; // [xsp+18h] [xbp-D8h]
  __int64 valueb; // [xsp+18h] [xbp-D8h]
  char v152; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v153; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v154; // [xsp+20h] [xbp-D0h]
  struct System_Int32_array *v156; // [xsp+30h] [xbp-C0h]
  char v157; // [xsp+3Ch] [xbp-B4h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+40h] [xbp-B0h]
  SkillLvEntity_o *v159; // [xsp+48h] [xbp-A8h]
  unsigned __int64 v160; // [xsp+50h] [xbp-A0h]
  FunctionGroupEntity_o *v164; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-78h] BYREF
  int32_t actMaxRarity; // [xsp+84h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v168; // 0:x0.16

  v10 = this;
  if ( (byte_49FCD58 & 1) == 0 )
  {
    sub_1B640C8(&BuffList_TypeInfo, eventUpVallInfo);
    sub_1B640C8(&Method_DataManager_GetMasterData_BuffMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMaster_EventPointBuffMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMaster_EventQuestMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMaster_FunctionGroupMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMaster_FunctionMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v19);
    sub_1B640C8(&DataManager_TypeInfo, v20);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B640C8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v22);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v23);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v27);
    sub_1B640C8(&EventDropUpValInfo_TypeInfo, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v29);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v32);
    sub_1B640C8(&StringLiteral_1476/*"3"*/, v33);
    sub_1B640C8(&StringLiteral_1414/*"2"*/, v34);
    sub_1B640C8(&StringLiteral_13483/*"Target"*/, v35);
    sub_1B640C8(&StringLiteral_1267/*"1"*/, v36);
    sub_1B640C8(&StringLiteral_6155/*"EventId"*/, v37);
    this = (SkillLvEntity_o *)sub_1B640C8(&StringLiteral_1213/*"0"*/, v38);
    byte_49FCD58 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  v164 = 0LL;
  entity = 0LL;
  if ( !*eventUpVallInfo )
    goto LABEL_273;
  if ( !(*eventUpVallInfo)->fields.setupInfo || !v10->fields.funcId )
    goto LABEL_271;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FunctionMaster___);
  v40 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !*eventUpVallInfo )
    goto LABEL_273;
  v159 = this;
  if ( (*eventUpVallInfo)->fields.svtId < 1 )
  {
    v42 = 0LL;
    goto LABEL_16;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !*eventUpVallInfo || !this )
LABEL_273:
    sub_1B64324(this);
  v42 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          (*eventUpVallInfo)->fields.svtId,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
LABEL_16:
  this = (SkillLvEntity_o *)SkillLvEntity__getValues(v10, v41);
  if ( !*eventUpVallInfo )
    goto LABEL_273;
  setupInfo = (*eventUpVallInfo)->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_273;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_273;
  v156 = eventIdList;
  v46 = *(_QWORD *)&eventIdList->max_length;
  if ( (int)v46 >= 1 )
  {
    v148 = (ServantEntity_o *)v42;
    v145 = isOwner;
    v152 = 0;
    v147 = v42 == 0LL || isEquipOnly;
    v47 = v156;
    v48 = this;
    v49 = 0LL;
    while ( 1 )
    {
      if ( v49 >= (unsigned int)v46 )
LABEL_274:
        sub_1B6432C(this, v43);
      v50 = *eventUpVallInfo;
      if ( !*eventUpVallInfo )
        goto LABEL_273;
      v51 = v47->m_Items[v49 + 1];
      v160 = v49;
      if ( v50->fields.equipSvtId < 1 )
      {
        v157 = 0;
      }
      else
      {
        this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_273;
        this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        if ( !*eventUpVallInfo )
          goto LABEL_273;
        if ( !this )
          goto LABEL_273;
        v52 = ServantLimitMaster__GetEntity(
                (ServantLimitMaster_o *)this,
                (*eventUpVallInfo)->fields.svtId,
                (*eventUpVallInfo)->fields.limitCount,
                0LL);
        this = (SkillLvEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !*eventUpVallInfo )
          goto LABEL_273;
        if ( !v52 )
          goto LABEL_273;
        if ( !this )
          goto LABEL_273;
        this = (SkillLvEntity_o *)PartyOrganizationUtility__IsRarityRestriction(
                                    (PartyOrganizationUtility_o *)this,
                                    &skillName,
                                    &actMaxRarity,
                                    (*eventUpVallInfo)->fields.svtId,
                                    v52->fields.rarity,
                                    (*eventUpVallInfo)->fields.equipSvtId,
                                    v51,
                                    0LL);
        v157 = (char)this;
        v50 = *eventUpVallInfo;
        if ( !*eventUpVallInfo )
          goto LABEL_273;
      }
      this = (SkillLvEntity_o *)v50->fields.setupInfo;
      if ( !this )
        goto LABEL_273;
      this = (SkillLvEntity_o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                  (EventUpValSetupInfo_o *)this,
                                  v51,
                                  0LL);
      funcId = v10->fields.funcId;
      questPhaseIndividualityList = (System_Int32_array *)this;
      if ( !funcId )
        goto LABEL_273;
      v54 = 0LL;
      while ( 1 )
      {
        max_length = funcId->max_length;
        if ( (__int64)v54 >= (int)max_length )
          break;
        if ( v54 >= max_length )
          goto LABEL_274;
        if ( !Master_object )
          goto LABEL_273;
        this = (SkillLvEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    funcId->m_Items[v54 + 1],
                                    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_259;
        if ( isFuncGroup )
        {
          v56 = v10->fields.funcId;
          if ( !v56 )
            goto LABEL_273;
          if ( v54 >= v56->max_length )
            goto LABEL_274;
          if ( !v40 )
            goto LABEL_273;
          this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(
                                      (FunctionGroupMaster_o *)v40,
                                      &v164,
                                      v56->m_Items[v54 + 1],
                                      v51,
                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_259;
          this = (SkillLvEntity_o *)v164;
          if ( !v164 )
            goto LABEL_273;
          this = (SkillLvEntity_o *)FunctionGroupEntity__GetCheckEventQuest(v164, 0LL);
          if ( (_DWORD)this == 1 )
          {
            if ( !*eventUpVallInfo )
              goto LABEL_273;
            v57 = (*eventUpVallInfo)->fields.setupInfo;
            this = v159;
            if ( !v57 || !v159 )
              goto LABEL_273;
            this = (SkillLvEntity_o *)EventQuestMaster__IsEventNotIncluded(
                                        (EventQuestMaster_o *)v159,
                                        v51,
                                        v57->fields.questId,
                                        v57->fields.questPhase,
                                        12,
                                        nowTime,
                                        0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_259;
          }
        }
        if ( !v48 )
          goto LABEL_273;
        chargeTurn = (unsigned int)v48->fields.chargeTurn;
        if ( (__int64)v54 >= (int)chargeTurn )
          goto LABEL_259;
        if ( v54 >= chargeTurn )
          goto LABEL_274;
        v59 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&v48->fields.funcId + v54);
        if ( !v59 )
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
                                          v59,
                                          (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                          (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                          (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v51 != (_DWORD)this )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                          (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v59,
                                            (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                            (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_259;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v59,
                                            v61);
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
              if ( !v148 )
                goto LABEL_259;
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_39322888(
                                          v148,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          (System_Int32_array *)klass,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
LABEL_75:
              v63 = entity;
              Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v59,
                       (Il2CppObject *)StringLiteral_1213/*"0"*/,
                       (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v153 = (EventDropUpValInfo_o *)sub_1B64314(EventDropUpValInfo_TypeInfo, v65, v66);
              EventDropUpValInfo___ctor_38572316(v153, v51, (FunctionEntity_o *)v63, Item, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v59,
                     (Il2CppObject *)StringLiteral_1267/*"1"*/,
                     (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v59,
                                            (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                            (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v67 = *eventUpVallInfo;
                if ( !*eventUpVallInfo )
                  goto LABEL_273;
LABEL_122:
                v80 = v153;
                if ( !v153 )
                  goto LABEL_273;
                v81 = (int)this;
                v82 = v153;
                v83 = v67->fields.equipSvtId > 0;
LABEL_124:
                EventDropUpValInfo__SetAddCount(v82, v81, v83, v157 & 1, 0LL);
                goto LABEL_234;
              }
LABEL_222:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                          (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v80 = v153;
              if ( (_DWORD)this != 2 )
                goto LABEL_234;
              v126 = (Il2CppObject *)StringLiteral_1414/*"2"*/;
LABEL_224:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          v126,
                                          (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v127 = *eventUpVallInfo;
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
                                          v59,
                                          (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                          (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v59,
                                          (Il2CppObject *)StringLiteral_6155/*"EventId"*/,
                                          (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_6155/*"EventId"*/,
                                          (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v51 != (_DWORD)this )
                goto LABEL_259;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v59,
                                            v86);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_259;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                          (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (int)this < 1 )
                goto LABEL_134;
              if ( !v148 )
                goto LABEL_259;
              v88 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              limitCount = v88->fields.limitCount;
              dispLimitCount = v88->fields.dispLimitCount;
              v91 = System_Collections_Generic_Dictionary_object__int___get_Item(
                      v59,
                      (Il2CppObject *)StringLiteral_1414/*"2"*/,
                      (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality(v148, limitCount, dispLimitCount, v91, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
LABEL_134:
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              v92 = (*eventUpVallInfo)->fields.setupInfo;
              if ( !v92 )
                goto LABEL_273;
              if ( !entity )
                goto LABEL_273;
              this = (SkillLvEntity_o *)SkillLvEntity__GetEventIndividuality(
                                          v10,
                                          v54,
                                          v51,
                                          v92->fields.questId,
                                          (System_Int32_array *)entity[5].klass,
                                          (FunctionMaster_o *)Master_object,
                                          (FunctionGroupMaster_o *)v40,
                                          v87);
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              v93 = this;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)v93,
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
              this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
              if ( !this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          v10->fields.skillId,
                                          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              v94 = (SkillEntity_o *)this;
              this = (SkillLvEntity_o *)v148;
              if ( !v148 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v148,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              if ( !v94 )
                goto LABEL_273;
              v96 = this;
              ActIndividuality = SkillEntity__getActIndividuality(v94, v95);
              this = (SkillLvEntity_o *)Individuality__CheckIndividualities(
                                          (System_Int32_array *)v96,
                                          ActIndividuality,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)ServantEntity__checkIsHeroineSvt(v148, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_152;
              if ( !entity )
                goto LABEL_273;
              if ( HIDWORD(entity[1].monitor) )
                goto LABEL_152;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v141 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
              v142 = *(_QWORD *)&v148->fields.id.fields.currentCryptoKey;
              *(_QWORD *)&v168.fields.fakeValue = *(_QWORD *)&v148->fields.id.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                valueb = *(_QWORD *)&v148->fields.id.fields.fakeValue;
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v168.fields.fakeValue = valueb;
              }
              *(_QWORD *)&v168.fields.currentCryptoKey = v142;
              this = (SkillLvEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v168, 0LL);
              if ( !v141 )
                goto LABEL_273;
              HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v141, (int32_t)this, 0LL);
              if ( HeroineData )
              {
                this = (SkillLvEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_259;
              }
LABEL_152:
              if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                     v59,
                     (Il2CppObject *)StringLiteral_13483/*"Target"*/,
                     (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v59,
                                            (Il2CppObject *)StringLiteral_13483/*"Target"*/,
                                            (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v99 = (int)this;
                if ( (_DWORD)this == 1 && !v145 )
                  goto LABEL_259;
              }
              else
              {
                v99 = 0;
              }
              v133 = entity;
              v134 = (EventDropUpValInfo_o *)sub_1B64314(EventDropUpValInfo_TypeInfo, v43, v98);
              EventDropUpValInfo___ctor_38572316(v134, v51, (FunctionEntity_o *)v133, v99, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v59,
                     (Il2CppObject *)StringLiteral_1213/*"0"*/,
                     (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v59,
                                            (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                            (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo || !v134 )
                  goto LABEL_273;
                EventDropUpValInfo__SetAddCount(
                  v134,
                  (int32_t)this,
                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                  v157 & 1,
                  0LL);
              }
              else
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v59,
                                            (Il2CppObject *)StringLiteral_1213/*"0"*/,
                                            (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( (_DWORD)this == 2 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v59,
                                              (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                              (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v134 )
                    goto LABEL_273;
                  EventDropUpValInfo__SetRateCount(
                    v134,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v157 & 1,
                    0LL);
                }
              }
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
              if ( !this )
                goto LABEL_273;
              v137 = *(_QWORD *)&this->fields.skillId;
              v138 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
              ++this->fields.priority;
              if ( !v137 )
                goto LABEL_273;
              v139 = this->fields.chargeTurn;
              if ( (unsigned int)v139 >= *(_DWORD *)(v137 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v134,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
              }
              else
              {
                v140 = v137 + 8 * v139;
                this->fields.chargeTurn = v139 + 1;
                *(_QWORD *)(v140 + 32) = v134;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v140 + 32), (int32_t)v134, v135, v136);
              }
              v152 = 1;
              goto LABEL_259;
            case 113:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                          (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                          (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v51 != (_DWORD)this )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1213/*"0"*/,
                                          (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v59,
                                            (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                            (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_259;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v59,
                                            v100);
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
              v152 |= (unsigned __int8)this;
              if ( !v148 || ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v148,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              actMaxRarity = 0;
              if ( !this )
                goto LABEL_273;
              v102 = this->fields.chargeTurn;
              if ( v102 < 1 )
                goto LABEL_240;
              v103 = 0;
              valuea = this;
              while ( v103 < (unsigned int)v102 )
              {
                v104 = *((_DWORD *)&this->fields.funcId + v103);
                v105 = entity;
                v106 = (EventDropUpValInfo_o *)sub_1B64314(EventDropUpValInfo_TypeInfo, v43, v101);
                EventDropUpValInfo___ctor_38572316(v106, v51, (FunctionEntity_o *)v105, v104, 0LL);
                if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                       v59,
                       (Il2CppObject *)StringLiteral_1213/*"0"*/,
                       (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v59,
                                              (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                              (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v106 )
                    goto LABEL_273;
                  EventDropUpValInfo__SetAddCount(
                    v106,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v157 & 1,
                    0LL);
                }
                else
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v59,
                                              (Il2CppObject *)StringLiteral_1213/*"0"*/,
                                              (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( (_DWORD)this == 2 )
                  {
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v59,
                                                (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                                (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v106 )
                      goto LABEL_273;
                    EventDropUpValInfo__SetRateCount(
                      v106,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v157 & 1,
                      0LL);
                  }
                }
                if ( !*eventUpVallInfo )
                  goto LABEL_273;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
                if ( !this )
                  goto LABEL_273;
                v109 = *(_QWORD *)&this->fields.skillId;
                v110 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                ++this->fields.priority;
                if ( !v109 )
                  goto LABEL_273;
                v111 = this->fields.chargeTurn;
                if ( (unsigned int)v111 >= *(_DWORD *)(v109 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v106,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
                }
                else
                {
                  v112 = v109 + 8 * v111;
                  this->fields.chargeTurn = v111 + 1;
                  *(_QWORD *)(v112 + 32) = v106;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v112 + 32), (int32_t)v106, v107, v108);
                }
                this = valuea;
                v152 = 1;
                v103 = actMaxRarity + 1;
                actMaxRarity = v103;
                v102 = valuea->fields.chargeTurn;
                if ( v103 >= v102 )
                  goto LABEL_259;
              }
              goto LABEL_274;
            case 116:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                          (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v59,
                                            v113);
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
              v114 = entity;
              v115 = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v59,
                       (Il2CppObject *)StringLiteral_1213/*"0"*/,
                       (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v80 = (EventDropUpValInfo_o *)sub_1B64314(EventDropUpValInfo_TypeInfo, v116, v117);
              EventDropUpValInfo___ctor_38572316(v80, v51, (FunctionEntity_o *)v114, v115, 0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                          (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo || !v80 )
                goto LABEL_273;
              v118 = (int)this;
              v119 = v80;
              v120 = (*eventUpVallInfo)->fields.equipSvtId > 0;
              goto LABEL_218;
            case 129:
              if ( isSupport )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                          (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                          (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v51 != (_DWORD)this )
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
              v122 = entity;
              v154 = (EventDropUpValInfo_o *)sub_1B64314(EventDropUpValInfo_TypeInfo, v43, v121);
              EventDropUpValInfo___ctor(v154, v51, (FunctionEntity_o *)v122, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v59,
                     (Il2CppObject *)StringLiteral_1213/*"0"*/,
                     (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v59,
                                            (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                            (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo )
                  goto LABEL_273;
                v80 = v154;
                if ( !v154 )
                  goto LABEL_273;
                v81 = (int)this;
                v82 = v154;
                v83 = (*eventUpVallInfo)->fields.equipSvtId > 0;
                goto LABEL_124;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1213/*"0"*/,
                                          (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v80 = v154;
              if ( (_DWORD)this != 2 )
                goto LABEL_234;
              v126 = (Il2CppObject *)StringLiteral_1267/*"1"*/;
              goto LABEL_224;
            default:
              if ( monitor != 132 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                          (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_259;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                          (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v51 != (_DWORD)this )
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
              v79 = entity;
              v153 = (EventDropUpValInfo_o *)sub_1B64314(EventDropUpValInfo_TypeInfo, v43, v78);
              EventDropUpValInfo___ctor(v153, v51, (FunctionEntity_o *)v79, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v59,
                     (Il2CppObject *)StringLiteral_1267/*"1"*/,
                     (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 1 )
                goto LABEL_222;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1414/*"2"*/,
                                          (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v67 = *eventUpVallInfo;
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
                                      v59,
                                      (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                      (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !isSupport
              || (this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                              this,
                                              (System_Collections_Generic_Dictionary_string__int__o *)v59,
                                              v68),
                  ((unsigned __int8)this & 1) == 0) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
              v69 = v10->fields.funcId;
              if ( !v69 )
                goto LABEL_273;
              if ( v54 >= v69->max_length )
                goto LABEL_274;
              if ( !this )
                goto LABEL_273;
              EnableEntity = EventPointBuffMaster__GetEnableEntity(
                               (EventPointBuffMaster_o *)this,
                               v51,
                               v69->m_Items[v54 + 1],
                               0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                          (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                  if ( v147 )
                    goto LABEL_99;
                  if ( !*eventUpVallInfo || !entity )
                    goto LABEL_273;
                  this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_39322888(
                                              v148,
                                              (*eventUpVallInfo)->fields.limitCount,
                                              (*eventUpVallInfo)->fields.dispLimitCount,
                                              (System_Int32_array *)entity[2].monitor,
                                              0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_99:
                    this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !this )
                      goto LABEL_273;
                    v146 = v51;
                    this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BuffMaster___);
                    if ( !entity )
                      goto LABEL_273;
                    v72 = entity[2].klass;
                    if ( !v72 )
                      goto LABEL_273;
                    namespaze = v72->_1.namespaze;
                    if ( (int)namespaze < 1 )
                    {
                      v77 = 0;
                    }
                    else
                    {
                      v74 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
                      v75 = 0LL;
                      while ( 1 )
                      {
                        if ( v75 >= (unsigned int)namespaze )
                          goto LABEL_274;
                        if ( !v74 )
                          goto LABEL_273;
                        this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                    v74,
                                                    *((_DWORD *)&v72->_1.byval_arg.data + v75),
                                                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                        if ( !this )
                          goto LABEL_273;
                        lv = this->fields.lv;
                        if ( !BuffList_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
                        this = (SkillLvEntity_o *)BuffList__isSpHit(lv, 0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          break;
                        LODWORD(namespaze) = v72->_1.namespaze;
                        if ( (__int64)++v75 >= (int)namespaze )
                        {
                          v77 = 0;
                          goto LABEL_227;
                        }
                      }
                      v77 = 1;
LABEL_227:
                      EnableEntity = value;
                    }
                    v51 = v146;
                    if ( ((unsigned __int8)v77 & (EnableEntity != 0LL)) != 0 )
                    {
                      this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                  v59,
                                                  (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                                  (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( !EnableEntity )
                        goto LABEL_273;
                      System_Collections_Generic_Dictionary_object__int___set_Item(
                        v59,
                        (Il2CppObject *)StringLiteral_1476/*"3"*/,
                        EnableEntity->fields.value + (_DWORD)this,
                        (const MethodInfo_317069C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
                    }
                    v128 = entity;
                    v80 = (EventDropUpValInfo_o *)sub_1B64314(EventDropUpValInfo_TypeInfo, v43, v71);
                    EventDropUpValInfo___ctor(v80, v146, (FunctionEntity_o *)v128, 0LL);
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v59,
                                                (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                                (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    v127 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo )
                      goto LABEL_273;
LABEL_232:
                    if ( !v80 )
                      goto LABEL_273;
                    EventDropUpValInfo__SetRateCount(v80, (int32_t)this, v127->fields.equipSvtId > 0, v157 & 1, 0LL);
LABEL_234:
                    v125 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo )
                      goto LABEL_273;
LABEL_235:
                    this = (SkillLvEntity_o *)v125->fields.dropList;
                    if ( !this )
                      goto LABEL_273;
                    v129 = *(_QWORD *)&this->fields.skillId;
                    v130 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                    ++this->fields.priority;
                    if ( !v129 )
                      goto LABEL_273;
                    v131 = this->fields.chargeTurn;
                    if ( (unsigned int)v131 >= *(_DWORD *)(v129 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)this,
                        (Il2CppObject *)v80,
                        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v132 = v129 + 8 * v131;
                      this->fields.chargeTurn = v131 + 1;
                      *(_QWORD *)(v132 + 32) = v80;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v132 + 32), (int32_t)v80, v84, v85);
                    }
LABEL_240:
                    v152 = 1;
                    goto LABEL_259;
                  }
                }
              }
            }
          }
          goto LABEL_259;
        }
        this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                    v59,
                                    (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                    (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                      v59,
                                      (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                      (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
              v124 = entity;
              v80 = (EventDropUpValInfo_o *)sub_1B64314(EventDropUpValInfo_TypeInfo, v43, v123);
              EventDropUpValInfo___ctor(v80, v51, (FunctionEntity_o *)v124, 0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                          (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo || !v80 )
                goto LABEL_273;
              v118 = (int)this;
              v119 = v80;
              v120 = (*eventUpVallInfo)->fields.equipSvtId > 0;
LABEL_218:
              EventDropUpValInfo__SetRateCount(v119, v118, v120, v157 & 1, 0LL);
              v125 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_273;
              goto LABEL_235;
            }
          }
        }
LABEL_259:
        funcId = v10->fields.funcId;
        ++v54;
        if ( !funcId )
          goto LABEL_273;
      }
      v47 = v156;
      LODWORD(v46) = v156->max_length;
      v49 = v160 + 1;
      if ( (__int64)(v160 + 1) >= (int)v46 )
        return v152 & 1;
    }
  }
LABEL_271:
  v152 = 0;
  return v152 & 1;
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

  if ( (byte_49FCD55 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FCD55 = 1;
  }
  entity = 0LL;
  if ( this->fields.funcId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_FunctionMaster___),
          (funcId = this->fields.funcId) == 0LL) )
    {
LABEL_15:
      sub_1B64324(Instance);
    }
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v9 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v9 >= (int)max_length )
        break;
      if ( v9 >= max_length )
        sub_1B6432C(Instance, v6);
      if ( !v8 )
        goto LABEL_15;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v8,
                                   &entity,
                                   funcId->m_Items[v9 + 1],
                                   (const MethodInfo_30D3EF8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  struct System_Int32_array *funcId; // x8
  System_Collections_Generic_Dictionary_string__int__array *v13; // x20
  unsigned __int64 v14; // x22
  unsigned __int64 max_length; // x9
  int monitor; // w8
  int v17; // w8
  System_Collections_Generic_Dictionary_object__int__o *v18; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FCD54 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_1213/*"0"*/, v7);
    byte_49FCD54 = 1;
  }
  entity = 0LL;
  if ( !this->fields.funcId )
    return 0;
  Instance = (System_Collections_Generic_Dictionary_string__int__array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_FunctionMaster___);
  Instance = SkillLvEntity__getValues(this, v10);
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
                                                                             (const MethodInfo_30D3EF8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
    sub_1B64324(Instance);
  v17 = v13->max_length;
  if ( (int)v14 >= v17 )
    return 0;
  if ( (unsigned int)v14 >= v17 )
LABEL_24:
    sub_1B6432C(Instance, v11);
  v18 = (System_Collections_Generic_Dictionary_object__int__o *)v13->m_Items[v14];
  if ( v18
    && System_Collections_Generic_Dictionary_object__int___ContainsKey(
         v18,
         (Il2CppObject *)StringLiteral_1213/*"0"*/,
         (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_object__int___get_Item(
             v18,
             (Il2CppObject *)StringLiteral_1213/*"0"*/,
             (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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

  if ( (byte_49FCD53 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FCD53 = 1;
  }
  funcId = this->fields.funcId;
  if ( funcId && *(_QWORD *)&funcId->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_FunctionMaster___),
          (v8 = this->fields.funcId) == 0LL) )
    {
LABEL_13:
      sub_1B64324(Instance);
    }
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v10 = 0LL;
    while ( 1 )
    {
      max_length = v8->max_length;
      if ( (__int64)v10 >= (int)max_length )
        break;
      if ( v10 >= max_length )
        sub_1B6432C(Instance, method);
      if ( !v9 )
        goto LABEL_13;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v9,
                   v8->m_Items[v10 + 1],
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
  if ( !byte_49F7D6A )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    byte_49F7D6A = 1;
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  SkillLvEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_49FCD60 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B640C8(&long_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_18593/*"down"*/, v5);
    byte_49FCD60 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_18593/*"down"*/,
           (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_18593/*"down"*/,
                                                                                (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B64324(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v8, v9);
      }
      else
      {
        sub_1B645E4(Item);
        LODWORD(script) = SkillLvEntity__IsRevivalUp(v10, v11);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  SkillLvEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_49FCD5F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B640C8(&long_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_24204/*"up"*/, v5);
    byte_49FCD5F = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_24204/*"up"*/,
           (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_24204/*"up"*/,
                                                                                (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B64324(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v8, v9);
      }
      else
      {
        sub_1B645E4(Item);
        LODWORD(script) = SkillLvEntity__getMovePositionDown(v10, v11);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FCD5A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B640C8(&string_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_10619/*"PlayVoiceNo"*/, v5);
    byte_49FCD5A = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_10619/*"PlayVoiceNo"*/,
            (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1B64324(0LL);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_10619/*"PlayVoiceNo"*/,
                                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1B645E4(result);
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
  __int64 v16; // x1
  __int64 v17; // x2
  int v18; // w29
  __int64 v19; // x22
  System_Collections_Generic_Dictionary_object__int__o *v20; // x24
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppClass **v23; // x23
  ServantStatusBattleListViewItem_o *v24; // x23
  int32_t v25; // w8
  System_String_o *v26; // x24
  ServantStatusBattleListViewItem_c *v27; // x24
  int32_t v28; // w2
  const MethodInfo_317069C *v29; // x3
  Il2CppObject *v30; // x1
  __int64 v31; // x24
  __int64 v33; // x0
  int32_t result[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FCD4E & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__int____TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v8);
    byte_49FCD4E = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = this->fields.svals;
  if ( !svals )
    return (System_Collections_Generic_Dictionary_string__int__array *)sub_1B64170(
                                                                         System_Collections_Generic_Dictionary_string__int____TypeInfo,
                                                                         1LL);
  max_length = svals->max_length;
  klass = sub_1B64170(System_Collections_Generic_Dictionary_string__int____TypeInfo, (unsigned int)max_length);
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
        || (klass = (__int64)System_String__Replace_61395016(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_15744/*"["*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0LL)) == 0
        || (klass = (__int64)System_String__Replace_61395016(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_16000/*"]"*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0LL)) == 0
        || (klass = (__int64)System_String__Split((System_String_o *)klass, 0x2Cu, 0, 0LL)) == 0
        || (v18 = *(_DWORD *)(klass + 24),
            v19 = klass,
            v20 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B64314(
                                                                            System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                            v16,
                                                                            v17),
            System_Collections_Generic_Dictionary_object__int____ctor(
              v20,
              (const MethodInfo_316FCFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__),
            !v13) )
      {
LABEL_37:
        sub_1B64324(klass);
      }
      if ( v20 )
      {
        klass = sub_1B64204(v20, v13->obj.klass->_1.element_class);
        if ( !klass )
        {
          v33 = sub_1B64348(0LL);
          sub_1B641F0(v33, 0LL);
        }
      }
      if ( v14 >= v13->max_length )
LABEL_38:
        sub_1B6432C(klass, v12);
      v23 = &v13->obj.klass + (int)v14;
      v23[4] = (Il2CppClass *)v20;
      v24 = (ServantStatusBattleListViewItem_o *)(v23 + 4);
      sub_1B6406C(v24, (int32_t)v20, v21, v22);
      result[1] = 0;
      if ( v18 >= 1 )
        break;
LABEL_33:
      if ( ++v14 == max_length )
        return v13;
    }
    v25 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v25 >= *(_DWORD *)(v19 + 24) )
        goto LABEL_38;
      v26 = *(System_String_o **)(v19 + 8LL * v25 + 32);
      klass = System_Int32__TryParse(v26, result, 0LL);
      if ( (klass & 1) != 0 )
        break;
      if ( !v26 )
        goto LABEL_37;
      klass = (__int64)System_String__Split(v26, 0x3Au, 0, 0LL);
      if ( !klass )
        goto LABEL_37;
      v31 = klass;
      if ( *(int *)(klass + 24) >= 2 )
      {
        klass = System_Int32__TryParse(*(System_String_o **)(klass + 40), result, 0LL);
        if ( (klass & 1) != 0 )
        {
          if ( v14 >= v13->max_length || !*(_DWORD *)(v31 + 24) )
            goto LABEL_38;
          klass = (__int64)v24->klass;
          if ( !v24->klass )
            goto LABEL_37;
          v28 = result[0];
          v30 = *(Il2CppObject **)(v31 + 32);
          v29 = (const MethodInfo_317069C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
LABEL_23:
          System_Collections_Generic_Dictionary_object__int___set_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)klass,
            v30,
            v28,
            v29);
        }
      }
      v25 = ++result[1];
      if ( result[1] >= v18 )
        goto LABEL_33;
    }
    if ( v14 >= v13->max_length )
      goto LABEL_38;
    v27 = v24->klass;
    klass = (__int64)System_Int32__ToString((int32_t)&result[1], 0LL);
    if ( !v27 )
      goto LABEL_37;
    v28 = result[0];
    v29 = (const MethodInfo_317069C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
    v30 = (Il2CppObject *)klass;
    klass = (__int64)v27;
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FCD59 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B640C8(&string_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_15304/*"VoiceAssetName"*/, v5);
    byte_49FCD59 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_15304/*"VoiceAssetName"*/,
            (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1B64324(0LL);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_15304/*"VoiceAssetName"*/,
                                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1B645E4(result);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  float result; // s0
  SkillLvEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_49FCD5D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B640C8(&long_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_15306/*"VoiceVolume"*/, v5);
    byte_49FCD5D = 1;
  }
  script = this->fields.script;
  v7 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_15306/*"VoiceVolume"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v7;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_15306/*"VoiceVolume"*/,
                                                                            (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B64324(Item);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10) / 1000.0;
  sub_1B645E4(Item);
  SkillLvEntity__getMovePositionUp(v12, v13);
  return result;
}


bool __fastcall SkillLvEntity__isPlayVoiceWait(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FCD5B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&StringLiteral_10620/*"PlayVoiceWait"*/, v3);
    byte_49FCD5B = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_10620/*"PlayVoiceWait"*/,
                       (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x2
  __int64 v21; // x3
  SkillLvEntity_o *v22; // x0
  System_String_o *v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_49FCD78 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, obj);
    sub_1B640C8(&long_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_16641/*"afterClearBgmId"*/, v6);
    sub_1B640C8(&StringLiteral_20563/*"indv"*/, v7);
    sub_1B640C8(&StringLiteral_17089/*"beforeClearBgmId"*/, v8);
    sub_1B640C8(&StringLiteral_22600/*"questPhase"*/, v9);
    sub_1B640C8(&StringLiteral_22598/*"questId"*/, v10);
    byte_49FCD78 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !obj )
    goto LABEL_15;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_20563/*"indv"*/,
           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.svtIndv = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_22598/*"questId"*/,
           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v14, v15);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_22600/*"questPhase"*/,
           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questPhase = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v16, v17);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_17089/*"beforeClearBgmId"*/,
           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.beforeClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v18, v19);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_16641/*"afterClearBgmId"*/,
           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_15:
    sub_1B64324(Item);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    this->fields.afterClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v20, v21);
    return;
  }
LABEL_16:
  sub_1B645E4(Item);
  SkillLvEntity__GetScriptIntParam(v22, v23, v24, v25);
}


void __fastcall SkillLvEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCD79 & 1) == 0 )
  {
    sub_1B640C8(&SkillLvEntity___c_TypeInfo, v1);
    byte_49FCD79 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SkillLvEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SkillLvEntity___c_TypeInfo->static_fields->__9 = (struct SkillLvEntity___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)SkillLvEntity___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
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
  if ( (byte_49FCD7A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Nullable_int___ctor__, x);
    byte_49FCD7A = 1;
  }
  v6 = (System_Nullable_int__o)&v5;
  v5 = 0LL;
  System_Nullable_int____ctor(v6, v3 - 1, (const MethodInfo_35CDD88 *)Method_System_Nullable_int___ctor__);
  return v5;
}