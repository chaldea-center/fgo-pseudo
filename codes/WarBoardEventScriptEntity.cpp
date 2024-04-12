void __fastcall WarBoardEventScriptEntity___ctor(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AC810 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AC810 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardEventScriptEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_42AC80F & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42AC80F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardEventScriptEntity__CreatePrimaryKey(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardEventScriptEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetActionTypes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AC7FC & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16346/*"actionType"*/);
    byte_42AC7FC = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16346/*"actionType"*/, 0LL);
}


System_Int32_array_array *__fastcall WarBoardEventScriptEntity__GetActorEffectPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array_array *resValue; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AC80D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16354/*"actorEffectPieceIndex"*/);
    byte_42AC80D = 1;
  }
  resValue = 0LL;
  if ( EntityScriptUtil__TryGet2DimensionalIntArray(
         this->fields.script,
         (System_String_o *)StringLiteral_16354/*"actorEffectPieceIndex"*/,
         &resValue,
         0LL) )
  {
    return resValue;
  }
  else
  {
    return 0LL;
  }
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetAiIds(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AC7FD & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16406/*"aiId"*/);
    byte_42AC7FD = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16406/*"aiId"*/, 0LL);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetAnimationName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC804 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16461/*"animationName"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AC804 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_16461/*"animationName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBossIdx(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC7F1 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17005/*"bossIdx"*/);
    byte_42AC7F1 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17005/*"bossIdx"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBossProcessType(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC80A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17006/*"bossProcessType"*/);
    byte_42AC80A = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17006/*"bossProcessType"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBreakPointDamageType(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC7F9 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15514/*"WarBoardBreakPointDamage"*/);
    byte_42AC7F9 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_15514/*"WarBoardBreakPointDamage"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetChangeWinCondition(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC80B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17406/*"changeWinCondition"*/);
    byte_42AC80B = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17406/*"changeWinCondition"*/, -1, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetEffect(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_42AC7ED & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18356/*"effect"*/);
    byte_42AC7ED = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18356/*"effect"*/, defVal, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetEffectId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC7EB & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18403/*"effectId"*/);
    byte_42AC7EB = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18403/*"effectId"*/, -1, v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetEffectIds(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AC7EC & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18404/*"effectIds"*/);
    byte_42AC7EC = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_18404/*"effectIds"*/, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetForceId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC7F4 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18947/*"forceId"*/);
    byte_42AC7F4 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18947/*"forceId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetGroupId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC7F3 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19229/*"groupId"*/);
    byte_42AC7F3 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19229/*"groupId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetIntFromScript(
        WarBoardEventScriptEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  WarBoardEventScriptEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42AC7EF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&long_TypeInfo);
    byte_42AC7EF = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)key,
                                                                                   (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B52A5C(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0();
  v11 = (WarBoardEventScriptEntity_o *)sub_B52D50(Item);
  return WarBoardEventScriptEntity__GetSkillId(v11, v12);
}


bool __fastcall WarBoardEventScriptEntity__GetIsIncludeDeadPiece(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC809 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20086/*"isIncludeDeadPiece"*/);
    byte_42AC809 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20086/*"isIncludeDeadPiece"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetIsPlaySkillSe(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC80E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20094/*"isPlaySkillSe"*/);
    byte_42AC80E = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20094/*"isPlaySkillSe"*/, -1, v2) == 1;
}


int32_t __fastcall WarBoardEventScriptEntity__GetIsStop(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC805 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20107/*"isStop"*/);
    byte_42AC805 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20107/*"isStop"*/, 0, v2);
}


bool __fastcall WarBoardEventScriptEntity__GetNoActorEffect(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC808 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21264/*"noActorEffect"*/);
    byte_42AC808 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21264/*"noActorEffect"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetNoMoveLastPieceCamera(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC802 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21268/*"noMoveLastPieceCamera"*/);
    byte_42AC802 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21268/*"noMoveLastPieceCamera"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetNoMoveTargetCamera(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC801 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21269/*"noMoveTargetCamera"*/);
    byte_42AC801 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21269/*"noMoveTargetCamera"*/, -1, v2) == 1;
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetObjectName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC803 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21358/*"objectName"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AC803 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_21358/*"objectName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetOverlayEffectMessage(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC800 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21517/*"overlayEffectMessage"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AC800 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_21517/*"overlayEffectMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetOverlayEffectPrefabName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC7FF & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21518/*"overlayEffectPrefabName"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AC7FF = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_21518/*"overlayEffectPrefabName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AC7FB & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21650/*"pieceIndex"*/);
    byte_42AC7FB = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_21650/*"pieceIndex"*/, 0LL);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetPieceIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AC7E7 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21652/*"pieceIndexes"*/);
    byte_42AC7E7 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_21652/*"pieceIndexes"*/, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC806 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21664/*"playAfterCurrentAnim"*/);
    byte_42AC806 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21664/*"playAfterCurrentAnim"*/, 0, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetSeName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC7EE & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22120/*"seName"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AC7EE = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22120/*"seName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSkillId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC7E9 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22329/*"skillId"*/);
    byte_42AC7E9 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22329/*"skillId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSkillLv(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC7EA & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22330/*"skillLv"*/);
    byte_42AC7EA = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22330/*"skillLv"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSquareIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC7E8 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22425/*"squareIndex"*/);
    byte_42AC7E8 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22425/*"squareIndex"*/, -1, v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndexGroup(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t IntFromScript; // w0
  int32_t v5; // w19
  WarBoardSquareIndexGroupMaster_o *Master_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42AC7FA & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&StringLiteral_22428/*"squareIndexGroup"*/);
    byte_42AC7FA = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22428/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return 0LL;
  v5 = IntFromScript;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardSquareIndexGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_WarQuestSelectionMaster
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     Master_WarQuestSelectionMaster,
                     v5,
                     HIDWORD(Instance[10].monitor),
                     0LL)) == 0LL )
  {
    sub_B52A5C(Instance, v8);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t IntFromScript; // w0
  int32_t v5; // w20
  WarBoardSquareIndexGroupMaster_o *Master_WarQuestSelectionMaster; // x19
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42AC7F7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&StringLiteral_22428/*"squareIndexGroup"*/);
    sub_B52984(&StringLiteral_22430/*"squareIndexes"*/);
    byte_42AC7F7 = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22428/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22430/*"squareIndexes"*/, 0LL);
  v5 = IntFromScript;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardSquareIndexGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_WarQuestSelectionMaster
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     Master_WarQuestSelectionMaster,
                     v5,
                     HIDWORD(Instance[10].monitor),
                     0LL)) == 0LL )
  {
    sub_B52A5C(Instance, v8);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndicesGreedily(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *SquareIndexes; // x20
  const MethodInfo *v4; // x1
  int32_t SquareIndex; // w0
  int32_t v6; // w19
  __int64 v7; // x0
  __int64 v8; // x1
  _QWORD **v9; // x20
  __int64 v10; // x19
  __int16 v11; // w8
  __int64 v12; // x19
  __int64 v13; // x19
  __int64 v14; // x19
  __int64 v16; // x0

  if ( (byte_42AC7F8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_int___);
    sub_B52984(&int___TypeInfo);
    byte_42AC7F8 = 1;
  }
  SquareIndexes = (System_Collections_ICollection_o *)WarBoardEventScriptEntity__GetSquareIndexes(this, method);
  if ( BasicHelper__IsNullOrEmpty(SquareIndexes, 0LL) )
  {
    SquareIndex = WarBoardEventScriptEntity__GetSquareIndex(this, v4);
    if ( SquareIndex < 1 )
    {
      v9 = (_QWORD **)Method_System_Array_Empty_int___;
      v10 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v11 = *(_WORD *)(v10 + 306);
      if ( (v11 & 1) == 0 )
      {
        sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v11 = *(_WORD *)(v10 + 306);
      }
      if ( (v11 & 0x400) != 0 )
      {
        v12 = *v9[6];
        if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
          sub_AEB684(*v9[6]);
        if ( !*(_DWORD *)(v12 + 224) )
        {
          v13 = *v9[6];
          if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
            sub_AEB684(*v9[6]);
          j_il2cpp_runtime_class_init_0(v13);
        }
      }
      v14 = *v9[6];
      if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
        sub_AEB684(*v9[6]);
      return **(System_Int32_array ***)(v14 + 184);
    }
    else
    {
      v6 = SquareIndex;
      v7 = sub_B5299C(int___TypeInfo, 1LL);
      if ( !v7 )
        sub_B52A5C(0LL, v8);
      SquareIndexes = (System_Collections_ICollection_o *)v7;
      if ( !*(_DWORD *)(v7 + 24) )
      {
        v16 = sub_B52A88(v7);
        sub_B52A28(v16, 0LL);
      }
      *(_DWORD *)(v7 + 32) = v6;
    }
  }
  return (System_Int32_array *)SquareIndexes;
}


int32_t __fastcall WarBoardEventScriptEntity__GetStageReinforcementsId(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC7FE & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21932/*"reinforcements"*/);
    byte_42AC7FE = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21932/*"reinforcements"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetStatus(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC7F2 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22490/*"status"*/);
    byte_42AC7F2 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22490/*"status"*/, -1, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetStringFromScript(
        WarBoardEventScriptEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  System_String_o *Item; // x0
  WarBoardEventScriptEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42AC7F0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&string_TypeInfo);
    byte_42AC7F0 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_B52A5C(0LL, v8);
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v9,
                              (System_Type_o *)key,
                              (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = Item;
  if ( !Item || Item->klass == string_TypeInfo )
    return defVal;
  v12 = (WarBoardEventScriptEntity_o *)sub_B52D50(Item);
  return (System_String_o *)WarBoardEventScriptEntity__GetBossIdx(v12, v13);
}


float __fastcall WarBoardEventScriptEntity__GetTargetAllCameraSize(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AC80C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22793/*"targetAllCameraSize"*/);
    byte_42AC80C = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_22793/*"targetAllCameraSize"*/, 0.0, 0LL);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetUiType(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_42AC7F5 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_23026/*"type"*/);
    byte_42AC7F5 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_23026/*"type"*/, defVal, 0LL);
}


bool __fastcall WarBoardEventScriptEntity__IsDisp(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AC7F6 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18158/*"disp"*/);
    byte_42AC7F6 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18158/*"disp"*/, 1, 0LL) == 1;
}


bool __fastcall WarBoardEventScriptEntity__IsUseHoldReinforcements(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AC807 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20112/*"isUseHoldReinforcements"*/);
    byte_42AC807 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20112/*"isUseHoldReinforcements"*/, -1, v2) > 0;
}