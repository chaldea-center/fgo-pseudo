void GachaDetailEntity___ctor(GachaDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938A6D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938A6D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t GachaDetailEntity__CreatePrimaryKey(GachaDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.gachaId;
}


System_String_o *GachaDetailEntity__GetConfirmBonusSelectSummonLowMsg(
        GachaDetailEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *v4; // x2

  if ( (byte_5938A6B & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3876/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/);
    sub_21FFC50(&StringLiteral_18987/*"confirmBonusSelectSummonLowMsg"*/);
    byte_5938A6B = 1;
  }
  script = this->fields.script;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3876/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, 0);
  return EntityScriptUtil__GetStringValue(script, (System_String_o *)StringLiteral_18987/*"confirmBonusSelectSummonLowMsg"*/, v4, 0);
}


System_String_o *GachaDetailEntity__GetConfirmBonusSelectSummonTitle(
        GachaDetailEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *v4; // x2

  if ( (byte_5938A6A & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3879/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/);
    sub_21FFC50(&StringLiteral_18988/*"confirmBonusSelectSummonTitle"*/);
    byte_5938A6A = 1;
  }
  script = this->fields.script;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3879/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/, 0);
  return EntityScriptUtil__GetStringValue(script, (System_String_o *)StringLiteral_18988/*"confirmBonusSelectSummonTitle"*/, v4, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t GachaDetailEntity__GetScriptInt(
        GachaDetailEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObj; // x0
  __int64 v6; // x2
  GachaDetailEntity_o *v8; // x0
  System_String_o *v9; // x1
  System_Int32_array *v10; // x2
  const MethodInfo *v11; // x3

  v4 = defVal;
  ScriptObj = GachaDetailEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, qword_594C090, v6);
  sub_220024C(ScriptObj, qword_594C090, v6);
  return (unsigned int)GachaDetailEntity__GetScriptIntArray(v8, v9, v10, v11);
}


System_Int32_array *GachaDetailEntity__GetScriptIntArray(
        GachaDetailEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ScriptObjList; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x19
  GachaDetailEntity___c_c *v10; // x0
  struct GachaDetailEntity___c_StaticFields *static_fields; // x8
  System_Converter_object__int__o *_9__8_0; // x20
  Il2CppObject *v13; // x21
  struct GachaDetailEntity___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_List_int__o *v21; // x0
  __int64 v22; // x1

  if ( (byte_5938A66 & 1) == 0 )
  {
    sub_21FFC50(&System_Converter_object__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_GachaDetailEntity___c__GetScriptIntArray_b__8_0__);
    sub_21FFC50(&GachaDetailEntity___c_TypeInfo);
    byte_5938A66 = 1;
  }
  ScriptObjList = GachaDetailEntity__GetScriptObjList(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjList )
    return defVal;
  v9 = ScriptObjList;
  v10 = GachaDetailEntity___c_TypeInfo;
  if ( !*(&GachaDetailEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GachaDetailEntity___c_TypeInfo, v8);
    v10 = GachaDetailEntity___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__8_0 = static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v8);
      static_fields = GachaDetailEntity___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Converter_object__int__o *)sub_21FFEBC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(_9__8_0, v13, Method_GachaDetailEntity___c__GetScriptIntArray_b__8_0__, 0);
    v14 = GachaDetailEntity___c_TypeInfo->static_fields;
    v14->__9__8_0 = _9__8_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__8_0, (int32_t)_9__8_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v9,
                                                    (System_Converter_T__TOutput__o *)_9__8_0,
                                                    (const MethodInfo_36A5754 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v21 )
    sub_21FFECC(0, v22);
  return System_Collections_Generic_List_int___ToArray(
           v21,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


Il2CppObject *GachaDetailEntity__GetScriptObj(
        GachaDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938A64 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5938A64 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  value = 0;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


System_Collections_Generic_List_object__o *GachaDetailEntity__GetScriptObjList(
        GachaDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *result; // x0
  __int64 v6; // x2
  __int64 naturalAligment; // x9
  GachaDetailEntity_o *v8; // x0
  System_String_o *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_5938A65 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    byte_5938A65 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)GachaDetailEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_220024C(result, System_Collections_Generic_List_object__TypeInfo, v6);
      return (System_Collections_Generic_List_object__o *)GachaDetailEntity__GetScriptInt(v8, v9, v10, v11);
    }
  }
  return result;
}


System_String_o *GachaDetailEntity__GetSummonBonusSelectDialogMessage(
        GachaDetailEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *v4; // x2

  if ( (byte_5938A68 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12921/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_25047/*"summonBonusSelectDialogMessage"*/);
    byte_5938A68 = 1;
  }
  script = this->fields.script;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_12921/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/, 0);
  return EntityScriptUtil__GetStringValue(script, (System_String_o *)StringLiteral_25047/*"summonBonusSelectDialogMessage"*/, v4, 0);
}


System_String_o *GachaDetailEntity__GetSummonBonusSelectMenuGuideMessage(
        GachaDetailEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *v4; // x2

  if ( (byte_5938A69 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_25048/*"summonBonusSelectMenuGuideMessage"*/);
    sub_21FFC50(&StringLiteral_12924/*"SUMMON_BONUS_SELECT_MENU_GUIDE_MESSAGE"*/);
    byte_5938A69 = 1;
  }
  script = this->fields.script;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_12924/*"SUMMON_BONUS_SELECT_MENU_GUIDE_MESSAGE"*/, 0);
  return EntityScriptUtil__GetStringValue(script, (System_String_o *)StringLiteral_25048/*"summonBonusSelectMenuGuideMessage"*/, v4, 0);
}


System_String_o *GachaDetailEntity__GetSummonBonusSelectWarningMsg(GachaDetailEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *v4; // x2

  if ( (byte_5938A6C & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_25049/*"summonBonusSelectWarningMsg"*/);
    sub_21FFC50(&StringLiteral_12926/*"SUMMON_BONUS_SELECT_WARNING_MSG"*/);
    byte_5938A6C = 1;
  }
  script = this->fields.script;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_12926/*"SUMMON_BONUS_SELECT_WARNING_MSG"*/, 0);
  return EntityScriptUtil__GetStringValue(script, (System_String_o *)StringLiteral_25049/*"summonBonusSelectWarningMsg"*/, v4, 0);
}


bool GachaDetailEntity__HasText(GachaDetailEntity_o *this, const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(this->fields.title, 0) || !System_String__IsNullOrEmpty(this->fields.message, 0);
}


bool GachaDetailEntity__IsPrivilegeSummon(GachaDetailEntity_o *this, int64_t *endedAt, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t ScriptInt; // w0
  __int64 v7; // x1
  int32_t v8; // w20
  __int64 v9; // x1
  Il2CppObject *Master_object; // x21
  _QWORD *p_image; // x0
  bool result; // w0
  int64_t v13; // [xsp+0h] [xbp-40h] BYREF
  UserPrivilegeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5938A67 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserPrivilegeMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23919/*"privilegeId"*/);
    byte_5938A67 = 1;
  }
  v13 = 0;
  entity = 0;
  ScriptInt = GachaDetailEntity__GetScriptInt(this, (System_String_o *)StringLiteral_23919/*"privilegeId"*/, -1, v3);
  if ( (ScriptInt & 0x80000000) == 0 )
  {
    v8 = ScriptInt;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserPrivilegeMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    p_image = &NetworkManager_TypeInfo->_1.image;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
      p_image = &NetworkManager_TypeInfo->_1.image;
    }
    if ( !Master_object )
      goto LABEL_18;
    if ( UserPrivilegeMaster__TryGetEntity(
           (UserPrivilegeMaster_o *)Master_object,
           &entity,
           *(_QWORD *)(p_image[23] + 64LL),
           v8,
           0) )
    {
      p_image = &entity->klass;
      if ( entity )
      {
        UserPrivilegeEntity__IsValidPeriod(entity, &v13, endedAt, 0, 0);
        return 1;
      }
LABEL_18:
      sub_21FFECC(p_image, v9);
    }
  }
  result = 0;
  *endedAt = 0;
  return result;
}


void GachaDetailEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938A6E & 1) == 0 )
  {
    sub_21FFC50(&GachaDetailEntity___c_TypeInfo);
    byte_5938A6E = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(GachaDetailEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GachaDetailEntity___c_TypeInfo->static_fields->__9 = (struct GachaDetailEntity___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)GachaDetailEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GachaDetailEntity___c___ctor(GachaDetailEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t GachaDetailEntity___c___GetScriptIntArray_b__8_0(
        GachaDetailEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_5938A6F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938A6F = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method,
                              method);
  else
    v4 = 0;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v4, 0);
}