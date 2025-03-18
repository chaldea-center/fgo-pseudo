void __fastcall WarBoardEventScriptEntity___ctor(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22FD4 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C22FD4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardEventScriptEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4C22FD3 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4C22FD3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_2FEE38C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_4C22FC0 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_16970/*"bit_waveEffect_{0}"*/, method);
    byte_4C22FC0 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16970/*"bit_waveEffect_{0}"*/, 0LL);
}


System_Int32_array_array *__fastcall WarBoardEventScriptEntity__GetActorEffectPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array_array *resValue; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C22FD1 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_16979/*"blacklist/top"*/, method);
    byte_4C22FD1 = 1;
  }
  resValue = 0LL;
  if ( EntityScriptUtil__TryGet2DimensionalIntArray(
         this->fields.script,
         (System_String_o *)StringLiteral_16979/*"blacklist/top"*/,
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
  if ( (byte_4C22FC1 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17042/*"box_g_lock"*/, method);
    byte_4C22FC1 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17042/*"box_g_lock"*/, 0LL);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetAnimationName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4C22FC8 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17109/*"btn_auto_off"*/, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v4);
    byte_4C22FC8 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_17109/*"btn_auto_off"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBossIdx(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FB5 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17717/*"column-index"*/, method);
    byte_4C22FB5 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17717/*"column-index"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBossProcessType(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FCE & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17718/*"column-name"*/, method);
    byte_4C22FCE = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_17718/*"column-name"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetBreakPointDamageType(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FBD & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_15887/*"_GlowOffset"*/, method);
    byte_4C22FBD = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_15887/*"_GlowOffset"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetChangeWinCondition(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FCF & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_18168/*"debug_update_user"*/, method);
    byte_4C22FCF = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18168/*"debug_update_user"*/, -1, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetEffect(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_4C22FB1 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19236/*"formation_framebg_5"*/, defVal);
    byte_4C22FB1 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19236/*"formation_framebg_5"*/, defVal, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetEffectId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FAF & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19285/*"freeShopReleaseDate"*/, method);
    byte_4C22FAF = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19285/*"freeShopReleaseDate"*/, -1, v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetEffectIds(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C22FB0 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19286/*"freeStone"*/, method);
    byte_4C22FB0 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_19286/*"freeStone"*/, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetForceId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FB8 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19922/*"img_bg_quick"*/, method);
    byte_4C22FB8 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19922/*"img_bg_quick"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetGroupId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FB7 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_20249/*"img_txt_remaining_"*/, method);
    byte_4C22FB7 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20249/*"img_txt_remaining_"*/, -1, v2);
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

  if ( (byte_4C22FB3 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1C3B764(&long_TypeInfo, v8);
    byte_4C22FB3 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1C3B9C0(Item, v10);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
  sub_1C3BC80(Item);
  return WarBoardEventScriptEntity__GetSkillId(v15, v16);
}


bool __fastcall WarBoardEventScriptEntity__GetIsIncludeDeadPiece(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FCD & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21218/*"mstAi"*/, method);
    byte_4C22FCD = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21218/*"mstAi"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetIsPlaySkillSe(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FD2 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21229/*"mstBanner"*/, method);
    byte_4C22FD2 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21229/*"mstBanner"*/, -1, v2) == 1;
}


int32_t __fastcall WarBoardEventScriptEntity__GetIsStop(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FC9 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21245/*"mstBoardMessageRelease"*/, method);
    byte_4C22FC9 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21245/*"mstBoardMessageRelease"*/, 0, v2);
}


bool __fastcall WarBoardEventScriptEntity__GetNoActorEffect(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FCC & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22537/*"renderer"*/, method);
    byte_4C22FCC = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22537/*"renderer"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetNoMoveLastPieceCamera(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FC6 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22542/*"repeat-x"*/, method);
    byte_4C22FC6 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22542/*"repeat-x"*/, -1, v2) == 1;
}


bool __fastcall WarBoardEventScriptEntity__GetNoMoveTargetCamera(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FC5 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22543/*"repeat-x | repeat-y | [ repeat | space | round | no-repeat ]{1,2}"*/, method);
    byte_4C22FC5 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22543/*"repeat-x | repeat-y | [ repeat | space | round | no-repeat ]{1,2}"*/, -1, v2) == 1;
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetObjectName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4C22FC7 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22655/*"royalblue"*/, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v4);
    byte_4C22FC7 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22655/*"royalblue"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetOverlayEffectMessage(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4C22FC4 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22828/*"setEnabled"*/, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v4);
    byte_4C22FC4 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22828/*"setEnabled"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetOverlayEffectPrefabName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4C22FC3 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22829/*"setEventBufferingEnabled"*/, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v4);
    byte_4C22FC3 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_22829/*"setEventBufferingEnabled"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetPieceIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C22FBF & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22997/*"sibling"*/, method);
    byte_4C22FBF = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22997/*"sibling"*/, 0LL);
}


System_Int32_array *__fastcall WarBoardEventScriptEntity__GetPieceIndexes(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C22FAB & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22999/*"signature"*/, method);
    byte_4C22FAB = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22999/*"signature"*/, 0LL);
}


int32_t __fastcall WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FCA & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23012/*"singleForceSvtId"*/, method);
    byte_4C22FCA = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23012/*"singleForceSvtId"*/, 0, v2);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetSeName(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4C22FB2 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23545/*"telnet"*/, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v4);
    byte_4C22FB2 = 1;
  }
  return WarBoardEventScriptEntity__GetStringFromScript(
           this,
           (System_String_o *)StringLiteral_23545/*"telnet"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSkillId(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FAD & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23834/*"unicode"*/, method);
    byte_4C22FAD = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23834/*"unicode"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSkillLv(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FAE & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23835/*"unicode-1-1-utf-7"*/, method);
    byte_4C22FAE = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23835/*"unicode-1-1-utf-7"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetSquareIndex(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FAC & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23945/*"unityads-idfi"*/, method);
    byte_4C22FAC = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23945/*"unityads-idfi"*/, -1, v2);
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

  if ( (byte_4C22FBE & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1C3B764(&StringLiteral_23948/*"unknown"*/, v7);
    byte_4C22FBE = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23948/*"unknown"*/, -1, v2);
  if ( IntFromScript == -1 )
    return 0LL;
  v9 = IntFromScript;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_object
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     (WarBoardSquareIndexGroupMaster_o *)Master_object,
                     v9,
                     HIDWORD(Instance[10].fields._items),
                     v13)) == 0LL )
  {
    sub_1C3B9C0(Instance, v12);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4C22FBB & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1C3B764(&StringLiteral_23948/*"unknown"*/, v7);
    sub_1C3B764(&StringLiteral_23950/*"unknown compressionFunction"*/, v8);
    byte_4C22FBB = 1;
  }
  IntFromScript = WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23948/*"unknown"*/, -1, v2);
  if ( IntFromScript == -1 )
    return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_23950/*"unknown compressionFunction"*/, 0LL);
  v10 = IntFromScript;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !Master_object
    || (Instance = WarBoardSquareIndexGroupMaster__GetStageList(
                     (WarBoardSquareIndexGroupMaster_o *)Master_object,
                     v10,
                     HIDWORD(Instance[10].fields._items),
                     v14)) == 0LL )
  {
    sub_1C3B9C0(Instance, v13);
  }
  return System_Collections_Generic_List_int___ToArray(
           Instance,
           (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4C22FBC & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_Empty_int___, method);
    sub_1C3B764(&int___TypeInfo, v3);
    byte_4C22FBC = 1;
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
        sub_1C8D69C(Method_System_Array_Empty_int___);
        v12 = v11[7];
      }
      v13 = *(_QWORD *)(v12 + 16);
      if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
        v13 = sub_1C8D640(inited);
      if ( !*(_DWORD *)(v13 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v13);
      v14 = *(_QWORD *)(v11[7] + 16LL);
      if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
        v14 = sub_1C8D640(inited);
      return **(System_Int32_array ***)(v14 + 184);
    }
    else
    {
      v8 = SquareIndex;
      v9 = sub_1C3B80C(int___TypeInfo, 1LL);
      if ( !v9 )
        sub_1C3B9C0(0LL, v10);
      SquareIndexes = (System_Collections_ICollection_o *)v9;
      if ( !*(_DWORD *)(v9 + 24) )
        sub_1C3B9C8(v9, v10);
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

  if ( (byte_4C22FC2 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23319/*"subscriptionPeriod"*/, method);
    byte_4C22FC2 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23319/*"subscriptionPeriod"*/, -1, v2);
}


int32_t __fastcall WarBoardEventScriptEntity__GetStatus(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FB6 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_24015/*"useEventDeckNo"*/, method);
    byte_4C22FB6 = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24015/*"useEventDeckNo"*/, -1, v2);
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

  if ( (byte_4C22FB4 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1C3B764(&string_TypeInfo, v8);
    byte_4C22FB4 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v11 = this->fields.script;
  if ( !v11 )
    sub_1C3B9C0(0LL, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v11,
           (Il2CppObject *)key,
           (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1C3BC80(Item);
  return (System_String_o *)WarBoardEventScriptEntity__GetBossIdx(v14, v15);
}


float __fastcall WarBoardEventScriptEntity__GetTargetAllCameraSize(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C22FD0 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_24346/*"welcomeDefault"*/, method);
    byte_4C22FD0 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_24346/*"welcomeDefault"*/, 0.0, 0LL);
}


System_String_o *__fastcall WarBoardEventScriptEntity__GetUiType(
        WarBoardEventScriptEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  if ( (byte_4C22FB9 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_24611/*"{0:D2}h{1:D2}m{2:D2}s"*/, defVal);
    byte_4C22FB9 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_24611/*"{0:D2}h{1:D2}m{2:D2}s"*/, defVal, 0LL);
}


bool __fastcall WarBoardEventScriptEntity__IsDisp(WarBoardEventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22FBA & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19002/*"f8"*/, method);
    byte_4C22FBA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19002/*"f8"*/, 1, 0LL) == 1;
}


bool __fastcall WarBoardEventScriptEntity__IsUseHoldReinforcements(
        WarBoardEventScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22FCB & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21249/*"mstBoxGachaBaseDetail"*/, method);
    byte_4C22FCB = 1;
  }
  return WarBoardEventScriptEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21249/*"mstBoxGachaBaseDetail"*/, -1, v2) > 0;
}