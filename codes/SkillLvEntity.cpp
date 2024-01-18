void __fastcall SkillLvEntity___ctor(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186DB4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4186DB4 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall SkillLvEntity___ctor_23795280(
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Array_o *funcId; // x0
  Il2CppObject *v18; // x0
  Il2CppObject *v19; // x21
  struct System_Int32_array *v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Array_o *svals; // x0
  Il2CppObject *v28; // x0
  struct System_String_array *v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IDictionary_TKey__TValue__o *script; // x20
  System_Collections_Generic_Dictionary_string__string__o *v37; // x21

  if ( (byte_4186DB5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, srcEntity);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object___ctor___67254608, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B2C35C(&int___TypeInfo, v7);
    sub_B2C35C(&string___TypeInfo, v8);
    byte_4186DB5 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
  if ( !srcEntity )
    sub_B2C434(v9, v10);
  this->fields.skillId = srcEntity->fields.skillId;
  this->fields.lv = srcEntity->fields.lv;
  this->fields.chargeTurn = srcEntity->fields.chargeTurn;
  this->fields.priority = srcEntity->fields.priority;
  funcId = (System_Array_o *)srcEntity->fields.funcId;
  if ( funcId && (v18 = System_Array__Clone(funcId, 0LL)) != 0LL )
  {
    v19 = v18;
    v20 = (struct System_Int32_array *)sub_B2C41C(v18, int___TypeInfo);
    if ( !v20 )
      goto LABEL_12;
  }
  else
  {
    v20 = 0LL;
  }
  this->fields.funcId = v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.funcId,
    (System_Int32_array **)v20,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  svals = (System_Array_o *)srcEntity->fields.svals;
  if ( !svals )
    goto LABEL_13;
  v28 = System_Array__Clone(svals, 0LL);
  if ( !v28 )
    goto LABEL_13;
  v19 = v28;
  v29 = (struct System_String_array *)sub_B2C41C(v28, string___TypeInfo);
  if ( v29 )
    goto LABEL_14;
LABEL_12:
  sub_B2C728(v19);
LABEL_13:
  v29 = 0LL;
LABEL_14:
  this->fields.svals = v29;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svals,
    (System_Int32_array **)v29,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.skillDetailId = srcEntity->fields.skillDetailId;
  script = (System_Collections_Generic_IDictionary_TKey__TValue__o *)srcEntity->fields.script;
  if ( script )
  {
    v37 = (System_Collections_Generic_Dictionary_string__string__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_string__string____ctor_47911588(
      v37,
      script,
      (const MethodInfo_2DB12A4 *)Method_System_Collections_Generic_Dictionary_string__object___ctor___67254608);
  }
  else
  {
    v37 = 0LL;
  }
  this->fields.script = (struct System_Collections_Generic_Dictionary_string__object__o *)v37;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.script,
    (System_Int32_array **)v37,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__CreatePK(int32_t skillId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4186DB3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_4186DB3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           skillId,
           lv,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SkillLvEntity__CreatePrimaryKey(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillLvEntity__CreatePK(this->fields.skillId, this->fields.lv, v2);
}


int32_t __fastcall SkillLvEntity__GetActNpcServantId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186DDA & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1811/*"ActNpcServantId"*/, method);
    byte_4186DDA = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_1811/*"ActNpcServantId"*/, -1, v2);
}


System_Int32_array *__fastcall SkillLvEntity__GetActRarity(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4186DD1 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16233/*"actRarity"*/, method);
    byte_4186DD1 = 1;
  }
  return SkillLvEntity__GetIntArrayFromScript(this, (System_String_o *)StringLiteral_16233/*"actRarity"*/, v2);
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
  __int64 v14; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v17; // x10
  UnityEngine_Purchasing_IStoreExtension_o *v18; // x20
  System_Collections_Generic_List_int__o *v20; // x19
  int monitor; // w8
  unsigned int v22; // w21
  int32_t *v23; // x0
  SkillLvEntity_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_4186DCD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B2C35C(&long_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_B2C35C(&StringLiteral_1843/*"AddIndiv"*/, v12);
    byte_4186DCD = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_1843/*"AddIndiv"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v15 = this->fields.script;
  if ( !v15 )
    goto LABEL_24;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15,
           (System_Type_o *)StringLiteral_1843/*"AddIndiv"*/,
           (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item
    && (v17 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
        *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17) )
  {
    v18 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v17 - 1] == System_Collections_Generic_List_object__TypeInfo
        ? Item
        : 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  v20 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v18 )
    goto LABEL_24;
  monitor = (int)v18[1].monitor;
  if ( monitor < 1 )
  {
LABEL_22:
    if ( v20 )
      return System_Collections_Generic_List_int___ToArray(
               v20,
               (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_24:
    sub_B2C434(v15, v14);
  }
  v22 = 0;
  while ( 1 )
  {
    if ( monitor <= v22 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( !v20 )
      goto LABEL_24;
    v15 = (struct System_Collections_Generic_Dictionary_string__object__o *)*((_QWORD *)&v18[1].klass->_1.byval_arg.data
                                                                            + (int)v22);
    if ( !v15 )
      goto LABEL_24;
    if ( v15->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v23 = (int32_t *)j_il2cpp_object_unbox_0(v15);
    System_Collections_Generic_List_int___Add(
      v20,
      *v23,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    monitor = (int)v18[1].monitor;
    if ( (int)++v22 >= monitor )
      goto LABEL_22;
  }
  v24 = (SkillLvEntity_o *)sub_B2C728(v15);
  return (System_Int32_array *)SkillLvEntity__GetFuncIndexForSplitFuncSequence(v24, v25);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillActorType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186DD8 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16263/*"additionalSkillActorType"*/, method);
    byte_4186DD8 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16263/*"additionalSkillActorType"*/, -1, v2);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186DD6 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16264/*"additionalSkillId"*/, method);
    byte_4186DD6 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16264/*"additionalSkillId"*/, -1, v2);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillLv(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186DD7 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16265/*"additionalSkillLv"*/, method);
    byte_4186DD7 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16265/*"additionalSkillLv"*/, 1, v2);
}


int32_t __fastcall SkillLvEntity__GetBattleStartRemainingTurn(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186DD9 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16653/*"battleStartRemainingTurn"*/, method);
    byte_4186DD9 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16653/*"battleStartRemainingTurn"*/, 0, v2);
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
  DataManager_o *Instance; // x0
  const MethodInfo *v22; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  struct System_Int32_array *v24; // x8
  System_Xml_XmlQualifiedName_o **v25; // x27
  DataManager_o *v26; // x24
  unsigned __int64 v27; // x23
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o **p_lookup; // x20
  unsigned __int64 max_length; // x9
  unsigned __int64 datalist_low; // x8
  System_Collections_Generic_Dictionary_string__int__o *v31; // x25
  EventUpValInfo_o *v32; // x8
  System_Xml_XmlQualifiedName_o **v33; // x9
  System_Xml_XmlQualifiedName_o *v34; // x1
  EventUpValInfo_o **v35; // x27
  System_Xml_XmlQualifiedName_o **v36; // x28
  int32_t Item; // w0
  EventUpValInfo_o **v38; // x8
  int32_t v39; // w27
  FunctionEntity_o *v40; // x28
  __int64 v42; // x0
  int32_t dispLimitCount; // [xsp+4h] [xbp-7Ch]
  int32_t limitCount; // [xsp+8h] [xbp-78h]
  EventUpValInfo_o **v45; // [xsp+10h] [xbp-70h]
  ServantEntity_o *v46; // [xsp+18h] [xbp-68h]
  char v47; // [xsp+20h] [xbp-60h]
  EventDropUpValInfo_o *v48; // [xsp+20h] [xbp-60h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v5 = eventUpVallInfo;
  if ( (byte_4186DBE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionGroupMaster___, eventUpVallInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v12);
    sub_B2C35C(&EventDropUpValInfo_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&StringLiteral_1104/*"2"*/, v16);
    sub_B2C35C(&StringLiteral_13569/*"Target"*/, v17);
    sub_B2C35C(&StringLiteral_1006/*"1"*/, v18);
    sub_B2C35C(&StringLiteral_953/*"0"*/, v19);
    byte_4186DBE = 1;
  }
  entity = 0LL;
  funcId = this->fields.funcId;
  if ( funcId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            Instance,
                                                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
        if ( *v5 )
        {
          if ( (*v5)->fields.svtId < 1 )
          {
            v46 = 0LL;
          }
          else
          {
            Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_48;
            Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
            if ( !*v5 || !Instance )
              goto LABEL_48;
            v46 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       (*v5)->fields.svtId,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          }
          Instance = (DataManager_o *)SkillLvEntity__getValues(this, v22);
          v24 = this->fields.funcId;
          if ( v24 )
          {
            v47 = 0;
            v25 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_1104/*"2"*/;
            v26 = Instance;
            v27 = 0LL;
            p_lookup = &Instance->fields.lookup;
            do
            {
              max_length = v24->max_length;
              if ( (__int64)v27 >= (int)max_length )
              {
                LOBYTE(funcId) = v47;
                return (char)funcId;
              }
              if ( v27 >= max_length )
                goto LABEL_52;
              if ( !MasterData_WarQuestSelectionMaster )
                break;
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            MasterData_WarQuestSelectionMaster,
                                            &entity,
                                            v24->m_Items[v27 + 1],
                                            (const MethodInfo_24E412C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity || !questPhaseEntity )
                  break;
                Instance = (DataManager_o *)QuestPhaseEntity__IsMatchIndividuality(
                                              questPhaseEntity,
                                              *(System_Int32_array **)&entity->fields.startType,
                                              0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  if ( !v26 )
                    break;
                  datalist_low = LODWORD(v26->fields.datalist);
                  if ( (__int64)v27 >= (int)datalist_low )
                  {
                    LOBYTE(funcId) = 0;
                    return (char)funcId;
                  }
                  if ( v27 >= datalist_low )
                  {
LABEL_52:
                    v42 = sub_B2C460(Instance);
                    sub_B2C400(v42, 0LL);
                  }
                  v31 = (System_Collections_Generic_Dictionary_string__int__o *)p_lookup[v27];
                  if ( v31 )
                  {
                    if ( !entity )
                      break;
                    if ( LODWORD(entity->fields.age) == 111 )
                    {
                      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)p_lookup[v27],
                                                    *v25,
                                                    (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                      if ( ((unsigned __int8)Instance & 1) != 0 )
                      {
                        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                      v31,
                                                      (System_String_o *)*v25,
                                                      (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                        if ( (int)Instance < 1 )
                          goto LABEL_33;
                        if ( v46 )
                        {
                          v32 = *v5;
                          if ( !*v5 )
                            break;
                          v33 = v25;
                          v34 = *v25;
                          dispLimitCount = v32->fields.dispLimitCount;
                          limitCount = v32->fields.limitCount;
                          v35 = v5;
                          v36 = v33;
                          Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                                   v31,
                                   (System_String_o *)v34,
                                   (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                          Instance = (DataManager_o *)ServantEntity__IsIndividuality(
                                                        v46,
                                                        limitCount,
                                                        dispLimitCount,
                                                        Item,
                                                        0LL);
                          v38 = v35;
                          v25 = v36;
                          v5 = v38;
                          if ( ((unsigned __int8)Instance & 1) != 0 )
                          {
LABEL_33:
                            v45 = v5;
                            if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                   (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v31,
                                   (System_Xml_XmlQualifiedName_o *)StringLiteral_13569/*"Target"*/,
                                   (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                            {
                              v39 = System_Collections_Generic_Dictionary_string__int___get_Item(
                                      v31,
                                      (System_String_o *)StringLiteral_13569/*"Target"*/,
                                      (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                            }
                            else
                            {
                              v39 = 0;
                            }
                            v40 = (FunctionEntity_o *)entity;
                            v48 = (EventDropUpValInfo_o *)sub_B2C42C(EventDropUpValInfo_TypeInfo);
                            EventDropUpValInfo___ctor_29736828(v48, 0, v40, v39, 0LL);
                            if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                                   v31,
                                   (System_String_o *)StringLiteral_953/*"0"*/,
                                   (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                            {
                              Instance = (DataManager_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                            v31,
                                                            (System_String_o *)StringLiteral_1006/*"1"*/,
                                                            (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                              v5 = v45;
                              v25 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_1104/*"2"*/;
                              if ( !*v45 )
                                break;
                              v22 = (const MethodInfo *)(unsigned int)Instance;
                              Instance = (DataManager_o *)v48;
                              if ( !v48 )
                                break;
                              EventDropUpValInfo__SetAddCount(v48, (int32_t)v22, (*v45)->fields.equipSvtId > 0, 0, 0LL);
                            }
                            else
                            {
                              Instance = (DataManager_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                            v31,
                                                            (System_String_o *)StringLiteral_953/*"0"*/,
                                                            (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                              v5 = v45;
                              v25 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_1104/*"2"*/;
                              if ( (_DWORD)Instance == 2 )
                              {
                                Instance = (DataManager_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                              v31,
                                                              (System_String_o *)StringLiteral_1006/*"1"*/,
                                                              (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                                if ( !*v45 )
                                  break;
                                v22 = (const MethodInfo *)(unsigned int)Instance;
                                Instance = (DataManager_o *)v48;
                                if ( !v48 )
                                  break;
                                EventDropUpValInfo__SetRateCount(
                                  v48,
                                  (int32_t)v22,
                                  (*v45)->fields.equipSvtId > 0,
                                  0,
                                  0LL);
                              }
                            }
                            if ( !*v5 )
                              break;
                            Instance = (DataManager_o *)(*v5)->fields.dropList;
                            if ( !Instance )
                              break;
                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                              (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
                              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
                            v47 = 1;
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
      }
    }
LABEL_48:
    sub_B2C434(Instance, v22);
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
  System_String_array *v11; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x20
  int v16; // w9
  __int64 v17; // x20
  int v18; // w8
  __int64 v20; // x0
  int32_t result[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4186DDC & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    sub_B2C35C(&StringLiteral_18794/*"followerVals"*/, v6);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v9);
    byte_4186DDC = 1;
  }
  *(_QWORD *)result = 0LL;
  StringArray = EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_18794/*"followerVals"*/, 0LL, 0LL);
  if ( !StringArray )
    return 0LL;
  v11 = StringArray;
  if ( !*(_QWORD *)&StringArray->max_length )
    return 0LL;
  v12 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v12,
    (const MethodInfo_2DA96B0 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v11->max_length )
    goto LABEL_22;
  v13 = (__int64)v11->m_Items[0];
  if ( !v13 )
    goto LABEL_23;
  v13 = (__int64)System_String__Replace_44312768(
                   (System_String_o *)v13,
                   (System_String_o *)StringLiteral_15634/*"["*/,
                   (System_String_o *)StringLiteral_1/*""*/,
                   0LL);
  if ( !v13 )
    goto LABEL_23;
  v15 = System_String__Replace_44312768(
          (System_String_o *)v13,
          (System_String_o *)StringLiteral_15870/*"]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v13 = sub_B2C374(char___TypeInfo, 1LL);
  if ( !v13 )
    goto LABEL_23;
  v14 = v13;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_22;
  *(_WORD *)(v13 + 32) = 44;
  if ( !v15 || (v13 = (__int64)System_String__Split(v15, (System_Char_array *)v13, 0LL), result[1] = 0, !v13) )
LABEL_23:
    sub_B2C434(v13, v14);
  v16 = *(_DWORD *)(v13 + 24);
  v17 = v13;
  if ( v16 >= 1 )
  {
    v18 = 0;
    while ( v18 < (unsigned int)v16 )
    {
      v13 = System_Int32__TryParse(*(System_String_o **)(v17 + 8LL * v18 + 32), result, 0LL);
      if ( (v13 & 1) != 0 )
      {
        v13 = (__int64)System_Int32__ToString((int32_t)&result[1], 0LL);
        if ( !v12 )
          goto LABEL_23;
        System_Collections_Generic_Dictionary_UIPanel__int___Add(
          (System_Collections_Generic_Dictionary_UIPanel__int__o *)v12,
          (UIPanel_o *)v13,
          result[0],
          (const MethodInfo_2DAA264 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
      v18 = result[1] + 1;
      result[1] = v18;
      v16 = *(_DWORD *)(v17 + 24);
      if ( v18 >= v16 )
        return (System_Collections_Generic_Dictionary_string__int__o *)v12;
    }
LABEL_22:
    v20 = sub_B2C460(v13);
    sub_B2C400(v20, 0LL);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v12;
}


System_Nullable_int__o __fastcall SkillLvEntity__GetFuncIndexForSplitFuncSequence(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  SkillLvEntity___c_c *v9; // x0
  struct SkillLvEntity___c_StaticFields *static_fields; // x8
  System_Func_long__Nullable_int___o *_9__44_0; // x21
  System_String_o *v12; // x20
  Il2CppObject *v13; // x22
  struct SkillLvEntity___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Nullable_int__o v23; // 0:x3.8

  if ( (byte_4186DCE & 1) == 0 )
  {
    sub_B2C35C(&Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____, method);
    sub_B2C35C(&Method_System_Func_long__Nullable_int____ctor__, v3);
    sub_B2C35C(&System_Func_long__Nullable_int___TypeInfo, v4);
    sub_B2C35C(&Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__, v5);
    sub_B2C35C(&SkillLvEntity___c_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_18923/*"funcPositionForSplitFuncSequence"*/, v7);
    byte_4186DCE = 1;
  }
  script = this->fields.script;
  v9 = SkillLvEntity___c_TypeInfo;
  if ( (BYTE3(SkillLvEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v9 = SkillLvEntity___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__44_0 = static_fields->__9__44_0;
  v12 = (System_String_o *)StringLiteral_18923/*"funcPositionForSplitFuncSequence"*/;
  if ( !_9__44_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__44_0 = (System_Func_long__Nullable_int___o *)sub_B2C42C(System_Func_long__Nullable_int___TypeInfo);
    System_Func_long__Nullable_int_____ctor(
      _9__44_0,
      v13,
      Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__,
      (const MethodInfo_270F078 *)Method_System_Func_long__Nullable_int____ctor__);
    v14 = SkillLvEntity___c_TypeInfo->static_fields;
    v14->__9__44_0 = _9__44_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v14->__9__44_0,
      (System_Int32_array **)_9__44_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v23 = 0LL;
  return EntityScriptUtil__GetScriptValue_long__Nullable_int__(
           script,
           v12,
           (System_Func_TSource__TDestination__o *)_9__44_0,
           v23,
           (const MethodInfo_1735E2C *)Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x22
  System_String_o *Value_string; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int32_t *v23; // x0
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  int v26; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4186DD2 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_GetValue_List_object____, key);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v7);
    sub_B2C35C(&long_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_object___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v15);
    byte_4186DD2 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v26 = 0;
  v16 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  script = this->fields.script;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_object___ctor__);
  Value_string = BasicHelper__GetValue_string_(
                   script,
                   key,
                   (System_String_o *)v18,
                   (const MethodInfo_17283E8 *)Method_BasicHelper_GetValue_List_object____);
  if ( !Value_string )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Value_string,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v27 = v25;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v21 )
      break;
    if ( !v16 )
      sub_B2C434(v21, v22);
    if ( !v27.fields.current )
      sub_B2C434(0LL, v22);
    if ( v27.fields.current->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      Value_string = (System_String_o *)sub_B2C728(v27.fields.current);
      goto LABEL_15;
    }
    v23 = (int32_t *)j_il2cpp_object_unbox_0(v27.fields.current);
    System_Collections_Generic_List_int___Add(
      v16,
      *v23,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( !v16 )
LABEL_15:
    sub_B2C434(Value_string, v20);
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall SkillLvEntity__GetOptionalBattleEffectIdList(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v7; // x20

  if ( (byte_4186DCF & 1) == 0 )
  {
    sub_B2C35C(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, method);
    sub_B2C35C(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v3);
    sub_B2C35C(&Method_System_Func_List_object___List_int____ctor__, v4);
    sub_B2C35C(&System_Func_List_object___List_int___TypeInfo, v5);
    sub_B2C35C(&StringLiteral_16643/*"battleEffectId"*/, v6);
    byte_4186DCF = 1;
  }
  v7 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_List_object___List_int___TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v7,
    0LL,
    Method_EntityScriptValueConvertLogic_ObjectListToIntList__,
    (const MethodInfo_2713350 *)Method_System_Func_List_object___List_int____ctor__);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     (System_String_o *)StringLiteral_16643/*"battleEffectId"*/,
                                                     (System_Func_TSource__TDestination__o *)v7,
                                                     0LL,
                                                     (const MethodInfo_1735FA0 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


int32_t __fastcall SkillLvEntity__GetScriptIntParam(
        SkillLvEntity_o *this,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *script; // x0
  SkillLvEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4186DD4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&long_TypeInfo, v8);
    byte_4186DD4 = 1;
  }
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                                                                                 (System_Type_o *)key,
                                                                                                 (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(script, key);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  v11 = (SkillLvEntity_o *)sub_B2C728(script);
  return SkillLvEntity__IsNoTargetSkipSkill(v11, v12);
}


DataVals_array *__fastcall SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array *funcId; // x20
  FunctionMaster_o *v6; // x21
  const MethodInfo *v7; // x1
  DataVals_array *DataValsList; // x0
  __int64 v9; // x1

  if ( (byte_4186DB8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_4186DB8 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_FunctionMaster___);
  funcId = this->fields.funcId;
  v6 = (FunctionMaster_o *)Master_WarQuestSelectionMaster;
  DataValsList = SkillLvEntity__getDataValsList(this, v7);
  if ( !v6 )
    sub_B2C434(DataValsList, v9);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *script; // x0
  System_Collections_Generic_Dictionary_string__object__o *v19; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x21
  Il2CppObject *current; // x21
  SkillLvEntity_SvtChangeBgm_o *v22; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x20
  __int64 v24; // x9
  __int64 v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4186DD3 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_GetValue_List_object____, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_object___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo, v13);
    sub_B2C35C(&SkillLvEntity_SvtChangeBgm_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_22458/*"svtBgmChange"*/, v15);
    byte_4186DD3 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.script;
  if ( !script )
    goto LABEL_17;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22458/*"svtBgmChange"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v16;
  v19 = this->fields.script;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_object___ctor__);
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BasicHelper__GetValue_string_(
                                                                                           v19,
                                                                                           (System_String_o *)StringLiteral_22458/*"svtBgmChange"*/,
                                                                                           (System_String_o *)v20,
                                                                                           (const MethodInfo_17283E8 *)Method_BasicHelper_GetValue_List_object____);
  if ( !script )
LABEL_17:
    sub_B2C434(script, v17);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)script,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    current = v29.fields.current;
    v22 = (SkillLvEntity_SvtChangeBgm_o *)sub_B2C42C(SkillLvEntity_SvtChangeBgm_TypeInfo);
    v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)v22;
    if ( current )
    {
      v24 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v24
        || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[v24 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        v25 = sub_B2C728(current);
LABEL_16:
        sub_B2C434(v25, v26);
      }
    }
    SkillLvEntity_SvtChangeBgm___ctor(v22, (System_Collections_Generic_Dictionary_string__object__o *)current, 0LL);
    if ( !v16 )
      goto LABEL_16;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v16,
      v23,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v16;
}


int32_t __fastcall SkillLvEntity__GetWarBoardBreakPointDamageType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186DDB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15409/*"WarBoardBreakPointDamage"*/, method);
    byte_4186DDB = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_15409/*"WarBoardBreakPointDamage"*/, 0, v2);
}


bool __fastcall SkillLvEntity__IsAress(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4186DCB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&StringLiteral_16452/*"aress"*/, v3);
    byte_4186DCB = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_16452/*"aress"*/,
                       (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  __int64 v11; // x0

  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(this, method);
  if ( !SetTypeDataValArray )
LABEL_15:
    sub_B2C434(SetTypeDataValArray, v3);
  max_length = SetTypeDataValArray->max_length;
  v5 = SetTypeDataValArray;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  v7 = 1;
  while ( 1 )
  {
    if ( v6 >= max_length )
    {
      v11 = sub_B2C460(SetTypeDataValArray);
      sub_B2C400(v11, 0LL);
    }
    v8 = v5->m_Items[v6];
    if ( !v8 )
      goto LABEL_15;
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  SkillLvEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  v3 = isCheckHate;
  if ( (byte_4186DCC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, isCheckHate);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B2C35C(&long_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_5919/*"EnableTarget"*/, v7);
    byte_4186DCC = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_5919/*"EnableTarget"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v3;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)StringLiteral_5919/*"EnableTarget"*/,
                                                                                   (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B2C434(Item, v9);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item) == 1;
  v12 = (SkillLvEntity_o *)sub_B2C728(Item);
  return (unsigned __int8)SkillLvEntity__GetAddIndiv(v12, v13);
}


bool __fastcall SkillLvEntity__IsIgnoreWhiteFade(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186DD0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19406/*"ignoreWhiteFade"*/, method);
    byte_4186DD0 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19406/*"ignoreWhiteFade"*/, 0LL);
}


bool __fastcall SkillLvEntity__IsNoTargetSkipSkill(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186DD5 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21103/*"noTargetSkipSkill"*/, method);
    byte_4186DD5 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_21103/*"noTargetSkipSkill"*/, -1, v2) == 1;
}


bool __fastcall SkillLvEntity__IsRevivalUnder(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4186DCA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&StringLiteral_21816/*"revivalUnder"*/, v3);
    byte_4186DCA = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_21816/*"revivalUnder"*/,
                       (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsRevivalUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4186DC9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&StringLiteral_21817/*"revivalUp"*/, v3);
    byte_4186DC9 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_21817/*"revivalUp"*/,
                       (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsSupportExcluded(
        SkillLvEntity_o *this,
        System_Collections_Generic_Dictionary_string__int__o *vals,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1

  if ( (byte_4186DC6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, vals);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v4);
    this = (SkillLvEntity_o *)sub_B2C35C(&StringLiteral_2004/*"ApplySupportSvt"*/, v5);
    byte_4186DC6 = 1;
  }
  if ( !vals )
    sub_B2C434(this, vals);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)vals,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_2004/*"ApplySupportSvt"*/,
           (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
      && !System_Collections_Generic_Dictionary_string__int___get_Item(
            vals,
            (System_String_o *)StringLiteral_2004/*"ApplySupportSvt"*/,
            (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


bool __fastcall SkillLvEntity__IsVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4186DC4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&StringLiteral_15221/*"VoiceVolume"*/, v3);
    byte_4186DC4 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_15221/*"VoiceVolume"*/,
                       (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  __int64 v10; // x23
  __int64 v11; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v13; // x26
  System_String_o *v14; // x22
  DataVals_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  DataVals_o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v30; // x0
  __int64 v31; // x0

  if ( (byte_4186DB7 & 1) == 0 )
  {
    sub_B2C35C(&DataVals___TypeInfo, method);
    sub_B2C35C(&DataVals_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4186DB7 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v9 = (DataVals_array *)sub_B2C374(DataVals___TypeInfo, 1LL);
    v22 = (DataVals_o *)sub_B2C42C(DataVals_TypeInfo);
    DataVals___ctor(v22, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v9 )
    {
      if ( v22 )
      {
        v6 = sub_B2C41C(v22, v9->obj.klass->_1.element_class);
        if ( !v6 )
        {
LABEL_21:
          v31 = sub_B2C454();
          sub_B2C400(v31, 0LL);
        }
      }
      if ( !v9->max_length )
      {
LABEL_20:
        v30 = sub_B2C460(v6);
        sub_B2C400(v30, 0LL);
      }
      v9->m_Items[0] = v22;
      sub_B2C2F8((BattleServantConfConponent_o *)v9->m_Items, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
      return v9;
    }
LABEL_13:
    sub_B2C434(v6, v7);
  }
  v6 = sub_B2C374(DataVals___TypeInfo, svals->max_length);
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
    v15 = (DataVals_o *)sub_B2C42C(DataVals_TypeInfo);
    DataVals___ctor(v15, v14, 0LL);
    if ( v9 )
    {
      if ( v15 )
      {
        v6 = sub_B2C41C(v15, v9->obj.klass->_1.element_class);
        if ( !v6 )
          goto LABEL_21;
      }
      if ( v13 >= v9->max_length )
        goto LABEL_20;
      *((_QWORD *)&v9->obj.klass + v10) = v15;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)((char *)v9 + v11),
        (System_Int32_array **)v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
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
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  System_String_o *Detail; // x20

  if ( (byte_4186DB9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillDetailMaster___, isShort);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&SkillDetailParamFormatResolver_TypeInfo, v6);
    byte_4186DB9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillDetailMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v8);
  }
  Detail = SkillDetailMaster__getDetail((SkillDetailMaster_o *)Instance, this->fields.skillDetailId, isShort, v9);
  if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  }
  return SkillDetailParamFormatResolver__Apply(Detail, this, v10);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__getDetail_23775852(
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

  if ( (byte_4186DBA & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&lv);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_8375/*"LEVEL_DETAIL_INFO"*/, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_4186DBA = 1;
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
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8375/*"LEVEL_DETAIL_INFO"*/, 0LL);
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
  DataManager_o *Instance; // x0
  System_Int32_array *Individuality; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x27
  const MethodInfo *v32; // x1
  FunctionGroupMaster_o *v33; // x28
  System_Collections_Generic_Dictionary_string__int__array *Values; // x26
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v36; // x19
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v38; // x8
  unsigned __int64 v39; // x8
  System_Collections_Generic_Dictionary_string__int__o *v40; // x20
  WarEntity_o *v41; // x8
  int age; // w21
  struct System_String_o *name; // x3
  int32_t Item; // w0
  __int64 *v45; // x8
  __int64 v47; // x0
  bool v48; // [xsp+Ch] [xbp-A4h]
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+10h] [xbp-A0h]
  int32_t v50; // [xsp+20h] [xbp-90h]
  unsigned int v51; // [xsp+24h] [xbp-8Ch]
  ServantEntity_o *v52; // [xsp+28h] [xbp-88h]
  System_Int32_array *v53; // [xsp+30h] [xbp-80h]
  EventUpValSetupInfo_o *v54; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_Dictionary_string__int__o **m_Items; // [xsp+40h] [xbp-70h]
  FunctionGroupEntity_o *v57; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4186DBF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionGroupMaster___, *(_QWORD *)&wearersSvtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B2C35C(&StringLiteral_1154/*"3"*/, v24);
    sub_B2C35C(&StringLiteral_1104/*"2"*/, v25);
    sub_B2C35C(&StringLiteral_13569/*"Target"*/, v26);
    sub_B2C35C(&StringLiteral_1006/*"1"*/, v27);
    sub_B2C35C(&StringLiteral_6165/*"EventId"*/, v28);
    byte_4186DBF = 1;
  }
  v57 = 0LL;
  entity = 0LL;
  if ( setupInfo && this->fields.funcId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_87;
    MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           Instance,
                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_87;
    v54 = setupInfo;
    v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           Instance,
                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_87;
    v33 = (FunctionGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     Instance,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
    v50 = wearesDispLimitCount;
    v51 = wearersSvtId;
    if ( wearersSvtId < 1 )
    {
      v52 = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_87;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_87;
      v52 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                 wearersSvtId,
                                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    }
    Values = SkillLvEntity__getValues(this, v32);
    Instance = (DataManager_o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(v54, eventId, 0LL);
    funcId = this->fields.funcId;
    v53 = (System_Int32_array *)Instance;
    if ( !funcId )
      goto LABEL_87;
    v48 = !isOwner;
    m_Items = Values->m_Items;
    v36 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v36 >= (int)max_length )
        break;
      if ( v36 >= max_length )
        goto LABEL_95;
      if ( !v31 )
        goto LABEL_87;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v31,
                                    &entity,
                                    funcId->m_Items[v36 + 1],
                                    (const MethodInfo_24E412C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_86;
      if ( isFuncGroup )
      {
        v38 = this->fields.funcId;
        if ( !v38 )
          goto LABEL_87;
        if ( v36 >= v38->max_length )
        {
LABEL_95:
          v47 = sub_B2C460(Instance);
          sub_B2C400(v47, 0LL);
        }
        if ( !v33 )
          goto LABEL_87;
        Instance = (DataManager_o *)FunctionGroupMaster__TryGetEntity(v33, &v57, v38->m_Items[v36 + 1], eventId, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_86;
      }
      if ( !Values )
        goto LABEL_87;
      v39 = Values->max_length;
      if ( (__int64)v36 >= (int)v39 )
        goto LABEL_86;
      if ( v36 >= v39 )
        goto LABEL_95;
      v40 = m_Items[v36];
      if ( !v40 )
        goto LABEL_86;
      v41 = entity;
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
            Instance = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v36],
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1154/*"3"*/,
                                          (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_86;
            Instance = (DataManager_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          v40,
                                          (System_String_o *)StringLiteral_1154/*"3"*/,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)Instance != eventId )
              goto LABEL_86;
            Instance = (DataManager_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          v40,
                                          (System_String_o *)StringLiteral_1006/*"1"*/,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)Instance )
            {
              Instance = (DataManager_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            v40,
                                            (System_String_o *)StringLiteral_1104/*"2"*/,
                                            (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !(_DWORD)Instance )
                goto LABEL_86;
            }
            if ( !entity )
              goto LABEL_87;
            Instance = (DataManager_o *)EventUpValSetupInfo__IsUpVal(
                                          v54,
                                          v53,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_86;
            if ( age != 105 )
              goto LABEL_90;
            if ( !entity )
              goto LABEL_87;
            name = entity->fields.name;
            if ( !name )
              goto LABEL_90;
            Instance = (DataManager_o *)(&dword_0 + 1);
            if ( (v51 & 0x80000000) != 0 || !name[1].klass )
              return (unsigned __int8)Instance & 1;
            if ( v52 )
            {
              Instance = (DataManager_o *)ServantEntity__IsIndividuality_30743904(
                                            v52,
                                            wearesLimitCount,
                                            v50,
                                            (System_Int32_array *)name,
                                            0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_90;
            }
            goto LABEL_86;
          case 111:
            Instance = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v36],
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1104/*"2"*/,
                                          (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_86;
            Instance = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v40,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_6165/*"EventId"*/,
                                          (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_86;
            Instance = (DataManager_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          v40,
                                          (System_String_o *)StringLiteral_6165/*"EventId"*/,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)Instance != eventId )
              goto LABEL_86;
            Instance = (DataManager_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          v40,
                                          (System_String_o *)StringLiteral_1104/*"2"*/,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (int)Instance >= 1 )
            {
              if ( !v52 )
                goto LABEL_86;
              Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                       v40,
                       (System_String_o *)StringLiteral_1104/*"2"*/,
                       (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              Instance = (DataManager_o *)ServantEntity__IsIndividuality(v52, wearesLimitCount, v50, Item, 0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                goto LABEL_86;
            }
            if ( !entity )
              goto LABEL_87;
            Instance = (DataManager_o *)EventUpValSetupInfo__IsUpVal(
                                          v54,
                                          v53,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                      (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v40,
                      (System_Xml_XmlQualifiedName_o *)StringLiteral_13569/*"Target"*/,
                      (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                goto LABEL_90;
              Instance = (DataManager_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            v40,
                                            (System_String_o *)StringLiteral_13569/*"Target"*/,
                                            (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)Instance != 1 || !v48 )
                goto LABEL_90;
            }
            goto LABEL_86;
          case 113:
            Instance = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v36],
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1104/*"2"*/,
                                          (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_86;
            Instance = (DataManager_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          v40,
                                          (System_String_o *)StringLiteral_1104/*"2"*/,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)Instance != eventId )
              goto LABEL_86;
            Instance = (DataManager_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          v40,
                                          (System_String_o *)StringLiteral_1006/*"1"*/,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( !(_DWORD)Instance )
              goto LABEL_86;
            if ( !entity )
              goto LABEL_87;
            Instance = (DataManager_o *)EventUpValSetupInfo__IsUpVal(
                                          v54,
                                          v53,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_86;
            if ( !v52 )
              goto LABEL_94;
            Individuality = ServantEntity__getIndividuality(v52, wearesLimitCount, v50, 0LL);
            Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_87;
            Instance = (DataManager_o *)ItemMaster__GetIndividualityList_27411680(
                                          MasterData_WarQuestSelectionMaster,
                                          Individuality,
                                          0LL);
            if ( !Instance )
              goto LABEL_87;
            if ( Instance->fields.datalist )
              goto LABEL_90;
            goto LABEL_86;
          case 116:
            Instance = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v36],
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1104/*"2"*/,
                                          (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_86;
            goto LABEL_84;
          case 117:
          case 118:
            goto LABEL_85;
          case 129:
            Instance = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v36],
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1104/*"2"*/,
                                          (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_86;
            v45 = &StringLiteral_1104/*"2"*/;
            goto LABEL_80;
          case 132:
            Instance = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v36],
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1154/*"3"*/,
                                          (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_86;
            v45 = &StringLiteral_1154/*"3"*/;
LABEL_80:
            Instance = (DataManager_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          v40,
                                          (System_String_o *)*v45,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)Instance != eventId )
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
          Instance = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v36],
                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1006/*"1"*/,
                                        (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          v40,
                                          (System_String_o *)StringLiteral_1006/*"1"*/,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)Instance )
            {
LABEL_84:
              v41 = entity;
              if ( !entity )
                goto LABEL_87;
LABEL_85:
              Instance = (DataManager_o *)EventUpValSetupInfo__IsUpVal(
                                            v54,
                                            v53,
                                            *(System_Int32_array **)&v41->fields.startType,
                                            0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
LABEL_90:
                LOBYTE(Instance) = 1;
                return (unsigned __int8)Instance & 1;
              }
            }
          }
          goto LABEL_86;
        }
        if ( age != 16 )
          goto LABEL_86;
      }
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)m_Items[v36],
                                    (System_Xml_XmlQualifiedName_o *)StringLiteral_1154/*"3"*/,
                                    (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                      v40,
                                      (System_String_o *)StringLiteral_1154/*"3"*/,
                                      (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        if ( (_DWORD)Instance )
        {
          if ( !entity )
            goto LABEL_87;
          Instance = (DataManager_o *)EventUpValSetupInfo__IsUpVal(
                                        v54,
                                        v53,
                                        *(System_Int32_array **)&entity->fields.startType,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)v52;
            if ( !v52 )
            {
LABEL_94:
              LODWORD(Instance) = v51 >> 31;
              return (unsigned __int8)Instance & 1;
            }
            if ( entity )
            {
              LOBYTE(Instance) = ServantEntity__IsIndividuality_30743904(
                                   v52,
                                   wearesLimitCount,
                                   v50,
                                   (System_Int32_array *)entity->fields.longName,
                                   0LL);
              return (unsigned __int8)Instance & 1;
            }
LABEL_87:
            sub_B2C434(Instance, Individuality);
          }
        }
      }
LABEL_86:
      funcId = this->fields.funcId;
      ++v36;
      if ( !funcId )
        goto LABEL_87;
    }
  }
  LOBYTE(Instance) = 0;
  return (unsigned __int8)Instance & 1;
}


bool __fastcall SkillLvEntity__getEventUpVal_23801352(
        SkillLvEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool isFuncGroup,
        bool isOwner,
        bool isSupport,
        bool isEquipOnly,
        const MethodInfo *method)
{
  SkillLvEntity_o *v10; // x23
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
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  WarEntity_o *v40; // x20
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v43; // x8
  struct System_Int32_array *v44; // x10
  SkillLvEntity_o *v45; // x27
  char v46; // w26
  unsigned __int64 v47; // x20
  EventUpValInfo_o *v48; // x8
  ServantLimitEntity_o *v49; // x19
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v51; // x21
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v53; // x8
  unsigned __int64 chargeTurn; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v55; // x19
  int age; // w20
  const MethodInfo *v57; // x2
  struct System_String_o *name; // x3
  FunctionEntity_o *v59; // x22
  int32_t Item; // w26
  EventDropUpValInfo_o *v61; // x20
  const MethodInfo_2DAA1A0 *v62; // x2
  System_String_o *v63; // x1
  const MethodInfo *v64; // x2
  struct System_Int32_array *v65; // x8
  EventPointBuffEntity_o *EnableEntity; // x20
  struct System_String_o *v67; // x25
  System_String_c *klass; // x8
  SkillLvEntity_o *v69; // x26
  unsigned __int64 v70; // x20
  int32_t lv; // w22
  char v72; // w8
  FunctionEntity_o *v73; // x22
  __int64 *v74; // x8
  const MethodInfo *v75; // x2
  EventUpValInfo_o *v76; // x8
  int32_t limitCount; // w20
  int32_t dispLimitCount; // w22
  int32_t v79; // w0
  SkillEntity_o *v80; // x20
  SkillLvEntity_o *v81; // x22
  System_Int32_array *ActIndividuality; // x0
  int32_t v83; // w20
  const MethodInfo *v84; // x2
  __int64 v85; // x8
  unsigned __int64 v86; // x25
  FunctionEntity_o *v87; // x20
  SkillLvEntity_o *v88; // x28
  int32_t v89; // w22
  EventDropUpValInfo_o *v90; // x26
  const MethodInfo *v91; // x2
  FunctionEntity_o *v92; // x22
  int32_t v93; // w26
  const MethodInfo_2DAA1A0 *v94; // x2
  System_String_o *v95; // x1
  FunctionEntity_o *v96; // x22
  FunctionEntity_o *v97; // x22
  EventUpValInfo_o **v98; // x8
  System_String_o *v99; // x1
  const MethodInfo_2DAA1A0 *v100; // x2
  __int64 *v101; // x8
  EventUpValInfo_o *v102; // x8
  FunctionEntity_o *v103; // x22
  EventUpValInfo_o *v104; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v105; // x1
  FunctionEntity_o *v106; // x22
  EventDropUpValInfo_o *v107; // x26
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v109; // x22
  __int64 v110; // x25
  UserServantEntity_o *HeroineData; // x0
  __int64 v113; // x0
  bool v114; // [xsp+Ch] [xbp-D4h]
  EventPointBuffEntity_o *v115; // [xsp+10h] [xbp-D0h]
  bool v116; // [xsp+1Ch] [xbp-C4h]
  ServantEntity_o *v117; // [xsp+20h] [xbp-C0h]
  struct System_Int32_array **p_funcId; // [xsp+28h] [xbp-B8h]
  bool v119; // [xsp+34h] [xbp-ACh]
  struct System_Int32_array *v120; // [xsp+38h] [xbp-A8h]
  char v122; // [xsp+44h] [xbp-9Ch]
  System_Int32_array *questPhaseIndividualityList; // [xsp+48h] [xbp-98h]
  unsigned __int64 v124; // [xsp+50h] [xbp-90h]
  SkillLvEntity_o *v126; // [xsp+60h] [xbp-80h]
  int32_t eventId; // [xsp+6Ch] [xbp-74h]
  FunctionGroupEntity_o *v128; // [xsp+70h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  int32_t actMaxRarity; // [xsp+84h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16

  v10 = this;
  if ( (byte_4186DC0 & 1) == 0 )
  {
    sub_B2C35C(&BuffList_TypeInfo, eventUpVallInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_BuffMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionGroupMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v18);
    sub_B2C35C(&DataManager_TypeInfo, v19);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v20);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v22);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v26);
    sub_B2C35C(&EventDropUpValInfo_TypeInfo, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v28);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v31);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v32);
    sub_B2C35C(&StringLiteral_1154/*"3"*/, v33);
    sub_B2C35C(&StringLiteral_1104/*"2"*/, v34);
    sub_B2C35C(&StringLiteral_13569/*"Target"*/, v35);
    sub_B2C35C(&StringLiteral_1006/*"1"*/, v36);
    sub_B2C35C(&StringLiteral_6165/*"EventId"*/, v37);
    this = (SkillLvEntity_o *)sub_B2C35C(&StringLiteral_953/*"0"*/, v38);
    byte_4186DC0 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  entity = 0LL;
  v128 = 0LL;
  if ( !*eventUpVallInfo )
    goto LABEL_255;
  if ( !(*eventUpVallInfo)->fields.setupInfo || !v10->fields.funcId )
    goto LABEL_253;
  this = (SkillLvEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_255;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)this,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionMaster___);
  this = (SkillLvEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_255;
  this = (SkillLvEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
  if ( !*eventUpVallInfo )
    goto LABEL_255;
  v126 = this;
  if ( (*eventUpVallInfo)->fields.svtId < 1 )
  {
    v40 = 0LL;
    goto LABEL_15;
  }
  this = (SkillLvEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (SkillLvEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___),
        !*eventUpVallInfo)
    || !this )
  {
LABEL_255:
    sub_B2C434(this, eventUpVallInfo);
  }
  v40 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          (*eventUpVallInfo)->fields.svtId,
          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
LABEL_15:
  this = (SkillLvEntity_o *)SkillLvEntity__getValues(v10, (const MethodInfo *)eventUpVallInfo);
  if ( !*eventUpVallInfo )
    goto LABEL_255;
  setupInfo = (*eventUpVallInfo)->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_255;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_255;
  v120 = eventIdList;
  v43 = *(_QWORD *)&eventIdList->max_length;
  if ( (int)v43 >= 1 )
  {
    v117 = (ServantEntity_o *)v40;
    v114 = isOwner;
    v116 = v40 == 0LL || isEquipOnly;
    v44 = v120;
    v45 = this;
    v46 = 0;
    v47 = 0LL;
    v119 = isFuncGroup;
    while ( 1 )
    {
      if ( v47 >= (unsigned int)v43 )
      {
LABEL_256:
        v113 = sub_B2C460(this);
        sub_B2C400(v113, 0LL);
      }
      v48 = *eventUpVallInfo;
      if ( !*eventUpVallInfo )
        goto LABEL_255;
      eventId = v44->m_Items[v47 + 1];
      if ( v48->fields.equipSvtId < 1 )
      {
        v122 = 0;
      }
      else
      {
        this = (SkillLvEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_255;
        this = (SkillLvEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        if ( !*eventUpVallInfo || !this )
          goto LABEL_255;
        v49 = ServantLimitMaster__GetEntity(
                (ServantLimitMaster_o *)this,
                (*eventUpVallInfo)->fields.svtId,
                (*eventUpVallInfo)->fields.limitCount,
                0LL);
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (SkillLvEntity_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !*eventUpVallInfo )
          goto LABEL_255;
        if ( !v49 )
          goto LABEL_255;
        if ( !this )
          goto LABEL_255;
        this = (SkillLvEntity_o *)PartyOrganizationUtility__IsRarityRestriction(
                                    (PartyOrganizationUtility_o *)this,
                                    &skillName,
                                    &actMaxRarity,
                                    (*eventUpVallInfo)->fields.svtId,
                                    v49->fields.rarity,
                                    (*eventUpVallInfo)->fields.equipSvtId,
                                    eventId,
                                    0LL);
        v122 = (char)this;
        v48 = *eventUpVallInfo;
        if ( !*eventUpVallInfo )
          goto LABEL_255;
      }
      this = (SkillLvEntity_o *)v48->fields.setupInfo;
      v124 = v47;
      if ( !this )
        goto LABEL_255;
      this = (SkillLvEntity_o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                  (EventUpValSetupInfo_o *)this,
                                  eventId,
                                  0LL);
      funcId = v10->fields.funcId;
      questPhaseIndividualityList = (System_Int32_array *)this;
      if ( !funcId )
        goto LABEL_255;
      v51 = 0LL;
      while ( 1 )
      {
        max_length = funcId->max_length;
        if ( (__int64)v51 >= (int)max_length )
          break;
        if ( v51 >= max_length )
          goto LABEL_256;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_255;
        this = (SkillLvEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    &entity,
                                    funcId->m_Items[v51 + 1],
                                    (const MethodInfo_24E412C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_224;
        if ( isFuncGroup )
        {
          v53 = v10->fields.funcId;
          if ( !v53 )
            goto LABEL_255;
          if ( v51 >= v53->max_length )
            goto LABEL_256;
          this = v126;
          if ( !v126 )
            goto LABEL_255;
          this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(
                                      (FunctionGroupMaster_o *)v126,
                                      &v128,
                                      v53->m_Items[v51 + 1],
                                      eventId,
                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_224;
        }
        if ( !v45 )
          goto LABEL_255;
        chargeTurn = (unsigned int)v45->fields.chargeTurn;
        if ( (__int64)v51 >= (int)chargeTurn )
          goto LABEL_224;
        if ( v51 >= chargeTurn )
          goto LABEL_256;
        v55 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)*((_QWORD *)&v45->fields.funcId + v51);
        if ( !v55 )
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
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v55,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1154/*"3"*/,
                                          (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_224;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                          (System_String_o *)StringLiteral_1154/*"3"*/,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)this )
                goto LABEL_224;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                          (System_String_o *)StringLiteral_1006/*"1"*/,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                            (System_String_o *)StringLiteral_1104/*"2"*/,
                                            (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_224;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                            v57);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_224;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              if ( !entity )
                goto LABEL_255;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_255;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_224;
              if ( age != 105 )
                goto LABEL_71;
              if ( !entity )
                goto LABEL_255;
              name = entity->fields.name;
              if ( !name || !name[1].klass )
                goto LABEL_71;
              if ( !v117 )
                goto LABEL_224;
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_30743904(
                                          v117,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          (System_Int32_array *)name,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_224;
LABEL_71:
              v59 = (FunctionEntity_o *)entity;
              Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                       (System_Collections_Generic_Dictionary_string__int__o *)v55,
                       (System_String_o *)StringLiteral_953/*"0"*/,
                       (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v61 = (EventDropUpValInfo_o *)sub_B2C42C(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_29736828(v61, eventId, v59, Item, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v55,
                     (System_String_o *)StringLiteral_1006/*"1"*/,
                     (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                v62 = (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
                v63 = (System_String_o *)StringLiteral_1104/*"2"*/;
                goto LABEL_190;
              }
              v99 = (System_String_o *)StringLiteral_1006/*"1"*/;
              v100 = (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
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
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v55,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1104/*"2"*/,
                                          (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_224;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v55,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_6165/*"EventId"*/,
                                          (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_224;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                          (System_String_o *)StringLiteral_6165/*"EventId"*/,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)this )
                goto LABEL_224;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                            v75);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_224;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                          (System_String_o *)StringLiteral_1104/*"2"*/,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (int)this < 1 )
                goto LABEL_125;
              if ( !v117 )
                goto LABEL_224;
              v76 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              limitCount = v76->fields.limitCount;
              dispLimitCount = v76->fields.dispLimitCount;
              v79 = System_Collections_Generic_Dictionary_string__int___get_Item(
                      (System_Collections_Generic_Dictionary_string__int__o *)v55,
                      (System_String_o *)StringLiteral_1104/*"2"*/,
                      (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality(v117, limitCount, dispLimitCount, v79, 0LL);
              isFuncGroup = v119;
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_224;
LABEL_125:
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              if ( !entity )
                goto LABEL_255;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_255;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_224;
              this = (SkillLvEntity_o *)*eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              if ( !EventUpValInfo__IsEquipSvtId((EventUpValInfo_o *)this, 0LL) )
                goto LABEL_140;
              this = (SkillLvEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_255;
              this = (SkillLvEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
              if ( !this )
                goto LABEL_255;
              this = (SkillLvEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                          v10->fields.skillId,
                                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              v80 = (SkillEntity_o *)this;
              this = (SkillLvEntity_o *)v117;
              if ( !v117 )
                goto LABEL_255;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v117,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              if ( !v80 )
                goto LABEL_255;
              v81 = this;
              ActIndividuality = SkillEntity__getActIndividuality(v80, (const MethodInfo *)eventUpVallInfo);
              this = (SkillLvEntity_o *)Individuality__CheckIndividualities(
                                          (System_Int32_array *)v81,
                                          ActIndividuality,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                isFuncGroup = v119;
                goto LABEL_224;
              }
              this = (SkillLvEntity_o *)ServantEntity__checkIsHeroineSvt(v117, 0LL);
              isFuncGroup = v119;
              if ( ((unsigned __int8)this & 1) != 0 )
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
                  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
                  v109 = *(_QWORD *)&v117->fields.id.fields.currentCryptoKey;
                  v110 = *(_QWORD *)&v117->fields.id.fields.fakeValue;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v132.fields.currentCryptoKey = v109;
                  *(_QWORD *)&v132.fields.fakeValue = v110;
                  this = (SkillLvEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                              v132,
                                              0LL);
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_255;
                  HeroineData = UserServantMaster__getHeroineData(Master_WarQuestSelectionMaster, (int32_t)this, 0LL);
                  isFuncGroup = v119;
                  if ( HeroineData )
                  {
                    this = (SkillLvEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL);
                    if ( ((unsigned __int8)this & 1) == 0 )
                      goto LABEL_224;
                  }
                }
              }
LABEL_140:
              if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                     v55,
                     (System_Xml_XmlQualifiedName_o *)StringLiteral_13569/*"Target"*/,
                     (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                            (System_String_o *)StringLiteral_13569/*"Target"*/,
                                            (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v83 = (int)this;
                if ( (_DWORD)this == 1 && !v114 )
                  goto LABEL_224;
              }
              else
              {
                v83 = 0;
              }
              v106 = (FunctionEntity_o *)entity;
              v107 = (EventDropUpValInfo_o *)sub_B2C42C(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_29736828(v107, eventId, v106, v83, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v55,
                     (System_String_o *)StringLiteral_953/*"0"*/,
                     (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                            (System_String_o *)StringLiteral_1006/*"1"*/,
                                            (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo )
                  goto LABEL_255;
                isFuncGroup = v119;
                if ( !v107 )
                  goto LABEL_255;
                EventDropUpValInfo__SetAddCount(
                  v107,
                  (int32_t)this,
                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                  v122 & 1,
                  0LL);
              }
              else
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                            (System_String_o *)StringLiteral_953/*"0"*/,
                                            (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                isFuncGroup = v119;
                if ( (_DWORD)this == 2 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                              (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                              (System_String_o *)StringLiteral_1006/*"1"*/,
                                              (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v107 )
                    goto LABEL_255;
                  EventDropUpValInfo__SetRateCount(
                    v107,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v122 & 1,
                    0LL);
                }
              }
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
              if ( !this )
                goto LABEL_255;
              v105 = (EventMissionProgressRequest_Argument_ProgressData_o *)v107;
              break;
            case 113:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v55,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1104/*"2"*/,
                                          (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_224;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                          (System_String_o *)StringLiteral_1104/*"2"*/,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)this )
                goto LABEL_224;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                          (System_String_o *)StringLiteral_953/*"0"*/,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                            (System_String_o *)StringLiteral_1006/*"1"*/,
                                            (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_224;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                            v84);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_224;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              if ( !entity )
                goto LABEL_255;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_255;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
              v46 |= (unsigned __int8)this;
              if ( !v117 || ((unsigned __int8)this & 1) == 0 )
                goto LABEL_224;
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v117,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              if ( !this )
                goto LABEL_255;
              v85 = *(_QWORD *)&this->fields.chargeTurn;
              if ( (int)v85 < 1 )
                goto LABEL_223;
              v86 = 0LL;
              p_funcId = &this->fields.funcId;
              while ( v86 < (unsigned int)v85 )
              {
                v87 = (FunctionEntity_o *)entity;
                v88 = this;
                v89 = *((_DWORD *)p_funcId + v86);
                v90 = (EventDropUpValInfo_o *)sub_B2C42C(EventDropUpValInfo_TypeInfo);
                EventDropUpValInfo___ctor_29736828(v90, eventId, v87, v89, 0LL);
                if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                       (System_Collections_Generic_Dictionary_string__int__o *)v55,
                       (System_String_o *)StringLiteral_953/*"0"*/,
                       (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                              (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                              (System_String_o *)StringLiteral_1006/*"1"*/,
                                              (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo )
                    goto LABEL_255;
                  isFuncGroup = v119;
                  if ( !v90 )
                    goto LABEL_255;
                  EventDropUpValInfo__SetAddCount(
                    v90,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v122 & 1,
                    0LL);
                }
                else
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                              (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                              (System_String_o *)StringLiteral_953/*"0"*/,
                                              (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  isFuncGroup = v119;
                  if ( (_DWORD)this == 2 )
                  {
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                                (System_String_o *)StringLiteral_1006/*"1"*/,
                                                (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v90 )
                      goto LABEL_255;
                    EventDropUpValInfo__SetRateCount(
                      v90,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v122 & 1,
                      0LL);
                  }
                }
                if ( !*eventUpVallInfo )
                  goto LABEL_255;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
                if ( !this )
                  goto LABEL_255;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v90,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
                this = v88;
                LODWORD(v85) = v88->fields.chargeTurn;
                ++v86;
                v46 = 1;
                if ( (__int64)v86 >= (int)v85 )
                  goto LABEL_224;
              }
              goto LABEL_256;
            case 116:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v55,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1104/*"2"*/,
                                          (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_224;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                            v91);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_224;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              if ( !entity )
                goto LABEL_255;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_255;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_224;
              v92 = (FunctionEntity_o *)entity;
              v93 = System_Collections_Generic_Dictionary_string__int___get_Item(
                      (System_Collections_Generic_Dictionary_string__int__o *)v55,
                      (System_String_o *)StringLiteral_953/*"0"*/,
                      (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v61 = (EventDropUpValInfo_o *)sub_B2C42C(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_29736828(v61, eventId, v92, v93, 0LL);
              v94 = (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
              v95 = (System_String_o *)StringLiteral_1006/*"1"*/;
              goto LABEL_200;
            case 129:
              if ( isSupport )
                goto LABEL_224;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v55,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1104/*"2"*/,
                                          (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_224;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                          (System_String_o *)StringLiteral_1104/*"2"*/,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)this )
                goto LABEL_224;
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              if ( !entity )
                goto LABEL_255;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_255;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_224;
              v96 = (FunctionEntity_o *)entity;
              v61 = (EventDropUpValInfo_o *)sub_B2C42C(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v61, eventId, v96, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v55,
                     (System_String_o *)StringLiteral_953/*"0"*/,
                     (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                v74 = &StringLiteral_1006/*"1"*/;
                goto LABEL_189;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                          (System_String_o *)StringLiteral_953/*"0"*/,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              isFuncGroup = v119;
              if ( (_DWORD)this != 2 )
                goto LABEL_218;
              v101 = &StringLiteral_1006/*"1"*/;
              goto LABEL_208;
            default:
              if ( age != 132 )
                goto LABEL_224;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                          v55,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_1154/*"3"*/,
                                          (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_224;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                          (System_String_o *)StringLiteral_1154/*"3"*/,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( eventId != (_DWORD)this )
                goto LABEL_224;
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              if ( !entity )
                goto LABEL_255;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_255;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_224;
              v73 = (FunctionEntity_o *)entity;
              v61 = (EventDropUpValInfo_o *)sub_B2C42C(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v61, eventId, v73, 0LL);
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     (System_Collections_Generic_Dictionary_string__int__o *)v55,
                     (System_String_o *)StringLiteral_1006/*"1"*/,
                     (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                v74 = &StringLiteral_1104/*"2"*/;
LABEL_189:
                v63 = (System_String_o *)*v74;
                v62 = (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
LABEL_190:
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                            (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                            v63,
                                            v62);
                if ( !*eventUpVallInfo )
                  goto LABEL_255;
                isFuncGroup = v119;
                if ( !v61 )
                  goto LABEL_255;
                EventDropUpValInfo__SetAddCount(
                  v61,
                  (int32_t)this,
                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                  v122 & 1,
                  0LL);
                goto LABEL_218;
              }
              v99 = (System_String_o *)StringLiteral_1006/*"1"*/;
              v100 = (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
LABEL_206:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                          v99,
                                          v100);
              isFuncGroup = v119;
              if ( (_DWORD)this != 2 )
                goto LABEL_218;
              v101 = &StringLiteral_1104/*"2"*/;
LABEL_208:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                          (System_String_o *)*v101,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v102 = *eventUpVallInfo;
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
            this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                        v55,
                                        (System_Xml_XmlQualifiedName_o *)StringLiteral_1006/*"1"*/,
                                        (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                          (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                          (System_String_o *)StringLiteral_1006/*"1"*/,
                                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                if ( !*eventUpVallInfo )
                  goto LABEL_255;
                if ( !entity )
                  goto LABEL_255;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                if ( !this )
                  goto LABEL_255;
                this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                            (EventUpValSetupInfo_o *)this,
                                            questPhaseIndividualityList,
                                            *(System_Int32_array **)&entity->fields.startType,
                                            0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v97 = (FunctionEntity_o *)entity;
                  v61 = (EventDropUpValInfo_o *)sub_B2C42C(EventDropUpValInfo_TypeInfo);
                  EventDropUpValInfo___ctor(v61, eventId, v97, 0LL);
                  v95 = (System_String_o *)StringLiteral_1006/*"1"*/;
                  v94 = (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
LABEL_200:
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                              (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                              v95,
                                              v94);
                  if ( !*eventUpVallInfo || !v61 )
                    goto LABEL_255;
                  EventDropUpValInfo__SetRateCount(
                    v61,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v122 & 1,
                    0LL);
                  v98 = eventUpVallInfo;
                  isFuncGroup = v119;
                  goto LABEL_219;
                }
              }
            }
            goto LABEL_224;
          }
          if ( age != 16 )
            goto LABEL_224;
        }
        this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                    v55,
                                    (System_Xml_XmlQualifiedName_o *)StringLiteral_1154/*"3"*/,
                                    (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !isSupport
            || (this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                            v64),
                ((unsigned __int8)this & 1) == 0) )
          {
            this = (SkillLvEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_255;
            this = (SkillLvEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
            v65 = v10->fields.funcId;
            if ( !v65 )
              goto LABEL_255;
            if ( v51 >= v65->max_length )
              goto LABEL_256;
            if ( !this )
              goto LABEL_255;
            EnableEntity = EventPointBuffMaster__GetEnableEntity(
                             (EventPointBuffMaster_o *)this,
                             eventId,
                             v65->m_Items[v51 + 1],
                             0LL);
            this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                        (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                        (System_String_o *)StringLiteral_1154/*"3"*/,
                                        (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( EnableEntity || (_DWORD)this )
            {
              if ( !*eventUpVallInfo )
                goto LABEL_255;
              if ( !entity )
                goto LABEL_255;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_255;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          *(System_Int32_array **)&entity->fields.startType,
                                          0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v116 )
                  goto LABEL_93;
                if ( !*eventUpVallInfo || !entity )
                  goto LABEL_255;
                this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_30743904(
                                            v117,
                                            (*eventUpVallInfo)->fields.limitCount,
                                            (*eventUpVallInfo)->fields.dispLimitCount,
                                            (System_Int32_array *)entity->fields.longName,
                                            0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
LABEL_93:
                  this = (SkillLvEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !this )
                    goto LABEL_255;
                  v115 = EnableEntity;
                  this = (SkillLvEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BuffMaster___);
                  if ( !entity )
                    goto LABEL_255;
                  v67 = entity->fields.name;
                  if ( !v67 )
                    goto LABEL_255;
                  klass = v67[1].klass;
                  if ( (int)klass < 1 )
                  {
                    v72 = 0;
                  }
                  else
                  {
                    v69 = this;
                    v70 = 0LL;
                    while ( 1 )
                    {
                      if ( v70 >= (unsigned int)klass )
                        goto LABEL_256;
                      if ( !v69 )
                        goto LABEL_255;
                      this = (SkillLvEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)v69,
                                                  *((_DWORD *)&v67[1].monitor + v70),
                                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                      if ( !this )
                        goto LABEL_255;
                      lv = this->fields.lv;
                      if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BuffList_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
                      }
                      this = (SkillLvEntity_o *)BuffList__isSpHit(lv, 0LL);
                      if ( ((unsigned __int8)this & 1) != 0 )
                        break;
                      LODWORD(klass) = v67[1].klass;
                      if ( (__int64)++v70 >= (int)klass )
                      {
                        v72 = 0;
                        goto LABEL_211;
                      }
                    }
                    v72 = 1;
                  }
LABEL_211:
                  if ( ((unsigned __int8)v72 & (v115 != 0LL)) != 0 )
                  {
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                                (System_String_o *)StringLiteral_1154/*"3"*/,
                                                (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !v115 )
                      goto LABEL_255;
                    System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
                      v55,
                      (System_Xml_XmlQualifiedName_o *)StringLiteral_1154/*"3"*/,
                      v115->fields.value + (_DWORD)this,
                      (const MethodInfo_2DAA23C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
                  }
                  v103 = (FunctionEntity_o *)entity;
                  v61 = (EventDropUpValInfo_o *)sub_B2C42C(EventDropUpValInfo_TypeInfo);
                  EventDropUpValInfo___ctor(v61, eventId, v103, 0LL);
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                              (System_Collections_Generic_Dictionary_string__int__o *)v55,
                                              (System_String_o *)StringLiteral_1154/*"3"*/,
                                              (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  v102 = *eventUpVallInfo;
                  if ( !*eventUpVallInfo )
                    goto LABEL_255;
                  isFuncGroup = v119;
LABEL_216:
                  if ( !v61 )
                    goto LABEL_255;
                  EventDropUpValInfo__SetRateCount(v61, (int32_t)this, v102->fields.equipSvtId > 0, v122 & 1, 0LL);
LABEL_218:
                  v98 = eventUpVallInfo;
LABEL_219:
                  v104 = *v98;
                  if ( !v104 )
                    goto LABEL_255;
                  this = (SkillLvEntity_o *)v104->fields.dropList;
                  if ( !this )
                    goto LABEL_255;
                  v105 = (EventMissionProgressRequest_Argument_ProgressData_o *)v61;
LABEL_222:
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                    v105,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
LABEL_223:
                  v46 = 1;
                }
              }
            }
          }
        }
LABEL_224:
        funcId = v10->fields.funcId;
        ++v51;
        if ( !funcId )
          goto LABEL_255;
      }
      v44 = v120;
      LODWORD(v43) = v120->max_length;
      v47 = v124 + 1;
      if ( (__int64)(v124 + 1) >= (int)v43 )
        return v46 & 1;
    }
  }
LABEL_253:
  v46 = 0;
  return v46 & 1;
}


int32_t __fastcall SkillLvEntity__getFriendPointUpType(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  unsigned __int64 v9; // x21
  unsigned __int64 max_length; // x9
  __int64 v11; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4186DBD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4186DBD = 1;
  }
  entity = 0LL;
  if ( this->fields.funcId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionMaster___),
          (funcId = this->fields.funcId) == 0LL) )
    {
LABEL_15:
      sub_B2C434(Instance, v6);
    }
    v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v9 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v9 >= (int)max_length )
        break;
      if ( v9 >= max_length )
      {
        v11 = sub_B2C460(Instance);
        sub_B2C400(v11, 0LL);
      }
      if ( !v8 )
        goto LABEL_15;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v8,
                                    &entity,
                                    funcId->m_Items[v9 + 1],
                                    (const MethodInfo_24E412C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_15;
        Instance = (DataManager_o *)LODWORD(entity->fields.age);
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
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v11; // x1
  struct System_Int32_array *funcId; // x8
  DataManager_o *v13; // x20
  unsigned __int64 v14; // x22
  unsigned __int64 max_length; // x9
  int age; // w8
  int datalist; // w8
  System_Collections_Generic_Dictionary_string__int__o *v18; // x19
  __int64 v20; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4186DBC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_953/*"0"*/, v7);
    byte_4186DBC = 1;
  }
  entity = 0LL;
  if ( !this->fields.funcId )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionMaster___);
  Instance = (DataManager_o *)SkillLvEntity__getValues(this, v11);
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
      goto LABEL_23;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_15;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  &entity,
                                  funcId->m_Items[v14 + 1],
                                  (const MethodInfo_24E412C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_15;
      age = (int)entity->fields.age;
      if ( age == 123 || age == 104 )
        break;
    }
    funcId = this->fields.funcId;
    ++v14;
    if ( !funcId )
      goto LABEL_15;
  }
  if ( !v13 )
LABEL_15:
    sub_B2C434(Instance, v9);
  datalist = (int)v13->fields.datalist;
  if ( (int)v14 >= datalist )
    return 0;
  if ( (unsigned int)v14 >= datalist )
  {
LABEL_23:
    v20 = sub_B2C460(Instance);
    sub_B2C400(v20, 0LL);
  }
  v18 = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&v13->fields.lookup + v14);
  if ( v18
    && System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v18,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_953/*"0"*/,
         (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_string__int___get_Item(
             v18,
             (System_String_o *)StringLiteral_953/*"0"*/,
             (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
  DataManager_o *Instance; // x0
  struct System_Int32_array *v8; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x20
  unsigned __int64 v10; // x21
  unsigned __int64 max_length; // x9
  LocalizationManager_c *v12; // x0
  System_String_o **p_saveDataMapList; // x8
  __int64 v15; // x0

  if ( (byte_4186DBB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4186DBB = 1;
  }
  funcId = this->fields.funcId;
  if ( funcId && *(_QWORD *)&funcId->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionMaster___),
          (v8 = this->fields.funcId) == 0LL) )
    {
LABEL_13:
      sub_B2C434(Instance, method);
    }
    v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v10 = 0LL;
    while ( 1 )
    {
      max_length = v8->max_length;
      if ( (__int64)v10 >= (int)max_length )
        break;
      if ( v10 >= max_length )
      {
        v15 = sub_B2C460(Instance);
        sub_B2C400(v15, 0LL);
      }
      if ( !v9 )
        goto LABEL_13;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v9,
                                    v8->m_Items[v10 + 1],
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        p_saveDataMapList = (System_String_o **)&Instance->fields.saveDataMapList;
        return *p_saveDataMapList;
      }
      v8 = this->fields.funcId;
      ++v10;
      if ( !v8 )
        goto LABEL_13;
    }
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4185BC0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_4185BC0 = 1;
  }
  v12 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager_TypeInfo;
  }
  p_saveDataMapList = &v12->static_fields->unknownNameText;
  return *p_saveDataMapList;
}


int32_t __fastcall SkillLvEntity__getMovePositionDown(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  SkillLvEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4186DC8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B2C35C(&long_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_18048/*"down"*/, v5);
    byte_4186DC8 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18048/*"down"*/,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)StringLiteral_18048/*"down"*/,
                                                                                       (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B2C434(Item, v7);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v9 = (SkillLvEntity_o *)sub_B2C728(Item);
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
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  SkillLvEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4186DC7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B2C35C(&long_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_22934/*"up"*/, v5);
    byte_4186DC7 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_22934/*"up"*/,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)StringLiteral_22934/*"up"*/,
                                                                                       (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B2C434(Item, v7);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
        v9 = (SkillLvEntity_o *)sub_B2C728(Item);
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
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4186DC2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B2C35C(&string_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_10696/*"PlayVoiceNo"*/, v5);
    byte_4186DC2 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_10696/*"PlayVoiceNo"*/,
            (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B2C434(0LL, v7);
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_10696/*"PlayVoiceNo"*/,
                                  (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B2C728(result);
      return 0LL;
    }
  }
  return result;
}


System_Collections_Generic_Dictionary_string__int__array *__fastcall SkillLvEntity__getValues(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_String_array *svals; // x8
  int max_length; // w19
  __int64 klass; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_string__int__array *v13; // x20
  il2cpp_array_size_t v14; // w25
  struct System_String_array *v15; // x8
  System_String_o *v16; // x22
  int v17; // w27
  __int64 v18; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v19; // x24
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  Il2CppClass **v26; // x23
  BattleServantConfConponent_o *v27; // x23
  int32_t v28; // w8
  System_String_o *v29; // x24
  BattleServantConfConponent_c *v30; // x24
  int32_t v31; // w2
  const MethodInfo_2DAA23C *v32; // x3
  System_Xml_XmlQualifiedName_o *v33; // x1
  __int64 v34; // x24
  __int64 v36; // x0
  __int64 v37; // x0
  int32_t result[2]; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4186DB6 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__int____TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v4);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v8);
    byte_4186DB6 = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = this->fields.svals;
  if ( !svals )
    return (System_Collections_Generic_Dictionary_string__int__array *)sub_B2C374(
                                                                         System_Collections_Generic_Dictionary_string__int____TypeInfo,
                                                                         1LL);
  max_length = svals->max_length;
  klass = sub_B2C374(System_Collections_Generic_Dictionary_string__int____TypeInfo, (unsigned int)max_length);
  v13 = (System_Collections_Generic_Dictionary_string__int__array *)klass;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = this->fields.svals;
      if ( !v15 )
        goto LABEL_41;
      if ( v14 >= v15->max_length )
        goto LABEL_42;
      klass = (__int64)v15->m_Items[v14];
      if ( !klass )
        goto LABEL_41;
      klass = (__int64)System_String__Replace_44312768(
                         (System_String_o *)klass,
                         (System_String_o *)StringLiteral_15634/*"["*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
      if ( !klass )
        goto LABEL_41;
      v16 = System_String__Replace_44312768(
              (System_String_o *)klass,
              (System_String_o *)StringLiteral_15870/*"]"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      klass = sub_B2C374(char___TypeInfo, 1LL);
      if ( !klass )
        goto LABEL_41;
      v12 = klass;
      if ( !*(_DWORD *)(klass + 24) )
        goto LABEL_42;
      *(_WORD *)(klass + 32) = 44;
      if ( !v16
        || (klass = (__int64)System_String__Split(v16, (System_Char_array *)klass, 0LL)) == 0
        || (v17 = *(_DWORD *)(klass + 24),
            v18 = klass,
            v19 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__int__TypeInfo),
            System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
              v19,
              (const MethodInfo_2DA96B0 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__),
            !v13) )
      {
LABEL_41:
        sub_B2C434(klass, v12);
      }
      if ( v19 )
      {
        klass = sub_B2C41C(v19, v13->obj.klass->_1.element_class);
        if ( !klass )
        {
          v37 = sub_B2C454();
          sub_B2C400(v37, 0LL);
        }
      }
      if ( v14 >= v13->max_length )
      {
LABEL_42:
        v36 = sub_B2C460(klass);
        sub_B2C400(v36, 0LL);
      }
      v26 = &v13->obj.klass + (int)v14;
      v26[4] = (Il2CppClass *)v19;
      v27 = (BattleServantConfConponent_o *)(v26 + 4);
      sub_B2C2F8(v27, (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
      result[1] = 0;
      if ( v17 >= 1 )
        break;
LABEL_37:
      if ( (int)++v14 >= max_length )
        return v13;
    }
    v28 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v28 >= *(_DWORD *)(v18 + 24) )
        goto LABEL_42;
      v29 = *(System_String_o **)(v18 + 8LL * v28 + 32);
      klass = System_Int32__TryParse(v29, result, 0LL);
      if ( (klass & 1) != 0 )
        break;
      klass = sub_B2C374(char___TypeInfo, 1LL);
      if ( !klass )
        goto LABEL_41;
      v12 = klass;
      if ( !*(_DWORD *)(klass + 24) )
        goto LABEL_42;
      *(_WORD *)(klass + 32) = 58;
      if ( !v29 )
        goto LABEL_41;
      klass = (__int64)System_String__Split(v29, (System_Char_array *)klass, 0LL);
      if ( !klass )
        goto LABEL_41;
      v34 = klass;
      if ( *(int *)(klass + 24) >= 2 )
      {
        klass = System_Int32__TryParse(*(System_String_o **)(klass + 40), result, 0LL);
        if ( (klass & 1) != 0 )
        {
          if ( v14 >= v13->max_length || !*(_DWORD *)(v34 + 24) )
            goto LABEL_42;
          klass = (__int64)v27->klass;
          if ( !v27->klass )
            goto LABEL_41;
          v31 = result[0];
          v33 = *(System_Xml_XmlQualifiedName_o **)(v34 + 32);
          v32 = (const MethodInfo_2DAA23C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
LABEL_25:
          System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)klass,
            v33,
            v31,
            v32);
        }
      }
      v28 = ++result[1];
      if ( result[1] >= v17 )
        goto LABEL_37;
    }
    if ( v14 >= v13->max_length )
      goto LABEL_42;
    v30 = v27->klass;
    klass = (__int64)System_Int32__ToString((int32_t)&result[1], 0LL);
    if ( !v30 )
      goto LABEL_41;
    v31 = result[0];
    v32 = (const MethodInfo_2DAA23C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
    v33 = (System_Xml_XmlQualifiedName_o *)klass;
    klass = (__int64)v30;
    goto LABEL_25;
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

  if ( (byte_4186DC1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B2C35C(&string_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_15220/*"VoiceAssetName"*/, v5);
    byte_4186DC1 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_15220/*"VoiceAssetName"*/,
            (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B2C434(0LL, v7);
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_15220/*"VoiceAssetName"*/,
                                  (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B2C728(result);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  float result; // s0
  SkillLvEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4186DC5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B2C35C(&long_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_15221/*"VoiceVolume"*/, v5);
    byte_4186DC5 = 1;
  }
  script = this->fields.script;
  v7 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_15221/*"VoiceVolume"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v7;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)StringLiteral_15221/*"VoiceVolume"*/,
                                                                                   (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B2C434(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item) / 1000.0;
  v11 = (SkillLvEntity_o *)sub_B2C728(Item);
  SkillLvEntity__getMovePositionUp(v11, v12);
  return result;
}


bool __fastcall SkillLvEntity__isPlayVoiceWait(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4186DC3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&StringLiteral_10697/*"PlayVoiceWait"*/, v3);
    byte_4186DC3 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_10697/*"PlayVoiceWait"*/,
                       (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x0

  if ( (byte_418546A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, obj);
    sub_B2C35C(&long_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_16288/*"afterClearBgmId"*/, v6);
    sub_B2C35C(&StringLiteral_19798/*"indv"*/, v7);
    sub_B2C35C(&StringLiteral_16689/*"beforeClearBgmId"*/, v8);
    sub_B2C35C(&StringLiteral_21614/*"questPhase"*/, v9);
    sub_B2C35C(&StringLiteral_21612/*"questId"*/, v10);
    byte_418546A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !obj )
    goto LABEL_15;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_19798/*"indv"*/,
           (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.svtIndv = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_21612/*"questId"*/,
           (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_21614/*"questPhase"*/,
           (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questPhase = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_16689/*"beforeClearBgmId"*/,
           (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.beforeClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)obj,
           (System_Type_o *)StringLiteral_16288/*"afterClearBgmId"*/,
           (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_15:
    sub_B2C434(Item, v12);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    this->fields.afterClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
    return;
  }
LABEL_16:
  v13 = (const MethodInfo *)sub_B2C728(Item);
  SkillMaster___c___cctor(v13);
}


void __fastcall SkillLvEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct SkillLvEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4185468 & 1) == 0 )
  {
    sub_B2C35C(&SkillLvEntity___c_TypeInfo, v1);
    byte_4185468 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(SkillLvEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = SkillLvEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SkillLvEntity___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  if ( (byte_4185469 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Nullable_int___ctor__, x);
    byte_4185469 = 1;
  }
  v6 = (System_Nullable_int__o)&v5;
  v5 = 0LL;
  System_Nullable_int____ctor(v6, v3 - 1, (const MethodInfo_2151C1C *)Method_System_Nullable_int___ctor__);
  return v5;
}