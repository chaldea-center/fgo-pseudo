void WarBoardEventScriptEntity___ctor(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939899 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939899 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardEventScriptEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_5939898 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939898 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *WarBoardEventScriptEntity__CreatePrimaryKey(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardEventScriptEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}


System_Int32_array *WarBoardEventScriptEntity__GetActionTypes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5939885 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17298/*"actionType"*/);
    byte_5939885 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17298/*"actionType"*/, 0);
}


System_Int32_array_array *WarBoardEventScriptEntity__GetActorEffectPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Int32_array_array *resValue; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5939896 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17304/*"actorEffectPieceIndex"*/);
    byte_5939896 = 1;
  }
  script = this->fields.script;
  resValue = 0;
  if ( EntityScriptUtil__TryGet2DimensionalIntArray(script, (System_String_o *)StringLiteral_17304/*"actorEffectPieceIndex"*/, &resValue, 0) )
    return resValue;
  else
    return 0;
}


System_Int32_array *WarBoardEventScriptEntity__GetAiIds(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939886 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17383/*"aiId"*/);
    byte_5939886 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17383/*"aiId"*/, 0);
}


System_String_o *WarBoardEventScriptEntity__GetAnimationName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593988D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17461/*"animationName"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593988D = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_17461/*"animationName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t WarBoardEventScriptEntity__GetBossIdx(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593987A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18073/*"bossIdx"*/);
    byte_593987A = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18073/*"bossIdx"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetBossProcessType(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939893 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18074/*"bossProcessType"*/);
    byte_5939893 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18074/*"bossProcessType"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetBreakPointDamageType(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939882 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16160/*"WarBoardBreakPointDamage"*/);
    byte_5939882 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_16160/*"WarBoardBreakPointDamage"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetChangeWinCondition(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939894 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18572/*"changeWinCondition"*/);
    byte_5939894 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18572/*"changeWinCondition"*/, -1, v2);
}


System_String_o *WarBoardEventScriptEntity__GetEffect(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_5939876 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19701/*"effect"*/);
    byte_5939876 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19701/*"effect"*/, defVal, 0);
}


int32_t WarBoardEventScriptEntity__GetEffectId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939874 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19750/*"effectId"*/);
    byte_5939874 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19750/*"effectId"*/, -1, v2);
}


System_Int32_array *WarBoardEventScriptEntity__GetEffectIds(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5939875 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19751/*"effectIds"*/);
    byte_5939875 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_19751/*"effectIds"*/, 0);
}


int32_t WarBoardEventScriptEntity__GetForceId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593987D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20443/*"forceId"*/);
    byte_593987D = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20443/*"forceId"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetGroupId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593987C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20812/*"groupId"*/);
    byte_593987C = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20812/*"groupId"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetIntFromScript(
        WarBoardEventScriptEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  WarBoardEventScriptEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_5939878 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5939878 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_21FFECC(Item, v8);
  }
  if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, qword_594C090, v10);
  sub_220024C(Item, qword_594C090, v10);
  return WarBoardEventScriptEntity__GetSkillId(v12, v13);
}


bool WarBoardEventScriptEntity__GetIsIncludeDeadPiece(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939892 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21901/*"isIncludeDeadPiece"*/);
    byte_5939892 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21901/*"isIncludeDeadPiece"*/, -1, v2) == 1;
}


bool WarBoardEventScriptEntity__GetIsPlaySkillSe(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939897 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21926/*"isPlaySkillSe"*/);
    byte_5939897 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21926/*"isPlaySkillSe"*/, -1, v2) == 1;
}


int32_t WarBoardEventScriptEntity__GetIsStop(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593988E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21949/*"isStop"*/);
    byte_593988E = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21949/*"isStop"*/, 0, v2);
}


bool WarBoardEventScriptEntity__GetNoActorEffect(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939891 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23316/*"noActorEffect"*/);
    byte_5939891 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23316/*"noActorEffect"*/, -1, v2) == 1;
}


bool WarBoardEventScriptEntity__GetNoMoveLastPieceCamera(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593988B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23322/*"noMoveLastPieceCamera"*/);
    byte_593988B = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23322/*"noMoveLastPieceCamera"*/, -1, v2) == 1;
}


bool WarBoardEventScriptEntity__GetNoMoveTargetCamera(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593988A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23323/*"noMoveTargetCamera"*/);
    byte_593988A = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23323/*"noMoveTargetCamera"*/, -1, v2) == 1;
}


System_String_o *WarBoardEventScriptEntity__GetObjectName(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593988C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23443/*"objectName"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593988C = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_23443/*"objectName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *WarBoardEventScriptEntity__GetOverlayEffectMessage(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939889 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23615/*"overlayEffectMessage"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939889 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_23615/*"overlayEffectMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *WarBoardEventScriptEntity__GetOverlayEffectPrefabName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939888 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23616/*"overlayEffectPrefabName"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939888 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_23616/*"overlayEffectPrefabName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_Int32_array *WarBoardEventScriptEntity__GetPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5939884 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23819/*"pieceIndex"*/);
    byte_5939884 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_23819/*"pieceIndex"*/, 0);
}


System_Int32_array *WarBoardEventScriptEntity__GetPieceIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5939870 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23821/*"pieceIndexes"*/);
    byte_5939870 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_23821/*"pieceIndexes"*/, 0);
}


int32_t WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593988F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23838/*"playAfterCurrentAnim"*/);
    byte_593988F = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23838/*"playAfterCurrentAnim"*/, 0, v2);
}


System_String_o *WarBoardEventScriptEntity__GetSeName(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939877 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24402/*"seName"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939877 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_24402/*"seName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t WarBoardEventScriptEntity__GetSkillId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939872 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24709/*"skillId"*/);
    byte_5939872 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24709/*"skillId"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetSkillLv(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939873 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24711/*"skillLv"*/);
    byte_5939873 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24711/*"skillLv"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetSquareIndex(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939871 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24831/*"squareIndex"*/);
    byte_5939871 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24831/*"squareIndex"*/, -1, v2);
}


System_Int32_array *WarBoardEventScriptEntity__GetSquareIndexGroup(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t IntFromScript; // w0
  __int64 v5; // x1
  int32_t v6; // w19
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_5939883 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&StringLiteral_24834/*"squareIndexGroup"*/);
    byte_5939883 = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24834/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return 0;
  v6 = IntFromScript;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_object
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     (WarBoardSquareIndexGroupMaster_o *)Master_object,
                     v6,
                     HIDWORD(Instance[10].fields._items),
                     v10)) == 0 )
  {
    sub_21FFECC(Instance, v9);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *WarBoardEventScriptEntity__GetSquareIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t IntFromScript; // w0
  __int64 v5; // x1
  int32_t v6; // w20
  Il2CppObject *Master_object; // x19
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_5939880 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&StringLiteral_24834/*"squareIndexGroup"*/);
    sub_21FFC50(&StringLiteral_24836/*"squareIndexes"*/);
    byte_5939880 = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24834/*"squareIndexGroup"*/, -1, v2);
  if ( IntFromScript == -1 )
    return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_24836/*"squareIndexes"*/, 0);
  v6 = IntFromScript;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_object
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     (WarBoardSquareIndexGroupMaster_o *)Master_object,
                     v6,
                     HIDWORD(Instance[10].fields._items),
                     v10)) == 0 )
  {
    sub_21FFECC(Instance, v9);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *WarBoardEventScriptEntity__GetSquareIndicesGreedily(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *SquareIndexes; // x20
  const MethodInfo *v4; // x1
  int32_t SquareIndex; // w0
  __int64 v6; // x1
  long double v7; // q0
  int32_t v8; // w19
  __int64 v9; // x0
  __int64 v10; // x1
  _QWORD *v11; // x19
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0

  if ( (byte_5939881 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&int___TypeInfo);
    byte_5939881 = 1;
  }
  SquareIndexes = (System_Collections_ICollection_o *)WarBoardEventScriptEntity__GetSquareIndexes(this, method);
  if ( BasicHelper__IsNullOrEmpty(SquareIndexes, 0) )
  {
    SquareIndex = WarBoardEventScriptEntity__GetSquareIndex(this, v4);
    if ( SquareIndex < 1 )
    {
      v11 = Method_System_Array_Empty_int___;
      v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v12 )
      {
        sub_2237B54(Method_System_Array_Empty_int___);
        v12 = v11[7];
      }
      v13 = *(_QWORD *)(v12 + 16);
      if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
        v13 = sub_2237AF8(v7);
      if ( !*(_DWORD *)(v13 + 228) )
        *(__n128 *)&v7 = j_il2cpp_runtime_class_init_0(v13, v6);
      v14 = *(_QWORD *)(v11[7] + 16LL);
      if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
        v14 = sub_2237AF8(v7);
      return **(System_Int32_array ***)(v14 + 184);
    }
    else
    {
      v8 = SquareIndex;
      v9 = sub_21FFD10(int___TypeInfo, 1);
      if ( !v9 )
        sub_21FFECC(0, v10);
      SquareIndexes = (System_Collections_ICollection_o *)v9;
      if ( !*(_DWORD *)(v9 + 24) )
        sub_21FFED4(v9);
      *(_DWORD *)(v9 + 32) = v8;
    }
  }
  return (System_Int32_array *)SquareIndexes;
}


int32_t WarBoardEventScriptEntity__GetStageReinforcementsId(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939887 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24165/*"reinforcements"*/);
    byte_5939887 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24165/*"reinforcements"*/, -1, v2);
}


int32_t WarBoardEventScriptEntity__GetStatus(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593987B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24896/*"status"*/);
    byte_593987B = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24896/*"status"*/, -1, v2);
}


System_String_o *WarBoardEventScriptEntity__GetStringFromScript(
        WarBoardEventScriptEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  Il2CppObject *Item; // x0
  __int64 v11; // x2
  WarBoardEventScriptEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5939879 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5939879 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_21FFECC(0, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)key,
           (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || Item->klass == (Il2CppClass *)qword_594C0B8 )
    return defVal;
  sub_220024C(Item, qword_594C0B8, v11);
  return (System_String_o *)WarBoardEventScriptEntity__GetBossIdx(v13, v14);
}


float WarBoardEventScriptEntity__GetTargetAllCameraSize(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939895 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25222/*"targetAllCameraSize"*/);
    byte_5939895 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_25222/*"targetAllCameraSize"*/, 0.0, 0);
}


System_String_o *WarBoardEventScriptEntity__GetUiType(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_593987E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25511/*"type"*/);
    byte_593987E = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_25511/*"type"*/, defVal, 0);
}


bool WarBoardEventScriptEntity__IsDisp(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593987F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19447/*"disp"*/);
    byte_593987F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19447/*"disp"*/, 1, 0) == 1;
}


bool WarBoardEventScriptEntity__IsUseHoldReinforcements(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939890 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21955/*"isUseHoldReinforcements"*/);
    byte_5939890 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21955/*"isUseHoldReinforcements"*/, -1, v2) > 0;
}