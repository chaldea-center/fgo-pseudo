void __fastcall SkillLvEntity___ctor(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F9247 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F9247 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall SkillLvEntity___ctor_23621364(
        SkillLvEntity_o *this,
        SkillLvEntity_o *srcEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Array_o *funcId; // x0
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x21
  struct System_Int32_array *v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Array_o *svals; // x0
  Il2CppObject *v26; // x0
  struct System_String_array *v27; // x1
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_IDictionary_TKey__TValue__o *script; // x20
  System_Collections_Generic_Dictionary_string__string__o *v36; // x21

  if ( (byte_40F9248 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, srcEntity);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object___ctor___66681176, v5);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B16FFC(&int___TypeInfo, v7);
    sub_B16FFC(&string___TypeInfo, v8);
    byte_40F9248 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
  if ( !srcEntity )
    sub_B170D4();
  this->fields.skillId = srcEntity->fields.skillId;
  this->fields.lv = srcEntity->fields.lv;
  this->fields.chargeTurn = srcEntity->fields.chargeTurn;
  this->fields.priority = srcEntity->fields.priority;
  funcId = (System_Array_o *)srcEntity->fields.funcId;
  if ( funcId && (v16 = System_Array__Clone(funcId, 0LL)) != 0LL )
  {
    v17 = v16;
    v18 = (struct System_Int32_array *)sub_B170BC(v16, int___TypeInfo);
    if ( !v18 )
      goto LABEL_12;
  }
  else
  {
    v18 = 0LL;
  }
  this->fields.funcId = v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.funcId,
    (System_Int32_array **)v18,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  svals = (System_Array_o *)srcEntity->fields.svals;
  if ( !svals )
    goto LABEL_13;
  v26 = System_Array__Clone(svals, 0LL);
  if ( !v26 )
    goto LABEL_13;
  v17 = v26;
  v27 = (struct System_String_array *)sub_B170BC(v26, string___TypeInfo);
  if ( v27 )
    goto LABEL_14;
LABEL_12:
  sub_B173C8(v17);
LABEL_13:
  v27 = 0LL;
LABEL_14:
  this->fields.svals = v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svals,
    (System_Int32_array **)v27,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.skillDetailId = srcEntity->fields.skillDetailId;
  script = (System_Collections_Generic_IDictionary_TKey__TValue__o *)srcEntity->fields.script;
  if ( script )
  {
    v36 = (System_Collections_Generic_Dictionary_string__string__o *)sub_B170CC(
                                                                       System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                       v28,
                                                                       v29,
                                                                       v30,
                                                                       v31);
    System_Collections_Generic_Dictionary_string__string____ctor_47854076(
      v36,
      script,
      (const MethodInfo_2DA31FC *)Method_System_Collections_Generic_Dictionary_string__object___ctor___66681176);
  }
  else
  {
    v36 = 0LL;
  }
  this->fields.script = (struct System_Collections_Generic_Dictionary_string__object__o *)v36;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.script,
    (System_Int32_array **)v36,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__CreatePK(int32_t skillId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_40F9246 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_40F9246 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           skillId,
           lv,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SkillLvEntity__CreatePrimaryKey(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillLvEntity__CreatePK(this->fields.skillId, this->fields.lv, v2);
}


int32_t __fastcall SkillLvEntity__GetActNpcServantId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F926D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1805/*"ActNpcServantId"*/, method);
    byte_40F926D = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_1805/*"ActNpcServantId"*/, -1, v2);
}


System_Int32_array *__fastcall SkillLvEntity__GetActRarity(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40F9264 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16168/*"actRarity"*/, method);
    byte_40F9264 = 1;
  }
  return SkillLvEntity__GetIntArrayFromScript(this, (System_String_o *)StringLiteral_16168/*"actRarity"*/, v2);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x10
  UnityEngine_Purchasing_IStoreExtension_o *v21; // x20
  System_Collections_Generic_List_int__o *v23; // x19
  int monitor; // w8
  unsigned int v25; // w21
  __int64 v26; // x0
  int32_t *v27; // x0
  SkillLvEntity_o *v28; // x0
  const MethodInfo *v29; // x1

  if ( (byte_40F9260 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B16FFC(&long_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_B16FFC(&StringLiteral_1837/*"AddIndiv"*/, v12);
    byte_40F9260 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_1837/*"AddIndiv"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v14 = this->fields.script;
  if ( !v14 )
    goto LABEL_24;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v14,
           (System_Type_o *)StringLiteral_1837/*"AddIndiv"*/,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item
    && (v20 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
        *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20) )
  {
    v21 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v20 - 1] == System_Collections_Generic_List_object__TypeInfo
        ? Item
        : 0LL;
  }
  else
  {
    v21 = 0LL;
  }
  v23 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18,
                                                    v19);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v21 )
    goto LABEL_24;
  monitor = (int)v21[1].monitor;
  if ( monitor < 1 )
  {
LABEL_22:
    if ( v23 )
      return System_Collections_Generic_List_int___ToArray(
               v23,
               (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_24:
    sub_B170D4();
  }
  v25 = 0;
  while ( 1 )
  {
    if ( monitor <= v25 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( !v23 )
      goto LABEL_24;
    v26 = *((_QWORD *)&v21[1].klass->_1.byval_arg.data + (int)v25);
    if ( !v26 )
      goto LABEL_24;
    if ( *(Il2CppClass **)(*(_QWORD *)v26 + 64LL) != long_TypeInfo->_1.element_class )
      break;
    v27 = (int32_t *)j_il2cpp_object_unbox_0(v26);
    System_Collections_Generic_List_int___Add(
      v23,
      *v27,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    monitor = (int)v21[1].monitor;
    if ( (int)++v25 >= monitor )
      goto LABEL_22;
  }
  v28 = (SkillLvEntity_o *)sub_B173C8(v26);
  return (System_Int32_array *)SkillLvEntity__GetFuncIndexForSplitFuncSequence(v28, v29);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillActorType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F926B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16198/*"additionalSkillActorType"*/, method);
    byte_40F926B = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16198/*"additionalSkillActorType"*/, -1, v2);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9269 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16199/*"additionalSkillId"*/, method);
    byte_40F9269 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16199/*"additionalSkillId"*/, -1, v2);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillLv(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F926A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16200/*"additionalSkillLv"*/, method);
    byte_40F926A = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16200/*"additionalSkillLv"*/, 1, v2);
}


int32_t __fastcall SkillLvEntity__GetBattleStartRemainingTurn(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F926C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16589/*"battleStartRemainingTurn"*/, method);
    byte_40F926C = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16589/*"battleStartRemainingTurn"*/, 0, v2);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  WebViewManager_o *v23; // x0
  const MethodInfo *v24; // x1
  WebViewManager_o *v25; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x0
  System_Collections_Generic_Dictionary_string__int__array *Values; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  struct System_Int32_array *v30; // x8
  System_Xml_XmlQualifiedName_o **v31; // x27
  System_Collections_Generic_Dictionary_string__int__array *v32; // x24
  unsigned __int64 v33; // x23
  System_Collections_Generic_Dictionary_string__int__o **m_Items; // x20
  unsigned __int64 max_length; // x9
  unsigned __int64 v36; // x8
  System_Collections_Generic_Dictionary_string__int__o *v37; // x25
  EventUpValInfo_o *v38; // x8
  System_Xml_XmlQualifiedName_o **v39; // x9
  System_Xml_XmlQualifiedName_o *v40; // x1
  EventUpValInfo_o **v41; // x27
  System_Xml_XmlQualifiedName_o **v42; // x28
  int32_t Item; // w0
  EventUpValInfo_o **v44; // x8
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  int32_t v49; // w27
  FunctionEntity_o *v50; // x28
  int32_t v51; // w0
  int32_t v52; // w0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *dropList; // x0
  int32_t dispLimitCount; // [xsp+4h] [xbp-7Ch]
  int32_t limitCount; // [xsp+8h] [xbp-78h]
  EventUpValInfo_o **v57; // [xsp+10h] [xbp-70h]
  ServantEntity_o *v58; // [xsp+18h] [xbp-68h]
  char v59; // [xsp+20h] [xbp-60h]
  EventDropUpValInfo_o *v60; // [xsp+20h] [xbp-60h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v5 = eventUpVallInfo;
  if ( (byte_40F9251 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionGroupMaster___, eventUpVallInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v12);
    sub_B16FFC(&EventDropUpValInfo_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&StringLiteral_1102/*"2"*/, v16);
    sub_B16FFC(&StringLiteral_13513/*"Target"*/, v17);
    sub_B16FFC(&StringLiteral_1004/*"1"*/, v18);
    sub_B16FFC(&StringLiteral_951/*"0"*/, v19);
    byte_40F9251 = 1;
  }
  entity = 0LL;
  funcId = this->fields.funcId;
  if ( funcId )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionMaster___);
      v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v23 )
      {
        DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v23,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
        if ( *v5 )
        {
          if ( (*v5)->fields.svtId < 1 )
          {
            v58 = 0LL;
          }
          else
          {
            v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !v25 )
              goto LABEL_48;
            v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)v25,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
            if ( !*v5 || !v26 )
              goto LABEL_48;
            v58 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v26,
                                       (*v5)->fields.svtId,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          }
          Values = SkillLvEntity__getValues(this, v24);
          v30 = this->fields.funcId;
          if ( v30 )
          {
            v59 = 0;
            v31 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_1102/*"2"*/;
            v32 = Values;
            v33 = 0LL;
            m_Items = Values->m_Items;
            do
            {
              max_length = v30->max_length;
              if ( (__int64)v33 >= (int)max_length )
              {
                LOBYTE(funcId) = v59;
                return (char)funcId;
              }
              if ( v33 >= max_length )
                goto LABEL_52;
              if ( !MasterData_WarQuestSelectionMaster )
                break;
              Values = (System_Collections_Generic_Dictionary_string__int__array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                     MasterData_WarQuestSelectionMaster,
                                                                                     &entity,
                                                                                     v30->m_Items[v33 + 1],
                                                                                     (const MethodInfo_266F3E4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Values & 1) != 0 )
              {
                if ( !entity || !questPhaseEntity )
                  break;
                Values = (System_Collections_Generic_Dictionary_string__int__array *)QuestPhaseEntity__IsMatchIndividuality(
                                                                                       questPhaseEntity,
                                                                                       *(System_Int32_array **)&entity->fields.startType,
                                                                                       0LL);
                if ( ((unsigned __int8)Values & 1) != 0 )
                {
                  if ( !v32 )
                    break;
                  v36 = v32->max_length;
                  if ( (__int64)v33 >= (int)v36 )
                  {
                    LOBYTE(funcId) = 0;
                    return (char)funcId;
                  }
                  if ( v33 >= v36 )
                  {
LABEL_52:
                    sub_B17100(Values, v28, v29);
                    sub_B170A0();
                  }
                  v37 = m_Items[v33];
                  if ( v37 )
                  {
                    if ( !entity )
                      break;
                    if ( LODWORD(entity->fields.age) == 111 )
                    {
                      Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                             (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v33],
                                                                                             *v31,
                                                                                             (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                      if ( ((unsigned __int8)Values & 1) != 0 )
                      {
                        Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                               v37,
                                                                                               (System_String_o *)*v31,
                                                                                               (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                        if ( (int)Values < 1 )
                          goto LABEL_33;
                        if ( v58 )
                        {
                          v38 = *v5;
                          if ( !*v5 )
                            break;
                          v39 = v31;
                          v40 = *v31;
                          dispLimitCount = v38->fields.dispLimitCount;
                          limitCount = v38->fields.limitCount;
                          v41 = v5;
                          v42 = v39;
                          Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                                   v37,
                                   (System_String_o *)v40,
                                   (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                          Values = (System_Collections_Generic_Dictionary_string__int__array *)ServantEntity__IsIndividuality(
                                                                                                 v58,
                                                                                                 limitCount,
                                                                                                 dispLimitCount,
                                                                                                 Item,
                                                                                                 0LL);
                          v44 = v41;
                          v31 = v42;
                          v5 = v44;
                          if ( ((unsigned __int8)Values & 1) != 0 )
                          {
LABEL_33:
                            v57 = v5;
                            if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                   (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v37,
                                   (System_Xml_XmlQualifiedName_o *)StringLiteral_13513/*"Target"*/,
                                   (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                            {
                              v49 = System_Collections_Generic_Dictionary_string__int___get_Item(
                                      v37,
                                      (System_String_o *)StringLiteral_13513/*"Target"*/,
                                      (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                            }
                            else
                            {
                              v49 = 0;
                            }
                            v50 = (FunctionEntity_o *)entity;
                            v60 = (EventDropUpValInfo_o *)sub_B170CC(EventDropUpValInfo_TypeInfo, v45, v46, v47, v48);
                            EventDropUpValInfo___ctor_29425888(v60, 0, v50, v49, 0LL);
                            if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                                   v37,
                                   (System_String_o *)StringLiteral_951/*"0"*/,
                                   (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                            {
                              v51 = System_Collections_Generic_Dictionary_string__int___get_Item(
                                      v37,
                                      (System_String_o *)StringLiteral_1004/*"1"*/,
                                      (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                              v5 = v57;
                              v31 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_1102/*"2"*/;
                              if ( !*v57 || !v60 )
                                break;
                              EventDropUpValInfo__SetAddCount(v60, v51, (*v57)->fields.equipSvtId > 0, 0, 0LL);
                            }
                            else
                            {
                              v5 = v57;
                              v31 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_1102/*"2"*/;
                              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                                     v37,
                                     (System_String_o *)StringLiteral_951/*"0"*/,
                                     (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 2 )
                              {
                                v52 = System_Collections_Generic_Dictionary_string__int___get_Item(
                                        v37,
                                        (System_String_o *)StringLiteral_1004/*"1"*/,
                                        (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                                if ( !*v57 || !v60 )
                                  break;
                                EventDropUpValInfo__SetRateCount(v60, v52, (*v57)->fields.equipSvtId > 0, 0, 0LL);
                              }
                            }
                            if ( !*v5 )
                              break;
                            dropList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)(*v5)->fields.dropList;
                            if ( !dropList )
                              break;
                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                              dropList,
                              (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
                              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
                            v59 = 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
              v30 = this->fields.funcId;
              ++v33;
            }
            while ( v30 );
          }
        }
      }
    }
LABEL_48:
    sub_B170D4();
  }
  return (char)funcId;
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
  __int64 v9; // x1
  System_String_array *StringArray; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_String_array *v15; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v16; // x19
  System_String_array *v17; // x0
  System_String_array *v18; // x1
  __int64 v19; // x2
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x20
  __int64 v23; // x2
  int max_length; // w9
  System_String_array *v25; // x20
  int v26; // w8
  System_String_o *v27; // x0
  int32_t result[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F926F & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v4);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    sub_B16FFC(&StringLiteral_18722/*"followerVals"*/, v6);
    sub_B16FFC(&StringLiteral_15571/*"["*/, v7);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    sub_B16FFC(&StringLiteral_15807/*"]"*/, v9);
    byte_40F926F = 1;
  }
  *(_QWORD *)result = 0LL;
  StringArray = EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_18722/*"followerVals"*/, 0LL, 0LL);
  if ( !StringArray )
    return 0LL;
  v15 = StringArray;
  if ( !*(_QWORD *)&StringArray->max_length )
    return 0LL;
  v16 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B170CC(
                                                                            System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                            v11,
                                                                            v12,
                                                                            v13,
                                                                            v14);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v16,
    (const MethodInfo_2D9B608 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v15->max_length )
    goto LABEL_22;
  v20 = v15->m_Items[0];
  if ( !v20 )
    goto LABEL_23;
  v21 = System_String__Replace_43750968(
          v20,
          (System_String_o *)StringLiteral_15571/*"["*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  if ( !v21 )
    goto LABEL_23;
  v22 = System_String__Replace_43750968(
          v21,
          (System_String_o *)StringLiteral_15807/*"]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v17 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v23);
  if ( !v17 )
    goto LABEL_23;
  v18 = v17;
  if ( !v17->max_length )
    goto LABEL_22;
  LOWORD(v17->m_Items[0]) = 44;
  if ( !v22 || (v17 = System_String__Split(v22, (System_Char_array *)v17, 0LL), result[1] = 0, !v17) )
LABEL_23:
    sub_B170D4();
  max_length = v17->max_length;
  v25 = v17;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( v26 < (unsigned int)max_length )
    {
      v17 = (System_String_array *)System_Int32__TryParse(v25->m_Items[v26], result, 0LL);
      if ( ((unsigned __int8)v17 & 1) != 0 )
      {
        v27 = System_Int32__ToString((int32_t)&result[1], 0LL);
        if ( !v16 )
          goto LABEL_23;
        System_Collections_Generic_Dictionary_UIPanel__int___Add(
          (System_Collections_Generic_Dictionary_UIPanel__int__o *)v16,
          (UIPanel_o *)v27,
          result[0],
          (const MethodInfo_2D9C1BC *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
      v26 = result[1] + 1;
      result[1] = v26;
      max_length = v25->max_length;
      if ( v26 >= max_length )
        return (System_Collections_Generic_Dictionary_string__int__o *)v16;
    }
LABEL_22:
    sub_B17100(v17, v18, v19);
    sub_B170A0();
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v16;
}


System_Nullable_int__o __fastcall SkillLvEntity__GetFuncIndexForSplitFuncSequence(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  SkillLvEntity___c_c *v12; // x0
  struct SkillLvEntity___c_StaticFields *static_fields; // x8
  System_Func_long__Nullable_int___o *_9__44_0; // x21
  System_String_o *v15; // x20
  Il2CppObject *v16; // x22
  struct SkillLvEntity___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Nullable_int__o v26; // 0:x3.8

  if ( (byte_40F9261 & 1) == 0 )
  {
    sub_B16FFC(&Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____, method);
    sub_B16FFC(&Method_System_Func_long__Nullable_int____ctor__, v6);
    sub_B16FFC(&System_Func_long__Nullable_int___TypeInfo, v7);
    sub_B16FFC(&Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__, v8);
    sub_B16FFC(&SkillLvEntity___c_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_18851/*"funcPositionForSplitFuncSequence"*/, v10);
    byte_40F9261 = 1;
  }
  script = this->fields.script;
  v12 = SkillLvEntity___c_TypeInfo;
  if ( (BYTE3(SkillLvEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v12 = SkillLvEntity___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__44_0 = static_fields->__9__44_0;
  v15 = (System_String_o *)StringLiteral_18851/*"funcPositionForSplitFuncSequence"*/;
  if ( !_9__44_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__44_0 = (System_Func_long__Nullable_int___o *)sub_B170CC(
                                                       System_Func_long__Nullable_int___TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4);
    System_Func_long__Nullable_int_____ctor(
      _9__44_0,
      v16,
      Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__,
      (const MethodInfo_2B67FB4 *)Method_System_Func_long__Nullable_int____ctor__);
    v17 = SkillLvEntity___c_TypeInfo->static_fields;
    v17->__9__44_0 = _9__44_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v17->__9__44_0,
      (System_Int32_array **)_9__44_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v26 = 0LL;
  return EntityScriptUtil__GetScriptValue_long__Nullable_int__(
           script,
           v15,
           (System_Func_TSource__TDestination__o *)_9__44_0,
           v26,
           (const MethodInfo_18C56C4 *)Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
}


System_Int32_array *__fastcall SkillLvEntity__GetIntArrayFromScript(
        SkillLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_int__o *v18; // x19
  System_Collections_Generic_Dictionary_string__object__o *script; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x22
  System_String_o *Value_string; // x0
  int32_t *v26; // x0
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-78h] BYREF
  int v29; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_40F9265 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_GetValue_List_object____, key);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v9);
    sub_B16FFC(&long_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_object___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v17);
    byte_40F9265 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v29 = 0;
  v18 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    key,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  script = this->fields.script;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_object__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_object___ctor__);
  Value_string = BasicHelper__GetValue_string_(
                   script,
                   key,
                   (System_String_o *)v24,
                   (const MethodInfo_18B7D04 *)Method_BasicHelper_GetValue_List_object____);
  if ( !Value_string )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Value_string,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v30 = v28;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v30,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( !v18 )
      sub_B170D4();
    if ( !v30.fields.current )
      sub_B170D4();
    if ( v30.fields.current->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_B173C8(v30.fields.current);
      goto LABEL_15;
    }
    v26 = (int32_t *)j_il2cpp_object_unbox_0(v30.fields.current);
    System_Collections_Generic_List_int___Add(
      v18,
      *v26,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( !v18 )
LABEL_15:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v18,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall SkillLvEntity__GetOptionalBattleEffectIdList(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v10; // x20

  if ( (byte_40F9262 & 1) == 0 )
  {
    sub_B16FFC(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, method);
    sub_B16FFC(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v6);
    sub_B16FFC(&Method_System_Func_List_object___List_int____ctor__, v7);
    sub_B16FFC(&System_Func_List_object___List_int___TypeInfo, v8);
    sub_B16FFC(&StringLiteral_16579/*"battleEffectId"*/, v9);
    byte_40F9262 = 1;
  }
  v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                          System_Func_List_object___List_int___TypeInfo,
                                                                                          method,
                                                                                          v2,
                                                                                          v3,
                                                                                          v4);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v10,
    0LL,
    Method_EntityScriptValueConvertLogic_ObjectListToIntList__,
    (const MethodInfo_2B6C28C *)Method_System_Func_List_object___List_int____ctor__);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     (System_String_o *)StringLiteral_16579/*"battleEffectId"*/,
                                                     (System_Func_TSource__TDestination__o *)v10,
                                                     0LL,
                                                     (const MethodInfo_18C5838 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


int32_t __fastcall SkillLvEntity__GetScriptIntParam(
        SkillLvEntity_o *this,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  SkillLvEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_40F9267 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&long_TypeInfo, v8);
    byte_40F9267 = 1;
  }
  script = this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v10 = this->fields.script;
  if ( !v10
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                 (System_Type_o *)key,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  v13 = (SkillLvEntity_o *)sub_B173C8(Item);
  return SkillLvEntity__IsNoTargetSkipSkill(v13, v14);
}


DataVals_array *__fastcall SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array *funcId; // x20
  FunctionMaster_o *v6; // x21
  const MethodInfo *v7; // x1
  DataVals_array *DataValsList; // x0

  if ( (byte_40F924B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40F924B = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_FunctionMaster___);
  funcId = this->fields.funcId;
  v6 = (FunctionMaster_o *)Master_WarQuestSelectionMaster;
  DataValsList = SkillLvEntity__getDataValsList(this, v7);
  if ( !v6 )
    sub_B170D4();
  return FunctionMaster__GetSetTypeDataValArray(v6, funcId, DataValsList, 0LL);
}


System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *__fastcall SkillLvEntity__GetSvtChangeBgm(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_Dictionary_string__object__o *v25; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x21
  System_String_o *Value_string; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *current; // x21
  SkillLvEntity_SvtChangeBgm_o *v33; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x20
  __int64 v35; // x9
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F9266 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_GetValue_List_object____, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_object___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo, v16);
    sub_B16FFC(&SkillLvEntity_SvtChangeBgm_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_22366/*"svtBgmChange"*/, v18);
    byte_40F9266 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
  script = this->fields.script;
  if ( !script )
    goto LABEL_17;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22366/*"svtBgmChange"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v19;
  v25 = this->fields.script;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_object__TypeInfo,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_object___ctor__);
  Value_string = BasicHelper__GetValue_string_(
                   v25,
                   (System_String_o *)StringLiteral_22366/*"svtBgmChange"*/,
                   (System_String_o *)v26,
                   (const MethodInfo_18B7D04 *)Method_BasicHelper_GetValue_List_object____);
  if ( !Value_string )
LABEL_17:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Value_string,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    current = v38.fields.current;
    v33 = (SkillLvEntity_SvtChangeBgm_o *)sub_B170CC(SkillLvEntity_SvtChangeBgm_TypeInfo, v28, v29, v30, v31);
    v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)v33;
    if ( current )
    {
      v35 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v35
        || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[v35 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        sub_B173C8(current);
LABEL_16:
        sub_B170D4();
      }
    }
    SkillLvEntity_SvtChangeBgm___ctor(v33, (System_Collections_Generic_Dictionary_string__object__o *)current, 0LL);
    if ( !v19 )
      goto LABEL_16;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v19,
      v34,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v19;
}


int32_t __fastcall SkillLvEntity__GetWarBoardBreakPointDamageType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F926E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15347/*"WarBoardBreakPointDamage"*/, method);
    byte_40F926E = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_15347/*"WarBoardBreakPointDamage"*/, 0, v2);
}


bool __fastcall SkillLvEntity__IsAress(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_40F925E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&StringLiteral_16388/*"aress"*/, v3);
    byte_40F925E = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_16388/*"aress"*/,
                       (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsContainsTurnOrCountBuff(SkillLvEntity_o *this, const MethodInfo *method)
{
  DataVals_array *SetTypeDataValArray; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  int max_length; // w8
  DataVals_array *v6; // x19
  unsigned int v7; // w22
  bool v8; // w21
  DataVals_o *v9; // x20
  int32_t funcType; // w8

  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(this, method);
  if ( !SetTypeDataValArray )
LABEL_15:
    sub_B170D4();
  max_length = SetTypeDataValArray->max_length;
  v6 = SetTypeDataValArray;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  v8 = 1;
  while ( 1 )
  {
    if ( v7 >= max_length )
    {
      sub_B17100(SetTypeDataValArray, v3, v4);
      sub_B170A0();
    }
    v9 = v6->m_Items[v7];
    if ( !v9 )
      goto LABEL_15;
    funcType = v9->fields.funcType;
    if ( funcType == 1 || funcType == 130 || funcType == 16 )
    {
      if ( DataVals__GetParam(v9, 1, 0, 0LL) > 0 )
        return v8;
      SetTypeDataValArray = (DataVals_array *)DataVals__GetParam(v9, 2, 0, 0LL);
      if ( (int)SetTypeDataValArray > 0 )
        return 1;
    }
    max_length = v6->max_length;
    if ( (int)++v7 >= max_length )
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
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  SkillLvEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  v3 = isCheckHate;
  if ( (byte_40F925F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, isCheckHate);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B16FFC(&long_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_5902/*"EnableTarget"*/, v7);
    byte_40F925F = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_5902/*"EnableTarget"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v3;
  }
  v9 = this->fields.script;
  if ( !v9
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v9,
                 (System_Type_o *)StringLiteral_5902/*"EnableTarget"*/,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item) == 1;
  v12 = (SkillLvEntity_o *)sub_B173C8(Item);
  return (unsigned __int8)SkillLvEntity__GetAddIndiv(v12, v13);
}


bool __fastcall SkillLvEntity__IsIgnoreWhiteFade(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F9263 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19332/*"ignoreWhiteFade"*/, method);
    byte_40F9263 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19332/*"ignoreWhiteFade"*/, 0LL);
}


bool __fastcall SkillLvEntity__IsNoTargetSkipSkill(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9268 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21015/*"noTargetSkipSkill"*/, method);
    byte_40F9268 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_21015/*"noTargetSkipSkill"*/, -1, v2) == 1;
}


bool __fastcall SkillLvEntity__IsRevivalUnder(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_40F925D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&StringLiteral_21724/*"revivalUnder"*/, v3);
    byte_40F925D = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_21724/*"revivalUnder"*/,
                       (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsRevivalUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_40F925C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&StringLiteral_21725/*"revivalUp"*/, v3);
    byte_40F925C = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_21725/*"revivalUp"*/,
                       (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsSupportExcluded(
        SkillLvEntity_o *this,
        System_Collections_Generic_Dictionary_string__int__o *vals,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1

  if ( (byte_40F9259 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, vals);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v4);
    sub_B16FFC(&StringLiteral_1998/*"ApplySupportSvt"*/, v5);
    byte_40F9259 = 1;
  }
  if ( !vals )
    sub_B170D4();
  return System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_1998/*"ApplySupportSvt"*/,
           (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
      && !System_Collections_Generic_Dictionary_string__int___get_Item(
            vals,
            (System_String_o *)StringLiteral_1998/*"ApplySupportSvt"*/,
            (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


bool __fastcall SkillLvEntity__IsVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_40F9257 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&StringLiteral_15161/*"VoiceVolume"*/, v3);
    byte_40F9257 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_15161/*"VoiceVolume"*/,
                       (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_String_array *svals; // x8
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  struct System_String_array *v12; // x8
  DataVals_array *v13; // x19
  __int64 v14; // x23
  __int64 v15; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v17; // x26
  System_String_o *v18; // x22
  DataVals_o *v19; // x21
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  DataVals_o *v29; // x20
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_40F924A & 1) == 0 )
  {
    sub_B16FFC(&DataVals___TypeInfo, method);
    sub_B16FFC(&DataVals_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_1/*""*/, v5);
    byte_40F924A = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v13 = (DataVals_array *)sub_B17014(DataVals___TypeInfo, 1LL, v2);
    v29 = (DataVals_o *)sub_B170CC(DataVals_TypeInfo, v25, v26, v27, v28);
    DataVals___ctor(v29, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v13 )
    {
      if ( v29 )
      {
        v7 = sub_B170BC(v29, v13->obj.klass->_1.element_class);
        if ( !v7 )
        {
LABEL_21:
          sub_B170F4(v7);
          sub_B170A0();
        }
      }
      if ( !v13->max_length )
      {
LABEL_20:
        sub_B17100(v7, v8, v9);
        sub_B170A0();
      }
      v13->m_Items[0] = v29;
      sub_B16F98((BattleServantConfConponent_o *)v13->m_Items, (System_Int32_array **)v29, v9, v30, v31, v32, v33, v34);
      return v13;
    }
LABEL_13:
    sub_B170D4();
  }
  v7 = sub_B17014(DataVals___TypeInfo, svals->max_length, v2);
  v12 = this->fields.svals;
  if ( !v12 )
    goto LABEL_13;
  v13 = (DataVals_array *)v7;
  v14 = 4LL;
  v15 = 32LL;
  while ( 1 )
  {
    max_length = v12->max_length;
    v17 = v14 - 4;
    if ( v14 - 4 >= (int)max_length )
      return v13;
    if ( v17 >= max_length )
      goto LABEL_20;
    v18 = (System_String_o *)*((_QWORD *)&v12->obj.klass + v14);
    v19 = (DataVals_o *)sub_B170CC(DataVals_TypeInfo, v8, v9, v10, v11);
    DataVals___ctor(v19, v18, 0LL);
    if ( v13 )
    {
      if ( v19 )
      {
        v7 = sub_B170BC(v19, v13->obj.klass->_1.element_class);
        if ( !v7 )
          goto LABEL_21;
      }
      if ( v17 >= v13->max_length )
        goto LABEL_20;
      *((_QWORD *)&v13->obj.klass + v14) = v19;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)v13 + v15),
        (System_Int32_array **)v19,
        v9,
        v20,
        v21,
        v22,
        v23,
        v24);
      v12 = this->fields.svals;
      ++v14;
      v15 += 8LL;
      if ( v12 )
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
  WebViewManager_o *Instance; // x0
  SkillDetailMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  System_String_o *Detail; // x20

  if ( (byte_40F924C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillDetailMaster___, isShort);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&SkillDetailParamFormatResolver_TypeInfo, v6);
    byte_40F924C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillDetailMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Detail = SkillDetailMaster__getDetail(MasterData_WarQuestSelectionMaster, this->fields.skillDetailId, isShort, v9);
  if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  }
  return SkillDetailParamFormatResolver__Apply(Detail, this, v10);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__getDetail_23602036(
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
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F924D & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&lv);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_8346/*"LEVEL_DETAIL_INFO"*/, v8);
    sub_B16FFC(&StringLiteral_1/*""*/, v9);
    byte_40F924D = 1;
  }
  if ( lv <= 0 )
  {
    v12 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8346/*"LEVEL_DETAIL_INFO"*/, 0LL);
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
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v30; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x27
  WebViewManager_o *v32; // x0
  const MethodInfo *v33; // x1
  FunctionGroupMaster_o *v34; // x28
  WebViewManager_o *v35; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v36; // x0
  System_Collections_Generic_Dictionary_string__int__array *Values; // x26
  __int64 QuestPhaseIndividualList; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v42; // x19
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v44; // x8
  unsigned __int64 v45; // x8
  System_Collections_Generic_Dictionary_string__int__o *v46; // x20
  WarEntity_o *v47; // x8
  int age; // w21
  struct System_String_o *name; // x3
  int32_t Item; // w0
  System_Int32_array *Individuality; // x1
  __int64 *v52; // x8
  bool v54; // [xsp+Ch] [xbp-A4h]
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+10h] [xbp-A0h]
  int32_t v56; // [xsp+20h] [xbp-90h]
  unsigned int v57; // [xsp+24h] [xbp-8Ch]
  ServantEntity_o *v58; // [xsp+28h] [xbp-88h]
  System_Int32_array *v59; // [xsp+30h] [xbp-80h]
  EventUpValSetupInfo_o *v60; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_Dictionary_string__int__o **m_Items; // [xsp+40h] [xbp-70h]
  FunctionGroupEntity_o *v63; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_40F9252 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionGroupMaster___, *(_QWORD *)&wearersSvtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B16FFC(&StringLiteral_1151/*"3"*/, v24);
    sub_B16FFC(&StringLiteral_1102/*"2"*/, v25);
    sub_B16FFC(&StringLiteral_13513/*"Target"*/, v26);
    sub_B16FFC(&StringLiteral_1004/*"1"*/, v27);
    sub_B16FFC(&StringLiteral_6147/*"EventId"*/, v28);
    byte_40F9252 = 1;
  }
  v63 = 0LL;
  entity = 0LL;
  if ( setupInfo && this->fields.funcId )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_87;
    MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
    v30 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v30 )
      goto LABEL_87;
    v60 = setupInfo;
    v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)v30,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionMaster___);
    v32 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v32 )
      goto LABEL_87;
    v34 = (FunctionGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v32,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
    v56 = wearesDispLimitCount;
    v57 = wearersSvtId;
    if ( wearersSvtId < 1 )
    {
      v58 = 0LL;
    }
    else
    {
      v35 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v35 )
        goto LABEL_87;
      v36 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v35,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !v36 )
        goto LABEL_87;
      v58 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 v36,
                                 wearersSvtId,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    }
    Values = SkillLvEntity__getValues(this, v33);
    QuestPhaseIndividualList = (__int64)EventUpValSetupInfo__GetQuestPhaseIndividualList(v60, eventId, 0LL);
    funcId = this->fields.funcId;
    v59 = (System_Int32_array *)QuestPhaseIndividualList;
    if ( !funcId )
      goto LABEL_87;
    v54 = !isOwner;
    m_Items = Values->m_Items;
    v42 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v42 >= (int)max_length )
        break;
      if ( v42 >= max_length )
        goto LABEL_95;
      if ( !v31 )
        goto LABEL_87;
      QuestPhaseIndividualList = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                   v31,
                                   &entity,
                                   funcId->m_Items[v42 + 1],
                                   (const MethodInfo_266F3E4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( (QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_86;
      if ( isFuncGroup )
      {
        v44 = this->fields.funcId;
        if ( !v44 )
          goto LABEL_87;
        if ( v42 >= v44->max_length )
        {
LABEL_95:
          sub_B17100(QuestPhaseIndividualList, v39, v40);
          sub_B170A0();
        }
        if ( !v34 )
          goto LABEL_87;
        QuestPhaseIndividualList = FunctionGroupMaster__TryGetEntity(v34, &v63, v44->m_Items[v42 + 1], eventId, 0LL);
        if ( (QuestPhaseIndividualList & 1) == 0 )
          goto LABEL_86;
      }
      if ( !Values )
        goto LABEL_87;
      v45 = Values->max_length;
      if ( (__int64)v42 >= (int)v45 )
        goto LABEL_86;
      if ( v42 >= v45 )
        goto LABEL_95;
      v46 = m_Items[v42];
      if ( !v46 )
        goto LABEL_86;
      v47 = entity;
      if ( !entity )
        goto LABEL_87;
      age = (int)entity->fields.age;
      if ( age > 104 )
      {
        switch ( age )
        {
          case 105:
          case 106:
          case 107:
          case 108:
          case 114:
          case 115:
            QuestPhaseIndividualList = System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v42],
                                         (System_Xml_XmlQualifiedName_o *)StringLiteral_1151/*"3"*/,
                                         (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( (QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = System_Collections_Generic_Dictionary_string__int___get_Item(
                                         v46,
                                         (System_String_o *)StringLiteral_1151/*"3"*/,
                                         (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_86;
            if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                   v46,
                   (System_String_o *)StringLiteral_1004/*"1"*/,
                   (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) )
            {
              QuestPhaseIndividualList = System_Collections_Generic_Dictionary_string__int___get_Item(
                                           v46,
                                           (System_String_o *)StringLiteral_1102/*"2"*/,
                                           (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !(_DWORD)QuestPhaseIndividualList )
                goto LABEL_86;
            }
            if ( !entity )
              goto LABEL_87;
            QuestPhaseIndividualList = EventUpValSetupInfo__IsUpVal(
                                         v60,
                                         v59,
                                         *(System_Int32_array **)&entity->fields.startType,
                                         0LL);
            if ( (QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            if ( age != 105 )
              goto LABEL_90;
            if ( !entity )
              goto LABEL_87;
            name = entity->fields.name;
            if ( !name )
              goto LABEL_90;
            QuestPhaseIndividualList = 1LL;
            if ( (v57 & 0x80000000) != 0 || !name[1].klass )
              return QuestPhaseIndividualList & 1;
            if ( v58 )
            {
              QuestPhaseIndividualList = ServantEntity__IsIndividuality_30656232(
                                           v58,
                                           wearesLimitCount,
                                           v56,
                                           (System_Int32_array *)name,
                                           0LL);
              if ( (QuestPhaseIndividualList & 1) != 0 )
                goto LABEL_90;
            }
            goto LABEL_86;
          case 111:
            QuestPhaseIndividualList = System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v42],
                                         (System_Xml_XmlQualifiedName_o *)StringLiteral_1102/*"2"*/,
                                         (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( (QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v46,
                                         (System_Xml_XmlQualifiedName_o *)StringLiteral_6147/*"EventId"*/,
                                         (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( (QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = System_Collections_Generic_Dictionary_string__int___get_Item(
                                         v46,
                                         (System_String_o *)StringLiteral_6147/*"EventId"*/,
                                         (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_86;
            QuestPhaseIndividualList = System_Collections_Generic_Dictionary_string__int___get_Item(
                                         v46,
                                         (System_String_o *)StringLiteral_1102/*"2"*/,
                                         (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (int)QuestPhaseIndividualList >= 1 )
            {
              if ( !v58 )
                goto LABEL_86;
              Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                       v46,
                       (System_String_o *)StringLiteral_1102/*"2"*/,
                       (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              QuestPhaseIndividualList = ServantEntity__IsIndividuality(v58, wearesLimitCount, v56, Item, 0LL);
              if ( (QuestPhaseIndividualList & 1) == 0 )
                goto LABEL_86;
            }
            if ( !entity )
              goto LABEL_87;
            QuestPhaseIndividualList = EventUpValSetupInfo__IsUpVal(
                                         v60,
                                         v59,
                                         *(System_Int32_array **)&entity->fields.startType,
                                         0LL);
            if ( (QuestPhaseIndividualList & 1) != 0 )
            {
              if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                      (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v46,
                      (System_Xml_XmlQualifiedName_o *)StringLiteral_13513/*"Target"*/,
                      (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                goto LABEL_90;
              QuestPhaseIndividualList = System_Collections_Generic_Dictionary_string__int___get_Item(
                                           v46,
                                           (System_String_o *)StringLiteral_13513/*"Target"*/,
                                           (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)QuestPhaseIndividualList != 1 || !v54 )
                goto LABEL_90;
            }
            goto LABEL_86;
          case 113:
            QuestPhaseIndividualList = System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v42],
                                         (System_Xml_XmlQualifiedName_o *)StringLiteral_1102/*"2"*/,
                                         (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( (QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            QuestPhaseIndividualList = System_Collections_Generic_Dictionary_string__int___get_Item(
                                         v46,
                                         (System_String_o *)StringLiteral_1102/*"2"*/,
                                         (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_86;
            QuestPhaseIndividualList = System_Collections_Generic_Dictionary_string__int___get_Item(
                                         v46,
                                         (System_String_o *)StringLiteral_1004/*"1"*/,
                                         (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( !(_DWORD)QuestPhaseIndividualList )
              goto LABEL_86;
            if ( !entity )
              goto LABEL_87;
            QuestPhaseIndividualList = EventUpValSetupInfo__IsUpVal(
                                         v60,
                                         v59,
                                         *(System_Int32_array **)&entity->fields.startType,
                                         0LL);
            if ( (QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            if ( !v58 )
              goto LABEL_94;
            Individuality = ServantEntity__getIndividuality(v58, wearesLimitCount, v56, 0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_87;
            QuestPhaseIndividualList = (__int64)ItemMaster__GetIndividualityList_28946848(
                                                  MasterData_WarQuestSelectionMaster,
                                                  Individuality,
                                                  0LL);
            if ( !QuestPhaseIndividualList )
              goto LABEL_87;
            if ( *(_QWORD *)(QuestPhaseIndividualList + 24) )
              goto LABEL_90;
            goto LABEL_86;
          case 116:
            QuestPhaseIndividualList = System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v42],
                                         (System_Xml_XmlQualifiedName_o *)StringLiteral_1102/*"2"*/,
                                         (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( (QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            goto LABEL_84;
          case 117:
          case 118:
            goto LABEL_85;
          case 129:
            QuestPhaseIndividualList = System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v42],
                                         (System_Xml_XmlQualifiedName_o *)StringLiteral_1102/*"2"*/,
                                         (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( (QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            v52 = &StringLiteral_1102/*"2"*/;
            goto LABEL_80;
          case 132:
            QuestPhaseIndividualList = System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v42],
                                         (System_Xml_XmlQualifiedName_o *)StringLiteral_1151/*"3"*/,
                                         (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( (QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_86;
            v52 = &StringLiteral_1151/*"3"*/;
LABEL_80:
            QuestPhaseIndividualList = System_Collections_Generic_Dictionary_string__int___get_Item(
                                         v46,
                                         (System_String_o *)*v52,
                                         (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList != eventId )
              goto LABEL_86;
            goto LABEL_84;
          default:
            goto LABEL_86;
        }
      }
      if ( age != 1 )
      {
        if ( age == 7 )
        {
          QuestPhaseIndividualList = System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                       (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v42],
                                       (System_Xml_XmlQualifiedName_o *)StringLiteral_1004/*"1"*/,
                                       (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( (QuestPhaseIndividualList & 1) != 0 )
          {
            QuestPhaseIndividualList = System_Collections_Generic_Dictionary_string__int___get_Item(
                                         v46,
                                         (System_String_o *)StringLiteral_1004/*"1"*/,
                                         (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList )
            {
LABEL_84:
              v47 = entity;
              if ( !entity )
                goto LABEL_87;
LABEL_85:
              QuestPhaseIndividualList = EventUpValSetupInfo__IsUpVal(
                                           v60,
                                           v59,
                                           *(System_Int32_array **)&v47->fields.startType,
                                           0LL);
              if ( (QuestPhaseIndividualList & 1) != 0 )
              {
LABEL_90:
                LOBYTE(QuestPhaseIndividualList) = 1;
                return QuestPhaseIndividualList & 1;
              }
            }
          }
          goto LABEL_86;
        }
        if ( age != 16 )
          goto LABEL_86;
      }
      QuestPhaseIndividualList = System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                   (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v42],
                                   (System_Xml_XmlQualifiedName_o *)StringLiteral_1151/*"3"*/,
                                   (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( (QuestPhaseIndividualList & 1) != 0 )
      {
        QuestPhaseIndividualList = System_Collections_Generic_Dictionary_string__int___get_Item(
                                     v46,
                                     (System_String_o *)StringLiteral_1151/*"3"*/,
                                     (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        if ( (_DWORD)QuestPhaseIndividualList )
        {
          if ( !entity )
            goto LABEL_87;
          QuestPhaseIndividualList = EventUpValSetupInfo__IsUpVal(
                                       v60,
                                       v59,
                                       *(System_Int32_array **)&entity->fields.startType,
                                       0LL);
          if ( (QuestPhaseIndividualList & 1) != 0 )
          {
            if ( !v58 )
            {
LABEL_94:
              LODWORD(QuestPhaseIndividualList) = v57 >> 31;
              return QuestPhaseIndividualList & 1;
            }
            if ( entity )
            {
              LOBYTE(QuestPhaseIndividualList) = ServantEntity__IsIndividuality_30656232(
                                                   v58,
                                                   wearesLimitCount,
                                                   v56,
                                                   (System_Int32_array *)entity->fields.longName,
                                                   0LL);
              return QuestPhaseIndividualList & 1;
            }
LABEL_87:
            sub_B170D4();
          }
        }
      }
LABEL_86:
      funcId = this->fields.funcId;
      ++v42;
      if ( !funcId )
        goto LABEL_87;
    }
  }
  LOBYTE(QuestPhaseIndividualList) = 0;
  return QuestPhaseIndividualList & 1;
}


bool __fastcall SkillLvEntity__getEventUpVal_23627436(
        SkillLvEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool isFuncGroup,
        bool isOwner,
        bool isSupport,
        bool isEquipOnly,
        const MethodInfo *method)
{
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  WebViewManager_o *v41; // x0
  WarQuestSelectionMaster_o *v42; // x0
  const MethodInfo *v43; // x1
  WebViewManager_o *v44; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v45; // x0
  WarEntity_o *v46; // x20
  System_Int32_array *Values; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v52; // x8
  struct System_Int32_array *v53; // x10
  System_Int32_array *v54; // x27
  char v55; // w26
  unsigned __int64 v56; // x20
  EventUpValInfo_o *v57; // x8
  WebViewManager_o *v58; // x0
  ServantLimitMaster_o *v59; // x0
  ServantLimitEntity_o *v60; // x19
  PartyOrganizationUtility_o *v61; // x0
  EventUpValSetupInfo_o *v62; // x0
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v64; // x21
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v66; // x8
  unsigned __int64 v67; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v68; // x19
  int age; // w20
  EventUpValSetupInfo_o *v70; // x0
  struct System_String_o *name; // x3
  FunctionEntity_o *v72; // x22
  int32_t Item; // w26
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  EventDropUpValInfo_o *v78; // x20
  const MethodInfo_2D9C0F8 *v79; // x2
  System_String_o *v80; // x1
  WebViewManager_o *v81; // x0
  struct System_Int32_array *v82; // x8
  EventPointBuffEntity_o *EnableEntity; // x20
  EventUpValSetupInfo_o *v84; // x0
  WebViewManager_o *v85; // x0
  __int64 v86; // x3
  __int64 v87; // x4
  struct System_String_o *v88; // x25
  System_String_c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v90; // x26
  unsigned __int64 v91; // x20
  WarEntity_o *v92; // x0
  int32_t v93; // w22
  char v94; // w8
  EventUpValSetupInfo_o *v95; // x0
  __int64 v96; // x3
  __int64 v97; // x4
  FunctionEntity_o *v98; // x22
  __int64 *v99; // x8
  EventUpValInfo_o *v100; // x8
  int32_t limitCount; // w20
  int32_t dispLimitCount; // w22
  int32_t v103; // w0
  EventUpValSetupInfo_o *v104; // x0
  WebViewManager_o *v105; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v106; // x0
  WarEntity_o *v107; // x0
  SkillEntity_o *v108; // x20
  System_Int32_array *Individuality; // x0
  const MethodInfo *v110; // x1
  System_Int32_array *v111; // x22
  System_Int32_array *ActIndividuality; // x0
  __int64 v113; // x3
  __int64 v114; // x4
  int32_t v115; // w20
  EventUpValSetupInfo_o *v116; // x0
  __int64 v117; // x3
  __int64 v118; // x4
  __int64 v119; // x8
  unsigned __int64 v120; // x25
  FunctionEntity_o *v121; // x20
  System_Int32_array *v122; // x28
  int32_t v123; // w22
  EventDropUpValInfo_o *v124; // x26
  int32_t v125; // w0
  int32_t v126; // w0
  struct System_Collections_Generic_List_EventDropUpValInfo__o *v127; // x0
  EventUpValSetupInfo_o *v128; // x0
  FunctionEntity_o *v129; // x22
  int32_t v130; // w26
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x3
  __int64 v134; // x4
  const MethodInfo_2D9C0F8 *v135; // x2
  System_String_o *v136; // x1
  EventUpValSetupInfo_o *v137; // x0
  __int64 v138; // x3
  __int64 v139; // x4
  FunctionEntity_o *v140; // x22
  int32_t v141; // w0
  EventUpValSetupInfo_o *v142; // x0
  __int64 v143; // x3
  __int64 v144; // x4
  FunctionEntity_o *v145; // x22
  int32_t v146; // w0
  EventUpValInfo_o **v147; // x8
  System_String_o *v148; // x1
  const MethodInfo_2D9C0F8 *v149; // x2
  __int64 *v150; // x8
  int32_t v151; // w0
  EventUpValInfo_o *v152; // x8
  int32_t v153; // w0
  FunctionEntity_o *v154; // x22
  EventUpValInfo_o *v155; // x8
  struct System_Collections_Generic_List_EventDropUpValInfo__o *dropList; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v157; // x1
  FunctionEntity_o *v158; // x22
  EventDropUpValInfo_o *v159; // x26
  int32_t v160; // w0
  int32_t v161; // w0
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v163; // x22
  __int64 v164; // x25
  int32_t v165; // w0
  UserServantEntity_o *HeroineData; // x0
  bool v168; // [xsp+Ch] [xbp-D4h]
  EventPointBuffEntity_o *v169; // [xsp+10h] [xbp-D0h]
  bool v170; // [xsp+1Ch] [xbp-C4h]
  ServantEntity_o *v171; // [xsp+20h] [xbp-C0h]
  int32_t *v172; // [xsp+28h] [xbp-B8h]
  bool v173; // [xsp+34h] [xbp-ACh]
  struct System_Int32_array *v174; // [xsp+38h] [xbp-A8h]
  bool IsRarityRestriction; // [xsp+44h] [xbp-9Ch]
  System_Int32_array *questPhaseIndividualityList; // [xsp+48h] [xbp-98h]
  unsigned __int64 v178; // [xsp+50h] [xbp-90h]
  FunctionGroupMaster_o *v180; // [xsp+60h] [xbp-80h]
  int32_t eventId; // [xsp+6Ch] [xbp-74h]
  FunctionGroupEntity_o *v182; // [xsp+70h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  int32_t actMaxRarity; // [xsp+84h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // 0:x0.16

  if ( (byte_40F9253 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, eventUpVallInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionGroupMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v18);
    sub_B16FFC(&DataManager_TypeInfo, v19);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v20);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v22);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v26);
    sub_B16FFC(&EventDropUpValInfo_TypeInfo, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v28);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v31);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v32);
    sub_B16FFC(&StringLiteral_1151/*"3"*/, v33);
    sub_B16FFC(&StringLiteral_1102/*"2"*/, v34);
    sub_B16FFC(&StringLiteral_13513/*"Target"*/, v35);
    sub_B16FFC(&StringLiteral_1004/*"1"*/, v36);
    sub_B16FFC(&StringLiteral_6147/*"EventId"*/, v37);
    sub_B16FFC(&StringLiteral_951/*"0"*/, v38);
    byte_40F9253 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  entity = 0LL;
  v182 = 0LL;
  if ( !*eventUpVallInfo )
    goto LABEL_255;
  if ( !(*eventUpVallInfo)->fields.setupInfo || !this->fields.funcId )
    goto LABEL_253;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_255;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionMaster___);
  v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v41 )
    goto LABEL_255;
  v42 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v41,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
  if ( !*eventUpVallInfo )
    goto LABEL_255;
  v180 = (FunctionGroupMaster_o *)v42;
  if ( (*eventUpVallInfo)->fields.svtId < 1 )
  {
    v46 = 0LL;
    goto LABEL_15;
  }
  v44 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v44
    || (v45 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v44,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___),
        !*eventUpVallInfo)
    || !v45 )
  {
LABEL_255:
    sub_B170D4();
  }
  v46 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v45,
          (*eventUpVallInfo)->fields.svtId,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
LABEL_15:
  Values = (System_Int32_array *)SkillLvEntity__getValues(this, v43);
  if ( !*eventUpVallInfo )
    goto LABEL_255;
  setupInfo = (*eventUpVallInfo)->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_255;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_255;
  v174 = eventIdList;
  v52 = *(_QWORD *)&eventIdList->max_length;
  if ( (int)v52 >= 1 )
  {
    v171 = (ServantEntity_o *)v46;
    v168 = isOwner;
    v170 = v46 == 0LL || isEquipOnly;
    v53 = v174;
    v54 = Values;
    v55 = 0;
    v56 = 0LL;
    v173 = isFuncGroup;
    while ( 1 )
    {
      if ( v56 >= (unsigned int)v52 )
      {
LABEL_256:
        sub_B17100(Values, v48, v49);
        sub_B170A0();
      }
      v57 = *eventUpVallInfo;
      if ( !*eventUpVallInfo )
        goto LABEL_255;
      eventId = v53->m_Items[v56 + 1];
      if ( v57->fields.equipSvtId < 1 )
      {
        IsRarityRestriction = 0;
      }
      else
      {
        v58 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v58 )
          goto LABEL_255;
        v59 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v58,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        if ( !*eventUpVallInfo || !v59 )
          goto LABEL_255;
        v60 = ServantLimitMaster__GetEntity(
                v59,
                (*eventUpVallInfo)->fields.svtId,
                (*eventUpVallInfo)->fields.limitCount,
                0LL);
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        v61 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !*eventUpVallInfo )
          goto LABEL_255;
        if ( !v60 )
          goto LABEL_255;
        if ( !v61 )
          goto LABEL_255;
        IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                                v61,
                                &skillName,
                                &actMaxRarity,
                                (*eventUpVallInfo)->fields.svtId,
                                v60->fields.rarity,
                                (*eventUpVallInfo)->fields.equipSvtId,
                                eventId,
                                0LL);
        v57 = *eventUpVallInfo;
        if ( !*eventUpVallInfo )
          goto LABEL_255;
      }
      v62 = v57->fields.setupInfo;
      v178 = v56;
      if ( !v62 )
        goto LABEL_255;
      Values = EventUpValSetupInfo__GetQuestPhaseIndividualList(v62, eventId, 0LL);
      funcId = this->fields.funcId;
      questPhaseIndividualityList = Values;
      if ( !funcId )
        goto LABEL_255;
      v64 = 0LL;
      while ( 1 )
      {
        max_length = funcId->max_length;
        if ( (__int64)v64 >= (int)max_length )
          break;
        if ( v64 >= max_length )
          goto LABEL_256;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_255;
        Values = (System_Int32_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                         MasterData_WarQuestSelectionMaster,
                                         &entity,
                                         funcId->m_Items[v64 + 1],
                                         (const MethodInfo_266F3E4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Values & 1) == 0 )
          goto LABEL_224;
        if ( isFuncGroup )
        {
          v66 = this->fields.funcId;
          if ( !v66 )
            goto LABEL_255;
          if ( v64 >= v66->max_length )
            goto LABEL_256;
          if ( !v180 )
            goto LABEL_255;
          Values = (System_Int32_array *)FunctionGroupMaster__TryGetEntity(
                                           v180,
                                           &v182,
                                           v66->m_Items[v64 + 1],
                                           eventId,
                                           0LL);
          if ( ((unsigned __int8)Values & 1) == 0 )
            goto LABEL_224;
        }
        if ( !v54 )
          goto LABEL_255;
        v67 = v54->max_length;
        if ( (__int64)v64 >= (int)v67 )
          goto LABEL_224;
        if ( v64 >= v67 )
          goto LABEL_256;
        v68 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__int__o **)&v54->m_Items[2 * v64 + 1];
        if ( !v68 )
          goto LABEL_224;
        if ( !entity )
          goto LABEL_255;
        age = (int)entity->fields.age;
        if ( age > 104 )
        {
          switch ( age )
          {
            case 105:
            case 106:
            case 107:
            case 108:
            case 114:
            case 115:
              Values = (System_Int32_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                               v68,
                                               (System_Xml_XmlQualifiedName_o *)StringLiteral_1151/*"3"*/,
                                               (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)Values & 1) == 0 )
                goto LABEL_224;
              Values = (System_Int32_array *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                               (System_Collections_Generic_Dictionary_string__int__o *)v68,
                                               (System_String_o *)StringLiteral_1151/*"3"*/,
                                               (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)Values )
                goto LABEL_224;
              Values = (System_Int32_array *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                               (System_Collections_Generic_Dictionary_string__int__o *)v68,
                                               (System_String_o *)StringLiteral_1004/*"1"*/,
                                               (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)Values )
              {
                Values = (System_Int32_array *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                 (System_Collections_Generic_Dictionary_string__int__o *)v68,
                                                 (System_String_o *)StringLiteral_1102/*"2"*/,
                                                 (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)Values )
                  goto LABEL_224;
              }
              if ( isSupport )
              {
                Values = (System_Int32_array *)SkillLvEntity__IsSupportExcluded(
                                                 (SkillLvEntity_o *)Values,
                                                 (System_Collections_Generic_Dictionary_string__int__o *)v68,
                                                 v49);
                if ( ((unsigned __int8)Values & 1) != 0 )
                  goto LABEL_224;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              if ( !entity )
                goto LABEL_255;
              v70 = (*eventUpVallInfo)->fields.setupInfo;
              if ( !v70 )
                goto LABEL_255;
              Values = (System_Int32_array *)EventUpValSetupInfo__IsUpVal(
                                               v70,
                                               questPhaseIndividualityList,
                                               *(System_Int32_array **)&entity->fields.startType,
                                               0LL);
              if ( ((unsigned __int8)Values & 1) == 0 )
                goto LABEL_224;
              if ( age != 105 )
                goto LABEL_71;
              if ( !entity )
                goto LABEL_255;
              name = entity->fields.name;
              if ( !name || !name[1].klass )
                goto LABEL_71;
              if ( !v171 )
                goto LABEL_224;
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              Values = (System_Int32_array *)ServantEntity__IsIndividuality_30656232(
                                               v171,
                                               (*eventUpVallInfo)->fields.limitCount,
                                               (*eventUpVallInfo)->fields.dispLimitCount,
                                               (System_Int32_array *)name,
                                               0LL);
              if ( ((unsigned __int8)Values & 1) == 0 )
                goto LABEL_224;
LABEL_71:
              v72 = (FunctionEntity_o *)entity;
              Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                       (System_Collections_Generic_Dictionary_string__int__o *)v68,
                       (System_String_o *)StringLiteral_951/*"0"*/,
                       (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v78 = (EventDropUpValInfo_o *)sub_B170CC(EventDropUpValInfo_TypeInfo, v74, v75, v76, v77);
              EventDropUpValInfo___ctor_29425888(v78, eventId, v72, Item, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v68,
                     (System_String_o *)StringLiteral_1004/*"1"*/,
                     (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                v79 = (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
                v80 = (System_String_o *)StringLiteral_1102/*"2"*/;
                goto LABEL_190;
              }
              v148 = (System_String_o *)StringLiteral_1004/*"1"*/;
              v149 = (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
              goto LABEL_206;
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
              goto LABEL_224;
            case 111:
              Values = (System_Int32_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                               v68,
                                               (System_Xml_XmlQualifiedName_o *)StringLiteral_1102/*"2"*/,
                                               (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)Values & 1) == 0 )
                goto LABEL_224;
              Values = (System_Int32_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                               v68,
                                               (System_Xml_XmlQualifiedName_o *)StringLiteral_6147/*"EventId"*/,
                                               (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)Values & 1) == 0 )
                goto LABEL_224;
              Values = (System_Int32_array *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                               (System_Collections_Generic_Dictionary_string__int__o *)v68,
                                               (System_String_o *)StringLiteral_6147/*"EventId"*/,
                                               (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)Values )
                goto LABEL_224;
              if ( isSupport )
              {
                Values = (System_Int32_array *)SkillLvEntity__IsSupportExcluded(
                                                 (SkillLvEntity_o *)Values,
                                                 (System_Collections_Generic_Dictionary_string__int__o *)v68,
                                                 v49);
                if ( ((unsigned __int8)Values & 1) != 0 )
                  goto LABEL_224;
              }
              Values = (System_Int32_array *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                               (System_Collections_Generic_Dictionary_string__int__o *)v68,
                                               (System_String_o *)StringLiteral_1102/*"2"*/,
                                               (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (int)Values < 1 )
                goto LABEL_125;
              if ( !v171 )
                goto LABEL_224;
              v100 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              limitCount = v100->fields.limitCount;
              dispLimitCount = v100->fields.dispLimitCount;
              v103 = System_Collections_Generic_Dictionary_string__int___get_Item(
                       (System_Collections_Generic_Dictionary_string__int__o *)v68,
                       (System_String_o *)StringLiteral_1102/*"2"*/,
                       (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              Values = (System_Int32_array *)ServantEntity__IsIndividuality(v171, limitCount, dispLimitCount, v103, 0LL);
              isFuncGroup = v173;
              if ( ((unsigned __int8)Values & 1) == 0 )
                goto LABEL_224;
LABEL_125:
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              if ( !entity )
                goto LABEL_255;
              v104 = (*eventUpVallInfo)->fields.setupInfo;
              if ( !v104 )
                goto LABEL_255;
              Values = (System_Int32_array *)EventUpValSetupInfo__IsUpVal(
                                               v104,
                                               questPhaseIndividualityList,
                                               *(System_Int32_array **)&entity->fields.startType,
                                               0LL);
              if ( ((unsigned __int8)Values & 1) == 0 )
                goto LABEL_224;
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              if ( !EventUpValInfo__IsEquipSvtId(*eventUpVallInfo, 0LL) )
                goto LABEL_140;
              v105 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !v105 )
                goto LABEL_255;
              v106 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)v105,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
              if ( !v106 )
                goto LABEL_255;
              v107 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v106,
                       this->fields.skillId,
                       (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              v108 = (SkillEntity_o *)v107;
              if ( !v171 )
                goto LABEL_255;
              Individuality = ServantEntity__getIndividuality(
                                v171,
                                (*eventUpVallInfo)->fields.limitCount,
                                (*eventUpVallInfo)->fields.dispLimitCount,
                                0LL);
              if ( !v108 )
                goto LABEL_255;
              v111 = Individuality;
              ActIndividuality = SkillEntity__getActIndividuality(v108, v110);
              Values = (System_Int32_array *)Individuality__CheckIndividualities(v111, ActIndividuality, 0LL);
              if ( ((unsigned __int8)Values & 1) == 0 )
              {
                isFuncGroup = v173;
                goto LABEL_224;
              }
              isFuncGroup = v173;
              if ( ServantEntity__checkIsHeroineSvt(v171, 0LL) )
              {
                if ( !entity )
                  goto LABEL_255;
                if ( !HIDWORD(entity->fields.age) )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
                  v163 = *(_QWORD *)&v171->fields.id.fields.currentCryptoKey;
                  v164 = *(_QWORD *)&v171->fields.id.fields.fakeValue;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v186.fields.currentCryptoKey = v163;
                  *(_QWORD *)&v186.fields.fakeValue = v164;
                  v165 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v186, 0LL);
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_255;
                  HeroineData = UserServantMaster__getHeroineData(Master_WarQuestSelectionMaster, v165, 0LL);
                  isFuncGroup = v173;
                  if ( HeroineData )
                  {
                    Values = (System_Int32_array *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL);
                    if ( ((unsigned __int8)Values & 1) == 0 )
                      goto LABEL_224;
                  }
                }
              }
LABEL_140:
              if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                     v68,
                     (System_Xml_XmlQualifiedName_o *)StringLiteral_13513/*"Target"*/,
                     (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
              {
                Values = (System_Int32_array *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                 (System_Collections_Generic_Dictionary_string__int__o *)v68,
                                                 (System_String_o *)StringLiteral_13513/*"Target"*/,
                                                 (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v115 = (int)Values;
                if ( (_DWORD)Values == 1 && !v168 )
                  goto LABEL_224;
              }
              else
              {
                v115 = 0;
              }
              v158 = (FunctionEntity_o *)entity;
              v159 = (EventDropUpValInfo_o *)sub_B170CC(EventDropUpValInfo_TypeInfo, v48, v49, v113, v114);
              EventDropUpValInfo___ctor_29425888(v159, eventId, v158, v115, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v68,
                     (System_String_o *)StringLiteral_951/*"0"*/,
                     (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                v160 = System_Collections_Generic_Dictionary_string__int___get_Item(
                         (System_Collections_Generic_Dictionary_string__int__o *)v68,
                         (System_String_o *)StringLiteral_1004/*"1"*/,
                         (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo )
                  goto LABEL_255;
                isFuncGroup = v173;
                if ( !v159 )
                  goto LABEL_255;
                EventDropUpValInfo__SetAddCount(
                  v159,
                  v160,
                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                  IsRarityRestriction,
                  0LL);
              }
              else
              {
                isFuncGroup = v173;
                if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                       (System_Collections_Generic_Dictionary_string__int__o *)v68,
                       (System_String_o *)StringLiteral_951/*"0"*/,
                       (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 2 )
                {
                  v161 = System_Collections_Generic_Dictionary_string__int___get_Item(
                           (System_Collections_Generic_Dictionary_string__int__o *)v68,
                           (System_String_o *)StringLiteral_1004/*"1"*/,
                           (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v159 )
                    goto LABEL_255;
                  EventDropUpValInfo__SetRateCount(
                    v159,
                    v161,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    IsRarityRestriction,
                    0LL);
                }
              }
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              dropList = (*eventUpVallInfo)->fields.dropList;
              if ( !dropList )
                goto LABEL_255;
              v157 = (EventMissionProgressRequest_Argument_ProgressData_o *)v159;
              break;
            case 113:
              Values = (System_Int32_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                               v68,
                                               (System_Xml_XmlQualifiedName_o *)StringLiteral_1102/*"2"*/,
                                               (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)Values & 1) == 0 )
                goto LABEL_224;
              Values = (System_Int32_array *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                               (System_Collections_Generic_Dictionary_string__int__o *)v68,
                                               (System_String_o *)StringLiteral_1102/*"2"*/,
                                               (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)Values )
                goto LABEL_224;
              Values = (System_Int32_array *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                               (System_Collections_Generic_Dictionary_string__int__o *)v68,
                                               (System_String_o *)StringLiteral_951/*"0"*/,
                                               (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)Values )
              {
                Values = (System_Int32_array *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                 (System_Collections_Generic_Dictionary_string__int__o *)v68,
                                                 (System_String_o *)StringLiteral_1004/*"1"*/,
                                                 (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)Values )
                  goto LABEL_224;
              }
              if ( isSupport )
              {
                Values = (System_Int32_array *)SkillLvEntity__IsSupportExcluded(
                                                 (SkillLvEntity_o *)Values,
                                                 (System_Collections_Generic_Dictionary_string__int__o *)v68,
                                                 v49);
                if ( ((unsigned __int8)Values & 1) != 0 )
                  goto LABEL_224;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              if ( !entity )
                goto LABEL_255;
              v116 = (*eventUpVallInfo)->fields.setupInfo;
              if ( !v116 )
                goto LABEL_255;
              Values = (System_Int32_array *)EventUpValSetupInfo__IsUpVal(
                                               v116,
                                               questPhaseIndividualityList,
                                               *(System_Int32_array **)&entity->fields.startType,
                                               0LL);
              v55 |= (unsigned __int8)Values;
              if ( !v171 || ((unsigned __int8)Values & 1) == 0 )
                goto LABEL_224;
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              Values = ServantEntity__getIndividuality(
                         v171,
                         (*eventUpVallInfo)->fields.limitCount,
                         (*eventUpVallInfo)->fields.dispLimitCount,
                         0LL);
              if ( !Values )
                goto LABEL_255;
              v119 = *(_QWORD *)&Values->max_length;
              if ( (int)v119 < 1 )
                goto LABEL_223;
              v120 = 0LL;
              v172 = &Values->m_Items[1];
              while ( v120 < (unsigned int)v119 )
              {
                v121 = (FunctionEntity_o *)entity;
                v122 = Values;
                v123 = v172[v120];
                v124 = (EventDropUpValInfo_o *)sub_B170CC(EventDropUpValInfo_TypeInfo, v48, v49, v117, v118);
                EventDropUpValInfo___ctor_29425888(v124, eventId, v121, v123, 0LL);
                if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                       (System_Collections_Generic_Dictionary_string__int__o *)v68,
                       (System_String_o *)StringLiteral_951/*"0"*/,
                       (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                {
                  v125 = System_Collections_Generic_Dictionary_string__int___get_Item(
                           (System_Collections_Generic_Dictionary_string__int__o *)v68,
                           (System_String_o *)StringLiteral_1004/*"1"*/,
                           (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo )
                    goto LABEL_255;
                  isFuncGroup = v173;
                  if ( !v124 )
                    goto LABEL_255;
                  EventDropUpValInfo__SetAddCount(
                    v124,
                    v125,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    IsRarityRestriction,
                    0LL);
                }
                else
                {
                  isFuncGroup = v173;
                  if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                         (System_Collections_Generic_Dictionary_string__int__o *)v68,
                         (System_String_o *)StringLiteral_951/*"0"*/,
                         (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 2 )
                  {
                    v126 = System_Collections_Generic_Dictionary_string__int___get_Item(
                             (System_Collections_Generic_Dictionary_string__int__o *)v68,
                             (System_String_o *)StringLiteral_1004/*"1"*/,
                             (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v124 )
                      goto LABEL_255;
                    EventDropUpValInfo__SetRateCount(
                      v124,
                      v126,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      IsRarityRestriction,
                      0LL);
                  }
                }
                if ( !*eventUpVallInfo )
                  goto LABEL_255;
                v127 = (*eventUpVallInfo)->fields.dropList;
                if ( !v127 )
                  goto LABEL_255;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v127,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v124,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
                Values = v122;
                LODWORD(v119) = v122->max_length;
                ++v120;
                v55 = 1;
                if ( (__int64)v120 >= (int)v119 )
                  goto LABEL_224;
              }
              goto LABEL_256;
            case 116:
              Values = (System_Int32_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                               v68,
                                               (System_Xml_XmlQualifiedName_o *)StringLiteral_1102/*"2"*/,
                                               (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)Values & 1) == 0 )
                goto LABEL_224;
              if ( isSupport )
              {
                Values = (System_Int32_array *)SkillLvEntity__IsSupportExcluded(
                                                 (SkillLvEntity_o *)Values,
                                                 (System_Collections_Generic_Dictionary_string__int__o *)v68,
                                                 v49);
                if ( ((unsigned __int8)Values & 1) != 0 )
                  goto LABEL_224;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              if ( !entity )
                goto LABEL_255;
              v128 = (*eventUpVallInfo)->fields.setupInfo;
              if ( !v128 )
                goto LABEL_255;
              Values = (System_Int32_array *)EventUpValSetupInfo__IsUpVal(
                                               v128,
                                               questPhaseIndividualityList,
                                               *(System_Int32_array **)&entity->fields.startType,
                                               0LL);
              if ( ((unsigned __int8)Values & 1) == 0 )
                goto LABEL_224;
              v129 = (FunctionEntity_o *)entity;
              v130 = System_Collections_Generic_Dictionary_string__int___get_Item(
                       (System_Collections_Generic_Dictionary_string__int__o *)v68,
                       (System_String_o *)StringLiteral_951/*"0"*/,
                       (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v78 = (EventDropUpValInfo_o *)sub_B170CC(EventDropUpValInfo_TypeInfo, v131, v132, v133, v134);
              EventDropUpValInfo___ctor_29425888(v78, eventId, v129, v130, 0LL);
              v135 = (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
              v136 = (System_String_o *)StringLiteral_1004/*"1"*/;
              goto LABEL_200;
            case 129:
              if ( isSupport )
                goto LABEL_224;
              Values = (System_Int32_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                               v68,
                                               (System_Xml_XmlQualifiedName_o *)StringLiteral_1102/*"2"*/,
                                               (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)Values & 1) == 0 )
                goto LABEL_224;
              Values = (System_Int32_array *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                               (System_Collections_Generic_Dictionary_string__int__o *)v68,
                                               (System_String_o *)StringLiteral_1102/*"2"*/,
                                               (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)Values )
                goto LABEL_224;
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              if ( !entity )
                goto LABEL_255;
              v137 = (*eventUpVallInfo)->fields.setupInfo;
              if ( !v137 )
                goto LABEL_255;
              Values = (System_Int32_array *)EventUpValSetupInfo__IsUpVal(
                                               v137,
                                               questPhaseIndividualityList,
                                               *(System_Int32_array **)&entity->fields.startType,
                                               0LL);
              if ( ((unsigned __int8)Values & 1) == 0 )
                goto LABEL_224;
              v140 = (FunctionEntity_o *)entity;
              v78 = (EventDropUpValInfo_o *)sub_B170CC(EventDropUpValInfo_TypeInfo, v48, v49, v138, v139);
              EventDropUpValInfo___ctor(v78, eventId, v140, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v68,
                     (System_String_o *)StringLiteral_951/*"0"*/,
                     (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                v99 = &StringLiteral_1004/*"1"*/;
                goto LABEL_189;
              }
              isFuncGroup = v173;
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v68,
                     (System_String_o *)StringLiteral_951/*"0"*/,
                     (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
                goto LABEL_218;
              v150 = &StringLiteral_1004/*"1"*/;
              goto LABEL_208;
            default:
              if ( age != 132 )
                goto LABEL_224;
              Values = (System_Int32_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                               v68,
                                               (System_Xml_XmlQualifiedName_o *)StringLiteral_1151/*"3"*/,
                                               (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)Values & 1) == 0 )
                goto LABEL_224;
              Values = (System_Int32_array *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                               (System_Collections_Generic_Dictionary_string__int__o *)v68,
                                               (System_String_o *)StringLiteral_1151/*"3"*/,
                                               (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)Values )
                goto LABEL_224;
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              if ( !entity )
                goto LABEL_255;
              v95 = (*eventUpVallInfo)->fields.setupInfo;
              if ( !v95 )
                goto LABEL_255;
              Values = (System_Int32_array *)EventUpValSetupInfo__IsUpVal(
                                               v95,
                                               questPhaseIndividualityList,
                                               *(System_Int32_array **)&entity->fields.startType,
                                               0LL);
              if ( ((unsigned __int8)Values & 1) == 0 )
                goto LABEL_224;
              v98 = (FunctionEntity_o *)entity;
              v78 = (EventDropUpValInfo_o *)sub_B170CC(EventDropUpValInfo_TypeInfo, v48, v49, v96, v97);
              EventDropUpValInfo___ctor(v78, eventId, v98, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v68,
                     (System_String_o *)StringLiteral_1004/*"1"*/,
                     (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                v99 = &StringLiteral_1102/*"2"*/;
LABEL_189:
                v80 = (System_String_o *)*v99;
                v79 = (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
LABEL_190:
                v141 = System_Collections_Generic_Dictionary_string__int___get_Item(
                         (System_Collections_Generic_Dictionary_string__int__o *)v68,
                         v80,
                         v79);
                if ( !*eventUpVallInfo )
                  goto LABEL_255;
                isFuncGroup = v173;
                if ( !v78 )
                  goto LABEL_255;
                EventDropUpValInfo__SetAddCount(
                  v78,
                  v141,
                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                  IsRarityRestriction,
                  0LL);
                goto LABEL_218;
              }
              v148 = (System_String_o *)StringLiteral_1004/*"1"*/;
              v149 = (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
LABEL_206:
              isFuncGroup = v173;
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v68,
                     v148,
                     v149) != 2 )
                goto LABEL_218;
              v150 = &StringLiteral_1102/*"2"*/;
LABEL_208:
              v151 = System_Collections_Generic_Dictionary_string__int___get_Item(
                       (System_Collections_Generic_Dictionary_string__int__o *)v68,
                       (System_String_o *)*v150,
                       (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v152 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              goto LABEL_216;
          }
          goto LABEL_222;
        }
        if ( age != 1 )
        {
          if ( age == 7 )
          {
            Values = (System_Int32_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                             v68,
                                             (System_Xml_XmlQualifiedName_o *)StringLiteral_1004/*"1"*/,
                                             (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)Values & 1) != 0 )
            {
              Values = (System_Int32_array *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                               (System_Collections_Generic_Dictionary_string__int__o *)v68,
                                               (System_String_o *)StringLiteral_1004/*"1"*/,
                                               (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)Values )
              {
                if ( !*eventUpVallInfo )
                  goto LABEL_255;
                if ( !entity )
                  goto LABEL_255;
                v142 = (*eventUpVallInfo)->fields.setupInfo;
                if ( !v142 )
                  goto LABEL_255;
                Values = (System_Int32_array *)EventUpValSetupInfo__IsUpVal(
                                                 v142,
                                                 questPhaseIndividualityList,
                                                 *(System_Int32_array **)&entity->fields.startType,
                                                 0LL);
                if ( ((unsigned __int8)Values & 1) != 0 )
                {
                  v145 = (FunctionEntity_o *)entity;
                  v78 = (EventDropUpValInfo_o *)sub_B170CC(EventDropUpValInfo_TypeInfo, v48, v49, v143, v144);
                  EventDropUpValInfo___ctor(v78, eventId, v145, 0LL);
                  v136 = (System_String_o *)StringLiteral_1004/*"1"*/;
                  v135 = (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
LABEL_200:
                  v146 = System_Collections_Generic_Dictionary_string__int___get_Item(
                           (System_Collections_Generic_Dictionary_string__int__o *)v68,
                           v136,
                           v135);
                  if ( !*eventUpVallInfo || !v78 )
                    goto LABEL_255;
                  EventDropUpValInfo__SetRateCount(
                    v78,
                    v146,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    IsRarityRestriction,
                    0LL);
                  v147 = eventUpVallInfo;
                  isFuncGroup = v173;
                  goto LABEL_219;
                }
              }
            }
            goto LABEL_224;
          }
          if ( age != 16 )
            goto LABEL_224;
        }
        Values = (System_Int32_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                         v68,
                                         (System_Xml_XmlQualifiedName_o *)StringLiteral_1151/*"3"*/,
                                         (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)Values & 1) != 0 )
        {
          if ( !isSupport
            || (Values = (System_Int32_array *)SkillLvEntity__IsSupportExcluded(
                                                 (SkillLvEntity_o *)Values,
                                                 (System_Collections_Generic_Dictionary_string__int__o *)v68,
                                                 v49),
                ((unsigned __int8)Values & 1) == 0) )
          {
            v81 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !v81 )
              goto LABEL_255;
            Values = (System_Int32_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)v81,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
            v82 = this->fields.funcId;
            if ( !v82 )
              goto LABEL_255;
            if ( v64 >= v82->max_length )
              goto LABEL_256;
            if ( !Values )
              goto LABEL_255;
            EnableEntity = EventPointBuffMaster__GetEnableEntity(
                             (EventPointBuffMaster_o *)Values,
                             eventId,
                             v82->m_Items[v64 + 1],
                             0LL);
            Values = (System_Int32_array *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                             (System_Collections_Generic_Dictionary_string__int__o *)v68,
                                             (System_String_o *)StringLiteral_1151/*"3"*/,
                                             (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( EnableEntity || (_DWORD)Values )
            {
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              if ( !entity )
                goto LABEL_255;
              v84 = (*eventUpVallInfo)->fields.setupInfo;
              if ( !v84 )
                goto LABEL_255;
              Values = (System_Int32_array *)EventUpValSetupInfo__IsUpVal(
                                               v84,
                                               questPhaseIndividualityList,
                                               *(System_Int32_array **)&entity->fields.startType,
                                               0LL);
              if ( ((unsigned __int8)Values & 1) != 0 )
              {
                if ( v170 )
                  goto LABEL_93;
                if ( !*eventUpVallInfo || !entity )
                  goto LABEL_255;
                Values = (System_Int32_array *)ServantEntity__IsIndividuality_30656232(
                                                 v171,
                                                 (*eventUpVallInfo)->fields.limitCount,
                                                 (*eventUpVallInfo)->fields.dispLimitCount,
                                                 (System_Int32_array *)entity->fields.longName,
                                                 0LL);
                if ( ((unsigned __int8)Values & 1) != 0 )
                {
LABEL_93:
                  v85 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v85 )
                    goto LABEL_255;
                  v169 = EnableEntity;
                  Values = (System_Int32_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)v85,
                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
                  if ( !entity )
                    goto LABEL_255;
                  v88 = entity->fields.name;
                  if ( !v88 )
                    goto LABEL_255;
                  klass = v88[1].klass;
                  if ( (int)klass < 1 )
                  {
                    v94 = 0;
                  }
                  else
                  {
                    v90 = (DataMasterBase_WarMaster__WarEntity__int__o *)Values;
                    v91 = 0LL;
                    while ( 1 )
                    {
                      if ( v91 >= (unsigned int)klass )
                        goto LABEL_256;
                      if ( !v90 )
                        goto LABEL_255;
                      v92 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v90,
                              *((_DWORD *)&v88[1].monitor + v91),
                              (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                      if ( !v92 )
                        goto LABEL_255;
                      v93 = *(&v92->fields.id + 1);
                      if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BuffList_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
                      }
                      Values = (System_Int32_array *)BuffList__isSpHit(v93, 0LL);
                      if ( ((unsigned __int8)Values & 1) != 0 )
                        break;
                      LODWORD(klass) = v88[1].klass;
                      if ( (__int64)++v91 >= (int)klass )
                      {
                        v94 = 0;
                        goto LABEL_211;
                      }
                    }
                    v94 = 1;
                  }
LABEL_211:
                  if ( ((unsigned __int8)v94 & (v169 != 0LL)) != 0 )
                  {
                    v153 = System_Collections_Generic_Dictionary_string__int___get_Item(
                             (System_Collections_Generic_Dictionary_string__int__o *)v68,
                             (System_String_o *)StringLiteral_1151/*"3"*/,
                             (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !v169 )
                      goto LABEL_255;
                    System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
                      v68,
                      (System_Xml_XmlQualifiedName_o *)StringLiteral_1151/*"3"*/,
                      v169->fields.value + v153,
                      (const MethodInfo_2D9C194 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
                  }
                  v154 = (FunctionEntity_o *)entity;
                  v78 = (EventDropUpValInfo_o *)sub_B170CC(EventDropUpValInfo_TypeInfo, v48, v49, v86, v87);
                  EventDropUpValInfo___ctor(v78, eventId, v154, 0LL);
                  v151 = System_Collections_Generic_Dictionary_string__int___get_Item(
                           (System_Collections_Generic_Dictionary_string__int__o *)v68,
                           (System_String_o *)StringLiteral_1151/*"3"*/,
                           (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  v152 = *eventUpVallInfo;
                  if ( !*eventUpVallInfo )
                    goto LABEL_255;
                  isFuncGroup = v173;
LABEL_216:
                  if ( !v78 )
                    goto LABEL_255;
                  EventDropUpValInfo__SetRateCount(v78, v151, v152->fields.equipSvtId > 0, IsRarityRestriction, 0LL);
LABEL_218:
                  v147 = eventUpVallInfo;
LABEL_219:
                  v155 = *v147;
                  if ( !v155 )
                    goto LABEL_255;
                  dropList = v155->fields.dropList;
                  if ( !dropList )
                    goto LABEL_255;
                  v157 = (EventMissionProgressRequest_Argument_ProgressData_o *)v78;
LABEL_222:
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)dropList,
                    v157,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
LABEL_223:
                  v55 = 1;
                }
              }
            }
          }
        }
LABEL_224:
        funcId = this->fields.funcId;
        ++v64;
        if ( !funcId )
          goto LABEL_255;
      }
      v53 = v174;
      LODWORD(v52) = v174->max_length;
      v56 = v178 + 1;
      if ( (__int64)(v178 + 1) >= (int)v52 )
        return v55 & 1;
    }
  }
LABEL_253:
  v55 = 0;
  return v55 & 1;
}


int32_t __fastcall SkillLvEntity__getFriendPointUpType(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x20
  unsigned __int64 v11; // x21
  unsigned __int64 max_length; // x9
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F9250 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F9250 = 1;
  }
  entity = 0LL;
  if ( this->fields.funcId )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionMaster___),
          (funcId = this->fields.funcId) == 0LL) )
    {
LABEL_15:
      sub_B170D4();
    }
    v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v11 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v11 >= (int)max_length )
        break;
      if ( v11 >= max_length )
      {
        sub_B17100(MasterData_WarQuestSelectionMaster, v7, v8);
        sub_B170A0();
      }
      if ( !v10 )
        goto LABEL_15;
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                          v10,
                                                                          &entity,
                                                                          funcId->m_Items[v11 + 1],
                                                                          (const MethodInfo_266F3E4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_15;
        MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)LODWORD(entity->fields.age);
        if ( (_DWORD)MasterData_WarQuestSelectionMaster == 104 || (_DWORD)MasterData_WarQuestSelectionMaster == 123 )
          return (int)MasterData_WarQuestSelectionMaster;
      }
      funcId = this->fields.funcId;
      ++v11;
      if ( !funcId )
        goto LABEL_15;
    }
  }
  LODWORD(MasterData_WarQuestSelectionMaster) = 0;
  return (int)MasterData_WarQuestSelectionMaster;
}


int32_t __fastcall SkillLvEntity__getFriendPointUpVal(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v10; // x1
  System_Collections_Generic_Dictionary_string__int__array *Values; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Int32_array *funcId; // x8
  System_Collections_Generic_Dictionary_string__int__array *v15; // x20
  unsigned __int64 v16; // x22
  unsigned __int64 max_length; // x9
  int age; // w8
  int v19; // w8
  System_Collections_Generic_Dictionary_string__int__o *v20; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F924F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_951/*"0"*/, v7);
    byte_40F924F = 1;
  }
  entity = 0LL;
  if ( !this->fields.funcId )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionMaster___);
  Values = SkillLvEntity__getValues(this, v10);
  funcId = this->fields.funcId;
  if ( !funcId )
    goto LABEL_15;
  v15 = Values;
  v16 = 0LL;
  while ( 1 )
  {
    max_length = funcId->max_length;
    if ( (__int64)v16 >= (int)max_length )
      return 0;
    if ( v16 >= max_length )
      goto LABEL_23;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_15;
    Values = (System_Collections_Generic_Dictionary_string__int__array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                           MasterData_WarQuestSelectionMaster,
                                                                           &entity,
                                                                           funcId->m_Items[v16 + 1],
                                                                           (const MethodInfo_266F3E4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Values & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_15;
      age = (int)entity->fields.age;
      if ( age == 123 || age == 104 )
        break;
    }
    funcId = this->fields.funcId;
    ++v16;
    if ( !funcId )
      goto LABEL_15;
  }
  if ( !v15 )
LABEL_15:
    sub_B170D4();
  v19 = v15->max_length;
  if ( (int)v16 >= v19 )
    return 0;
  if ( (unsigned int)v16 >= v19 )
  {
LABEL_23:
    sub_B17100(Values, v12, v13);
    sub_B170A0();
  }
  v20 = v15->m_Items[v16];
  if ( v20
    && System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v20,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_951/*"0"*/,
         (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_string__int___get_Item(
             v20,
             (System_String_o *)StringLiteral_951/*"0"*/,
             (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
  WebViewManager_o *Instance; // x0
  char *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x2
  struct System_Int32_array *v10; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  unsigned __int64 v12; // x21
  unsigned __int64 max_length; // x9
  LocalizationManager_c *v14; // x0
  System_String_o **p_unknownNameText; // x8

  if ( (byte_40F924E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F924E = 1;
  }
  funcId = this->fields.funcId;
  if ( funcId && *(_QWORD *)&funcId->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionMaster___),
          (v10 = this->fields.funcId) == 0LL) )
    {
LABEL_13:
      sub_B170D4();
    }
    v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v12 = 0LL;
    while ( 1 )
    {
      max_length = v10->max_length;
      if ( (__int64)v12 >= (int)max_length )
        break;
      if ( v12 >= max_length )
      {
        sub_B17100(MasterData_WarQuestSelectionMaster, method, v9);
        sub_B170A0();
      }
      if ( !v11 )
        goto LABEL_13;
      MasterData_WarQuestSelectionMaster = (char *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     v11,
                                                     v10->m_Items[v12 + 1],
                                                     (const MethodInfo_266F388 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( MasterData_WarQuestSelectionMaster )
      {
        p_unknownNameText = (System_String_o **)(MasterData_WarQuestSelectionMaster + 56);
        return *p_unknownNameText;
      }
      v10 = this->fields.funcId;
      ++v12;
      if ( !v10 )
        goto LABEL_13;
    }
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F87E5 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40F87E5 = 1;
  }
  v14 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager_TypeInfo;
  }
  p_unknownNameText = &v14->static_fields->unknownNameText;
  return *p_unknownNameText;
}


int32_t __fastcall SkillLvEntity__getMovePositionDown(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  SkillLvEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_40F925B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B16FFC(&long_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_17980/*"down"*/, v5);
    byte_40F925B = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_17980/*"down"*/,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v7 = this->fields.script;
      if ( !v7
        || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v7,
                     (System_Type_o *)StringLiteral_17980/*"down"*/,
                     (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B170D4();
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v9 = (SkillLvEntity_o *)sub_B173C8(Item);
        LODWORD(script) = SkillLvEntity__IsRevivalUp(v9, v10);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  SkillLvEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_40F925A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B16FFC(&long_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_22841/*"up"*/, v5);
    byte_40F925A = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_22841/*"up"*/,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v7 = this->fields.script;
      if ( !v7
        || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v7,
                     (System_Type_o *)StringLiteral_22841/*"up"*/,
                     (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B170D4();
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v9 = (SkillLvEntity_o *)sub_B173C8(Item);
        LODWORD(script) = SkillLvEntity__getMovePositionDown(v9, v10);
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

  if ( (byte_40F9255 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B16FFC(&string_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_10662/*"PlayVoiceNo"*/, v5);
    byte_40F9255 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_10662/*"PlayVoiceNo"*/,
            (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B170D4();
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_10662/*"PlayVoiceNo"*/,
                                  (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B173C8(result);
      return 0LL;
    }
  }
  return result;
}


System_Collections_Generic_Dictionary_string__int__array *__fastcall SkillLvEntity__getValues(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_String_array *svals; // x8
  int max_length; // w19
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_Collections_Generic_Dictionary_string__int__array *v15; // x20
  il2cpp_array_size_t v16; // w25
  struct System_String_array *v17; // x8
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  System_String_o *v20; // x22
  __int64 v21; // x2
  System_String_array *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int v27; // w27
  System_String_array *v28; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v29; // x24
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  Il2CppClass **v35; // x23
  BattleServantConfConponent_o *v36; // x23
  int32_t v37; // w8
  System_String_o *v38; // x24
  BattleServantConfConponent_c *v39; // x24
  System_String_o *v40; // x0
  int32_t v41; // w2
  const MethodInfo_2D9C194 *v42; // x3
  System_Xml_XmlQualifiedName_o *v43; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *klass; // x0
  __int64 v45; // x24
  int32_t result[2]; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40F9249 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__int____TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v5);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    sub_B16FFC(&StringLiteral_15571/*"["*/, v7);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    sub_B16FFC(&StringLiteral_15807/*"]"*/, v9);
    byte_40F9249 = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = this->fields.svals;
  if ( !svals )
    return (System_Collections_Generic_Dictionary_string__int__array *)sub_B17014(
                                                                         System_Collections_Generic_Dictionary_string__int____TypeInfo,
                                                                         1LL,
                                                                         v2);
  max_length = svals->max_length;
  v12 = sub_B17014(System_Collections_Generic_Dictionary_string__int____TypeInfo, (unsigned int)max_length, v2);
  v15 = (System_Collections_Generic_Dictionary_string__int__array *)v12;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = this->fields.svals;
      if ( !v17 )
        goto LABEL_41;
      if ( v16 >= v17->max_length )
        goto LABEL_42;
      v18 = v17->m_Items[v16];
      if ( !v18 )
        goto LABEL_41;
      v19 = System_String__Replace_43750968(
              v18,
              (System_String_o *)StringLiteral_15571/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( !v19 )
        goto LABEL_41;
      v20 = System_String__Replace_43750968(
              v19,
              (System_String_o *)StringLiteral_15807/*"]"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      v12 = sub_B17014(char___TypeInfo, 1LL, v21);
      if ( !v12 )
        goto LABEL_41;
      v13 = v12;
      if ( !*(_DWORD *)(v12 + 24) )
        goto LABEL_42;
      *(_WORD *)(v12 + 32) = 44;
      if ( !v20
        || (v22 = System_String__Split(v20, (System_Char_array *)v12, 0LL)) == 0LL
        || (v27 = v22->max_length,
            v28 = v22,
            v29 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B170CC(
                                                                                      System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                                      v23,
                                                                                      v24,
                                                                                      v25,
                                                                                      v26),
            System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
              v29,
              (const MethodInfo_2D9B608 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__),
            !v15) )
      {
LABEL_41:
        sub_B170D4();
      }
      if ( v29 )
      {
        v12 = sub_B170BC(v29, v15->obj.klass->_1.element_class);
        if ( !v12 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v16 >= v15->max_length )
      {
LABEL_42:
        sub_B17100(v12, v13, v14);
        sub_B170A0();
      }
      v35 = &v15->obj.klass + (int)v16;
      v35[4] = (Il2CppClass *)v29;
      v36 = (BattleServantConfConponent_o *)(v35 + 4);
      sub_B16F98(v36, (System_Int32_array **)v29, v14, v30, v31, v32, v33, v34);
      result[1] = 0;
      if ( v27 >= 1 )
        break;
LABEL_37:
      if ( (int)++v16 >= max_length )
        return v15;
    }
    v37 = 0;
    while ( 1 )
    {
      if ( v37 >= v28->max_length )
        goto LABEL_42;
      v38 = v28->m_Items[v37];
      v12 = System_Int32__TryParse(v38, result, 0LL);
      if ( (v12 & 1) != 0 )
        break;
      v12 = sub_B17014(char___TypeInfo, 1LL, v14);
      if ( !v12 )
        goto LABEL_41;
      v13 = v12;
      if ( !*(_DWORD *)(v12 + 24) )
        goto LABEL_42;
      *(_WORD *)(v12 + 32) = 58;
      if ( !v38 )
        goto LABEL_41;
      v12 = (__int64)System_String__Split(v38, (System_Char_array *)v12, 0LL);
      if ( !v12 )
        goto LABEL_41;
      v45 = v12;
      if ( *(int *)(v12 + 24) >= 2 )
      {
        v12 = System_Int32__TryParse(*(System_String_o **)(v12 + 40), result, 0LL);
        if ( (v12 & 1) != 0 )
        {
          if ( v16 >= v15->max_length || !*(_DWORD *)(v45 + 24) )
            goto LABEL_42;
          klass = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v36->klass;
          if ( !v36->klass )
            goto LABEL_41;
          v41 = result[0];
          v43 = *(System_Xml_XmlQualifiedName_o **)(v45 + 32);
          v42 = (const MethodInfo_2D9C194 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
LABEL_25:
          System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(klass, v43, v41, v42);
        }
      }
      v37 = ++result[1];
      if ( result[1] >= v27 )
        goto LABEL_37;
    }
    if ( v16 >= v15->max_length )
      goto LABEL_42;
    v39 = v36->klass;
    v40 = System_Int32__ToString((int32_t)&result[1], 0LL);
    if ( !v39 )
      goto LABEL_41;
    v41 = result[0];
    v42 = (const MethodInfo_2D9C194 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
    v43 = (System_Xml_XmlQualifiedName_o *)v40;
    klass = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v39;
    goto LABEL_25;
  }
  return v15;
}


System_String_o *__fastcall SkillLvEntity__getVoiceAssetName(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_40F9254 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B16FFC(&string_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_15160/*"VoiceAssetName"*/, v5);
    byte_40F9254 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_15160/*"VoiceAssetName"*/,
            (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B170D4();
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_15160/*"VoiceAssetName"*/,
                                  (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B173C8(result);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  float result; // s0
  SkillLvEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40F9258 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B16FFC(&long_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_15161/*"VoiceVolume"*/, v5);
    byte_40F9258 = 1;
  }
  script = this->fields.script;
  v7 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_15161/*"VoiceVolume"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v7;
  }
  v8 = this->fields.script;
  if ( !v8
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v8,
                 (System_Type_o *)StringLiteral_15161/*"VoiceVolume"*/,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item) / 1000.0;
  v11 = (SkillLvEntity_o *)sub_B173C8(Item);
  SkillLvEntity__getMovePositionUp(v11, v12);
  return result;
}


bool __fastcall SkillLvEntity__isPlayVoiceWait(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_40F9256 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&StringLiteral_10663/*"PlayVoiceWait"*/, v3);
    byte_40F9256 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_10663/*"PlayVoiceWait"*/,
                       (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  const MethodInfo *v12; // x0

  if ( (byte_40F7A09 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, obj);
    sub_B16FFC(&long_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_16223/*"afterClearBgmId"*/, v6);
    sub_B16FFC(&StringLiteral_19724/*"indv"*/, v7);
    sub_B16FFC(&StringLiteral_16625/*"beforeClearBgmId"*/, v8);
    sub_B16FFC(&StringLiteral_21522/*"questPhase"*/, v9);
    sub_B16FFC(&StringLiteral_21520/*"questId"*/, v10);
    byte_40F7A09 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !obj )
    goto LABEL_15;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_19724/*"indv"*/,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.svtIndv = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_21520/*"questId"*/,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_21522/*"questPhase"*/,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questPhase = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_16625/*"beforeClearBgmId"*/,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.beforeClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_16223/*"afterClearBgmId"*/,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_15:
    sub_B170D4();
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    this->fields.afterClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
    return;
  }
LABEL_16:
  v12 = (const MethodInfo *)sub_B173C8(Item);
  SkillMaster___c___cctor(v12);
}


void __fastcall SkillLvEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7A07 & 1) == 0 )
  {
    sub_B16FFC(&SkillLvEntity___c_TypeInfo, v1);
    byte_40F7A07 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SkillLvEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SkillLvEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall SkillLvEntity___c___ctor(SkillLvEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Nullable_int__o __fastcall SkillLvEntity___c___GetFuncIndexForSplitFuncSequence_b__44_0(
        SkillLvEntity___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int v3; // w19
  System_Nullable_int__o v5; // [xsp+8h] [xbp-18h] BYREF
  System_Nullable_int__o v6; // 0:x0.8

  v3 = x;
  if ( (byte_40F7A08 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_int___ctor__, x);
    byte_40F7A08 = 1;
  }
  v6 = (System_Nullable_int__o)&v5;
  v5 = 0LL;
  System_Nullable_int____ctor(v6, v3 - 1, (const MethodInfo_296877C *)Method_System_Nullable_int___ctor__);
  return v5;
}