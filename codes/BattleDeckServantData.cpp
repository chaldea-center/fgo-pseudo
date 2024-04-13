void __fastcall BattleDeckServantData___ctor(BattleDeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData___ctor((DeckServantData_o *)this, 0LL);
}


bool __fastcall BattleDeckServantData__ExistKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42E77B7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20390/*"kill"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E77B7 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20390/*"kill"*/, v2);
}


bool __fastcall BattleDeckServantData__ExistsScript(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.enemyScript, 0LL);
}


int32_t __fastcall BattleDeckServantData__GetAiResetTiming(
        BattleDeckServantData_o *this,
        int32_t defTiming,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42E77D0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16496/*"aiResetTiming"*/, defTiming, (_DWORD)method, v3);
    byte_42E77D0 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16496/*"aiResetTiming"*/, defTiming, v3);
}


System_Int32_array *__fastcall BattleDeckServantData__GetAssumedEffectId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E77EE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16699/*"assumedEffectId"*/, (_DWORD)method, v2, v3);
    byte_42E77EE = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_16699/*"assumedEffectId"*/,
           0LL);
}


int32_t __fastcall BattleDeckServantData__GetChangePersonality(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77F9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17496/*"changePersonality"*/, (_DWORD)method, v2, v3);
    byte_42E77F9 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17496/*"changePersonality"*/, -1, v3);
}


int32_t __fastcall BattleDeckServantData__GetChangePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77F8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17497/*"changePolicy"*/, (_DWORD)method, v2, v3);
    byte_42E77F8 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17497/*"changePolicy"*/, -1, v3);
}


int32_t __fastcall BattleDeckServantData__GetDefShiftPosition(
        BattleDeckServantData_o *this,
        int64_t defVal,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3

  if ( (byte_42E77D9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_GetValue_long___, defVal, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_22399/*"shiftPosition"*/, v6, v7, v8);
    byte_42E77D9 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_22399/*"shiftPosition"*/,
           defVal,
           (const MethodInfo_1AD8984 *)Method_BasicHelper_GetValue_long___);
}


int32_t __fastcall BattleDeckServantData__GetDispBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77F4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18253/*"dispBreakShift"*/, (_DWORD)method, v2, v3);
    byte_42E77F4 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18253/*"dispBreakShift"*/, 0, v3);
}


int32_t __fastcall BattleDeckServantData__GetDispLimitCnt(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77F6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18256/*"dispLimitCount"*/, (_DWORD)method, v2, v3);
    byte_42E77F6 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_18256/*"dispLimitCount"*/, -1, v3);
}


System_Int32_array *__fastcall BattleDeckServantData__GetDisplayChangeSkillIdArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7800 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18254/*"dispChangeSkillIds"*/, (_DWORD)method, v2, v3);
    byte_42E7800 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_18254/*"dispChangeSkillIds"*/,
           0LL);
}


int32_t __fastcall BattleDeckServantData__GetFollowerType(
        BattleDeckServantData_o *this,
        int32_t oldFollowerType,
        const MethodInfo *method)
{
  if ( this->fields.followerType < 0 )
    return oldFollowerType;
  else
    return this->fields.followerType;
}


int32_t __fastcall BattleDeckServantData__GetHideStatePersonality(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77FE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19383/*"hidePersonality"*/, (_DWORD)method, v2, v3);
    byte_42E77FE = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19383/*"hidePersonality"*/, 0, v3);
}


int32_t __fastcall BattleDeckServantData__GetHideStatePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77FD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19384/*"hidePolicy"*/, (_DWORD)method, v2, v3);
    byte_42E77FD = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19384/*"hidePolicy"*/, 0, v3);
}


int32_t __fastcall BattleDeckServantData__GetHideStateSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77FF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19381/*"hideAttri"*/, (_DWORD)method, v2, v3);
    byte_42E77FF = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19381/*"hideAttri"*/, 0, v3);
}


int32_t __fastcall BattleDeckServantData__GetImageSvtId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77F5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19662/*"imageSvtId"*/, (_DWORD)method, v2, v3);
    byte_42E77F5 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_19662/*"imageSvtId"*/, 0, v3);
}


int32_t __fastcall BattleDeckServantData__GetKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77B6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20390/*"kill"*/, (_DWORD)method, v2, v3);
    byte_42E77B6 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20390/*"kill"*/, 0, v3);
}


int32_t __fastcall BattleDeckServantData__GetNoSkipDeadFirstId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77ED & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9691/*"NoSkipDeadFirstId"*/, (_DWORD)method, v2, v3);
    byte_42E77ED = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_9691/*"NoSkipDeadFirstId"*/, 0, v3);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwriteBreakShiftVoiceName(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E7801 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21634/*"overwriteBreakShiftVoice"*/, (_DWORD)method, v2, v3);
    byte_42E7801 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_21634/*"overwriteBreakShiftVoice"*/, 0LL, v3);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwritePersonality(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77FB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21655/*"overwritePersonality"*/, (_DWORD)method, v2, v3);
    byte_42E77FB = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_21655/*"overwritePersonality"*/, 0LL, v3);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwritePolicy(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77FA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21656/*"overwritePolicy"*/, (_DWORD)method, v2, v3);
    byte_42E77FA = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_21656/*"overwritePolicy"*/, 0LL, v3);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwriteSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77FC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21632/*"overwriteAttri"*/, (_DWORD)method, v2, v3);
    byte_42E77FC = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_21632/*"overwriteAttri"*/, 0LL, v3);
}


System_String_array *__fastcall BattleDeckServantData__GetScriptStringArrayParam(
        BattleDeckServantData_o *this,
        System_String_o *key,
        System_String_array *defVal,
        const MethodInfo *method)
{
  System_String_array *v4; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v29; // x1
  __int64 v30; // x11
  System_Collections_Generic_List_object__c *v31; // x10
  System_Collections_Generic_List_string__o *v32; // x20
  void *v33; // x0
  struct BattleDeckServantData___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__75_0; // x19
  Il2CppObject *v36; // x21
  struct BattleDeckServantData___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = defVal;
  if ( (byte_42E77EF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__string___ctor__, (_DWORD)key, (_DWORD)defVal, method);
    sub_B5D5C4(&System_Converter_object__string__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__75_0__, v22, v23, v24);
    sub_B5D5C4(&BattleDeckServantData___c_TypeInfo, v25, v26, v27);
    byte_42E77EF = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( value )
      {
        v30 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
        if ( *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v30 )
        {
          v31 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v30 - 1];
          v32 = v31 == System_Collections_Generic_List_object__TypeInfo
              ? (System_Collections_Generic_List_string__o *)value
              : 0LL;
          if ( v31 == System_Collections_Generic_List_object__TypeInfo )
          {
            v33 = BattleDeckServantData___c_TypeInfo;
            if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
              v33 = BattleDeckServantData___c_TypeInfo;
            }
            static_fields = (struct BattleDeckServantData___c_StaticFields *)*((_QWORD *)v33 + 23);
            _9__75_0 = (System_Converter_string__string__o *)static_fields->__9__75_0;
            if ( !_9__75_0 )
            {
              if ( (*((_BYTE *)v33 + 307) & 4) != 0 && !*((_DWORD *)v33 + 56) )
              {
                j_il2cpp_runtime_class_init_0(v33);
                static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
              }
              v36 = (Il2CppObject *)static_fields->__9;
              _9__75_0 = (System_Converter_string__string__o *)sub_B5D694(System_Converter_object__string__TypeInfo);
              System_Converter_string__string____ctor(
                _9__75_0,
                v36,
                Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__75_0__,
                (const MethodInfo_23F738C *)Method_System_Converter_object__string___ctor__);
              v37 = BattleDeckServantData___c_TypeInfo->static_fields;
              v37->__9__75_0 = (struct System_Converter_object__string__o *)_9__75_0;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v37->__9__75_0,
                (System_Int32_array **)_9__75_0,
                v38,
                v39,
                v40,
                v41,
                v42,
                v43);
            }
            if ( !v32
              || (v33 = System_Collections_Generic_List_string___ConvertAll_string_(
                          v32,
                          (System_Converter_T__TOutput__o *)_9__75_0,
                          (const MethodInfo_192E1C0 *)Method_System_Collections_Generic_List_object__ConvertAll_string___)) == 0LL )
            {
              sub_B5D69C(v33, v29);
            }
            return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
          }
        }
      }
    }
  }
  return v4;
}


System_String_o *__fastcall BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
        BattleDeckServantData_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42E77F0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23088/*"treasureDeviceErrorCardSelectVoiceSe"*/, (_DWORD)defVal, (_DWORD)method, v3);
    byte_42E77F0 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_23088/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal, v3);
}


System_String_array *__fastcall BattleDeckServantData__GetTDErrorVoiceSeArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77F1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23089/*"treasureDeviceErrorStatusVoiceSeList"*/, (_DWORD)method, v2, v3);
    byte_42E77F1 = 1;
  }
  return BattleDeckServantData__GetScriptStringArrayParam(this, (System_String_o *)StringLiteral_23089/*"treasureDeviceErrorStatusVoiceSeList"*/, 0LL, v3);
}


int32_t __fastcall BattleDeckServantData__GetVoicePatternId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77CF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23488/*"voicePatternId"*/, (_DWORD)method, v2, v3);
    byte_42E77CF = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23488/*"voicePatternId"*/, -1, v3);
}


bool __fastcall BattleDeckServantData__IsChangeDropItemByShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42E77DC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20208/*"isSkillShiftInfo"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E77DC = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20208/*"isSkillShiftInfo"*/, v2);
}


bool __fastcall BattleDeckServantData__IsDeadEnergy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77B5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20390/*"kill"*/, (_DWORD)method, v2, v3);
    byte_42E77B5 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20390/*"kill"*/, 5, v3);
}


bool __fastcall BattleDeckServantData__IsHideClassSkillNpcFollower(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42E77F3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19382/*"hideClassSkill"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E77F3 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19382/*"hideClassSkill"*/, v2);
}


bool __fastcall BattleDeckServantData__IsLateUpdatePopup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42E77F2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20190/*"isLateUpdatePopup"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E77F2 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20190/*"isLateUpdatePopup"*/, v2);
}


bool __fastcall BattleDeckServantData__IsLeaveEventJoin(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserServantEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E77E6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E77E6 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
    &entity,
    this->fields.userSvtId,
    (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return entity && UserServantEntity__IsWithdrawal(entity, 0LL);
}


bool __fastcall BattleDeckServantData__IsNoAutoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77EC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9683/*"NoAutoSkipDead"*/, (_DWORD)method, v2, v3);
    byte_42E77EC = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9683/*"NoAutoSkipDead"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__IsNoMotionOnBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E7802 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9687/*"NoMotion"*/, (_DWORD)method, v2, v3);
    byte_42E7802 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9687/*"NoMotion"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__IsNoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77EB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9690/*"NoSkipDead"*/, (_DWORD)method, v2, v3);
    byte_42E77EB = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9690/*"NoSkipDead"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__IsNoVoice(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77B9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21382/*"noVoice"*/, (_DWORD)method, v2, v3);
    byte_42E77B9 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21382/*"noVoice"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__IsShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42E77F7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20207/*"isShadow"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E77F7 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20207/*"isShadow"*/, v2);
}


System_Nullable_bool__o __fastcall BattleDeckServantData__IsVoiceEnabledOnBreakShift(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo *v8; // x3
  int32_t Script; // w0
  __int16 *v10; // x0
  bool v11; // w1
  __int16 v13[2]; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E7803 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Nullable_bool___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18556/*"enableBreakShiftVoice"*/, v5, v6, v7);
    byte_42E7803 = 1;
  }
  v13[0] = 0;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_18556/*"enableBreakShiftVoice"*/, v2) )
  {
    Script = BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18556/*"enableBreakShiftVoice"*/, 1, v8);
    if ( !Script )
    {
      v10 = v13;
      v11 = 0;
      goto LABEL_9;
    }
    if ( Script == 1 )
    {
      v10 = v13;
      v11 = 1;
LABEL_9:
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v10,
        v11,
        (const MethodInfo_2347ED0 *)Method_System_Nullable_bool___ctor__);
      return (System_Nullable_bool__o)v13[0];
    }
  }
  v13[0] = 0;
  return (System_Nullable_bool__o)v13[0];
}


bool __fastcall BattleDeckServantData__TryGetAddFieldMotionIds(
        BattleDeckServantData_o *this,
        System_Int32_array **fieldMotionIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Int32_array *IntArray; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42E77E8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18948/*"fieldMotionIds"*/, (_DWORD)fieldMotionIds, (_DWORD)method, v3);
    byte_42E77E8 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.enemyScript, (System_String_o *)StringLiteral_18948/*"fieldMotionIds"*/, 0LL, 0LL);
  *fieldMotionIds = IntArray;
  sub_B5D560((BattleServantConfConponent_o *)fieldMotionIds, (System_Int32_array **)IntArray, v7, v8, v9, v10, v11, v12);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntArray, 0LL);
}


bool __fastcall BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
        BattleDeckServantData_o *this,
        int32_t *uniqueCameraId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t IntValue; // w0

  if ( (byte_42E77E9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16820/*"baseUniqueCameraId"*/, (_DWORD)uniqueCameraId, (_DWORD)method, v3);
    byte_42E77E9 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_16820/*"baseUniqueCameraId"*/, 0, 0LL);
  *uniqueCameraId = IntValue;
  return IntValue > 0;
}


bool __fastcall BattleDeckServantData__TryGetOverwriteFov(
        BattleDeckServantData_o *this,
        float *fov,
        const MethodInfo *method)
{
  __int64 v3; // x3
  float FloatValue; // s0

  if ( (byte_42E77E7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19091/*"fov"*/, (_DWORD)fov, (_DWORD)method, v3);
    byte_42E77E7 = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(
                 this->fields.enemyScript,
                 (System_String_o *)StringLiteral_19091/*"fov"*/,
                 0.0,
                 0LL);
  *fov = FloatValue;
  return FloatValue > 0.0;
}


bool __fastcall BattleDeckServantData__checkEntryIndex(
        BattleDeckServantData_o *this,
        int32_t entryIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v6; // x3

  if ( (byte_42E77DE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18608/*"entryIndex"*/, entryIndex, (_DWORD)method, v3);
    byte_42E77DE = 1;
  }
  return !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_18608/*"entryIndex"*/, method)
      || BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_18608/*"entryIndex"*/, entryIndex + 1, v6);
}


bool __fastcall BattleDeckServantData__checkScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  BattleDeckServantData_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_42E77D1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)key, val, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8, v9);
    sub_B5D5C4(&long_TypeInfo, v10, v11, v12);
    byte_42E77D1 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)key,
                                                                                       (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B5D69C(Item, v14);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LOBYTE(enemyScript) = *(_DWORD *)j_il2cpp_object_unbox_0(Item) == val;
      }
      else
      {
        v16 = (BattleDeckServantData_o *)sub_B5D990(Item);
        LOBYTE(enemyScript) = BattleDeckServantData__isDeadStand(v16, v17);
      }
    }
    else
    {
      LOBYTE(enemyScript) = 0;
    }
  }
  return (char)enemyScript;
}


int32_t __fastcall BattleDeckServantData__getBillBoardGroup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77C9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16920/*"billBoardGroup"*/, (_DWORD)method, v2, v3);
    byte_42E77C9 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16920/*"billBoardGroup"*/, -1, v3);
}


int32_t __fastcall BattleDeckServantData__getChangeAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77C7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17484/*"changeAttri"*/, (_DWORD)method, v2, v3);
    byte_42E77C7 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17484/*"changeAttri"*/, 0, v3);
}


System_Int32_array *__fastcall BattleDeckServantData__getChangeList(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v36; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v38; // x19
  BattleDeckServantData___c_c *v39; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__54_0; // x20
  __int64 v42; // x11
  __int64 v43; // x9
  Il2CppObject *v45; // x21
  struct BattleDeckServantData___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_42E77DB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Converter_object__int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v11, v12, v13);
    sub_B5D5C4(&int___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_BattleDeckServantData___c__getChangeList_b__54_0__, v26, v27, v28);
    sub_B5D5C4(&BattleDeckServantData___c_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_17483/*"change"*/, v32, v33, v34);
    byte_42E77DB = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_17483/*"change"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_24;
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                             Item,
                                                                             (System_Type_o *)StringLiteral_17483/*"change"*/,
                                                                             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v38 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Item;
  v39 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v39 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__54_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__54_0;
  v36 = System_Collections_Generic_List_object__TypeInfo;
  if ( v38 )
  {
    v42 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v38->klass->_2.bitflags2 + 1) < (unsigned int)v42
      || (System_Collections_Generic_List_object__c *)v38->klass->_2.typeHierarchy[v42 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_16;
    }
  }
  if ( !_9__54_0 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__54_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__54_0,
      v45,
      Method_BattleDeckServantData___c__getChangeList_b__54_0__,
      (const MethodInfo_23F6FAC *)Method_System_Converter_object__int___ctor__);
    v46 = BattleDeckServantData___c_TypeInfo->static_fields;
    v46->__9__54_0 = (struct System_Converter_object__int__o *)_9__54_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v46->__9__54_0,
      (System_Int32_array **)_9__54_0,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    if ( v38 )
      goto LABEL_22;
LABEL_24:
    sub_B5D69C(Item, v36);
  }
  if ( !v38 )
    goto LABEL_24;
  v43 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v38->klass->_2.bitflags2 + 1) < (unsigned int)v43
    || (System_Collections_Generic_List_object__c *)v38->klass->_2.typeHierarchy[v43 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B5D990(v38);
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  }
LABEL_22:
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                             v38,
                                                                             (System_Converter_T__TOutput__o *)_9__54_0,
                                                                             (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool __fastcall BattleDeckServantData__getEnableNpInfo(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  System_String_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_42E77E1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21432/*"npInfoEnable"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E77E1 = 1;
  }
  v5 = (System_String_o *)StringLiteral_21432/*"npInfoEnable"*/;
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21432/*"npInfoEnable"*/, v2)
      && BattleDeckServantData__checkScript(this, v5, 1, v6);
}


int32_t __fastcall BattleDeckServantData__getEnemyNameEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77C8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18597/*"enemyNameEffect"*/, (_DWORD)method, v2, v3);
    byte_42E77C8 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18597/*"enemyNameEffect"*/, 0, v3);
}


System_String_o *__fastcall BattleDeckServantData__getEnemyTreasureDeviceVoiceId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77C6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23093/*"treasureDeviceVoiceId"*/, (_DWORD)method, v2, v3);
    byte_42E77C6 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_23093/*"treasureDeviceVoiceId"*/, 0LL, v3);
}


int32_t __fastcall BattleDeckServantData__getHpBarType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77BE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19420/*"hpBarType"*/, (_DWORD)method, v2, v3);
    byte_42E77BE = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19420/*"hpBarType"*/, 0, v3);
}


bool __fastcall BattleDeckServantData__getIsForceDropItem(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_42E77DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19040/*"forceDropItem"*/, v5, v6, v7);
    byte_42E77DD = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
                            (System_Xml_XmlQualifiedName_o *)StringLiteral_19040/*"forceDropItem"*/,
                            (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


int32_t __fastcall BattleDeckServantData__getMultiTargetBattleDeadChangePos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77CE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18133/*"deadChangePos"*/, (_DWORD)method, v2, v3);
    byte_42E77CE = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18133/*"deadChangePos"*/, -1, v3);
}


int32_t __fastcall BattleDeckServantData__getNpCharge(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  System_String_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_42E77E2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21431/*"npCharge"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E77E2 = 1;
  }
  v5 = (System_String_o *)StringLiteral_21431/*"npCharge"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21431/*"npCharge"*/, v2) )
    return BattleDeckServantData__getScript(this, v5, -1, v6);
  else
    return -1;
}


int32_t __fastcall BattleDeckServantData__getOverWriteSvtVoiceIdOld(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77C4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22777/*"svtVoiceId"*/, (_DWORD)method, v2, v3);
    byte_42E77C4 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22777/*"svtVoiceId"*/, 0, v3);
}


int32_t __fastcall BattleDeckServantData__getOverwriteSvtVoiceId(
        BattleDeckServantData_o *this,
        int32_t battleSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  ServantChangeEntity_o *v14; // x0
  const MethodInfo *v15; // x1
  ServantChangeEntity_o *v16; // x20
  const MethodInfo *v17; // x4
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E77E5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantChangeMaster___, battleSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_22783/*"svt_voice_id"*/, v9, v10, v11);
    byte_42E77E5 = 1;
  }
  value = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  v14 = ServantChangeMaster__TrueNameEntity((ServantChangeMaster_o *)Instance, battleSvtId, 0LL);
  if ( v14
    && (v16 = v14, ServantChangeEntity__IsEnable(v14, 0LL))
    && BattleDeckServantData__tryGetSvtChangeInt(
         this,
         (System_String_o *)StringLiteral_22783/*"svt_voice_id"*/,
         v16->fields.priority,
         &value,
         v17) )
  {
    return value;
  }
  else
  {
    return BattleDeckServantData__getOverWriteSvtVoiceIdOld(this, v15);
  }
}


int32_t __fastcall BattleDeckServantData__getRaidId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77BB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21967/*"raid"*/, (_DWORD)method, v2, v3);
    byte_42E77BB = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_21967/*"raid"*/, 0, v3);
}


int32_t __fastcall BattleDeckServantData__getRoleType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return this->fields.roleType;
}


int32_t __fastcall BattleDeckServantData__getScale(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77C3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22193/*"scale"*/, (_DWORD)method, v2, v3);
    byte_42E77C3 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22193/*"scale"*/, 100, v3);
}


int32_t __fastcall BattleDeckServantData__getScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  BattleDeckServantData_o *v17; // x0
  const MethodInfo *v18; // x1

  v4 = defVal;
  if ( (byte_42E77D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)key, defVal, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8, v9);
    sub_B5D5C4(&long_TypeInfo, v10, v11, v12);
    byte_42E77D4 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)key,
                                                                                   (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(Item, v14);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  v17 = (BattleDeckServantData_o *)sub_B5D990(Item);
  return BattleDeckServantData__ExistKillType(v17, v18);
}


int32_t __fastcall BattleDeckServantData__getScriptInt(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v11; // x1
  BattleDeckServantData_o *v13; // x0
  const MethodInfo *v14; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = defVal;
  if ( (byte_42E77D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, (_DWORD)key, defVal, method);
    sub_B5D5C4(&long_TypeInfo, v7, v8, v9);
    byte_42E77D6 = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return v4;
  }
  if ( !value )
    sub_B5D69C(0LL, v11);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value);
  v13 = (BattleDeckServantData_o *)sub_B5D990(value);
  return BattleDeckServantData__getUniqueID(v13, v14);
}


System_String_o *__fastcall BattleDeckServantData__getScriptStr(
        BattleDeckServantData_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  BattleDeckServantData_o *v18; // x0
  const MethodInfo *v19; // x1

  v4 = defVal;
  if ( (byte_42E77D5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)defVal,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8, v9);
    sub_B5D5C4(&string_TypeInfo, v10, v11, v12);
    byte_42E77D5 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  v15 = this->fields.enemyScript;
  if ( !v15 )
    sub_B5D69C(0LL, v14);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15,
           (System_Type_o *)key,
           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v4 = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return v4;
  v18 = (BattleDeckServantData_o *)sub_B5D990(Item);
  return (System_String_o *)BattleDeckServantData__getChangeAttri(v18, v19);
}


int32_t __fastcall BattleDeckServantData__getSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77C1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22262/*"sendDamageForSuperBossId"*/, (_DWORD)method, v2, v3);
    byte_42E77C1 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22262/*"sendDamageForSuperBossId"*/, 0, v3);
}


System_Int32_array *__fastcall BattleDeckServantData__getShiftClearBuffIndiv(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v36; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v38; // x19
  BattleDeckServantData___c_c *v39; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__53_0; // x20
  __int64 v42; // x11
  __int64 v43; // x9
  Il2CppObject *v45; // x21
  struct BattleDeckServantData___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_42E77DA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Converter_object__int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v11, v12, v13);
    sub_B5D5C4(&int___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__, v26, v27, v28);
    sub_B5D5C4(&BattleDeckServantData___c_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_22398/*"shiftClear"*/, v32, v33, v34);
    byte_42E77DA = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22398/*"shiftClear"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_24;
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                             Item,
                                                                             (System_Type_o *)StringLiteral_22398/*"shiftClear"*/,
                                                                             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v38 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Item;
  v39 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v39 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__53_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__53_0;
  v36 = System_Collections_Generic_List_object__TypeInfo;
  if ( v38 )
  {
    v42 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v38->klass->_2.bitflags2 + 1) < (unsigned int)v42
      || (System_Collections_Generic_List_object__c *)v38->klass->_2.typeHierarchy[v42 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_16;
    }
  }
  if ( !_9__53_0 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__53_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__53_0,
      v45,
      Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__,
      (const MethodInfo_23F6FAC *)Method_System_Converter_object__int___ctor__);
    v46 = BattleDeckServantData___c_TypeInfo->static_fields;
    v46->__9__53_0 = (struct System_Converter_object__int__o *)_9__53_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v46->__9__53_0,
      (System_Int32_array **)_9__53_0,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    if ( v38 )
      goto LABEL_22;
LABEL_24:
    sub_B5D69C(Item, v36);
  }
  if ( !v38 )
    goto LABEL_24;
  v43 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v38->klass->_2.bitflags2 + 1) < (unsigned int)v43
    || (System_Collections_Generic_List_object__c *)v38->klass->_2.typeHierarchy[v43 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B5D990(v38);
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  }
LABEL_22:
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                             v38,
                                                                             (System_Converter_T__TOutput__o *)_9__53_0,
                                                                             (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleDeckServantData__getShiftList(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v36; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v38; // x19
  BattleDeckServantData___c_c *v39; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__51_0; // x20
  __int64 v42; // x11
  __int64 v43; // x9
  Il2CppObject *v45; // x21
  struct BattleDeckServantData___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_42E77D8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Converter_object__int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v11, v12, v13);
    sub_B5D5C4(&int___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_BattleDeckServantData___c__getShiftList_b__51_0__, v26, v27, v28);
    sub_B5D5C4(&BattleDeckServantData___c_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_22396/*"shift"*/, v32, v33, v34);
    byte_42E77D8 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22396/*"shift"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_24;
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                             Item,
                                                                             (System_Type_o *)StringLiteral_22396/*"shift"*/,
                                                                             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v38 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Item;
  v39 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v39 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__51_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__51_0;
  v36 = System_Collections_Generic_List_object__TypeInfo;
  if ( v38 )
  {
    v42 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v38->klass->_2.bitflags2 + 1) < (unsigned int)v42
      || (System_Collections_Generic_List_object__c *)v38->klass->_2.typeHierarchy[v42 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_16;
    }
  }
  if ( !_9__51_0 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__51_0,
      v45,
      Method_BattleDeckServantData___c__getShiftList_b__51_0__,
      (const MethodInfo_23F6FAC *)Method_System_Converter_object__int___ctor__);
    v46 = BattleDeckServantData___c_TypeInfo->static_fields;
    v46->__9__51_0 = (struct System_Converter_object__int__o *)_9__51_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v46->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    if ( v38 )
      goto LABEL_22;
LABEL_24:
    sub_B5D69C(Item, v36);
  }
  if ( !v38 )
    goto LABEL_24;
  v43 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v38->klass->_2.bitflags2 + 1) < (unsigned int)v43
    || (System_Collections_Generic_List_object__c *)v38->klass->_2.typeHierarchy[v43 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B5D990(v38);
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  }
LABEL_22:
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                             v38,
                                                                             (System_Converter_T__TOutput__o *)_9__51_0,
                                                                             (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall BattleDeckServantData__getSummonNpcId(
        BattleDeckServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v34; // x1
  void *Item; // x0
  BattleDeckServantData___c_c *v36; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__50_0; // x21
  __int64 v39; // x11
  __int64 v40; // x9
  Il2CppObject *v42; // x22
  struct BattleDeckServantData___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int32_t v50; // w8
  __int64 v51; // x0

  if ( (byte_42E77D7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__int___ctor__, index, (_DWORD)method, v3);
    sub_B5D5C4(&System_Converter_object__int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__, v24, v25, v26);
    sub_B5D5C4(&BattleDeckServantData___c_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_17387/*"call"*/, v30, v31, v32);
    byte_42E77D7 = 1;
  }
  if ( index == -1 )
    return this->fields.npcId;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_17387/*"call"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return -1;
  }
  Item = this->fields.enemyScript;
  if ( !Item )
    goto LABEL_30;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
           (System_Type_o *)StringLiteral_17387/*"call"*/,
           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  this = (BattleDeckServantData_o *)Item;
  v36 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v36 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__50_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__50_0;
  v34 = System_Collections_Generic_List_object__TypeInfo;
  if ( this )
  {
    v39 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v39
      || (System_Collections_Generic_List_object__c *)this->klass->_2.typeHierarchy[v39 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_17;
    }
  }
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__50_0,
      v42,
      Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__,
      (const MethodInfo_23F6FAC *)Method_System_Converter_object__int___ctor__);
    v43 = BattleDeckServantData___c_TypeInfo->static_fields;
    v43->__9__50_0 = (struct System_Converter_object__int__o *)_9__50_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v43->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    if ( this )
      goto LABEL_23;
LABEL_30:
    sub_B5D69C(Item, v34);
  }
  if ( !this )
    goto LABEL_30;
  v40 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v40
    || (System_Collections_Generic_List_object__c *)this->klass->_2.typeHierarchy[v40 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_17:
    sub_B5D990(this);
    return this->fields.npcId;
  }
LABEL_23:
  Item = System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
           (System_Collections_Generic_List_BattleActionData_HealData__o *)this,
           (System_Converter_T__TOutput__o *)_9__50_0,
           (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_30;
  Item = System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !Item )
    goto LABEL_30;
  v50 = *((_DWORD *)Item + 6);
  if ( v50 <= index )
    return -1;
  if ( v50 <= (unsigned int)index )
  {
    v51 = sub_B5D6C8(Item);
    sub_B5D668(v51, 0LL);
  }
  return *((_DWORD *)Item + index + 8);
}


int32_t __fastcall BattleDeckServantData__getSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77BD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22751/*"superBoss"*/, (_DWORD)method, v2, v3);
    byte_42E77BD = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22751/*"superBoss"*/, 0, v3);
}


System_String_o *__fastcall BattleDeckServantData__getTDName(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  System_String_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_42E77DF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23091/*"treasureDeviceName"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E77DF = 1;
  }
  v5 = (System_String_o *)StringLiteral_23091/*"treasureDeviceName"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23091/*"treasureDeviceName"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v5, 0LL, v6);
  else
    return 0LL;
}


System_String_o *__fastcall BattleDeckServantData__getTDRuby(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  System_String_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_42E77E0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23092/*"treasureDeviceRuby"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E77E0 = 1;
  }
  v5 = (System_String_o *)StringLiteral_23092/*"treasureDeviceRuby"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23092/*"treasureDeviceRuby"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v5, 0LL, v6);
  else
    return 0LL;
}


int32_t __fastcall BattleDeckServantData__getUniqueID(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return this->fields.uniqueId;
}


int64_t __fastcall BattleDeckServantData__getUserServantID(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return this->fields.userSvtId;
}


bool __fastcall BattleDeckServantData__isAddition(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42E77C5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20174/*"isAddition"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E77C5 = 1;
  }
  return BattleDeckServantData__isInfoScript(this, (System_String_o *)StringLiteral_20174/*"isAddition"*/, v2);
}


bool __fastcall BattleDeckServantData__isAppear(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77B8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16574/*"appear"*/, (_DWORD)method, v2, v3);
    byte_42E77B8 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_16574/*"appear"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__isDeadEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77B3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20390/*"kill"*/, (_DWORD)method, v2, v3);
    byte_42E77B3 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20390/*"kill"*/, 3, v3);
}


bool __fastcall BattleDeckServantData__isDeadStand(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77B2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20390/*"kill"*/, (_DWORD)method, v2, v3);
    byte_42E77B2 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20390/*"kill"*/, 2, v3);
}


bool __fastcall BattleDeckServantData__isDeadWait(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77B4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20390/*"kill"*/, (_DWORD)method, v2, v3);
    byte_42E77B4 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20390/*"kill"*/, 4, v3);
}


bool __fastcall BattleDeckServantData__isEscape(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77B1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20390/*"kill"*/, (_DWORD)method, v2, v3);
    byte_42E77B1 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20390/*"kill"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__isHideShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77EA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20188/*"isHideShadow"*/, (_DWORD)method, v2, v3);
    byte_42E77EA = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20188/*"isHideShadow"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__isInfoScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *infoScript; // x0

  if ( (byte_42E77D3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42E77D3 = 1;
  }
  infoScript = this->fields.infoScript;
  if ( infoScript )
    LOBYTE(infoScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)infoScript,
                           (System_Xml_XmlQualifiedName_o *)key,
                           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)infoScript;
}


bool __fastcall BattleDeckServantData__isLeader(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77C2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20458/*"leader"*/, (_DWORD)method, v2, v3);
    byte_42E77C2 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20458/*"leader"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__isMultiTargetBattleStartPos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77CD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22585/*"startPos"*/, (_DWORD)method, v2, v3);
    byte_42E77CD = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22585/*"startPos"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__isMultiTargetCore(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77CA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21265/*"multiTargetCore"*/, (_DWORD)method, v2, v3);
    byte_42E77CA = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21265/*"multiTargetCore"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__isMultiTargetUnder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77CC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21266/*"multiTargetUnder"*/, (_DWORD)method, v2, v3);
    byte_42E77CC = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21266/*"multiTargetUnder"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__isMultiTargetUp(BattleDeckServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E77CB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21267/*"multiTargetUp"*/, (_DWORD)method, v2, v3);
    byte_42E77CB = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21267/*"multiTargetUp"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__isRaid(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42E77BA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21967/*"raid"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E77BA = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21967/*"raid"*/, v2);
}


bool __fastcall BattleDeckServantData__isScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_42E77D2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42E77D2 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
                            (System_Xml_XmlQualifiedName_o *)key,
                            (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


bool __fastcall BattleDeckServantData__isSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42E77C0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22262/*"sendDamageForSuperBossId"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E77C0 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22262/*"sendDamageForSuperBossId"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBoss(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42E77BC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22751/*"superBoss"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E77BC = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22751/*"superBoss"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBossUi(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42E77BF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22753/*"superBossUi"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E77BF = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22753/*"superBossUi"*/, v2);
}


bool __fastcall BattleDeckServantData__tryGetSvtChange(
        BattleDeckServantData_o *this,
        System_Collections_Generic_Dictionary_string__object__o **dict,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Xml_XmlQualifiedName_o *v19; // x21
  __int64 v20; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x11
  System_Collections_Generic_Dictionary_string__object__o *v30; // x9
  System_Int32_array **v32; // x1
  __int64 v33; // x10

  if ( (byte_42E77E3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)dict,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_22779/*"svt_change"*/, v16, v17, v18);
    byte_42E77E3 = 1;
  }
  v19 = (System_Xml_XmlQualifiedName_o *)StringLiteral_22779/*"svt_change"*/;
  *dict = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)dict, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          v19,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
LABEL_20:
    sub_B5D69C(enemyScript, v20);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)enemyScript,
           (System_Type_o *)v19,
           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    v29 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v29 )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v29 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v30 = (System_Collections_Generic_Dictionary_string__object__o *)Item;
      else
        v30 = 0LL;
    }
    else
    {
      v30 = 0LL;
    }
    *dict = v30;
    v33 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v33 )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v33 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v32 = (System_Int32_array **)Item;
      else
        v32 = 0LL;
    }
    else
    {
      v32 = 0LL;
    }
  }
  else
  {
    v32 = 0LL;
    *dict = 0LL;
  }
  sub_B5D560((BattleServantConfConponent_o *)dict, v32, v23, v24, v25, v26, v27, v28);
  return *dict != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleDeckServantData__tryGetSvtChangeInt(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t priority,
        int32_t *value,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  __int64 v39; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *Item; // x0
  __int64 v41; // x10
  System_Collections_Generic_List_object__c *v42; // x9
  Il2CppObject *current; // x21
  __int64 v44; // x9
  UnityEngine_Purchasing_IStoreExtension_o *v45; // x0
  __int64 v46; // x1
  UnityEngine_Purchasing_IStoreExtension_o *v47; // x0
  __int64 v48; // x1
  void *v49; // x0
  int v50; // w1
  __int64 v51; // x20
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_string__object__o *dict; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_42E77E4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      priority,
      value);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v21, v22, v23);
    sub_B5D5C4(&long_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_21820/*"priority"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_23420/*"value"*/, v36, v37, v38);
    byte_42E77E4 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  dict = 0LL;
  *value = -1;
  if ( !BattleDeckServantData__tryGetSvtChange(this, &dict, *(const MethodInfo **)&priority) )
    goto LABEL_12;
  Item = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)dict;
  if ( !dict )
    goto LABEL_28;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dict,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_12:
    LOBYTE(Item) = 0;
    return (char)Item;
  }
  Item = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)dict;
  if ( !dict )
    goto LABEL_28;
  Item = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)dict,
                                                                                          (System_Type_o *)key,
                                                                                          (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    return (char)Item;
  v41 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v41 )
    goto LABEL_12;
  v42 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v41 - 1];
  if ( v42 != System_Collections_Generic_List_object__TypeInfo )
    Item = 0LL;
  if ( v42 != System_Collections_Generic_List_object__TypeInfo )
    goto LABEL_12;
  if ( !Item )
LABEL_28:
    sub_B5D69C(Item, v39);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v53,
    Item,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v54 = v53;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v54,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
      goto LABEL_26;
    current = v54.fields.current;
    if ( v54.fields.current )
    {
      v44 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v54.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (System_Collections_Generic_Dictionary_string__object__c *)v54.fields.current->klass->_2.typeHierarchy[v44 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        v45 = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B5D990(v54.fields.current);
LABEL_30:
        v45 = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B5D990(v45);
LABEL_31:
        sub_B5D69C(v45, v46);
      }
      v45 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v54.fields.current,
              (System_Type_o *)StringLiteral_21820/*"priority"*/,
              (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v45 )
        goto LABEL_31;
      if ( v45->klass->_1.element_class != long_TypeInfo->_1.element_class )
        goto LABEL_30;
      if ( *(_DWORD *)j_il2cpp_object_unbox_0(v45) == priority )
        break;
    }
  }
  v47 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)current,
          (System_Type_o *)StringLiteral_23420/*"value"*/,
          (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v47 )
    sub_B5D69C(0LL, v48);
  if ( v47->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *value = *(_QWORD *)j_il2cpp_object_unbox_0(v47);
LABEL_26:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v54,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    goto LABEL_27;
  }
  v49 = (void *)sub_B5D990(v47);
  if ( v50 != 1 )
    _Unwind_Resume(v49);
  v51 = *(_QWORD *)__cxa_begin_catch(v49);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v54,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v51 )
    sub_B5D668(v51, 0LL);
LABEL_27:
  LOBYTE(Item) = *value != -1;
  return (char)Item;
}


void __fastcall BattleDeckServantData___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7C1A & 1) == 0 )
  {
    sub_B5D5C4(&BattleDeckServantData___c_TypeInfo, v1, v2, v3);
    byte_42E7C1A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleDeckServantData___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleDeckServantData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall BattleDeckServantData___c___ctor(BattleDeckServantData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall BattleDeckServantData___c___GetScriptStringArrayParam_b__75_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}


int32_t __fastcall BattleDeckServantData___c___getChangeList_b__54_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x0

  if ( (byte_42E7C1E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)x, (_DWORD)method, v3);
    byte_42E7C1E = 1;
  }
  if ( x )
    v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v5 = 0LL;
  if ( !v5 )
    v5 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v5, 0LL);
}


int32_t __fastcall BattleDeckServantData___c___getShiftClearBuffIndiv_b__53_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x0

  if ( (byte_42E7C1D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)x, (_DWORD)method, v3);
    byte_42E7C1D = 1;
  }
  if ( x )
    v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v5 = 0LL;
  if ( !v5 )
    v5 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v5, 0LL);
}


int32_t __fastcall BattleDeckServantData___c___getShiftList_b__51_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x0

  if ( (byte_42E7C1C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)x, (_DWORD)method, v3);
    byte_42E7C1C = 1;
  }
  if ( x )
    v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v5 = 0LL;
  if ( !v5 )
    v5 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v5, 0LL);
}


int32_t __fastcall BattleDeckServantData___c___getSummonNpcId_b__50_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x0

  if ( (byte_42E7C1B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)x, (_DWORD)method, v3);
    byte_42E7C1B = 1;
  }
  if ( x )
    v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v5 = 0LL;
  if ( !v5 )
    v5 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v5, 0LL);
}