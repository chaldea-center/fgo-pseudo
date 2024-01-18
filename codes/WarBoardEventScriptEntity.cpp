void __fastcall WarBoardEventScriptEntity___ctor(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4184047 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4184047 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardEventScriptEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4184046 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4184046 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_4184033 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16237/*"actionType"*/, method);
    byte_4184033 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16237/*"actionType"*/, 0LL);
}


System_Int32_array_array *__fastcall WarBoardEventScriptEntity__GetActorEffectPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array_array *resValue; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4184044 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16245/*"actorEffectPieceIndex"*/, method);
    byte_4184044 = 1;
  }
  resValue = 0LL;
  if ( EntityScriptUtil__TryGet2DimensionalIntArray(
         this->fields.script,
         (System_String_o *)StringLiteral_16245/*"actorEffectPieceIndex"*/,
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
  if ( (byte_4184034 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16294/*"aiId"*/, method);
    byte_4184034 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16294/*"aiId"*/, 0LL);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetAnimationName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_418403B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16349/*"animationName"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_418403B = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_16349/*"animationName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBossIdx(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4184028 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16889/*"bossIdx"*/, method);
    byte_4184028 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_16889/*"bossIdx"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBossProcessType(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4184041 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16890/*"bossProcessType"*/, method);
    byte_4184041 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_16890/*"bossProcessType"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBreakPointDamageType(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4184030 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15409/*"WarBoardBreakPointDamage"*/, method);
    byte_4184030 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_15409/*"WarBoardBreakPointDamage"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetChangeWinCondition(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4184042 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17283/*"changeWinCondition"*/, method);
    byte_4184042 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17283/*"changeWinCondition"*/, -1, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetEffect(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_4184024 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18221/*"effect"*/, defVal);
    byte_4184024 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18221/*"effect"*/, defVal, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetEffectId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4184022 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18269/*"effectId"*/, method);
    byte_4184022 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18269/*"effectId"*/, -1, v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetEffectIds(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4184023 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18270/*"effectIds"*/, method);
    byte_4184023 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_18270/*"effectIds"*/, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetForceId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418402B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18806/*"forceId"*/, method);
    byte_418402B = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18806/*"forceId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetGroupId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418402A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19086/*"groupId"*/, method);
    byte_418402A = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19086/*"groupId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetIntFromScript(
        WarBoardEventScriptEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  WarBoardEventScriptEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4184026 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&long_TypeInfo, v8);
    byte_4184026 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)key,
                                                                                   (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B2C434(Item, v10);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0();
  v13 = (WarBoardEventScriptEntity_o *)sub_B2C728(Item);
  return WarBoardEventScriptEntity__GetSkillId(v13, v14);
}


bool __fastcall WarBoardEventScriptEntity__GetIsIncludeDeadPiece(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4184040 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19936/*"isIncludeDeadPiece"*/, method);
    byte_4184040 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19936/*"isIncludeDeadPiece"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetIsPlaySkillSe(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4184045 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19944/*"isPlaySkillSe"*/, method);
    byte_4184045 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19944/*"isPlaySkillSe"*/, -1, v2) == 1;
}


int32_t __fastcall WarBoardEventScriptEntity__GetIsStop(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418403C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19956/*"isStop"*/, method);
    byte_418403C = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19956/*"isStop"*/, 0, v2);
}


bool __fastcall WarBoardEventScriptEntity__GetNoActorEffect(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418403F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21093/*"noActorEffect"*/, method);
    byte_418403F = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21093/*"noActorEffect"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetNoMoveLastPieceCamera(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4184039 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21096/*"noMoveLastPieceCamera"*/, method);
    byte_4184039 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21096/*"noMoveLastPieceCamera"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetNoMoveTargetCamera(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4184038 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21097/*"noMoveTargetCamera"*/, method);
    byte_4184038 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21097/*"noMoveTargetCamera"*/, -1, v2) == 1;
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetObjectName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_418403A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21188/*"objectName"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_418403A = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_21188/*"objectName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetOverlayEffectMessage(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4184037 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21347/*"overlayEffectMessage"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4184037 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_21347/*"overlayEffectMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetOverlayEffectPrefabName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4184036 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21348/*"overlayEffectPrefabName"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4184036 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_21348/*"overlayEffectPrefabName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4184032 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21474/*"pieceIndex"*/, method);
    byte_4184032 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_21474/*"pieceIndex"*/, 0LL);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetPieceIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_418401E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21476/*"pieceIndexes"*/, method);
    byte_418401E = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_21476/*"pieceIndexes"*/, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418403D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21488/*"playAfterCurrentAnim"*/, method);
    byte_418403D = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21488/*"playAfterCurrentAnim"*/, 0, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetSeName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4184025 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21935/*"seName"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4184025 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_21935/*"seName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSkillId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4184020 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22142/*"skillId"*/, method);
    byte_4184020 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22142/*"skillId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSkillLv(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4184021 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22143/*"skillLv"*/, method);
    byte_4184021 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22143/*"skillLv"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSquareIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418401F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22238/*"squareIndex"*/, method);
    byte_418401F = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22238/*"squareIndex"*/, -1, v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndexGroup(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t IntFromScript; // w0
  int32_t v9; // w19
  WarBoardSquareIndexGroupMaster_o *Master_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v12; // x1

  if ( (byte_4184031 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_22241/*"squareIndexGroup"*/, v7);
    byte_4184031 = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22241/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return 0LL;
  v9 = IntFromScript;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardSquareIndexGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_WarQuestSelectionMaster
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     Master_WarQuestSelectionMaster,
                     v9,
                     HIDWORD(Instance[10].monitor),
                     0LL)) == 0LL )
  {
    sub_B2C434(Instance, v12);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t IntFromScript; // w0
  int32_t v10; // w20
  WarBoardSquareIndexGroupMaster_o *Master_WarQuestSelectionMaster; // x19
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v13; // x1

  if ( (byte_418402E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_22241/*"squareIndexGroup"*/, v7);
    sub_B2C35C(&StringLiteral_22243/*"squareIndexes"*/, v8);
    byte_418402E = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22241/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22243/*"squareIndexes"*/, 0LL);
  v10 = IntFromScript;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardSquareIndexGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_WarQuestSelectionMaster
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     Master_WarQuestSelectionMaster,
                     v10,
                     HIDWORD(Instance[10].monitor),
                     0LL)) == 0LL )
  {
    sub_B2C434(Instance, v13);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndicesGreedily(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_ICollection_o *SquareIndexes; // x20
  const MethodInfo *v5; // x1
  int32_t SquareIndex; // w0
  int32_t v7; // w19
  __int64 v8; // x0
  __int64 v9; // x1
  _QWORD **v10; // x20
  __int64 v11; // x19
  __int16 v12; // w8
  __int64 v13; // x19
  __int64 v14; // x19
  __int64 v15; // x19
  __int64 v17; // x0

  if ( (byte_418402F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_int___, method);
    sub_B2C35C(&int___TypeInfo, v3);
    byte_418402F = 1;
  }
  SquareIndexes = (System_Collections_ICollection_o *)WarBoardEventScriptEntity__GetSquareIndexes(this, method);
  if ( BasicHelper__IsNullOrEmpty(SquareIndexes, 0LL) )
  {
    SquareIndex = WarBoardEventScriptEntity__GetSquareIndex(this, v5);
    if ( SquareIndex < 1 )
    {
      v10 = (_QWORD **)Method_System_Array_Empty_int___;
      v11 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v12 = *(_WORD *)(v11 + 306);
      if ( (v12 & 1) == 0 )
      {
        sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v12 = *(_WORD *)(v11 + 306);
      }
      if ( (v12 & 0x400) != 0 )
      {
        v13 = *v10[6];
        if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
          sub_AC505C(*v10[6]);
        if ( !*(_DWORD *)(v13 + 224) )
        {
          v14 = *v10[6];
          if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
            sub_AC505C(*v10[6]);
          j_il2cpp_runtime_class_init_0(v14);
        }
      }
      v15 = *v10[6];
      if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
        sub_AC505C(*v10[6]);
      return **(System_Int32_array ***)(v15 + 184);
    }
    else
    {
      v7 = SquareIndex;
      v8 = sub_B2C374(int___TypeInfo, 1LL);
      if ( !v8 )
        sub_B2C434(0LL, v9);
      SquareIndexes = (System_Collections_ICollection_o *)v8;
      if ( !*(_DWORD *)(v8 + 24) )
      {
        v17 = sub_B2C460(v8);
        sub_B2C400(v17, 0LL);
      }
      *(_DWORD *)(v8 + 32) = v7;
    }
  }
  return (System_Int32_array *)SquareIndexes;
}


int32_t __fastcall WarBoardEventScriptEntity__GetStageReinforcementsId(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4184035 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21751/*"reinforcements"*/, method);
    byte_4184035 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21751/*"reinforcements"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetStatus(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4184029 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22302/*"status"*/, method);
    byte_4184029 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22302/*"status"*/, -1, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetStringFromScript(
        WarBoardEventScriptEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v11; // x0
  System_String_o *Item; // x0
  WarBoardEventScriptEntity_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4184027 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&string_TypeInfo, v8);
    byte_4184027 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v11 = this->fields.script;
  if ( !v11 )
    sub_B2C434(0LL, v10);
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v11,
                              (System_Type_o *)key,
                              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = Item;
  if ( !Item || Item->klass == string_TypeInfo )
    return defVal;
  v14 = (WarBoardEventScriptEntity_o *)sub_B2C728(Item);
  return (System_String_o *)WarBoardEventScriptEntity__GetBossIdx(v14, v15);
}


float __fastcall WarBoardEventScriptEntity__GetTargetAllCameraSize(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4184043 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22603/*"targetAllCameraSize"*/, method);
    byte_4184043 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_22603/*"targetAllCameraSize"*/, 0.0, 0LL);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetUiType(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_418402C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22836/*"type"*/, defVal);
    byte_418402C = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22836/*"type"*/, defVal, 0LL);
}


bool __fastcall WarBoardEventScriptEntity__IsDisp(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418402D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18027/*"disp"*/, method);
    byte_418402D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18027/*"disp"*/, 1, 0LL) == 1;
}


bool __fastcall WarBoardEventScriptEntity__IsUseHoldReinforcements(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418403E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19961/*"isUseHoldReinforcements"*/, method);
    byte_418403E = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19961/*"isUseHoldReinforcements"*/, -1, v2) > 0;
}