void __fastcall ServantEntity___ctor(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B028E7 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_int___ctor__, method);
    byte_4B028E7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32ACB8C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantEntity__CreatePrimaryKey(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4B028A9 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B028A9 = 1;
  }
  v4 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v6, 0LL);
}


System_String_o *__fastcall ServantEntity__GetAddCardIdsKey(int32_t commandType, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 *static_fields; // x8

  if ( (byte_4B028E4 & 1) == 0 )
  {
    sub_1BC3008(&BattleCommand_TypeInfo, method);
    sub_1BC3008(&string_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_2140/*"AddQuickCardIds"*/, v4);
    sub_1BC3008(&StringLiteral_2146/*"AddWeakCardIds"*/, v5);
    sub_1BC3008(&StringLiteral_2130/*"AddArtsCardIds"*/, v6);
    sub_1BC3008(&StringLiteral_2132/*"AddBusterCardIds"*/, v7);
    sub_1BC3008(&StringLiteral_2143/*"AddStrengthCardIds"*/, v8);
    byte_4B028E4 = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( BattleCommand__isARTS(commandType, 0LL) )
  {
    static_fields = &StringLiteral_2130/*"AddArtsCardIds"*/;
  }
  else
  {
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    if ( BattleCommand__isBUSTER(commandType, 0LL) )
    {
      static_fields = &StringLiteral_2132/*"AddBusterCardIds"*/;
    }
    else
    {
      if ( !BattleCommand_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
      if ( BattleCommand__isQUICK(commandType, 0LL) )
      {
        static_fields = &StringLiteral_2140/*"AddQuickCardIds"*/;
      }
      else
      {
        if ( !BattleCommand_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
        if ( BattleCommand__IsWEAK(commandType, 0LL) )
        {
          static_fields = &StringLiteral_2146/*"AddWeakCardIds"*/;
        }
        else
        {
          if ( !BattleCommand_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
          if ( BattleCommand__IsSTRENGTH(commandType, 0LL) )
            static_fields = &StringLiteral_2143/*"AddStrengthCardIds"*/;
          else
            static_fields = (__int64 *)string_TypeInfo->static_fields;
        }
      }
    }
  }
  return (System_String_o *)*static_fields;
}


System_String_o *__fastcall ServantEntity__GetAddCardWeightsKey(int32_t commandType, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 *static_fields; // x8

  if ( (byte_4B028E5 & 1) == 0 )
  {
    sub_1BC3008(&BattleCommand_TypeInfo, method);
    sub_1BC3008(&string_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_2131/*"AddArtsCardWeights"*/, v4);
    sub_1BC3008(&StringLiteral_2133/*"AddBusterCardWeights"*/, v5);
    sub_1BC3008(&StringLiteral_2147/*"AddWeakCardWeights"*/, v6);
    sub_1BC3008(&StringLiteral_2141/*"AddQuickCardWeights"*/, v7);
    sub_1BC3008(&StringLiteral_2144/*"AddStrengthCardWeights"*/, v8);
    byte_4B028E5 = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( BattleCommand__isARTS(commandType, 0LL) )
  {
    static_fields = &StringLiteral_2131/*"AddArtsCardWeights"*/;
  }
  else
  {
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    if ( BattleCommand__isBUSTER(commandType, 0LL) )
    {
      static_fields = &StringLiteral_2133/*"AddBusterCardWeights"*/;
    }
    else
    {
      if ( !BattleCommand_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
      if ( BattleCommand__isQUICK(commandType, 0LL) )
      {
        static_fields = &StringLiteral_2141/*"AddQuickCardWeights"*/;
      }
      else
      {
        if ( !BattleCommand_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
        if ( BattleCommand__IsWEAK(commandType, 0LL) )
        {
          static_fields = &StringLiteral_2147/*"AddWeakCardWeights"*/;
        }
        else
        {
          if ( !BattleCommand_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
          if ( BattleCommand__IsSTRENGTH(commandType, 0LL) )
            static_fields = &StringLiteral_2144/*"AddStrengthCardWeights"*/;
          else
            static_fields = (__int64 *)string_TypeInfo->static_fields;
        }
      }
    }
  }
  return (System_String_o *)*static_fields;
}


System_Int32_array *__fastcall ServantEntity__GetAssumedEffectId(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B028DA & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_16772/*"assumedEffectId"*/, method);
    byte_4B028DA = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16772/*"assumedEffectId"*/, 0LL);
}


System_Int32_array *__fastcall ServantEntity__GetCategoryIdList(
        ServantEntity_o *this,
        SkillInfo_array *enableSkillInfoList,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *id; // x1
  __int64 lv; // x2
  __int64 v22; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x20
  unsigned __int64 v24; // x27
  SkillInfo_o *v25; // x8
  SkillLvEntity_o *v26; // x23
  struct System_Int32_array *funcId; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x24
  unsigned __int64 v29; // x28
  int32_t *p_revision; // x21
  unsigned __int64 max_length; // x9
  DataVals_o *v32; // x25
  int32_t v33; // w1
  int32_t Param; // w26
  int32_t v35; // w1
  int32_t v36; // w0
  System_Collections_Generic_HashSet_int__o *v37; // x19
  _BOOL8 v38; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  __int64 count; // x1
  System_Int32_array *v43; // x20
  System_Collections_Generic_HashSet_int__o *v45; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v46; // [xsp+10h] [xbp-B0h] BYREF
  Il2CppObject *v47; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v48; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v49; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B028DD & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_FunctionMaster___, enableSkillInfoList);
    sub_1BC3008(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__Add__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int___ctor__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__get_Count__, v15);
    sub_1BC3008(&System_Collections_Generic_HashSet_int__TypeInfo, v16);
    sub_1BC3008(&int___TypeInfo, v17);
    byte_4B028DD = 1;
  }
  v49 = 0LL;
  entity = 0LL;
  memset(&v48, 0, sizeof(v48));
  v47 = 0LL;
  v45 = (System_Collections_Generic_HashSet_int__o *)sub_1BC3254(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v45,
    (const MethodInfo_3557E88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_54;
  v22 = *(_QWORD *)&enableSkillInfoList->max_length;
  v23 = DataValsList;
  if ( (int)v22 >= 1 )
  {
    v24 = 0LL;
    do
    {
      if ( v24 >= (unsigned int)v22 )
LABEL_55:
        sub_1BC326C(DataValsList, id, lv);
      v25 = enableSkillInfoList->m_Items[v24];
      if ( v25 )
      {
        id = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v25->fields.id;
        if ( (int)id >= 1 )
        {
          lv = (unsigned int)v25->fields.lv;
          if ( (int)lv >= 1 )
          {
            if ( !Master_object )
              goto LABEL_54;
            DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvMaster__GetEntity(
                                                                           (SkillLvMaster_o *)Master_object,
                                                                           (int32_t)id,
                                                                           lv,
                                                                           0LL);
            if ( DataValsList )
            {
              id = *(System_Collections_Generic_IEnumerable_T__o **)&DataValsList->fields.revision;
              v26 = (SkillLvEntity_o *)DataValsList;
              if ( id )
              {
                DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)v45;
                if ( !v45 )
                  goto LABEL_54;
                System_Collections_Generic_HashSet_int___UnionWith(
                  v45,
                  id,
                  (const MethodInfo_355909C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvEntity__getDataValsList(v26, 0LL);
                funcId = v26->fields.funcId;
                if ( !funcId )
                  goto LABEL_54;
                v28 = DataValsList;
                v29 = 0LL;
                p_revision = &DataValsList->fields.revision;
                while ( 1 )
                {
                  max_length = funcId->max_length;
                  if ( (__int64)v29 >= (int)max_length )
                    break;
                  if ( v29 >= max_length )
                    goto LABEL_55;
                  if ( !v23 )
                    goto LABEL_54;
                  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 v23,
                                                                                 &entity,
                                                                                 funcId->m_Items[v29 + 1],
                                                                                 (const MethodInfo_32AF0BC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    if ( !entity )
                      goto LABEL_54;
                    DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)FuncList__isAddState(
                                                                                   (int32_t)entity[1].monitor,
                                                                                   0LL);
                    if ( ((unsigned __int8)DataValsList & 1) != 0 )
                    {
                      if ( !v28 )
                        goto LABEL_54;
                      if ( v29 >= LODWORD(v28->fields._MasterName_k__BackingField) )
                        goto LABEL_55;
                      if ( !entity )
                        goto LABEL_54;
                      v32 = *(DataVals_o **)&p_revision[2 * v29];
                      if ( !v32 )
                        goto LABEL_54;
                      DataVals__SetTempType(
                        *(DataVals_o **)&p_revision[2 * v29],
                        (FunctionMaster_o *)v23,
                        (int32_t)entity[1].monitor,
                        0LL);
                      if ( DataVals__isParam(v32, 26, 0LL) )
                        v33 = 26;
                      else
                        v33 = 3;
                      Param = DataVals__GetParam(v32, v33, 0, 0LL);
                      if ( DataVals__isParam(v32, 27, 0LL) )
                        v35 = 27;
                      else
                        v35 = 4;
                      v36 = DataVals__GetParam(v32, v35, 0, 0LL);
                      DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvMaster__TryGetEntity(
                                                                                     (SkillLvMaster_o *)Master_object,
                                                                                     &v49,
                                                                                     Param,
                                                                                     v36,
                                                                                     0LL);
                      if ( ((unsigned __int8)DataValsList & 1) != 0 )
                      {
                        if ( !v49 )
                          goto LABEL_54;
                        id = (System_Collections_Generic_IEnumerable_T__o *)v49->fields.funcId;
                        if ( id )
                          System_Collections_Generic_HashSet_int___UnionWith(
                            v45,
                            id,
                            (const MethodInfo_355909C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                      }
                    }
                  }
                  funcId = v26->fields.funcId;
                  ++v29;
                  if ( !funcId )
                    goto LABEL_54;
                }
              }
            }
          }
        }
      }
      LODWORD(v22) = enableSkillInfoList->max_length;
    }
    while ( (__int64)++v24 < (int)v22 );
  }
  v37 = (System_Collections_Generic_HashSet_int__o *)sub_1BC3254(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v37,
    (const MethodInfo_3557E88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)v45;
  if ( !v45 )
    goto LABEL_54;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v46,
    v45,
    (const MethodInfo_3558A10 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v48 = v46;
  while ( 1 )
  {
    v38 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v48,
            (const MethodInfo_343270C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v38 )
      break;
    if ( !v23 )
      sub_1BC3264(v38, v39);
    v40 = DataMasterBase_object__object__int___TryGetEntity(
            v23,
            &v47,
            (int32_t)v48.fields._current,
            (const MethodInfo_32AF0BC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v40 )
    {
      if ( !v47 )
        sub_1BC3264(v40, v41);
      if ( !v37 )
        sub_1BC3264(v40, v41);
      System_Collections_Generic_HashSet_int___Add(
        v37,
        HIDWORD(v47[4].monitor),
        (const MethodInfo_355908C *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v48,
    (const MethodInfo_3432708 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v37 )
LABEL_54:
    sub_1BC3264(DataValsList, id);
  count = (unsigned int)v37->fields._count;
  if ( (int)count <= 0 )
    return 0LL;
  v43 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_55940036(
    v37,
    v43,
    (const MethodInfo_35593C4 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v43;
}


int32_t __fastcall ServantEntity__GetChangeLimitVoiceFriendshpLv(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B028CC & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_17653/*"changeLimitVoiceInFriendshipLv"*/, method);
    byte_4B028CC = 1;
  }
  param = 0;
  ServantEntity__checkScript_41651668(this, (System_String_o *)StringLiteral_17653/*"changeLimitVoiceInFriendshipLv"*/, &param, v2);
  return param;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantEntity__GetClassId(
        ServantEntity_o *this,
        bool isPlayableBeastToBase,
        bool isGrandServant,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BalanceConfig_c *v10; // x0
  int32_t *p_classId; // x19
  int32_t classId; // t1
  BalanceConfig_c *v13; // x0
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  int32_t v16; // t1
  int32_t result; // w0

  if ( (byte_4B028DE & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, isPlayableBeastToBase);
    sub_1BC3008(&Method_DataManager_GetMaster_GrandGraphDetailMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, v9);
    byte_4B028DE = 1;
  }
  if ( isPlayableBeastToBase )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    classId = this->fields.classId;
    p_classId = &this->fields.classId;
    if ( System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v10->static_fields->PlayableBeastClassIds,
           classId,
           (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      v13 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v13 = BalanceConfig_TypeInfo;
      }
      p_classId = &v13->static_fields->PlayableBeastBaseClassId;
    }
    return *p_classId;
  }
  if ( !isGrandServant )
  {
    p_classId = &this->fields.classId;
    return *p_classId;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !Master_object )
    sub_1BC3264(0LL, v15);
  v16 = this->fields.classId;
  p_classId = &this->fields.classId;
  result = GrandGraphDetailMaster__GetGrandClassId((GrandGraphDetailMaster_o *)Master_object, v16, 0LL);
  if ( result < 1 )
    return *p_classId;
  return result;
}


System_String_o *__fastcall ServantEntity__GetCountFormat(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 *v6; // x8
  bool IsServantEquip; // w19

  if ( (byte_4B028BA & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_11891/*"SERVANT_UNIT"*/, v3);
    sub_1BC3008(&StringLiteral_5700/*"EXCEPT_SERVANT_UNIT"*/, v4);
    sub_1BC3008(&StringLiteral_11519/*"SERVANT_EQUIP_UNIT"*/, v5);
    byte_4B028BA = 1;
  }
  if ( SvtType__IsServant(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_11891/*"SERVANT_UNIT"*/;
  }
  else
  {
    IsServantEquip = SvtType__IsServantEquip(this->fields.type, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_5700/*"EXCEPT_SERVANT_UNIT"*/;
    if ( IsServantEquip )
      v6 = &StringLiteral_11519/*"SERVANT_EQUIP_UNIT"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantEntity__GetDefaultDeadType(ServantEntity_o *this, int32_t defType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B028D9 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18369/*"defaultDeadType"*/, *(_QWORD *)&defType);
    byte_4B028D9 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_41651668(this, (System_String_o *)StringLiteral_18369/*"defaultDeadType"*/, &param, v3) )
    return param;
  else
    return defType;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantEntity__GetDispLimitCountFromUserServantCollection(
        ServantEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int max_length; // w8
  System_Int32_array *v10; // x20
  unsigned int v11; // w9
  unsigned int v12; // w24
  int32_t v13; // w25
  int32_t v14; // w21
  int32_t v15; // w22

  v3 = defVal;
  if ( (byte_4B028D0 & 1) == 0 )
  {
    sub_1BC3008(&CondType_TypeInfo, *(_QWORD *)&defVal);
    sub_1BC3008(&StringLiteral_18116/*"costumeCondInMaxLimitCount"*/, v5);
    byte_4B028D0 = 1;
  }
  ScriptIntArrayParam = ServantEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18116/*"costumeCondInMaxLimitCount"*/, method);
  if ( ScriptIntArrayParam )
  {
    max_length = ScriptIntArrayParam->max_length;
    v10 = ScriptIntArrayParam;
    if ( (unsigned int)(-1431655765 * max_length + 715827882) <= 0x55555554 && max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= max_length || v11 + 1 >= max_length || (v12 = v11 + 2, v11 + 2 >= max_length) )
          sub_1BC326C(ScriptIntArrayParam, v7, v8);
        v13 = v10->m_Items[v11 + 1];
        v14 = v10->m_Items[v11 + 1 + 1];
        v15 = v10->m_Items[v11 + 2 + 1];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        ScriptIntArrayParam = (System_Int32_array *)CondType__IsQuestPhaseClear_39426252(v14, v15, -1, 0, 0LL);
        if ( ((unsigned __int8)ScriptIntArrayParam & 1) != 0 )
          break;
        max_length = v10->max_length;
        v11 = v12 + 1;
        if ( (int)(v12 + 1) >= max_length )
          return v3;
      }
      return v13;
    }
  }
  return v3;
}


int32_t __fastcall ServantEntity__GetEventJoinNameExistSvtId(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  int32_t EventNameServantId; // w19
  EventServantEntity_array *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  int max_length; // w8
  EventServantEntity_array *v13; // x20
  unsigned int v14; // w21
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B028C6 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventServantMaster___, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_1BC3008(&StringLiteral_1/*""*/, v4);
    byte_4B028C6 = 1;
  }
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v5) )
  {
    name = (System_String_o *)StringLiteral_1/*""*/;
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v5);
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventServantMaster___);
    Instance = (EventServantEntity_array *)ServantEntity__GetEventNameServantId(this, v10);
    if ( !MasterData_object )
      goto LABEL_16;
    Instance = EventServantMaster__GetEntities((EventServantMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
    if ( !Instance )
      goto LABEL_16;
    max_length = Instance->max_length;
    v13 = Instance;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
          sub_1BC326C(Instance, v8, v11);
        Instance = (EventServantEntity_array *)v13->m_Items[v14];
        if ( !Instance )
          break;
        Instance = (EventServantEntity_array *)EventServantEntity__TryGetName(
                                                 (EventServantEntity_o *)Instance,
                                                 &name,
                                                 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return EventNameServantId;
        max_length = v13->max_length;
        if ( (int)++v14 >= max_length )
          return 0;
      }
LABEL_16:
      sub_1BC3264(Instance, v8);
    }
  }
  return 0;
}


int32_t __fastcall ServantEntity__GetEventNameServantId(ServantEntity_o *this, const MethodInfo *method)
{
  bool v3; // zf
  ServantEntity_Fields *p_baseSvtId; // x8
  int32_t *p_fakeValue; // x9
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4B028C9 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B028C9 = 1;
  }
  v3 = !SvtType__IsSvtMaterialTd(this->fields.type, 0LL);
  p_baseSvtId = (ServantEntity_Fields *)&this->fields.baseSvtId;
  p_fakeValue = &this->fields.baseSvtId.fields.fakeValue;
  if ( v3 )
    p_fakeValue = &this->fields.id.fields.fakeValue;
  if ( v3 )
    p_baseSvtId = &this->fields;
  v6 = *(_QWORD *)&p_baseSvtId->id.fields.currentCryptoKey;
  v7 = *(_QWORD *)p_fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v9, 0LL);
}


System_String_o *__fastcall ServantEntity__GetHideInAnimNodeName(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *ScriptValue; // x0
  System_String_o *v7; // x8

  if ( (byte_4B028CD & 1) == 0 )
  {
    sub_1BC3008(&string_TypeInfo, method);
    sub_1BC3008(&StringLiteral_7261/*"HideInAnimNode"*/, v4);
    sub_1BC3008(&StringLiteral_1/*""*/, v5);
    byte_4B028CD = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, (System_String_o *)StringLiteral_7261/*"HideInAnimNode"*/, v2);
  if ( ScriptValue )
  {
    if ( (System_String_c *)ScriptValue->klass == string_TypeInfo )
      v7 = (System_String_o *)ScriptValue;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
    return v7;
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *__fastcall ServantEntity__GetIndividuality(ServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.individuality;
}


bool __fastcall ServantEntity__GetIsCollectionStatusNotGet(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserServantCollectionEntity_array *Instance; // x0
  __int64 v7; // x1
  UserServantCollectionMaster_o *v8; // x20
  __int64 v9; // x8
  NetworkManager_c *v10; // x0
  __int64 v11; // x19
  __int64 v12; // x22
  int64_t userIdNumber; // x21
  int32_t v14; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B028CA & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1BC3008(&NetworkManager_TypeInfo, v3);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B028CA = 1;
  }
  if ( !SvtType__IsOrganization(this->fields.type, 0LL) )
    goto LABEL_18;
  Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL
    || (v8 = (UserServantCollectionMaster_o *)Instance,
        (Instance = UserServantCollectionMaster__getList((UserServantCollectionMaster_o *)Instance, 2, 0LL)) == 0LL) )
  {
    sub_1BC3264(Instance, v7);
  }
  v9 = *(_QWORD *)&Instance->max_length;
  if ( v9 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4AFC1F1 )
    {
      sub_1BC3008(&NetworkManager_TypeInfo, v7);
      byte_4AFC1F1 = 1;
    }
    v10 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v10 = NetworkManager_TypeInfo;
    }
    v12 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v11 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    userIdNumber = v10->static_fields->userIdNumber;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = v12;
    *(_QWORD *)&v17.fields.fakeValue = v11;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v17, 0LL);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v8, userIdNumber, v14, 0LL);
    if ( EntityDefinitely )
    {
      LOBYTE(v9) = !UserServantCollectionEntity__IsGet(EntityDefinitely, 0LL);
      return v9 & 1;
    }
LABEL_18:
    LOBYTE(v9) = 0;
  }
  return v9 & 1;
}


bool __fastcall ServantEntity__GetIsEventJoin(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  int32_t EventNameServantId; // w19
  UserServantEntity_array *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int max_length; // w8
  UserServantEntity_array *v11; // x20
  unsigned int v12; // w24
  bool v13; // w25
  UserServantEntity_o *v14; // x21
  __int64 v15; // x22
  __int64 v16; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B028C8 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B028C8 = 1;
  }
  if ( SvtType__IsOrganization(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v5);
    Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_21;
    Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_21;
    max_length = Instance->max_length;
    v11 = Instance;
    if ( max_length >= 1 )
    {
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        if ( v12 >= max_length )
          sub_1BC326C(Instance, v8, v9);
        v14 = v11->m_Items[v12];
        if ( !v14 )
          break;
        v16 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v18.fields.currentCryptoKey = v16;
        *(_QWORD *)&v18.fields.fakeValue = v15;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                v18,
                                                0LL);
        if ( (_DWORD)Instance == EventNameServantId )
        {
          Instance = (UserServantEntity_array *)UserServantEntity__IsEventJoin(v14, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          v13 = 1;
        }
        max_length = v11->max_length;
        if ( (int)++v12 >= max_length )
          return v13;
      }
LABEL_21:
      sub_1BC3264(Instance, v8);
    }
  }
  return 0;
}


bool __fastcall ServantEntity__GetIsMasterForEventNameComplete(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B028C7 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v2);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B028C7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_12;
  if ( Instance->fields.m_CancellationTokenSource )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)UserServantCollectionMaster__getList(
                                      (UserServantCollectionMaster_o *)Instance,
                                      2,
                                      0LL);
        if ( Instance )
          return Instance->fields.m_CancellationTokenSource != 0LL;
      }
    }
LABEL_12:
    sub_1BC3264(Instance, v5);
  }
  return 0;
}


bool __fastcall ServantEntity__GetIsNeedToCheckEventJoinName(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantEntity__GetLvLimitUpCondMaterial(
        ServantEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Int32_array *ScriptIntArrayParam; // x0
  int32_t v7; // w20
  int32_t v8; // w22
  int32_t v9; // w21

  if ( (byte_4B028CF & 1) == 0 )
  {
    sub_1BC3008(&CondType_TypeInfo, *(_QWORD *)&defVal);
    sub_1BC3008(&StringLiteral_21161/*"lvLimitUpCondMaterial"*/, v5);
    byte_4B028CF = 1;
  }
  ScriptIntArrayParam = ServantEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21161/*"lvLimitUpCondMaterial"*/, method);
  if ( !ScriptIntArrayParam || ScriptIntArrayParam->max_length != 3 )
    return defVal;
  v8 = ScriptIntArrayParam->m_Items[1];
  v7 = ScriptIntArrayParam->m_Items[2];
  v9 = ScriptIntArrayParam->m_Items[3];
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestPhaseClear_39426252(v7, v9, -1, 0, 0LL) )
    return v8;
  else
    return defVal;
}


// local variable allocation has failed, the output may be wrong!
CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *__fastcall ServantEntity__GetName(
        ServantEntity_o *this,
        int32_t limitCount,
        bool isForceNeedToCheckEventJoinName,
        int32_t imageLimitCount,
        bool useName,
        const MethodInfo *method)
{
  int32_t maxLimitCount; // w22
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  const MethodInfo *v20; // x1
  void *Instance; // x0
  const MethodInfo *v22; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v24; // x1
  __int64 v25; // x2
  int v26; // w8
  void *v27; // x21
  unsigned int v28; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v29; // x21
  Il2CppObject *Master_object; // x0
  __int64 v31; // x24
  __int64 v32; // x25
  ServantLimitAddMaster_o *v33; // x22
  const MethodInfo *v34; // x4
  System_String_o *OverwriteServantName; // x0
  System_String_o *v36; // x19
  Il2CppObject *v37; // x0
  __int64 v38; // x24
  __int64 v39; // x25
  ServantLimitAddMaster_o *v40; // x23
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x1
  System_String_o *v43; // x21
  System_String_o *v44; // x0
  bool IsNullOrEmpty; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *nameSave; // x20
  System_String_o *v47; // x0
  __int64 v49; // x1
  Il2CppObject *v50; // x22
  NetworkManager_c *v51; // x0
  __int64 v52; // x24
  __int64 v53; // x25
  int64_t userIdNumber; // x23
  ServantLimitAddEntity_o *v55; // [xsp+0h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *v56; // [xsp+8h] [xbp-68h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  maxLimitCount = limitCount;
  if ( (byte_4B028C4 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventServantMaster___, *(_QWORD *)&limitCount);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v11);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v12);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v13);
    sub_1BC3008(&DataManager_TypeInfo, v14);
    sub_1BC3008(&NetworkManager_TypeInfo, v15);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v17);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BC3008(&StringLiteral_1/*""*/, v19);
    byte_4B028C4 = 1;
  }
  entity = 0LL;
  name = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  if ( !isForceNeedToCheckEventJoinName
    && !ServantEntity__GetIsEventJoin(this, *(const MethodInfo **)&limitCount)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v20) )
  {
    goto LABEL_15;
  }
  name = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventServantMaster___);
  Instance = (void *)ServantEntity__GetEventNameServantId(this, v24);
  if ( !MasterData_object )
    goto LABEL_67;
  Instance = EventServantMaster__GetEntities((EventServantMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_67;
  v26 = *((_DWORD *)Instance + 6);
  v27 = Instance;
  if ( v26 < 1 )
  {
LABEL_15:
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( (imageLimitCount & 0x80000000) != 0 )
    {
      if ( maxLimitCount == -1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_67;
        v50 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4AFC1F1 )
        {
          sub_1BC3008(&NetworkManager_TypeInfo, v49);
          byte_4AFC1F1 = 1;
        }
        v51 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v51 = NetworkManager_TypeInfo;
        }
        v53 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v52 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        userIdNumber = v51->static_fields->userIdNumber;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v61.fields.currentCryptoKey = v53;
        *(_QWORD *)&v61.fields.fakeValue = v52;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v61, 0LL);
        if ( !v50 )
          goto LABEL_67;
        if ( !UserServantCollectionMaster__TryGetEntity(
                (UserServantCollectionMaster_o *)v50,
                &v56,
                userIdNumber,
                (int32_t)Instance,
                0LL) )
          goto LABEL_40;
        Instance = v56;
        if ( !v56 )
          goto LABEL_67;
        Instance = (void *)UserServantCollectionEntity__IsGet(v56, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_40;
        if ( !v56 )
          goto LABEL_67;
        maxLimitCount = v56->fields.maxLimitCount;
        if ( (maxLimitCount & 0x80000000) != 0 )
          goto LABEL_40;
      }
      else if ( (maxLimitCount & 0x80000000) != 0 )
      {
        goto LABEL_40;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v37 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        v55 = 0LL;
        v39 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v38 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v40 = (ServantLimitAddMaster_o *)v37;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v60.fields.currentCryptoKey = v39;
        *(_QWORD *)&v60.fields.fakeValue = v38;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v60, 0LL);
        if ( v40 )
        {
          ServantLimitAddMaster__TryGetEntity(v40, &v55, (int32_t)Instance, maxLimitCount, v41);
          if ( !v55 )
            goto LABEL_40;
          OverwriteServantName = ServantLimitAddEntity__GetOverwriteServantName(v55, v42);
          goto LABEL_37;
        }
      }
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v32 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v31 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v33 = (ServantLimitAddMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v59.fields.currentCryptoKey = v32;
      *(_QWORD *)&v59.fields.fakeValue = v31;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v59, 0LL);
      if ( v33 )
      {
        if ( !ServantLimitAddMaster__TryGetEntity(v33, &entity, (int32_t)Instance, imageLimitCount, v34) )
          goto LABEL_40;
        Instance = entity;
        if ( entity )
        {
          OverwriteServantName = ServantLimitAddEntity__GetOverwriteSvtDetailName(entity, v22);
LABEL_37:
          v43 = OverwriteServantName;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v43, 0LL);
LABEL_40:
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48059904(v29, 0LL);
          IsNullOrEmpty = System_String__IsNullOrEmpty(v44, 0LL);
          if ( useName )
          {
            if ( !IsNullOrEmpty )
              return v29;
            nameSave = this->fields.nameSave;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48059904(nameSave, 0LL);
            if ( System_String__IsNullOrEmpty(v47, 0LL) )
              return this->fields.name;
          }
          else if ( !IsNullOrEmpty )
          {
            return v29;
          }
          return this->fields.nameSave;
        }
      }
    }
LABEL_67:
    sub_1BC3264(Instance, v22);
  }
  v28 = 0;
  while ( 1 )
  {
    if ( v28 >= v26 )
      sub_1BC326C(Instance, v22, v25);
    Instance = (void *)*((_QWORD *)v27 + (int)v28 + 4);
    if ( !Instance )
      goto LABEL_67;
    Instance = (void *)EventServantEntity__TryGetName((EventServantEntity_o *)Instance, &name, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    v26 = *((_DWORD *)v27 + 6);
    if ( (int)++v28 >= v26 )
      goto LABEL_15;
  }
  v36 = name;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v36, 0LL);
}


int32_t __fastcall ServantEntity__GetNotSamePartyKey(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B028E2 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_22089/*"notSamePartyKey"*/, method);
    byte_4B028E2 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_41651668(this, (System_String_o *)StringLiteral_22089/*"notSamePartyKey"*/, &param, v2) )
    return param;
  else
    return 0;
}


int32_t __fastcall ServantEntity__GetOverwriteClassImageId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B028B7 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_4450/*"ClassImageId"*/, method);
    byte_4B028B7 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_41651668(this, (System_String_o *)StringLiteral_4450/*"ClassImageId"*/, &param, v2) )
    return param;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantEntity__GetRankUpSkillIds(
        ServantEntity_o *this,
        int32_t baseSkillId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Int32_array_array *ScriptMultiArray_int; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x8
  System_Int32_array_array *v12; // x20
  unsigned __int64 v13; // x22
  System_Int32_array **m_Items; // x23
  System_Int32_array *v15; // x21

  if ( (byte_4B028CB & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_IndexValue_int____76814760, *(_QWORD *)&baseSkillId);
    sub_1BC3008(&int___TypeInfo, v5);
    sub_1BC3008(&Method_ServantEntity_GetScriptMultiArray_int___, v6);
    sub_1BC3008(&StringLiteral_12772/*"SkillRankUp"*/, v7);
    byte_4B028CB = 1;
  }
  ScriptMultiArray_int = ServantEntity__GetScriptMultiArray_int_(
                           this,
                           (System_String_o *)StringLiteral_12772/*"SkillRankUp"*/,
                           (const MethodInfo_30A5014 *)Method_ServantEntity_GetScriptMultiArray_int___);
  if ( ScriptMultiArray_int )
  {
    v11 = *(_QWORD *)&ScriptMultiArray_int->max_length;
    v12 = ScriptMultiArray_int;
    if ( (int)v11 >= 1 )
    {
      v13 = 0LL;
      m_Items = ScriptMultiArray_int->m_Items;
      while ( v13 < (unsigned int)v11 )
      {
        v15 = m_Items[v13];
        ScriptMultiArray_int = (System_Int32_array_array *)BasicHelper__IndexValue_int_(
                                                             v15,
                                                             0,
                                                             -1,
                                                             (const MethodInfo_2FF03F8 *)Method_BasicHelper_IndexValue_int____76814760);
        if ( (_DWORD)ScriptMultiArray_int == baseSkillId )
          return v15;
        LODWORD(v11) = v12->max_length;
        if ( (__int64)++v13 >= (int)v11 )
          goto LABEL_9;
      }
LABEL_13:
      sub_1BC326C(ScriptMultiArray_int, v9, v10);
    }
  }
LABEL_9:
  ScriptMultiArray_int = (System_Int32_array_array *)sub_1BC30B0(int___TypeInfo, 1LL);
  if ( !ScriptMultiArray_int )
    sub_1BC3264(0LL, v9);
  v15 = (System_Int32_array *)ScriptMultiArray_int;
  if ( !ScriptMultiArray_int->max_length )
    goto LABEL_13;
  LODWORD(ScriptMultiArray_int->m_Items[0]) = baseSkillId;
  return v15;
}


System_String_o *__fastcall ServantEntity__GetRuby(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *Empty; // x20
  const MethodInfo *v8; // x1
  EventServantEntity_array *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x22
  __int64 v13; // x23
  EventServantMaster_o *v14; // x21
  __int64 v15; // x2
  int max_length; // w8
  EventServantEntity_array *v17; // x21
  unsigned int v18; // w23
  Il2CppClass **v19; // x8
  EventServantEntity_o *v20; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *ruby; // x19
  System_String_o *name; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4B028C5 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventServantMaster___, method);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BC3008(&string_TypeInfo, v6);
    byte_4B028C5 = 1;
  }
  name = 0LL;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v8) )
  {
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventServantMaster___);
    v13 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v12 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v14 = (EventServantMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v24.fields.currentCryptoKey = v13;
    *(_QWORD *)&v24.fields.fakeValue = v12;
    Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v24, 0LL);
    if ( !v14 || (Instance = EventServantMaster__GetEntities(v14, (int32_t)Instance, 0LL)) == 0LL )
LABEL_23:
      sub_1BC3264(Instance, v10);
    max_length = Instance->max_length;
    v17 = Instance;
    if ( max_length >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= max_length )
          sub_1BC326C(Instance, v10, v15);
        v19 = &v17->obj.klass + (int)v18;
        v20 = (EventServantEntity_o *)v19[4];
        if ( !v20 )
          goto LABEL_23;
        Instance = (EventServantEntity_array *)EventServantEntity__TryGetName(
                                                 (EventServantEntity_o *)v19[4],
                                                 &name,
                                                 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        max_length = v17->max_length;
        if ( (int)++v18 >= max_length )
          goto LABEL_18;
      }
      Empty = EventServantEntity__GetRuby(v20, 0LL);
    }
  }
LABEL_18:
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    ruby = this->fields.ruby;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48059904(ruby, 0LL);
  }
  return Empty;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall ServantEntity__GetScript(
        ServantEntity_o *this,
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  CGThumbnailListItem_o *p_mergedScript; // x19
  Il2CppObject *Master_object; // x0
  __int64 v22; // x22
  __int64 v23; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  Il2CppClass *klass; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x22
  System_Collections_Generic_Dictionary_object__object__o *v30; // x23
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_Dictionary_object__object__o **p_script; // x21
  System_Collections_Generic_IEnumerable_T__o *script; // x20
  System_Action_T__o *v35; // x23
  __int64 v36; // x1
  System_Collections_Generic_Dictionary_object__object__o *v37; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v38; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4B028B0 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_KeyValuePair_string__object___TypeInfo, method);
    sub_1BC3008(&Method_BasicHelper_ForEach_KeyValuePair_string__object____, v3);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantAddMaster___, v4);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v9);
    sub_1BC3008(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v15);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BC3008(&Method_ServantEntity___c__DisplayClass102_0__GetScript_b__0__, v17);
    sub_1BC3008(&ServantEntity___c__DisplayClass102_0_TypeInfo, v18);
    byte_4B028B0 = 1;
  }
  entity = 0LL;
  memset(&v38, 0, sizeof(v38));
  p_mergedScript = (CGThumbnailListItem_o *)&this->fields.mergedScript;
  result = this->fields.mergedScript;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantAddMaster___);
    v23 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v22 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v40.fields.currentCryptoKey = v23;
    *(_QWORD *)&v40.fields.fakeValue = v22;
    klass = (Il2CppClass *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v40, 0LL);
    if ( v24 )
    {
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              v24,
              &entity,
              (int32_t)klass,
              (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
      {
        p_script = (System_Collections_Generic_Dictionary_object__object__o **)&this->fields.script;
LABEL_19:
        v37 = *p_script;
        p_mergedScript->klass = (CGThumbnailListItem_c *)*p_script;
        sub_1BC2FAC(p_mergedScript, (int32_t)v37, v27, v28);
        return (System_Collections_Generic_Dictionary_string__object__o *)p_mergedScript->klass;
      }
      v29 = sub_1BC3254(ServantEntity___c__DisplayClass102_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v29, 0LL);
      v30 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v30,
        (const MethodInfo_336C638 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v29 )
      {
        *(_QWORD *)(v29 + 16) = v30;
        p_script = (System_Collections_Generic_Dictionary_object__object__o **)(v29 + 16);
        sub_1BC2FAC((CGThumbnailListItem_o *)(v29 + 16), (int32_t)v30, v31, v32);
        script = (System_Collections_Generic_IEnumerable_T__o *)this->fields.script;
        v35 = (System_Action_T__o *)sub_1BC3254(System_Action_KeyValuePair_string__object___TypeInfo);
        System_Action_KeyValuePair_object__object_____ctor(
          v35,
          (Il2CppObject *)v29,
          Method_ServantEntity___c__DisplayClass102_0__GetScript_b__0__,
          0LL);
        BasicHelper__ForEach_KeyValuePair_object__object__(
          script,
          v35,
          (const MethodInfo_2FECCB4 *)Method_BasicHelper_ForEach_KeyValuePair_string__object____);
        if ( entity )
        {
          klass = entity[2].klass;
          if ( klass )
          {
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              &v38,
              (System_Collections_Generic_Dictionary_object__object__o *)klass,
              (const MethodInfo_336D418 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
            while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                      &v38,
                      (const MethodInfo_346847C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
            {
              if ( !*p_script )
                sub_1BC3264(0LL, v36);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                *p_script,
                v38.fields._current.fields.key,
                v38.fields._current.fields.value,
                (const MethodInfo_336CFD4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v38,
              (const MethodInfo_346859C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
            goto LABEL_19;
          }
        }
      }
    }
    sub_1BC3264(klass, v26);
  }
  return result;
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array_array *__fastcall ServantEntity__GetScriptMultiArray___Il2CppFullySharedGenericType_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_30A50DC *method)
{
  __int64 v6; // x1
  Il2CppObject *ScriptValue; // x0
  System_String_o *v8; // x20
  long double inited; // q0

  if ( !method->rgctx_data )
  {
    sub_1BC3008(&JsonManager_TypeInfo, key);
    sub_1BC3008(&string_TypeInfo, v6);
    if ( !method->rgctx_data )
      sub_1C134C8();
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, 0LL);
  if ( ScriptValue )
  {
    if ( (System_String_c *)ScriptValue->klass == string_TypeInfo )
      v8 = (System_String_o *)ScriptValue;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( System_String__IsNullOrEmpty(v8, 0LL) )
    return 0LL;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array_array *)((__int64 (__fastcall *)(System_String_o *, long double))method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_->methodPointer)(
                                                                               v8,
                                                                               inited);
}


System_Int32_array_array *__fastcall ServantEntity__GetScriptMultiArray_int_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_30A5014 *method)
{
  __int64 v6; // x1
  Il2CppObject *ScriptValue; // x0
  System_String_o *v8; // x20

  if ( !method->rgctx_data )
  {
    sub_1BC3008(&JsonManager_TypeInfo, key);
    sub_1BC3008(&string_TypeInfo, v6);
    if ( !method->rgctx_data )
      sub_1C134C8();
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, 0LL);
  if ( ScriptValue )
  {
    if ( (System_String_c *)ScriptValue->klass == string_TypeInfo )
      v8 = (System_String_o *)ScriptValue;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( System_String__IsNullOrEmpty(v8, 0LL) )
    return 0LL;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__DeserializeMultiArray_int_(
           (Il2CppObject *)v8,
           (const MethodInfo_306D9E8 *)method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_);
}


Il2CppObject *__fastcall ServantEntity__GetScriptValue(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B028B1 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4B028B1 = 1;
  }
  result = (Il2CppObject *)ServantEntity__GetScript(this, (const MethodInfo *)key);
  value = 0LL;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_336E7F4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_Int32_array *__fastcall ServantEntity__GetSkillCategoryIdList(
        ServantEntity_o *this,
        int32_t skillListNum,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  bool IsServant; // w8
  System_Int32_array *result; // x0
  ServantEntity_o *v8; // x0
  const MethodInfo *v9; // x2
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-18h] BYREF

  skillInfoList = 0LL;
  IsServant = SvtType__IsServant(this->fields.type, 0LL);
  result = 0LL;
  if ( IsServant )
  {
    ServantEntity__GetSkillInfo(this, &skillInfoList, skillListNum, v5);
    if ( skillInfoList )
      return ServantEntity__GetCategoryIdList(v8, skillInfoList, v9);
    else
      return 0LL;
  }
  return result;
}


void __fastcall ServantEntity__GetSkillInfo(
        ServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t skillListNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x21
  BalanceConfig_c *v13; // x0
  SkillInfo_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  unsigned __int64 v17; // x25
  __int64 v18; // x28
  __int64 v19; // x29
  SkillInfo_o *v20; // x22
  ServantSkillEntity_o *IsServantEquip; // x0
  __int64 v22; // x1
  __int64 v23; // x23
  __int64 v24; // x24
  SkillInfo_array *v25; // x23
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x3
  __int64 v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4B028DC & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantSkillMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BC3008(&SkillInfo___TypeInfo, v10);
    sub_1BC3008(&SkillInfo_TypeInfo, v11);
    byte_4B028DC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  if ( skillListNum <= 0 )
  {
    v13 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    skillListNum = v13->static_fields->SvtSkillListMax;
  }
  v14 = (SkillInfo_array *)sub_1BC30B0(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v14;
  sub_1BC2FAC((CGThumbnailListItem_o *)skillInfoList, (int32_t)v14, v15, v16);
  if ( skillListNum >= 1 )
  {
    v17 = 0LL;
    v18 = (unsigned int)skillListNum;
    v19 = 32LL;
    do
    {
      v20 = (SkillInfo_o *)sub_1BC3254(SkillInfo_TypeInfo);
      SkillInfo___ctor(v20, 0LL);
      if ( !v20 )
LABEL_23:
        sub_1BC3264(IsServantEquip, v22);
      v20->fields.lv = 1;
      IsServantEquip = (ServantSkillEntity_o *)SvtType__IsServantEquip(this->fields.type, 0LL);
      if ( ((unsigned __int8)IsServantEquip & 1) == 0 )
      {
        v24 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v23 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v31.fields.currentCryptoKey = v24;
        *(_QWORD *)&v31.fields.fakeValue = v23;
        IsServantEquip = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                   v31,
                                                   0LL);
        if ( !Master_object )
          goto LABEL_23;
        IsServantEquip = ServantSkillMaster__getLowPriorityEntity(
                           (ServantSkillMaster_o *)Master_object,
                           (int32_t)IsServantEquip,
                           (int)v17 + 1,
                           0LL);
        if ( IsServantEquip )
        {
          v20->fields.id = IsServantEquip->fields.skillId;
          ServantSkillEntity__getAcquisitionMethodExplanation(
            IsServantEquip,
            &v20->fields.title,
            &v20->fields.explanation,
            0LL);
        }
      }
      v25 = *skillInfoList;
      if ( !*skillInfoList )
        goto LABEL_23;
      v26 = sub_1BC3144(v20, v25->obj.klass->_1.element_class);
      if ( !v26 )
      {
        v30 = sub_1BC3288(0LL);
        sub_1BC3130(v30, 0LL);
      }
      if ( v17 >= v25->max_length )
        sub_1BC326C(v26, v27, v28);
      v25->m_Items[v17] = v20;
      sub_1BC2FAC((CGThumbnailListItem_o *)((char *)v25 + v19), (int32_t)v20, v28, v29);
      ++v17;
      v19 += 8LL;
    }
    while ( v18 != v17 );
  }
}


System_Int32_array *__fastcall ServantEntity__GetSubAttrReplacedIndividualityArray(
        ServantEntity_o *this,
        System_Int32_array *individualityArray,
        ServantLimitAddEntity_o *servantLimitAddEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  AttriMaster_o *v14; // x23
  int32_t IndividualityFromValue; // w22
  int v16; // w21
  System_Collections_Generic_List_int__o *v17; // x20
  __int64 v18; // x2
  __int64 v19; // x8
  char v20; // w26
  unsigned __int64 v21; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  struct System_Int32_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  struct System_Int32_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10

  if ( (byte_4B028AB & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_AttriMaster___, individualityArray);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_4B028AB = 1;
  }
  if ( !servantLimitAddEntity || servantLimitAddEntity->fields.attri == -1 )
    return individualityArray;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !Master_object )
    goto LABEL_36;
  v14 = (AttriMaster_o *)Master_object;
  IndividualityFromValue = AttriMaster__GetIndividualityFromValue(
                             (AttriMaster_o *)Master_object,
                             this->fields.attri,
                             0LL);
  v16 = AttriMaster__GetIndividualityFromValue(v14, servantLimitAddEntity->fields.attri, 0LL);
  v17 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_36;
  v19 = *(_QWORD *)&individualityArray->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0;
    v21 = 0LL;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v19 )
        sub_1BC326C(Master_object, v13, v18);
      v13 = (unsigned int)individualityArray->m_Items[v21 + 1];
      if ( (_DWORD)v13 == IndividualityFromValue )
      {
        if ( v16 >= 1 )
        {
          if ( !v17 )
            goto LABEL_36;
          items = v17->fields._items;
          v23 = Method_System_Collections_Generic_List_int__Add__;
          ++v17->fields._version;
          if ( !items )
            goto LABEL_36;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v17,
              v16,
              *(const MethodInfo_3683E1C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v17->fields._size = size + 1;
            items->m_Items[size + 1] = v16;
          }
          v20 = 1;
        }
      }
      else
      {
        if ( !v17 )
          goto LABEL_36;
        v25 = v17->fields._items;
        v26 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !v25 )
          goto LABEL_36;
        v27 = v17->fields._size;
        if ( (unsigned int)v27 >= v25->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            v13,
            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = v27 + 1;
          v25->m_Items[v27 + 1] = v13;
        }
      }
      LODWORD(v19) = individualityArray->max_length;
      if ( (__int64)++v21 >= (int)v19 )
        goto LABEL_29;
    }
  }
  v20 = 0;
LABEL_29:
  if ( v16 >= 1 && (v20 & 1) == 0 )
  {
    if ( v17 )
    {
      v29 = v17->fields._items;
      v30 = Method_System_Collections_Generic_List_int__Add__;
      ++v17->fields._version;
      if ( v29 )
      {
        v31 = v17->fields._size;
        if ( (unsigned int)v31 >= v29->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            v16,
            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = v31 + 1;
          v29->m_Items[v31 + 1] = v16;
        }
        return System_Collections_Generic_List_int___ToArray(
                 v17,
                 (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
    }
LABEL_36:
    sub_1BC3264(Master_object, v13);
  }
  if ( !v17 )
    goto LABEL_36;
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall ServantEntity__GetTreasureDeviceCategoryIdList(
        ServantEntity_o *this,
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  Il2CppObject *Master_object; // x0
  __int64 v21; // x20
  __int64 v22; // x21
  ServantTreasureDvcMaster_o *v23; // x19
  DataVals_array *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x1
  System_Int32_array *EntityFromSvtIdOnly; // x19
  TreasureDvcLvMaster_o *v27; // x20
  TreasureDvcLvEntity_o *v28; // x0
  TreasureDvcLvEntity_o *v29; // x21
  Il2CppObject *v30; // x19
  Il2CppObject *v31; // x23
  System_Collections_Generic_HashSet_int__o *v32; // x22
  const MethodInfo_355909C **v33; // x27
  __int64 v34; // x2
  struct System_Int32_array *funcId; // x8
  DataVals_o **m_Items; // x20
  DataVals_array *v37; // x24
  unsigned __int64 v38; // x29
  unsigned __int64 max_length; // x9
  DataVals_o *v40; // x25
  int32_t v41; // w1
  int32_t Param; // w26
  int32_t v43; // w1
  System_Collections_Generic_IEnumerable_T__o *v44; // x1
  System_Collections_Generic_HashSet_int__o *v45; // x20
  const MethodInfo_355909C **v46; // x22
  int32_t v47; // w26
  int32_t v48; // w27
  void *v49; // x8
  System_Collections_Generic_HashSet_int__o *v50; // x20
  _BOOL8 v51; // x0
  __int64 v52; // x1
  _BOOL8 v53; // x0
  __int64 v54; // x1
  __int64 count; // x1
  TreasureDvcLvMaster_o *v57; // [xsp+0h] [xbp-D0h]
  DataVals_o **v58; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v59; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v60; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v61; // [xsp+30h] [xbp-A0h] BYREF
  SkillLvEntity_o *v62; // [xsp+50h] [xbp-80h] BYREF
  TreasureDvcLvEntity_o *v63; // [xsp+58h] [xbp-78h] BYREF
  SkillLvEntity_o *v64; // [xsp+60h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4B028DB & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__Add__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int___ctor__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__get_Count__, v16);
    sub_1BC3008(&System_Collections_Generic_HashSet_int__TypeInfo, v17);
    sub_1BC3008(&int___TypeInfo, v18);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    byte_4B028DB = 1;
  }
  v64 = 0LL;
  entity = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  memset(&v61, 0, sizeof(v61));
  v60 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v22 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v23 = (ServantTreasureDvcMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v66.fields.currentCryptoKey = v22;
  *(_QWORD *)&v66.fields.fakeValue = v21;
  DataValsList = (DataVals_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v66, 0LL);
  if ( !v23 )
    goto LABEL_51;
  EntityFromSvtIdOnly = (System_Int32_array *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                v23,
                                                (int32_t)DataValsList,
                                                1,
                                                0LL);
  if ( EntityFromSvtIdOnly )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataValsList = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !DataValsList )
      goto LABEL_51;
    v27 = (TreasureDvcLvMaster_o *)DataValsList;
    v28 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)DataValsList, EntityFromSvtIdOnly->m_Items[1], 1, 0LL);
    if ( !v28 )
      return 0LL;
    v29 = v28;
    if ( !v28->fields.funcId )
      return 0LL;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v57 = v27;
    v30 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_FunctionMaster___);
    v31 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v32 = (System_Collections_Generic_HashSet_int__o *)sub_1BC3254(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v32,
      (const MethodInfo_3557E88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !v32 )
      goto LABEL_51;
    v33 = (const MethodInfo_355909C **)&Method_System_Collections_Generic_HashSet_int__UnionWith__;
    System_Collections_Generic_HashSet_int___UnionWith(
      v32,
      (System_Collections_Generic_IEnumerable_T__o *)v29->fields.funcId,
      (const MethodInfo_355909C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = TreasureDvcLvEntity__getDataValsList(v29, 100, 0LL);
    funcId = v29->fields.funcId;
    if ( !funcId )
      goto LABEL_51;
    m_Items = DataValsList->m_Items;
    v37 = DataValsList;
    v38 = 0LL;
    v58 = DataValsList->m_Items;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v38 >= (int)max_length )
      {
        v50 = (System_Collections_Generic_HashSet_int__o *)sub_1BC3254(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v50,
          (const MethodInfo_3557E88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v59,
          v32,
          (const MethodInfo_3558A10 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v61 = v59;
        while ( 1 )
        {
          v51 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v61,
                  (const MethodInfo_343270C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v51 )
            break;
          if ( !v30 )
            sub_1BC3264(v51, v52);
          v53 = DataMasterBase_object__object__int___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)v30,
                  &v60,
                  (int32_t)v61.fields._current,
                  (const MethodInfo_32AF0BC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( v53 )
          {
            if ( !v60 )
              sub_1BC3264(v53, v54);
            if ( !v50 )
              sub_1BC3264(v53, v54);
            System_Collections_Generic_HashSet_int___Add(
              v50,
              HIDWORD(v60[4].monitor),
              (const MethodInfo_355908C *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v61,
          (const MethodInfo_3432708 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        if ( v50 )
        {
          count = (unsigned int)v50->fields._count;
          if ( (int)count > 0 )
          {
            EntityFromSvtIdOnly = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, count);
            System_Collections_Generic_HashSet_int___CopyTo_55940036(
              v50,
              EntityFromSvtIdOnly,
              (const MethodInfo_35593C4 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
            return EntityFromSvtIdOnly;
          }
          return 0LL;
        }
LABEL_51:
        sub_1BC3264(DataValsList, v25);
      }
      if ( v38 >= max_length )
        goto LABEL_64;
      if ( !v30 )
        goto LABEL_51;
      DataValsList = (DataVals_array *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)v30,
                                         &entity,
                                         funcId->m_Items[v38 + 1],
                                         (const MethodInfo_32AF0BC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)DataValsList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_51;
        DataValsList = (DataVals_array *)FuncList__isAddState((int32_t)entity[1].monitor, 0LL);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !v37 )
            goto LABEL_51;
          if ( v38 >= v37->max_length )
LABEL_64:
            sub_1BC326C(DataValsList, v25, v34);
          if ( !entity )
            goto LABEL_51;
          v40 = m_Items[v38];
          if ( !v40 )
            goto LABEL_51;
          DataVals__SetTempType(m_Items[v38], (FunctionMaster_o *)v30, (int32_t)entity[1].monitor, 0LL);
          v41 = DataVals__isParam(v40, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v40, v41, 0, 0LL);
          v43 = DataVals__isParam(v40, 27, 0LL) ? 27 : 4;
          DataValsList = (DataVals_array *)DataVals__GetParam(v40, v43, 0, 0LL);
          if ( !v31 )
            goto LABEL_51;
          DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                             (SkillLvMaster_o *)v31,
                                             &v64,
                                             Param,
                                             (int32_t)DataValsList,
                                             0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v64 )
              goto LABEL_51;
            v44 = (System_Collections_Generic_IEnumerable_T__o *)v64->fields.funcId;
            if ( v44 )
              System_Collections_Generic_HashSet_int___UnionWith(v32, v44, *v33);
          }
          DataValsList = (DataVals_array *)DataVals__isParam(v40, 93, 0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            DataValsList = (DataVals_array *)DataVals__isParam(v40, 94, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              v45 = v32;
              v46 = v33;
              v47 = DataVals__GetParam(v40, 93, 0, 0LL);
              v48 = DataVals__GetParam(v40, 94, 0, 0LL);
              if ( DataVals__isParam(v40, 96, 0LL) )
              {
                DataValsList = (DataVals_array *)TreasureDvcLvMaster__TryGetEntity(v57, &v63, v47, v48, 0LL);
                v33 = v46;
                v32 = v45;
                m_Items = v58;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v49 = v63;
                  if ( !v63 )
                    goto LABEL_51;
LABEL_48:
                  v25 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v49 + 4);
                  if ( v25 )
                    System_Collections_Generic_HashSet_int___UnionWith(v32, v25, *v33);
                }
              }
              else
              {
                DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                                   (SkillLvMaster_o *)v31,
                                                   &v62,
                                                   v47,
                                                   v48,
                                                   0LL);
                v33 = v46;
                v32 = v45;
                m_Items = v58;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v49 = v62;
                  if ( !v62 )
                    goto LABEL_51;
                  goto LABEL_48;
                }
              }
            }
          }
        }
      }
      funcId = v29->fields.funcId;
      ++v38;
      if ( !funcId )
        goto LABEL_51;
    }
  }
  return EntityFromSvtIdOnly;
}


int32_t __fastcall ServantEntity__GetTrueSvtId(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x8
  ServantChangeMaster_o *v12; // x19
  ServantChangeEntity_o *v13; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B028C3 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B028C3 = 1;
  }
  v6 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v6;
  *(_QWORD *)&v15.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v15, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantChangeMaster___),
        v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey,
        *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.id.fields.fakeValue,
        v12 = (ServantChangeMaster_o *)MasterData_object,
        *(_QWORD *)&v16.fields.currentCryptoKey = v11,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v16, 0LL),
        !v12) )
  {
    sub_1BC3264(Instance, v9);
  }
  v13 = ServantChangeMaster__TrueNameEntity(v12, (int32_t)Instance, 0LL);
  if ( v13 )
    return v13->fields.svtId;
  return v7;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity__IsAdditionExpandImage(
        ServantEntity_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v6; // x8
  int v7; // w9
  int v8; // w10

  if ( (byte_4B028CE & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_16535/*"additionExpandImage"*/, *(_QWORD *)&limitCount);
    byte_4B028CE = 1;
  }
  ScriptIntArrayParam = ServantEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16535/*"additionExpandImage"*/, method);
  if ( !ScriptIntArrayParam )
    goto LABEL_11;
  v6 = *(_QWORD *)&ScriptIntArrayParam->max_length;
  if ( !v6 )
    return v6;
  v7 = v6 - 1;
  if ( (int)v6 < 1 )
  {
LABEL_11:
    LOBYTE(v6) = 0;
    return v6;
  }
  v8 = 0;
  do
  {
    LOBYTE(v6) = ScriptIntArrayParam->m_Items[v8 + 1] == limitCount;
    if ( ScriptIntArrayParam->m_Items[v8 + 1] == limitCount )
      break;
  }
  while ( v7 != v8++ );
  return v6;
}


bool __fastcall ServantEntity__IsBeastNotPlayable(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_4B028D8 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_1BC3008(&int___TypeInfo, v3);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A,
      v4);
    byte_4B028D8 = 1;
  }
  v5 = (System_Array_o *)sub_1BC30B0(int___TypeInfo, 5LL);
  v8.fields.value = Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(v5, v8, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v6,
           this->fields.classId,
           (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsCoinRoomCheck(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B028D2 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_17880/*"coinRoomCheck"*/, method);
    byte_4B028D2 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_17880/*"coinRoomCheck"*/, v2);
}


bool __fastcall ServantEntity__IsContainOverwriteGrandGraphImageLimitCount(
        ServantEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool v6; // w0
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B028E3 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_22332/*"overwriteGrandGraphImageLimitCount"*/, value);
    byte_4B028E3 = 1;
  }
  param = 0;
  *value = 0;
  v6 = ServantEntity__checkScript_41651668(this, (System_String_o *)StringLiteral_22332/*"overwriteGrandGraphImageLimitCount"*/, &param, v3);
  if ( v6 )
    *value = param;
  return v6;
}


bool __fastcall ServantEntity__IsExtra1(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_4B028D6 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_1BC3008(&int___TypeInfo, v3);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913,
      v4);
    byte_4B028D6 = 1;
  }
  v5 = (System_Array_o *)sub_1BC30B0(int___TypeInfo, 4LL);
  v8.fields.value = Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(v5, v8, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v6,
           this->fields.classId,
           (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsExtra2(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Array_o *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  BalanceConfig_c *v10; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  const MethodInfo *v13; // x1
  System_RuntimeFieldHandle_o v15; // 0:w1.4

  if ( (byte_4B028D7 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_Concat_int___, v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, v4);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1BC3008(&int___TypeInfo, v6);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__38F9E660D9115C0614E92C75E3E4A5CA8499743FB698CBC48AD941DBE60A0572,
      v7);
    byte_4B028D7 = 1;
  }
  v8 = (System_Array_o *)sub_1BC30B0(int___TypeInfo, 3LL);
  v15.fields.value = Field__PrivateImplementationDetails__38F9E660D9115C0614E92C75E3E4A5CA8499743FB698CBC48AD941DBE60A0572;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v8;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(v8, v15, 0LL);
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = System_Linq_Enumerable__Concat_int_(
          v9,
          (System_Collections_Generic_IEnumerable_TSource__o *)v10->static_fields->PlayableBeastClassIds,
          (const MethodInfo_301A7B4 *)Method_System_Linq_Enumerable_Concat_int___);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                               v11,
                                                               (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
  return System_Linq_Enumerable__Contains_int_(
           v12,
           this->fields.classId,
           (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___)
      || ServantEntity__IsBeastNotPlayable(this, v13);
}


bool __fastcall ServantEntity__IsFourCavalry(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_4B028D5 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_1BC3008(&int___TypeInfo, v3);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE,
      v4);
    byte_4B028D5 = 1;
  }
  v5 = (System_Array_o *)sub_1BC30B0(int___TypeInfo, 8LL);
  v8.fields.value = Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(v5, v8, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v6,
           this->fields.classId,
           (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity__IsIndividuality(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t individuality,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t LimitCountByDispLimit; // w0
  __int64 v15; // x21
  __int64 v16; // x23
  int32_t v17; // w22
  const MethodInfo *v18; // x2
  int32_t v19; // w21
  System_Int32_array *IndividualityList; // x21
  Il2CppObject *Master_object; // x0
  __int64 v22; // x24
  __int64 v23; // x25
  ServantLimitAddMaster_o *v24; // x23
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x4
  __int64 v28; // x2
  AttriMaster_o *v29; // x22
  int32_t IndividualityFromValue; // w0
  __int64 v31; // x0
  int max_length; // w8
  __int64 v33; // x9
  int32_t v34; // w11
  struct System_Int32_array *v35; // x10
  int v36; // w8
  __int64 v37; // x9
  int32_t *v38; // x10
  int32_t v39; // w11
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4B028AD & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_AttriMaster___, *(_QWORD *)&limitCount);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v9);
    sub_1BC3008(&DataManager_TypeInfo, v10);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BC3008(&ServantIndividualityMaster_TypeInfo, v13);
    byte_4B028AD = 1;
  }
  entity = 0LL;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  v16 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v17 = LimitCountByDispLimit;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = v16;
  *(_QWORD *)&v42.fields.fakeValue = v15;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v42, 0LL);
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v19, v17, v18);
  if ( !IndividualityList )
    IndividualityList = this->fields.individuality;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v23 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v24 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v23;
  *(_QWORD *)&v43.fields.fakeValue = v22;
  v25 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v43, 0LL);
  if ( !v24 )
    goto LABEL_46;
  v25 = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(v24, &entity, (int32_t)v25, v17, v27);
  if ( ((unsigned __int8)v25 & 1) == 0 )
    goto LABEL_26;
  if ( !entity )
    goto LABEL_46;
  if ( entity->fields.attri == -1 )
  {
LABEL_26:
    v31 = 0xFFFFFFFFLL;
    if ( !IndividualityList )
      goto LABEL_35;
LABEL_27:
    max_length = IndividualityList->max_length;
    if ( max_length >= 1 )
    {
      v33 = 0LL;
      while ( (unsigned int)v33 < max_length )
      {
        v34 = IndividualityList->m_Items[v33 + 1];
        if ( v34 != (_DWORD)v31 && v34 == individuality )
          goto LABEL_25;
        if ( (int)++v33 >= max_length )
          goto LABEL_35;
      }
      goto LABEL_45;
    }
LABEL_35:
    if ( !entity || (v35 = entity->fields.individuality) == 0LL || (v36 = v35->max_length, v36 < 1) )
    {
      LOBYTE(v31) = 0;
      return v31;
    }
    v37 = 0LL;
    v38 = &v35->m_Items[1];
    while ( (unsigned int)v37 < v36 )
    {
      v39 = v38[v37++];
      v31 = v39 == individuality;
      if ( (int)v37 >= v36 || v39 == individuality )
        return v31;
    }
LABEL_45:
    sub_1BC326C(v31, v26, v28);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v25 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !entity || (v29 = (AttriMaster_o *)v25) == 0LL )
LABEL_46:
    sub_1BC3264(v25, v26);
  IndividualityFromValue = AttriMaster__GetIndividualityFromValue((AttriMaster_o *)v25, entity->fields.attri, 0LL);
  if ( IndividualityFromValue < 1 || IndividualityFromValue != individuality )
  {
    v31 = AttriMaster__GetIndividualityFromValue(v29, this->fields.attri, 0LL);
    if ( !IndividualityList )
      goto LABEL_35;
    goto LABEL_27;
  }
LABEL_25:
  LOBYTE(v31) = 1;
  return v31;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity__IsIndividuality_41648780(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        System_Int32_array *individualityList,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t LimitCountByDispLimit; // w0
  __int64 v15; // x21
  __int64 v16; // x23
  int32_t v17; // w22
  const MethodInfo *v18; // x2
  int32_t v19; // w21
  System_Int32_array *individuality; // x21
  Il2CppObject *Master_object; // x0
  __int64 v22; // x24
  __int64 v23; // x25
  ServantLimitAddMaster_o *v24; // x23
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x4
  __int64 v28; // x2
  AttriMaster_o *v29; // x22
  __int64 IndividualityFromValue; // x0
  signed int max_length; // w8
  __int64 v32; // x9
  unsigned __int64 v33; // x9
  unsigned __int64 v34; // x8
  int32_t v35; // w12
  signed int v36; // w13
  __int64 v37; // x14
  struct System_Int32_array *v38; // x8
  unsigned __int64 v39; // x10
  unsigned __int64 v40; // x9
  signed int v41; // w13
  __int64 v42; // x15
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4B028AE & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_AttriMaster___, *(_QWORD *)&limitCount);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v9);
    sub_1BC3008(&DataManager_TypeInfo, v10);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BC3008(&ServantIndividualityMaster_TypeInfo, v13);
    byte_4B028AE = 1;
  }
  entity = 0LL;
  if ( !individualityList || !*(_QWORD *)&individualityList->max_length )
  {
LABEL_56:
    LOBYTE(IndividualityFromValue) = 1;
    return IndividualityFromValue;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  v16 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v17 = LimitCountByDispLimit;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v16;
  *(_QWORD *)&v45.fields.fakeValue = v15;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v45, 0LL);
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  individuality = ServantIndividualityMaster__GetIndividualityList(v19, v17, v18);
  if ( !individuality )
    individuality = this->fields.individuality;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v23 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v24 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v23;
  *(_QWORD *)&v46.fields.fakeValue = v22;
  v25 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v46, 0LL);
  if ( !v24 )
    goto LABEL_59;
  v25 = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(v24, &entity, (int32_t)v25, v17, v27);
  if ( ((unsigned __int8)v25 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_59;
    if ( entity->fields.attri != -1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v25 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_AttriMaster___);
      if ( entity )
      {
        v29 = (AttriMaster_o *)v25;
        if ( v25 )
        {
          IndividualityFromValue = AttriMaster__GetIndividualityFromValue(
                                     (AttriMaster_o *)v25,
                                     entity->fields.attri,
                                     0LL);
          if ( (int)IndividualityFromValue >= 1 )
          {
            max_length = individualityList->max_length;
            if ( max_length >= 1 )
            {
              v32 = 0LL;
              while ( (unsigned int)v32 < max_length )
              {
                if ( (_DWORD)IndividualityFromValue == individualityList->m_Items[v32 + 1] )
                  goto LABEL_56;
                if ( (int)++v32 >= max_length )
                  goto LABEL_31;
              }
LABEL_58:
              sub_1BC326C(IndividualityFromValue, v26, v28);
            }
          }
LABEL_31:
          IndividualityFromValue = AttriMaster__GetIndividualityFromValue(v29, this->fields.attri, 0LL);
          if ( !individuality )
            goto LABEL_44;
          goto LABEL_34;
        }
      }
LABEL_59:
      sub_1BC3264(v25, v26);
    }
  }
  IndividualityFromValue = 0xFFFFFFFFLL;
  if ( individuality )
  {
LABEL_34:
    if ( (int)*(_QWORD *)&individuality->max_length >= 1 )
    {
      v33 = (unsigned int)*(_QWORD *)&individuality->max_length;
      v34 = 0LL;
      while ( 1 )
      {
        if ( v34 >= v33 )
          goto LABEL_58;
        v35 = individuality->m_Items[v34 + 1];
        if ( v35 != (_DWORD)IndividualityFromValue )
        {
          v36 = individualityList->max_length;
          if ( v36 >= 1 )
            break;
        }
LABEL_43:
        if ( (__int64)++v34 >= (int)v33 )
          goto LABEL_44;
      }
      v37 = 0LL;
      while ( (unsigned int)v37 < v36 )
      {
        if ( v35 == individualityList->m_Items[v37 + 1] )
          goto LABEL_56;
        if ( (int)++v37 >= v36 )
          goto LABEL_43;
      }
      goto LABEL_58;
    }
  }
LABEL_44:
  if ( entity )
  {
    v38 = entity->fields.individuality;
    if ( v38 )
    {
      if ( (int)*(_QWORD *)&v38->max_length >= 1 )
      {
        v39 = (unsigned int)*(_QWORD *)&v38->max_length;
        v40 = 0LL;
        while ( 1 )
        {
          if ( v40 >= v39 )
            goto LABEL_58;
          v41 = individualityList->max_length;
          if ( v41 >= 1 )
            break;
LABEL_54:
          ++v40;
          IndividualityFromValue = 0LL;
          if ( (__int64)v40 >= (int)v39 )
            return IndividualityFromValue;
        }
        v42 = 0LL;
        while ( (unsigned int)v42 < v41 )
        {
          if ( v38->m_Items[v40 + 1] == individualityList->m_Items[v42 + 1] )
            goto LABEL_56;
          if ( (int)++v42 >= v41 )
            goto LABEL_54;
        }
        goto LABEL_58;
      }
    }
  }
  LOBYTE(IndividualityFromValue) = 0;
  return IndividualityFromValue;
}


bool __fastcall ServantEntity__IsNameHide(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantChangeEntity_array *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  ServantChangeMaster_o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4B028C2 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B028C2 = 1;
  }
  Instance = (ServantChangeEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v10 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (ServantChangeEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v12, 0LL);
  if ( !v10 || (Instance = ServantChangeMaster__GetEntityList(v10, (int32_t)Instance, 0LL)) == 0LL )
LABEL_9:
    sub_1BC3264(Instance, v6);
  return *(_QWORD *)&Instance->max_length != 0LL;
}


bool __fastcall ServantEntity__IsNameTrue(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  ServantChangeMaster_o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4B028C0 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B028C0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v10 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v12, 0LL);
  if ( !v10 )
LABEL_8:
    sub_1BC3264(Instance, v6);
  return ServantChangeMaster__IsNameTrue(v10, (int32_t)Instance, 0LL);
}


bool __fastcall ServantEntity__IsNameTrueFromBattleSvt(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantChangeMaster_o *v10; // x20
  ServantChangeEntity_o *v11; // x0
  const MethodInfo *v12; // x1
  ServantChangeEntity_o *v13; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B028C1 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B028C1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v10 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v15, 0LL);
  if ( !v10 )
LABEL_11:
    sub_1BC3264(Instance, v6);
  v11 = ServantChangeMaster__TrueNameEntity(v10, (int32_t)Instance, 0LL);
  if ( v11 && (v13 = v11, ServantChangeEntity__IsEnable(v11, 0LL)) )
    return ServantChangeEntity__HasFlag(v13, 8, 0LL);
  else
    return ServantEntity__IsNameTrue(this, v12);
}


bool __fastcall ServantEntity__IsNotSameParty(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B028E1 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_22089/*"notSamePartyKey"*/, method);
    byte_4B028E1 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_22089/*"notSamePartyKey"*/, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity__IsPeriodLimitedServantByGachaId(
        ServantEntity_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_T__o *v11; // x20
  System_Func_int__bool__o *v12; // x21
  System_Collections_Generic_List_int__o *svtIdList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B028DF & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_int___, *(_QWORD *)&gachaId);
    sub_1BC3008(&Method_DataManager_GetMaster_GachaBaseCollateralMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&System_Func_int__bool__TypeInfo, v7);
    sub_1BC3008(&Method_ServantEntity__IsPeriodLimitedServantByGachaId_b__153_0__, v8);
    byte_4B028DF = 1;
  }
  svtIdList = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GachaBaseCollateralMaster___);
  if ( !Master_object )
    sub_1BC3264(0LL, v10);
  if ( GachaBaseCollateralMaster__TryGetPeriodLimitedSvtIdList(
         (GachaBaseCollateralMaster_o *)Master_object,
         &svtIdList,
         gachaId,
         0LL) )
  {
    v11 = (System_Collections_Generic_List_T__o *)svtIdList;
    v12 = (System_Func_int__bool__o *)sub_1BC3254(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v12,
      (Il2CppObject *)this,
      Method_ServantEntity__IsPeriodLimitedServantByGachaId_b__153_0__,
      0LL);
    return BasicHelper__Any_int_(
             v11,
             (System_Func_T__bool__o *)v12,
             (const MethodInfo_2FEAFB0 *)Method_BasicHelper_Any_int___);
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity__IsPeriodLimitedServantEquipByGachaId(
        ServantEntity_o *this,
        int32_t gachaId,
        int64_t summonSceenInTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  GachaSubEntity_o *OpenEntity_41233888; // x0
  GachaSubEntity_o *v15; // x20
  System_Collections_Generic_List_T__o *v16; // x20
  System_Func_int__bool__o *v17; // x21
  System_Collections_Generic_List_int__o *svtEquipIdList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B028E0 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_int___, *(_QWORD *)&gachaId);
    sub_1BC3008(&Method_DataManager_GetMaster_GachaAdjustAddMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_GachaSubMaster___, v8);
    sub_1BC3008(&DataManager_TypeInfo, v9);
    sub_1BC3008(&System_Func_int__bool__TypeInfo, v10);
    sub_1BC3008(&Method_ServantEntity__IsPeriodLimitedServantEquipByGachaId_b__154_0__, v11);
    byte_4B028E0 = 1;
  }
  svtEquipIdList = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GachaSubMaster___);
  if ( !Master_object )
    goto LABEL_14;
  OpenEntity_41233888 = GachaSubMaster__GetOpenEntity_41233888(
                          (GachaSubMaster_o *)Master_object,
                          gachaId,
                          summonSceenInTime,
                          0LL);
  if ( !OpenEntity_41233888 )
    return (unsigned __int8)OpenEntity_41233888 & 1;
  v15 = OpenEntity_41233888;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GachaAdjustAddMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1BC3264(Master_object, v13);
  if ( GachaAdjustAddMaster__TryGetPeriodLimitedSvtEquipIdList(
         (GachaAdjustAddMaster_o *)Master_object,
         &svtEquipIdList,
         v15->fields.adjustAddId,
         0LL) )
  {
    v16 = (System_Collections_Generic_List_T__o *)svtEquipIdList;
    v17 = (System_Func_int__bool__o *)sub_1BC3254(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v17,
      (Il2CppObject *)this,
      Method_ServantEntity__IsPeriodLimitedServantEquipByGachaId_b__154_0__,
      0LL);
    LOBYTE(OpenEntity_41233888) = BasicHelper__Any_int_(
                                    v16,
                                    (System_Func_T__bool__o *)v17,
                                    (const MethodInfo_2FEAFB0 *)Method_BasicHelper_Any_int___);
  }
  else
  {
    LOBYTE(OpenEntity_41233888) = 0;
  }
  return (unsigned __int8)OpenEntity_41233888 & 1;
}


bool __fastcall ServantEntity__IsSvtBuffTurnExtend(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B028D3 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_23622/*"svtBuffTurnExtend"*/, method);
    byte_4B028D3 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_23622/*"svtBuffTurnExtend"*/, v2);
}


bool __fastcall ServantEntity__IsThreeKnights(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_4B028D4 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_1BC3008(&int___TypeInfo, v3);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA,
      v4);
    byte_4B028D4 = 1;
  }
  v5 = (System_Array_o *)sub_1BC30B0(int___TypeInfo, 6LL);
  v8.fields.value = Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(v5, v8, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v6,
           this->fields.classId,
           (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall ServantEntity__SetName(
        ServantEntity_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.nameSave = name;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.nameSave, (int32_t)name, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity__TryGetAddCardSetting(
        ServantEntity_o *this,
        int32_t commandType,
        System_Int32_array **ids,
        System_Int32_array **weights,
        const MethodInfo *method)
{
  System_String_o *AddCardIdsKey; // x23
  const MethodInfo *v10; // x1
  System_String_o *AddCardWeightsKey; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  long double inited; // q0
  _QWORD *v15; // x21
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0
  System_Int32_array **v19; // x8
  System_Int32_array *v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  long double v23; // q0
  _QWORD *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0
  System_Int32_array **v28; // x8
  System_Int32_array *v29; // x1
  _QWORD *v31; // x25
  System_Collections_Generic_Dictionary_string__object__o *script; // x24
  __int64 v33; // x8
  __int64 v34; // x0
  __int64 v35; // x0
  System_Int32_array *IntArray; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  long double v39; // q0
  _QWORD *v40; // x23
  System_Collections_Generic_Dictionary_string__object__o *v41; // x22
  __int64 v42; // x8
  __int64 v43; // x0
  __int64 v44; // x0
  System_Int32_array *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x8
  System_Int32_array *v51; // x9

  if ( (byte_4B028E6 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Empty_int___, *(_QWORD *)&commandType);
    byte_4B028E6 = 1;
  }
  AddCardIdsKey = ServantEntity__GetAddCardIdsKey(commandType, *(const MethodInfo **)&commandType);
  AddCardWeightsKey = ServantEntity__GetAddCardWeightsKey(commandType, v10);
  if ( System_String__IsNullOrEmpty(AddCardIdsKey, 0LL) || System_String__IsNullOrEmpty(AddCardWeightsKey, 0LL) )
  {
    v15 = Method_System_Array_Empty_int___;
    v16 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v16 )
    {
      sub_1C134C8(Method_System_Array_Empty_int___);
      v16 = v15[7];
    }
    v17 = *(_QWORD *)(v16 + 16);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C1346C(inited);
    if ( !*(_DWORD *)(v17 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v17);
    v18 = *(_QWORD *)(v15[7] + 16LL);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1C1346C(inited);
    v19 = *(System_Int32_array ***)(v18 + 184);
    v20 = *v19;
    *weights = *v19;
    sub_1BC2FAC((CGThumbnailListItem_o *)weights, (int32_t)v20, v12, v13);
    v24 = Method_System_Array_Empty_int___;
    v25 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v25 )
    {
      sub_1C134C8(Method_System_Array_Empty_int___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1C1346C(v23);
    if ( !*(_DWORD *)(v26 + 224) )
      v23 = j_il2cpp_runtime_class_init_0(v26);
    v27 = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C1346C(v23);
    v28 = *(System_Int32_array ***)(v27 + 184);
    v29 = *v28;
    *ids = *v28;
    sub_1BC2FAC((CGThumbnailListItem_o *)ids, (int32_t)v29, v21, v22);
    return 0;
  }
  v31 = Method_System_Array_Empty_int___;
  script = this->fields.script;
  v33 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v33 )
  {
    sub_1C134C8(Method_System_Array_Empty_int___);
    v33 = v31[7];
  }
  v34 = *(_QWORD *)(v33 + 16);
  if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
    v34 = sub_1C1346C(inited);
  if ( !*(_DWORD *)(v34 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v34);
  v35 = *(_QWORD *)(v31[7] + 16LL);
  if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
    v35 = sub_1C1346C(inited);
  IntArray = EntityScriptUtil__GetIntArray(script, AddCardIdsKey, **(System_Int32_array ***)(v35 + 184), 0LL);
  *ids = IntArray;
  sub_1BC2FAC((CGThumbnailListItem_o *)ids, (int32_t)IntArray, v37, v38);
  v40 = Method_System_Array_Empty_int___;
  v41 = this->fields.script;
  v42 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v42 )
  {
    sub_1C134C8(Method_System_Array_Empty_int___);
    v42 = v40[7];
  }
  v43 = *(_QWORD *)(v42 + 16);
  if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
    v43 = sub_1C1346C(v39);
  if ( !*(_DWORD *)(v43 + 224) )
    v39 = j_il2cpp_runtime_class_init_0(v43);
  v44 = *(_QWORD *)(v40[7] + 16LL);
  if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
    v44 = sub_1C1346C(v39);
  v45 = EntityScriptUtil__GetIntArray(v41, AddCardWeightsKey, **(System_Int32_array ***)(v44 + 184), 0LL);
  *weights = v45;
  sub_1BC2FAC((CGThumbnailListItem_o *)weights, (int32_t)v45, v46, v47);
  if ( !*ids )
LABEL_46:
    sub_1BC3264(v48, v49);
  v50 = *(_QWORD *)&(*ids)->max_length;
  v51 = *weights;
  if ( v50 )
  {
    if ( !v51 )
      goto LABEL_46;
  }
  else
  {
    if ( !v51 )
      goto LABEL_46;
    if ( !*(_QWORD *)&v51->max_length )
      return 0;
  }
  return (_DWORD)v50 == v51->max_length;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity___IsPeriodLimitedServantByGachaId_b__153_0(
        ServantEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4B028E8 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
    byte_4B028E8 = 1;
  }
  v6 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v8, 0LL) == svtId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity___IsPeriodLimitedServantEquipByGachaId_b__154_0(
        ServantEntity_o *this,
        int32_t svtEquipId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4B028E9 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtEquipId);
    byte_4B028E9 = 1;
  }
  v6 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v8, 0LL) == svtEquipId;
}


bool __fastcall ServantEntity__checkFlag(ServantEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool __fastcall ServantEntity__checkIsCombineMaterialSvt(ServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 3;
}


bool __fastcall ServantEntity__checkIsHeroineSvt(ServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 2;
}


bool __fastcall ServantEntity__checkScript(ServantEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *Script; // x0

  if ( (byte_4B028B2 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4B028B2 = 1;
  }
  Script = ServantEntity__GetScript(this, (const MethodInfo *)key);
  if ( Script )
    LOBYTE(Script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)Script,
                       (Il2CppObject *)key,
                       (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)Script;
}


bool __fastcall ServantEntity__checkScript_41651668(
        ServantEntity_o *this,
        System_String_o *key,
        int32_t *param,
        const MethodInfo *method)
{
  Il2CppObject *ScriptValue; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  Il2CppObject *v10; // x20
  int32_t v11; // w8
  ServantEntity_o *v13; // x0
  System_String_o *v14; // x1
  float *v15; // x2
  const MethodInfo *v16; // x3
  long double v17; // q0

  if ( (byte_4B028B3 & 1) == 0 )
  {
    sub_1BC3008(&long_TypeInfo, key);
    byte_4B028B3 = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, (const MethodInfo *)param);
  v10 = ScriptValue;
  if ( !ScriptValue )
  {
    v11 = 0;
    goto LABEL_7;
  }
  if ( ScriptValue->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v11 = *(_DWORD *)j_il2cpp_object_unbox_0(ScriptValue, long_TypeInfo, v8, v9);
LABEL_7:
    *param = v11;
    return v10 != 0LL;
  }
  v17 = sub_1BC3524(ScriptValue);
  return ServantEntity__checkScript_41651832(v13, v14, v15, *(float *)&v17, v16);
}


bool __fastcall ServantEntity__checkScript_41651832(
        ServantEntity_o *this,
        System_String_o *key,
        float *param,
        float denominator,
        const MethodInfo *method)
{
  Il2CppObject *ScriptValue; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  Il2CppObject *v12; // x20
  float v13; // s0
  ServantEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4B028B4 & 1) == 0 )
  {
    sub_1BC3008(&long_TypeInfo, key);
    byte_4B028B4 = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, (const MethodInfo *)param);
  v12 = ScriptValue;
  if ( !ScriptValue )
  {
    v13 = 0.0;
    goto LABEL_7;
  }
  if ( ScriptValue->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v13 = (float)*(__int64 *)j_il2cpp_object_unbox_0(ScriptValue, long_TypeInfo, v10, v11) / denominator;
LABEL_7:
    *param = v13;
    return v12 != 0LL;
  }
  sub_1BC3524(ScriptValue);
  return ServantEntity__getDressId(v15, v16);
}


bool __fastcall ServantEntity__getBattleHeight(ServantEntity_o *this, float *height, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B028B8 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_16926/*"battleHeight"*/, height);
    byte_4B028B8 = 1;
  }
  return ServantEntity__checkScript_41651832(this, (System_String_o *)StringLiteral_16926/*"battleHeight"*/, height, 1000.0, v3);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantEntity__getBattleName(
        ServantEntity_o *this,
        bool isTrueNameForce,
        int32_t limitCount,
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
  const MethodInfo *v15; // x1
  EventServantEntity_array *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v19; // x23
  __int64 v20; // x24
  EventServantMaster_o *v21; // x22
  __int64 v22; // x2
  int max_length; // w8
  EventServantEntity_array *v24; // x22
  unsigned int v25; // w23
  Il2CppObject *v26; // x0
  __int64 v27; // x22
  __int64 v28; // x23
  ServantChangeMaster_o *v29; // x21
  ServantChangeEntity_o *v30; // x0
  ServantChangeEntity_o *v31; // x21
  Il2CppObject *v33; // x0
  __int64 v34; // x22
  __int64 v35; // x23
  ServantLimitAddMaster_o *v36; // x21
  const MethodInfo *v37; // x4
  const MethodInfo *v38; // x1
  System_String_o *OverwriteServantBattleName; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v40; // x20
  System_String_o *v41; // x0
  Il2CppObject *v42; // x0
  __int64 v43; // x21
  __int64 v44; // x22
  ServantChangeMaster_o *v45; // x20
  ServantChangeEntity_o *v46; // x0
  ServantLimitAddEntity_o *v47; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *battleName; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4B028BF & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventServantMaster___, isTrueNameForce);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantChangeMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BC3008(&StringLiteral_1/*""*/, v14);
    byte_4B028BF = 1;
  }
  battleName = 0LL;
  v47 = 0LL;
  entity = 0LL;
  if ( !ServantEntity__GetIsEventJoin(this, (const MethodInfo *)isTrueNameForce)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v15) )
  {
    goto LABEL_16;
  }
  battleName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventServantMaster___);
  v20 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v21 = (EventServantMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v50.fields.currentCryptoKey = v20;
  *(_QWORD *)&v50.fields.fakeValue = v19;
  Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v50, 0LL);
  if ( !v21 )
    goto LABEL_48;
  Instance = EventServantMaster__GetEntities(v21, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_48;
  max_length = Instance->max_length;
  v24 = Instance;
  if ( max_length < 1 )
  {
    if ( !isTrueNameForce )
      goto LABEL_27;
LABEL_16:
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    v26 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
    v28 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v27 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v29 = (ServantChangeMaster_o *)v26;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v51.fields.currentCryptoKey = v28;
    *(_QWORD *)&v51.fields.fakeValue = v27;
    Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v51, 0LL);
    if ( !v29 )
      goto LABEL_48;
    v30 = ServantChangeMaster__TrueNameEntity(v29, (int32_t)Instance, 0LL);
    if ( !v30 )
      goto LABEL_27;
    v31 = v30;
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
    entity = 0LL;
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                             &entity,
                                             v31->fields.svtId,
                                             (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return (System_String_o *)entity[4].monitor;
    }
    else
    {
LABEL_27:
      if ( (limitCount & 0x80000000) == 0 )
      {
        Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_48;
        v33 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        v47 = 0LL;
        v35 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v34 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v36 = (ServantLimitAddMaster_o *)v33;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v52.fields.currentCryptoKey = v35;
        *(_QWORD *)&v52.fields.fakeValue = v34;
        Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                 v52,
                                                 0LL);
        if ( !v36 )
          goto LABEL_48;
        ServantLimitAddMaster__TryGetEntity(v36, &v47, (int32_t)Instance, limitCount, v37);
        if ( v47 )
        {
          OverwriteServantBattleName = ServantLimitAddEntity__GetOverwriteServantBattleName(v47, v38);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(OverwriteServantBattleName, 0LL);
          v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48059904(v40, 0LL);
          if ( !System_String__IsNullOrEmpty(v41, 0LL) )
          {
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48059904(v40, 0LL);
          }
        }
      }
      Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v42 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        v44 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v43 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v45 = (ServantChangeMaster_o *)v42;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v53.fields.currentCryptoKey = v44;
        *(_QWORD *)&v53.fields.fakeValue = v43;
        Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                 v53,
                                                 0LL);
        if ( v45 )
        {
          v46 = ServantChangeMaster__GetEnableEntity(v45, (int32_t)Instance, 0LL);
          if ( v46 )
            return v46->fields.battleName;
          else
            return this->fields.battleName;
        }
      }
    }
LABEL_48:
    sub_1BC3264(Instance, v17);
  }
  v25 = 0;
  while ( 1 )
  {
    if ( v25 >= max_length )
      sub_1BC326C(Instance, v17, v22);
    Instance = (EventServantEntity_array *)v24->m_Items[v25];
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)EventServantEntity__TryGetBattleName(
                                             (EventServantEntity_o *)Instance,
                                             &battleName,
                                             0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return battleName;
    max_length = v24->max_length;
    if ( (int)++v25 >= max_length )
      goto LABEL_16;
  }
}


int32_t __fastcall ServantEntity__getCameraActionId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B028B6 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_17546/*"cameraActionId"*/, method);
    byte_4B028B6 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_41651668(this, (System_String_o *)StringLiteral_17546/*"cameraActionId"*/, &param, v2) )
    return param;
  else
    return 0;
}


System_String_o *__fastcall ServantEntity__getClassName(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o **p_monitor; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B028AA & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_1BC3008(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1BC3008(&StringLiteral_1/*""*/, v5);
    byte_4B028AA = 1;
  }
  entity = 0LL;
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  if ( !SvtType__IsServantEquip(this->fields.type, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
    {
      sub_1BC3264(Instance, v8);
    }
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      &entity,
      this->fields.classId,
      (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( entity )
      p_monitor = (System_String_o **)&entity[1].monitor;
  }
  return *p_monitor;
}


System_Int32_array *__fastcall ServantEntity__getClassPassive(ServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.classPassive;
}


void __fastcall ServantEntity__getClassSkillInfo(
        ServantEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  BalanceConfig_c *v18; // x0
  System_Int32_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_String_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_String_array *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v31; // x0
  struct System_Int32_array *classPassive; // x24
  __int64 v33; // x26
  __int64 v34; // x27
  ServantLimitAddMaster_o *v35; // x25
  const MethodInfo *v36; // x4
  const MethodInfo *v37; // x2
  unsigned __int64 v38; // x25
  __int64 v39; // x26
  __int64 v40; // x28
  int32_t v41; // w23
  System_Int32_array *v42; // x8
  System_String_array *v43; // x8
  System_String_array *v44; // x9
  SkillEntity_o *v45; // [xsp+0h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4B028AF & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, idList);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v11);
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillMaster___, v12);
    sub_1BC3008(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v13);
    sub_1BC3008(&int___TypeInfo, v14);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BC3008(&string___TypeInfo, v17);
    byte_4B028AF = 1;
  }
  v18 = BalanceConfig_TypeInfo;
  v45 = 0LL;
  entity = 0LL;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  v19 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, (unsigned int)v18->static_fields->SvtPassiveSkillListMax);
  *idList = v19;
  sub_1BC2FAC((CGThumbnailListItem_o *)idList, (int32_t)v19, v20, v21);
  v22 = (System_String_array *)sub_1BC30B0(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v22;
  sub_1BC2FAC((CGThumbnailListItem_o *)titleList, (int32_t)v22, v23, v24);
  v25 = (System_String_array *)sub_1BC30B0(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v25;
  sub_1BC2FAC((CGThumbnailListItem_o *)explanationList, (int32_t)v25, v26, v27);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v31 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  classPassive = this->fields.classPassive;
  v34 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v33 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v35 = (ServantLimitAddMaster_o *)v31;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v47.fields.currentCryptoKey = v34;
  *(_QWORD *)&v47.fields.fakeValue = v33;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v47, 0LL);
  if ( !v35 )
    goto LABEL_31;
  Instance = (DataManager_o *)ServantLimitAddMaster__TryGetEntity(v35, &entity, (int32_t)Instance, dispLimitCount, v36);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_31;
    Instance = (DataManager_o *)ServantLimitAddEntity__HasKeyOverwriteClassPassive(entity, v29);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        Instance = (DataManager_o *)ServantLimitAddEntity__GetOverwriteClassPassive(entity, classPassive, v37);
        classPassive = (struct System_Int32_array *)Instance;
        goto LABEL_15;
      }
LABEL_31:
      sub_1BC3264(Instance, v29);
    }
  }
LABEL_15:
  if ( classPassive && (int)*(_QWORD *)&classPassive->max_length >= 1 )
  {
    v38 = 0LL;
    v39 = (unsigned int)*(_QWORD *)&classPassive->max_length;
    v40 = 32LL;
    while ( v38 < classPassive->max_length )
    {
      if ( !MasterData_object )
        goto LABEL_31;
      v41 = classPassive->m_Items[v38 + 1];
      Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    (Il2CppObject **)&v45,
                                    v41,
                                    (const MethodInfo_32AF0BC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v42 = *idList;
        if ( !*idList )
          goto LABEL_31;
        if ( v38 >= v42->max_length )
          break;
        v42->m_Items[v38 + 1] = v41;
        v43 = *titleList;
        if ( !*titleList )
          goto LABEL_31;
        v44 = *explanationList;
        if ( !*explanationList )
          goto LABEL_31;
        Instance = (DataManager_o *)v45;
        if ( !v45 )
          goto LABEL_31;
        if ( v38 >= v43->max_length || v38 >= v44->max_length )
          break;
        SkillEntity__getSkillMessageInfo(
          v45,
          (System_String_o **)((char *)v43 + v40),
          (System_String_o **)((char *)v44 + v40),
          0,
          0LL);
      }
      ++v38;
      v40 += 8LL;
      if ( v39 == v38 )
        return;
    }
    sub_1BC326C(Instance, v29, v37);
  }
}


int32_t __fastcall ServantEntity__getDressId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B028B5 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_23775/*"tdTransform"*/, method);
    byte_4B028B5 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_41651668(this, (System_String_o *)StringLiteral_23775/*"tdTransform"*/, &param, v2) )
    return param;
  else
    return 0;
}


float __fastcall ServantEntity__getHeadUpY(ServantEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.hpGaugeY / 1000.0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantEntity__getHiddenName(
        ServantEntity_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x22
  __int64 v12; // x23
  ServantChangeMaster_o *v13; // x21
  ServantChangeEntity_o *v14; // x0
  const MethodInfo *v15; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B028BD & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&limitCount);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B028BD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v12 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v13 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v18, 0LL);
  if ( !v13 )
LABEL_12:
    sub_1BC3264(Instance, v9);
  v14 = ServantChangeMaster__GetHiddenEntity(v13, (int32_t)Instance, 0LL);
  if ( v14 )
    return v14->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, -1, 0, v15);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48059904(Name, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantEntity__getIndividuality(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t LimitCountByDispLimit; // w0
  __int64 v13; // x20
  __int64 v14; // x22
  int32_t v15; // w21
  const MethodInfo *v16; // x2
  int32_t v17; // w20
  System_Int32_array *IndividualityList; // x20
  Il2CppObject *Master_object; // x0
  __int64 v20; // x23
  __int64 v21; // x24
  ServantLimitAddMaster_o *v22; // x22
  struct System_Int32_array *v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x4
  const MethodInfo *v26; // x3
  ServantLimitAddEntity_o *v27; // x2
  struct System_Int32_array *individuality; // x1
  __int64 v29; // x8
  __int64 v30; // x9
  System_Array_o *v31; // x21
  ServantEntity_o *v32; // x0
  struct System_Int32_array *v34; // x0
  struct System_Int32_array **p_individuality; // x19
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4B028AC & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitAddMaster___, *(_QWORD *)&limitCount);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v8);
    sub_1BC3008(&int___TypeInfo, v9);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BC3008(&ServantIndividualityMaster_TypeInfo, v11);
    byte_4B028AC = 1;
  }
  entity = 0LL;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  v14 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v15 = LimitCountByDispLimit;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v14;
  *(_QWORD *)&v39.fields.fakeValue = v13;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v39, 0LL);
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v17, v15, v16);
  if ( !IndividualityList )
    IndividualityList = this->fields.individuality;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v21 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v22 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v21;
  *(_QWORD *)&v40.fields.fakeValue = v20;
  v23 = (struct System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v40, 0LL);
  if ( !v22 )
    goto LABEL_30;
  v23 = (struct System_Int32_array *)ServantLimitAddMaster__TryGetEntity(v22, &entity, (int32_t)v23, v15, v25);
  if ( ((unsigned __int8)v23 & 1) != 0 )
  {
    v27 = entity;
    if ( !entity )
      goto LABEL_30;
    individuality = entity->fields.individuality;
    if ( individuality )
    {
      v29 = *(_QWORD *)&individuality->max_length;
      if ( v29 )
      {
        if ( !IndividualityList || (v30 = *(_QWORD *)&IndividualityList->max_length) == 0 )
        {
          v32 = this;
          return ServantEntity__GetSubAttrReplacedIndividualityArray(v32, individuality, v27, v26);
        }
        v31 = (System_Array_o *)sub_1BC30B0(int___TypeInfo, (unsigned int)(v30 + v29));
        System_Array__CopyTo((System_Array_o *)IndividualityList, v31, 0, 0LL);
        if ( entity )
        {
          v23 = entity->fields.individuality;
          if ( v23 )
          {
            System_Array__CopyTo((System_Array_o *)v23, v31, IndividualityList->max_length, 0LL);
            v27 = entity;
            v32 = this;
            individuality = (struct System_Int32_array *)v31;
            return ServantEntity__GetSubAttrReplacedIndividualityArray(v32, individuality, v27, v26);
          }
        }
LABEL_30:
        sub_1BC3264(v23, v24);
      }
    }
  }
  if ( IndividualityList )
  {
    v27 = entity;
    v32 = this;
    individuality = IndividualityList;
    return ServantEntity__GetSubAttrReplacedIndividualityArray(v32, individuality, v27, v26);
  }
  v34 = (struct System_Int32_array *)sub_1BC30B0(int___TypeInfo, 0LL);
  this->fields.individuality = v34;
  p_individuality = &this->fields.individuality;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_individuality, (int32_t)v34, v36, v37);
  return *p_individuality;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantEntity__getName(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t imageLimitCount,
        bool addIdentify,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x24
  __int64 v18; // x25
  ServantChangeMaster_o *v19; // x23
  ServantChangeEntity_o *v20; // x0
  const MethodInfo *v21; // x5
  System_String_o *name; // x21
  Il2CppObject *Master_object; // x0
  __int64 v24; // x20
  __int64 v25; // x22
  ServantAddMaster_o *v26; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v28; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4B028BB & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&limitCount);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantAddMaster___, v9);
    sub_1BC3008(&DataManager_TypeInfo, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B028BB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v18 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v19 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v18;
  *(_QWORD *)&v29.fields.fakeValue = v17;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v29, 0LL);
  if ( !v19 )
    goto LABEL_19;
  v20 = ServantChangeMaster__GetEnableEntity(v19, (int32_t)Instance, 0LL);
  if ( v20 )
  {
    name = v20->fields.name;
    if ( addIdentify )
      goto LABEL_9;
  }
  else
  {
    v28 = ServantEntity__GetName(this, limitCount, 0, imageLimitCount, 0, v21);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48059904(v28, 0LL);
    if ( addIdentify )
    {
LABEL_9:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantAddMaster___);
      v25 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v24 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v26 = (ServantAddMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v30.fields.currentCryptoKey = v25;
      *(_QWORD *)&v30.fields.fakeValue = v24;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v30, 0LL);
      if ( v26 )
        return ServantAddMaster__AddIdentifyText(v26, (int32_t)Instance, name, 0LL);
LABEL_19:
      sub_1BC3264(Instance, v15);
    }
  }
  return name;
}


System_String_o *__fastcall ServantEntity__getName_41654312(
        ServantEntity_o *this,
        System_String_o **ruby,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x23
  __int64 v14; // x24
  ServantChangeMaster_o *v15; // x22
  ServantChangeEntity_o *v16; // x0
  const MethodInfo *v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_o *v20; // x1
  ServantChangeEntity_o *v21; // x22
  System_String_o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4B028BE & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantChangeMaster___, ruby);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B028BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v14 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v15 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v14;
  *(_QWORD *)&v28.fields.fakeValue = v13;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v28, 0LL);
  if ( !v15 )
LABEL_12:
    sub_1BC3264(Instance, v11);
  v16 = ServantChangeMaster__GetEnableEntity(v15, (int32_t)Instance, 0LL);
  if ( v16 )
  {
    v20 = v16->fields.ruby;
    v21 = v16;
    *ruby = v20;
    sub_1BC2FAC((CGThumbnailListItem_o *)ruby, (int32_t)v20, v18, v19);
    return v21->fields.name;
  }
  else
  {
    v23 = ServantEntity__GetRuby(this, v17);
    *ruby = v23;
    sub_1BC2FAC((CGThumbnailListItem_o *)ruby, (int32_t)v23, v24, v25);
    Name = ServantEntity__GetName(this, limitCount, 0, -1, 0, v26);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48059904(Name, 0LL);
  }
}


System_Int32_array *__fastcall ServantEntity__getScriptIntArrayParam(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Int32_array *result; // x0
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 methodPtr_low; // x9
  ServantEntity___c_c *v13; // x0
  System_Converter_object__int__o *_9__138_0; // x20
  Il2CppObject *v15; // x21
  struct ServantEntity___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_int__o *v19; // x0
  __int64 v20; // x1

  if ( (byte_4B028D1 & 1) == 0 )
  {
    sub_1BC3008(&System_Converter_object__int__TypeInfo, key);
    sub_1BC3008(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1BC3008(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_1BC3008(&Method_ServantEntity___c__getScriptIntArrayParam_b__138_0__, v8);
    sub_1BC3008(&ServantEntity___c_TypeInfo, v9);
    byte_4B028D1 = 1;
  }
  result = (System_Int32_array *)ServantEntity__GetScriptValue(this, key, method);
  if ( result )
  {
    v11 = (System_Collections_Generic_List_object__o *)result;
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->obj.klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (System_Collections_Generic_List_object__c *)result->obj.klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      v13 = ServantEntity___c_TypeInfo;
      if ( !ServantEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantEntity___c_TypeInfo);
        v13 = ServantEntity___c_TypeInfo;
      }
      _9__138_0 = v13->static_fields->__9__138_0;
      if ( !_9__138_0 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = ServantEntity___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v13->static_fields->__9;
        _9__138_0 = (System_Converter_object__int__o *)sub_1BC3254(System_Converter_object__int__TypeInfo);
        System_Converter_object__int____ctor(
          _9__138_0,
          v15,
          Method_ServantEntity___c__getScriptIntArrayParam_b__138_0__,
          0LL);
        static_fields = ServantEntity___c_TypeInfo->static_fields;
        static_fields->__9__138_0 = _9__138_0;
        sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__138_0, (int32_t)_9__138_0, v17, v18);
      }
      v19 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                        v11,
                                                        (System_Converter_T__TOutput__o *)_9__138_0,
                                                        (const MethodInfo_2F31480 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( v19 )
        return System_Collections_Generic_List_int___ToArray(
                 v19,
                 (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    else
    {
      sub_1BC3524(result);
    }
    sub_1BC3264(v19, v20);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantEntity__getTrueName(
        ServantEntity_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19

  if ( (byte_4B028BC & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, *(_QWORD *)&limitCount);
    byte_4B028BC = 1;
  }
  Name = ServantEntity__GetName(this, limitCount, 0, -1, 0, v3);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48059904(Name, 0LL);
}


bool __fastcall ServantEntity__get_IsAllClass(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsAll(this->fields.classId, 0LL);
}


bool __fastcall ServantEntity__get_IsCampaignSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return BYTE1(this->fields.flag) & 1;
}


bool __fastcall ServantEntity__get_IsChocolateSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 5) & 1;
}


bool __fastcall ServantEntity__get_IsCombineMaterial(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsCombineMaterial(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsEnemy(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsEnemy(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsEnemyCollection(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsEnemyCollection(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsEnemyCollectionDetail(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsEnemyCollectionDetail(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsEventRewardSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return (BYTE1(this->fields.flag) >> 2) & 1;
}


bool __fastcall ServantEntity__get_IsEventSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return (BYTE1(this->fields.flag) >> 1) & 1;
}


bool __fastcall ServantEntity__get_IsExpUp(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsExpUp(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsFriendShipSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 2) & 1;
}


bool __fastcall ServantEntity__get_IsIgnoreCombineLimitSpecial(ServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 3) & 1;
}


bool __fastcall ServantEntity__get_IsKeepServant(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsKeepServant(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsKeepServantEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsKeepServantEquip(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsManaExchangeSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return LOBYTE(this->fields.flag) >> 7;
}


bool __fastcall ServantEntity__get_IsOrganization(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsOrganization(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsServant(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsServant(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsServantCollection(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsServantCollection(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsServantEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsServantEquip(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsServantEquipMaterial(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsSvtEqMaterial(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsServantMaterialTd(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsSvtMaterialTd(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsStatusUp(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsStatusUp(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsSvtEqMaterial(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsSvtEqMaterial(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsSvtEquipExp(ServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 4) & 1;
}


bool __fastcall ServantEntity__get_IsUsableOnlyNpcSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool __fastcall ServantEntity__isInvalidSkillShift(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B028B9 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_20667/*"invalidSkillShift"*/, method);
    byte_4B028B9 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_20667/*"invalidSkillShift"*/, v2);
}


void __fastcall ServantEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B028EA & 1) == 0 )
  {
    sub_1BC3008(&ServantEntity___c_TypeInfo, v1);
    byte_4B028EA = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(ServantEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantEntity___c_TypeInfo->static_fields->__9 = (struct ServantEntity___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)ServantEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ServantEntity___c___ctor(ServantEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantEntity___c___getScriptIntArrayParam_b__138_0(
        ServantEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( !x )
    sub_1BC3264(this, 0LL);
  v3 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                            x,
                            x->klass->vtable[4].methodPtr,
                            method);
  return System_Int32__Parse(v3, 0LL);
}


void __fastcall ServantEntity___c__DisplayClass102_0___ctor(
        ServantEntity___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantEntity___c__DisplayClass102_0___GetScript_b__0(
        ServantEntity___c__DisplayClass102_0_o *this,
        System_Collections_Generic_KeyValuePair_string__object__o x,
        const MethodInfo *method)
{
  Il2CppObject *value; // x19
  Il2CppObject *key; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *result; // x0

  value = x.fields.value;
  key = (Il2CppObject *)x.fields.key;
  if ( (byte_4B028EB & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__Add__, x.fields.key);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v7);
    byte_4B028EB = 1;
  }
  result = this->fields.result;
  if ( !result )
    sub_1BC3264(0LL, x.fields.key);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)result,
    key,
    value,
    (const MethodInfo_336CFE8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
}