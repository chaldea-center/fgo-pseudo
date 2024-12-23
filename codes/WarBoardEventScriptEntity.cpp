void __fastcall WarBoardEventScriptEntity___ctor(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67BC8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B67BC8 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardEventScriptEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4B67BC7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4B67BC7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_2F57334 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_4B67BB4 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_16859/*"actionType"*/, method);
    byte_4B67BB4 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16859/*"actionType"*/, 0LL);
}


System_Int32_array_array *__fastcall WarBoardEventScriptEntity__GetActorEffectPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array_array *resValue; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B67BC5 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_16868/*"actorEffectPieceIndex"*/, method);
    byte_4B67BC5 = 1;
  }
  resValue = 0LL;
  if ( EntityScriptUtil__TryGet2DimensionalIntArray(
         this->fields.script,
         (System_String_o *)StringLiteral_16868/*"actorEffectPieceIndex"*/,
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
  if ( (byte_4B67BB5 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_16927/*"aiId"*/, method);
    byte_4B67BB5 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16927/*"aiId"*/, 0LL);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetAnimationName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4B67BBC & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_16994/*"animationName"*/, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v4);
    byte_4B67BBC = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_16994/*"animationName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBossIdx(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BA9 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17603/*"bossIdx"*/, method);
    byte_4B67BA9 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17603/*"bossIdx"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBossProcessType(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BC2 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17604/*"bossProcessType"*/, method);
    byte_4B67BC2 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17604/*"bossProcessType"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBreakPointDamageType(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BB1 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_15785/*"WarBoardBreakPointDamage"*/, method);
    byte_4B67BB1 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_15785/*"WarBoardBreakPointDamage"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetChangeWinCondition(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BC3 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18054/*"changeWinCondition"*/, method);
    byte_4B67BC3 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18054/*"changeWinCondition"*/, -1, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetEffect(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_4B67BA5 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_19119/*"effect"*/, defVal);
    byte_4B67BA5 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19119/*"effect"*/, defVal, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetEffectId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BA3 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_19168/*"effectId"*/, method);
    byte_4B67BA3 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19168/*"effectId"*/, -1, v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetEffectIds(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B67BA4 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_19169/*"effectIds"*/, method);
    byte_4B67BA4 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_19169/*"effectIds"*/, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetForceId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BAC & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_19795/*"forceId"*/, method);
    byte_4B67BAC = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19795/*"forceId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetGroupId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BAB & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_20130/*"groupId"*/, method);
    byte_4B67BAB = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20130/*"groupId"*/, -1, v2);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  WarBoardEventScriptEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4B67BA7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BE4ACC(&long_TypeInfo, v8);
    byte_4B67BA7 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BE4D28(Item, v10);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
  sub_1BE4FE8(Item);
  return WarBoardEventScriptEntity__GetSkillId(v15, v16);
}


bool __fastcall WarBoardEventScriptEntity__GetIsIncludeDeadPiece(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BC1 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21093/*"isIncludeDeadPiece"*/, method);
    byte_4B67BC1 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21093/*"isIncludeDeadPiece"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetIsPlaySkillSe(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BC6 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21103/*"isPlaySkillSe"*/, method);
    byte_4B67BC6 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21103/*"isPlaySkillSe"*/, -1, v2) == 1;
}


int32_t __fastcall WarBoardEventScriptEntity__GetIsStop(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BBD & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21119/*"isStop"*/, method);
    byte_4B67BBD = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21119/*"isStop"*/, 0, v2);
}


bool __fastcall WarBoardEventScriptEntity__GetNoActorEffect(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BC0 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22401/*"noActorEffect"*/, method);
    byte_4B67BC0 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22401/*"noActorEffect"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetNoMoveLastPieceCamera(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BBA & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22406/*"noMoveLastPieceCamera"*/, method);
    byte_4B67BBA = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22406/*"noMoveLastPieceCamera"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetNoMoveTargetCamera(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BB9 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22407/*"noMoveTargetCamera"*/, method);
    byte_4B67BB9 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22407/*"noMoveTargetCamera"*/, -1, v2) == 1;
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetObjectName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4B67BBB & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22515/*"objectName"*/, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v4);
    byte_4B67BBB = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22515/*"objectName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetOverlayEffectMessage(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4B67BB8 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22686/*"overlayEffectMessage"*/, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v4);
    byte_4B67BB8 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22686/*"overlayEffectMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetOverlayEffectPrefabName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4B67BB7 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22687/*"overlayEffectPrefabName"*/, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v4);
    byte_4B67BB7 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22687/*"overlayEffectPrefabName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B67BB3 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22854/*"pieceIndex"*/, method);
    byte_4B67BB3 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22854/*"pieceIndex"*/, 0LL);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetPieceIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B67B9F & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22856/*"pieceIndexes"*/, method);
    byte_4B67B9F = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22856/*"pieceIndexes"*/, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BBE & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22868/*"playAfterCurrentAnim"*/, method);
    byte_4B67BBE = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22868/*"playAfterCurrentAnim"*/, 0, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetSeName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4B67BA6 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_23388/*"seName"*/, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v4);
    byte_4B67BA6 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_23388/*"seName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSkillId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BA1 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_23677/*"skillId"*/, method);
    byte_4B67BA1 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23677/*"skillId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSkillLv(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BA2 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_23678/*"skillLv"*/, method);
    byte_4B67BA2 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23678/*"skillLv"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSquareIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BA0 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_23787/*"squareIndex"*/, method);
    byte_4B67BA0 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23787/*"squareIndex"*/, -1, v2);
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
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3

  if ( (byte_4B67BB2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1BE4ACC(&StringLiteral_23790/*"squareIndexGroup"*/, v7);
    byte_4B67BB2 = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23790/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return 0LL;
  v9 = IntFromScript;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_object
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     (WarBoardSquareIndexGroupMaster_o *)Master_object,
                     v9,
                     HIDWORD(Instance[10].fields._items),
                     v13)) == 0LL )
  {
    sub_1BE4D28(Instance, v12);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  Il2CppObject *Master_object; // x19
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3

  if ( (byte_4B67BAF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1BE4ACC(&StringLiteral_23790/*"squareIndexGroup"*/, v7);
    sub_1BE4ACC(&StringLiteral_23792/*"squareIndexes"*/, v8);
    byte_4B67BAF = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23790/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_23792/*"squareIndexes"*/, 0LL);
  v10 = IntFromScript;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_object
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     (WarBoardSquareIndexGroupMaster_o *)Master_object,
                     v10,
                     HIDWORD(Instance[10].fields._items),
                     v14)) == 0LL )
  {
    sub_1BE4D28(Instance, v13);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndicesGreedily(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_ICollection_o *SquareIndexes; // x20
  const MethodInfo *v5; // x1
  int32_t SquareIndex; // w0
  long double inited; // q0
  int32_t v8; // w19
  __int64 v9; // x0
  __int64 v10; // x1
  _QWORD *v11; // x19
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0

  if ( (byte_4B67BB0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Empty_int___, method);
    sub_1BE4ACC(&int___TypeInfo, v3);
    byte_4B67BB0 = 1;
  }
  SquareIndexes = (System_Collections_ICollection_o *)WarBoardEventScriptEntity__GetSquareIndexes(this, method);
  if ( BasicHelper__IsNullOrEmpty(SquareIndexes, 0LL) )
  {
    SquareIndex = WarBoardEventScriptEntity__GetSquareIndex(this, v5);
    if ( SquareIndex < 1 )
    {
      v11 = Method_System_Array_Empty_int___;
      v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v12 )
      {
        sub_1C36A04(Method_System_Array_Empty_int___);
        v12 = v11[7];
      }
      v13 = *(_QWORD *)(v12 + 16);
      if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
        v13 = sub_1C369A8(inited);
      if ( !*(_DWORD *)(v13 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v13);
      v14 = *(_QWORD *)(v11[7] + 16LL);
      if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
        v14 = sub_1C369A8(inited);
      return **(System_Int32_array ***)(v14 + 184);
    }
    else
    {
      v8 = SquareIndex;
      v9 = sub_1BE4B74(int___TypeInfo, 1LL);
      if ( !v9 )
        sub_1BE4D28(0LL, v10);
      SquareIndexes = (System_Collections_ICollection_o *)v9;
      if ( !*(_DWORD *)(v9 + 24) )
        sub_1BE4D30(v9, v10);
      *(_DWORD *)(v9 + 32) = v8;
    }
  }
  return (System_Int32_array *)SquareIndexes;
}


int32_t __fastcall WarBoardEventScriptEntity__GetStageReinforcementsId(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BB6 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_23166/*"reinforcements"*/, method);
    byte_4B67BB6 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23166/*"reinforcements"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetStatus(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BAA & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_23857/*"status"*/, method);
    byte_4B67BAA = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23857/*"status"*/, -1, v2);
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
  Il2CppObject *Item; // x0
  WarBoardEventScriptEntity_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B67BA8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BE4ACC(&string_TypeInfo, v8);
    byte_4B67BA8 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v11 = this->fields.script;
  if ( !v11 )
    sub_1BE4D28(0LL, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v11,
           (Il2CppObject *)key,
           (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1BE4FE8(Item);
  return (System_String_o *)WarBoardEventScriptEntity__GetBossIdx(v14, v15);
}


float __fastcall WarBoardEventScriptEntity__GetTargetAllCameraSize(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B67BC4 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_24185/*"targetAllCameraSize"*/, method);
    byte_4B67BC4 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_24185/*"targetAllCameraSize"*/, 0.0, 0LL);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetUiType(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_4B67BAD & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_24448/*"type"*/, defVal);
    byte_4B67BAD = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_24448/*"type"*/, defVal, 0LL);
}


bool __fastcall WarBoardEventScriptEntity__IsDisp(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67BAE & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18885/*"disp"*/, method);
    byte_4B67BAE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18885/*"disp"*/, 1, 0LL) == 1;
}


bool __fastcall WarBoardEventScriptEntity__IsUseHoldReinforcements(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B67BBF & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21123/*"isUseHoldReinforcements"*/, method);
    byte_4B67BBF = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21123/*"isUseHoldReinforcements"*/, -1, v2) > 0;
}