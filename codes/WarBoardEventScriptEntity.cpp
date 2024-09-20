void __fastcall WarBoardEventScriptEntity___ctor(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C10F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C10F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardEventScriptEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4A5C10E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5C10E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_4A5C0FB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16648/*"actionType"*/);
    byte_4A5C0FB = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16648/*"actionType"*/, 0LL);
}


System_Int32_array_array *__fastcall WarBoardEventScriptEntity__GetActorEffectPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array_array *resValue; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5C10C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16657/*"actorEffectPieceIndex"*/);
    byte_4A5C10C = 1;
  }
  resValue = 0LL;
  if ( EntityScriptUtil__TryGet2DimensionalIntArray(
         this->fields.script,
         (System_String_o *)StringLiteral_16657/*"actorEffectPieceIndex"*/,
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
  if ( (byte_4A5C0FC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16716/*"aiId"*/);
    byte_4A5C0FC = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16716/*"aiId"*/, 0LL);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetAnimationName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C103 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16784/*"animationName"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C103 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_16784/*"animationName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBossIdx(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C0F0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17384/*"bossIdx"*/);
    byte_4A5C0F0 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17384/*"bossIdx"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBossProcessType(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C109 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17385/*"bossProcessType"*/);
    byte_4A5C109 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17385/*"bossProcessType"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBreakPointDamageType(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C0F8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15578/*"WarBoardBreakPointDamage"*/);
    byte_4A5C0F8 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_15578/*"WarBoardBreakPointDamage"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetChangeWinCondition(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C10A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17820/*"changeWinCondition"*/);
    byte_4A5C10A = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17820/*"changeWinCondition"*/, -1, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetEffect(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_4A5C0EC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18868/*"effect"*/);
    byte_4A5C0EC = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18868/*"effect"*/, defVal, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetEffectId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C0EA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18915/*"effectId"*/);
    byte_4A5C0EA = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18915/*"effectId"*/, -1, v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetEffectIds(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C0EB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18916/*"effectIds"*/);
    byte_4A5C0EB = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_18916/*"effectIds"*/, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetForceId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C0F3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19534/*"forceId"*/);
    byte_4A5C0F3 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19534/*"forceId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetGroupId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C0F2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19854/*"groupId"*/);
    byte_4A5C0F2 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19854/*"groupId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetIntFromScript(
        WarBoardEventScriptEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  WarBoardEventScriptEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4A5C0EE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5C0EE = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B8880C(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
  sub_1B88ACC(Item);
  return WarBoardEventScriptEntity__GetSkillId(v13, v14);
}


bool __fastcall WarBoardEventScriptEntity__GetIsIncludeDeadPiece(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C108 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20796/*"isIncludeDeadPiece"*/);
    byte_4A5C108 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20796/*"isIncludeDeadPiece"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetIsPlaySkillSe(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C10D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20805/*"isPlaySkillSe"*/);
    byte_4A5C10D = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20805/*"isPlaySkillSe"*/, -1, v2) == 1;
}


int32_t __fastcall WarBoardEventScriptEntity__GetIsStop(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C104 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20819/*"isStop"*/);
    byte_4A5C104 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20819/*"isStop"*/, 0, v2);
}


bool __fastcall WarBoardEventScriptEntity__GetNoActorEffect(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C107 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22086/*"noActorEffect"*/);
    byte_4A5C107 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22086/*"noActorEffect"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetNoMoveLastPieceCamera(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C101 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22090/*"noMoveLastPieceCamera"*/);
    byte_4A5C101 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22090/*"noMoveLastPieceCamera"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetNoMoveTargetCamera(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C100 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22091/*"noMoveTargetCamera"*/);
    byte_4A5C100 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22091/*"noMoveTargetCamera"*/, -1, v2) == 1;
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetObjectName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C102 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22197/*"objectName"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C102 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22197/*"objectName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetOverlayEffectMessage(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C0FF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22368/*"overlayEffectMessage"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C0FF = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22368/*"overlayEffectMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetOverlayEffectPrefabName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C0FE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22369/*"overlayEffectPrefabName"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C0FE = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22369/*"overlayEffectPrefabName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C0FA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22533/*"pieceIndex"*/);
    byte_4A5C0FA = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22533/*"pieceIndex"*/, 0LL);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetPieceIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C0E6 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22535/*"pieceIndexes"*/);
    byte_4A5C0E6 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22535/*"pieceIndexes"*/, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C105 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22547/*"playAfterCurrentAnim"*/);
    byte_4A5C105 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22547/*"playAfterCurrentAnim"*/, 0, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetSeName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C0ED & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23058/*"seName"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C0ED = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_23058/*"seName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSkillId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C0E8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23342/*"skillId"*/);
    byte_4A5C0E8 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23342/*"skillId"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSkillLv(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C0E9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23343/*"skillLv"*/);
    byte_4A5C0E9 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23343/*"skillLv"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSquareIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C0E7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23452/*"squareIndex"*/);
    byte_4A5C0E7 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23452/*"squareIndex"*/, -1, v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndexGroup(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t IntFromScript; // w0
  int32_t v5; // w19
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4A5C0F9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&StringLiteral_23455/*"squareIndexGroup"*/);
    byte_4A5C0F9 = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23455/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return 0LL;
  v5 = IntFromScript;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_object
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     (WarBoardSquareIndexGroupMaster_o *)Master_object,
                     v5,
                     HIDWORD(Instance[10].fields._items),
                     v9)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetSquareIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t IntFromScript; // w0
  int32_t v5; // w20
  Il2CppObject *Master_object; // x19
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4A5C0F6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&StringLiteral_23455/*"squareIndexGroup"*/);
    sub_1B885B0(&StringLiteral_23457/*"squareIndexes"*/);
    byte_4A5C0F6 = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23455/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_23457/*"squareIndexes"*/, 0LL);
  v5 = IntFromScript;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_object
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     (WarBoardSquareIndexGroupMaster_o *)Master_object,
                     v5,
                     HIDWORD(Instance[10].fields._items),
                     v9)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0

  if ( (byte_4A5C0F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5C0F7 = 1;
  }
  SquareIndexes = (System_Collections_ICollection_o *)WarBoardEventScriptEntity__GetSquareIndexes(this, method);
  if ( BasicHelper__IsNullOrEmpty(SquareIndexes, 0LL) )
  {
    SquareIndex = WarBoardEventScriptEntity__GetSquareIndex(this, v4);
    if ( SquareIndex < 1 )
    {
      v9 = Method_System_Array_Empty_int___;
      v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v10 )
      {
        sub_1BDA4E8(Method_System_Array_Empty_int___);
        v10 = v9[7];
      }
      v11 = *(_QWORD *)(v10 + 16);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1BDA48C(v11);
      if ( !*(_DWORD *)(v11 + 224) )
        j_il2cpp_runtime_class_init_0(v11);
      v12 = *(_QWORD *)(v9[7] + 16LL);
      if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
        v12 = sub_1BDA48C(v12);
      return **(System_Int32_array ***)(v12 + 184);
    }
    else
    {
      v6 = SquareIndex;
      v7 = sub_1B88658(int___TypeInfo, 1LL);
      if ( !v7 )
        sub_1B8880C(0LL, v8);
      SquareIndexes = (System_Collections_ICollection_o *)v7;
      if ( !*(_DWORD *)(v7 + 24) )
        sub_1B88814(v7, v8);
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

  if ( (byte_4A5C0FD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22842/*"reinforcements"*/);
    byte_4A5C0FD = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22842/*"reinforcements"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetStatus(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C0F1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23522/*"status"*/);
    byte_4A5C0F1 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23522/*"status"*/, -1, v2);
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
  Il2CppObject *Item; // x0
  WarBoardEventScriptEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4A5C0EF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&string_TypeInfo);
    byte_4A5C0EF = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_1B8880C(0LL, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)key,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1B88ACC(Item);
  return (System_String_o *)WarBoardEventScriptEntity__GetBossIdx(v12, v13);
}


float __fastcall WarBoardEventScriptEntity__GetTargetAllCameraSize(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C10B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23850/*"targetAllCameraSize"*/);
    byte_4A5C10B = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_23850/*"targetAllCameraSize"*/, 0.0, 0LL);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetUiType(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_4A5C0F4 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24109/*"type"*/);
    byte_4A5C0F4 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_24109/*"type"*/, defVal, 0LL);
}


bool __fastcall WarBoardEventScriptEntity__IsDisp(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C0F5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18636/*"disp"*/);
    byte_4A5C0F5 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18636/*"disp"*/, 1, 0LL) == 1;
}


bool __fastcall WarBoardEventScriptEntity__IsUseHoldReinforcements(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5C106 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20823/*"isUseHoldReinforcements"*/);
    byte_4A5C106 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20823/*"isUseHoldReinforcements"*/, -1, v2) > 0;
}