void GachaDetailEntity___ctor(GachaDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C57025 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_int___ctor__);
    byte_4C57025 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33B0A74 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4C57023 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_3738/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/);
    sub_1C3E564(&StringLiteral_18230/*"confirmBonusSelectSummonLowMsg"*/);
    byte_4C57023 = 1;
  }
  script = this->fields.script;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3738/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, 0);
  return EntityScriptUtil__GetStringValue(script, (System_String_o *)StringLiteral_18230/*"confirmBonusSelectSummonLowMsg"*/, v4, 0);
}


System_String_o *GachaDetailEntity__GetConfirmBonusSelectSummonTitle(
        GachaDetailEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *v4; // x2

  if ( (byte_4C57022 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_3741/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/);
    sub_1C3E564(&StringLiteral_18231/*"confirmBonusSelectSummonTitle"*/);
    byte_4C57022 = 1;
  }
  script = this->fields.script;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3741/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/, 0);
  return EntityScriptUtil__GetStringValue(script, (System_String_o *)StringLiteral_18231/*"confirmBonusSelectSummonTitle"*/, v4, 0);
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
  __int64 v8; // x2
  __int64 v9; // x3
  GachaDetailEntity_o *v11; // x0
  System_String_o *v12; // x1
  System_Int32_array *v13; // x2
  const MethodInfo *v14; // x3

  v4 = defVal;
  if ( (byte_4C5701D & 1) == 0 )
  {
    sub_1C3E564(&long_TypeInfo);
    byte_4C5701D = 1;
  }
  ScriptObj = GachaDetailEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C3EA80(ScriptObj);
  return (unsigned int)GachaDetailEntity__GetScriptIntArray(v11, v12, v13, v14);
}


System_Int32_array *GachaDetailEntity__GetScriptIntArray(
        GachaDetailEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ScriptObjList; // x0
  System_Collections_Generic_List_object__o *v8; // x19
  GachaDetailEntity___c_c *v9; // x0
  System_Converter_object__int__o *_9__8_0; // x20
  Il2CppObject *v11; // x21
  struct GachaDetailEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_int__o *v15; // x0
  __int64 v16; // x1

  if ( (byte_4C5701E & 1) == 0 )
  {
    sub_1C3E564(&System_Converter_object__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_GachaDetailEntity___c__GetScriptIntArray_b__8_0__);
    sub_1C3E564(&GachaDetailEntity___c_TypeInfo);
    byte_4C5701E = 1;
  }
  ScriptObjList = GachaDetailEntity__GetScriptObjList(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjList )
    return defVal;
  v8 = ScriptObjList;
  v9 = GachaDetailEntity___c_TypeInfo;
  if ( !GachaDetailEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaDetailEntity___c_TypeInfo);
    v9 = GachaDetailEntity___c_TypeInfo;
  }
  _9__8_0 = v9->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = GachaDetailEntity___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__8_0 = (System_Converter_object__int__o *)sub_1C3E7B0(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(_9__8_0, v11, Method_GachaDetailEntity___c__GetScriptIntArray_b__8_0__, 0);
    static_fields = GachaDetailEntity___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = _9__8_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v13, v14);
  }
  v15 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v8,
                                                    (System_Converter_T__TOutput__o *)_9__8_0,
                                                    (const MethodInfo_3020F8C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v15 )
    sub_1C3E7C0(0, v16);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


Il2CppObject *GachaDetailEntity__GetScriptObj(
        GachaDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C5701B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4C5701B = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 naturalAligment; // x9
  GachaDetailEntity_o *v7; // x0
  System_String_o *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C5701C & 1) == 0 )
  {
    sub_1C3E564(&System_Collections_Generic_List_object__TypeInfo);
    byte_4C5701C = 1;
  }
  result = (System_Collections_Generic_List_object__o *)GachaDetailEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1C3EA80(result);
      return (System_Collections_Generic_List_object__o *)GachaDetailEntity__GetScriptInt(v7, v8, v9, v10);
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

  if ( (byte_4C57020 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_12429/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_23848/*"summonBonusSelectDialogMessage"*/);
    byte_4C57020 = 1;
  }
  script = this->fields.script;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_12429/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/, 0);
  return EntityScriptUtil__GetStringValue(script, (System_String_o *)StringLiteral_23848/*"summonBonusSelectDialogMessage"*/, v4, 0);
}


System_String_o *GachaDetailEntity__GetSummonBonusSelectMenuGuideMessage(
        GachaDetailEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *v4; // x2

  if ( (byte_4C57021 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_23849/*"summonBonusSelectMenuGuideMessage"*/);
    sub_1C3E564(&StringLiteral_12432/*"SUMMON_BONUS_SELECT_MENU_GUIDE_MESSAGE"*/);
    byte_4C57021 = 1;
  }
  script = this->fields.script;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_12432/*"SUMMON_BONUS_SELECT_MENU_GUIDE_MESSAGE"*/, 0);
  return EntityScriptUtil__GetStringValue(script, (System_String_o *)StringLiteral_23849/*"summonBonusSelectMenuGuideMessage"*/, v4, 0);
}


System_String_o *GachaDetailEntity__GetSummonBonusSelectWarningMsg(GachaDetailEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *v4; // x2

  if ( (byte_4C57024 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_23850/*"summonBonusSelectWarningMsg"*/);
    sub_1C3E564(&StringLiteral_12434/*"SUMMON_BONUS_SELECT_WARNING_MSG"*/);
    byte_4C57024 = 1;
  }
  script = this->fields.script;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_12434/*"SUMMON_BONUS_SELECT_WARNING_MSG"*/, 0);
  return EntityScriptUtil__GetStringValue(script, (System_String_o *)StringLiteral_23850/*"summonBonusSelectWarningMsg"*/, v4, 0);
}


bool GachaDetailEntity__HasText(GachaDetailEntity_o *this, const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(this->fields.title, 0) || !System_String__IsNullOrEmpty(this->fields.message, 0);
}


bool GachaDetailEntity__IsPrivilegeSummon(GachaDetailEntity_o *this, int64_t *endedAt, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t ScriptInt; // w0
  int32_t v7; // w20
  __int64 v8; // x1
  Il2CppObject *Master_object; // x21
  _QWORD *p_image; // x0
  bool result; // w0
  int64_t v12; // [xsp+0h] [xbp-40h] BYREF
  UserPrivilegeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C5701F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserPrivilegeMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&StringLiteral_22801/*"privilegeId"*/);
    byte_4C5701F = 1;
  }
  v12 = 0;
  entity = 0;
  ScriptInt = GachaDetailEntity__GetScriptInt(this, (System_String_o *)StringLiteral_22801/*"privilegeId"*/, -1, v3);
  if ( (ScriptInt & 0x80000000) == 0 )
  {
    v7 = ScriptInt;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserPrivilegeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C50AE2 )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C50AE2 = 1;
    }
    p_image = &NetworkManager_TypeInfo->_1.image;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      p_image = &NetworkManager_TypeInfo->_1.image;
    }
    if ( !Master_object )
      goto LABEL_18;
    if ( UserPrivilegeMaster__TryGetEntity(
           (UserPrivilegeMaster_o *)Master_object,
           &entity,
           *(_QWORD *)(p_image[23] + 64LL),
           v7,
           0) )
    {
      p_image = &entity->klass;
      if ( entity )
      {
        UserPrivilegeEntity__IsValidPeriod(entity, &v12, endedAt, 0, 0);
        return 1;
      }
LABEL_18:
      sub_1C3E7C0(p_image, v8);
    }
  }
  result = 0;
  *endedAt = 0;
  return result;
}


void GachaDetailEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C57026 & 1) == 0 )
  {
    sub_1C3E564(&GachaDetailEntity___c_TypeInfo);
    byte_4C57026 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(GachaDetailEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GachaDetailEntity___c_TypeInfo->static_fields->__9 = (struct GachaDetailEntity___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)GachaDetailEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C57027 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C57027 = 1;
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